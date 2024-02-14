#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue generic_set_update(void* handle_2_71828182846=((void*)(int64_t)0));
int generic_set_update__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue generic_set_update(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:280
  RTValue a = (((Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}))})).get_item(((int64_t)0))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:281
  (void)kernel_object_update(a, {(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)4)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)5)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)3)}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:282
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:283
}

int generic_set_update__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = generic_set_update(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:280
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 280, in generic_set_update\n", "generic_set_update() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:280
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)generic_set_update__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000generic_set_update\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000generic_set_update\000";

} // extern C

