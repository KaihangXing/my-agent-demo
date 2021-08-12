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

#include "jni_proxy_statistician.h"

namespace jniproxy {

constexpr char StatisticianClass::TypeName[];
constexpr char StatisticianClass::Signature[];
constexpr char StatisticianClass::TypeSignature[];

static StatisticianClass* g_proxy_class = nullptr;

class StatisticianImpl : public StatisticianClass {
 public:
  StatisticianImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.Statistician";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.Statistician";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jint arg0,
      jdouble arg1,
      jdouble arg2,
      jdouble arg3,
      jdouble arg4
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor0_,
        arg0,
        arg1,
        arg2,
        arg3,
        arg4
        ));

    return ::devtools::cdbg::CatchOr(
        "Statistician.<init>",
        std::move(rc));
  }


 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(IDDDD)V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class com.google.devtools.cdbg.debuglets.java.Statistician"
                   << ", constructor private com.google.devtools.cdbg.debuglets.java.Statistician(int,double,double,double,double) not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "private com.google.devtools.cdbg.debuglets.java.Statistician(int,double,double,double,double)".
  jmethodID constructor0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(StatisticianImpl);
};


bool BindStatistician() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<StatisticianImpl> proxy_class(new StatisticianImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindStatisticianWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<StatisticianImpl> proxy_class(new StatisticianImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectStatistician(StatisticianClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupStatistician() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


StatisticianClass* Statistician() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
