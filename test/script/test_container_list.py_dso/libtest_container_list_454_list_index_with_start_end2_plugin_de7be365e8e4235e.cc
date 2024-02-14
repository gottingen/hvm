#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL int64_t list_index_with_start_end2(int64_t target, int64_t start, int64_t end, void* handle_2_71828182846=((void*)(int64_t)0));
int list_index_with_start_end2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t list_index_with_start_end2(int64_t target, int64_t start, int64_t end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:454
  List l = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3), ((int64_t)4), ((int64_t)5)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:455
  return ((l).index((RTValue(target)), (start), (end)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:456
}

int list_index_with_start_end2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"target", "start", "end"};
    KwargsUnpackHelper helper("list_index_with_start_end2", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:454
    auto ret = list_index_with_start_end2(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:454
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = list_index_with_start_end2(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:454
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_list.py\", line 454, in list_index_with_start_end2\n", "list_index_with_start_end2() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_list.py:454
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)list_index_with_start_end2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000list_index_with_start_end2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000list_index_with_start_end2\000";

} // extern C

