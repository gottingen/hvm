#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_trie_prefix_search(void* handle_2_71828182846=((void*)(int64_t)0));
int test_trie_prefix_search__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_trie_prefix_search(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:89
  Trie trie1 = (Kernel_Trie::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:90
  (void)(trie1).update((unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5)), ((int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:91
  (void)(trie1).update((unicode_view(U"\u0068\u0065\u006C\u006C\u006F\u0020\u0077\u006F\u0072\u006C\u0064", 11)), ((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:92
  Tuple unpack_74024035 = ((trie1).prefix_search((unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:94
  if (!(((unpack_74024035).size() == (int64_t)2))) { THROW_PY_AssertionError("", "ValueError: values to unpack mismatch (expected 2)"); }
  int64_t mblen = (internal::TypeAsHelper<int64_t>::run(((unpack_74024035).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_trie.py\", line 94, in test_trie_prefix_search\n", "expect '(unpack_74024035).get_item(((int64_t)0))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:94
  int64_t idx = (internal::TypeAsHelper<int64_t>::run(((unpack_74024035).get_item(((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_trie.py\", line 94, in test_trie_prefix_search\n", "expect '(unpack_74024035).get_item(((int64_t)1))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:94
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(mblen), (idx)})));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:95
}

int test_trie_prefix_search__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_trie_prefix_search(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:89
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_trie.py\", line 89, in test_trie_prefix_search\n", "test_trie_prefix_search() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:89
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_trie_prefix_search__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_trie_prefix_search\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_trie_prefix_search\000";

} // extern C

