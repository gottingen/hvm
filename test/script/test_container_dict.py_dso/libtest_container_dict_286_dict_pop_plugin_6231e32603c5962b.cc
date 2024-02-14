#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple dict_pop(void* handle_2_71828182846=((void*)(int64_t)0));
int dict_pop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple dict_pop(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:286
  Dict a = (Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u0062", 1), (int64_t)2}, {unicode_view(U"\u0061", 1), (int64_t)1}, {unicode_view(U"\u0064", 1), (int64_t)4}, {unicode_view(U"\u0063", 1), (int64_t)3}}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:287
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:288
  (void)(ret).append((((a).pop({(unicode_view(U"\u0061", 1))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:289
  (void)(ret).append((((a).pop({(unicode_view(U"\u0061", 1)), (None)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:290
  (void)(ret).append((((a).pop({(unicode_view(U"\u0062", 1)), ((int64_t)3)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:291
  (void)(ret).append((((a).pop({(unicode_view(U"\u0065", 1)), (None)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:292
  (void)(ret).append((((a).pop({(unicode_view(U"\u0065", 1)), ((int64_t)4)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:293
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a), (ret)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:294
}

int dict_pop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = dict_pop(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:286
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 286, in dict_pop\n", "dict_pop() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:286
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dict_pop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dict_pop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dict_pop\000";

} // extern C

