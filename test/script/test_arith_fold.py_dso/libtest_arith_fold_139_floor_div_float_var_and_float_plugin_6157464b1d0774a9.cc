#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue floor_div_float_var_and_float(double x, void* handle_2_71828182846=((void*)(int64_t)0));
int floor_div_float_var_and_float__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue floor_div_float_var_and_float(double x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:139
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(ArithOps::floordiv(x, 2.0100000000000001421e+01)), (ArithOps::floordiv((x * -1.0000000000000000000e+00), 2.0100000000000001421e+01)), (ArithOps::floordiv(x, -2.0100000000000001421e+01)), (ArithOps::floordiv(x, 1.0000000000000000000e+00))})));  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:140
}

int floor_div_float_var_and_float__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("floor_div_float_var_and_float", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:139
    auto ret = floor_div_float_var_and_float(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 139, in floor_div_float_var_and_float\n", "expect 'pos_args[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:139
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = floor_div_float_var_and_float(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 139, in floor_div_float_var_and_float\n", "expect 'args_t[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:139
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py\", line 139, in floor_div_float_var_and_float\n", "floor_div_float_var_and_float() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith_fold.py:139
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)floor_div_float_var_and_float__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000floor_div_float_var_and_float\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000floor_div_float_var_and_float\000";

} // extern C
