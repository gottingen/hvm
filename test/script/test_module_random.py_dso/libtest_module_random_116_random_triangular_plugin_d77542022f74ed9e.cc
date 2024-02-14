#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double random_triangular(double low=0.0000000000000000000e+00, double high=1.0000000000000000000e+00, const RTView& mode=None, void* handle_2_71828182846=((void*)(int64_t)0));
int random_triangular__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double random_triangular(double low, double high, const RTView& mode, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
  return (kernel_random_triangular({(low), (high), (mode)}));  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:118
}

int random_triangular__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"low", "high", "mode"};
    static RTValue default_args[3]{RTValue(0.0000000000000000000e+00), RTValue(1.0000000000000000000e+00), RTValue(None)};
    KwargsUnpackHelper helper("random_triangular", arg_names, 3, default_args, 3);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
    auto ret = random_triangular(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'pos_args[0]' is 'double' type"), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'pos_args[1]' is 'double' type"), (pos_args[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 0: {
        auto ret = random_triangular(0.0000000000000000000e+00, 1.0000000000000000000e+00, None, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 1: {
        auto ret = random_triangular(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'args_t[0]' is 'double' type"), 1.0000000000000000000e+00, None, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 2: {
        auto ret = random_triangular(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'args_t[0]' is 'double' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'args_t[1]' is 'double' type"), None, resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 3: {
        auto ret = random_triangular(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'args_t[0]' is 'double' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "expect 'args_t[1]' is 'double' type"), (args_t[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 117, in random_triangular\n", "random_triangular() takes from 0 to 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:117
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)random_triangular__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000random_triangular\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000random_triangular\000";

} // extern C

