#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List test_use_after_move(const List& a, const unicode_view& b, int64_t c, void* handle_2_71828182846=((void*)(int64_t)0));
int test_use_after_move__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List test_use_after_move(const List& a, const unicode_view& b, int64_t c, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:39
  List a1 = (a);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:40
  Unicode b1 = (b);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:41
  int64_t c1 = (c);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:42
  List d = (kernel_unicode_split(internal::TypeAsHelper<unicode_view>::run(((a).get_item(((int64_t)0))), __FILE__, __LINE__, "", "expect '(a).get_item(((int64_t)0))' is 'py::str' type"), b, (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:43
  return (d);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:44
}

int test_use_after_move__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"a", "b", "c"};
    KwargsUnpackHelper helper("test_use_after_move", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:39
    auto ret = test_use_after_move(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "expect 'pos_args[0]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "expect 'pos_args[1]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = test_use_after_move(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "expect 'args_t[0]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_move.py\", line 39, in test_use_after_move\n", "test_use_after_move() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_move.py:39
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)test_use_after_move__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000test_use_after_move\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000test_use_after_move\000";

} // extern C

