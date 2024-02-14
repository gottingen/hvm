#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_print(void* handle_2_71828182846=((void*)(int64_t)0));
int test_print__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_print(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:34
  List test_data = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{(unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5)), ((int64_t)1), (2.9999999999999998890e-01), (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{(unicode_view(U"\u0068\u0069", 2))}))))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:35
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, test_data);  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:36
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, test_data, test_data);  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:37
  (void)kernel_builtins_print(string_view(" @@ ", 4), string_view("\n", 1), stdout, test_data, test_data);  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:38
  return (None);
}

int test_print__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_print(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:34
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_print.py\", line 34, in test_print\n", "test_print() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_print.py:34
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_print__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_print\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_print\000";

} // extern C

