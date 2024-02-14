#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode make_str(void* handle_2_71828182846=((void*)(int64_t)0));
int make_str__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue call_external_module_attr_with_another_call(void* handle_2_71828182846=((void*)(int64_t)0));
int call_external_module_attr_with_another_call__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode make_str(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:45
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0065\u0078\u0074\u0065\u0072\u006E\u0061\u006C\u005F\u006C\u0069\u0062", 12)));  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:46
}

int make_str__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = make_str(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:45
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/external_lib.py\", line 45, in make_str\n", "make_str() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:45
  }
  return 0;
}

HERCULES_DLL RTValue call_external_module_attr_with_another_call(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:51
  return (RTValue(kernel_unicode_encode(GenericValueConverter<unicode_view>{}(make_str(handle_2_71828182846)))));  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:52
}

int call_external_module_attr_with_another_call__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = call_external_module_attr_with_another_call(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:51
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py\", line 51, in call_external_module_attr_with_another_call\n", "call_external_module_attr_with_another_call() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:51
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)call_external_module_attr_with_another_call__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000call_external_module_attr_with_another_call\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000make_str\000call_external_module_attr_with_another_call\000";

} // extern C

