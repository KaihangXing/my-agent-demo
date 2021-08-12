/**
 * Copyright 2015 Google Inc. All Rights Reserved.
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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_BIGDECIMAL_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_BIGDECIMAL_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class BigDecimalClass {
 public:
  static constexpr char TypeName[] = "java.math.BigDecimal";
  static constexpr char Signature[] = "java/math/BigDecimal";
  static constexpr char TypeSignature[] = "Ljava/math/BigDecimal;";

  virtual ~BigDecimalClass() {}

  // C++ equivalent of "java.math.BigDecimal.class" Java construct.
  virtual jclass GetClass() = 0;
};

// Loads java.math.BigDecimal Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindBigDecimal();

// Loads java.math.BigDecimal using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindBigDecimalWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectBigDecimal(BigDecimalClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupBigDecimal();

// Gets the singleton instance of the proxy.
BigDecimalClass* BigDecimal();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_BIGDECIMAL_H
