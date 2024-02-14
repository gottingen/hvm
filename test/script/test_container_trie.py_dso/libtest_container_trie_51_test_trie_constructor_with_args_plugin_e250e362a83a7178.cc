#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Trie test_trie_constructor_with_args(void* handle_2_71828182846=((void*)(int64_t)0));
int test_trie_constructor_with_args__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Trie test_trie_constructor_with_args(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:52
  Dict index_data = (Kernel_Dict::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:53
  (void)(index_data).set_item((RTValue(unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5))), (RTValue((int64_t)1)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:54
  (void)(index_data).set_item((RTValue(unicode_view(U"\u0068\u0065\u006C\u006C\u006F\u0020\u0077\u006F\u0072\u006C\u0064", 11))), (RTValue((int64_t)2)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:55
  Trie trie2 = (Kernel_Trie::make((index_data)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:56
  return (trie2);  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:57
}

int test_trie_constructor_with_args__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_trie_constructor_with_args(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:52
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_trie.py\", line 52, in test_trie_constructor_with_args\n", "test_trie_constructor_with_args() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_trie.py:52
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_trie_constructor_with_args__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_trie_constructor_with_args\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_trie_constructor_with_args\000";

} // extern C

