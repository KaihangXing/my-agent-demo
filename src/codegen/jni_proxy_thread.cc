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

#include "jni_proxy_thread.h"

namespace jniproxy {

constexpr char ThreadClass::TypeName[];
constexpr char ThreadClass::Signature[];
constexpr char ThreadClass::TypeSignature[];

static ThreadClass* g_proxy_class = nullptr;

class ThreadImpl : public ThreadClass {
 public:
  ThreadImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Thread";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.lang.Thread";
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
        "Thread.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> join(
      jobject instance
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_join_0_
        );

    return ::devtools::cdbg::CatchOr(
        "Thread.join",
        nullptr);
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> sleep(
      jlong arg0
      ) override {
        ::devtools::cdbg::jni()->CallStaticVoidMethod(
            cls_.get(),
        method_sleep_1_,
        arg0
        );

    return ::devtools::cdbg::CatchOr(
        "Thread.sleep",
        nullptr);
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "()V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Thread"
                   << ", constructor public java.lang.Thread() not found";
        return false;
      }

      // Load "public final void java.lang.Thread.join() throws java.lang.InterruptedException".
      method_join_0_ =
          cls_.GetInstanceMethod(
              "join",
              "()V");
      if (method_join_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Thread"
                   << ", method join not found";
        return false;
      }

      // Load "public static native void java.lang.Thread.sleep(long) throws java.lang.InterruptedException".
      method_sleep_1_ =
          cls_.GetStaticMethod(
              "sleep",
              "(J)V");
      if (method_sleep_1_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.lang.Thread"
                   << ", method sleep not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public java.lang.Thread()".
  jmethodID constructor0_ { nullptr };

  // Method ID of "public final void java.lang.Thread.join() throws java.lang.InterruptedException".
  jmethodID method_join_0_ { nullptr };

  // Method ID of "public static native void java.lang.Thread.sleep(long) throws java.lang.InterruptedException".
  jmethodID method_sleep_1_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(ThreadImpl);
};


bool BindThread() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ThreadImpl> proxy_class(new ThreadImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindThreadWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<ThreadImpl> proxy_class(new ThreadImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectThread(ThreadClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupThread() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


ThreadClass* Thread() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
