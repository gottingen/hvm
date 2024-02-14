#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

namespace {
template <typename argument_type0, typename argument_type1>
struct Generator_yield_float;
Generator_yield_float<int64_t, void*> yield_float_generator_raw_cc_00(int64_t n, void* handle_2_71828182846=((void*)(int64_t)0));
int yield_float__c_api(HerculesAny*, int, HerculesAny*, void*);
template <typename argument_type0, typename argument_type1>
struct Generator_yield_float : BaseGenerator<double> {
  typedef GeneratorIterator<Generator_yield_float<argument_type0, argument_type1>> iterator;
  typedef double value_type;
  typedef double result_type;
  typename Generator_yield_float<argument_type0, argument_type1>::result_type generator_value__;
  argument_type0 n;
  argument_type0 __target_n11942060538602689015;
  argument_type1 handle_2_71828182846;
  argument_type1 __target_handle_2_718281828464992920614087250519;
  int64_t __target_i_iter_6626877378437249661;
  int64_t __target_i10401957338359594199;
  Generator_yield_float() : BaseGenerator<double>() {}  Generator_yield_float(argument_type0 n, argument_type1 handle_2_71828182846) : BaseGenerator<double>(), n(n), handle_2_71828182846(handle_2_71828182846) {}
  void operator++() { next(); }
  typename Generator_yield_float<argument_type0, argument_type1>::result_type operator*() const { return generator_value__; }
  GeneratorIterator<Generator_yield_float> begin() { next(); return GeneratorIterator<Generator_yield_float>(*this); }
  GeneratorIterator<Generator_yield_float> end() { return GeneratorIterator<Generator_yield_float>(); }
  typename Generator_yield_float<argument_type0, argument_type1>::result_type next();
};
template <typename argument_type0, typename argument_type1>
typename Generator_yield_float<argument_type0, argument_type1>::result_type Generator_yield_float<argument_type0, argument_type1>::next() {
  switch (generator_state__) {
    case 1: goto yield_point1;  };
  {
    __target_n11942060538602689015 = n;
    __target_handle_2_718281828464992920614087250519 = handle_2_71828182846;
    for (__target_i_iter_6626877378437249661 = (int64_t)0; __target_i_iter_6626877378437249661 < __target_n11942060538602689015; __target_i_iter_6626877378437249661 += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_yield.py:39
      __target_i10401957338359594199 = __target_i_iter_6626877378437249661;  // /home/jeff/github/gottingen/hvm/test/script/test_yield.py:39
      generator_state__ = 1;
      return generator_value__ = ((((double)__target_i10401957338359594199) + 1.0000000000000000555e-01));
      yield_point1:;
    }
  }
  {
    generator_state__ = -1;
    goto that_is_all_folks;
  }
  that_is_all_folks:
  return result_type();
}

Generator_yield_float<int64_t, void*> yield_float_generator_raw_cc_00(int64_t n, void* handle_2_71828182846) { return Generator_yield_float<int64_t, void*>(n, handle_2_71828182846); }

Float64Generator yield_float(int64_t n, void* handle_2_71828182846=((void*)(int64_t)0)) {
  BaseGenerator<double>* __generator_interface__ = new Generator_yield_float<int64_t, void*>(yield_float_generator_raw_cc_00(n, handle_2_71828182846));
  return Float64Generator(std::shared_ptr<BaseGenerator<double>>(__generator_interface__));
}
int yield_float__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"n"};
    KwargsUnpackHelper helper("yield_float", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_yield.py:38
    auto ret = yield_float(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_yield.py\", line 38, in yield_float\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_yield.py:38
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = yield_float(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_yield.py\", line 38, in yield_float\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_yield.py:38
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_yield.py\", line 38, in yield_float\n", "yield_float() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_yield.py:38
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)yield_float__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "1\000yield_float\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "1\000yield_float\000";

} // extern C

