from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, SetEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    hw_ns = LaunchConfiguration('hw_ns', default='xarm')

    gazebo_model_path = PathJoinSubstitution([
        FindPackageShare('xarm_gazebo'),
        'worlds',
        'models'
    ])

    set_gazebo_model_path = SetEnvironmentVariable(
        name='GAZEBO_MODEL_PATH',
        value=gazebo_model_path
    )

    # Include the linear guide launch
    spawn_linear_guide = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('xarm_description'),
            '/launch/spawn_linear_guide.launch.py'
        ])
    )

    # Include the xarm planner launch
    xarm_planner_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('xarm_planner'),
            '/launch/xarm7_planner_gazebo.launch.py'
        ]),
        launch_arguments={'hw_ns': hw_ns}.items()
    )

    # Include MoveIt Servo fake
    moveit_servo_fake_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            FindPackageShare('xarm_moveit_servo'),
            '/launch/_robot_moveit_servo_fake.launch.py'
        ]),
        launch_arguments={'hw_ns': hw_ns}.items()
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'hw_ns',
            default_value='xarm',
            description='Hardware namespace for the robot'
        ),
        set_gazebo_model_path,
        spawn_linear_guide,
        xarm_planner_launch,
        moveit_servo_fake_launch
    ])
