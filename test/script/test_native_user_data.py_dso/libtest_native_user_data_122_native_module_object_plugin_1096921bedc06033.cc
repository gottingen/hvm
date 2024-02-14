#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode native_module_object(void* handle_2_71828182846=((void*)(int64_t)0));
int native_module_object__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode native_module_object(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:122
  UserDataRef obj = (make_native_userdata(string_view("MySimpleNativeDataExample", 25)));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:123
  return (internal::TypeAsHelper<Unicode>::run((kernel_object_decode((obj).generic_call_attr("get_content", {}), {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 124, in native_module_object\n", "expect 'kernel_object_decode((obj).generic_call_attr(\"get_content\", {}), {})' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:124
}

int native_module_object__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = native_module_object(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:122
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 122, in native_module_object\n", "native_module_object() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:122
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)native_module_object__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000native_module_object\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000native_module_object\000";

} // extern C

