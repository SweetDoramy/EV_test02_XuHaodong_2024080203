// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_msg:msg/A.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_msg/msg/a.h"


#ifndef MY_MSG__MSG__DETAIL__A__STRUCT_H_
#define MY_MSG__MSG__DETAIL__A__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'str'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/A in the package my_msg.
typedef struct my_msg__msg__A
{
  /// 格式为：类型 名称
  sensor_msgs__msg__Image image;
  rosidl_runtime_c__String str;
} my_msg__msg__A;

// Struct for a sequence of my_msg__msg__A.
typedef struct my_msg__msg__A__Sequence
{
  my_msg__msg__A * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_msg__msg__A__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_MSG__MSG__DETAIL__A__STRUCT_H_
