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

#include "jni_proxy_useridprovider.h"

namespace jniproxy {

constexpr char UserIdProviderClass::TypeName[];
constexpr char UserIdProviderClass::Signature[];
constexpr char UserIdProviderClass::TypeSignature[];

static UserIdProviderClass* g_proxy_class = nullptr;

class UserIdProviderImpl : public UserIdProviderClass {
 public:
  UserIdProviderImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.UserIdProvider";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.UserIdProvider";
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
        "UserIdProvider.format",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public abstract java.lang.String[] com.google.devtools.cdbg.debuglets.java.UserIdProvider.format()".
      method_format_0_ =
          cls_.GetInstanceMethod(
              "format",
              "()[Ljava/lang/String;");
      if (method_format_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.UserIdProvider"
                   << ", method format not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public abstract java.lang.String[] com.google.devtools.cdbg.debuglets.java.UserIdProvider.format()".
  jmethodID method_format_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(UserIdProviderImpl);
};


bool BindUserIdProvider() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<UserIdProviderImpl> proxy_class(new UserIdProviderImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindUserIdProviderWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<UserIdProviderImpl> proxy_class(new UserIdProviderImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectUserIdProvider(UserIdProviderClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupUserIdProvider() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


UserIdProviderClass* UserIdProvider() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
