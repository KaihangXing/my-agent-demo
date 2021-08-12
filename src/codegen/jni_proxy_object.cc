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

#include "jni_proxy_object.h"

namespace jniproxy {

constexpr char ObjectClass::TypeName[];
constexpr char ObjectClass::Signature[];
constexpr char ObjectClass::TypeSignature[];

static ObjectClass* g_proxy_class = nullptr;

class ObjectImpl : public ObjectClass {
 public:
  ObjectImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Object";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Object";
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
        "Object.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::string> toString(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_toString_0_
        );

    return ::devtools::cdbg::CatchOr(
        "Object.toString",
        ::devtools::cdbg::JniToNativeString(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "()V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Object"
                   << ", constructor public java.lang.Object() not found";
        return false;
      }

      // Load "public java.lang.String java.lang.Object.toString()".
      method_toString_0_ =
          cls_.GetInstanceMethod(
              "toString",
              "()Ljava/lang/String;");
      if (method_toString_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Object"
                   << ", method toString not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public java.lang.Object()".
  jmethodID constructor0_ { nullptr };

  // Method ID of "public java.lang.String java.lang.Object.toString()".
  jmethodID method_toString_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ObjectImpl);
};


bool BindObject() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ObjectImpl> proxy_class(new ObjectImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindObjectWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ObjectImpl> proxy_class(new ObjectImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectObject(ObjectClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupObject() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ObjectClass* Object() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
