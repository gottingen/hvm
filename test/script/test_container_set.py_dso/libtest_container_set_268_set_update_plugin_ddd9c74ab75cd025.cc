#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue set_update(void* handle_2_71828182846=((void*)(int64_t)0));
int set_update__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue set_update(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:268
  Set a = (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:269
  (void)(a).update({(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)4)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)5)})), (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)3)}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:270
  return (RTValue(a));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:271
}

int set_update__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = set_update(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:268
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 268, in set_update\n", "set_update() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:268
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_update__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_update\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_update\000";

} // extern C

