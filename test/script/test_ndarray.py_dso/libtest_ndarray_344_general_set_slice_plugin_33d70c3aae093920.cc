#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue general_set_slice(const RTView& nd, int64_t begin, int64_t end, const RTView& item, void* handle_2_71828182846=((void*)(int64_t)0));
int general_set_slice__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue general_set_slice(const RTView& nd, int64_t begin, int64_t end, const RTView& item, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:344
  (void)kernel_object___setslice__(nd, RTView(begin), RTView(end), item);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:345
  return (None);
}

int general_set_slice__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"nd", "begin", "end", "item"};
    KwargsUnpackHelper helper("general_set_slice", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:344
    auto ret = general_set_slice((pos_args[0]), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 344, in general_set_slice\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 344, in general_set_slice\n", "expect 'pos_args[2]' is 'int64_t' type"), (pos_args[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:344
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = general_set_slice((args_t[0]), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 344, in general_set_slice\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 344, in general_set_slice\n", "expect 'args_t[2]' is 'int64_t' type"), (args_t[3]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:344
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 344, in general_set_slice\n", "general_set_slice() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:344
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)general_set_slice__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000general_set_slice\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000general_set_slice\000";

} // extern C

