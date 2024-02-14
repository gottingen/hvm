#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t sum_n_by_while(int64_t n);
int sum_n_by_while__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t sum_n_by_while(int64_t n) {
  int64_t i;
  int64_t sum;
  i = (int64_t)1;
  sum = (int64_t)0;
  while ((i < n)) {
    sum = (sum + i);
    i = (i + (int64_t)1);
  }
  return (sum);
}

int sum_n_by_while__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"n"};
    KwargsUnpackHelper helper("sum_n_by_while", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);
    auto ret = sum_n_by_while(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "", "expect 'pos_args[0]' is 'int64_t' type"));
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = sum_n_by_while(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "", "expect 'args_t[0]' is 'int64_t' type"));
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("", "sum_n_by_while() takes 1 positional arguments but ", num_args, " were given");} break;
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)sum_n_by_while__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000sum_n_by_while\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "0\000";

} // extern C

