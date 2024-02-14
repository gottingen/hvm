#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Tuple enumerate_str(const unicode_view& cons, void* handle_2_71828182846=((void*)(int64_t)0));
int enumerate_str__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple enumerate_str(const unicode_view& cons, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:59
  List ret1 = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:60
  List ret2 = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:61
  {
    auto const& __reserved_eval_enumerate_arg_i_val58540_0 = cons;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
    int64_t __reserved_enum_pos_i_val10221_0 = (int64_t)0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
    auto __reserved_iter_i_val61513_0 = __reserved_eval_enumerate_arg_i_val58540_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
    auto __reserved_iter_end_i_val28970_0 = __reserved_eval_enumerate_arg_i_val58540_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
    while ((__reserved_iter_i_val61513_0 != __reserved_iter_end_i_val28970_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
      int64_t i = __reserved_enum_pos_i_val10221_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
      ++__reserved_enum_pos_i_val10221_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
      unicode_view val = unicode_view(__reserved_iter_i_val61513_0, 1);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
      ++__reserved_iter_i_val61513_0;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:62
      {
        (void)(ret1).append((RTValue(i)));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:63
        (void)(ret2).append((RTValue(val)));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:64
      }
    }
  }
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(ret1), (ret2)}));  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:65
}

int enumerate_str__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"cons"};
    KwargsUnpackHelper helper("enumerate_str", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:59
    auto ret = enumerate_str(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 59, in enumerate_str\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:59
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = enumerate_str(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 59, in enumerate_str\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:59
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_enumerate.py\", line 59, in enumerate_str\n", "enumerate_str() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_enumerate.py:59
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)enumerate_str__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000enumerate_str\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000enumerate_str\000";

} // extern C

