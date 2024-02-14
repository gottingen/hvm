#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode hvm_formatted_string_mixed(int64_t a, double b, const unicode_view& c, void* handle_2_71828182846=((void*)(int64_t)0));
int hvm_formatted_string_mixed__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode hvm_formatted_string_mixed(int64_t a, double b, const unicode_view& c, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:50
  return (ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add(unicode_view(U"\u0049\u0020\u0067\u006F\u0074\u0020", 6), Kernel_Unicode::make((a))), unicode_view(U"\u0020\u0061\u006E\u0064\u0020", 5)), Kernel_Unicode::make((b))), unicode_view(U"\u0020\u0061\u006E\u0064\u0020", 5)), Kernel_Unicode::make((c))), unicode_view(U"\u0020\u0021", 2)));  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:51
}

int hvm_formatted_string_mixed__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"a", "b", "c"};
    KwargsUnpackHelper helper("hvm_formatted_string_mixed", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:50
    auto ret = hvm_formatted_string_mixed(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "expect 'pos_args[1]' is 'double' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "expect 'pos_args[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:50
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = hvm_formatted_string_mixed(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "expect 'args_t[1]' is 'double' type"), internal::TypeAsHelper<unicode_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "expect 'args_t[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:50
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py\", line 50, in hvm_formatted_string_mixed\n", "hvm_formatted_string_mixed() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_formatted_string.py:50
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)hvm_formatted_string_mixed__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000hvm_formatted_string_mixed\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000hvm_formatted_string_mixed\000";

} // extern C

