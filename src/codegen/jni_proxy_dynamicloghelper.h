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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_DYNAMICLOGHELPER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_DYNAMICLOGHELPER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class DynamicLogHelperClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.DynamicLogHelper";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/DynamicLogHelper";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/DynamicLogHelper;";

  virtual ~DynamicLogHelperClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public static java.util.logging.Logger com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getLogger()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getLogger(
      ) = 0;

  // Invokes "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getInfoLevel()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getInfoLevel(
      ) = 0;

  // Invokes "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getWarningLevel()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getWarningLevel(
      ) = 0;

  // Invokes "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getSevereLevel()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getSevereLevel(
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.DynamicLogHelper Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindDynamicLogHelper();

// Loads com.google.devtools.cdbg.debuglets.java.DynamicLogHelper using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindDynamicLogHelperWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectDynamicLogHelper(DynamicLogHelperClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupDynamicLogHelper();

// Gets the singleton instance of the proxy.
DynamicLogHelperClass* DynamicLogHelper();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_DYNAMICLOGHELPER_H
