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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_BIGINTEGER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_BIGINTEGER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class BigIntegerClass {
 public:
  static constexpr char TypeName[] = "java.math.BigInteger";
  static constexpr char Signature[] = "java/math/BigInteger";
  static constexpr char TypeSignature[] = "Ljava/math/BigInteger;";

  virtual ~BigIntegerClass() {}

  // C++ equivalent of "java.math.BigInteger.class" Java construct.
  virtual jclass GetClass() = 0;
};

// Loads java.math.BigInteger Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindBigInteger();

// Loads java.math.BigInteger using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindBigIntegerWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectBigInteger(BigIntegerClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupBigInteger();

// Gets the singleton instance of the proxy.
BigIntegerClass* BigInteger();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_BIGINTEGER_H
