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

#include "jni_proxy_classpathlookup.h"

namespace jniproxy {

constexpr char ClassPathLookupClass::TypeName[];
constexpr char ClassPathLookupClass::Signature[];
constexpr char ClassPathLookupClass::TypeSignature[];

static ClassPathLookupClass* g_proxy_class = nullptr;

class ClassPathLookupImpl : public ClassPathLookupClass {
 public:
  ClassPathLookupImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.ClassPathLookup";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.ClassPathLookup";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<std::string> readClassFile(
      jobject arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_readClassFile_0_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "ClassPathLookup.readClassFile",
        ::devtools::cdbg::JniToNativeBlob(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public static byte[] com.google.devtools.cdbg.debuglets.java.ClassPathLookup.readClassFile(java.lang.Class) throws java.lang.ClassNotFoundException,java.io.IOException".
      method_readClassFile_0_ =
          cls_.GetStaticMethod(
              "readClassFile",
              "(Ljava/lang/Class;)[B");
      if (method_readClassFile_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.ClassPathLookup"
                   << ", method readClassFile not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public static byte[] com.google.devtools.cdbg.debuglets.java.ClassPathLookup.readClassFile(java.lang.Class) throws java.lang.ClassNotFoundException,java.io.IOException".
  jmethodID method_readClassFile_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ClassPathLookupImpl);
};


bool BindClassPathLookup() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ClassPathLookupImpl> proxy_class(new ClassPathLookupImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindClassPathLookupWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ClassPathLookupImpl> proxy_class(new ClassPathLookupImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectClassPathLookup(ClassPathLookupClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupClassPathLookup() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ClassPathLookupClass* ClassPathLookup() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
