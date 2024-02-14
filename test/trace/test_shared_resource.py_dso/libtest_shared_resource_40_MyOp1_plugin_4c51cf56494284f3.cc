#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyUserData;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyOp1;
namespace {
// User class forward declarations
struct MyUserData;
struct MyUserData_SharedView;

// User class forward declarations
struct MyOp1;
struct MyOp1_SharedView;

MyUserData_SharedView MyUserData__F___init___wrapper(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyUserData__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyOp1_SharedView MyOp1__F___init___wrapper(const MyUserData_SharedView& ud1, int64_t other1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyOp1__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyUserData__F___init__(const MyUserData_SharedView& self, int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyUserData__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyUserData__F_forward(const MyUserData_SharedView& self);
int MyUserData__F_forward__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyOp1__F___init__(const MyOp1_SharedView& self, const MyUserData_SharedView& ud1, int64_t other1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyOp1__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyOp1__F___call__(const MyOp1_SharedView& self, int64_t seed);
int MyOp1__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyUserData : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyUserData"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyUserData::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"a", "b", "c", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"a", 0}, 
      {"b", 1}, 
      {"c", 2}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t a;
  int64_t b;
  int64_t c;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return a; } break;
    case 1: { return b; } break;
    case 2: { return c; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->a = HERCULES_TYPE_AS(val, int64_t); } break;
    case 1: { this->b = HERCULES_TYPE_AS(val, int64_t); } break;
    case 2: { this->c = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t forward();
};

// flags for convert check
uint32_t MyUserData::tag_s_2_71828182846_ = -7382335965748099927;
uint32_t MyUserData::var_num_s_2_71828182846_ = 3;
string_view MyUserData::class_name_s_2_71828182846_ = "MyUserData";
IUserDataRoot::__FunctionTable__ MyUserData::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyUserData, "MyUserData");

struct MyUserData_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyUserData *ptr;
  // constructor
  MyUserData_SharedView(MyUserData *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyUserData_SharedView(MyUserData *ptr) : ptr(ptr) {}
  MyUserData_SharedView() : ptr(nullptr) {}
  MyUserData_SharedView(const hercules::runtime::Any& ref) : MyUserData_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyUserData")) {}
  // UserDataRef
  MyUserData_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyUserData"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyUserData::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyUserData' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyUserData*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyUserData* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct MyOp1 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyOp1"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyOp1::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"ud", "other", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"ud", 0}, 
      {"other", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  MyUserData_SharedView ud;
  int64_t other;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return ud.operator RTView(); } break;
    case 1: { return other; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->ud = static_cast<MyUserData_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "MyUserData")); } break;
    case 1: { this->other = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const MyUserData_SharedView& ud1, int64_t other1, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(int64_t seed);
};

// flags for convert check
uint32_t MyOp1::tag_s_2_71828182846_ = 3443552213093739989;
uint32_t MyOp1::var_num_s_2_71828182846_ = 2;
string_view MyOp1::class_name_s_2_71828182846_ = "MyOp1";
IUserDataRoot::__FunctionTable__ MyOp1::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyOp1, "MyOp1");

struct MyOp1_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyOp1 *ptr;
  // constructor
  MyOp1_SharedView(MyOp1 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyOp1_SharedView(MyOp1 *ptr) : ptr(ptr) {}
  MyOp1_SharedView() : ptr(nullptr) {}
  MyOp1_SharedView(const hercules::runtime::Any& ref) : MyOp1_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyOp1")) {}
  // UserDataRef
  MyOp1_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyOp1"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyOp1::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyOp1' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyOp1*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyOp1* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyUserData_F__deleter__(ILightUserData* ptr) { delete static_cast<MyUserData*>(ptr); }
void* MyUserData_F__placement_new__(void* buf) { return new (buf) MyUserData; }
void MyUserData_F__placement_del__(ILightUserData* ptr) { static_cast<MyUserData*>(ptr)->MyUserData::~MyUserData(); }
MyUserData_SharedView MyUserData__F___init___wrapper(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyUserData)) {
    auto self = new MyUserData;
    self->function_table_2_71828182846_ = &MyUserData::function_table_s_2_71828182846_;
    MyUserData__F___init__(self,  a1,  b1,  c1,  handle_2_71828182846);
    UserDataRef self_ref(MyUserData::tag_s_2_71828182846_, MyUserData::var_num_s_2_71828182846_, self, MyUserData_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyUserData::tag_s_2_71828182846_, MyUserData::var_num_s_2_71828182846_, sizeof(MyUserData), MyUserData_F__placement_new__, MyUserData_F__placement_del__, __hercules_module_ctx);
    MyUserData_SharedView self_view((MyUserData*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyUserData::function_table_s_2_71828182846_;
    MyUserData__F___init__(self_view,  a1,  b1,  c1,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void MyOp1_F__deleter__(ILightUserData* ptr) { delete static_cast<MyOp1*>(ptr); }
void* MyOp1_F__placement_new__(void* buf) { return new (buf) MyOp1; }
void MyOp1_F__placement_del__(ILightUserData* ptr) { static_cast<MyOp1*>(ptr)->MyOp1::~MyOp1(); }
MyOp1_SharedView MyOp1__F___init___wrapper(const MyUserData_SharedView& ud1, int64_t other1, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyOp1)) {
    auto self = new MyOp1;
    self->function_table_2_71828182846_ = &MyOp1::function_table_s_2_71828182846_;
    MyOp1__F___init__(self,  ud1,  other1,  handle_2_71828182846);
    UserDataRef self_ref(MyOp1::tag_s_2_71828182846_, MyOp1::var_num_s_2_71828182846_, self, MyOp1_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyOp1::tag_s_2_71828182846_, MyOp1::var_num_s_2_71828182846_, sizeof(MyOp1), MyOp1_F__placement_new__, MyOp1_F__placement_del__, __hercules_module_ctx);
    MyOp1_SharedView self_view((MyOp1*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyOp1::function_table_s_2_71828182846_;
    MyOp1__F___init__(self_view,  ud1,  other1,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyUserData::__init__(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
  this->a = a1;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:32
  this->b = b1;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:33
  this->c = c1;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:34
  return (None);
}

HERCULES_DLL RTValue MyUserData__F___init__(const MyUserData_SharedView& self, int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
  return (self->__init__(a1, b1, c1, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
}

int MyUserData__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"self", "a1", "b1", "c1"};
    KwargsUnpackHelper helper("__init__", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
    auto ret = MyUserData__F___init__(MyUserData_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = MyUserData__F___init__(MyUserData_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "__init__() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
    }
  }

  return 0;
}

int MyUserData__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"a1", "b1", "c1"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
    auto ret = MyUserData__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyUserData__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 31, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:31
    }
  }

  return 0;
}

int64_t MyUserData::forward() {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
  return (((this->a + this->b) + this->c));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:37
}

HERCULES_DLL int64_t MyUserData__F_forward(const MyUserData_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
  return (self->forward());  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
}

int MyUserData__F_forward__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("forward", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
    auto ret = MyUserData__F_forward(MyUserData_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyUserData__F_forward(MyUserData_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 36, in forward\n", "forward() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:36
    }
  }

  return 0;
}

RTValue MyOp1::__init__(const MyUserData_SharedView& ud1, int64_t other1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
  this->ud = std::move(ud1);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:43
  this->other = other1;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:44
  return (None);
}

HERCULES_DLL RTValue MyOp1__F___init__(const MyOp1_SharedView& self, const MyUserData_SharedView& ud1, int64_t other1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
  return (self->__init__(ud1, other1, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
}

int MyOp1__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "ud1", "other1"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
    auto ret = MyOp1__F___init__(MyOp1_SharedView(static_cast<const Any&>(pos_args[0])), MyUserData_SharedView(static_cast<const Any&>(pos_args[1])), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 42, in __init__\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyOp1__F___init__(MyOp1_SharedView(static_cast<const Any&>(args_t[0])), MyUserData_SharedView(static_cast<const Any&>(args_t[1])), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 42, in __init__\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 42, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
    }
  }

  return 0;
}

int MyOp1__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"ud1", "other1"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
    auto ret = MyOp1__F___init___wrapper(MyUserData_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 42, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyOp1__F___init___wrapper(MyUserData_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 42, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 42, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:42
    }
  }

  return 0;
}

int64_t MyOp1::__call__(int64_t seed) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
  return (((this->ud->forward() + this->other) + seed));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:47
}

HERCULES_DLL int64_t MyOp1__F___call__(const MyOp1_SharedView& self, int64_t seed) {  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
  return (self->__call__(seed));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
}

int MyOp1__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "seed"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
    auto ret = MyOp1__F___call__(MyOp1_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 46, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyOp1__F___call__(MyOp1_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 46, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py\", line 46, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_shared_resource.py:46
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyOp1[] = {
    (HerculesBackendPackedCFunc)MyOp1__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOp1__F___init____c_api,
    (HerculesBackendPackedCFunc)MyOp1__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyOp1 = {
    "3\000MyOp1__F___init___wrapper\000MyOp1__F___init__\000MyOp1__F___call__\000",    __hercules_func_array__MyOp1,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyUserData[] = {
    (HerculesBackendPackedCFunc)MyUserData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyUserData__F___init____c_api,
    (HerculesBackendPackedCFunc)MyUserData__F_forward__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyUserData = {
    "3\000MyUserData__F___init___wrapper\000MyUserData__F___init__\000MyUserData__F_forward\000",    __hercules_func_array__MyUserData,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyUserData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOp1__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOp1__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyUserData__F___init___wrapper\000MyOp1__F___init___wrapper\000MyOp1__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000MyUserData__F___init___wrapper\000MyOp1__F___init___wrapper\000MyUserData__F___init__\000MyOp1__F___init__\000";

} // extern C

