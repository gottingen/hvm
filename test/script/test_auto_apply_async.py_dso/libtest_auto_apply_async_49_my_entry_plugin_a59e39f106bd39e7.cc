#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue my_entry(void* handle_2_71828182846=((void*)(int64_t)0));
int my_entry__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_entry(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:49
  RTView my_func = (GetClosureVar(handle_2_71828182846, string_view("JitOp", 5), string_view("my_func_JitOp_13806357761767700901_0", 36)));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:49
  List a = (kernel_list_fused_repeat_many({(unicode_view(U"\u0048\u0065\u006C\u006C\u006F", 5)), (unicode_view(U"\u0057\u006F\u0072\u006C\u0064", 5))}, (int64_t)10));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:50
  RTValue b = (ApplyAsync(internal::TypeAsHelper<UserDataRef>::run((my_func), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 51, in my_entry\n", "expect 'my_func' is 'UserDataRef' type"), {(a)}, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:51
  return (kernel_object_get(b, {}));  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:52
}

int my_entry__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_entry(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:49
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py\", line 49, in my_entry\n", "my_entry() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_auto_apply_async.py:49
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_entry__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_entry\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000my_entry\000";

} // extern C

