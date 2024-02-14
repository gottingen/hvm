#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL FTList<int64_t> get_ft(int64_t stop, void* handle_2_71828182846=((void*)(int64_t)0));
int get_ft__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL FTList<int64_t> get_ft(int64_t stop, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:64
  FTList<int64_t> ret = (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:65
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < stop; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:66
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:66
    (void)(ret).append((i));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:67
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:68
}

int get_ft__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"stop"};
    KwargsUnpackHelper helper("get_ft", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:64
    auto ret = get_ft(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 64, in get_ft\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:64
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = get_ft(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 64, in get_ft\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:64
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 64, in get_ft\n", "get_ft() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:64
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)get_ft__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000get_ft\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000get_ft\000";

} // extern C

