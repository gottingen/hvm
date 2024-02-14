#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List builtin_list_reversed(const List& li, void* handle_2_71828182846=((void*)(int64_t)0));
int builtin_list_reversed__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List builtin_list_reversed(const List& li, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:81
  List new_list = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:82
  {
    Iterator const& __reserved_eval_cons_l28455_0 = kernel_builtins_reversed(li);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:83
    RTValue __reserved_next_holder_l48984_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:83
    auto __reserved_iter_l1465_0 = __reserved_eval_cons_l28455_0;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:83
    auto __reserved_has_next_l10416_0 = __reserved_iter_l1465_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:83
    while (__reserved_has_next_l10416_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:83
      RTView l = __reserved_iter_l1465_0.NextView(&__reserved_has_next_l10416_0, &__reserved_next_holder_l48984_0);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:83
      {
        (void)(new_list).append((l));  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:84
      }
    }
  }
  return (new_list);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:85
}

int builtin_list_reversed__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"li"};
    KwargsUnpackHelper helper("builtin_list_reversed", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:81
    auto ret = builtin_list_reversed(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 81, in builtin_list_reversed\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:81
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = builtin_list_reversed(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 81, in builtin_list_reversed\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:81
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_iterator.py\", line 81, in builtin_list_reversed\n", "builtin_list_reversed() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_iterator.py:81
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)builtin_list_reversed__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000builtin_list_reversed\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000builtin_list_reversed\000";

} // extern C

