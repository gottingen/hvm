#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySingleOutputOp;
namespace {
// User class forward declarations
struct MySingleOutputOp;
struct MySingleOutputOp_SharedView;

MySingleOutputOp_SharedView MySingleOutputOp__F___init___wrapper(int64_t bias, void* handle_2_71828182846=((void*)(int64_t)0));
int MySingleOutputOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySingleOutputOp__F___init__(const MySingleOutputOp_SharedView& self, int64_t bias, void* handle_2_71828182846=((void*)(int64_t)0));
int MySingleOutputOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MySingleOutputOp__F___call__(const MySingleOutputOp_SharedView& self, int64_t b);
int MySingleOutputOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MySingleOutputOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MySingleOutputOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MySingleOutputOp::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"bias1", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"bias1", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t bias1;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return bias1; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->bias1 = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t bias, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(int64_t b);
};

// flags for convert check
uint32_t MySingleOutputOp::tag_s_2_71828182846_ = 1536904663725802610;
uint32_t MySingleOutputOp::var_num_s_2_71828182846_ = 1;
string_view MySingleOutputOp::class_name_s_2_71828182846_ = "MySingleOutputOp";
IUserDataRoot::__FunctionTable__ MySingleOutputOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MySingleOutputOp, "MySingleOutputOp");

struct MySingleOutputOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  MySingleOutputOp *ptr;
  // constructor
  MySingleOutputOp_SharedView(MySingleOutputOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MySingleOutputOp_SharedView(MySingleOutputOp *ptr) : ptr(ptr) {}
  MySingleOutputOp_SharedView() : ptr(nullptr) {}
  MySingleOutputOp_SharedView(const hercules::runtime::Any& ref) : MySingleOutputOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MySingleOutputOp")) {}
  // UserDataRef
  MySingleOutputOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MySingleOutputOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(MySingleOutputOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MySingleOutputOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MySingleOutputOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MySingleOutputOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MySingleOutputOp_F__deleter__(ILightUserData* ptr) { delete static_cast<MySingleOutputOp*>(ptr); }
void* MySingleOutputOp_F__placement_new__(void* buf) { return new (buf) MySingleOutputOp; }
void MySingleOutputOp_F__placement_del__(ILightUserData* ptr) { static_cast<MySingleOutputOp*>(ptr)->MySingleOutputOp::~MySingleOutputOp(); }
MySingleOutputOp_SharedView MySingleOutputOp__F___init___wrapper(int64_t bias, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MySingleOutputOp)) {
    auto self = new MySingleOutputOp;
    self->function_table_2_71828182846_ = &MySingleOutputOp::function_table_s_2_71828182846_;
    MySingleOutputOp__F___init__(self,  bias,  handle_2_71828182846);
    UserDataRef self_ref(MySingleOutputOp::tag_s_2_71828182846_, MySingleOutputOp::var_num_s_2_71828182846_, self, MySingleOutputOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MySingleOutputOp::tag_s_2_71828182846_, MySingleOutputOp::var_num_s_2_71828182846_, sizeof(MySingleOutputOp), MySingleOutputOp_F__placement_new__, MySingleOutputOp_F__placement_del__, __hercules_module_ctx);
    MySingleOutputOp_SharedView self_view((MySingleOutputOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MySingleOutputOp::function_table_s_2_71828182846_;
    MySingleOutputOp__F___init__(self_view,  bias,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MySingleOutputOp::__init__(int64_t bias, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
  this->bias1 = bias;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:94
  return (None);
}

HERCULES_DLL RTValue MySingleOutputOp__F___init__(const MySingleOutputOp_SharedView& self, int64_t bias, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
  return (self->__init__(bias, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
}

int MySingleOutputOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "bias"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
    auto ret = MySingleOutputOp__F___init__(MySingleOutputOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 93, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MySingleOutputOp__F___init__(MySingleOutputOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 93, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 93, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
    }
  }

  return 0;
}

int MySingleOutputOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"bias"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
    auto ret = MySingleOutputOp__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 93, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySingleOutputOp__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 93, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 93, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:93
    }
  }

  return 0;
}

int64_t MySingleOutputOp::__call__(int64_t b) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
  return ((b * this->bias1));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:97
}

HERCULES_DLL int64_t MySingleOutputOp__F___call__(const MySingleOutputOp_SharedView& self, int64_t b) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
  return (self->__call__(b));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
}

int MySingleOutputOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "b"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
    auto ret = MySingleOutputOp__F___call__(MySingleOutputOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 96, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MySingleOutputOp__F___call__(MySingleOutputOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 96, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 96, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:96
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySingleOutputOp[] = {
    (HerculesBackendPackedCFunc)MySingleOutputOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySingleOutputOp__F___init____c_api,
    (HerculesBackendPackedCFunc)MySingleOutputOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySingleOutputOp = {
    "3\000MySingleOutputOp__F___init___wrapper\000MySingleOutputOp__F___init__\000MySingleOutputOp__F___call__\000",    __hercules_func_array__MySingleOutputOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MySingleOutputOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySingleOutputOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MySingleOutputOp__F___init___wrapper\000MySingleOutputOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MySingleOutputOp__F___init___wrapper\000MySingleOutputOp__F___init__\000";

} // extern C

