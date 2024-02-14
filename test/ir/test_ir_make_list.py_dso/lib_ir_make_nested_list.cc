#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List make_nested_list();
int make_nested_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List make_nested_list() {
  List result;
  List item0;
  List item1;
  (void)(item0).append((RTValue(string_view("hello", 5))));
  (void)(item0).append((RTValue((int64_t)125)));
  (void)(item1).append((RTValue(string_view("hi", 2))));
  (void)(item1).append((RTValue((int64_t)32)));
  (void)(result).append((RTValue(item0)));
  (void)(result).append((RTValue(item1)));
  return (result);
}

int make_nested_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = make_nested_list();
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("", "make_nested_list() takes 0 positional arguments but ", num_args, " were given");} break;
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)make_nested_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000make_nested_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "0\000";

} // extern C

