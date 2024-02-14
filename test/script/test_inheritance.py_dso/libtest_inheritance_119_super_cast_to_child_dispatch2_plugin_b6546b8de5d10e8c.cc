#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBase;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyChild;
namespace {
// User class forward declarations
struct MyBase;
struct MyBase_SharedView;

// User class forward declarations
struct MyChild;
struct MyChild_SharedView;

MyBase_SharedView MyBase__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyBase__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyChild_SharedView MyChild__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyChild__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode super_cast_to_child_dispatch2(void* handle_2_71828182846=((void*)(int64_t)0));
int super_cast_to_child_dispatch2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyBase__F___init__(const MyBase_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBase__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyBase__F_foo(const MyBase_SharedView& self);
int MyBase__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyChild__F___init__(const MyChild_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyChild__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyChild__F_child_func(const MyChild_SharedView& self);
int MyChild__F_child_func__c_api(HerculesAny*, int, HerculesAny*, void*);
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
};

// flags for convert check
uint32_t MyBase::tag_s_2_71828182846_ = 9198112150213898436;
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

struct MyChild : public MyBase {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyChild"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyChild::tag_s_2_71828182846_, MyBase::tag_s_2_71828182846_};
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
  virtual Unicode child_func();
};

// flags for convert check
uint32_t MyChild::tag_s_2_71828182846_ = 679869470589213622;
uint32_t MyChild::var_num_s_2_71828182846_ = 0;
string_view MyChild::class_name_s_2_71828182846_ = "MyChild";
IUserDataRoot::__FunctionTable__ MyChild::function_table_s_2_71828182846_ = IUserDataRoot::JoinFuncTables_2_71828182846({IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyChild, "MyChild"), MyBase::function_table_s_2_71828182846_});

struct MyChild_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyChild *ptr;
  // constructor
  MyChild_SharedView(MyChild *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyChild_SharedView(MyChild *ptr) : ptr(ptr) {}
  MyChild_SharedView() : ptr(nullptr) {}
  MyChild_SharedView(const hercules::runtime::Any& ref) : MyChild_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyChild")) {}
  // UserDataRef
  MyChild_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyChild"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyChild::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyChild' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyChild*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyChild* operator->() const { return ptr; }
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

void MyChild_F__deleter__(ILightUserData* ptr) { delete static_cast<MyChild*>(ptr); }
void* MyChild_F__placement_new__(void* buf) { return new (buf) MyChild; }
void MyChild_F__placement_del__(ILightUserData* ptr) { static_cast<MyChild*>(ptr)->MyChild::~MyChild(); }
MyChild_SharedView MyChild__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyChild)) {
    auto self = new MyChild;
    self->function_table_2_71828182846_ = &MyChild::function_table_s_2_71828182846_;
    MyChild__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyChild::tag_s_2_71828182846_, MyChild::var_num_s_2_71828182846_, self, MyChild_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyChild::tag_s_2_71828182846_, MyChild::var_num_s_2_71828182846_, sizeof(MyChild), MyChild_F__placement_new__, MyChild_F__placement_del__, __hercules_module_ctx);
    MyChild_SharedView self_view((MyChild*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyChild::function_table_s_2_71828182846_;
    MyChild__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL Unicode super_cast_to_child_dispatch2(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:119
  MyChild_SharedView c = (MyChild__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:120
  MyBase_SharedView b = (CAST_TO_CLASS_VIEW_NOCHECK<MyChild_SharedView, MyBase_SharedView>(c));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:121
  (void)b->foo();  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:122
  MyChild_SharedView d = (CAST_TO_CLASS_VIEW<MyBase_SharedView, MyChild_SharedView>(b));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:123
  return (d->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:124
}

int super_cast_to_child_dispatch2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = super_cast_to_child_dispatch2(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:119
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 119, in super_cast_to_child_dispatch2\n", "super_cast_to_child_dispatch2() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:119
  }
  return 0;
}

RTValue MyBase::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
  this->val = GenericValueConverter<Unicode>{}(unicode_view(U"\u0042\u0061\u0073\u0065", 4));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:68
  return (None);
}

HERCULES_DLL RTValue MyBase__F___init__(const MyBase_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
}

int MyBase__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
    auto ret = MyBase__F___init__(MyBase_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F___init__(MyBase_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 67, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
    }
  }

  return 0;
}

int MyBase__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyBase__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 67, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:67
  }
  return 0;
}

Unicode MyBase::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
  return (this->val);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:71
}

HERCULES_DLL Unicode MyBase__F_foo(const MyBase_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
}

int MyBase__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
    auto ret = MyBase__F_foo(MyBase_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F_foo(MyBase_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 70, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:70
    }
  }

  return 0;
}

RTValue MyChild::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
  (void)this->MyBase::__init__();  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:75
  this->val = GenericValueConverter<Unicode>{}(unicode_view(U"\u0043\u0068\u0069\u006C\u0064", 5));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:76
  return (None);
}

HERCULES_DLL RTValue MyChild__F___init__(const MyChild_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
}

int MyChild__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
    auto ret = MyChild__F___init__(MyChild_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyChild__F___init__(MyChild_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 74, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
    }
  }

  return 0;
}

int MyChild__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyChild__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 74, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:74
  }
  return 0;
}

Unicode MyChild::child_func() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
  return (this->val);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:79
}

HERCULES_DLL Unicode MyChild__F_child_func(const MyChild_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
  return (self->child_func());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
}

int MyChild__F_child_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("child_func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
    auto ret = MyChild__F_child_func(MyChild_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyChild__F_child_func(MyChild_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 78, in child_func\n", "child_func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:78
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyChild[] = {
    (HerculesBackendPackedCFunc)MyChild__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyChild__F___init____c_api,
    (HerculesBackendPackedCFunc)MyChild__F_child_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyChild = {
    "3\000MyChild__F___init___wrapper\000MyChild__F___init__\000MyChild__F_child_func\000",    __hercules_func_array__MyChild,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyBase[] = {
    (HerculesBackendPackedCFunc)MyBase__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyBase__F___init____c_api,
    (HerculesBackendPackedCFunc)MyBase__F_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBase = {
    "3\000MyBase__F___init___wrapper\000MyBase__F___init__\000MyBase__F_foo\000",    __hercules_func_array__MyBase,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyBase__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyChild__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)super_cast_to_child_dispatch2__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyBase__F___init___wrapper\000MyChild__F___init___wrapper\000super_cast_to_child_dispatch2\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "5\000MyBase__F___init___wrapper\000MyChild__F___init___wrapper\000super_cast_to_child_dispatch2\000MyBase__F___init__\000MyChild__F___init__\000";

} // extern C

