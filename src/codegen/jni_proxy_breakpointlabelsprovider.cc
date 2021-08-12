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

#include "jni_proxy_breakpointlabelsprovider.h"

namespace jniproxy {

constexpr char BreakpointLabelsProviderClass::TypeName[];
constexpr char BreakpointLabelsProviderClass::Signature[];
constexpr char BreakpointLabelsProviderClass::TypeSignature[];

static BreakpointLabelsProviderClass* g_proxy_class = nullptr;

class BreakpointLabelsProviderImpl : public BreakpointLabelsProviderClass {
 public:
  BreakpointLabelsProviderImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.BreakpointLabelsProvider";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.BreakpointLabelsProvider";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > format(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_format_0_
        );

    return ::devtools::cdbg::CatchOr(
        "BreakpointLabelsProvider.format",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public abstract java.lang.String[] com.google.devtools.cdbg.debuglets.java.BreakpointLabelsProvider.format()".
      method_format_0_ =
          cls_.GetInstanceMethod(
              "format",
              "()[Ljava/lang/String;");
      if (method_format_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.BreakpointLabelsProvider"
                   << ", method format not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public abstract java.lang.String[] com.google.devtools.cdbg.debuglets.java.BreakpointLabelsProvider.format()".
  jmethodID method_format_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(BreakpointLabelsProviderImpl);
};


bool BindBreakpointLabelsProvider() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<BreakpointLabelsProviderImpl> proxy_class(new BreakpointLabelsProviderImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindBreakpointLabelsProviderWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<BreakpointLabelsProviderImpl> proxy_class(new BreakpointLabelsProviderImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectBreakpointLabelsProvider(BreakpointLabelsProviderClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupBreakpointLabelsProvider() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


BreakpointLabelsProviderClass* BreakpointLabelsProvider() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
