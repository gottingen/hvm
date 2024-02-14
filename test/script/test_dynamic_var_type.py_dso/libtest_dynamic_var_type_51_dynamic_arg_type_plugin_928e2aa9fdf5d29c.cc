#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue dynamic_arg_type(const Unicode& s, void* handle_2_71828182846=((void*)(int64_t)0));
int dynamic_arg_type__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue dynamic_arg_type(const Unicode& s, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:51
  String s_ssa_74024035 = (kernel_unicode_encode(GenericValueConverter<unicode_view>{}(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:52
  return (RTValue(s_ssa_74024035));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:53
}

int dynamic_arg_type__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"s"};
    KwargsUnpackHelper helper("dynamic_arg_type", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:51
    auto ret = dynamic_arg_type(internal::TypeAsHelper<Unicode>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 51, in dynamic_arg_type\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:51
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = dynamic_arg_type(internal::TypeAsHelper<Unicode>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 51, in dynamic_arg_type\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:51
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 51, in dynamic_arg_type\n", "dynamic_arg_type() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:51
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dynamic_arg_type__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dynamic_arg_type\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dynamic_arg_type\000";

} // extern C

