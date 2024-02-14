#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode specific_get_device(NDArray x, void* handle_2_71828182846=((void*)(int64_t)0));
int specific_get_device__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode specific_get_device(NDArray x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:740
  return ((x).Device());  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:741
}

int specific_get_device__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("specific_get_device", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:740
    auto ret = specific_get_device(internal::TypeAsHelper<NDArray>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 740, in specific_get_device\n", "expect 'pos_args[0]' is 'NDArray' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:740
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = specific_get_device(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 740, in specific_get_device\n", "expect 'args_t[0]' is 'NDArray' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:740
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 740, in specific_get_device\n", "specific_get_device() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:740
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)specific_get_device__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000specific_get_device\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000specific_get_device\000";

} // extern C

