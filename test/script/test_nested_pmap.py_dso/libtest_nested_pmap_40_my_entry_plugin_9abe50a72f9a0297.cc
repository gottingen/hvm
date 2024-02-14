#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL Unicode my_map_func1(const unicode_view& x, void* handle_2_71828182846=((void*)(int64_t)0));
int my_map_func1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List my_map_func2(const List& x, void* handle_2_71828182846=((void*)(int64_t)0));
int my_map_func2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_entry(const List& a, void* handle_2_71828182846=((void*)(int64_t)0));
int my_entry__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode my_map_func1(const unicode_view& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:25
  return (GenericValueConverter<Unicode>{}(kernel_unicode_lower(x)));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:26
}

int my_map_func1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("my_map_func1", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:25
    auto ret = my_map_func1(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 25, in my_map_func1\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:25
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_map_func1(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 25, in my_map_func1\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:25
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 25, in my_map_func1\n", "my_map_func1() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:25
    }
  }

  return 0;
}

HERCULES_DLL List my_map_func2(const List& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:29
  return (ParallelMap(MakeUserFunction(string_view("my_map_func1", 12), (HerculesBackendPackedCFunc)my_map_func1__c_api, handle_2_71828182846), x, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:30
}

int my_map_func2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("my_map_func2", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:29
    auto ret = my_map_func2(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 29, in my_map_func2\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_map_func2(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 29, in my_map_func2\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 29, in my_map_func2\n", "my_map_func2() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:29
    }
  }

  return 0;
}

HERCULES_DLL RTValue my_entry(const List& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:40
  List b = (ParallelMap(MakeUserFunction(string_view("my_map_func2", 12), (HerculesBackendPackedCFunc)my_map_func2__c_api, handle_2_71828182846), a, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:41
  return (RTValue(b));  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:42
}

int my_entry__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("my_entry", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:40
    auto ret = my_entry(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 40, in my_entry\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = my_entry(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 40, in my_entry\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py\", line 40, in my_entry\n", "my_entry() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_nested_pmap.py:40
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)my_entry__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000my_entry\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000my_map_func1\000my_map_func2\000my_entry\000";

} // extern C

