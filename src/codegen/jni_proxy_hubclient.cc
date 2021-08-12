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

#include "jni_proxy_hubclient.h"

namespace jniproxy {

constexpr char HubClientClass::TypeName[];
constexpr char HubClientClass::Signature[];
constexpr char HubClientClass::TypeSignature[];

static HubClientClass* g_proxy_class = nullptr;

class HubClientImpl : public HubClientClass {
 public:
  HubClientImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<jboolean> registerDebuggee(
      jobject instance,
      jobject arg0
      ) override {
    jboolean rc =
        ::devtools::cdbg::jni()->CallBooleanMethod(
            instance,
        method_registerDebuggee_0_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.registerDebuggee",
        rc);
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > listActiveBreakpoints(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_listActiveBreakpoints_1_
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.listActiveBreakpoints",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> transmitBreakpointUpdate(
      jobject instance,
      const std::string& arg0,
      const std::string& arg1,
      const std::string& arg2
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_transmitBreakpointUpdate_2_,
        ::devtools::cdbg::JniToJavaString(arg0).get(),
        ::devtools::cdbg::JniToJavaString(arg1).get(),
        ::devtools::cdbg::JniToByteArray(arg2).get()
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.transmitBreakpointUpdate",
        nullptr);
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> registerBreakpointCanary(
      jobject instance,
      const std::string& arg0
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_registerBreakpointCanary_3_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.registerBreakpointCanary",
        nullptr);
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> approveBreakpointCanary(
      jobject instance,
      const std::string& arg0
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_approveBreakpointCanary_4_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.approveBreakpointCanary",
        nullptr);
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> shutdown(
      jobject instance
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_shutdown_5_
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.shutdown",
        nullptr);
  }

  ::devtools::cdbg::ExceptionOr<jboolean> isEnabled(
      jobject instance
      ) override {
    jboolean rc =
        ::devtools::cdbg::jni()->CallBooleanMethod(
            instance,
        method_isEnabled_6_
        );

    return ::devtools::cdbg::CatchOr(
        "HubClient.isEnabled",
        rc);
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient.registerDebuggee(java.util.Map) throws java.lang.Exception".
      method_registerDebuggee_0_ =
          cls_.GetInstanceMethod(
              "registerDebuggee",
              "(Ljava/util/Map;)Z");
      if (method_registerDebuggee_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method registerDebuggee not found";
        return false;
      }

      // Load "public abstract com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult com.google.devtools.cdbg.debuglets.java.HubClient.listActiveBreakpoints() throws java.lang.Exception".
      method_listActiveBreakpoints_1_ =
          cls_.GetInstanceMethod(
              "listActiveBreakpoints",
              "()Lcom/google/devtools/cdbg/debuglets/java/HubClient$ListActiveBreakpointsResult;");
      if (method_listActiveBreakpoints_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method listActiveBreakpoints not found";
        return false;
      }

      // Load "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.transmitBreakpointUpdate(java.lang.String,java.lang.String,byte[]) throws java.lang.Exception".
      method_transmitBreakpointUpdate_2_ =
          cls_.GetInstanceMethod(
              "transmitBreakpointUpdate",
              "(Ljava/lang/String;Ljava/lang/String;[B)V");
      if (method_transmitBreakpointUpdate_2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method transmitBreakpointUpdate not found";
        return false;
      }

      // Load "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.registerBreakpointCanary(java.lang.String) throws java.lang.Exception".
      method_registerBreakpointCanary_3_ =
          cls_.GetInstanceMethod(
              "registerBreakpointCanary",
              "(Ljava/lang/String;)V");
      if (method_registerBreakpointCanary_3_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method registerBreakpointCanary not found";
        return false;
      }

      // Load "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.approveBreakpointCanary(java.lang.String) throws java.lang.Exception".
      method_approveBreakpointCanary_4_ =
          cls_.GetInstanceMethod(
              "approveBreakpointCanary",
              "(Ljava/lang/String;)V");
      if (method_approveBreakpointCanary_4_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method approveBreakpointCanary not found";
        return false;
      }

      // Load "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.shutdown()".
      method_shutdown_5_ =
          cls_.GetInstanceMethod(
              "shutdown",
              "()V");
      if (method_shutdown_5_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method shutdown not found";
        return false;
      }

      // Load "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient.isEnabled() throws java.lang.Exception".
      method_isEnabled_6_ =
          cls_.GetInstanceMethod(
              "isEnabled",
              "()Z");
      if (method_isEnabled_6_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.HubClient"
                   << ", method isEnabled not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient.registerDebuggee(java.util.Map) throws java.lang.Exception".
  jmethodID method_registerDebuggee_0_ { nullptr };

  // Method ID of "public abstract com.google.devtools.cdbg.debuglets.java.HubClient$ListActiveBreakpointsResult com.google.devtools.cdbg.debuglets.java.HubClient.listActiveBreakpoints() throws java.lang.Exception".
  jmethodID method_listActiveBreakpoints_1_ { nullptr };

  // Method ID of "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.transmitBreakpointUpdate(java.lang.String,java.lang.String,byte[]) throws java.lang.Exception".
  jmethodID method_transmitBreakpointUpdate_2_ { nullptr };

  // Method ID of "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.registerBreakpointCanary(java.lang.String) throws java.lang.Exception".
  jmethodID method_registerBreakpointCanary_3_ { nullptr };

  // Method ID of "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.approveBreakpointCanary(java.lang.String) throws java.lang.Exception".
  jmethodID method_approveBreakpointCanary_4_ { nullptr };

  // Method ID of "public abstract void com.google.devtools.cdbg.debuglets.java.HubClient.shutdown()".
  jmethodID method_shutdown_5_ { nullptr };

  // Method ID of "public abstract boolean com.google.devtools.cdbg.debuglets.java.HubClient.isEnabled() throws java.lang.Exception".
  jmethodID method_isEnabled_6_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(HubClientImpl);
};


bool BindHubClient() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<HubClientImpl> proxy_class(new HubClientImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindHubClientWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<HubClientImpl> proxy_class(new HubClientImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectHubClient(HubClientClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupHubClient() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


HubClientClass* HubClient() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
