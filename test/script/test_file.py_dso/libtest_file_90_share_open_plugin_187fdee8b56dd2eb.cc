#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List share_open(const unicode_view& path, void* handle_2_71828182846=((void*)(int64_t)0));
int share_open__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List share_open(const unicode_view& path, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:90
  List ret = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:91
  File f1 = (kernel_file_open({(path), (unicode_view(U"\u0072", 1)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))}));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:92
  File f2 = (f1);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:93
  (void)(ret).append(((f1).Next()));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:94
  (void)(ret).append(((f2).Next()));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:95
  (void)(ret).append(((f1).Next()));  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:96
  (void)(f1).close();  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:97
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:98
}

int share_open__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"path"};
    KwargsUnpackHelper helper("share_open", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:90
    auto ret = share_open(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 90, in share_open\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:90
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = share_open(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 90, in share_open\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:90
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_file.py\", line 90, in share_open\n", "share_open() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_file.py:90
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)share_open__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000share_open\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000share_open\000";

} // extern C

