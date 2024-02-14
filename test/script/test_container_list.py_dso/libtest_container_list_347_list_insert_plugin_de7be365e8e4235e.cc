#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List list_insert(const List& l, int64_t index, const RTView& item, void* handle_2_71828182846=((void*)(int64_t)0));
int list_insert__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List list_insert(const List& l, int64_t index, const RTView& item, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:347
  (void)(l).insert((index), (item));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:348
  return (l);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:349
}

int list_insert__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"l", "index", "item"};
    KwargsUnpackHelper helper("list_insert", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:347
    auto ret = list_insert(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 347, in list_insert\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 347, in list_insert\n", "expect 'pos_args[1]' is 'int64_t' type"), (pos_args[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:347
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = list_insert(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 347, in list_insert\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 347, in list_insert\n", "expect 'args_t[1]' is 'int64_t' type"), (args_t[2]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:347
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 347, in list_insert\n", "list_insert() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:347
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_insert__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_insert\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_insert\000";

} // extern C

