#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray general_transpose(const RTView& nd, const RTView& axes, void* handle_2_71828182846=((void*)(int64_t)0));
int general_transpose__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray general_transpose(const RTView& nd, const RTView& axes, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:439
  if (Kernel_bool::make((ArithOps::eq(axes, None)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:440
    return (internal::TypeAsHelper<NDArray>::run((kernel_object_transpose(nd, {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 441, in general_transpose\n", "expect 'kernel_object_transpose(nd, {})' is 'NDArray' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:441
  } else {
    return (internal::TypeAsHelper<NDArray>::run((kernel_object_transpose(nd, {(axes)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 443, in general_transpose\n", "expect 'kernel_object_transpose(nd, {(axes)})' is 'NDArray' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:443
  }
  return (internal::TypeAsHelper<NDArray>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'NDArray' type"));
}

int general_transpose__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"nd", "axes"};
    KwargsUnpackHelper helper("general_transpose", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:439
    auto ret = general_transpose((pos_args[0]), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:439
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = general_transpose((args_t[0]), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:439
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 439, in general_transpose\n", "general_transpose() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:439
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_transpose__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_transpose\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_transpose\000";

} // extern C

