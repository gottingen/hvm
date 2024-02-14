#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL RTValue enumerate_list_return_tup(const List& a, void* handle_2_71828182846=((void*)(int64_t)0));
int enumerate_list_return_tup__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue enumerate_list_return_tup(const List& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:74
  return (RTValue([handle_2_71828182846, a]() -> List {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
    (void)(__reserved_list_comp_result).reserve(((int64_t)2));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
    {
      auto const&__reserved_eval_cons_x40652_0 = enumerate(a, (int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
      auto __reserved_iter_x39111_0 = __reserved_eval_cons_x40652_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
      auto __reserved_iter_end_x1804_0 = __reserved_eval_cons_x40652_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
      while ((__reserved_iter_x39111_0 != __reserved_iter_end_x1804_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
        Tuple x = *__reserved_iter_x39111_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
        ++__reserved_iter_x39111_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
        {
          (void)(__reserved_list_comp_result).append((RTValue(x)));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
  }()));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:75
}

int enumerate_list_return_tup__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("enumerate_list_return_tup", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:74
    auto ret = enumerate_list_return_tup(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 74, in enumerate_list_return_tup\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:74
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = enumerate_list_return_tup(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 74, in enumerate_list_return_tup\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:74
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 74, in enumerate_list_return_tup\n", "enumerate_list_return_tup() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:74
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)enumerate_list_return_tup__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000enumerate_list_return_tup\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000enumerate_list_return_tup\000";

} // extern C

