#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue for_loop(NDArray a, void* handle_2_71828182846=((void*)(int64_t)0));
int for_loop__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue for_loop(NDArray a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:923
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:924
  if ((((int64_t)(a).GetDim()) > (int64_t)1)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
    for (int64_t __reserved_nd_pos_494021989104783292_49819269_iter_ = (int64_t)0; __reserved_nd_pos_494021989104783292_49819269_iter_ < (a).size(); __reserved_nd_pos_494021989104783292_49819269_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
      int64_t __reserved_nd_pos_494021989104783292_49819269 = __reserved_nd_pos_494021989104783292_49819269_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
      NDArray i = (internal::TypeAsHelper<NDArray>::run(((a).get_item((__reserved_nd_pos_494021989104783292_49819269))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 925, in for_loop\n", "expect '(a).get_item((__reserved_nd_pos_494021989104783292_49819269))' is 'NDArray' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
      (void)(ret).append((RTValue(i)));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:926
    }
  } else {
    for (int64_t __reserved_any_pos_494021989104783292_74024035_iter_ = (int64_t)0; __reserved_any_pos_494021989104783292_74024035_iter_ < (a).size(); __reserved_any_pos_494021989104783292_74024035_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
      int64_t __reserved_any_pos_494021989104783292_74024035 = __reserved_any_pos_494021989104783292_74024035_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
      RTValue i = ((a).get_item((__reserved_any_pos_494021989104783292_74024035)));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:925
      (void)(ret).append((i));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:926
    }
  }
  return (RTValue(ret));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:927
}

int for_loop__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("for_loop", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:923
    auto ret = for_loop(internal::TypeAsHelper<NDArray>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 923, in for_loop\n", "expect 'pos_args[0]' is 'NDArray' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:923
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = for_loop(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 923, in for_loop\n", "expect 'args_t[0]' is 'NDArray' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:923
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 923, in for_loop\n", "for_loop() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:923
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)for_loop__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000for_loop\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000for_loop\000";

} // extern C

