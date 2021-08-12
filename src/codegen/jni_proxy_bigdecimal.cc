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

#include "jni_proxy_bigdecimal.h"

namespace jniproxy {

constexpr char BigDecimalClass::TypeName[];
constexpr char BigDecimalClass::Signature[];
constexpr char BigDecimalClass::TypeSignature[];

static BigDecimalClass* g_proxy_class = nullptr;

class BigDecimalImpl : public BigDecimalClass {
 public:
  BigDecimalImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.math.BigDecimal";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.math.BigDecimal";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }


 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  DISALLOW_COPY_AND_ASSIGN(BigDecimalImpl);
};


bool BindBigDecimal() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<BigDecimalImpl> proxy_class(new BigDecimalImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindBigDecimalWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<BigDecimalImpl> proxy_class(new BigDecimalImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectBigDecimal(BigDecimalClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupBigDecimal() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


BigDecimalClass* BigDecimal() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
