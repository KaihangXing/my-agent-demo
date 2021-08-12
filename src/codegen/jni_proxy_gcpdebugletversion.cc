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

#include "jni_proxy_gcpdebugletversion.h"

namespace jniproxy {

constexpr char GcpDebugletVersionClass::TypeName[];
constexpr char GcpDebugletVersionClass::Signature[];
constexpr char GcpDebugletVersionClass::TypeSignature[];

static GcpDebugletVersionClass* g_proxy_class = nullptr;

class GcpDebugletVersionImpl : public GcpDebugletVersionClass {
 public:
  GcpDebugletVersionImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpDebugletVersion";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpDebugletVersion";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<std::string> getVersion(
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_getVersion_0_
        );

    return ::devtools::cdbg::CatchOr(
        "GcpDebugletVersion.getVersion",
        ::devtools::cdbg::JniToNativeString(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public static java.lang.String com.google.devtools.cdbg.debuglets.java.GcpDebugletVersion.getVersion()".
      method_getVersion_0_ =
          cls_.GetStaticMethod(
              "getVersion",
              "()Ljava/lang/String;");
      if (method_getVersion_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpDebugletVersion"
                   << ", method getVersion not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public static java.lang.String com.google.devtools.cdbg.debuglets.java.GcpDebugletVersion.getVersion()".
  jmethodID method_getVersion_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(GcpDebugletVersionImpl);
};


bool BindGcpDebugletVersion() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<GcpDebugletVersionImpl> proxy_class(new GcpDebugletVersionImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindGcpDebugletVersionWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<GcpDebugletVersionImpl> proxy_class(new GcpDebugletVersionImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectGcpDebugletVersion(GcpDebugletVersionClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupGcpDebugletVersion() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


GcpDebugletVersionClass* GcpDebugletVersion() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
