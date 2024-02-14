#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue test_print_ft_list_impl(void* handle_2_71828182846=((void*)(int64_t)0));
int test_print_ft_list_impl__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue test_print_ft_list_impl(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:30
  FTList<int64_t> a = (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:31
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, a);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:32
  FTList<Unicode> b = (Kernel_FTList::make<Unicode>(std::initializer_list<FTList<Unicode>::value_type>{(unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5)), (unicode_view(U"\u0077\u006F\u0072\u006C\u0064", 5))}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:33
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, b);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:34
  FTList<String> c = (Kernel_FTList::make<String>(std::initializer_list<FTList<String>::value_type>{(string_view("hello", 5)), (string_view("world", 5))}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:35
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, c);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:36
  return (None);
}

int test_print_ft_list_impl__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_print_ft_list_impl(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:30
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_list.py\", line 30, in test_print_ft_list_impl\n", "test_print_ft_list_impl() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_list.py:30
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_print_ft_list_impl__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_print_ft_list_impl\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_print_ft_list_impl\000";

} // extern C

