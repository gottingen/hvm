#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List list_extend2_cons(void* handle_2_71828182846=((void*)(int64_t)0));
int list_extend2_cons__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List list_extend2_cons(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:128
  List a = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)5)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:129
  List b = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{(a), (a)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:130
  List l = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:131
  (void)(l).extend((((b).get_item(((int64_t)0)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:132
  (void)(l).extend((((b).get_item(((int64_t)1)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:133
  return (l);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:134
}

int list_extend2_cons__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = list_extend2_cons(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:128
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 128, in list_extend2_cons\n", "list_extend2_cons() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:128
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_extend2_cons__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_extend2_cons\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_extend2_cons\000";

} // extern C

