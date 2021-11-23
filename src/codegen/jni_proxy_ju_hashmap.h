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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_HASHMAP_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_HASHMAP_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class HashMapClass {
 public:
  static constexpr char TypeName[] = "java.util.HashMap";
  static constexpr char Signature[] = "java/util/HashMap";
  static constexpr char TypeSignature[] = "Ljava/util/HashMap;";

  virtual ~HashMapClass() {}

  // C++ equivalent of "java.util.HashMap.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public java.util.HashMap()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      ) = 0;

  // Creates a new object "public java.util.HashMap(int)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jint arg0
      ) = 0;

  // Creates a new object "public java.util.HashMap(int,float)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jint arg0,
      jfloat arg1
      ) = 0;

  // Creates a new object "public java.util.HashMap(java.util.Map)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) = 0;

  // Invokes "public java.lang.Object java.util.HashMap.put(java.lang.Object,java.lang.Object)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > put(
      jobject instance,
      jobject arg0,
      jobject arg1
      ) = 0;
};

// Loads java.util.HashMap Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindHashMap();

// Loads java.util.HashMap using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindHashMapWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectHashMap(HashMapClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupHashMap();

// Gets the singleton instance of the proxy.
HashMapClass* HashMap();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_JU_HASHMAP_H