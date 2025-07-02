// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice

#ifndef MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__BUILDER_HPP_
#define MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_gazebo/srv/detail/attach_detach__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_gazebo
{

namespace srv
{

namespace builder
{

class Init_AttachDetach_Request_attach
{
public:
  explicit Init_AttachDetach_Request_attach(::msg_gazebo::srv::AttachDetach_Request & msg)
  : msg_(msg)
  {}
  ::msg_gazebo::srv::AttachDetach_Request attach(::msg_gazebo::srv::AttachDetach_Request::_attach_type arg)
  {
    msg_.attach = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Request msg_;
};

class Init_AttachDetach_Request_link2
{
public:
  explicit Init_AttachDetach_Request_link2(::msg_gazebo::srv::AttachDetach_Request & msg)
  : msg_(msg)
  {}
  Init_AttachDetach_Request_attach link2(::msg_gazebo::srv::AttachDetach_Request::_link2_type arg)
  {
    msg_.link2 = std::move(arg);
    return Init_AttachDetach_Request_attach(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Request msg_;
};

class Init_AttachDetach_Request_model2
{
public:
  explicit Init_AttachDetach_Request_model2(::msg_gazebo::srv::AttachDetach_Request & msg)
  : msg_(msg)
  {}
  Init_AttachDetach_Request_link2 model2(::msg_gazebo::srv::AttachDetach_Request::_model2_type arg)
  {
    msg_.model2 = std::move(arg);
    return Init_AttachDetach_Request_link2(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Request msg_;
};

class Init_AttachDetach_Request_link1
{
public:
  explicit Init_AttachDetach_Request_link1(::msg_gazebo::srv::AttachDetach_Request & msg)
  : msg_(msg)
  {}
  Init_AttachDetach_Request_model2 link1(::msg_gazebo::srv::AttachDetach_Request::_link1_type arg)
  {
    msg_.link1 = std::move(arg);
    return Init_AttachDetach_Request_model2(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Request msg_;
};

class Init_AttachDetach_Request_model1
{
public:
  Init_AttachDetach_Request_model1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttachDetach_Request_link1 model1(::msg_gazebo::srv::AttachDetach_Request::_model1_type arg)
  {
    msg_.model1 = std::move(arg);
    return Init_AttachDetach_Request_link1(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_gazebo::srv::AttachDetach_Request>()
{
  return msg_gazebo::srv::builder::Init_AttachDetach_Request_model1();
}

}  // namespace msg_gazebo


namespace msg_gazebo
{

namespace srv
{

namespace builder
{

class Init_AttachDetach_Response_message
{
public:
  explicit Init_AttachDetach_Response_message(::msg_gazebo::srv::AttachDetach_Response & msg)
  : msg_(msg)
  {}
  ::msg_gazebo::srv::AttachDetach_Response message(::msg_gazebo::srv::AttachDetach_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Response msg_;
};

class Init_AttachDetach_Response_success
{
public:
  Init_AttachDetach_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttachDetach_Response_message success(::msg_gazebo::srv::AttachDetach_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AttachDetach_Response_message(msg_);
  }

private:
  ::msg_gazebo::srv::AttachDetach_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_gazebo::srv::AttachDetach_Response>()
{
  return msg_gazebo::srv::builder::Init_AttachDetach_Response_success();
}

}  // namespace msg_gazebo

#endif  // MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__BUILDER_HPP_
