////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import "RLMRealm.h"
#import "RLMSchema.h"
#import "RLMAccessor.h"

#import <tightdb/group.hpp>

// RLMRealm private members
@interface RLMRealm () {
    @public
    // expose ivar to to avoid objc messages in accessors
    BOOL _inWriteTransaction;
}
@property (nonatomic, readonly) BOOL inWriteTransaction;
@property (nonatomic, readonly) tightdb::Group *group;
@property (nonatomic) RLMSchema *schema;
@property (nonatomic) NSUInteger schemaVersion;

// private constructor
+ (instancetype)realmWithPath:(NSString *)path
                     readOnly:(BOOL)readonly
                      dynamic:(BOOL)dynamic
                        error:(NSError **)outError;
@end
