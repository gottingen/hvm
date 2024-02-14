#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double add(double a, double b, void* handle_2_71828182846=((void*)(int64_t)0));
int add__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue call_external_module_attr(void* handle_2_71828182846=((void*)(int64_t)0));
int call_external_module_attr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double add(double a, double b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:31
  return ((a + b));  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:32
}

int add__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("add", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:31
    auto ret = add(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/external_lib.py\", line 31, in add\n", "expect 'pos_args[0]' is 'double' type"), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/external_lib.py\", line 31, in add\n", "expect 'pos_args[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = add(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/external_lib.py\", line 31, in add\n", "expect 'args_t[0]' is 'double' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/external_lib.py\", line 31, in add\n", "expect 'args_t[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/external_lib.py\", line 31, in add\n", "add() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/external_lib.py:31
    }
  }

  return 0;
}

HERCULES_DLL RTValue call_external_module_attr(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:43
  return (RTValue(add(1.0000000000000000000e+00, 2.0000000000000000000e+00, handle_2_71828182846)));  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:44
}

int call_external_module_attr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = call_external_module_attr(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:43
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py\", line 43, in call_external_module_attr\n", "call_external_module_attr() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:43
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)call_external_module_attr__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000call_external_module_attr\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000add\000call_external_module_attr\000";

} // extern C

