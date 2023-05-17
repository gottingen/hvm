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

#include <omp.h>
#include <string>
#include <memory>
#include <stdexcept>

#ifdef _WINDOWS
#include "tann/windows_aligned_file_reader.h"
#else

#include "tann/linux_aligned_file_reader.h"

#endif

#include "tann/disk_utils.h"
#include "tann/index.h"
#include "tann/pq_flash_index.h"
#include "tann/utils.h"
#include "hercules/runtime/container/string_helper.h"
#include "hercules/runtime/container/unicode_helper.h"
#include "hercules/runtime/container/unicode_view.h"
#include "hercules/runtime/global_type_index.h"
#include "hercules/runtime/logging.h"
#include "hercules/runtime/native_object_registry.h"
#include "hercules/runtime/type_helper_macros.h"
#include "hercules/runtime/container/ndarray.h"

#ifdef _WINDOWS
typedef WindowsAlignedFileReader PlatformSpecificAlignedFileReader;
#else
typedef LinuxAlignedFileReader PlatformSpecificAlignedFileReader;
#endif

template<class T>
struct DiskIndex {
    tann::PQFlashIndex<T> *_pq_flash_index;
    std::shared_ptr<AlignedFileReader> reader;

    DiskIndex(uint32_t metric, hercules::runtime::string_view index_path_prefix, const uint32_t num_threads,
              const size_t num_nodes_to_cache, const uint32_t cache_mechanism) {

        reader = std::make_shared<PlatformSpecificAlignedFileReader>();
        _pq_flash_index = new tann::PQFlashIndex<T>(reader, static_cast<tann::Metric>(metric));
        std::string index_path_prefix_std{index_path_prefix};
        int load_success = _pq_flash_index->load(num_threads, index_path_prefix_std.c_str());
        if (load_success != 0) {
            throw std::runtime_error("index load failed.");
        }
        if (cache_mechanism == 1) {
            std::string sample_file = index_path_prefix_std + std::string("_sample_data.bin");
            cache_sample_paths(num_nodes_to_cache, sample_file, num_threads);
        } else if (cache_mechanism == 2) {
            cache_bfs_levels(num_nodes_to_cache);
        }
    }

    ~DiskIndex() {
        delete _pq_flash_index;
    }

    void cache_bfs_levels(const size_t num_nodes_to_cache) {
        std::vector<uint32_t> node_list;
        _pq_flash_index->cache_bfs_levels(num_nodes_to_cache, node_list);
        _pq_flash_index->load_cache_list(node_list);
    }

    void cache_sample_paths(const size_t num_nodes_to_cache, const std::string &warmup_query_file,
                            const uint32_t num_threads) {
        if (!file_exists(warmup_query_file)) {
            return;
        }

        std::vector<uint32_t> node_list;
        _pq_flash_index->generate_cache_list_from_sample_queries(warmup_query_file, 15, 4, num_nodes_to_cache,
                                                                 num_threads, node_list);
        _pq_flash_index->load_cache_list(node_list);
    }

    auto search(hercules::runtime::NDArray &query, const uint64_t knn,
                const uint64_t complexity, const uint64_t beam_width) {
        std::vector<uint32_t> ids(knn);
        std::vector<float> dists(knn);

        std::vector<uint32_t> u32_ids(knn);
        std::vector<uint64_t> u64_ids(knn);
        tann::QueryStats stats;
        _pq_flash_index->cached_beam_search(query.RawData(), knn, complexity, u64_ids.data(), dists.data(),
                                            beam_width, false, &stats);

        for (uint64_t i = 0; i < knn; ++i)
            ids[i] = (unsigned) u64_ids[i];

        return std::make_pair(ids, dists);
    }
};




