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

#include "jni_proxy_classloader.h"

namespace jniproxy {

constexpr char ClassLoaderClass::TypeName[];
constexpr char ClassLoaderClass::Signature[];
constexpr char ClassLoaderClass::TypeSignature[];

static ClassLoaderClass* g_proxy_class = nullptr;

class ClassLoaderImpl : public ClassLoaderClass {
 public:
  ClassLoaderImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.ClassLoader";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.ClassLoader";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getSystemClassLoader(
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_getSystemClassLoader_0_
        );

    return ::devtools::cdbg::CatchOr(
        "ClassLoader.getSystemClassLoader",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > loadClass(
      jobject instance,
      const std::string& arg0,
      jboolean arg1
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_loadClass_1_,
        ::devtools::cdbg::JniToJavaString(arg0).get(),
        arg1
        );

    return ::devtools::cdbg::CatchOr(
        "ClassLoader.loadClass",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > loadClass(
      jobject instance,
      const std::string& arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_loadClass_2_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        );

    return ::devtools::cdbg::CatchOr(
        "ClassLoader.loadClass",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public static java.lang.ClassLoader java.lang.ClassLoader.getSystemClassLoader()".
      method_getSystemClassLoader_0_ =
          cls_.GetStaticMethod(
              "getSystemClassLoader",
              "()Ljava/lang/ClassLoader;");
      if (method_getSystemClassLoader_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.ClassLoader"
                   << ", method getSystemClassLoader not found";
        return false;
      }

      // Load "protected java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String,boolean) throws java.lang.ClassNotFoundException".
      method_loadClass_1_ =
          cls_.GetInstanceMethod(
              "loadClass",
              "(Ljava/lang/String;Z)Ljava/lang/Class;");
      if (method_loadClass_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.ClassLoader"
                   << ", method loadClass not found";
        return false;
      }

      // Load "public java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String) throws java.lang.ClassNotFoundException".
      method_loadClass_2_ =
          cls_.GetInstanceMethod(
              "loadClass",
              "(Ljava/lang/String;)Ljava/lang/Class;");
      if (method_loadClass_2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.ClassLoader"
                   << ", method loadClass not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public static java.lang.ClassLoader java.lang.ClassLoader.getSystemClassLoader()".
  jmethodID method_getSystemClassLoader_0_ { nullptr };

  // Method ID of "protected java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String,boolean) throws java.lang.ClassNotFoundException".
  jmethodID method_loadClass_1_ { nullptr };

  // Method ID of "public java.lang.Class java.lang.ClassLoader.loadClass(java.lang.String) throws java.lang.ClassNotFoundException".
  jmethodID method_loadClass_2_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ClassLoaderImpl);
};


bool BindClassLoader() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ClassLoaderImpl> proxy_class(new ClassLoaderImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindClassLoaderWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ClassLoaderImpl> proxy_class(new ClassLoaderImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectClassLoader(ClassLoaderClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupClassLoader() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ClassLoaderClass* ClassLoader() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
