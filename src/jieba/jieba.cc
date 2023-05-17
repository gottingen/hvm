// Copyright 2023 HVM author.
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
#include <map>
#include <memory>

#include <hercules/runtime/algorithm/cedar.h>
#include <hercules/runtime/container.h>
#include <hercules/runtime/file_reader.h>
#include <hercules/runtime/file_util.h>
#include "libtext/jieba/seg.h"
#include "hercules/runtime/container/string_helper.h"
#include "hercules/runtime/container/unicode_helper.h"
#include "hercules/runtime/container/unicode_view.h"
#include "hercules/runtime/global_type_index.h"
#include "hercules/runtime/logging.h"
#include "hercules/runtime/native_object_registry.h"
#include "hercules/runtime/type_helper_macros.h"

#include "common_funcs.h"

namespace hvm {

    namespace details {
        hercules::runtime::List std_string_list_to_Unicode_List(const std::vector<std::string> &list_of_words_std) {
            hercules::runtime::List list_of_words;
            list_of_words.reserve(list_of_words_std.size());
            for (const auto &word: list_of_words_std) {
                list_of_words.push_back(std::move(hercules::runtime::StringHelper::Decode(word)));
            }
            return list_of_words;
        }

        hercules::runtime::List std_string_list_to_String_List(const std::vector<std::string> &list_of_words_std) {
            hercules::runtime::List list_of_words;
            list_of_words.reserve(list_of_words_std.size());
            for (const auto &word: list_of_words_std) {
                list_of_words.push_back(hercules::runtime::String(word));
            }
            return list_of_words;
        }

    }  // namespace details

    class CPPJieba {
    public:
        CPPJieba(hercules::runtime::string_view dict_path,
                 hercules::runtime::string_view model_path,
                 hercules::runtime::string_view user_dict_path,
                 hercules::runtime::string_view idfPath,
                 hercules::runtime::string_view stopWordPath) {
            jieba_ptr = std::make_shared<libtext::Segmentor>(std::string{dict_path},
                                                             std::string{model_path},
                                                             std::string{user_dict_path},
                                                             std::string{idfPath},
                                                             std::string{stopWordPath});
        }

        virtual ~CPPJieba() = default;

    public:
        hercules::runtime::RTValue
        lcut(hercules::runtime::unicode_view sentence, bool cut_all = false, bool HMM = true);

        hercules::runtime::RTValue lcut(hercules::runtime::string_view sentence, bool cut_all = false, bool HMM = true);

        hercules::runtime::RTValue lcut_for_search(hercules::runtime::unicode_view sentence, bool HMM = true);

        hercules::runtime::RTValue lcut_for_search(hercules::runtime::string_view sentence, bool HMM = true);

    private:
        std::shared_ptr<libtext::Segmentor> jieba_ptr;
    };

    hercules::runtime::RTValue CPPJieba::lcut(hercules::runtime::unicode_view sentence, bool cut_all, bool HMM) {
        MXCHECK(jieba_ptr != nullptr) << "jieba is not initialized.";
        std::string sentence_std = hercules::runtime::UnicodeHelper::Encode(sentence);
        std::vector<std::string> list_of_words_std;
        if (cut_all) {
            jieba_ptr->CutAll(sentence_std, list_of_words_std);
        } else {
            jieba_ptr->Cut(sentence_std, list_of_words_std, HMM);
        }
        return details::std_string_list_to_Unicode_List(list_of_words_std);
    }

    hercules::runtime::RTValue CPPJieba::lcut(hercules::runtime::string_view sentence, bool cut_all, bool HMM) {
        MXCHECK(jieba_ptr != nullptr) << "jieba is not initialized.";
        std::string sentence_std{sentence};
        std::vector<std::string> list_of_words_std;
        if (cut_all) {
            jieba_ptr->CutAll(sentence_std, list_of_words_std);
        } else {
            jieba_ptr->Cut(sentence_std, list_of_words_std, HMM);
        }
        return details::std_string_list_to_String_List(list_of_words_std);
    }

    hercules::runtime::RTValue CPPJieba::lcut_for_search(hercules::runtime::unicode_view sentence, bool HMM) {
        MXCHECK(jieba_ptr != nullptr) << "jieba is not initialized.";
        std::string sentence_std = hercules::runtime::UnicodeHelper::Encode(sentence);
        std::vector<std::string> list_of_words_std;
        jieba_ptr->CutForSearch(sentence_std, list_of_words_std, HMM);
        return details::std_string_list_to_Unicode_List(list_of_words_std);
    }

    hercules::runtime::RTValue CPPJieba::lcut_for_search(hercules::runtime::string_view sentence, bool HMM) {
        MXCHECK(jieba_ptr != nullptr) << "jieba is not initialized.";
        std::string sentence_std{sentence};
        std::vector<std::string> list_of_words_std;
        jieba_ptr->CutForSearch(sentence_std, list_of_words_std, HMM);
        return details::std_string_list_to_String_List(list_of_words_std);
    }

    using text_cutter_CPPJieba = CPPJieba;
    HERCULES_REGISTER_NATIVE_OBJECT(text_cutter_CPPJieba)
            .SetConstructor([](hercules::runtime::PyArgs args) -> std::shared_ptr<void> {
                MXCHECK_EQ(args.size(), 5) << "[CPPJieba] Expect 5 arguments but get " << args.size();
                hercules::runtime::String dict_path = commons::details::GetString(args[0], __FILE__, __LINE__);
                hercules::runtime::String model_path = commons::details::GetString(args[1], __FILE__, __LINE__);
                hercules::runtime::String user_dict_path = commons::details::GetString(args[2], __FILE__, __LINE__);
                hercules::runtime::String idfPath = commons::details::GetString(args[3], __FILE__, __LINE__);
                hercules::runtime::String stopWordPath = commons::details::GetString(args[4], __FILE__, __LINE__);
                return std::make_shared<CPPJieba>(
                        dict_path, model_path, user_dict_path, idfPath, stopWordPath);
            })
            .RegisterFunction("lcut", [](void *self, hercules::runtime::PyArgs args) -> hercules::runtime::RTValue {
                switch (args[0].type_code()) {
                    case hercules::runtime::TypeIndex::kRuntimeUnicode: {
                        return reinterpret_cast<CPPJieba *>(self)->lcut(
                                args[0].AsNoCheck<hercules::runtime::unicode_view>(), args[1].As<bool>(),
                                args[2].As<bool>());
                    }
                        break;
                    case hercules::runtime::TypeIndex::kRuntimeString: {
                        return reinterpret_cast<CPPJieba *>(self)->lcut(
                                args[0].AsNoCheck<hercules::runtime::string_view>(), args[1].As<bool>(),
                                args[2].As<bool>());
                    }
                        break;
                    default: {
                        MXCHECK(false) << "[Jieba] unsupported data type: " << args[0].type_name();
                    }
                        break;
                }
                return hercules::runtime::List{};
            })
            .RegisterFunction("lcut_for_search",
                              [](void *self, hercules::runtime::PyArgs args) -> hercules::runtime::RTValue {
                                  switch (args[0].type_code()) {
                                      case hercules::runtime::TypeIndex::kRuntimeUnicode: {
                                          return reinterpret_cast<CPPJieba *>(self)->lcut_for_search(
                                                  args[0].AsNoCheck<hercules::runtime::unicode_view>(),
                                                  args[1].As<bool>());
                                      }
                                          break;
                                      case hercules::runtime::TypeIndex::kRuntimeString: {
                                          return reinterpret_cast<CPPJieba *>(self)->lcut_for_search(
                                                  args[0].AsNoCheck<hercules::runtime::string_view>(),
                                                  args[1].As<bool>());
                                      }
                                          break;
                                      default: {
                                          MXCHECK(false) << "[Jieba] unsupported data type: " << args[0].type_name();
                                      }
                                          break;
                                  }
                                  return hercules::runtime::List{};
                              });

}  // namespace hvm
