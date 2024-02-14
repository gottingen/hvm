#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List list_iterator(const List& a, void* handle_2_71828182846=((void*)(int64_t)0));
int list_iterator__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List list_iterator(const List& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:270
  List result = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:271
  {
    const List&__reserved_eval_cons_x40652_0 = a;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:272
    auto __reserved_iter_x39111_0 = __reserved_eval_cons_x40652_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:272
    auto __reserved_iter_end_x1804_0 = __reserved_eval_cons_x40652_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:272
    while ((__reserved_iter_x39111_0 != __reserved_iter_end_x1804_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:272
      RTView x = internal::TypeAsHelper<RTView>::run((*__reserved_iter_x39111_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 272, in list_iterator\n", "expect 'the element in a' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:272
      ++__reserved_iter_x39111_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:272
      {
        (void)(result).append((x));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:273
      }
    }
  }
  return (result);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:274
}

int list_iterator__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("list_iterator", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:270
    auto ret = list_iterator(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 270, in list_iterator\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:270
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = list_iterator(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 270, in list_iterator\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:270
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 270, in list_iterator\n", "list_iterator() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:270
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_iterator__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_iterator\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_iterator\000";

} // extern C

