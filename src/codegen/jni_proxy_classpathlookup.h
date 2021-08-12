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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASSPATHLOOKUP_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASSPATHLOOKUP_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class ClassPathLookupClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.ClassPathLookup";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/ClassPathLookup";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/ClassPathLookup;";

  virtual ~ClassPathLookupClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.ClassPathLookup.class" Java construct.
  virtual jclass GetClass() = 0;

  // Invokes "public static byte[] com.google.devtools.cdbg.debuglets.java.ClassPathLookup.readClassFile(java.lang.Class) throws java.lang.ClassNotFoundException,java.io.IOException".
  virtual ::devtools::cdbg::ExceptionOr<std::string> readClassFile(
      jobject arg0
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.ClassPathLookup Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindClassPathLookup();

// Loads com.google.devtools.cdbg.debuglets.java.ClassPathLookup using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindClassPathLookupWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectClassPathLookup(ClassPathLookupClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupClassPathLookup();

// Gets the singleton instance of the proxy.
ClassPathLookupClass* ClassPathLookup();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_CLASSPATHLOOKUP_H
