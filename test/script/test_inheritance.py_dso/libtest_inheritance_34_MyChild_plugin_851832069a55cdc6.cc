#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySimpleBase;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyChild;
namespace {
// User class forward declarations
struct MySimpleBase;
struct MySimpleBase_SharedView;

// User class forward declarations
struct MyChild;
struct MyChild_SharedView;

MySimpleBase_SharedView MySimpleBase__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MySimpleBase__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyChild_SharedView MyChild__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyChild__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySimpleBase__F___init__(const MySimpleBase_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MySimpleBase__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MySimpleBase__F_foo(const MySimpleBase_SharedView& self);
int MySimpleBase__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyChild__F___init__(const MyChild_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyChild__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode MyChild__F___call__(const MyChild_SharedView& self);
int MyChild__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MySimpleBase : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MySimpleBase"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MySimpleBase::tag_s_2_71828182846_};
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
uint32_t MySimpleBase::tag_s_2_71828182846_ = -1046124187503102783;
uint32_t MySimpleBase::var_num_s_2_71828182846_ = 0;
string_view MySimpleBase::class_name_s_2_71828182846_ = "MySimpleBase";
IUserDataRoot::__FunctionTable__ MySimpleBase::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MySimpleBase, "MySimpleBase");

struct MySimpleBase_SharedView: public IUserDataSharedViewRoot {
  // member var
  MySimpleBase *ptr;
  // constructor
  MySimpleBase_SharedView(MySimpleBase *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MySimpleBase_SharedView(MySimpleBase *ptr) : ptr(ptr) {}
  MySimpleBase_SharedView() : ptr(nullptr) {}
  MySimpleBase_SharedView(const hercules::runtime::Any& ref) : MySimpleBase_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MySimpleBase")) {}
  // UserDataRef
  MySimpleBase_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MySimpleBase"));
    if(!base_ud_ptr->isinstance_2_71828182846(MySimpleBase::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MySimpleBase' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MySimpleBase*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MySimpleBase* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct MyChild : public MySimpleBase {
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
    static std::initializer_list<uint64_t> all_tags = {MyChild::tag_s_2_71828182846_, MySimpleBase::tag_s_2_71828182846_};
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
  virtual Unicode __call__();
};

// flags for convert check
uint32_t MyChild::tag_s_2_71828182846_ = 9182560187605983498;
uint32_t MyChild::var_num_s_2_71828182846_ = 0;
string_view MyChild::class_name_s_2_71828182846_ = "MyChild";
IUserDataRoot::__FunctionTable__ MyChild::function_table_s_2_71828182846_ = IUserDataRoot::JoinFuncTables_2_71828182846({IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyChild, "MyChild"), MySimpleBase::function_table_s_2_71828182846_});

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

void MySimpleBase_F__deleter__(ILightUserData* ptr) { delete static_cast<MySimpleBase*>(ptr); }
void* MySimpleBase_F__placement_new__(void* buf) { return new (buf) MySimpleBase; }
void MySimpleBase_F__placement_del__(ILightUserData* ptr) { static_cast<MySimpleBase*>(ptr)->MySimpleBase::~MySimpleBase(); }
MySimpleBase_SharedView MySimpleBase__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MySimpleBase)) {
    auto self = new MySimpleBase;
    self->function_table_2_71828182846_ = &MySimpleBase::function_table_s_2_71828182846_;
    MySimpleBase__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MySimpleBase::tag_s_2_71828182846_, MySimpleBase::var_num_s_2_71828182846_, self, MySimpleBase_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MySimpleBase::tag_s_2_71828182846_, MySimpleBase::var_num_s_2_71828182846_, sizeof(MySimpleBase), MySimpleBase_F__placement_new__, MySimpleBase_F__placement_del__, __hercules_module_ctx);
    MySimpleBase_SharedView self_view((MySimpleBase*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MySimpleBase::function_table_s_2_71828182846_;
    MySimpleBase__F___init__(self_view,  handle_2_71828182846);
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

RTValue MySimpleBase::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
  return (None);
}

HERCULES_DLL RTValue MySimpleBase__F___init__(const MySimpleBase_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
}

int MySimpleBase__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
    auto ret = MySimpleBase__F___init__(MySimpleBase_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySimpleBase__F___init__(MySimpleBase_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 28, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
    }
  }

  return 0;
}

int MySimpleBase__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MySimpleBase__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 28, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:28
  }
  return 0;
}

Unicode MySimpleBase::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0042\u0061\u0073\u0065", 4)));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:32
}

HERCULES_DLL Unicode MySimpleBase__F_foo(const MySimpleBase_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
}

int MySimpleBase__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
    auto ret = MySimpleBase__F_foo(MySimpleBase_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySimpleBase__F_foo(MySimpleBase_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 31, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:31
    }
  }

  return 0;
}

RTValue MyChild::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
  (void)this->MySimpleBase::__init__();  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:36
  return (None);
}

HERCULES_DLL RTValue MyChild__F___init__(const MyChild_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
}

int MyChild__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
    auto ret = MyChild__F___init__(MyChild_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyChild__F___init__(MyChild_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 35, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
    }
  }

  return 0;
}

int MyChild__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyChild__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 35, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:35
  }
  return 0;
}

Unicode MyChild::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
  return (this->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:39
}

HERCULES_DLL Unicode MyChild__F___call__(const MyChild_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
}

int MyChild__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
    auto ret = MyChild__F___call__(MyChild_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyChild__F___call__(MyChild_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_inheritance.py\", line 38, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_inheritance.py:38
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyChild[] = {
    (HerculesBackendPackedCFunc)MyChild__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyChild__F___init____c_api,
    (HerculesBackendPackedCFunc)MyChild__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyChild = {
    "3\000MyChild__F___init___wrapper\000MyChild__F___init__\000MyChild__F___call__\000",    __hercules_func_array__MyChild,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySimpleBase[] = {
    (HerculesBackendPackedCFunc)MySimpleBase__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySimpleBase__F___init____c_api,
    (HerculesBackendPackedCFunc)MySimpleBase__F_foo__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySimpleBase = {
    "3\000MySimpleBase__F___init___wrapper\000MySimpleBase__F___init__\000MySimpleBase__F_foo\000",    __hercules_func_array__MySimpleBase,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MySimpleBase__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyChild__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyChild__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MySimpleBase__F___init___wrapper\000MyChild__F___init___wrapper\000MyChild__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000MySimpleBase__F___init___wrapper\000MyChild__F___init___wrapper\000MySimpleBase__F___init__\000MyChild__F___init__\000";

} // extern C

