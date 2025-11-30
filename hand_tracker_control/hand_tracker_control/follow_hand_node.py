# follow_hand_node.py
import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import cv2
import mediapipe as mp
import time
import numpy as np

def clamp(val, min_val, max_val):
    return max(min_val, min(val, max_val))

class CameraTracker:
    def __init__(self):
        self.cap = cv2.VideoCapture(0)
        self.mp_hands = mp.solutions.hands
        self.hands = self.mp_hands.Hands(
            max_num_hands=1,
            min_detection_confidence=0.7,
            min_tracking_confidence=0.5
        )
        self.mp_draw = mp.solutions.drawing_utils

    def start(self):
        pass

    def stop(self):
        self.cap.release()
        cv2.destroyAllWindows()

    def get_hand_position_and_gesture(self):
        ret, frame = self.cap.read()
        if not ret:
            return None, None, None
        frame = cv2.flip(frame, 1)
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.hands.process(rgb)
        gesture = "none"
        if results.multi_hand_landmarks:
            hand = results.multi_hand_landmarks[0]
            self.mp_draw.draw_landmarks(frame, hand, self.mp_hands.HAND_CONNECTIONS)

            # normalized x,y of hand center
            x = np.mean([lm.x for lm in hand.landmark])
            y = np.mean([lm.y for lm in hand.landmark])

            # thumbs-up detection
            thumb_tip_y = hand.landmark[self.mp_hands.HandLandmark.THUMB_TIP].y
            thumb_ip_y  = hand.landmark[self.mp_hands.HandLandmark.THUMB_IP].y
            index_mcp_y = hand.landmark[self.mp_hands.HandLandmark.INDEX_FINGER_MCP].y
            if thumb_tip_y < index_mcp_y and thumb_tip_y < thumb_ip_y:
                gesture = "thumbs_up"

            return x, y, gesture, frame
        return None, None, None, frame

class HandFollower(Node):
    def __init__(self):
        super().__init__("gesture_follower_node")

        self.publisher = self.create_publisher(
            JointTrajectory, "/xarm7_traj_controller/joint_trajectory", 10
        )

        self.tracker = CameraTracker()
        self.tracker.start()

        # Rate
        self.rate_hz = 15

        # Joint limits from URDF
        self.joint_mins = [-6.283, -2.059, -6.283, -0.19198, -6.283, -1.69297, -6.283]
        self.joint_maxs = [ 6.283,  2.094,  6.283,  3.927,  6.283,  3.14159, 6.283]

        # Poses
        self.look_pose = [0.1388, -0.3541, -0.1744, 1.4426, -0.0617, 1.7915, -0.0254]
        self.up_pose   = [0.1991, 0.1507, -0.1847, 1.3080, 0.0300, 1.1600, 0.0175]

        # Current joint state
        self.current_joints = self.look_pose.copy()
        self.send_joint_command(self.look_pose, 2.0)
        self.get_logger().info("Robot moved to LOOK POSE")
        time.sleep(2)

    def send_joint_command(self, joint_positions, duration=1.0):
        joint_positions = [clamp(j, self.joint_mins[i], self.joint_maxs[i])
                           for i, j in enumerate(joint_positions)]
        traj = JointTrajectory()
        traj.joint_names = ["joint1","joint2","joint3","joint4","joint5","joint6","joint7"]
        pt = JointTrajectoryPoint()
        pt.positions = joint_positions
        pt.time_from_start.sec = int(duration)
        traj.points.append(pt)
        self.publisher.publish(traj)
        self.current_joints = joint_positions

    def map_hand_to_joints(self, x, y):
        # Simple scaling: x moves joints 1, y moves joints 2 & 4
        scale_x = (self.joint_maxs[0] - self.joint_mins[0])
        scale_y2 = (self.joint_maxs[1] - self.joint_mins[1])
        scale_y4 = (self.joint_maxs[3] - self.joint_mins[3])

        joint1 = self.joint_mins[0] + x * scale_x
        joint2 = self.joint_mins[1] + (1 - y) * scale_y2
        joint3 = self.current_joints[2]  # keep same
        joint4 = self.joint_mins[3] + (1 - y) * scale_y4
        joint5 = self.current_joints[4]
        joint6 = self.current_joints[5]
        joint7 = self.current_joints[6]

        return [joint1, joint2, joint3, joint4, joint5, joint6, joint7]

    def run(self):
        self.get_logger().info("Gesture-based control started...")
        try:
            while rclpy.ok():
                x, y, gesture, frame = self.tracker.get_hand_position_and_gesture()

                if gesture == "thumbs_up":
                    self.send_joint_command(self.up_pose, 1.5)
                elif x is not None and y is not None:
                    joint_pos = self.map_hand_to_joints(x, y)
                    self.send_joint_command(joint_pos, 0.5)

                # Draw info
                if frame is not None:
                    cv2.putText(frame, f"Gesture: {gesture}", (10, 30),
                                cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)
                    cv2.imshow("Hand Tracking", frame)
                    cv2.waitKey(1)

                time.sleep(1.0 / self.rate_hz)

        except KeyboardInterrupt:
            self.tracker.stop()
            self.get_logger().info("Stopped Hand Tracking")

def main(args=None):
    rclpy.init(args=args)
    node = HandFollower()
    node.run()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
