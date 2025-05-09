// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from my_msg:msg/A.idl
// generated code does not contain a copyright notice
#ifndef MY_MSG__MSG__DETAIL__A__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MY_MSG__MSG__DETAIL__A__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "my_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_msg/msg/detail/a__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
bool cdr_serialize_my_msg__msg__A(
  const my_msg__msg__A * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
bool cdr_deserialize_my_msg__msg__A(
  eprosima::fastcdr::Cdr &,
  my_msg__msg__A * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
size_t get_serialized_size_my_msg__msg__A(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
size_t max_serialized_size_my_msg__msg__A(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
bool cdr_serialize_key_my_msg__msg__A(
  const my_msg__msg__A * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
size_t get_serialized_size_key_my_msg__msg__A(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
size_t max_serialized_size_key_my_msg__msg__A(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msg, msg, A)();

#ifdef __cplusplus
}
#endif

#endif  // MY_MSG__MSG__DETAIL__A__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
