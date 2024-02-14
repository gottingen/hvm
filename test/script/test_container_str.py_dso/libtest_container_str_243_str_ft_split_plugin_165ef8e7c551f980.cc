#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue str_ft_split(void* handle_2_71828182846=((void*)(int64_t)0));
int str_ft_split__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue str_ft_split(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:244
  String a = (string_view("hello world", 11));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:245
  FTList<String> ret1 = (kernel_str_split_ft<String>(a, string_view(" ", 1)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:246
  FTList<RTValue> ret2 = (kernel_str_split_ft<RTValue>(a, string_view(" ", 1)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:247
  if (!(ArithOps::eq(ret1, ret2))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 248, in str_ft_split\n", "ret1 != ret2"); }  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:248
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, ret1);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:249
  Unicode b = (unicode_view(U"\u0068\u0065\u006C\u006C\u006F\u0020\u0077\u006F\u0072\u006C\u0064", 11));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:251
  FTList<Unicode> ret3 = (kernel_unicode_split_ft<Unicode>(b, unicode_view(U"\u0020", 1)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:252
  FTList<RTValue> ret4 = (kernel_unicode_split_ft<RTValue>(b, unicode_view(U"\u0020", 1)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:253
  if (!(ArithOps::eq(ret3, ret4))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 254, in str_ft_split\n", "ret3 != ret4"); }  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:254
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, ret3);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:255
  return (None);
}

int str_ft_split__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = str_ft_split(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:244
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 244, in str_ft_split\n", "str_ft_split() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:244
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_ft_split__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_ft_split\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_ft_split\000";

} // extern C

