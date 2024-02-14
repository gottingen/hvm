#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue tuple_explicit_equal(void* handle_2_71828182846=((void*)(int64_t)0));
int tuple_explicit_equal__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue tuple_explicit_equal(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:184
  Tuple tup1 = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), ((int64_t)2), (unicode_view(U"\u0032", 1)), (string_view("h", 1)), (Kernel_List::make(std::initializer_list<List::value_type>{(unicode_view(U"\u0068", 1)), ((int64_t)1), (string_view("x", 1))}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:185
  Tuple tup2 = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), ((int64_t)2), (unicode_view(U"\u0032", 1)), (string_view("h", 1)), (Kernel_List::make(std::initializer_list<List::value_type>{(unicode_view(U"\u0068", 1)), ((int64_t)1), (string_view("x", 1))}))}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:186
  return (RTValue((tup1 == tup2)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:187
}

int tuple_explicit_equal__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = tuple_explicit_equal(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:184
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py\", line 184, in tuple_explicit_equal\n", "tuple_explicit_equal() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_tuple.py:184
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)tuple_explicit_equal__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000tuple_explicit_equal\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000tuple_explicit_equal\000";

} // extern C

