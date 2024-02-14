#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue as_argument(void* handle_2_71828182846=((void*)(int64_t)0));
int as_argument__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue as_argument(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:43
  List l = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:44
  (void)(l).append((RTValue(Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u0071\u0077\u0065", 3), (int64_t)123}}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:45
  (void)kernel_object___fused_setitem__(((l).get_item(((int64_t)0))), {(RTView(unicode_view(U"\u007A\u0078\u0063", 3)))}, RTView((int64_t)345));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:46
  (void)(l).append((RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)4), ((int64_t)5)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:47
  return (RTValue(l));  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:48
}

int as_argument__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = as_argument(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:43
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_nested.py\", line 43, in as_argument\n", "as_argument() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_nested.py:43
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)as_argument__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000as_argument\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000as_argument\000";

} // extern C

