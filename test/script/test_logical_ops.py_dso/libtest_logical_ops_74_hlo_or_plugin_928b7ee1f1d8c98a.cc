#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL bool hlo_or(const Dict& a, const List& b, void* handle_2_71828182846=((void*)(int64_t)0));
int hlo_or__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool hlo_or(const Dict& a, const List& b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:75
  return (internal::TypeAsHelper<bool>::run((ArithOps::Or(!internal::TypeAsHelper<bool>::run((((a).get_item((unicode_view(U"\u0066\u006C\u0061\u0067", 4))))), __FILE__, __LINE__, "", "expect '((a).get_item((unicode_view(U\"\\u0066\\u006C\\u0061\\u0067\", 4))))' is 'bool' type"), ((b).get_item(((int64_t)0))))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 76, in hlo_or\n", "expect 'ArithOps::Or(!internal::TypeAsHelper<bool>::run((((a).get_item((unicode_view(U\"\\u0066\\u006C\\u0061\\u0067\", 4))))), __FILE__, __LINE__, \"\", \"expect '((a).get_item((unicode_view(U\\\"\\\\u0066\\\\u006C\\\\u0061\\\\u0067\\\", 4))))' is 'bool' type\"), ((b).get_item(((int64_t)0))))' is 'bool' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:76
}

int hlo_or__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("hlo_or", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:75
    auto ret = hlo_or(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 75, in hlo_or\n", "expect 'pos_args[0]' is 'Dict' type"), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 75, in hlo_or\n", "expect 'pos_args[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:75
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = hlo_or(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 75, in hlo_or\n", "expect 'args_t[0]' is 'Dict' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 75, in hlo_or\n", "expect 'args_t[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:75
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py\", line 75, in hlo_or\n", "hlo_or() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_logical_ops.py:75
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)hlo_or__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000hlo_or\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000hlo_or\000";

} // extern C

