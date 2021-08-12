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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_USERIDPROVIDER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_USERIDPROVIDER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class UserIdProviderClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.UserIdProvider";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/UserIdProvider";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/UserIdProvider;";

  virtual ~UserIdProviderClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.UserIdProvider.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public abstract java.lang.String[] com.google.devtools.cdbg.debuglets.java.UserIdProvider.format()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > format(
      jobject instance
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.UserIdProvider Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindUserIdProvider();

// Loads com.google.devtools.cdbg.debuglets.java.UserIdProvider using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindUserIdProviderWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectUserIdProvider(UserIdProviderClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupUserIdProvider();

// Gets the singleton instance of the proxy.
UserIdProviderClass* UserIdProvider();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_USERIDPROVIDER_H
