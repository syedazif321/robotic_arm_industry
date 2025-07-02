// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice

#ifndef MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__FUNCTIONS_H_
#define MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_gazebo/msg/rosidl_generator_c__visibility_control.h"

#include "msg_gazebo/srv/detail/attach_detach__struct.h"

/// Initialize srv/AttachDetach message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_gazebo__srv__AttachDetach_Request
 * )) before or use
 * msg_gazebo__srv__AttachDetach_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Request__init(msg_gazebo__srv__AttachDetach_Request * msg);

/// Finalize srv/AttachDetach message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Request__fini(msg_gazebo__srv__AttachDetach_Request * msg);

/// Create srv/AttachDetach message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_gazebo__srv__AttachDetach_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
msg_gazebo__srv__AttachDetach_Request *
msg_gazebo__srv__AttachDetach_Request__create();

/// Destroy srv/AttachDetach message.
/**
 * It calls
 * msg_gazebo__srv__AttachDetach_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Request__destroy(msg_gazebo__srv__AttachDetach_Request * msg);

/// Check for srv/AttachDetach message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Request__are_equal(const msg_gazebo__srv__AttachDetach_Request * lhs, const msg_gazebo__srv__AttachDetach_Request * rhs);

/// Copy a srv/AttachDetach message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Request__copy(
  const msg_gazebo__srv__AttachDetach_Request * input,
  msg_gazebo__srv__AttachDetach_Request * output);

/// Initialize array of srv/AttachDetach messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_gazebo__srv__AttachDetach_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Request__Sequence__init(msg_gazebo__srv__AttachDetach_Request__Sequence * array, size_t size);

/// Finalize array of srv/AttachDetach messages.
/**
 * It calls
 * msg_gazebo__srv__AttachDetach_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Request__Sequence__fini(msg_gazebo__srv__AttachDetach_Request__Sequence * array);

/// Create array of srv/AttachDetach messages.
/**
 * It allocates the memory for the array and calls
 * msg_gazebo__srv__AttachDetach_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
msg_gazebo__srv__AttachDetach_Request__Sequence *
msg_gazebo__srv__AttachDetach_Request__Sequence__create(size_t size);

/// Destroy array of srv/AttachDetach messages.
/**
 * It calls
 * msg_gazebo__srv__AttachDetach_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Request__Sequence__destroy(msg_gazebo__srv__AttachDetach_Request__Sequence * array);

/// Check for srv/AttachDetach message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Request__Sequence__are_equal(const msg_gazebo__srv__AttachDetach_Request__Sequence * lhs, const msg_gazebo__srv__AttachDetach_Request__Sequence * rhs);

/// Copy an array of srv/AttachDetach messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Request__Sequence__copy(
  const msg_gazebo__srv__AttachDetach_Request__Sequence * input,
  msg_gazebo__srv__AttachDetach_Request__Sequence * output);

/// Initialize srv/AttachDetach message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_gazebo__srv__AttachDetach_Response
 * )) before or use
 * msg_gazebo__srv__AttachDetach_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Response__init(msg_gazebo__srv__AttachDetach_Response * msg);

/// Finalize srv/AttachDetach message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Response__fini(msg_gazebo__srv__AttachDetach_Response * msg);

/// Create srv/AttachDetach message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_gazebo__srv__AttachDetach_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
msg_gazebo__srv__AttachDetach_Response *
msg_gazebo__srv__AttachDetach_Response__create();

/// Destroy srv/AttachDetach message.
/**
 * It calls
 * msg_gazebo__srv__AttachDetach_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Response__destroy(msg_gazebo__srv__AttachDetach_Response * msg);

/// Check for srv/AttachDetach message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Response__are_equal(const msg_gazebo__srv__AttachDetach_Response * lhs, const msg_gazebo__srv__AttachDetach_Response * rhs);

/// Copy a srv/AttachDetach message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Response__copy(
  const msg_gazebo__srv__AttachDetach_Response * input,
  msg_gazebo__srv__AttachDetach_Response * output);

/// Initialize array of srv/AttachDetach messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_gazebo__srv__AttachDetach_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Response__Sequence__init(msg_gazebo__srv__AttachDetach_Response__Sequence * array, size_t size);

/// Finalize array of srv/AttachDetach messages.
/**
 * It calls
 * msg_gazebo__srv__AttachDetach_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Response__Sequence__fini(msg_gazebo__srv__AttachDetach_Response__Sequence * array);

/// Create array of srv/AttachDetach messages.
/**
 * It allocates the memory for the array and calls
 * msg_gazebo__srv__AttachDetach_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
msg_gazebo__srv__AttachDetach_Response__Sequence *
msg_gazebo__srv__AttachDetach_Response__Sequence__create(size_t size);

/// Destroy array of srv/AttachDetach messages.
/**
 * It calls
 * msg_gazebo__srv__AttachDetach_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
void
msg_gazebo__srv__AttachDetach_Response__Sequence__destroy(msg_gazebo__srv__AttachDetach_Response__Sequence * array);

/// Check for srv/AttachDetach message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Response__Sequence__are_equal(const msg_gazebo__srv__AttachDetach_Response__Sequence * lhs, const msg_gazebo__srv__AttachDetach_Response__Sequence * rhs);

/// Copy an array of srv/AttachDetach messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_gazebo
bool
msg_gazebo__srv__AttachDetach_Response__Sequence__copy(
  const msg_gazebo__srv__AttachDetach_Response__Sequence * input,
  msg_gazebo__srv__AttachDetach_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__FUNCTIONS_H_
