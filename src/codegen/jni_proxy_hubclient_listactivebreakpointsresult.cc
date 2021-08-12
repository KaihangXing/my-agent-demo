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

//
// Generated code. Don't edit.
//

#include "jni_proxy_hubclient_listactivebreakpointsresult.h"

namespace jniproxy {

constexpr char HubClient_ListActiveBreakpointsResultClass::TypeName[];
constexpr char HubClient_ListActiveBreakpointsResultClass::Signature[];
constexpr char HubClient_ListActiveBreakpointsResultClass::TypeSignature[];

static HubClient_ListActiveBreakpointsResultClass* g_proxy_class = nullptr;

class HubClient_ListActiveBreakpointsResultImpl : public HubClient_ListActiveBreakpointsResultClass {
 public:
  HubClient_ListActiveBreakpointsResultImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<jboolean> getIsTimeout(
      jobject instance
      ) override {
    jboolean rc =
        ::devtools::cdbg::jni()->CallBooleanMethod(
            instance,
        method_getIsTimeout_0_
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient_ListActiveBreakpointsResult.getIsTimeout",
        rc);
  }

  ::devtools::cdbg::ExceptionOr<std::string> getFormat(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_getFormat_1_
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient_ListActiveBreakpointsResult.getFormat",
        ::devtools::cdbg::JniToNativeString(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getActiveBreakpoints(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_getActiveBreakpoints_2_
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient_ListActiveBreakpointsResult.getActiveBreakpoints",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getIsTimeout()".
      method_getIsTimeout_0_ =
          cls_.GetInstanceMethod(
              "getIsTimeout",
              "()Z");
      if (method_getIsTimeout_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult"
                   << ", method getIsTimeout not found";
        return false;
      }

      // Load "public abstract java.lang.String com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getFormat()".
      method_getFormat_1_ =
          cls_.GetInstanceMethod(
              "getFormat",
              "()Ljava/lang/String;");
      if (method_getFormat_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult"
                   << ", method getFormat not found";
        return false;
      }

      // Load "public abstract byte[][] com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getActiveBreakpoints()".
      method_getActiveBreakpoints_2_ =
          cls_.GetInstanceMethod(
              "getActiveBreakpoints",
              "()[[B");
      if (method_getActiveBreakpoints_2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult"
                   << ", method getActiveBreakpoints not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getIsTimeout()".
  jmethodID method_getIsTimeout_0_ { nullptr };

  // Method ID of "public abstract java.lang.String com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getFormat()".
  jmethodID method_getFormat_1_ { nullptr };

  // Method ID of "public abstract byte[][] com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult.getActiveBreakpoints()".
  jmethodID method_getActiveBreakpoints_2_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(HubClient_ListActiveBreakpointsResultImpl);
};


bool BindHubClient_ListActiveBreakpointsResult() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<HubClient_ListActiveBreakpointsResultImpl> proxy_class(new HubClient_ListActiveBreakpointsResultImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindHubClient_ListActiveBreakpointsResultWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<HubClient_ListActiveBreakpointsResultImpl> proxy_class(new HubClient_ListActiveBreakpointsResultImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectHubClient_ListActiveBreakpointsResult(HubClient_ListActiveBreakpointsResultClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupHubClient_ListActiveBreakpointsResult() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


HubClient_ListActiveBreakpointsResultClass* HubClient_ListActiveBreakpointsResult() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
