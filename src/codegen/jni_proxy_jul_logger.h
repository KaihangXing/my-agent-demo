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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JUL_LOGGER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JUL_LOGGER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class LoggerClass {
 public:
  static constexpr char TypeName[] = "java.util.logging.Logger";
  static constexpr char Signature[] = "java/util/logging/Logger";
  static constexpr char TypeSignature[] = "Ljava/util/logging/Logger;";

  virtual ~LoggerClass() {}

  // C++ equivalent of "java.util.logging.Logger.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public void java.util.logging.Logger.setLevel(java.util.logging.Level) throws java.lang.SecurityException".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> setLevel(
      jobject instance,
      jobject arg0
      ) = 0;

  // Invokes "public void java.util.logging.Logger.logp(java.util.logging.Level,java.lang.String,java.lang.String,java.lang.String)".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> logp(
      jobject instance,
      jobject arg0,
      const std::string& arg1,
      const std::string& arg2,
      const std::string& arg3
      ) = 0;
};

// Loads java.util.logging.Logger Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindLogger();

// Loads java.util.logging.Logger using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindLoggerWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectLogger(LoggerClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupLogger();

// Gets the singleton instance of the proxy.
LoggerClass* Logger();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JUL_LOGGER_H
