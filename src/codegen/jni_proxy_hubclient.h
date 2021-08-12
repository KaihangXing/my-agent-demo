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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_HUBCLIENT_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_HUBCLIENT_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class HubClientClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.HubClient";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/HubClient";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/HubClient;";

  virtual ~HubClientClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.HubClient.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient.registerDebuggee(java.util.Map) throws java.lang.Exception".
  virtual ::devtools::cdbg::ExceptionOr<jboolean> registerDebuggee(
      jobject instance,
      jobject arg0
      ) = 0;

  // Invokes "public abstract com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult com.google.devtools.cdbg.debuglets.java.HubClient.listActiveBreakpoints() throws java.lang.Exception".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > listActiveBreakpoints(
      jobject instance
      ) = 0;

  // Invokes "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.transmitBreakpointUpdate(java.lang.String,java.lang.String,byte[]) throws java.lang.Exception".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> transmitBreakpointUpdate(
      jobject instance,
      const std::string& arg0,
      const std::string& arg1,
      const std::string& arg2
      ) = 0;

  // Invokes "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.registerBreakpointCanary(java.lang.String) throws java.lang.Exception".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> registerBreakpointCanary(
      jobject instance,
      const std::string& arg0
      ) = 0;

  // Invokes "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.approveBreakpointCanary(java.lang.String) throws java.lang.Exception".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> approveBreakpointCanary(
      jobject instance,
      const std::string& arg0
      ) = 0;

  // Invokes "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.shutdown()".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> shutdown(
      jobject instance
      ) = 0;

  // Invokes "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient.isEnabled() throws java.lang.Exception".
  virtual ::devtools::cdbg::ExceptionOr<jboolean> isEnabled(
      jobject instance
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.HubClient Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindHubClient();

// Loads com.google.devtools.cdbg.debuglets.java.HubClient using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindHubClientWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectHubClient(HubClientClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupHubClient();

// Gets the singleton instance of the proxy.
HubClientClass* HubClient();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_HUBCLIENT_H
