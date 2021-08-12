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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_STRING_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_STRING_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class StringClass {
 public:
  static constexpr char TypeName[] = "java.lang.String";
  static constexpr char Signature[] = "java/lang/String";
  static constexpr char TypeSignature[] = "Ljava/lang/String;";

  virtual ~StringClass() {}

  // C++ equivalent of "java.lang.String.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public static java.lang.String java.lang.String.valueOf(int)".
  virtual ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jint arg0
      ) = 0;

  // Invokes "public static java.lang.String java.lang.String.valueOf(long)".
  virtual ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jlong arg0
      ) = 0;

  // Invokes "public static java.lang.String java.lang.String.valueOf(float)".
  virtual ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jfloat arg0
      ) = 0;

  // Invokes "public static java.lang.String java.lang.String.valueOf(double)".
  virtual ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jdouble arg0
      ) = 0;
};

// Loads java.lang.String Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindString();

// Loads java.lang.String using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindStringWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectString(StringClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupString();

// Gets the singleton instance of the proxy.
StringClass* String();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_STRING_H
