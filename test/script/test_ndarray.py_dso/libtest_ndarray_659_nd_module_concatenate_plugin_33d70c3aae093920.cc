#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray nd_module_concatenate(const RTView& seq, const RTView& axis, void* handle_2_71828182846=((void*)(int64_t)0));
int nd_module_concatenate__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray nd_module_concatenate(const RTView& seq, const RTView& axis, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:659
  if (Kernel_bool::make((ArithOps::eq(axis, None)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:660
    return (kernel_nd_module_concatenate({(seq)}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:661
  } else {
    return (kernel_nd_module_concatenate({(seq), (axis)}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:663
  }
  return (internal::TypeAsHelper<NDArray>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'NDArray' type"));
}

int nd_module_concatenate__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"seq", "axis"};
    KwargsUnpackHelper helper("nd_module_concatenate", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:659
    auto ret = nd_module_concatenate((pos_args[0]), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:659
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = nd_module_concatenate((args_t[0]), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:659
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 659, in nd_module_concatenate\n", "nd_module_concatenate() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:659
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)nd_module_concatenate__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000nd_module_concatenate\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000nd_module_concatenate\000";

} // extern C

