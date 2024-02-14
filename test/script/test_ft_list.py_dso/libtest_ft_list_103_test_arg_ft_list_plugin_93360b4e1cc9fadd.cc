#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_arg_ft_list(const FTList<int64_t>& a, void* handle_2_71828182846=((void*)(int64_t)0));
int test_arg_ft_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_arg_ft_list(const FTList<int64_t>& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:103
  return (None);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:104
}

int test_arg_ft_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("test_arg_ft_list", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:103
    auto ret = test_arg_ft_list(internal::TypeAsHelper<FTList<int64_t>>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 103, in test_arg_ft_list\n", "expect 'pos_args[0]' is 'FTList<int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:103
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = test_arg_ft_list(internal::TypeAsHelper<FTList<int64_t>>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 103, in test_arg_ft_list\n", "expect 'args_t[0]' is 'FTList<int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:103
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 103, in test_arg_ft_list\n", "test_arg_ft_list() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:103
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_arg_ft_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_arg_ft_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_arg_ft_list\000";

} // extern C
