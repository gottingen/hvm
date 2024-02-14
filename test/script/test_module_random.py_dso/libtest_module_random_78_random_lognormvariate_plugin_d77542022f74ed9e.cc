#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL double random_lognormvariate(double mu, double sigma, void* handle_2_71828182846=((void*)(int64_t)0));
int random_lognormvariate__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double random_lognormvariate(double mu, double sigma, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:79
  return (kernel_random_lognormvariate(mu, sigma));  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:80
}

int random_lognormvariate__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"mu", "sigma"};
    KwargsUnpackHelper helper("random_lognormvariate", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:79
    auto ret = random_lognormvariate(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 79, in random_lognormvariate\n", "expect 'pos_args[0]' is 'double' type"), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 79, in random_lognormvariate\n", "expect 'pos_args[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:79
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = random_lognormvariate(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 79, in random_lognormvariate\n", "expect 'args_t[0]' is 'double' type"), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 79, in random_lognormvariate\n", "expect 'args_t[1]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:79
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_random.py\", line 79, in random_lognormvariate\n", "random_lognormvariate() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_random.py:79
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)random_lognormvariate__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000random_lognormvariate\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000random_lognormvariate\000";

} // extern C

