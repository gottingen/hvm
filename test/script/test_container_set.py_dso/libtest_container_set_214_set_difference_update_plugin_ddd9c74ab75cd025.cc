#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List set_difference_update(void* handle_2_71828182846=((void*)(int64_t)0));
int set_difference_update__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List set_difference_update(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:214
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:215
  Set s = (Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:216
  (void)(s).difference_update({(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)3)})), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4)}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:217
  (void)(ret).append((RTValue(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:218
  s = Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:220
  (void)(s).difference_update({});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:221
  (void)(ret).append((RTValue(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:222
  s = Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:224
  (void)(s).difference_update({(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)4)}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:225
  (void)(ret).append((RTValue(s)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:226
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:227
}

int set_difference_update__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = set_difference_update(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:214
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 214, in set_difference_update\n", "set_difference_update() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:214
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)set_difference_update__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000set_difference_update\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000set_difference_update\000";

} // extern C

