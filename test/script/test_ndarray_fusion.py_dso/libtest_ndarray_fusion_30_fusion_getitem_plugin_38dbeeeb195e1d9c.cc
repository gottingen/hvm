#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t fusion_getitem(const List& init_values, void* handle_2_71828182846=((void*)(int64_t)0));
int fusion_getitem__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t fusion_getitem(const List& init_values, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:30
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:31
  NDArray a = (Kernel_NDArray::make((init_values), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2), ((int64_t)5)})), (unicode_view(U"\u0069\u006E\u0074\u0033\u0032", 5)), (unicode_view(U"\u0063\u0070\u0075", 3))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:32
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < (int64_t)2; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:33
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:33
    for (int64_t j_iter_ = (int64_t)0; j_iter_ < (int64_t)5; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:34
      int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:34
      s = internal::TypeAsHelper<int64_t>::run((ArithOps::add(s, (a).fused_get_item({(i), (j)}))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py\", line 35, in fusion_getitem\n", "expect 'ArithOps::add(s, (a).fused_get_item({(i), (j)}))' is 'int64_t' type");  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:35
    }
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:36
}

int fusion_getitem__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"init_values"};
    KwargsUnpackHelper helper("fusion_getitem", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:30
    auto ret = fusion_getitem(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py\", line 30, in fusion_getitem\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = fusion_getitem(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py\", line 30, in fusion_getitem\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py\", line 30, in fusion_getitem\n", "fusion_getitem() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_fusion.py:30
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)fusion_getitem__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000fusion_getitem\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000fusion_getitem\000";

} // extern C

