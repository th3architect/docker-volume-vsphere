// Copyright 2016 VMware, Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Shared info (magic, err. codes, etc) on vSocket command channel

#ifndef _CONNECTION_TYPES_H_
#define _CONNECTION_TYPES_H_

#define MAGIC 0xbadbeef

// -1 always indicates failure
#define CONN_FAILURE (-1)

// 0 is usually success. Note: sometimes we return socket FD on success
#define CONN_SUCCESS  (0)


#endif // _CONNECTION_TYPES_H_

