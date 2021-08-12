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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_GCPHUBCLIENT_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_GCPHUBCLIENT_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class GcpHubClientClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.GcpHubClient";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/GcpHubClient";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/GcpHubClient;";

  virtual ~GcpHubClientClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.GcpHubClient.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public com.google.devtools.cdbg.debuglets.java.GcpHubClient()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      ) = 0;

  // Creates a new object "public com.google.devtools.cdbg.debuglets.java.GcpHubClient(java.net.URL,com.google.devtools.cdbg.debuglets.java.MetadataQuery,com.google.devtools.cdbg.debuglets.java.ClassPathLookup,java.util.Map)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0,
      jobject arg1,
      jobject arg2,
      jobject arg3
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.GcpHubClient Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindGcpHubClient();

// Loads com.google.devtools.cdbg.debuglets.java.GcpHubClient using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindGcpHubClientWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectGcpHubClient(GcpHubClientClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupGcpHubClient();

// Gets the singleton instance of the proxy.
GcpHubClientClass* GcpHubClient();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_GCPHUBCLIENT_H
