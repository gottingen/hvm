#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue json_load_func(const unicode_view& fn, void* handle_2_71828182846=((void*)(int64_t)0));
int json_load_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue json_load_func(const unicode_view& fn, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:60
  File fp = (kernel_file_open({(fn), (unicode_view(U"\u0072", 1)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))}));  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:61
  return (kernel_json_load({(fp)}));  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:62
}

int json_load_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"fn"};
    KwargsUnpackHelper helper("json_load_func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:60
    auto ret = json_load_func(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 60, in json_load_func\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:60
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = json_load_func(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 60, in json_load_func\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:60
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 60, in json_load_func\n", "json_load_func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:60
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)json_load_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000json_load_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000json_load_func\000";

} // extern C

