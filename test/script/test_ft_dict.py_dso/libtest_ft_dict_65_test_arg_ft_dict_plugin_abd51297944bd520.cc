#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_arg_ft_dict(const FTDict<int64_t, int64_t>& a, void* handle_2_71828182846=((void*)(int64_t)0));
int test_arg_ft_dict__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_arg_ft_dict(const FTDict<int64_t, int64_t>& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:65
  return (None);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:66
}

int test_arg_ft_dict__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("test_arg_ft_dict", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:65
    auto ret = test_arg_ft_dict(internal::TypeAsHelper<FTDict<int64_t, int64_t>>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py\", line 65, in test_arg_ft_dict\n", "expect 'pos_args[0]' is 'FTDict<int64_t, int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:65
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = test_arg_ft_dict(internal::TypeAsHelper<FTDict<int64_t, int64_t>>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py\", line 65, in test_arg_ft_dict\n", "expect 'args_t[0]' is 'FTDict<int64_t, int64_t>' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:65
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py\", line 65, in test_arg_ft_dict\n", "test_arg_ft_dict() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_dict.py:65
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_arg_ft_dict__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_arg_ft_dict\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_arg_ft_dict\000";

} // extern C

