import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/azif/xarm_ros2_simulation/install/uf_ros_lib'
