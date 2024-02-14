#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List readlines_bytes(const unicode_view& path, void* handle_2_71828182846=((void*)(int64_t)0));
int readlines_bytes__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List readlines_bytes(const unicode_view& path, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:79
  File f = (kernel_file_open({(path), (unicode_view(U"\u0072\u0062", 2)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))}));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:80
  List ret = ((f).ReadLines());  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:81
  (void)(f).close();  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:82
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:83
}

int readlines_bytes__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"path"};
    KwargsUnpackHelper helper("readlines_bytes", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:79
    auto ret = readlines_bytes(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 79, in readlines_bytes\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:79
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = readlines_bytes(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 79, in readlines_bytes\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:79
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 79, in readlines_bytes\n", "readlines_bytes() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:79
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)readlines_bytes__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000readlines_bytes\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000readlines_bytes\000";

} // extern C

