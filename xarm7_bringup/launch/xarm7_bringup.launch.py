from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    hw_ns = LaunchConfiguration('hw_ns', default='xarm')

    # Include the xarm_planner launch
    xarm_planner_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('xarm_planner'),
                'launch',
                'xarm7_planner_gazebo.launch.py'
            ])
        ),
        launch_arguments={
            'hw_ns': hw_ns
        }.items(),
    )

    # Include the MoveIt Servo Fake launch
    moveit_servo_fake_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('xarm_moveit_servo'),
                'launch',
                '_robot_moveit_servo_fake.launch.py'
            ])
        ),
        launch_arguments={
            'hw_ns': hw_ns
        }.items(),
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'hw_ns',
            default_value='xarm',
            description='Hardware namespace for the robot'
        ),
        xarm_planner_launch,
        moveit_servo_fake_launch
    ])
