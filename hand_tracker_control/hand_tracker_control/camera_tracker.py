import cv2
import mediapipe as mp

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
        self.prev_hand_pos = None  # for trajectory line
        self.traj_points = []

    def start(self):
        pass

    def stop(self):
        self.cap.release()
        cv2.destroyAllWindows()

    def get_hand_position(self):
        """Return normalized (x, y) hand coordinates in [0,1]"""
        ret, frame = self.cap.read()
        if not ret:
            return None, None, frame

        frame = cv2.flip(frame, 1)
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.hands.process(rgb)

        if results.multi_hand_landmarks:
            hand = results.multi_hand_landmarks[0]
            # Use wrist as reference point
            x = hand.landmark[self.mp_hands.HandLandmark.WRIST].x
            y = hand.landmark[self.mp_hands.HandLandmark.WRIST].y

            # draw landmarks
            self.mp_draw.draw_landmarks(frame, hand, self.mp_hands.HAND_CONNECTIONS)

            # draw trajectory
            cx, cy = int(x*frame.shape[1]), int(y*frame.shape[0])
            if self.prev_hand_pos is not None:
                cv2.line(frame, self.prev_hand_pos, (cx, cy), (0,255,0), 2)
            self.prev_hand_pos = (cx, cy)

            return x, y, frame

        self.prev_hand_pos = None
        return None, None, frame

    def get_gesture(self, frame):
        """Return gesture string: 'thumbs_up' or 'none'"""
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.hands.process(rgb)
        if results.multi_hand_landmarks:
            hand = results.multi_hand_landmarks[0]
            thumb_tip_y = hand.landmark[self.mp_hands.HandLandmark.THUMB_TIP].y
            thumb_ip_y  = hand.landmark[self.mp_hands.HandLandmark.THUMB_IP].y
            index_mcp_y = hand.landmark[self.mp_hands.HandLandmark.INDEX_FINGER_MCP].y
            if thumb_tip_y < index_mcp_y and thumb_tip_y < thumb_ip_y:
                return "thumbs_up"
        return "none"
