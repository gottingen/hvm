#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL NDArray construct_from_one_element_list(const RTView& obj, const List& shape, const unicode_view& dtype, void* handle_2_71828182846=((void*)(int64_t)0));
int construct_from_one_element_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL NDArray construct_from_one_element_list(const RTView& obj, const List& shape, const unicode_view& dtype, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:115
  return (Kernel_NDArray::make((obj), (shape), (dtype), (unicode_view(U"\u0063\u0070\u0075", 3))));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:116
}

int construct_from_one_element_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"obj", "shape", "dtype"};
    KwargsUnpackHelper helper("construct_from_one_element_list", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:115
    auto ret = construct_from_one_element_list((pos_args[0]), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 115, in construct_from_one_element_list\n", "expect 'pos_args[1]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 115, in construct_from_one_element_list\n", "expect 'pos_args[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:115
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = construct_from_one_element_list((args_t[0]), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 115, in construct_from_one_element_list\n", "expect 'args_t[1]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 115, in construct_from_one_element_list\n", "expect 'args_t[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:115
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py\", line 115, in construct_from_one_element_list\n", "construct_from_one_element_list() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray_constructor.py:115
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)construct_from_one_element_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000construct_from_one_element_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000construct_from_one_element_list\000";

} // extern C

