#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue none_should_be_object(void* handle_2_71828182846=((void*)(int64_t)0));
int none_should_be_object__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue none_should_be_object(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:38
  RTValue a = (None);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:39
  a = RTValue((int64_t)12);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:40
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:41
}

int none_should_be_object__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = none_should_be_object(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:38
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_none.py\", line 38, in none_should_be_object\n", "none_should_be_object() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_none.py:38
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)none_should_be_object__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000none_should_be_object\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000none_should_be_object\000";

} // extern C

