#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode inner_func(void* handle_2_71828182846=((void*)(int64_t)0));
int inner_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode inner_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:45
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0069\u006E\u006E\u0065\u0072\u005F\u0066\u0075\u006E\u0063", 10)));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:46
}

int inner_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = inner_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:45
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 45, in inner_func\n", "inner_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:45
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)inner_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000inner_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000inner_func\000";

} // extern C

