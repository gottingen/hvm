#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List split_on_punc(const unicode_view& text, void* handle_2_71828182846=((void*)(int64_t)0));
int split_on_punc__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List split_on_punc(const unicode_view& text, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:32
  List output = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:33
  {
    const unicode_view&__reserved_eval_cons_CPP_KW_char19819_0 = text;  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:34
    auto __reserved_iter_CPP_KW_char62420_0 = __reserved_eval_cons_CPP_KW_char19819_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:34
    auto __reserved_iter_end_CPP_KW_char55529_0 = __reserved_eval_cons_CPP_KW_char19819_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:34
    while ((__reserved_iter_CPP_KW_char62420_0 != __reserved_iter_end_CPP_KW_char55529_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:34
      unicode_view CPP_KW_char = unicode_view(__reserved_iter_CPP_KW_char62420_0, 1);  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:34
      ++__reserved_iter_CPP_KW_char62420_0;  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:34
      {
        (void)(output).append((RTValue(CPP_KW_char)));  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:35
      }
    }
  }
  return (output);  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:36
}

int split_on_punc__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"text"};
    KwargsUnpackHelper helper("split_on_punc", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:32
    auto ret = split_on_punc(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py\", line 32, in split_on_punc\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:32
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = split_on_punc(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py\", line 32, in split_on_punc\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:32
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py\", line 32, in split_on_punc\n", "split_on_punc() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_str_view_opt.py:32
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)split_on_punc__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000split_on_punc\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000split_on_punc\000";

} // extern C

