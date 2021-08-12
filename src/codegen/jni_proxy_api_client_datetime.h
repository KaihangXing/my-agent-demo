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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_API_CLIENT_DATETIME_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_API_CLIENT_DATETIME_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class DateTimeClass {
 public:
  static constexpr char TypeName[] = "com.google.api.client.util.DateTime";
  static constexpr char Signature[] = "com/google/api/client/util/DateTime";
  static constexpr char TypeSignature[] = "Lcom/google/api/client/util/DateTime;";

  virtual ~DateTimeClass() {}

  // C++ equivalent of "com.google.api.client.util.DateTime.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public com.google.api.client.util.DateTime(boolean,long,java.lang.Integer)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jboolean arg0,
      jlong arg1,
      jobject arg2
      ) = 0;

  // Creates a new object "public com.google.api.client.util.DateTime(java.lang.String)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0
      ) = 0;

  // Creates a new object "public com.google.api.client.util.DateTime(java.util.Date)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) = 0;

  // Creates a new object "public com.google.api.client.util.DateTime(java.util.Date,java.util.TimeZone)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0,
      jobject arg1
      ) = 0;

  // Creates a new object "public com.google.api.client.util.DateTime(long)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jlong arg0
      ) = 0;

  // Creates a new object "public com.google.api.client.util.DateTime(long,int)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jlong arg0,
      jint arg1
      ) = 0;

  // Invokes "public static com.google.api.client.util.DateTime com.google.api.client.util.DateTime.parseRfc3339(java.lang.String)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > parseRfc3339(
      const std::string& arg0
      ) = 0;

  // Invokes "public java.lang.String com.google.api.client.util.DateTime.toStringRfc3339()".
  virtual ::devtools::cdbg::ExceptionOr<std::string> toStringRfc3339(
      jobject instance
      ) = 0;

  // Invokes "public long com.google.api.client.util.DateTime.getValue()".
  virtual ::devtools::cdbg::ExceptionOr<jlong> getValue(
      jobject instance
      ) = 0;
};

// Loads com.google.api.client.util.DateTime Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindDateTime();

// Loads com.google.api.client.util.DateTime using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindDateTimeWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectDateTime(DateTimeClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupDateTime();

// Gets the singleton instance of the proxy.
DateTimeClass* DateTime();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_API_CLIENT_DATETIME_H
