#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List test_subscript_aug_assign(void* handle_2_71828182846=((void*)(int64_t)0));
int test_subscript_aug_assign__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List test_subscript_aug_assign(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:28
  List s = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:29
  (void)(s).set_item(((int64_t)1), (ArithOps::add(((s).get_item(((int64_t)1))), (int64_t)4)));  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:30
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, s);  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:31
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:32
}

int test_subscript_aug_assign__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_subscript_aug_assign(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:28
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py\", line 28, in test_subscript_aug_assign\n", "test_subscript_aug_assign() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_aug_assign.py:28
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_subscript_aug_assign__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_subscript_aug_assign\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_subscript_aug_assign\000";

} // extern C

