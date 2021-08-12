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

#include "jni_proxy_exception.h"

namespace jniproxy {

constexpr char ExceptionClass::TypeName[];
constexpr char ExceptionClass::Signature[];
constexpr char ExceptionClass::TypeSignature[];

static ExceptionClass* g_proxy_class = nullptr;

class ExceptionImpl : public ExceptionClass {
 public:
  ExceptionImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Exception";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Exception";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0,
      jobject arg1,
      jboolean arg2,
      jboolean arg3
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor0_,
        ::devtools::cdbg::JniToJavaString(arg0).get(),
        arg1,
        arg2,
        arg3
        ));

    return ::devtools::cdbg::CatchOr(
        "Exception.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor1_
        ));

    return ::devtools::cdbg::CatchOr(
        "Exception.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor2_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        ));

    return ::devtools::cdbg::CatchOr(
        "Exception.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0,
      jobject arg1
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor3_,
        ::devtools::cdbg::JniToJavaString(arg0).get(),
        arg1
        ));

    return ::devtools::cdbg::CatchOr(
        "Exception.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor4_,
        arg0
        ));

    return ::devtools::cdbg::CatchOr(
        "Exception.<init>",
        std::move(rc));
  }


 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Exception"
                   << ", constructor protected java.lang.Exception(java.lang.String,java.lang.Throwable,boolean,boolean) not found";
        return false;
      }

      constructor1_ =
          cls_.GetInstanceMethod(
              "<init>",
              "()V");
      if (constructor1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Exception"
                   << ", constructor public java.lang.Exception() not found";
        return false;
      }

      constructor2_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/lang/String;)V");
      if (constructor2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Exception"
                   << ", constructor public java.lang.Exception(java.lang.String) not found";
        return false;
      }

      constructor3_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/lang/String;Ljava/lang/Throwable;)V");
      if (constructor3_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Exception"
                   << ", constructor public java.lang.Exception(java.lang.String,java.lang.Throwable) not found";
        return false;
      }

      constructor4_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/lang/Throwable;)V");
      if (constructor4_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Exception"
                   << ", constructor public java.lang.Exception(java.lang.Throwable) not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "protected java.lang.Exception(java.lang.String,java.lang.Throwable,boolean,boolean)".
  jmethodID constructor0_ { nullptr };

  // Method ID of class constructor "public java.lang.Exception()".
  jmethodID constructor1_ { nullptr };

  // Method ID of class constructor "public java.lang.Exception(java.lang.String)".
  jmethodID constructor2_ { nullptr };

  // Method ID of class constructor "public java.lang.Exception(java.lang.String,java.lang.Throwable)".
  jmethodID constructor3_ { nullptr };

  // Method ID of class constructor "public java.lang.Exception(java.lang.Throwable)".
  jmethodID constructor4_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ExceptionImpl);
};


bool BindException() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ExceptionImpl> proxy_class(new ExceptionImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindExceptionWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ExceptionImpl> proxy_class(new ExceptionImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectException(ExceptionClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupException() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ExceptionClass* Exception() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
