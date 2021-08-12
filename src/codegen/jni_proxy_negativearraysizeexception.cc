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

#include "jni_proxy_negativearraysizeexception.h"

namespace jniproxy {

constexpr char NegativeArraySizeExceptionClass::TypeName[];
constexpr char NegativeArraySizeExceptionClass::Signature[];
constexpr char NegativeArraySizeExceptionClass::TypeSignature[];

static NegativeArraySizeExceptionClass* g_proxy_class = nullptr;

class NegativeArraySizeExceptionImpl : public NegativeArraySizeExceptionClass {
 public:
  NegativeArraySizeExceptionImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.NegativeArraySizeException";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.NegativeArraySizeException";
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
        "NegativeArraySizeException.<init>",
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
        LOG(ERROR) << "Failed to load Java class java.lang.NegativeArraySizeException"
                   << ", constructor public java.lang.NegativeArraySizeException() not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public java.lang.NegativeArraySizeException()".
  jmethodID constructor0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(NegativeArraySizeExceptionImpl);
};


bool BindNegativeArraySizeException() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<NegativeArraySizeExceptionImpl> proxy_class(new NegativeArraySizeExceptionImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindNegativeArraySizeExceptionWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<NegativeArraySizeExceptionImpl> proxy_class(new NegativeArraySizeExceptionImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectNegativeArraySizeException(NegativeArraySizeExceptionClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupNegativeArraySizeException() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


NegativeArraySizeExceptionClass* NegativeArraySizeException() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
