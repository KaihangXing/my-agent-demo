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

#include "jni_proxy_yamlconfigparser.h"

namespace jniproxy {

constexpr char YamlConfigParserClass::TypeName[];
constexpr char YamlConfigParserClass::Signature[];
constexpr char YamlConfigParserClass::TypeSignature[];

static YamlConfigParserClass* g_proxy_class = nullptr;

class YamlConfigParserImpl : public YamlConfigParserClass {
 public:
  YamlConfigParserImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.YamlConfigParser";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.YamlConfigParser";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor0_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        ));

    return ::devtools::cdbg::CatchOr(
        "YamlConfigParser.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getBlocklistPatterns(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_getBlocklistPatterns_0_
        );

    return ::devtools::cdbg::CatchOr(
        "YamlConfigParser.getBlocklistPatterns",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getBlocklistExceptionPatterns(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_getBlocklistExceptionPatterns_1_
        );

    return ::devtools::cdbg::CatchOr(
        "YamlConfigParser.getBlocklistExceptionPatterns",
        ::devtools::cdbg::JniLocalRef(rc));
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/lang/String;)V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.YamlConfigParser"
                   << ", constructor public com.google.devtools.cdbg.debuglets.java.YamlConfigParser(java.lang.String) throws com.google.devtools.cdbg.debuglets.java.YamlConfigParserException not found";
        return false;
      }

      // Load "public java.lang.String[] com.google.devtools.cdbg.debuglets.java.YamlConfigParser.getBlocklistPatterns()".
      method_getBlocklistPatterns_0_ =
          cls_.GetInstanceMethod(
              "getBlocklistPatterns",
              "()[Ljava/lang/String;");
      if (method_getBlocklistPatterns_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.YamlConfigParser"
                   << ", method getBlocklistPatterns not found";
        return false;
      }

      // Load "public java.lang.String[] com.google.devtools.cdbg.debuglets.java.YamlConfigParser.getBlocklistExceptionPatterns()".
      method_getBlocklistExceptionPatterns_1_ =
          cls_.GetInstanceMethod(
              "getBlocklistExceptionPatterns",
              "()[Ljava/lang/String;");
      if (method_getBlocklistExceptionPatterns_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.YamlConfigParser"
                   << ", method getBlocklistExceptionPatterns not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public com.google.devtools.cdbg.debuglets.java.YamlConfigParser(java.lang.String) throws com.google.devtools.cdbg.debuglets.java.YamlConfigParserException".
  jmethodID constructor0_ { nullptr };

  // Method ID of "public java.lang.String[] com.google.devtools.cdbg.debuglets.java.YamlConfigParser.getBlocklistPatterns()".
  jmethodID method_getBlocklistPatterns_0_ { nullptr };

  // Method ID of "public java.lang.String[] com.google.devtools.cdbg.debuglets.java.YamlConfigParser.getBlocklistExceptionPatterns()".
  jmethodID method_getBlocklistExceptionPatterns_1_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(YamlConfigParserImpl);
};


bool BindYamlConfigParser() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<YamlConfigParserImpl> proxy_class(new YamlConfigParserImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindYamlConfigParserWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<YamlConfigParserImpl> proxy_class(new YamlConfigParserImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectYamlConfigParser(YamlConfigParserClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupYamlConfigParser() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


YamlConfigParserClass* YamlConfigParser() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
