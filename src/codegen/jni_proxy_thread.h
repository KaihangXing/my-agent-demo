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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_THREAD_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_THREAD_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class ThreadClass {
 public:
  static constexpr char TypeName[] = "java.lang.Thread";
  static constexpr char Signature[] = "java/lang/Thread";
  static constexpr char TypeSignature[] = "Ljava/lang/Thread;";

  virtual ~ThreadClass() {}

  // C++ equivalent of "java.lang.Thread.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public java.lang.Thread()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      ) = 0;

  // Invokes "public final void java.lang.Thread.join() throws java.lang.InterruptedException".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> join(
      jobject instance
      ) = 0;

  // Invokes "public static native void java.lang.Thread.sleep(long) throws java.lang.InterruptedException".
  virtual ::devtools::cdbg::ExceptionOr<std::nullptr_t> sleep(
      jlong arg0
      ) = 0;
};

// Loads java.lang.Thread Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindThread();

// Loads java.lang.Thread using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindThreadWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectThread(ThreadClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupThread();

// Gets the singleton instance of the proxy.
ThreadClass* Thread();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_THREAD_H
