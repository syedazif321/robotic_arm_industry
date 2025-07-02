// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice
#include "msg_gazebo/srv/detail/attach_detach__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `model1`
// Member `link1`
// Member `model2`
// Member `link2`
#include "rosidl_runtime_c/string_functions.h"

bool
msg_gazebo__srv__AttachDetach_Request__init(msg_gazebo__srv__AttachDetach_Request * msg)
{
  if (!msg) {
    return false;
  }
  // model1
  if (!rosidl_runtime_c__String__init(&msg->model1)) {
    msg_gazebo__srv__AttachDetach_Request__fini(msg);
    return false;
  }
  // link1
  if (!rosidl_runtime_c__String__init(&msg->link1)) {
    msg_gazebo__srv__AttachDetach_Request__fini(msg);
    return false;
  }
  // model2
  if (!rosidl_runtime_c__String__init(&msg->model2)) {
    msg_gazebo__srv__AttachDetach_Request__fini(msg);
    return false;
  }
  // link2
  if (!rosidl_runtime_c__String__init(&msg->link2)) {
    msg_gazebo__srv__AttachDetach_Request__fini(msg);
    return false;
  }
  // attach
  return true;
}

void
msg_gazebo__srv__AttachDetach_Request__fini(msg_gazebo__srv__AttachDetach_Request * msg)
{
  if (!msg) {
    return;
  }
  // model1
  rosidl_runtime_c__String__fini(&msg->model1);
  // link1
  rosidl_runtime_c__String__fini(&msg->link1);
  // model2
  rosidl_runtime_c__String__fini(&msg->model2);
  // link2
  rosidl_runtime_c__String__fini(&msg->link2);
  // attach
}

bool
msg_gazebo__srv__AttachDetach_Request__are_equal(const msg_gazebo__srv__AttachDetach_Request * lhs, const msg_gazebo__srv__AttachDetach_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model1), &(rhs->model1)))
  {
    return false;
  }
  // link1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link1), &(rhs->link1)))
  {
    return false;
  }
  // model2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model2), &(rhs->model2)))
  {
    return false;
  }
  // link2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link2), &(rhs->link2)))
  {
    return false;
  }
  // attach
  if (lhs->attach != rhs->attach) {
    return false;
  }
  return true;
}

bool
msg_gazebo__srv__AttachDetach_Request__copy(
  const msg_gazebo__srv__AttachDetach_Request * input,
  msg_gazebo__srv__AttachDetach_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // model1
  if (!rosidl_runtime_c__String__copy(
      &(input->model1), &(output->model1)))
  {
    return false;
  }
  // link1
  if (!rosidl_runtime_c__String__copy(
      &(input->link1), &(output->link1)))
  {
    return false;
  }
  // model2
  if (!rosidl_runtime_c__String__copy(
      &(input->model2), &(output->model2)))
  {
    return false;
  }
  // link2
  if (!rosidl_runtime_c__String__copy(
      &(input->link2), &(output->link2)))
  {
    return false;
  }
  // attach
  output->attach = input->attach;
  return true;
}

msg_gazebo__srv__AttachDetach_Request *
msg_gazebo__srv__AttachDetach_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_gazebo__srv__AttachDetach_Request * msg = (msg_gazebo__srv__AttachDetach_Request *)allocator.allocate(sizeof(msg_gazebo__srv__AttachDetach_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_gazebo__srv__AttachDetach_Request));
  bool success = msg_gazebo__srv__AttachDetach_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_gazebo__srv__AttachDetach_Request__destroy(msg_gazebo__srv__AttachDetach_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_gazebo__srv__AttachDetach_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_gazebo__srv__AttachDetach_Request__Sequence__init(msg_gazebo__srv__AttachDetach_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_gazebo__srv__AttachDetach_Request * data = NULL;

  if (size) {
    data = (msg_gazebo__srv__AttachDetach_Request *)allocator.zero_allocate(size, sizeof(msg_gazebo__srv__AttachDetach_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_gazebo__srv__AttachDetach_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_gazebo__srv__AttachDetach_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_gazebo__srv__AttachDetach_Request__Sequence__fini(msg_gazebo__srv__AttachDetach_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_gazebo__srv__AttachDetach_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_gazebo__srv__AttachDetach_Request__Sequence *
msg_gazebo__srv__AttachDetach_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_gazebo__srv__AttachDetach_Request__Sequence * array = (msg_gazebo__srv__AttachDetach_Request__Sequence *)allocator.allocate(sizeof(msg_gazebo__srv__AttachDetach_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_gazebo__srv__AttachDetach_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_gazebo__srv__AttachDetach_Request__Sequence__destroy(msg_gazebo__srv__AttachDetach_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_gazebo__srv__AttachDetach_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_gazebo__srv__AttachDetach_Request__Sequence__are_equal(const msg_gazebo__srv__AttachDetach_Request__Sequence * lhs, const msg_gazebo__srv__AttachDetach_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_gazebo__srv__AttachDetach_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_gazebo__srv__AttachDetach_Request__Sequence__copy(
  const msg_gazebo__srv__AttachDetach_Request__Sequence * input,
  msg_gazebo__srv__AttachDetach_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_gazebo__srv__AttachDetach_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_gazebo__srv__AttachDetach_Request * data =
      (msg_gazebo__srv__AttachDetach_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_gazebo__srv__AttachDetach_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_gazebo__srv__AttachDetach_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_gazebo__srv__AttachDetach_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
msg_gazebo__srv__AttachDetach_Response__init(msg_gazebo__srv__AttachDetach_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    msg_gazebo__srv__AttachDetach_Response__fini(msg);
    return false;
  }
  return true;
}

void
msg_gazebo__srv__AttachDetach_Response__fini(msg_gazebo__srv__AttachDetach_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
msg_gazebo__srv__AttachDetach_Response__are_equal(const msg_gazebo__srv__AttachDetach_Response * lhs, const msg_gazebo__srv__AttachDetach_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
msg_gazebo__srv__AttachDetach_Response__copy(
  const msg_gazebo__srv__AttachDetach_Response * input,
  msg_gazebo__srv__AttachDetach_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

msg_gazebo__srv__AttachDetach_Response *
msg_gazebo__srv__AttachDetach_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_gazebo__srv__AttachDetach_Response * msg = (msg_gazebo__srv__AttachDetach_Response *)allocator.allocate(sizeof(msg_gazebo__srv__AttachDetach_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_gazebo__srv__AttachDetach_Response));
  bool success = msg_gazebo__srv__AttachDetach_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_gazebo__srv__AttachDetach_Response__destroy(msg_gazebo__srv__AttachDetach_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_gazebo__srv__AttachDetach_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_gazebo__srv__AttachDetach_Response__Sequence__init(msg_gazebo__srv__AttachDetach_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_gazebo__srv__AttachDetach_Response * data = NULL;

  if (size) {
    data = (msg_gazebo__srv__AttachDetach_Response *)allocator.zero_allocate(size, sizeof(msg_gazebo__srv__AttachDetach_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_gazebo__srv__AttachDetach_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_gazebo__srv__AttachDetach_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_gazebo__srv__AttachDetach_Response__Sequence__fini(msg_gazebo__srv__AttachDetach_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_gazebo__srv__AttachDetach_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_gazebo__srv__AttachDetach_Response__Sequence *
msg_gazebo__srv__AttachDetach_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_gazebo__srv__AttachDetach_Response__Sequence * array = (msg_gazebo__srv__AttachDetach_Response__Sequence *)allocator.allocate(sizeof(msg_gazebo__srv__AttachDetach_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_gazebo__srv__AttachDetach_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_gazebo__srv__AttachDetach_Response__Sequence__destroy(msg_gazebo__srv__AttachDetach_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_gazebo__srv__AttachDetach_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_gazebo__srv__AttachDetach_Response__Sequence__are_equal(const msg_gazebo__srv__AttachDetach_Response__Sequence * lhs, const msg_gazebo__srv__AttachDetach_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_gazebo__srv__AttachDetach_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_gazebo__srv__AttachDetach_Response__Sequence__copy(
  const msg_gazebo__srv__AttachDetach_Response__Sequence * input,
  msg_gazebo__srv__AttachDetach_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_gazebo__srv__AttachDetach_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_gazebo__srv__AttachDetach_Response * data =
      (msg_gazebo__srv__AttachDetach_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_gazebo__srv__AttachDetach_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_gazebo__srv__AttachDetach_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_gazebo__srv__AttachDetach_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
