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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_HUBCLIENT_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_HUBCLIENT_H

#include "jni_proxy_hubclient.h"
#include "testing/base/public/gmock.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class MockHubClient : public HubClientClass {
 public:
  MOCK_METHOD0(GetClass, jclass());

  MOCK_METHOD2(registerDebuggee, ::devtools::cdbg::ExceptionOr<jboolean>(
      jobject,  // instance
      jobject
      ));

  MOCK_METHOD1(listActiveBreakpoints, ::devtools::cdbg::ExceptionOr< ::devtools::cdbg::JniLocalRef >(
      jobject  // instance
      ));

  MOCK_METHOD4(transmitBreakpointUpdate, ::devtools::cdbg::ExceptionOr<std::nullptr_t>(
      jobject,  // instance
      const std::string&,
      const std::string&,
      const std::string&
      ));

  MOCK_METHOD2(registerBreakpointCanary, ::devtools::cdbg::ExceptionOr<std::nullptr_t>(
      jobject,  // instance
      const std::string&
      ));

  MOCK_METHOD2(approveBreakpointCanary, ::devtools::cdbg::ExceptionOr<std::nullptr_t>(
      jobject,  // instance
      const std::string&
      ));

  MOCK_METHOD1(shutdown, ::devtools::cdbg::ExceptionOr<std::nullptr_t>(
      jobject  // instance
      ));

  MOCK_METHOD1(isEnabled, ::devtools::cdbg::ExceptionOr<jboolean>(
      jobject  // instance
      ));
};

}  // namespace jniproxy

#endif // DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_HUBCLIENT_H
