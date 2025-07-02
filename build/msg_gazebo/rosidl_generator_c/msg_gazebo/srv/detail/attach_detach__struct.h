// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice

#ifndef MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__STRUCT_H_
#define MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model1'
// Member 'link1'
// Member 'model2'
// Member 'link2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AttachDetach in the package msg_gazebo.
typedef struct msg_gazebo__srv__AttachDetach_Request
{
  rosidl_runtime_c__String model1;
  rosidl_runtime_c__String link1;
  rosidl_runtime_c__String model2;
  rosidl_runtime_c__String link2;
  /// True for attach, False for detach
  bool attach;
} msg_gazebo__srv__AttachDetach_Request;

// Struct for a sequence of msg_gazebo__srv__AttachDetach_Request.
typedef struct msg_gazebo__srv__AttachDetach_Request__Sequence
{
  msg_gazebo__srv__AttachDetach_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_gazebo__srv__AttachDetach_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AttachDetach in the package msg_gazebo.
typedef struct msg_gazebo__srv__AttachDetach_Response
{
  bool success;
  rosidl_runtime_c__String message;
} msg_gazebo__srv__AttachDetach_Response;

// Struct for a sequence of msg_gazebo__srv__AttachDetach_Response.
typedef struct msg_gazebo__srv__AttachDetach_Response__Sequence
{
  msg_gazebo__srv__AttachDetach_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_gazebo__srv__AttachDetach_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__STRUCT_H_
