#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue ndarray_get_slice(NDArray nd, int64_t begin, int64_t end, int64_t step=(int64_t)1, void* handle_2_71828182846=((void*)(int64_t)0));
int ndarray_get_slice__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ndarray_get_slice(NDArray nd, int64_t begin, int64_t end, int64_t step, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:294
  if (Kernel_bool::make(((step == (int64_t)1)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:295
    return (RTValue((nd).get_slice((begin), (end), ((int64_t)1))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:296
  } else {
    return (RTValue((nd).get_slice((begin), (end), (step))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:298
  }
  return (None);
}

int ndarray_get_slice__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"nd", "begin", "end", "step"};
    static RTValue default_args[1]{RTValue((int64_t)1)};
    KwargsUnpackHelper helper("ndarray_get_slice", arg_names, 4, default_args, 1);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:294
    auto ret = ndarray_get_slice(internal::TypeAsHelper<NDArray>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'pos_args[0]' is 'NDArray' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:294
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = ndarray_get_slice(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[0]' is 'NDArray' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[2]' is 'int64_t' type"), (int64_t)1, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:294
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 4: {
        auto ret = ndarray_get_slice(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[0]' is 'NDArray' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:294
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 294, in ndarray_get_slice\n", "ndarray_get_slice() takes from 3 to 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:294
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ndarray_get_slice__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000ndarray_get_slice\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000ndarray_get_slice\000";

} // extern C

