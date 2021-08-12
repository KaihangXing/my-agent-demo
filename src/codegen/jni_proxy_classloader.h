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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASSLOADER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASSLOADER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class ClassLoaderClass {
 public:
  static constexpr char TypeName[] = "java.lang.ClassLoader";
  static constexpr char Signature[] = "java/lang/ClassLoader";
  static constexpr char TypeSignature[] = "Ljava/lang/ClassLoader;";

  virtual ~ClassLoaderClass() {}

  // C++ equivalent of "java.lang.ClassLoader.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public static java.lang.ClassLoader java.lang.ClassLoader.getSystemClassLoader()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getSystemClassLoader(
      ) = 0;

  // Invokes "protected java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String,boolean) throws java.lang.ClassNotFoundException".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > loadClass(
      jobject instance,
      const std::string& arg0,
      jboolean arg1
      ) = 0;

  // Invokes "public java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String) throws java.lang.ClassNotFoundException".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > loadClass(
      jobject instance,
      const std::string& arg0
      ) = 0;
};

// Loads java.lang.ClassLoader Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindClassLoader();

// Loads java.lang.ClassLoader using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindClassLoaderWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectClassLoader(ClassLoaderClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupClassLoader();

// Gets the singleton instance of the proxy.
ClassLoaderClass* ClassLoader();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASSLOADER_H
