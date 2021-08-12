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

#include "jni_proxy_printwriter.h"

namespace jniproxy {

constexpr char PrintWriterClass::TypeName[];
constexpr char PrintWriterClass::Signature[];
constexpr char PrintWriterClass::TypeSignature[];

static PrintWriterClass* g_proxy_class = nullptr;

class PrintWriterImpl : public PrintWriterClass {
 public:
  PrintWriterImpl() {}

  bool Bind() {
    if (!cls_.FindWithJNI(Signature)) {
      LOG(ERROR) << "Failed to load Java class java.io.PrintWriter";
      return false;
    }

    return BindMethods();
  }

  bool BindWithClassLoader(jobject class_loader_obj) {
    if (!cls_.LoadWithClassLoader(class_loader_obj, TypeName)) {
      LOG(ERROR) << "Failed to load Java class java.io.PrintWriter";
      return false;
    }

    return BindMethods();
  }

  jclass GetClass() override {
    return cls_.get();
  }

  ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      jobject arg0
      ) override {
    ::devtools::cdbg::JniLocalRef rc(::devtools::cdbg::jni()->NewObject(
        cls_.get(),
        constructor0_,
        arg0
        ));

    return ::devtools::cdbg::CatchOr(
        "PrintWriter.<init>",
        std::move(rc));
  }

  ::devtools::cdbg::ExceptionOr<std::nullptr_t> flush(
      jobject instance
      ) override {
        ::devtools::cdbg::jni()->CallVoidMethod(
            instance,
        method_flush_0_
        );

    return ::devtools::cdbg::CatchOr(
        "PrintWriter.flush",
        nullptr);
  }

 private:
  // Loads class methods assuming "cls_" is already available.
  bool BindMethods() {
      constructor0_ =
          cls_.GetInstanceMethod(
              "<init>",
              "(Ljava/io/Writer;)V");
      if (constructor0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.io.PrintWriter"
                   << ", constructor public java.io.PrintWriter(java.io.Writer) not found";
        return false;
      }

      // Load "public void java.io.PrintWriter.flush()".
      method_flush_0_ =
          cls_.GetInstanceMethod(
              "flush",
              "()V");
      if (method_flush_0_ == nullptr) {
        LOG(ERROR) << "Failed to load Java class java.io.PrintWriter"
                   << ", method flush not found";
        return false;
      }

      return true;
  }

 private:
  // Global reference to Java class object.
  ::devtools::cdbg::JavaClass cls_;

  // Method ID of class constructor "public java.io.PrintWriter(java.io.Writer)".
  jmethodID constructor0_ { nullptr };

  // Method ID of "public void java.io.PrintWriter.flush()".
  jmethodID method_flush_0_ { nullptr };

  DISALLOW_COPY_AND_ASSIGN(PrintWriterImpl);
};


bool BindPrintWriter() {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<PrintWriterImpl> proxy_class(new PrintWriterImpl);
  if (!proxy_class->Bind()) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


bool BindPrintWriterWithClassLoader(jobject class_loader_obj) {
  DCHECK(g_proxy_class == nullptr);

  std::unique_ptr<PrintWriterImpl> proxy_class(new PrintWriterImpl);
  if (!proxy_class->BindWithClassLoader(class_loader_obj)) {
    return false;
  }

  g_proxy_class = proxy_class.release();

  return true;
}


void InjectPrintWriter(PrintWriterClass* proxy_class) {
  g_proxy_class = proxy_class;
}



void CleanupPrintWriter() {
  if (g_proxy_class != nullptr) {
    delete g_proxy_class;
    g_proxy_class = nullptr;
  }
}


PrintWriterClass* PrintWriter() {
  DCHECK(g_proxy_class != nullptr);
  return g_proxy_class;
}

}  // namespace jniproxy
