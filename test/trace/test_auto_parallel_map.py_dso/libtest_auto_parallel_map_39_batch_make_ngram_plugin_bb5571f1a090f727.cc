#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List batch_make_ngram(const List& queries, void* handle_2_71828182846=((void*)(int64_t)0));
int batch_make_ngram__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List batch_make_ngram(const List& queries, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:40
  RTView make_ngram = (GetClosureVar(handle_2_71828182846, string_view("JitOp", 5), string_view("make_ngram_JitOp_1623433307137052825_0", 38)));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:40
  return (ParallelMap(internal::TypeAsHelper<UserDataRef>::run((make_ngram), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py\", line 41, in batch_make_ngram\n", "expect 'make_ngram' is 'UserDataRef' type"), queries, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:41
}

int batch_make_ngram__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"queries"};
    KwargsUnpackHelper helper("batch_make_ngram", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:40
    auto ret = batch_make_ngram(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py\", line 40, in batch_make_ngram\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = batch_make_ngram(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py\", line 40, in batch_make_ngram\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py\", line 40, in batch_make_ngram\n", "batch_make_ngram() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_auto_parallel_map.py:40
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)batch_make_ngram__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000batch_make_ngram\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000batch_make_ngram\000";

} // extern C

