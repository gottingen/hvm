#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray construct_from_ft_int(const unicode_view& dtype, void* handle_2_71828182846=((void*)(int64_t)0));
int construct_from_ft_int__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray construct_from_ft_int(const unicode_view& dtype, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:38
  FTList<int64_t> l = (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)0), ((int64_t)1), ((int64_t)2), ((int64_t)3), ((int64_t)4), ((int64_t)5), ((int64_t)6), ((int64_t)7)}));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:39
  return (Kernel_NDArray::make((l), (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)2), ((int64_t)4)})), (dtype), (unicode_view(U"\u0063\u0070\u0075", 3))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:40
}

int construct_from_ft_int__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"dtype"};
    KwargsUnpackHelper helper("construct_from_ft_int", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:38
    auto ret = construct_from_ft_int(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 38, in construct_from_ft_int\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:38
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = construct_from_ft_int(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 38, in construct_from_ft_int\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:38
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 38, in construct_from_ft_int\n", "construct_from_ft_int() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:38
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)construct_from_ft_int__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000construct_from_ft_int\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000construct_from_ft_int\000";

} // extern C

