/*
 * Copyright 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CPP2C_HWUISPTYPE_H_
#define CPP2C_HWUISPTYPE_H_

#include "src/ICustomTypeBase.h"
#include "src/converters/TypeMetadata.h"
#include "src/customTypes/SharedPtrType.h"

namespace cpp2c {
namespace customType {

/**
 * Handles android::sp<T> smart pointers as seen in Hwui
 * see SharedPtrType
 */
class HwuiSpType final : public SharedPtrType {
 public:
  HwuiSpType();

 private:
  constexpr static const char* namespace_ = "android";
  constexpr static const char* name_ = "sp";
};
}  // namespace customType
}  // namespace cpp2c

#endif  // CPP2C_HWUISPTYPE_H_