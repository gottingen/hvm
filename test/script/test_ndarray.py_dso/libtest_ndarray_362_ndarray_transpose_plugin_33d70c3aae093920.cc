#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray ndarray_transpose(NDArray nd, const RTView& axes, void* handle_2_71828182846=((void*)(int64_t)0));
int ndarray_transpose__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray ndarray_transpose(NDArray nd, const RTView& axes, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:362
  if (Kernel_bool::make((ArithOps::eq(axes, None)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:363
    return ((nd).transpose());  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:364
  } else {
    return ((nd).transpose((axes)));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:366
  }
  return (internal::TypeAsHelper<NDArray>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'NDArray' type"));
}

int ndarray_transpose__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"nd", "axes"};
    KwargsUnpackHelper helper("ndarray_transpose", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:362
    auto ret = ndarray_transpose(internal::TypeAsHelper<NDArray>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 362, in ndarray_transpose\n", "expect 'pos_args[0]' is 'NDArray' type"), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:362
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ndarray_transpose(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 362, in ndarray_transpose\n", "expect 'args_t[0]' is 'NDArray' type"), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:362
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 362, in ndarray_transpose\n", "ndarray_transpose() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:362
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ndarray_transpose__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000ndarray_transpose\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000ndarray_transpose\000";

} // extern C

