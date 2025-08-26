def map_to_joints(x, y, current_joints, joint_mins, joint_maxs):
    """
    Map normalized hand coordinates (x, y) to xArm7 joint angles.
    x: 0 (left) -> 1 (right)
    y: 0 (top) -> 1 (bottom)
    current_joints: list of current joint angles to preserve unchanged joints
    joint_mins, joint_maxs: lists of joint limits
    """
    # Joint 1: left-right rotation
    j1 = current_joints[0] + (x - 0.5) * (joint_maxs[0] - joint_mins[0]) * 0.5

    # Joint 2: vertical movement (up-down)
    j2 = current_joints[1] + (0.5 - y) * (joint_maxs[1] - joint_mins[1]) * 0.5

    # Joint 3: slight arm bend
    j3 = current_joints[2] + (0.5 - y) * (joint_maxs[2] - joint_mins[2]) * 0.3

    # Remaining joints stay mostly stable or predefined
    j4 = 0.0
    j5 = 1.0
    j6 = 0.0
    j7 = 0.0

    # Clamp all joints to URDF limits
    joints = [
        max(joint_mins[i], min(j, joint_maxs[i]))
        for i, j in enumerate([j1, j2, j3, j4, j5, j6, j7])
    ]

    return joints
