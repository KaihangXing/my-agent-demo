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

#include "jni_proxy_api_client_datetime.h"

namespace jniproxy {

constexpr char DateTimeClass::TypeName[];
constexpr char DateTimeClass::Signature[];
constexpr char DateTimeClass::TypeSignature[];

static DateTimeClass* g_proxy_class = nullptr;

class DateTimeImpl : public DateTimeClass {
 public:
  DateTimeImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jboolean arg0,
      jlong arg1,
      jobject arg2
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor0_,
        arg0,
        arg1,
        arg2
        ));

    return ::devtools::cdbg::CatchOr(
        "DateTime.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor1_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        ));

    return ::devtools::cdbg::CatchOr(
        "DateTime.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor2_,
        arg0
        ));

    return ::devtools::cdbg::CatchOr(
        "DateTime.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0,
      jobject arg1
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor3_,
        arg0,
        arg1
        ));

    return ::devtools::cdbg::CatchOr(
        "DateTime.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jlong arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor4_,
        arg0
        ));

    return ::devtools::cdbg::CatchOr(
        "DateTime.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jlong arg0,
      jint arg1
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor5_,
        arg0,
        arg1
        ));

    return ::devtools::cdbg::CatchOr(
        "DateTime.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > parseRfc3339(
      const std::string& arg0
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallStaticObjectMethod(
            cls_.get(),
        method_parseRfc3339_0_,
        ::devtools::cdbg::JniToJavaString(arg0).get()
        );

    return ::devtools::cdbg::CatchOr(
        "DateTime.parseRfc3339",
        ::devtools::cdbg::JniLocalRef(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::string> toStringRfc3339(
      jobject instance
      ) override {
    jobject rc =
        ::devtools::cdbg::jni()->CallObjectMethod(
            instance,
        method_toStringRfc3339_1_
        );

    return ::devtools::cdbg::CatchOr(
        "DateTime.toStringRfc3339",
        ::devtools::cdbg::JniToNativeString(rc));
  }

  ::devtools::cdbg::ExceptionOr<jlong> getValue(
      jobject instance
      ) override {
    jlong rc =
        ::devtools::cdbg::jni()->CallLongMethod(
            instance,
        method_getValue_2_
        );

    return ::devtools::cdbg::CatchOr(
        "DateTime.getValue",
        rc);
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(ZJLjava/lang/Integer;)V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", constructor public com.google.api.client.util.DateTime(boolean,long,java.lang.Integer) not found";
        return false;
      }

      constructor1_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/lang/String;)V");
      if (constructor1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", constructor public com.google.api.client.util.DateTime(java.lang.String) not found";
        return false;
      }

      constructor2_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/util/Date;)V");
      if (constructor2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", constructor public com.google.api.client.util.DateTime(java.util.Date) not found";
        return false;
      }

      constructor3_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/util/Date;Ljava/util/TimeZone;)V");
      if (constructor3_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", constructor public com.google.api.client.util.DateTime(java.util.Date,java.util.TimeZone) not found";
        return false;
      }

      constructor4_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(J)V");
      if (constructor4_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", constructor public com.google.api.client.util.DateTime(long) not found";
        return false;
      }

      constructor5_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(JI)V");
      if (constructor5_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", constructor public com.google.api.client.util.DateTime(long,int) not found";
        return false;
      }

      // Load "public static com.google.api.client.util.DateTime com.google.api.client.util.DateTime.parseRfc3339(java.lang.String)".
      method_parseRfc3339_0_ =
          cls_.GetStaticMethod(
              "parseRfc3339",
              "(Ljava/lang/String;)Lcom/google/api/client/util/DateTime;");
      if (method_parseRfc3339_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", method parseRfc3339 not found";
        return false;
      }

      // Load "public java.lang.String com.google.api.client.util.DateTime.toStringRfc3339()".
      method_toStringRfc3339_1_ =
          cls_.GetInstanceMethod(
              "toStringRfc3339",
              "()Ljava/lang/String;");
      if (method_toStringRfc3339_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", method toStringRfc3339 not found";
        return false;
      }

      // Load "public long com.google.api.client.util.DateTime.getValue()".
      method_getValue_2_ =
          cls_.GetInstanceMethod(
              "getValue",
              "()J");
      if (method_getValue_2_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.api.client.util.DateTime"
                   << ", method getValue not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public com.google.api.client.util.DateTime(boolean,long,java.lang.Integer)".
  jmethodID constructor0_ { nullptr };

  // Method ID of class constructor "public com.google.api.client.util.DateTime(java.lang.String)".
  jmethodID constructor1_ { nullptr };

  // Method ID of class constructor "public com.google.api.client.util.DateTime(java.util.Date)".
  jmethodID constructor2_ { nullptr };

  // Method ID of class constructor "public com.google.api.client.util.DateTime(java.util.Date,java.util.TimeZone)".
  jmethodID constructor3_ { nullptr };

  // Method ID of class constructor "public com.google.api.client.util.DateTime(long)".
  jmethodID constructor4_ { nullptr };

  // Method ID of class constructor "public com.google.api.client.util.DateTime(long,int)".
  jmethodID constructor5_ { nullptr };

  // Method ID of "public static com.google.api.client.util.DateTime com.google.api.client.util.DateTime.parseRfc3339(java.lang.String)".
  jmethodID method_parseRfc3339_0_ { nullptr };

  // Method ID of "public java.lang.String com.google.api.client.util.DateTime.toStringRfc3339()".
  jmethodID method_toStringRfc3339_1_ { nullptr };

  // Method ID of "public long com.google.api.client.util.DateTime.getValue()".
  jmethodID method_getValue_2_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(DateTimeImpl);
};


bool BindDateTime() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<DateTimeImpl> proxy_class(new DateTimeImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindDateTimeWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<DateTimeImpl> proxy_class(new DateTimeImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectDateTime(DateTimeClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupDateTime() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


DateTimeClass* DateTime() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
