#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List str_split_generic_iter_get(const List& batch_string_list, void* handle_2_71828182846=((void*)(int64_t)0));
int str_split_generic_iter_get__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List str_split_generic_iter_get(const List& batch_string_list, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:231
  List output = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:232
  (void)(output).reserve(((batch_string_list).size()));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:233
  {
    const List&__reserved_eval_cons_ss27484_0 = batch_string_list;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:234
    auto __reserved_iter_ss6754_0 = __reserved_eval_cons_ss27484_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:234
    auto __reserved_iter_end_ss23856_0 = __reserved_eval_cons_ss27484_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:234
    while ((__reserved_iter_ss6754_0 != __reserved_iter_end_ss23856_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:234
      unicode_view ss = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_ss6754_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 234, in str_split_generic_iter_get\n", "expect 'the element in batch_string_list' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:234
      ++__reserved_iter_ss6754_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:234
      {
        List token_list = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:235
        (void)(token_list).reserve((kernel_unicode___len__(ss)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:236
        {
          List const& __reserved_eval_cons_token47061_0 = kernel_unicode_split(ss, unicode_view(U"\u0020", 1), (int64_t)-1);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:237
          auto __reserved_iter_token15700_0 = __reserved_eval_cons_token47061_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:237
          auto __reserved_iter_end_token55553_0 = __reserved_eval_cons_token47061_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:237
          while ((__reserved_iter_token15700_0 != __reserved_iter_end_token55553_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:237
            unicode_view token = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_token15700_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 237, in str_split_generic_iter_get\n", "expect 'the element in kernel_unicode_split(ss, unicode_view(U\"\\u0020\", 1), (int64_t)-1)' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:237
            ++__reserved_iter_token15700_0;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:237
            {
              (void)(token_list).append((RTValue(token)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:238
            }
          }
        }
        (void)(output).append((RTValue(token_list)));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:239
      }
    }
  }
  return (output);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:241
}

int str_split_generic_iter_get__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"batch_string_list"};
    KwargsUnpackHelper helper("str_split_generic_iter_get", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:231
    auto ret = str_split_generic_iter_get(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 231, in str_split_generic_iter_get\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:231
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = str_split_generic_iter_get(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 231, in str_split_generic_iter_get\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:231
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 231, in str_split_generic_iter_get\n", "str_split_generic_iter_get() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:231
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_split_generic_iter_get__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_split_generic_iter_get\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_split_generic_iter_get\000";

} // extern C

