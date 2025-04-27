// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msg:msg/A.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_msg/msg/a.hpp"


#ifndef MY_MSG__MSG__DETAIL__A__TRAITS_HPP_
#define MY_MSG__MSG__DETAIL__A__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_msg/msg/detail/a__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace my_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const A & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: str
  {
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const A & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: str
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "str: ";
    rosidl_generator_traits::value_to_yaml(msg.str, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const A & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_msg

namespace rosidl_generator_traits
{

[[deprecated("use my_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_msg::msg::A & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_msg::msg::A & msg)
{
  return my_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_msg::msg::A>()
{
  return "my_msg::msg::A";
}

template<>
inline const char * name<my_msg::msg::A>()
{
  return "my_msg/msg/A";
}

template<>
struct has_fixed_size<my_msg::msg::A>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_msg::msg::A>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_msg::msg::A>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MSG__MSG__DETAIL__A__TRAITS_HPP_
