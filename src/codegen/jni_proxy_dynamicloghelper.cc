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

#include "jni_proxy_dynamicloghelper.h"

namespace jniproxy {

constexpr char DynamicLogHelperClass::TypeName[];
constexpr char DynamicLogHelperClass::Signature[];
constexpr char DynamicLogHelperClass::TypeSignature[];

static DynamicLogHelperClass* g_proxy_class = nullptr;

class DynamicLogHelperImpl : public DynamicLogHelperClass {
 public:
  DynamicLogHelperImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.DynamicLogHelper";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.DynamicLogHelper";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getLogger(
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_getLogger_0_
        );

    return ::devtools::cdbg::CatchOr(
        "DynamicLogHelper.getLogger",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getInfoLevel(
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_getInfoLevel_1_
        );

    return ::devtools::cdbg::CatchOr(
        "DynamicLogHelper.getInfoLevel",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getWarningLevel(
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_getWarningLevel_2_
        );

    return ::devtools::cdbg::CatchOr(
        "DynamicLogHelper.getWarningLevel",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getSevereLevel(
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_getSevereLevel_3_
        );

    return ::devtools::cdbg::CatchOr(
        "DynamicLogHelper.getSevereLevel",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public static java.util.logging.Logger com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getLogger()".
      method_getLogger_0_ =
          cls_.GetStaticMethod(
              "getLogger",
              "()Ljava/util/logging/Logger;");
      if (method_getLogger_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.DynamicLogHelper"
                   << ", method getLogger not found";
        return false;
      }

      // Load "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getInfoLevel()".
      method_getInfoLevel_1_ =
          cls_.GetStaticMethod(
              "getInfoLevel",
              "()Ljava/util/logging/Level;");
      if (method_getInfoLevel_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.DynamicLogHelper"
                   << ", method getInfoLevel not found";
        return false;
      }

      // Load "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getWarningLevel()".
      method_getWarningLevel_2_ =
          cls_.GetStaticMethod(
              "getWarningLevel",
              "()Ljava/util/logging/Level;");
      if (method_getWarningLevel_2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.DynamicLogHelper"
                   << ", method getWarningLevel not found";
        return false;
      }

      // Load "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getSevereLevel()".
      method_getSevereLevel_3_ =
          cls_.GetStaticMethod(
              "getSevereLevel",
              "()Ljava/util/logging/Level;");
      if (method_getSevereLevel_3_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.DynamicLogHelper"
                   << ", method getSevereLevel not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public static java.util.logging.Logger com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getLogger()".
  jmethodID method_getLogger_0_ { nullptr };

  // Method ID of "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getInfoLevel()".
  jmethodID method_getInfoLevel_1_ { nullptr };

  // Method ID of "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getWarningLevel()".
  jmethodID method_getWarningLevel_2_ { nullptr };

  // Method ID of "public static java.util.logging.Level com.google.devtools.cdbg.debuglets.java.DynamicLogHelper.getSevereLevel()".
  jmethodID method_getSevereLevel_3_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(DynamicLogHelperImpl);
};


bool BindDynamicLogHelper() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<DynamicLogHelperImpl> proxy_class(new DynamicLogHelperImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindDynamicLogHelperWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<DynamicLogHelperImpl> proxy_class(new DynamicLogHelperImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectDynamicLogHelper(DynamicLogHelperClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupDynamicLogHelper() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


DynamicLogHelperClass* DynamicLogHelper() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
