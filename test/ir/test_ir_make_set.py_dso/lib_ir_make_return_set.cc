#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Set make_return_set();
int make_return_set__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Set make_return_set() {
  Set result;
  (void)(result).add((RTValue(string_view("hello", 5))));
  (void)(result).add((RTValue((int64_t)33)));
  (void)(result).add((RTValue((int64_t)33)));
  return (result);
}

int make_return_set__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = make_return_set();
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("", "make_return_set() takes 0 positional arguments but ", num_args, " were given");} break;
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)make_return_set__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000make_return_set\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "0\000";

} // extern C

