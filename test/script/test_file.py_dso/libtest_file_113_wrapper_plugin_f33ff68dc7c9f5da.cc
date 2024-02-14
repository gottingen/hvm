#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List readlines(const File& f, void* handle_2_71828182846=((void*)(int64_t)0));
int readlines__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List wrapper(const unicode_view& path, void* handle_2_71828182846=((void*)(int64_t)0));
int wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List readlines(const File& f, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:107
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:108
  {
    const File&__reserved_eval_cons_line34973_0 = f;  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:109
    RTValue __reserved_next_holder_line33764_0;  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:109
    auto __reserved_iter_line61663_0 = Kernel_Iterable::make(__reserved_eval_cons_line34973_0);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:109
    auto __reserved_has_next_line48177_0 = __reserved_iter_line61663_0.HasNext();  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:109
    while (__reserved_has_next_line48177_0) {  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:109
      Unicode line = internal::TypeAsHelper<Unicode>::run((__reserved_iter_line61663_0.NextView(&__reserved_has_next_line48177_0, &__reserved_next_holder_line33764_0)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 109, in readlines\n", "expect 'the next element in f' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:109
      {
        (void)(ret).append((RTValue(line)));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:110
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:111
}

int readlines__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"f"};
    KwargsUnpackHelper helper("readlines", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:107
    auto ret = readlines(internal::TypeAsHelper<File>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 107, in readlines\n", "expect 'pos_args[0]' is 'File' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:107
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = readlines(internal::TypeAsHelper<File>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 107, in readlines\n", "expect 'args_t[0]' is 'File' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:107
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 107, in readlines\n", "readlines() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:107
    }
  }

  return 0;
}

HERCULES_DLL List wrapper(const unicode_view& path, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:113
  File f = (kernel_file_open({(path), (unicode_view(U"\u0072", 1)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))}));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:114
  return (readlines(f, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:115
}

int wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"path"};
    KwargsUnpackHelper helper("wrapper", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:113
    auto ret = wrapper(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 113, in wrapper\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:113
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 113, in wrapper\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:113
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 113, in wrapper\n", "wrapper() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:113
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000readlines\000wrapper\000";

} // extern C

