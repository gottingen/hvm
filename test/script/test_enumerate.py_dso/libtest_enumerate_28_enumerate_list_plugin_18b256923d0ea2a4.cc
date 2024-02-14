#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple enumerate_list(const List& cons, void* handle_2_71828182846=((void*)(int64_t)0));
int enumerate_list__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple enumerate_list(const List& cons, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:29
  List ret1 = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:30
  List ret2 = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:31
  {
    auto const& __reserved_eval_enumerate_arg_i_val58540_0 = cons;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
    int64_t __reserved_enum_pos_i_val10221_0 = (int64_t)0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
    auto __reserved_iter_i_val61513_0 = __reserved_eval_enumerate_arg_i_val58540_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
    auto __reserved_iter_end_i_val28970_0 = __reserved_eval_enumerate_arg_i_val58540_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
    while ((__reserved_iter_i_val61513_0 != __reserved_iter_end_i_val28970_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
      int64_t i = __reserved_enum_pos_i_val10221_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
      ++__reserved_enum_pos_i_val10221_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
      RTView val = internal::TypeAsHelper<RTView>::run((*__reserved_iter_i_val61513_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 32, in enumerate_list\n", "expect 'the element in enumerate(cons, (int64_t)0)' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
      ++__reserved_iter_i_val61513_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:32
      {
        (void)(ret1).append((RTValue(i)));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:33
        (void)(ret2).append((val));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:34
      }
    }
  }
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(ret1), (ret2)}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:35
}

int enumerate_list__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"cons"};
    KwargsUnpackHelper helper("enumerate_list", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:29
    auto ret = enumerate_list(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 29, in enumerate_list\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = enumerate_list(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 29, in enumerate_list\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 29, in enumerate_list\n", "enumerate_list() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:29
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)enumerate_list__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000enumerate_list\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000enumerate_list\000";

} // extern C

