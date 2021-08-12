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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_MAP_ENTRY_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_MAP_ENTRY_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class Map_EntryClass {
 public:
  static constexpr char TypeName[] = "java.util.Map$Entry";
  static constexpr char Signature[] = "java/util/Map$Entry";
  static constexpr char TypeSignature[] = "Ljava/util/Map$Entry;";

  virtual ~Map_EntryClass() {}

  // C++ equivalent of "java.util.Map$Entry.class" Java construct.
  virtual jclass GetClass() = 0;
};

// Loads java.util.Map$Entry Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindMap_Entry();

// Loads java.util.Map$Entry using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindMap_EntryWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectMap_Entry(Map_EntryClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupMap_Entry();

// Gets the singleton instance of the proxy.
Map_EntryClass* Map_Entry();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_MAP_ENTRY_H
