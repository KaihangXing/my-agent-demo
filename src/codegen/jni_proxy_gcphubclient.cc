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

#include "jni_proxy_gcphubclient.h"

namespace jniproxy {

constexpr char GcpHubClientClass::TypeName[];
constexpr char GcpHubClientClass::Signature[];
constexpr char GcpHubClientClass::TypeSignature[];

static GcpHubClientClass* g_proxy_class = nullptr;

class GcpHubClientImpl : public GcpHubClientClass {
 public:
  GcpHubClientImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpHubClient";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpHubClient";
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
        "GcpHubClient.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0,
      jobject arg1,
      jobject arg2,
      jobject arg3
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor1_,
        arg0,
        arg1,
        arg2,
        arg3
        ));

    return ::devtools::cdbg::CatchOr(
        "GcpHubClient.<init>",
        std::move(rc));
  }


 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "()V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpHubClient"
                   << ", constructor public com.google.devtools.cdbg.debuglets.java.GcpHubClient() not found";
        return false;
      }

      constructor1_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/net/URL;Lcom/google/devtools/cdbg/debuglets/java/MetadataQuery;Lcom/google/devtools/cdbg/debuglets/java/ClassPathLookup;Ljava/util/Map;)V");
      if (constructor1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.GcpHubClient"
                   << ", constructor public com.google.devtools.cdbg.debuglets.java.GcpHubClient(java.net.URL,com.google.devtools.cdbg.debuglets.java.MetadataQuery,com.google.devtools.cdbg.debuglets.java.ClassPathLookup,java.util.Map) not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public com.google.devtools.cdbg.debuglets.java.GcpHubClient()".
  jmethodID constructor0_ { nullptr };

  // Method ID of class constructor "public com.google.devtools.cdbg.debuglets.java.GcpHubClient(java.net.URL,com.google.devtools.cdbg.debuglets.java.MetadataQuery,com.google.devtools.cdbg.debuglets.java.ClassPathLookup,java.util.Map)".
  jmethodID constructor1_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(GcpHubClientImpl);
};


bool BindGcpHubClient() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<GcpHubClientImpl> proxy_class(new GcpHubClientImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindGcpHubClientWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<GcpHubClientImpl> proxy_class(new GcpHubClientImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectGcpHubClient(GcpHubClientClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupGcpHubClient() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


GcpHubClientClass* GcpHubClient() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
