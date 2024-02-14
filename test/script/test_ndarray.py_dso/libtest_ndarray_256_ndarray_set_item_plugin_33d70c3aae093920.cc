#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue ndarray_set_item(NDArray nd, int64_t index, const RTView& item, void* handle_2_71828182846=((void*)(int64_t)0));
int ndarray_set_item__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ndarray_set_item(NDArray nd, int64_t index, const RTView& item, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:256
  (void)(nd).set_item((index), (item));  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:257
  return (None);
}

int ndarray_set_item__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"nd", "index", "item"};
    KwargsUnpackHelper helper("ndarray_set_item", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:256
    auto ret = ndarray_set_item(internal::TypeAsHelper<NDArray>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 256, in ndarray_set_item\n", "expect 'pos_args[0]' is 'NDArray' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 256, in ndarray_set_item\n", "expect 'pos_args[1]' is 'int64_t' type"), (pos_args[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:256
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = ndarray_set_item(internal::TypeAsHelper<NDArray>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 256, in ndarray_set_item\n", "expect 'args_t[0]' is 'NDArray' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 256, in ndarray_set_item\n", "expect 'args_t[1]' is 'int64_t' type"), (args_t[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:256
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ndarray.py\", line 256, in ndarray_set_item\n", "ndarray_set_item() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ndarray.py:256
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ndarray_set_item__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000ndarray_set_item\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000ndarray_set_item\000";

} // extern C

