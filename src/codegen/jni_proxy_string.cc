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

#include "jni_proxy_string.h"

namespace jniproxy {

constexpr char StringClass::TypeName[];
constexpr char StringClass::Signature[];
constexpr char StringClass::TypeSignature[];

static StringClass* g_proxy_class = nullptr;

class StringImpl : public StringClass {
 public:
  StringImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.String";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.String";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jint arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_valueOf_0_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "String.valueOf",
        ::devtools::cdbg::JniToNativeString(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jlong arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_valueOf_1_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "String.valueOf",
        ::devtools::cdbg::JniToNativeString(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jfloat arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_valueOf_2_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "String.valueOf",
        ::devtools::cdbg::JniToNativeString(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::string> valueOf(
      jdouble arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_valueOf_3_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "String.valueOf",
        ::devtools::cdbg::JniToNativeString(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public static java.lang.String java.lang.String.valueOf(int)".
      method_valueOf_0_ =
          cls_.GetStaticMethod(
              "valueOf",
              "(I)Ljava/lang/String;");
      if (method_valueOf_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.String"
                   << ", method valueOf not found";
        return false;
      }

      // Load "public static java.lang.String java.lang.String.valueOf(long)".
      method_valueOf_1_ =
          cls_.GetStaticMethod(
              "valueOf",
              "(J)Ljava/lang/String;");
      if (method_valueOf_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.String"
                   << ", method valueOf not found";
        return false;
      }

      // Load "public static java.lang.String java.lang.String.valueOf(float)".
      method_valueOf_2_ =
          cls_.GetStaticMethod(
              "valueOf",
              "(F)Ljava/lang/String;");
      if (method_valueOf_2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.String"
                   << ", method valueOf not found";
        return false;
      }

      // Load "public static java.lang.String java.lang.String.valueOf(double)".
      method_valueOf_3_ =
          cls_.GetStaticMethod(
              "valueOf",
              "(D)Ljava/lang/String;");
      if (method_valueOf_3_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.String"
                   << ", method valueOf not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public static java.lang.String java.lang.String.valueOf(int)".
  jmethodID method_valueOf_0_ { nullptr };

  // Method ID of "public static java.lang.String java.lang.String.valueOf(long)".
  jmethodID method_valueOf_1_ { nullptr };

  // Method ID of "public static java.lang.String java.lang.String.valueOf(float)".
  jmethodID method_valueOf_2_ { nullptr };

  // Method ID of "public static java.lang.String java.lang.String.valueOf(double)".
  jmethodID method_valueOf_3_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(StringImpl);
};


bool BindString() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<StringImpl> proxy_class(new StringImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindStringWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<StringImpl> proxy_class(new StringImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectString(StringClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupString() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


StringClass* String() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
