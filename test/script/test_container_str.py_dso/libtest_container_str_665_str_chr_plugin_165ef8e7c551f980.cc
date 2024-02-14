#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode str_chr(int64_t i, void* handle_2_71828182846=((void*)(int64_t)0));
int str_chr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode str_chr(int64_t i, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:665
  return (kernel_builtins_chr(i));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:666
}

int str_chr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"i"};
    KwargsUnpackHelper helper("str_chr", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:665
    auto ret = str_chr(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 665, in str_chr\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:665
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = str_chr(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 665, in str_chr\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:665
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 665, in str_chr\n", "str_chr() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:665
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_chr__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_chr\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_chr\000";

} // extern C

