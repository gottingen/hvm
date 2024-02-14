#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
HERCULES_DLL List str_format(void* handle_2_71828182846=((void*)(int64_t)0));
int str_format__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List str_format(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:673
  List ret = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:674
  Unicode s = (unicode_view(U"\u0061\u0062\u0063", 3));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:675
  List l = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{(unicode_view(U"\u0061\u0061\u0061", 3)), (string_view("bbb", 3))}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:676
  (void)(ret).append((RTValue(unicode_view(U"\u007B\u007B\u007D\u007D\u0031\u0032\u0033", 7))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:677
  (void)(ret).append((RTValue(unicode_view(U"\u0031\u0031\u007B\u007D\u0032\u0032", 6))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:678
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u007B\u007B\u007D\u007D\u0031\u0032\u0033", 7), {((int64_t)123)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:679
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u0031\u0031\u007B\u007D\u0032\u0032\u007B\u007D", 8), {(s), (l)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:680
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u0031\u0031\u007B\u007D\u0032\u0032", 6), {(s), ((int64_t)255)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:681
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u007B\u007B\u007B\u007D\u007D\u007D\u0031\u0032\u0033", 9), {((int64_t)123)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:682
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u007B\u007B", 2), {}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:683
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u007D\u007D", 2), {}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:684
  (void)(ret).append((RTValue(kernel_unicode_format(unicode_view(U"\u007B\u007D\u007D\u007D", 4), {((int64_t)34)}))));  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:685
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:686
}

int str_format__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = str_format(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:673
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_container_str.py\", line 673, in str_format\n", "str_format() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_container_str.py:673
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)str_format__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000str_format\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000str_format\000";

} // extern C

