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

#include "jni_proxy_throwable.h"

namespace jniproxy {

constexpr char ThrowableClass::TypeName[];
constexpr char ThrowableClass::Signature[];
constexpr char ThrowableClass::TypeSignature[];

static ThrowableClass* g_proxy_class = nullptr;

class ThrowableImpl : public ThrowableClass {
 public:
  ThrowableImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Throwable";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Throwable";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> printStackTrace(
      jobject instance,
      jobject arg0
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_printStackTrace_0_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "Throwable.printStackTrace",
        nullptr);
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public void java.lang.Throwable.printStackTrace(java.io.PrintWriter)".
      method_printStackTrace_0_ =
          cls_.GetInstanceMethod(
              "printStackTrace",
              "(Ljava/io/PrintWriter;)V");
      if (method_printStackTrace_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Throwable"
                   << ", method printStackTrace not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public void java.lang.Throwable.printStackTrace(java.io.PrintWriter)".
  jmethodID method_printStackTrace_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ThrowableImpl);
};


bool BindThrowable() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ThrowableImpl> proxy_class(new ThrowableImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindThrowableWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ThrowableImpl> proxy_class(new ThrowableImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectThrowable(ThrowableClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupThrowable() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ThrowableClass* Throwable() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
