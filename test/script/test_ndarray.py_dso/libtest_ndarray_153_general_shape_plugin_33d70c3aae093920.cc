#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List general_shape(const RTView& nd, void* handle_2_71828182846=((void*)(int64_t)0));
int general_shape__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List general_shape(const RTView& nd, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:153
  return (internal::TypeAsHelper<List>::run((kernel_object_shape(nd, {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 154, in general_shape\n", "expect 'kernel_object_shape(nd, {})' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:154
}

int general_shape__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"nd"};
    KwargsUnpackHelper helper("general_shape", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:153
    auto ret = general_shape((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:153
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_shape((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:153
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 153, in general_shape\n", "general_shape() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:153
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_shape__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_shape\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_shape\000";

} // extern C

