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

#include "jni_proxy_gcpbreakpointlabelsprovider.h"

namespace jniproxy {

constexpr char GcpBreakpointLabelsProviderClass::TypeName[];
constexpr char GcpBreakpointLabelsProviderClass::Signature[];
constexpr char GcpBreakpointLabelsProviderClass::TypeSignature[];

static GcpBreakpointLabelsProviderClass* g_proxy_class = nullptr;

class GcpBreakpointLabelsProviderImpl : public GcpBreakpointLabelsProviderClass {
 public:
  GcpBreakpointLabelsProviderImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpBreakpointLabelsProvider";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpBreakpointLabelsProvider";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor0_
        ));

    return ::devtools::cdbg::CatchOr(
        "GcpBreakpointLabelsProvider.<init>",
        std::move(rc));
  }


 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "()V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpBreakpointLabelsProvider"
                   << ", constructor com.google.devtools.cdbg.debuglets.java.GcpBreakpointLabelsProvider() not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "com.google.devtools.cdbg.debuglets.java.GcpBreakpointLabelsProvider()".
  jmethodID constructor0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(GcpBreakpointLabelsProviderImpl);
};


bool BindGcpBreakpointLabelsProvider() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<GcpBreakpointLabelsProviderImpl> proxy_class(new GcpBreakpointLabelsProviderImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindGcpBreakpointLabelsProviderWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<GcpBreakpointLabelsProviderImpl> proxy_class(new GcpBreakpointLabelsProviderImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectGcpBreakpointLabelsProvider(GcpBreakpointLabelsProviderClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupGcpBreakpointLabelsProvider() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


GcpBreakpointLabelsProviderClass* GcpBreakpointLabelsProvider() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
