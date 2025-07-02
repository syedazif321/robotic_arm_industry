// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_gazebo:srv/AttachDetach.idl
// generated code does not contain a copyright notice

#ifndef MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__TRAITS_HPP_
#define MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_gazebo/srv/detail/attach_detach__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const AttachDetach_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: model1
  {
    out << "model1: ";
    rosidl_generator_traits::value_to_yaml(msg.model1, out);
    out << ", ";
  }

  // member: link1
  {
    out << "link1: ";
    rosidl_generator_traits::value_to_yaml(msg.link1, out);
    out << ", ";
  }

  // member: model2
  {
    out << "model2: ";
    rosidl_generator_traits::value_to_yaml(msg.model2, out);
    out << ", ";
  }

  // member: link2
  {
    out << "link2: ";
    rosidl_generator_traits::value_to_yaml(msg.link2, out);
    out << ", ";
  }

  // member: attach
  {
    out << "attach: ";
    rosidl_generator_traits::value_to_yaml(msg.attach, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttachDetach_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model1: ";
    rosidl_generator_traits::value_to_yaml(msg.model1, out);
    out << "\n";
  }

  // member: link1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link1: ";
    rosidl_generator_traits::value_to_yaml(msg.link1, out);
    out << "\n";
  }

  // member: model2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model2: ";
    rosidl_generator_traits::value_to_yaml(msg.model2, out);
    out << "\n";
  }

  // member: link2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link2: ";
    rosidl_generator_traits::value_to_yaml(msg.link2, out);
    out << "\n";
  }

  // member: attach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attach: ";
    rosidl_generator_traits::value_to_yaml(msg.attach, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttachDetach_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use msg_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_gazebo::srv::AttachDetach_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_gazebo::srv::AttachDetach_Request & msg)
{
  return msg_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_gazebo::srv::AttachDetach_Request>()
{
  return "msg_gazebo::srv::AttachDetach_Request";
}

template<>
inline const char * name<msg_gazebo::srv::AttachDetach_Request>()
{
  return "msg_gazebo/srv/AttachDetach_Request";
}

template<>
struct has_fixed_size<msg_gazebo::srv::AttachDetach_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_gazebo::srv::AttachDetach_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_gazebo::srv::AttachDetach_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace msg_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const AttachDetach_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttachDetach_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttachDetach_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use msg_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_gazebo::srv::AttachDetach_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_gazebo::srv::AttachDetach_Response & msg)
{
  return msg_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_gazebo::srv::AttachDetach_Response>()
{
  return "msg_gazebo::srv::AttachDetach_Response";
}

template<>
inline const char * name<msg_gazebo::srv::AttachDetach_Response>()
{
  return "msg_gazebo/srv/AttachDetach_Response";
}

template<>
struct has_fixed_size<msg_gazebo::srv::AttachDetach_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_gazebo::srv::AttachDetach_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<msg_gazebo::srv::AttachDetach_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_gazebo::srv::AttachDetach>()
{
  return "msg_gazebo::srv::AttachDetach";
}

template<>
inline const char * name<msg_gazebo::srv::AttachDetach>()
{
  return "msg_gazebo/srv/AttachDetach";
}

template<>
struct has_fixed_size<msg_gazebo::srv::AttachDetach>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_gazebo::srv::AttachDetach_Request>::value &&
    has_fixed_size<msg_gazebo::srv::AttachDetach_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_gazebo::srv::AttachDetach>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_gazebo::srv::AttachDetach_Request>::value &&
    has_bounded_size<msg_gazebo::srv::AttachDetach_Response>::value
  >
{
};

template<>
struct is_service<msg_gazebo::srv::AttachDetach>
  : std::true_type
{
};

template<>
struct is_service_request<msg_gazebo::srv::AttachDetach_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_gazebo::srv::AttachDetach_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG_GAZEBO__SRV__DETAIL__ATTACH_DETACH__TRAITS_HPP_
