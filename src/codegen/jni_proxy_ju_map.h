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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_MAP_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_MAP_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class MapClass {
 public:
  static constexpr char TypeName[] = "java.util.Map";
  static constexpr char Signature[] = "java/util/Map";
  static constexpr char TypeSignature[] = "Ljava/util/Map;";

  virtual ~MapClass() {}

  // C++ equivalent of "java.util.Map.class" Java construct.
  virtual jclass GetClass() = 0;
};

// Loads java.util.Map Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindMap();

// Loads java.util.Map using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindMapWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectMap(MapClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupMap();

// Gets the singleton instance of the proxy.
MapClass* Map();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_MAP_H
