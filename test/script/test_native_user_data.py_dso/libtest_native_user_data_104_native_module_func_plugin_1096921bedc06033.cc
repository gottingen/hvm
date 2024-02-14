#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode native_module_func(const unicode_view& x, void* handle_2_71828182846=((void*)(int64_t)0));
int native_module_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode native_module_func(const unicode_view& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:104
  return (internal::TypeAsHelper<Unicode>::run((kernel_object_decode(call_native_function(string_view("MyNativeFunctionExample", 23), kernel_unicode_encode(x), (int64_t)0), {})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 105, in native_module_func\n", "expect 'kernel_object_decode(call_native_function(string_view(\"MyNativeFunctionExample\", 23), kernel_unicode_encode(x), (int64_t)0), {})' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:105
}

int native_module_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("native_module_func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:104
    auto ret = native_module_func(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 104, in native_module_func\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:104
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = native_module_func(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 104, in native_module_func\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:104
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py\", line 104, in native_module_func\n", "native_module_func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_native_user_data.py:104
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)native_module_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000native_module_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000native_module_func\000";

} // extern C

