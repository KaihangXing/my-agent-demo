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

#include "jni_proxy_ju_map_entry.h"

namespace jniproxy {

constexpr char Map_EntryClass::TypeName[];
constexpr char Map_EntryClass::Signature[];
constexpr char Map_EntryClass::TypeSignature[];

static Map_EntryClass* g_proxy_class = nullptr;

class Map_EntryImpl : public Map_EntryClass {
 public:
  Map_EntryImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.util.Map$Entry";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.util.Map$Entry";
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

  DISALLOW_COPY_AND_ASSIGN(Map_EntryImpl);
};


bool BindMap_Entry() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<Map_EntryImpl> proxy_class(new Map_EntryImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindMap_EntryWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<Map_EntryImpl> proxy_class(new Map_EntryImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectMap_Entry(Map_EntryClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupMap_Entry() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


Map_EntryClass* Map_Entry() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
