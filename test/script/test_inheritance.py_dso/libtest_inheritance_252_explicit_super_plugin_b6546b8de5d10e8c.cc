#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBase;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySon;
namespace {
// User class forward declarations
struct MyBase;
struct MyBase_SharedView;

// User class forward declarations
struct MySon;
struct MySon_SharedView;

MyBase_SharedView MyBase__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyBase__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MySon_SharedView MySon__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MySon__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode explicit_super(void* handle_2_71828182846=((void*)(int64_t)0));
int explicit_super__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyBase__F___init__(const MyBase_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBase__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyBase__F_foo(const MyBase_SharedView& self);
int MyBase__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyBase__F_func(const MyBase_SharedView& self);
int MyBase__F_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySon__F___init__(const MySon_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MySon__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MySon__F_foo(const MySon_SharedView& self);
int MySon__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MySon__F_super_func(const MySon_SharedView& self);
int MySon__F_super_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MySon__F_func(const MySon_SharedView& self);
int MySon__F_func__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyBase : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyBase"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyBase::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"val", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"val", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  Unicode val;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return val; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->val = HERCULES_TYPE_AS(val, Unicode); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode foo();
  virtual Unicode func();
};

// flags for convert check
uint32_t MyBase::tag_s_2_71828182846_ = -4869246558815600006;
uint32_t MyBase::var_num_s_2_71828182846_ = 1;
string_view MyBase::class_name_s_2_71828182846_ = "MyBase";
IUserDataRoot::__FunctionTable__ MyBase::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyBase, "MyBase");

struct MyBase_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyBase *ptr;
  // constructor
  MyBase_SharedView(MyBase *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyBase_SharedView(MyBase *ptr) : ptr(ptr) {}
  MyBase_SharedView() : ptr(nullptr) {}
  MyBase_SharedView(const hercules::runtime::Any& ref) : MyBase_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyBase")) {}
  // UserDataRef
  MyBase_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyBase"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyBase::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyBase' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyBase*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyBase* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct MySon : public MyBase {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MySon"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MySon::tag_s_2_71828182846_, MyBase::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"val", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"val", 0}, 
    };
    return __var_table_s__;
  }

  // member vars

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return val; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->val = HERCULES_TYPE_AS(val, Unicode); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode foo();
  virtual Unicode super_func();
  virtual Unicode func();
};

// flags for convert check
uint32_t MySon::tag_s_2_71828182846_ = 6792683480110103698;
uint32_t MySon::var_num_s_2_71828182846_ = 0;
string_view MySon::class_name_s_2_71828182846_ = "MySon";
IUserDataRoot::__FunctionTable__ MySon::function_table_s_2_71828182846_ = IUserDataRoot::JoinFuncTables_2_71828182846({IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MySon, "MySon"), MyBase::function_table_s_2_71828182846_});

struct MySon_SharedView: public IUserDataSharedViewRoot {
  // member var
  MySon *ptr;
  // constructor
  MySon_SharedView(MySon *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MySon_SharedView(MySon *ptr) : ptr(ptr) {}
  MySon_SharedView() : ptr(nullptr) {}
  MySon_SharedView(const hercules::runtime::Any& ref) : MySon_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MySon")) {}
  // UserDataRef
  MySon_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MySon"));
    if(!base_ud_ptr->isinstance_2_71828182846(MySon::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MySon' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MySon*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MySon* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyBase_F__deleter__(ILightUserData* ptr) { delete static_cast<MyBase*>(ptr); }
void* MyBase_F__placement_new__(void* buf) { return new (buf) MyBase; }
void MyBase_F__placement_del__(ILightUserData* ptr) { static_cast<MyBase*>(ptr)->MyBase::~MyBase(); }
MyBase_SharedView MyBase__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyBase)) {
    auto self = new MyBase;
    self->function_table_2_71828182846_ = &MyBase::function_table_s_2_71828182846_;
    MyBase__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyBase::tag_s_2_71828182846_, MyBase::var_num_s_2_71828182846_, self, MyBase_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyBase::tag_s_2_71828182846_, MyBase::var_num_s_2_71828182846_, sizeof(MyBase), MyBase_F__placement_new__, MyBase_F__placement_del__, __hercules_module_ctx);
    MyBase_SharedView self_view((MyBase*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyBase::function_table_s_2_71828182846_;
    MyBase__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void MySon_F__deleter__(ILightUserData* ptr) { delete static_cast<MySon*>(ptr); }
void* MySon_F__placement_new__(void* buf) { return new (buf) MySon; }
void MySon_F__placement_del__(ILightUserData* ptr) { static_cast<MySon*>(ptr)->MySon::~MySon(); }
MySon_SharedView MySon__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MySon)) {
    auto self = new MySon;
    self->function_table_2_71828182846_ = &MySon::function_table_s_2_71828182846_;
    MySon__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MySon::tag_s_2_71828182846_, MySon::var_num_s_2_71828182846_, self, MySon_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MySon::tag_s_2_71828182846_, MySon::var_num_s_2_71828182846_, sizeof(MySon), MySon_F__placement_new__, MySon_F__placement_del__, __hercules_module_ctx);
    MySon_SharedView self_view((MySon*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MySon::function_table_s_2_71828182846_;
    MySon__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL Unicode explicit_super(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:252
  MySon_SharedView son = (MySon__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:253
  return (son->MyBase::func());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:254
}

int explicit_super__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = explicit_super(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:252
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 252, in explicit_super\n", "explicit_super() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:252
  }
  return 0;
}

RTValue MyBase::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
  this->val = GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0042\u0061\u0073\u0065", 6));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:222
  return (None);
}

HERCULES_DLL RTValue MyBase__F___init__(const MyBase_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
}

int MyBase__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
    auto ret = MyBase__F___init__(MyBase_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F___init__(MyBase_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 220, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
    }
  }

  return 0;
}

int MyBase__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyBase__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 220, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:220
  }
  return 0;
}

Unicode MyBase::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0042\u0061\u0073\u0065\u003A\u003A\u0066\u006F\u006F\u0028\u0029", 13)));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:225
}

HERCULES_DLL Unicode MyBase__F_foo(const MyBase_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
}

int MyBase__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
    auto ret = MyBase__F_foo(MyBase_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F_foo(MyBase_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 224, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:224
    }
  }

  return 0;
}

Unicode MyBase::func() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
  return (ArithOps::add(ArithOps::add(this->foo(), unicode_view(U"\u0020\u004D\u0079\u0042\u0061\u0073\u0065\u003A\u003A\u0066\u0075\u006E\u0063\u0028\u0029\u0020\u003D\u0020", 18)), this->val));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:228
}

HERCULES_DLL Unicode MyBase__F_func(const MyBase_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
  return (self->func());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
}

int MyBase__F_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
    auto ret = MyBase__F_func(MyBase_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F_func(MyBase_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 227, in func\n", "func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:227
    }
  }

  return 0;
}

RTValue MySon::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
  (void)this->MyBase::__init__();  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:232
  this->val = GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0053\u006F\u006E", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:233
  return (None);
}

HERCULES_DLL RTValue MySon__F___init__(const MySon_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
}

int MySon__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
    auto ret = MySon__F___init__(MySon_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySon__F___init__(MySon_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 231, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
    }
  }

  return 0;
}

int MySon__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MySon__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 231, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:231
  }
  return 0;
}

Unicode MySon::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0053\u006F\u006E\u003A\u003A\u0066\u006F\u006F\u0028\u0029", 12)));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:236
}

HERCULES_DLL Unicode MySon__F_foo(const MySon_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
}

int MySon__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
    auto ret = MySon__F_foo(MySon_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySon__F_foo(MySon_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 235, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:235
    }
  }

  return 0;
}

Unicode MySon::super_func() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
  return (this->MyBase::func());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:239
}

HERCULES_DLL Unicode MySon__F_super_func(const MySon_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
  return (self->super_func());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
}

int MySon__F_super_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("super_func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
    auto ret = MySon__F_super_func(MySon_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySon__F_super_func(MySon_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 238, in super_func\n", "super_func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:238
    }
  }

  return 0;
}

Unicode MySon::func() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
  return (ArithOps::add(ArithOps::add(this->foo(), unicode_view(U"\u0020\u004D\u0079\u0053\u006F\u006E\u003A\u003A\u0066\u0075\u006E\u0063\u0028\u0029\u0020\u003D\u0020", 17)), this->val));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:242
}

HERCULES_DLL Unicode MySon__F_func(const MySon_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
  return (self->func());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
}

int MySon__F_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
    auto ret = MySon__F_func(MySon_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySon__F_func(MySon_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 241, in func\n", "func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:241
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySon[] = {
    (HerculesBackendPackedCFunc)MySon__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySon__F___init____c_api,
    (HerculesBackendPackedCFunc)MySon__F_foo__c_api,
    (HerculesBackendPackedCFunc)MySon__F_super_func__c_api,
    (HerculesBackendPackedCFunc)MySon__F_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySon = {
    "5\000MySon__F___init___wrapper\000MySon__F___init__\000MySon__F_foo\000MySon__F_super_func\000MySon__F_func\000",    __hercules_func_array__MySon,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyBase[] = {
    (HerculesBackendPackedCFunc)MyBase__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyBase__F___init____c_api,
    (HerculesBackendPackedCFunc)MyBase__F_foo__c_api,
    (HerculesBackendPackedCFunc)MyBase__F_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBase = {
    "4\000MyBase__F___init___wrapper\000MyBase__F___init__\000MyBase__F_foo\000MyBase__F_func\000",    __hercules_func_array__MyBase,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyBase__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySon__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)explicit_super__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyBase__F___init___wrapper\000MySon__F___init___wrapper\000explicit_super\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "5\000MyBase__F___init___wrapper\000MySon__F___init___wrapper\000explicit_super\000MyBase__F___init__\000MySon__F___init__\000";

} // extern C

