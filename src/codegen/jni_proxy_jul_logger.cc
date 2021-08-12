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

#include "jni_proxy_jul_logger.h"

namespace jniproxy {

constexpr char LoggerClass::TypeName[];
constexpr char LoggerClass::Signature[];
constexpr char LoggerClass::TypeSignature[];

static LoggerClass* g_proxy_class = nullptr;

class LoggerImpl : public LoggerClass {
 public:
  LoggerImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.util.logging.Logger";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.util.logging.Logger";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> setLevel(
      jobject instance,
      jobject arg0
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_setLevel_0_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "Logger.setLevel",
        nullptr);
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> logp(
      jobject instance,
      jobject arg0,
      const std::string& arg1,
      const std::string& arg2,
      const std::string& arg3
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_logp_1_,
        arg0,
        ::devtools::cdbg::JniToJavaString(arg1).get(),
        ::devtools::cdbg::JniToJavaString(arg2).get(),
        ::devtools::cdbg::JniToJavaString(arg3).get()
        );

    return ::devtools::cdbg::CatchOr(
        "Logger.logp",
        nullptr);
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      // Load "public void java.util.logging.Logger.setLevel(java.util.logging.Level) throws java.lang.SecurityException".
      method_setLevel_0_ =
          cls_.GetInstanceMethod(
              "setLevel",
              "(Ljava/util/logging/Level;)V");
      if (method_setLevel_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.logging.Logger"
                   << ", method setLevel not found";
        return false;
      }

      // Load "public void java.util.logging.Logger.logp(java.util.logging.Level,java.lang.String,java.lang.String,java.lang.String)".
      method_logp_1_ =
          cls_.GetInstanceMethod(
              "logp",
              "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      if (method_logp_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.util.logging.Logger"
                   << ", method logp not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of "public void java.util.logging.Logger.setLevel(java.util.logging.Level) throws java.lang.SecurityException".
  jmethodID method_setLevel_0_ { nullptr };

  // Method ID of "public void java.util.logging.Logger.logp(java.util.logging.Level,java.lang.String,java.lang.String,java.lang.String)".
  jmethodID method_logp_1_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(LoggerImpl);
};


bool BindLogger() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<LoggerImpl> proxy_class(new LoggerImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindLoggerWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<LoggerImpl> proxy_class(new LoggerImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectLogger(LoggerClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupLogger() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


LoggerClass* Logger() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
