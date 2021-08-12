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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_YAMLCONFIGPARSER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_YAMLCONFIGPARSER_H

#include "common.h"
#include "jni_utils.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class YamlConfigParserClass {
 public:
  static constexpr char TypeName[] = "com.google.devtools.cdbg.debuglets.java.YamlConfigParser";
  static constexpr char Signature[] = "com/google/devtools/cdbg/debuglets/java/YamlConfigParser";
  static constexpr char TypeSignature[] = "Lcom/google/devtools/cdbg/debuglets/java/YamlConfigParser;";

  virtual ~YamlConfigParserClass() {}

  // C++ equivalent of "com.google.devtools.cdbg.debuglets.java.YamlConfigParser.class" Java construct.
  virtual jclass GetClass() = 0;

  // Creates a new object "public com.google.devtools.cdbg.debuglets.java.YamlConfigParser(java.lang.String) throws com.google.devtools.cdbg.debuglets.java.YamlConfigParserException".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > NewObject(
      const std::string& arg0
      ) = 0;

  // Invokes "public java.lang.String[] com.google.devtools.cdbg.debuglets.java.YamlConfigParser.getBlocklistPatterns()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getBlocklistPatterns(
      jobject instance
      ) = 0;

  // Invokes "public java.lang.String[] com.google.devtools.cdbg.debuglets.java.YamlConfigParser.getBlocklistExceptionPatterns()".
  virtual ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef > getBlocklistExceptionPatterns(
      jobject instance
      ) = 0;
};

// Loads com.google.devtools.cdbg.debuglets.java.YamlConfigParser Java class and attaches to its methods. If this is
// the first time the class is being used, static constructor will be called.
bool BindYamlConfigParser();

// Loads com.google.devtools.cdbg.debuglets.java.YamlConfigParser using the specified class loader. If this is the
// first time the class is being used, static constructor will be called.
bool BindYamlConfigParserWithClassLoader(jobject class_loader_obj);

// Dependency injection for unit test purposes.
void InjectYamlConfigParser(YamlConfigParserClass* proxy_class);

// Releases the resources allocated in Bind.
void CleanupYamlConfigParser();

// Gets the singleton instance of the proxy.
YamlConfigParserClass* YamlConfigParser();

}  // namespace jniproxy

#endif  // DEVTOOLS_CDBG_DEBUGLETS_JAVA_JNI_PROXY_YAMLCONFIGPARSER_H
