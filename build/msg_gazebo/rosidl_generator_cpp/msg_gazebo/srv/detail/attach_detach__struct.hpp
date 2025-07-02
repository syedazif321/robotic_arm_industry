// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice

#ifndef MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__STRUCT_HPP_
#define MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_gazebo__srv__AttachDetach_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_gazebo__srv__AttachDetach_Request __declspec(deprecated)
#endif

namespace msg_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachDetach_Request_
{
  using Type = AttachDetach_Request_<ContainerAllocator>;

  explicit AttachDetach_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model1 = "";
      this->link1 = "";
      this->model2 = "";
      this->link2 = "";
      this->attach = false;
    }
  }

  explicit AttachDetach_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model1(_alloc),
    link1(_alloc),
    model2(_alloc),
    link2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model1 = "";
      this->link1 = "";
      this->model2 = "";
      this->link2 = "";
      this->attach = false;
    }
  }

  // field types and members
  using _model1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model1_type model1;
  using _link1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link1_type link1;
  using _model2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model2_type model2;
  using _link2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link2_type link2;
  using _attach_type =
    bool;
  _attach_type attach;

  // setters for named parameter idiom
  Type & set__model1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model1 = _arg;
    return *this;
  }
  Type & set__link1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link1 = _arg;
    return *this;
  }
  Type & set__model2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model2 = _arg;
    return *this;
  }
  Type & set__link2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link2 = _arg;
    return *this;
  }
  Type & set__attach(
    const bool & _arg)
  {
    this->attach = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_gazebo__srv__AttachDetach_Request
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_gazebo__srv__AttachDetach_Request
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachDetach_Request_ & other) const
  {
    if (this->model1 != other.model1) {
      return false;
    }
    if (this->link1 != other.link1) {
      return false;
    }
    if (this->model2 != other.model2) {
      return false;
    }
    if (this->link2 != other.link2) {
      return false;
    }
    if (this->attach != other.attach) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachDetach_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachDetach_Request_

// alias to use template instance with default allocator
using AttachDetach_Request =
  msg_gazebo::srv::AttachDetach_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_gazebo


#ifndef _WIN32
# define DEPRECATED__msg_gazebo__srv__AttachDetach_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_gazebo__srv__AttachDetach_Response __declspec(deprecated)
#endif

namespace msg_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AttachDetach_Response_
{
  using Type = AttachDetach_Response_<ContainerAllocator>;

  explicit AttachDetach_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit AttachDetach_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_gazebo__srv__AttachDetach_Response
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_gazebo__srv__AttachDetach_Response
    std::shared_ptr<msg_gazebo::srv::AttachDetach_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttachDetach_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttachDetach_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttachDetach_Response_

// alias to use template instance with default allocator
using AttachDetach_Response =
  msg_gazebo::srv::AttachDetach_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_gazebo

namespace msg_gazebo
{

namespace srv
{

struct AttachDetach
{
  using Request = msg_gazebo::srv::AttachDetach_Request;
  using Response = msg_gazebo::srv::AttachDetach_Response;
};

}  // namespace srv

}  // namespace msg_gazebo

#endif  // MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__STRUCT_HPP_
