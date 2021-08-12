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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_API_CLIENT_DATETIME_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_API_CLIENT_DATETIME_H

#include "jni_proxy_api_client_datetime.h"
#include "testing/base/public/gmock.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class MockDateTime : public DateTimeClass {
 public:
  MOCK_METHOD0(GetClass, jclass());

  MOCK_METHOD3(NewObject,
      ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
          jboolean,
          jlong,
          jobject
      ));

  MOCK_METHOD1(NewObject,
      ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
          const std::string&
      ));

  MOCK_METHOD1(NewObject,
      ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
          jobject
      ));

  MOCK_METHOD2(NewObject,
      ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
          jobject,
          jobject
      ));

  MOCK_METHOD1(NewObject,
      ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
          jlong
      ));

  MOCK_METHOD2(NewObject,
      ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
          jlong,
          jint
      ));

  MOCK_METHOD1(parseRfc3339, ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
      const std::string&
      ));

  MOCK_METHOD1(toStringRfc3339, ::devtools::cdbg::ExceptionOr<std::string>(
      jobject  // instance
      ));

  MOCK_METHOD1(getValue, ::devtools::cdbg::ExceptionOr<jlong>(
      jobject  // instance
      ));
};

}  // namespace jniproxy

#endif // DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_API_CLIENT_DATETIME_H
