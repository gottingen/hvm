#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue bitwise_not(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int bitwise_not__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue bitwise_not(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:224
  return (RTValue((~internal::TypeAsHelper<int64_t>::run((a), __FILE__, __LINE__, "", "expect 'a' is 'int64_t' type"))));  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:225
}

int bitwise_not__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("bitwise_not", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:224
    auto ret = bitwise_not((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:224
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = bitwise_not((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:224
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_arith.py\", line 224, in bitwise_not\n", "bitwise_not() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_arith.py:224
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)bitwise_not__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000bitwise_not\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000bitwise_not\000";

} // extern C

