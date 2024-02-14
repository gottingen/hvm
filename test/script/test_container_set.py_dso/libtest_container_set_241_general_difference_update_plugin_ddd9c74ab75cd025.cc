#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List general_difference_update(void* handle_2_71828182846=((void*)(int64_t)0));
int general_difference_update__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List general_difference_update(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:241
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:242
  RTValue s = (((Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}))})).get_item(((int64_t)0))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:243
  (void)kernel_object_difference_update(s, {(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)2), ((int64_t)3)})), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)4)}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:244
  (void)(ret).append((s));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:245
  s = ((Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}))})).get_item(((int64_t)0)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:247
  (void)kernel_object_difference_update(s, {});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:248
  (void)(ret).append((s));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:249
  s = ((Kernel_List::make(std::initializer_list<List::value_type>{(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}))})).get_item(((int64_t)0)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:251
  (void)kernel_object_difference_update(s, {(Kernel_Set::make(std::initializer_list<Set::value_type>{((int64_t)4)}))});  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:252
  (void)(ret).append((s));  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:253
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:254
}

int general_difference_update__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = general_difference_update(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:241
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_set.py\", line 241, in general_difference_update\n", "general_difference_update() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_set.py:241
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_difference_update__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_difference_update\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_difference_update\000";

} // extern C

