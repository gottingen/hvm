#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t generic_is_contiguous(const RTView& x, void* handle_2_71828182846=((void*)(int64_t)0));
int generic_is_contiguous__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t generic_is_contiguous(const RTView& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:758
  return (internal::TypeAsHelper<int64_t>::run((kernel_object_is_contiguous(x, {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 759, in generic_is_contiguous\n", "expect 'kernel_object_is_contiguous(x, {})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:759
}

int generic_is_contiguous__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("generic_is_contiguous", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:758
    auto ret = generic_is_contiguous((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:758
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = generic_is_contiguous((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:758
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 758, in generic_is_contiguous\n", "generic_is_contiguous() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:758
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_is_contiguous__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_is_contiguous\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_is_contiguous\000";

} // extern C

