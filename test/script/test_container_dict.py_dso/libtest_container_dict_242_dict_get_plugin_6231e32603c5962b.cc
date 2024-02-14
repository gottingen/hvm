#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List dict_get(const Dict& a, void* handle_2_71828182846=((void*)(int64_t)0));
int dict_get__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List dict_get(const Dict& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:242
  List r = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:243
  (void)(r).append(((a).get_default((unicode_view(U"\u006B\u006E\u006F\u0077\u006E", 5)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:244
  (void)(r).append(((a).get_default((unicode_view(U"\u006B\u006E\u006F\u0077\u006E", 5)), (RTValue((int64_t)10000)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:245
  (void)(r).append(((a).get_default((unicode_view(U"\u0075\u006E\u006B\u006E\u006F\u0077\u006E", 7)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:246
  (void)(r).append(((a).get_default((unicode_view(U"\u0075\u006E\u006B\u006E\u006F\u0077\u006E", 7)), (RTValue((int64_t)10000)))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:247
  (void)(r).append(((a).get_default((unicode_view(U"\u006B\u006E\u006F\u0077\u006E", 5)), (RTValue(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}))))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:248
  (void)(r).append(((a).get_default((unicode_view(U"\u0075\u006E\u006B\u006E\u006F\u0077\u006E", 7)), (RTValue(Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)}))))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:249
  return (r);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:250
}

int dict_get__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("dict_get", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:242
    auto ret = dict_get(internal::TypeAsHelper<Dict>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 242, in dict_get\n", "expect 'pos_args[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:242
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = dict_get(internal::TypeAsHelper<Dict>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 242, in dict_get\n", "expect 'args_t[0]' is 'Dict' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:242
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_dict.py\", line 242, in dict_get\n", "dict_get() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_dict.py:242
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)dict_get__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000dict_get\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000dict_get\000";

} // extern C

