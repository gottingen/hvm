#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List my_str_lower_and_concat(const List& query_tok, void* handle_2_71828182846=((void*)(int64_t)0));
int my_str_lower_and_concat__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List my_str_lower_and_concat(const List& query_tok, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:27
  List inputs = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:28
  Unicode sep = (unicode_view(U"\u0020", 1));  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:29
  {
    auto const& __reserved_eval_enumerate_arg_i_q_tok48453_0 = query_tok;  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
    int64_t __reserved_enum_pos_i_q_tok20209_0 = (int64_t)0;  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
    auto __reserved_iter_i_q_tok6535_0 = __reserved_eval_enumerate_arg_i_q_tok48453_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
    auto __reserved_iter_end_i_q_tok9136_0 = __reserved_eval_enumerate_arg_i_q_tok48453_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
    while ((__reserved_iter_i_q_tok6535_0 != __reserved_iter_end_i_q_tok9136_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
      int64_t i = __reserved_enum_pos_i_q_tok20209_0;  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
      ++__reserved_enum_pos_i_q_tok20209_0;  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
      unicode_view q_tok = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_i_q_tok6535_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move_v3.py\", line 30, in my_str_lower_and_concat\n", "expect 'the element in enumerate(query_tok, (int64_t)0)' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
      ++__reserved_iter_i_q_tok6535_0;  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:30
      {
        if (Kernel_bool::make(((i > (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:31
          (void)(inputs).append((RTValue(sep)));  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:32
        }
        Unicode tmp = (kernel_unicode_lower(q_tok));  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:33
        (void)(inputs).append((RTValue(tmp)));  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:34
      }
    }
  }
  return (inputs);  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:36
}

int my_str_lower_and_concat__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"query_tok"};
    KwargsUnpackHelper helper("my_str_lower_and_concat", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:27
    auto ret = my_str_lower_and_concat(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move_v3.py\", line 27, in my_str_lower_and_concat\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_str_lower_and_concat(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move_v3.py\", line 27, in my_str_lower_and_concat\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_move_v3.py\", line 27, in my_str_lower_and_concat\n", "my_str_lower_and_concat() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_move_v3.py:27
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_str_lower_and_concat__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_str_lower_and_concat\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000my_str_lower_and_concat\000";

} // extern C

