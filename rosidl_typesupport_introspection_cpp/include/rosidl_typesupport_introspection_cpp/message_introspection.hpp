// Copyright 2014 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __rosidl_typesupport_introspection_cpp__MessageIntrospection__h__
#define __rosidl_typesupport_introspection_cpp__MessageIntrospection__h__

#include <cstddef>
#include <cstdint>

#include <rosidl_generator_c/message_type_support.h>

#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosidl_typesupport_introspection_cpp
{

struct ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC MessageMembers;

typedef struct ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC MessageMember
{
  const char * name_;
  uint8_t type_id_;
  size_t string_upper_bound_;
  const rosidl_message_type_support_t * members_;
  bool is_array_;
  size_t array_size_;
  bool is_upper_bound_;
  unsigned long offset_;
  const void * default_value_;
  size_t(*size_function)(const void *);
  const void *(*get_const_function)(const void *, size_t index);
  void *(*get_function)(void *, size_t index);
  void(*resize_function)(void *, size_t size);
} MessageMember;

typedef struct ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC MessageMembers
{
  const char * package_name_;
  const char * message_name_;
  unsigned long member_count_;
  const MessageMember * members_;
} MessageMembers;

}  // namespace rosidl_typesupport_introspection_cpp

#endif  // __rosidl_typesupport_introspection_cpp__MessageIntrospection__h__
