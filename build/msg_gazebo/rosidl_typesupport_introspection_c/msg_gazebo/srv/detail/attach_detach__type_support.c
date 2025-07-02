// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_gazebo/srv/detail/attach_detach__rosidl_typesupport_introspection_c.h"
#include "msg_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_gazebo/srv/detail/attach_detach__functions.h"
#include "msg_gazebo/srv/detail/attach_detach__struct.h"


// Include directives for member types
// Member `model1`
// Member `link1`
// Member `model2`
// Member `link2`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_gazebo__srv__AttachDetach_Request__init(message_memory);
}

void msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_fini_function(void * message_memory)
{
  msg_gazebo__srv__AttachDetach_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_member_array[5] = {
  {
    "model1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Request, model1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Request, link1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Request, model2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Request, link2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Request, attach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_members = {
  "msg_gazebo__srv",  // message namespace
  "AttachDetach_Request",  // message name
  5,  // number of fields
  sizeof(msg_gazebo__srv__AttachDetach_Request),
  msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_member_array,  // message members
  msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_type_support_handle = {
  0,
  &msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach_Request)() {
  if (!msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_type_support_handle.typesupport_identifier) {
    msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_gazebo__srv__AttachDetach_Request__rosidl_typesupport_introspection_c__AttachDetach_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_gazebo/srv/detail/attach_detach__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_gazebo/srv/detail/attach_detach__functions.h"
// already included above
// #include "msg_gazebo/srv/detail/attach_detach__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_gazebo__srv__AttachDetach_Response__init(message_memory);
}

void msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_fini_function(void * message_memory)
{
  msg_gazebo__srv__AttachDetach_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_gazebo__srv__AttachDetach_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_members = {
  "msg_gazebo__srv",  // message namespace
  "AttachDetach_Response",  // message name
  2,  // number of fields
  sizeof(msg_gazebo__srv__AttachDetach_Response),
  msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_member_array,  // message members
  msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_type_support_handle = {
  0,
  &msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach_Response)() {
  if (!msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_type_support_handle.typesupport_identifier) {
    msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_gazebo__srv__AttachDetach_Response__rosidl_typesupport_introspection_c__AttachDetach_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_gazebo/srv/detail/attach_detach__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_members = {
  "msg_gazebo__srv",  // service namespace
  "AttachDetach",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_Request_message_type_support_handle,
  NULL  // response message
  // msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_type_support_handle = {
  0,
  &msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_gazebo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach)() {
  if (!msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_type_support_handle.typesupport_identifier) {
    msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_gazebo, srv, AttachDetach_Response)()->data;
  }

  return &msg_gazebo__srv__detail__attach_detach__rosidl_typesupport_introspection_c__AttachDetach_service_type_support_handle;
}
