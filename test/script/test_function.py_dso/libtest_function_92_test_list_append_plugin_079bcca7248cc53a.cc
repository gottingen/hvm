#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List list_append_str(const unicode_view& x, void* handle_2_71828182846=((void*)(int64_t)0));
int list_append_str__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List test_list_append(void* handle_2_71828182846=((void*)(int64_t)0));
int test_list_append__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List list_append_str(const unicode_view& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:87
  List y = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{}))));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:88
  (void)(y).append((RTValue(x)));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:89
  return (y);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:90
}

int list_append_str__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("list_append_str", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:87
    auto ret = list_append_str(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 87, in list_append_str\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:87
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = list_append_str(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 87, in list_append_str\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:87
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 87, in list_append_str\n", "list_append_str() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:87
    }
  }

  return 0;
}

HERCULES_DLL List test_list_append(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:93
  Unicode ss = (unicode_view(U"\u0068\u0065\u006C\u006C\u006F\u0020\u0077\u006F\u0072\u006C\u0064", 11));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:94
  List tt = (list_append_str(GenericValueConverter<unicode_view>{}(ss), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:95
  return (tt);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:96
}

int test_list_append__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = test_list_append(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:93
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 93, in test_list_append\n", "test_list_append() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:93
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_list_append__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_list_append\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000list_append_str\000test_list_append\000";

} // extern C

