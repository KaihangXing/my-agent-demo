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

#include "jni_proxy_ju_hashmap.h"

namespace jniproxy {

constexpr char HashMapClass::TypeName[];
constexpr char HashMapClass::Signature[];
constexpr char HashMapClass::TypeSignature[];

static HashMapClass* g_proxy_class = nullptr;

class HashMapImpl : public HashMapClass {
 public:
  HashMapImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.util.HashMap";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.util.HashMap";
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
        "HashMap.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jint arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor1_,
        arg0
        ));

    return ::devtools::cdbg::CatchOr(
        "HashMap.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jint arg0,
      jfloat arg1
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor2_,
        arg0,
        arg1
        ));

    return ::devtools::cdbg::CatchOr(
        "HashMap.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor3_,
        arg0
        ));

    return ::devtools::cdbg::CatchOr(
        "HashMap.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > put(
      jobject instance,
      jobject arg0,
      jobject arg1
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_put_0_,
        arg0,
        arg1
        );

    return ::devtools::cdbg::CatchOr(
        "HashMap.put",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "()V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.HashMap"
                   << ", constructor public java.util.HashMap() not found";
        return false;
      }

      constructor1_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(I)V");
      if (constructor1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.HashMap"
                   << ", constructor public java.util.HashMap(int) not found";
        return false;
      }

      constructor2_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(IF)V");
      if (constructor2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.HashMap"
                   << ", constructor public java.util.HashMap(int,float) not found";
        return false;
      }

      constructor3_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/util/Map;)V");
      if (constructor3_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.HashMap"
                   << ", constructor public java.util.HashMap(java.util.Map) not found";
        return false;
      }

      // Load "public java.lang.Object java.util.HashMap.put(java.lang.Object,java.lang.Object)".
      method_put_0_ =
          cls_.GetInstanceMethod(
              "put",
              "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
      if (method_put_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.HashMap"
                   << ", method put not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public java.util.HashMap()".
  jmethodID constructor0_ { nullptr };

  // Method ID of class constructor "public java.util.HashMap(int)".
  jmethodID constructor1_ { nullptr };

  // Method ID of class constructor "public java.util.HashMap(int,float)".
  jmethodID constructor2_ { nullptr };

  // Method ID of class constructor "public java.util.HashMap(java.util.Map)".
  jmethodID constructor3_ { nullptr };

  // Method ID of "public java.lang.Object java.util.HashMap.put(java.lang.Object,java.lang.Object)".
  jmethodID method_put_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(HashMapImpl);
};


bool BindHashMap() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<HashMapImpl> proxy_class(new HashMapImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindHashMapWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<HashMapImpl> proxy_class(new HashMapImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectHashMap(HashMapClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupHashMap() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


HashMapClass* HashMap() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
