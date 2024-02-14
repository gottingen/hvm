#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t list_extend(void* handle_2_71828182846=((void*)(int64_t)0));
int list_extend__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t list_extend(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:102
  List a = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), (unicode_view(U"\u0061", 1))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:103
  List b = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)5), ((int64_t)6)}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:104
  (void)(a).extend((b));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:105
  return (internal::TypeAsHelper<int64_t>::run(((a).get_item(((int64_t)4))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 106, in list_extend\n", "expect '(a).get_item(((int64_t)4))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:106
}

int list_extend__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = list_extend(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:102
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 102, in list_extend\n", "list_extend() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:102
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_extend__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_extend\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_extend\000";

} // extern C

