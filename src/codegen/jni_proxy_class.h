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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASS_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASS_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class ClassClass {
 public:
  static constexpr char TypeName[] = "java.lang.Class";
  static constexpr char Signature[] = "java/lang/Class";
  static constexpr char TypeSignature[] = "Ljava/lang/Class;";

  virtual ~ClassClass() {}

  // C++ equivalent of "java.lang.Class.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public static java.lang.Class java.lang.Class.forName(java.lang.String) throws java.lang.ClassNotFoundException".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > forName(
      const std::string& arg0
      ) = 0;

  // Invokes "public static java.lang.Class java.lang.Class.forName(java.lang.String,boolean,java.lang.ClassLoader) throws java.lang.ClassNotFoundException".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > forName(
      const std::string& arg0,
      jboolean arg1,
      jobject arg2
      ) = 0;
};

// Loads java.lang.Class Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindClass();

// Loads java.lang.Class using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindClassWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectClass(ClassClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupClass();

// Gets the singleton instance of the proxy.
ClassClass* Class();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASS_H
