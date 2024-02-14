#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t list_repeat_cons(int64_t times, void* handle_2_71828182846=((void*)(int64_t)0));
int list_repeat_cons__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t list_repeat_cons(int64_t times, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:54
  List origin = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)4)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:55
  List b = ((origin).repeat((times)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:56
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(((origin).size() + (b).size()), ((b).get_item(((int64_t)5))))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 57, in list_repeat_cons\n", "expect 'ArithOps::add(((origin).size() + (b).size()), ((b).get_item(((int64_t)5))))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:57
}

int list_repeat_cons__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"times"};
    KwargsUnpackHelper helper("list_repeat_cons", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:54
    auto ret = list_repeat_cons(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 54, in list_repeat_cons\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:54
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = list_repeat_cons(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 54, in list_repeat_cons\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:54
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 54, in list_repeat_cons\n", "list_repeat_cons() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:54
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_repeat_cons__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_repeat_cons\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_repeat_cons\000";

} // extern C

