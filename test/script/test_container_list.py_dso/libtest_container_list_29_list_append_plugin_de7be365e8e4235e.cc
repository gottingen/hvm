#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List list_append(const List& container, const RTView& item, void* handle_2_71828182846=((void*)(int64_t)0));
int list_append__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List list_append(const List& container, const RTView& item, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:29
  (void)(container).append((item));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:30
  return (container);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:31
}

int list_append__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"container", "item"};
    KwargsUnpackHelper helper("list_append", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:29
    auto ret = list_append(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 29, in list_append\n", "expect 'pos_args[0]' is 'List' type"), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = list_append(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 29, in list_append\n", "expect 'args_t[0]' is 'List' type"), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 29, in list_append\n", "list_append() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:29
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_append__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_append\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_append\000";

} // extern C

