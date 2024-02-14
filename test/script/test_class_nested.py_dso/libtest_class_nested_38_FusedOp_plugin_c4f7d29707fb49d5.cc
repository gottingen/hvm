#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ToyPt;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__FusedOp;
namespace {
// User class forward declarations
struct ToyPt;
struct ToyPt_SharedView;

// User class forward declarations
struct FusedOp;
struct FusedOp_SharedView;

ToyPt_SharedView ToyPt__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int ToyPt__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
FusedOp_SharedView FusedOp__F___init___wrapper(const ToyPt_SharedView& x, void* handle_2_71828182846=((void*)(int64_t)0));
int FusedOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ToyPt__F___init__(const ToyPt_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int ToyPt__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t ToyPt__F___call__(const ToyPt_SharedView& self, const string_view& target_key);
int ToyPt__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue FusedOp__F___init__(const FusedOp_SharedView& self, const ToyPt_SharedView& x, void* handle_2_71828182846=((void*)(int64_t)0));
int FusedOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t FusedOp__F___call__(const FusedOp_SharedView& self, const string_view& target_key);
int FusedOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct ToyPt : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ToyPt"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ToyPt::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"i", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"i", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t i;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return i; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->i = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(const string_view& target_key);
};

// flags for convert check
uint32_t ToyPt::tag_s_2_71828182846_ = 1498320885847186650;
uint32_t ToyPt::var_num_s_2_71828182846_ = 1;
string_view ToyPt::class_name_s_2_71828182846_ = "ToyPt";
IUserDataRoot::__FunctionTable__ ToyPt::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ToyPt, "ToyPt");

struct ToyPt_SharedView: public IUserDataSharedViewRoot {
  // member var
  ToyPt *ptr;
  // constructor
  ToyPt_SharedView(ToyPt *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ToyPt_SharedView(ToyPt *ptr) : ptr(ptr) {}
  ToyPt_SharedView() : ptr(nullptr) {}
  ToyPt_SharedView(const hercules::runtime::Any& ref) : ToyPt_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ToyPt")) {}
  // UserDataRef
  ToyPt_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ToyPt"));
    if(!base_ud_ptr->isinstance_2_71828182846(ToyPt::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ToyPt' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ToyPt*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ToyPt* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct FusedOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "FusedOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {FusedOp::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"toy_pt_op", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"toy_pt_op", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  ToyPt_SharedView toy_pt_op;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return toy_pt_op.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->toy_pt_op = static_cast<ToyPt_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "ToyPt")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const ToyPt_SharedView& x, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(const string_view& target_key);
};

// flags for convert check
uint32_t FusedOp::tag_s_2_71828182846_ = 8003159276148438897;
uint32_t FusedOp::var_num_s_2_71828182846_ = 1;
string_view FusedOp::class_name_s_2_71828182846_ = "FusedOp";
IUserDataRoot::__FunctionTable__ FusedOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__FusedOp, "FusedOp");

struct FusedOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  FusedOp *ptr;
  // constructor
  FusedOp_SharedView(FusedOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  FusedOp_SharedView(FusedOp *ptr) : ptr(ptr) {}
  FusedOp_SharedView() : ptr(nullptr) {}
  FusedOp_SharedView(const hercules::runtime::Any& ref) : FusedOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "FusedOp")) {}
  // UserDataRef
  FusedOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("FusedOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(FusedOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'FusedOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<FusedOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  FusedOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ToyPt_F__deleter__(ILightUserData* ptr) { delete static_cast<ToyPt*>(ptr); }
void* ToyPt_F__placement_new__(void* buf) { return new (buf) ToyPt; }
void ToyPt_F__placement_del__(ILightUserData* ptr) { static_cast<ToyPt*>(ptr)->ToyPt::~ToyPt(); }
ToyPt_SharedView ToyPt__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ToyPt)) {
    auto self = new ToyPt;
    self->function_table_2_71828182846_ = &ToyPt::function_table_s_2_71828182846_;
    ToyPt__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(ToyPt::tag_s_2_71828182846_, ToyPt::var_num_s_2_71828182846_, self, ToyPt_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ToyPt::tag_s_2_71828182846_, ToyPt::var_num_s_2_71828182846_, sizeof(ToyPt), ToyPt_F__placement_new__, ToyPt_F__placement_del__, __hercules_module_ctx);
    ToyPt_SharedView self_view((ToyPt*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ToyPt::function_table_s_2_71828182846_;
    ToyPt__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void FusedOp_F__deleter__(ILightUserData* ptr) { delete static_cast<FusedOp*>(ptr); }
void* FusedOp_F__placement_new__(void* buf) { return new (buf) FusedOp; }
void FusedOp_F__placement_del__(ILightUserData* ptr) { static_cast<FusedOp*>(ptr)->FusedOp::~FusedOp(); }
FusedOp_SharedView FusedOp__F___init___wrapper(const ToyPt_SharedView& x, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(FusedOp)) {
    auto self = new FusedOp;
    self->function_table_2_71828182846_ = &FusedOp::function_table_s_2_71828182846_;
    FusedOp__F___init__(self,  x,  handle_2_71828182846);
    UserDataRef self_ref(FusedOp::tag_s_2_71828182846_, FusedOp::var_num_s_2_71828182846_, self, FusedOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(FusedOp::tag_s_2_71828182846_, FusedOp::var_num_s_2_71828182846_, sizeof(FusedOp), FusedOp_F__placement_new__, FusedOp_F__placement_del__, __hercules_module_ctx);
    FusedOp_SharedView self_view((FusedOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &FusedOp::function_table_s_2_71828182846_;
    FusedOp__F___init__(self_view,  x,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue ToyPt::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
  this->i = (int64_t)1;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:28
  return (None);
}

HERCULES_DLL RTValue ToyPt__F___init__(const ToyPt_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
}

int ToyPt__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
    auto ret = ToyPt__F___init__(ToyPt_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ToyPt__F___init__(ToyPt_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 27, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
    }
  }

  return 0;
}

int ToyPt__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = ToyPt__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 27, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:27
  }
  return 0;
}

int64_t ToyPt::__call__(const string_view& target_key) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, this);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:31
  int64_t r = (this->i);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:32
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, unicode_view(U"\u0074\u006F\u0079\u0070\u0074\u0020\u0066\u006F\u0072\u0077\u0061\u0072\u0064\u003A", 14), r, target_key);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:33
  this->i = (this->i + (int64_t)1);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:34
  return (r);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:35
}

HERCULES_DLL int64_t ToyPt__F___call__(const ToyPt_SharedView& self, const string_view& target_key) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
  return (self->__call__(target_key));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
}

int ToyPt__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "target_key"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
    auto ret = ToyPt__F___call__(ToyPt_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 30, in __call__\n", "expect 'pos_args[1]' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ToyPt__F___call__(ToyPt_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 30, in __call__\n", "expect 'args_t[1]' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 30, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:30
    }
  }

  return 0;
}

RTValue FusedOp::__init__(const ToyPt_SharedView& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
  (void)x->__call__(string_view("haha", 4));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:40
  this->toy_pt_op = x;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:41
  return (None);
}

HERCULES_DLL RTValue FusedOp__F___init__(const FusedOp_SharedView& self, const ToyPt_SharedView& x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
  return (self->__init__(x, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
}

int FusedOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "x"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
    auto ret = FusedOp__F___init__(FusedOp_SharedView(static_cast<const Any&>(pos_args[0])), ToyPt_SharedView(static_cast<const Any&>(pos_args[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = FusedOp__F___init__(FusedOp_SharedView(static_cast<const Any&>(args_t[0])), ToyPt_SharedView(static_cast<const Any&>(args_t[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 39, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
    }
  }

  return 0;
}

int FusedOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
    auto ret = FusedOp__F___init___wrapper(ToyPt_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = FusedOp__F___init___wrapper(ToyPt_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 39, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:39
    }
  }

  return 0;
}

int64_t FusedOp::__call__(const string_view& target_key) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, this->toy_pt_op);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:44
  return (this->toy_pt_op->__call__(target_key));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:45
}

HERCULES_DLL int64_t FusedOp__F___call__(const FusedOp_SharedView& self, const string_view& target_key) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
  return (self->__call__(target_key));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
}

int FusedOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "target_key"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
    auto ret = FusedOp__F___call__(FusedOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<string_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 43, in __call__\n", "expect 'pos_args[1]' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = FusedOp__F___call__(FusedOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<string_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 43, in __call__\n", "expect 'args_t[1]' is 'py::bytes' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_nested.py\", line 43, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_nested.py:43
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__FusedOp[] = {
    (HerculesBackendPackedCFunc)FusedOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)FusedOp__F___init____c_api,
    (HerculesBackendPackedCFunc)FusedOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__FusedOp = {
    "3\000FusedOp__F___init___wrapper\000FusedOp__F___init__\000FusedOp__F___call__\000",    __hercules_func_array__FusedOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ToyPt[] = {
    (HerculesBackendPackedCFunc)ToyPt__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ToyPt__F___init____c_api,
    (HerculesBackendPackedCFunc)ToyPt__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ToyPt = {
    "3\000ToyPt__F___init___wrapper\000ToyPt__F___init__\000ToyPt__F___call__\000",    __hercules_func_array__ToyPt,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ToyPt__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)FusedOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)FusedOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000ToyPt__F___init___wrapper\000FusedOp__F___init___wrapper\000FusedOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000ToyPt__F___init___wrapper\000FusedOp__F___init___wrapper\000ToyPt__F___init__\000FusedOp__F___init__\000";

} // extern C

