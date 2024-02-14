#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue div_int_var_and_int(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int div_int_var_and_int__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue div_int_var_and_int(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:199
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(ArithOps::div(((double)x), 2.0000000000000000000e+01)), (ArithOps::div(((double)(x * (int64_t)-1)), 2.0000000000000000000e+01)), (ArithOps::div(((double)x), -2.0000000000000000000e+01)), (((double)x))})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:200
}

int div_int_var_and_int__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("div_int_var_and_int", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:199
    auto ret = div_int_var_and_int(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 199, in div_int_var_and_int\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:199
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = div_int_var_and_int(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 199, in div_int_var_and_int\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:199
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 199, in div_int_var_and_int\n", "div_int_var_and_int() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:199
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)div_int_var_and_int__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000div_int_var_and_int\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000div_int_var_and_int\000";

} // extern C
