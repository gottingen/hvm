#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__RangeStep;
namespace {
// User class forward declarations
struct RangeStep;
struct RangeStep_SharedView;

RangeStep_SharedView RangeStep__F___init___wrapper(int64_t step, void* handle_2_71828182846=((void*)(int64_t)0));
int RangeStep__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue RangeStep__F___init__(const RangeStep_SharedView& self, int64_t step, void* handle_2_71828182846=((void*)(int64_t)0));
int RangeStep__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List RangeStep__F___call__(const RangeStep_SharedView& self, const List& l);
int RangeStep__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct RangeStep : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "RangeStep"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {RangeStep::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"step", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"step", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t step;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return step; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->step = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t step, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual List __call__(const List& l);
};

// flags for convert check
uint32_t RangeStep::tag_s_2_71828182846_ = 1467330125398703624;
uint32_t RangeStep::var_num_s_2_71828182846_ = 1;
string_view RangeStep::class_name_s_2_71828182846_ = "RangeStep";
IUserDataRoot::__FunctionTable__ RangeStep::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__RangeStep, "RangeStep");

struct RangeStep_SharedView: public IUserDataSharedViewRoot {
  // member var
  RangeStep *ptr;
  // constructor
  RangeStep_SharedView(RangeStep *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  RangeStep_SharedView(RangeStep *ptr) : ptr(ptr) {}
  RangeStep_SharedView() : ptr(nullptr) {}
  RangeStep_SharedView(const hercules::runtime::Any& ref) : RangeStep_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "RangeStep")) {}
  // UserDataRef
  RangeStep_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("RangeStep"));
    if(!base_ud_ptr->isinstance_2_71828182846(RangeStep::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'RangeStep' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<RangeStep*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  RangeStep* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void RangeStep_F__deleter__(ILightUserData* ptr) { delete static_cast<RangeStep*>(ptr); }
void* RangeStep_F__placement_new__(void* buf) { return new (buf) RangeStep; }
void RangeStep_F__placement_del__(ILightUserData* ptr) { static_cast<RangeStep*>(ptr)->RangeStep::~RangeStep(); }
RangeStep_SharedView RangeStep__F___init___wrapper(int64_t step, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(RangeStep)) {
    auto self = new RangeStep;
    self->function_table_2_71828182846_ = &RangeStep::function_table_s_2_71828182846_;
    RangeStep__F___init__(self,  step,  handle_2_71828182846);
    UserDataRef self_ref(RangeStep::tag_s_2_71828182846_, RangeStep::var_num_s_2_71828182846_, self, RangeStep_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(RangeStep::tag_s_2_71828182846_, RangeStep::var_num_s_2_71828182846_, sizeof(RangeStep), RangeStep_F__placement_new__, RangeStep_F__placement_del__, __hercules_module_ctx);
    RangeStep_SharedView self_view((RangeStep*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &RangeStep::function_table_s_2_71828182846_;
    RangeStep__F___init__(self_view,  step,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue RangeStep::__init__(int64_t step, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
  this->step = step;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:236
  return (None);
}

HERCULES_DLL RTValue RangeStep__F___init__(const RangeStep_SharedView& self, int64_t step, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
  return (self->__init__(step, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
}

int RangeStep__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "step"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
    auto ret = RangeStep__F___init__(RangeStep_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 235, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = RangeStep__F___init__(RangeStep_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 235, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 235, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
    }
  }

  return 0;
}

int RangeStep__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"step"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
    auto ret = RangeStep__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 235, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = RangeStep__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 235, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 235, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:235
    }
  }

  return 0;
}

List RangeStep::__call__(const List& l) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:239
  int64_t i_stop_74024035 = ((l).size());  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:240
  int64_t i_step_49819269 = (this->step);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:240
  for (int64_t i_iter_ = (int64_t)0; i_step_49819269 > 0 ? (i_iter_ < i_stop_74024035) : i_iter_ > i_stop_74024035; i_iter_ += i_step_49819269) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:240
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:240
    (void)(ret).append((((l).get_item((i)))));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:241
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:242
}

HERCULES_DLL List RangeStep__F___call__(const RangeStep_SharedView& self, const List& l) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
  return (self->__call__(l));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
}

int RangeStep__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "l"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
    auto ret = RangeStep__F___call__(RangeStep_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 238, in __call__\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = RangeStep__F___call__(RangeStep_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 238, in __call__\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 238, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:238
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__RangeStep[] = {
    (HerculesBackendPackedCFunc)RangeStep__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)RangeStep__F___init____c_api,
    (HerculesBackendPackedCFunc)RangeStep__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__RangeStep = {
    "3\000RangeStep__F___init___wrapper\000RangeStep__F___init__\000RangeStep__F___call__\000",    __hercules_func_array__RangeStep,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)RangeStep__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)RangeStep__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000RangeStep__F___init___wrapper\000RangeStep__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000RangeStep__F___init___wrapper\000RangeStep__F___init__\000";

} // extern C

