#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List start_end_range(const List& l, int64_t start, int64_t end, void* handle_2_71828182846=((void*)(int64_t)0));
int start_end_range__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List start_end_range(const List& l, int64_t start, int64_t end, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:215
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:216
  for (int64_t i_iter_ = start; i_iter_ < end; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:217
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:217
    (void)(ret).append((((l).get_item((i)))));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:218
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:219
}

int start_end_range__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"l", "start", "end"};
    KwargsUnpackHelper helper("start_end_range", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:215
    auto ret = start_end_range(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:215
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = start_end_range(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:215
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 215, in start_end_range\n", "start_end_range() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:215
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)start_end_range__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000start_end_range\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000start_end_range\000";

} // extern C

