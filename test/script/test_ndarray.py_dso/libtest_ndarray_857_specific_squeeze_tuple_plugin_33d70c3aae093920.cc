#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray specific_squeeze_tuple(NDArray x, const Tuple& axis, void* handle_2_71828182846=((void*)(int64_t)0));
int specific_squeeze_tuple__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray specific_squeeze_tuple(NDArray x, const Tuple& axis, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:858
  return ((x).Squeeze((axis)));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:859
}

int specific_squeeze_tuple__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"x", "axis"};
    KwargsUnpackHelper helper("specific_squeeze_tuple", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:858
    auto ret = specific_squeeze_tuple(internal::TypeAsHelper<NDArray>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 858, in specific_squeeze_tuple\n", "expect 'pos_args[0]' is 'NDArray' type"), internal::TypeAsHelper<Tuple>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 858, in specific_squeeze_tuple\n", "expect 'pos_args[1]' is 'Tuple' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:858
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = specific_squeeze_tuple(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 858, in specific_squeeze_tuple\n", "expect 'args_t[0]' is 'NDArray' type"), internal::TypeAsHelper<Tuple>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 858, in specific_squeeze_tuple\n", "expect 'args_t[1]' is 'Tuple' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:858
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 858, in specific_squeeze_tuple\n", "specific_squeeze_tuple() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:858
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)specific_squeeze_tuple__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000specific_squeeze_tuple\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000specific_squeeze_tuple\000";

} // extern C

