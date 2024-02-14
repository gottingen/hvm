#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple test_unpack_list(void* handle_2_71828182846=((void*)(int64_t)0));
int test_unpack_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple test_unpack_list(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:44
  List al = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:45
  if (!(((al).size() == (int64_t)3))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 46, in test_unpack_list\n", "ValueError: values to unpack mismatch (expected 3)"); }  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:46
  RTValue a = (((al).get_item(((int64_t)0))));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:46
  RTValue b = (((al).get_item(((int64_t)1))));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:46
  RTValue c = (((al).get_item(((int64_t)2))));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:46
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a), (b), (c)}));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:47
}

int test_unpack_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_unpack_list(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:44
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 44, in test_unpack_list\n", "test_unpack_list() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:44
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_unpack_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_unpack_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_unpack_list\000";

} // extern C

