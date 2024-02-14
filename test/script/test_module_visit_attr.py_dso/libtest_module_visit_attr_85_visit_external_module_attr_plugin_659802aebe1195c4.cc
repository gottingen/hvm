#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue visit_external_module_attr(void* handle_2_71828182846=((void*)(int64_t)0));
int visit_external_module_attr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue visit_external_module_attr(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:85
  RTValue a1 = (None);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:86
  int64_t a2 = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:87
  double a3 = (1.0000000000000000555e-01);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:88
  bool a4 = ((bool)1);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:89
  Unicode a5 = (unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:90
  return (RTValue(Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a1), (a2), (a3), (a4), (a5)})));  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:91
}

int visit_external_module_attr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = visit_external_module_attr(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:85
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py\", line 85, in visit_external_module_attr\n", "visit_external_module_attr() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_visit_attr.py:85
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)visit_external_module_attr__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000visit_external_module_attr\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000visit_external_module_attr\000";

} // extern C
