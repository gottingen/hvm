#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool general_in(const RTView& x, void* handle_2_71828182846=((void*)(int64_t)0));
int general_in__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool general_in(const RTView& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:87
  if (Kernel_bool::make((kernel_object___contains__(x, RTView((int64_t)2))))) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:88
    return ((bool)1);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:89
  } else {
    return ((bool)0);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:91
  }
  return (internal::TypeAsHelper<bool>::run((None), __FILE__, __LINE__, "", "expect 'None' is 'bool' type"));
}

int general_in__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("general_in", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:87
    auto ret = general_in((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:87
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = general_in((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:87
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 87, in general_in\n", "general_in() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:87
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_in__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_in\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_in\000";

} // extern C

