from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    urdf_path = '/home/azif/robotic_arm_industry/xarm_description/urdf/linear_guide.urdf'
    yaml_path = '/home/azif/robotic_arm_industry/xarm_controller/config/linear_guide_controllers.yaml'

    return LaunchDescription([
        Node(
            package='controller_manager',
            executable='ros2_control_node',
            namespace='linear_guide',
            parameters=[
                {'robot_description': ParameterValue(Command(['cat ', urdf_path]), value_type=str)},
                yaml_path
            ],
            output='screen'
        ),
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=[
                '-entity', 'linear_guide',
                '-file', urdf_path,
                '-x', '-1.703185',
                '-y', '-1.169325',
                '-z', '-0.51552',
                '-Y', '-1.521203'
            ],
            output='screen'
        ),
        Node(
            package='controller_manager',
            executable='spawner',
            namespace='linear_guide',
            arguments=['joint_state_broadcaster'],
            output='screen'
        ),
        Node(
            package='controller_manager',
            executable='spawner',
            namespace='linear_guide',
            arguments=['lift_position_controller'],
            output='screen'
        )
    ])
