#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue print_func(void* handle_2_71828182846=((void*)(int64_t)0));
int print_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue print_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:24
  Unicode s = (unicode_view(U"\u0061\u0062\u0063", 3));  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:25
  String b = (string_view("def", 3));  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:26
  int64_t i = ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:27
  double f = (1.1999999999999999556e+00);  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:28
  List l = (Kernel_List::make(std::initializer_list<List::value_type>{(s), (b), (i), (f)}));  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:29
  Dict d = (Kernel_Dict::make(std::initializer_list<Dict::value_type>{{b, f}, {i, s}}));  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:30
  (void)kernel_builtins_print(string_view("||", 2), string_view("\n", 1), stdout, s, b, i, f, l, d, s);  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:31
  return (None);
}

int print_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = print_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:24
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_print_script.py\", line 24, in print_func\n", "print_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_print_script.py:24
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)print_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000print_func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000print_func\000";

} // extern C

