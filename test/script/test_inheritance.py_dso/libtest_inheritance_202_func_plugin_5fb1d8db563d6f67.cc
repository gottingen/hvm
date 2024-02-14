#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBase;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySon;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyGrandSon;
namespace {
// User class forward declarations
struct MyBase;
struct MyBase_SharedView;

// User class forward declarations
struct MySon;
struct MySon_SharedView;

// User class forward declarations
struct MyGrandSon;
struct MyGrandSon_SharedView;

MyBase_SharedView MyBase__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyBase__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MySon_SharedView MySon__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MySon__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyGrandSon_SharedView MyGrandSon__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyGrandSon__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode func(void* handle_2_71828182846=((void*)(int64_t)0));
int func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyBase__F___init__(const MyBase_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBase__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyBase__F_foo(const MyBase_SharedView& self);
int MyBase__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySon__F___init__(const MySon_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MySon__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MySon__F_foo(const MySon_SharedView& self);
int MySon__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyGrandSon__F___init__(const MyGrandSon_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyGrandSon__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
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
    static std::initializer_list<string_view> __var_names_s__ = {};
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
    };
    return __var_table_s__;
  }

  // member vars

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode foo();
};

// flags for convert check
uint32_t MyBase::tag_s_2_71828182846_ = -8463360078577557255;
uint32_t MyBase::var_num_s_2_71828182846_ = 0;
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
    static std::initializer_list<string_view> __var_names_s__ = {};
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
    };
    return __var_table_s__;
  }

  // member vars

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode foo();
};

// flags for convert check
uint32_t MySon::tag_s_2_71828182846_ = 6090298335322534205;
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

struct MyGrandSon : public MySon {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyGrandSon"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyGrandSon::tag_s_2_71828182846_, MySon::tag_s_2_71828182846_, MyBase::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {};
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
    };
    return __var_table_s__;
  }

  // member vars

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t MyGrandSon::tag_s_2_71828182846_ = -4495270278025846023;
uint32_t MyGrandSon::var_num_s_2_71828182846_ = 0;
string_view MyGrandSon::class_name_s_2_71828182846_ = "MyGrandSon";
IUserDataRoot::__FunctionTable__ MyGrandSon::function_table_s_2_71828182846_ = IUserDataRoot::JoinFuncTables_2_71828182846({IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyGrandSon, "MyGrandSon"), MySon::function_table_s_2_71828182846_, MyBase::function_table_s_2_71828182846_});

struct MyGrandSon_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyGrandSon *ptr;
  // constructor
  MyGrandSon_SharedView(MyGrandSon *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyGrandSon_SharedView(MyGrandSon *ptr) : ptr(ptr) {}
  MyGrandSon_SharedView() : ptr(nullptr) {}
  MyGrandSon_SharedView(const hercules::runtime::Any& ref) : MyGrandSon_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyGrandSon")) {}
  // UserDataRef
  MyGrandSon_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyGrandSon"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyGrandSon::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyGrandSon' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyGrandSon*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyGrandSon* operator->() const { return ptr; }
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

void MyGrandSon_F__deleter__(ILightUserData* ptr) { delete static_cast<MyGrandSon*>(ptr); }
void* MyGrandSon_F__placement_new__(void* buf) { return new (buf) MyGrandSon; }
void MyGrandSon_F__placement_del__(ILightUserData* ptr) { static_cast<MyGrandSon*>(ptr)->MyGrandSon::~MyGrandSon(); }
MyGrandSon_SharedView MyGrandSon__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyGrandSon)) {
    auto self = new MyGrandSon;
    self->function_table_2_71828182846_ = &MyGrandSon::function_table_s_2_71828182846_;
    MyGrandSon__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyGrandSon::tag_s_2_71828182846_, MyGrandSon::var_num_s_2_71828182846_, self, MyGrandSon_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyGrandSon::tag_s_2_71828182846_, MyGrandSon::var_num_s_2_71828182846_, sizeof(MyGrandSon), MyGrandSon_F__placement_new__, MyGrandSon_F__placement_del__, __hercules_module_ctx);
    MyGrandSon_SharedView self_view((MyGrandSon*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyGrandSon::function_table_s_2_71828182846_;
    MyGrandSon__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL Unicode func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:202
  MyGrandSon_SharedView gran_son = (MyGrandSon__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:203
  return (ArithOps::add(gran_son->MySon::foo(), gran_son->MyBase::foo()));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:204
}

int func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:202
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 202, in func\n", "func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:202
  }
  return 0;
}

RTValue MyBase::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
  return (None);
}

HERCULES_DLL RTValue MyBase__F___init__(const MyBase_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
}

int MyBase__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
    auto ret = MyBase__F___init__(MyBase_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F___init__(MyBase_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 185, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
    }
  }

  return 0;
}

int MyBase__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyBase__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 185, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:185
  }
  return 0;
}

Unicode MyBase::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0042\u0061\u0073\u0065", 6)));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:189
}

HERCULES_DLL Unicode MyBase__F_foo(const MyBase_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
}

int MyBase__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
    auto ret = MyBase__F_foo(MyBase_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBase__F_foo(MyBase_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 188, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:188
    }
  }

  return 0;
}

RTValue MySon::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
  return (None);
}

HERCULES_DLL RTValue MySon__F___init__(const MySon_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
}

int MySon__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
    auto ret = MySon__F___init__(MySon_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySon__F___init__(MySon_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 192, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
    }
  }

  return 0;
}

int MySon__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MySon__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 192, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:192
  }
  return 0;
}

Unicode MySon::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u004D\u0079\u0053\u006F\u006E", 5)));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:196
}

HERCULES_DLL Unicode MySon__F_foo(const MySon_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
}

int MySon__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
    auto ret = MySon__F_foo(MySon_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySon__F_foo(MySon_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 195, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:195
    }
  }

  return 0;
}

RTValue MyGrandSon::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
  return (None);
}

HERCULES_DLL RTValue MyGrandSon__F___init__(const MyGrandSon_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
}

int MyGrandSon__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
    auto ret = MyGrandSon__F___init__(MyGrandSon_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyGrandSon__F___init__(MyGrandSon_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 199, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
    }
  }

  return 0;
}

int MyGrandSon__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyGrandSon__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 199, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:199
  }
  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyGrandSon[] = {
    (HerculesBackendPackedCFunc)MyGrandSon__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyGrandSon__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyGrandSon = {
    "2\000MyGrandSon__F___init___wrapper\000MyGrandSon__F___init__\000",    __hercules_func_array__MyGrandSon,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySon[] = {
    (HerculesBackendPackedCFunc)MySon__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySon__F___init____c_api,
    (HerculesBackendPackedCFunc)MySon__F_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySon = {
    "3\000MySon__F___init___wrapper\000MySon__F___init__\000MySon__F_foo\000",    __hercules_func_array__MySon,
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
    (HerculesBackendPackedCFunc)MySon__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyGrandSon__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "4\000MyBase__F___init___wrapper\000MySon__F___init___wrapper\000MyGrandSon__F___init___wrapper\000func\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "7\000MyBase__F___init___wrapper\000MySon__F___init___wrapper\000MyGrandSon__F___init___wrapper\000func\000MyBase__F___init__\000MySon__F___init__\000MyGrandSon__F___init__\000";

} // extern C

