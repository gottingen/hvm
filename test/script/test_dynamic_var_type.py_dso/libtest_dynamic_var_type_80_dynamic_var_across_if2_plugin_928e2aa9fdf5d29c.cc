#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue dynamic_var_across_if2(bool cond, void* handle_2_71828182846=((void*)(int64_t)0));
int dynamic_var_across_if2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue dynamic_var_across_if2(bool cond, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:80
  Unicode s = (unicode_view(U"\u0048\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:81
  if (Kernel_bool::make((cond))) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:82
    int64_t s_ssa_74024035 = ((int64_t)3);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:83
    return (RTValue(s_ssa_74024035));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:84
  }
  return (RTValue(s));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:85
}

int dynamic_var_across_if2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"cond"};
    KwargsUnpackHelper helper("dynamic_var_across_if2", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:80
    auto ret = dynamic_var_across_if2(internal::TypeAsHelper<bool>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 80, in dynamic_var_across_if2\n", "expect 'pos_args[0]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:80
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = dynamic_var_across_if2(internal::TypeAsHelper<bool>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 80, in dynamic_var_across_if2\n", "expect 'args_t[0]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:80
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 80, in dynamic_var_across_if2\n", "dynamic_var_across_if2() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:80
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dynamic_var_across_if2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dynamic_var_across_if2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dynamic_var_across_if2\000";

} // extern C

