#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List sorted_list(const Tuple& it, const RTView& key=None, bool reverse=(bool)0, void* handle_2_71828182846=((void*)(int64_t)0));
int sorted_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List sorted_list(const Tuple& it, const RTView& key, bool reverse, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
  return (kernel_builtins_sorted(it, key, reverse));  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:86
}

int sorted_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"it", "key", "reverse"};
    static RTValue default_args[2]{RTValue(None), RTValue((bool)0)};
    KwargsUnpackHelper helper("sorted_list", arg_names, 3, default_args, 2);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
    auto ret = sorted_list(internal::TypeAsHelper<Tuple>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "expect 'pos_args[0]' is 'Tuple' type"), (pos_args[1]), internal::TypeAsHelper<bool>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "expect 'pos_args[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = sorted_list(internal::TypeAsHelper<Tuple>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "expect 'args_t[0]' is 'Tuple' type"), None, (bool)0, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 2: {
        auto ret = sorted_list(internal::TypeAsHelper<Tuple>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "expect 'args_t[0]' is 'Tuple' type"), (args_t[1]), (bool)0, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 3: {
        auto ret = sorted_list(internal::TypeAsHelper<Tuple>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "expect 'args_t[0]' is 'Tuple' type"), (args_t[1]), internal::TypeAsHelper<bool>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "expect 'args_t[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_sorted.py\", line 85, in sorted_list\n", "sorted_list() takes from 1 to 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_sorted.py:85
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)sorted_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000sorted_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000sorted_list\000";

} // extern C
