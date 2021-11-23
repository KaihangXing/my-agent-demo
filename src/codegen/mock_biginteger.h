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

#ifndef DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_BIGINTEGER_H
#define DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_BIGINTEGER_H

#include "jni_proxy_biginteger.h"
#include "testing/base/public/gmock.h"

//
// Generated code. Don't edit.
//

namespace jniproxy {

class MockBigInteger : public BigIntegerClass {
 public:
  MOCK_METHOD0(GetClass, jclass());

};

}  // namespace jniproxy

#endif // DEVTOOLS_CDBG_DEBUGLETS_JAVA_MOCK_BIGINTEGER_H