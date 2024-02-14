#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue dynamic_loop_var_type(void* handle_2_71828182846=((void*)(int64_t)0));
int dynamic_loop_var_type__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue dynamic_loop_var_type(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:38
  Unicode s = (unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:39
  List li = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:40
  {
    Unicode const& __reserved_eval_cons_si51255_0 = s;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:41
    auto __reserved_iter_si51760_0 = __reserved_eval_cons_si51255_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:41
    auto __reserved_iter_end_si18274_0 = __reserved_eval_cons_si51255_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:41
    while ((__reserved_iter_si51760_0 != __reserved_iter_end_si18274_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:41
      unicode_view si = unicode_view(__reserved_iter_si51760_0, 1);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:41
      ++__reserved_iter_si51760_0;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:41
      {
        String si_ssa_49819269 = (kernel_unicode_encode(si));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:42
        (void)(li).append((RTValue(si_ssa_49819269)));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:43
      }
    }
  }
  return (RTValue(kernel_str_join(string_view(" ", 1), li)));  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:44
}

int dynamic_loop_var_type__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = dynamic_loop_var_type(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:38
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py\", line 38, in dynamic_loop_var_type\n", "dynamic_loop_var_type() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dynamic_var_type.py:38
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dynamic_loop_var_type__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dynamic_loop_var_type\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dynamic_loop_var_type\000";

} // extern C

