#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray fusion_setitem(void* handle_2_71828182846=((void*)(int64_t)0));
int fusion_setitem__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray fusion_setitem(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:45
  NDArray a = (Kernel_NDArray::make((Kernel_List::make(std::initializer_list<List::value_type>{})), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2), ((int64_t)5)})), (unicode_view(U"\u0069\u006E\u0074\u0033\u0032", 5)), (unicode_view(U"\u0063\u0070\u0075", 3))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:46
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)2; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:47
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:47
    for (int64_t j_iter_ = (int64_t)0; j_iter_ < (int64_t)5; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:48
      int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:48
      (void)(a).fused_set_item({(i), (j)}, ((i + j)));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:49
    }
  }
  return (a);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:50
}

int fusion_setitem__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = fusion_setitem(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:45
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py\", line 45, in fusion_setitem\n", "fusion_setitem() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:45
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)fusion_setitem__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000fusion_setitem\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000fusion_setitem\000";

} // extern C

