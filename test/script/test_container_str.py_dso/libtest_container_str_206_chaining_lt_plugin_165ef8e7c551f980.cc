#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool chaining_lt(const unicode_view& a, const unicode_view& b, const unicode_view& c, void* handle_2_71828182846=((void*)(int64_t)0));
int chaining_lt__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool chaining_lt(const unicode_view& a, const unicode_view& b, const unicode_view& c, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:207
  return (((a < b) && (b < c)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:208
}

int chaining_lt__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"a", "b", "c"};
    KwargsUnpackHelper helper("chaining_lt", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:207
    auto ret = chaining_lt(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "expect 'pos_args[1]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "expect 'pos_args[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:207
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = chaining_lt(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<unicode_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "expect 'args_t[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:207
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 207, in chaining_lt\n", "chaining_lt() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:207
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)chaining_lt__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000chaining_lt\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000chaining_lt\000";

} // extern C

