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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_PRINTWRITER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_PRINTWRITER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class PrintWriterClass {
 public:
  static constexpr char TypeName[] = "java.io.PrintWriter";
  static constexpr char Signature[] = "java/io/PrintWriter";
  static constexpr char TypeSignature[] = "Ljava/io/PrintWriter;";

  virtual ~PrintWriterClass() {}

  // C++ equivalent of "java.io.PrintWriter.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public java.io.PrintWriter(java.io.Writer)".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) = 0;

  // Invokes "public void java.io.PrintWriter.flush()".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> flush(
      jobject instance
      ) = 0;
};

// Loads java.io.PrintWriter Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindPrintWriter();

// Loads java.io.PrintWriter using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindPrintWriterWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectPrintWriter(PrintWriterClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupPrintWriter();

// Gets the singleton instance of the proxy.
PrintWriterClass* PrintWriter();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_PRINTWRITER_H
