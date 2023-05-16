// Copyright 2022 ByteDance Ltd. and/or its affiliates.
/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#pragma once

#include <hercules/runtime/container.h>

namespace hvm::commons::details {

    template<int SMALL_SIZE>
    struct SmallBuffer {
    public:
        explicit SmallBuffer(int size) {
            if (size > SMALL_SIZE) {
                large.reset(new char[size]);
                data = large.get();
            } else {
                data = small;
            }
        }

        char *Data() const noexcept {
            return data;
        }

    private:
        char *data;
        char small[SMALL_SIZE];
        std::unique_ptr<char[]> large;
    };

    static inline hercules::runtime::String GetString(const hercules::runtime::Any &a, const char *file, int line) {
        switch (a.type_code()) {
            case hercules::runtime::TypeIndex::kRuntimeString: {
                return a.AsNoCheck<hercules::runtime::String>();
            }
                break;
            case hercules::runtime::TypeIndex::kRuntimeUnicode: {
                return hercules::runtime::UnicodeHelper::Encode(a.AsNoCheck<hercules::runtime::unicode_view>());
            }
                break;
            default: {
                auto ty_name = a.type_name();
                std::string errmsg;
                errmsg.append("expect type is 'py::str' or 'py::bytes', but get '");
                errmsg.append(ty_name.data(), ty_name.size());
                errmsg.append("'");
                throw hercules::runtime::TypeError(file, line, std::move(errmsg));
            }
        }
        return {};
    }

}  // namespace hvm::commons::details
