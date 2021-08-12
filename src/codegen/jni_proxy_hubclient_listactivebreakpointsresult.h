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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_HUBCLIENT_LISTACTIVEBREAKPOINTSRESULT_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_HUBCLIENT_LISTACTIVEBREAKPOINTSRESULT_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class HubClient_ListActiveBreakpointsResultClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/HubClient$ListActiveBreakpointsResult";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/HubClient$ListActiveBreakpointsResult;";

  virtual ~HubClient_ListActiveBreakpointsResultClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getIsTimeout()".
  virtual ::devtools::cdbg::ExceptionOr<jboolean> getIsTimeout(
      jobject instance
      ) = 0;

  // Invokes "public abstract java.lang.String com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getFormat()".
  virtual ::devtools::cdbg::ExceptionOr<std::string> getFormat(
      jobject instance
      ) = 0;

  // Invokes "public abstract byte[][] com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getActiveBreakpoints()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getActiveBreakpoints(
      jobject instance
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindHubClient_ListActiveBreakpointsResult();

// Loads com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindHubClient_ListActiveBreakpointsResultWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectHubClient_ListActiveBreakpointsResult(HubClient_ListActiveBreakpointsResultClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupHubClient_ListActiveBreakpointsResult();

// Gets the singleton instance of the proxy.
HubClient_ListActiveBreakpointsResultClass* HubClient_ListActiveBreakpointsResult();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_HUBCLIENT_LISTACTIVEBREAKPOINTSRESULT_H
