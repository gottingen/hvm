#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List json_load_from_list(const List& l, void* handle_2_71828182846=((void*)(int64_t)0));
int json_load_from_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List json_load_from_list(const List& l, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:43
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:44
  {
    const List&__reserved_eval_cons_s18529_0 = l;  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:45
    auto __reserved_iter_s17455_0 = __reserved_eval_cons_s18529_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:45
    auto __reserved_iter_end_s39070_0 = __reserved_eval_cons_s18529_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:45
    while ((__reserved_iter_s17455_0 != __reserved_iter_end_s39070_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:45
      RTView s = internal::TypeAsHelper<RTView>::run((*__reserved_iter_s17455_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 45, in json_load_from_list\n", "expect 'the element in l' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:45
      ++__reserved_iter_s17455_0;  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:45
      {
        (void)(ret).append((kernel_json_loads({(s)})));  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:46
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:47
}

int json_load_from_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"l"};
    KwargsUnpackHelper helper("json_load_from_list", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:43
    auto ret = json_load_from_list(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 43, in json_load_from_list\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:43
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = json_load_from_list(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 43, in json_load_from_list\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:43
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_module_json.py\", line 43, in json_load_from_list\n", "json_load_from_list() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_module_json.py:43
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)json_load_from_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000json_load_from_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000json_load_from_list\000";

} // extern C

