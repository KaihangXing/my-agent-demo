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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_ARITHMETICEXCEPTION_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_ARITHMETICEXCEPTION_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class ArithmeticExceptionClass {
 public:
  static constexpr char TypeName[] = "java.lang.ArithmeticException";
  static constexpr char Signature[] = "java/lang/ArithmeticException";
  static constexpr char TypeSignature[] = "Ljava/lang/ArithmeticException;";

  virtual ~ArithmeticExceptionClass() {}

  // C++ equivalent of "java.lang.ArithmeticException.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public java.lang.ArithmeticException()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      ) = 0;

  // Creates a new object "public java.lang.ArithmeticException(java.lang.String)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0
      ) = 0;
};

// Loads java.lang.ArithmeticException Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindArithmeticException();

// Loads java.lang.ArithmeticException using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindArithmeticExceptionWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectArithmeticException(ArithmeticExceptionClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupArithmeticException();

// Gets the singleton instance of the proxy.
ArithmeticExceptionClass* ArithmeticException();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_ARITHMETICEXCEPTION_H