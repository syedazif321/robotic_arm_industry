#!/usr/bin/env python3

from threading import Thread, Event

import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node

from msg_gazebo.srv import AttachDetach
from sensor_msgs.msg import JointState
from geometry_msgs.msg import TwistStamped
import tf_transformations

from subprocess import Popen, PIPE, run
import os
import signal
import math
from std_srvs.srv import Trigger
from xarm_msgs.srv import PlanJoint, PlanExec
rclpy.init()

process = None

class Xarm7Controller(Node):
    def __init__(self):
        super().__init__("Xarm7Controller")
  
        self.attach_client = self.create_client(AttachDetach, '/AttachDetach')

        self.start_servo = self.create_client(Trigger, '/servo_node/start_servo')
        self.stop_servo = self.create_client(Trigger, '/servo_node/stop_servo')

        self.twist_publisher = self.create_publisher(TwistStamped, '/servo_node/delta_twist_cmds', 10)
        self.joint_state_demo_publisher = self.create_publisher(JointState, '/joint_states_demo', 10)

        # self.timer = self.create_timer(0.05, self.timer_callback)

        self.joint_plan_client = self.create_client(PlanJoint, '/xarm_joint_plan')
        self.exec_plan_client = self.create_client(PlanExec, '/xarm_exec_plan')

        self.subscription = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_listener_callback,
            10
        )
        self.joint_positions = None

        executor = rclpy.executors.MultiThreadedExecutor(2)
        executor.add_node(self)
        self.executor_thread = Thread(target=executor.spin, daemon=True, args=())
        self.executor_thread.start()

    def start_servo_node(self):
        if not self.start_servo.wait_for_service(timeout_sec=10.0):
            self.get_logger().error("Service /servo_node/start_servo not available.")
            return

        request = Trigger.Request()
        self.get_logger().info("Starting Servo Node")
        
        responce = self.start_servo.call(request)
        self.get_logger().info(f"Service call result: {responce.success}, {responce.message}")

    def stop_servo_node(self):
        if not self.stop_servo.wait_for_service(timeout_sec=10.0):
            self.get_logger().error("Service /servo_node/stop_servo not available.")
            return

        request = Trigger.Request()
        self.get_logger().info("Stopping Servo Node")
        self.stop_servo.call_async(request)
        responce = self.stop_servo.call(request)
        self.get_logger().info(f"Service call result: {responce.success}, {responce.message}")

    def joint_listener_callback(self, msg):
        joint_names = msg.name
        joint_positions = msg.position
        self.joint_order = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6', 'joint7']

        joint_dict = dict(zip(joint_names, joint_positions))

        # Create the final ordered list of positions
        final_positions = []
        for joint_name in self.joint_order:
            if joint_name in joint_dict:
                final_positions.append(round(joint_dict[joint_name], 6)) 
            else:
                final_positions.append(0.0)
        
        self.joint_positions = final_positions
    def get_joint_positions(self):
        if self.joint_positions:
            print("Joint ") 
            return self.joint_positions
        else:
            print("not available yet.") 
            return [0.0] * 7
            
        
    def eular_to_quat(self, eular):
        eular = list(map(math.radians, eular))
        return tf_transformations.quaternion_from_euler(eular[0], eular[1], eular[2])
    
    def quat_to_euler(self, quat):
        return list(map(math.degrees, tf_transformations.euler_from_quaternion(quat)))




    def move_to_joint_goal(self, joint_values):
        if not self.joint_plan_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().error("Joint Plan service not available.")
            return False, "Service unavailable"

        req = PlanJoint.Request()
        req.target = joint_values

        future = self.joint_plan_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)

        if future.result() is not None and future.result().success:
            self.get_logger().info("Planning succeeded.")
            return self.execute_plan()
        else:
            self.get_logger().error("Planning failed.")
            return False, "Planning failed"

    def execute_plan(self):
        if not self.exec_plan_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().error("Exec Plan service not available.")
            return False, "Execution service unavailable"

        exec_req = PlanExec.Request()
        exec_req.wait = True

        future_exec = self.exec_plan_client.call_async(exec_req)
        rclpy.spin_until_future_complete(self, future_exec)

        if future_exec.result() is not None:
            self.get_logger().info("Execution succeeded.")
            return True, "Executed"
        else:
            self.get_logger().error("Execution failed.")
            return False, "Execution failed"

    def call_attach_service(self, model2, link2):
        req = AttachDetach.Request()
        req.model1 = "UF_ROBOT"
        req.link1 = "link7"
        req.model2 = model2
        req.link2 = link2
        req.attach = True

        if self.attach_client.wait_for_service(timeout_sec=1.0):
            future = self.attach_client.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            res = future.result()
            return res.success, res.message
        return False, "Attach service not available"

    def call_detach_service(self, model2, link2):
        req = AttachDetach.Request()
        req.model1 = "UF_ROBOT"
        req.link1 = "link7"
        req.model2 = model2
        req.link2 = link2
        req.attach = False

        if self.attach_client.wait_for_service(timeout_sec=1.0):
            future = self.attach_client.call_async(req)
            rclpy.spin_until_future_complete(self, future)
            res = future.result()
            return res.success, res.message
        return False, "Detach service not available"
