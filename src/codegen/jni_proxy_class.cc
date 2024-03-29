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

#include "jni_proxy_class.h"

namespace jniproxy {

constexpr char ClassClass::TypeName[];
constexpr char ClassClass::Signature[];
constexpr char ClassClass::TypeSignature[];

static ClassClass* g_proxy_class = nullptr;

class ClassImpl : public ClassClass {
 public:
  ClassImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Class";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Class";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > forName(
      const std::string& arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_forName_0_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        );

    return ::devtools::cdbg::CatchOr(
        "Class.forName",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > forName(
      const std::string& arg0,
      jboolean arg1,
      jobject arg2
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_forName_1_,
        ::devtools::cdbg::JniToJavaString(arg0).get(),
        arg1,
        arg2
        );

    return ::devtools::cdbg::CatchOr(
        "Class.forName",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public static java.lang.Class java.lang.Class.forName(java.lang.String) throws java.lang.ClassNotFoundException".
      method_forName_0_ =
          cls_.GetStaticMethod(
              "forName",
              "(Ljava/lang/String;)Ljava/lang/Class;");
      if (method_forName_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Class"
                   << ", method forName not found";
        return false;
      }

      // Load "public static java.lang.Class java.lang.Class.forName(java.lang.String,boolean,java.lang.ClassLoader) throws java.lang.ClassNotFoundException".
      method_forName_1_ =
          cls_.GetStaticMethod(
              "forName",
              "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
      if (method_forName_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Class"
                   << ", method forName not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public static java.lang.Class java.lang.Class.forName(java.lang.String) throws java.lang.ClassNotFoundException".
  jmethodID method_forName_0_ { nullptr };

  // Method ID of "public static java.lang.Class java.lang.Class.forName(java.lang.String,boolean,java.lang.ClassLoader) throws java.lang.ClassNotFoundException".
  jmethodID method_forName_1_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ClassImpl);
};


bool BindClass() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ClassImpl> proxy_class(new ClassImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindClassWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ClassImpl> proxy_class(new ClassImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectClass(ClassClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupClass() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ClassClass* Class() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
