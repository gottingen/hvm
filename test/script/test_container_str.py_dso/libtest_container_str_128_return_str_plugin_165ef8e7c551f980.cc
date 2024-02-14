#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode return_str(void* handle_2_71828182846=((void*)(int64_t)0));
int return_str__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode return_str(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:129
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0027\u0020\u0009\u000A\u000B\u000C\u0020\u0022", 8)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:130
}

int return_str__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = return_str(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:129
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 129, in return_str\n", "return_str() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:129
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)return_str__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000return_str\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000return_str\000";

} // extern C

