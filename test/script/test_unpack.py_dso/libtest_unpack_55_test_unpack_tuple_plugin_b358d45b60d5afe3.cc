#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple test_unpack_tuple(void* handle_2_71828182846=((void*)(int64_t)0));
int test_unpack_tuple__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple test_unpack_tuple(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:56
  Tuple al = (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:57
  int64_t unroll_0_74024035 = ((int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t unroll_0_53636175 = ((int64_t)2);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t unroll_1_50046858 = ((int64_t)3);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t unroll_2_16633195 = ((int64_t)4);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t d = (unroll_0_74024035);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t e = (unroll_0_53636175);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t f = (unroll_1_50046858);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  int64_t g = (unroll_2_16633195);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:58
  if (!(((al).size() == (int64_t)3))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 59, in test_unpack_tuple\n", "ValueError: values to unpack mismatch (expected 3)"); }  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:59
  int64_t a = (internal::TypeAsHelper<int64_t>::run(((al).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 59, in test_unpack_tuple\n", "expect '(al).get_item(((int64_t)0))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:59
  int64_t b = (internal::TypeAsHelper<int64_t>::run(((al).get_item(((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 59, in test_unpack_tuple\n", "expect '(al).get_item(((int64_t)1))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:59
  int64_t c = (internal::TypeAsHelper<int64_t>::run(((al).get_item(((int64_t)2))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 59, in test_unpack_tuple\n", "expect '(al).get_item(((int64_t)2))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:59
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(a), (b), (c)}));  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:60
}

int test_unpack_tuple__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_unpack_tuple(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:56
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_unpack.py\", line 56, in test_unpack_tuple\n", "test_unpack_tuple() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_unpack.py:56
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_unpack_tuple__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_unpack_tuple\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_unpack_tuple\000";

} // extern C

