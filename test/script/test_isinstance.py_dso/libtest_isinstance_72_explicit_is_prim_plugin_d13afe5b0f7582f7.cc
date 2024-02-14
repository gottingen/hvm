#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue explicit_is_prim(void* handle_2_71828182846=((void*)(int64_t)0));
int explicit_is_prim__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue explicit_is_prim(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_isinstance.py:72
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((bool)1), ((bool)0), ((bool)0), ((bool)1)})));  // /home/jeff/github/gottingen/hvm/test/script/test_isinstance.py:73
}

int explicit_is_prim__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = explicit_is_prim(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_isinstance.py:72
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_isinstance.py\", line 72, in explicit_is_prim\n", "explicit_is_prim() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_isinstance.py:72
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)explicit_is_prim__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000explicit_is_prim\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000explicit_is_prim\000";

} // extern C

