# Cleaned MoveIt Servo Launch File (with commented duplicate parts)

from launch import LaunchDescription
from launch.actions import OpaqueFunction
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from uf_ros_lib.uf_robot_utils import load_yaml
from uf_ros_lib.moveit_configs_builder import MoveItConfigsBuilder
import os
from ament_index_python.packages import get_package_share_directory


def launch_setup(context, *args, **kwargs):
    from launch.substitutions import LaunchConfiguration

    dof = LaunchConfiguration('dof', default=7)
    robot_type = LaunchConfiguration('robot_type', default='xarm')
    prefix = LaunchConfiguration('prefix', default='')
    hw_ns = LaunchConfiguration('hw_ns', default='xarm')
    ros_namespace = LaunchConfiguration('ros_namespace', default='').perform(context)
    joystick_type = LaunchConfiguration('joystick_type', default=1)

    moveit_config = MoveItConfigsBuilder(
        context=context,
        robot_type=robot_type,
        dof=dof,
        hw_ns=hw_ns,
        prefix=prefix,
    ).to_moveit_configs()

    robot_description_parameters = {}
    robot_description_parameters.update(moveit_config.robot_description)
    robot_description_parameters.update(moveit_config.robot_description_semantic)
    robot_description_parameters.update(moveit_config.robot_description_kinematics)
    robot_description_parameters.update(moveit_config.joint_limits)
    robot_description_parameters.update(moveit_config.planning_pipelines)

    servo_yaml = load_yaml('xarm_moveit_servo', "config/xarm_moveit_servo_config.yaml")
    xarm_type = '{}{}'.format(robot_type.perform(context), dof.perform(context))
    xarm_traj_controller = '{}{}_traj_controller'.format(prefix.perform(context), xarm_type)
    servo_yaml['move_group_name'] = xarm_type
    servo_yaml['command_out_topic'] = '/{}/joint_trajectory'.format(xarm_traj_controller)
    servo_params = {"moveit_servo": servo_yaml}

    container = ComposableNodeContainer(
        name='xarm_moveit_servo_container',
        namespace='/',
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            # COMMENTED: Already launched in planner bringup
            # ComposableNode(
            #     package='robot_state_publisher',
            #     plugin='robot_state_publisher::RobotStatePublisher',
            #     name='robot_state_publisher',
            #     parameters=[robot_description_parameters],
            # ),
            # ComposableNode(
            #     package='tf2_ros',
            #     plugin='tf2_ros::StaticTransformBroadcasterNode',
            #     name='static_tf2_broadcaster',
            #     parameters=[{'child_frame_id': 'link_base', 'frame_id': 'world'}],
            # ),
            ComposableNode(
                package='moveit_servo',
                plugin='moveit_servo::ServoNode',
                name='servo_server',
                parameters=[servo_params, robot_description_parameters],
            ),
            ComposableNode(
                package='xarm_moveit_servo',
                plugin='xarm_moveit_servo::JoyToServoPub',
                name='joy_to_servo_node',
                parameters=[
                    servo_params,
                    {
                        'dof': dof,
                        'ros_queue_size': 10,
                        'joystick_type': joystick_type,
                    },
                ],
            ),
            ComposableNode(
                package='joy',
                plugin='joy::Joy',
                name='joy_node',
                parameters=[],
            ),
        ],
        output='screen',
    )

    return [
        container,

        # COMMENTED: already handled in planner bringup
        # joint_state_broadcaster,
        # ros2_control_launch,
        # traj_controller_node,
        # rviz_node,
        # RegisterEventHandler(
        #     event_handler=OnProcessExit(
        #         target_action=traj_controller_node,
        #         on_exit=container,
        #     )
        # ),
    ]


def generate_launch_description():
    return LaunchDescription([
        OpaqueFunction(function=launch_setup)
    ])
