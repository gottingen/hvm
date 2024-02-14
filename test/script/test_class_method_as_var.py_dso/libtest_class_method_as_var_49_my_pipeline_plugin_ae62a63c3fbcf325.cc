#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBasicData;
namespace {
// User class forward declarations
struct MyBasicData;
struct MyBasicData_SharedView;

MyBasicData_SharedView MyBasicData__F___init___wrapper(int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBasicData__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t call_any_attr(const RTView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int call_any_attr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t call_cls_attr(const MyBasicData_SharedView& a, void* handle_2_71828182846=((void*)(int64_t)0));
int call_cls_attr__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple my_pipeline(void* handle_2_71828182846=((void*)(int64_t)0));
int my_pipeline__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyBasicData__F___init__(const MyBasicData_SharedView& self, int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
int MyBasicData__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyBasicData__F_get_a(const MyBasicData_SharedView& self);
int MyBasicData__F_get_a__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyBasicData__F_get_a_wrapper(const MyBasicData_SharedView& self);
int MyBasicData__F_get_a_wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyBasicData : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyBasicData"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyBasicData::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"_a", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"_a", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t _a;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return _a; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->_a = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t a, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t get_a();
  virtual int64_t get_a_wrapper();
};

// flags for convert check
uint32_t MyBasicData::tag_s_2_71828182846_ = -8579500343695384783;
uint32_t MyBasicData::var_num_s_2_71828182846_ = 1;
string_view MyBasicData::class_name_s_2_71828182846_ = "MyBasicData";
IUserDataRoot::__FunctionTable__ MyBasicData::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyBasicData, "MyBasicData");

struct MyBasicData_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyBasicData *ptr;
  // constructor
  MyBasicData_SharedView(MyBasicData *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyBasicData_SharedView(MyBasicData *ptr) : ptr(ptr) {}
  MyBasicData_SharedView() : ptr(nullptr) {}
  MyBasicData_SharedView(const hercules::runtime::Any& ref) : MyBasicData_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyBasicData")) {}
  // UserDataRef
  MyBasicData_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyBasicData"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyBasicData::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyBasicData' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyBasicData*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyBasicData* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyBasicData_F__deleter__(ILightUserData* ptr) { delete static_cast<MyBasicData*>(ptr); }
void* MyBasicData_F__placement_new__(void* buf) { return new (buf) MyBasicData; }
void MyBasicData_F__placement_del__(ILightUserData* ptr) { static_cast<MyBasicData*>(ptr)->MyBasicData::~MyBasicData(); }
MyBasicData_SharedView MyBasicData__F___init___wrapper(int64_t a, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyBasicData)) {
    auto self = new MyBasicData;
    self->function_table_2_71828182846_ = &MyBasicData::function_table_s_2_71828182846_;
    MyBasicData__F___init__(self,  a,  handle_2_71828182846);
    UserDataRef self_ref(MyBasicData::tag_s_2_71828182846_, MyBasicData::var_num_s_2_71828182846_, self, MyBasicData_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyBasicData::tag_s_2_71828182846_, MyBasicData::var_num_s_2_71828182846_, sizeof(MyBasicData), MyBasicData_F__placement_new__, MyBasicData_F__placement_del__, __hercules_module_ctx);
    MyBasicData_SharedView self_view((MyBasicData*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyBasicData::function_table_s_2_71828182846_;
    MyBasicData__F___init__(self_view,  a,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL int64_t call_any_attr(const RTView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:37
  UserDataRef func = (internal::TypeAsHelper<UserDataRef>::run((kernel_object___getattr__(a, "get_a")), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 38, in call_any_attr\n", "expect 'kernel_object___getattr__(a, \"get_a\")' is 'UserDataRef' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:38
  RTValue d = ((func).generic_call({}));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:39
  return (internal::TypeAsHelper<int64_t>::run((d), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 40, in call_any_attr\n", "expect 'd' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:40
}

int call_any_attr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("call_any_attr", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:37
    auto ret = call_any_attr((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:37
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = call_any_attr((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:37
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 37, in call_any_attr\n", "call_any_attr() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:37
    }
  }

  return 0;
}

HERCULES_DLL int64_t call_cls_attr(const MyBasicData_SharedView& a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:43
  UserDataRef func = (MakeUserFunction({((a).operator UserDataRef())}, string_view("MyBasicData.get_a", 17), (HerculesBackendPackedCFunc)MyBasicData__F_get_a__c_api, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:44
  RTValue d = ((func).generic_call({}));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:45
  return (internal::TypeAsHelper<int64_t>::run((d), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 46, in call_cls_attr\n", "expect 'd' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:46
}

int call_cls_attr__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("call_cls_attr", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:43
    auto ret = call_cls_attr(MyBasicData_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:43
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = call_cls_attr(MyBasicData_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:43
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 43, in call_cls_attr\n", "call_cls_attr() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:43
    }
  }

  return 0;
}

HERCULES_DLL Tuple my_pipeline(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:49
  MyBasicData_SharedView a0 = (MyBasicData__F___init___wrapper((int64_t)10, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:50
  int64_t b0 = (call_any_attr((a0).operator RTView(), handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:51
  int64_t b1 = (call_cls_attr(a0, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:52
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(b0), (b1)}));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:53
}

int my_pipeline__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_pipeline(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:49
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 49, in my_pipeline\n", "my_pipeline() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:49
  }
  return 0;
}

RTValue MyBasicData::__init__(int64_t a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
  this->_a = a;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:27
  return (None);
}

HERCULES_DLL RTValue MyBasicData__F___init__(const MyBasicData_SharedView& self, int64_t a, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
  return (self->__init__(a, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
}

int MyBasicData__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
    auto ret = MyBasicData__F___init__(MyBasicData_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 26, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyBasicData__F___init__(MyBasicData_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 26, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 26, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
    }
  }

  return 0;
}

int MyBasicData__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
    auto ret = MyBasicData__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 26, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBasicData__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 26, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 26, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:26
    }
  }

  return 0;
}

int64_t MyBasicData::get_a() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
  return (this->_a);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:30
}

HERCULES_DLL int64_t MyBasicData__F_get_a(const MyBasicData_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
  return (self->get_a());  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
}

int MyBasicData__F_get_a__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("get_a", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
    auto ret = MyBasicData__F_get_a(MyBasicData_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBasicData__F_get_a(MyBasicData_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 29, in get_a\n", "get_a() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:29
    }
  }

  return 0;
}

int64_t MyBasicData::get_a_wrapper() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
  UserDataRef a = (MakeUserFunction({(CAST_TO_USER_DATA_REF(this))}, string_view("MyBasicData.get_a", 17), (HerculesBackendPackedCFunc)MyBasicData__F_get_a__c_api, this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:33
  return (internal::TypeAsHelper<int64_t>::run(((a).generic_call({})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 34, in get_a_wrapper\n", "expect '(a).generic_call({})' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:34
}

HERCULES_DLL int64_t MyBasicData__F_get_a_wrapper(const MyBasicData_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
  return (self->get_a_wrapper());  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
}

int MyBasicData__F_get_a_wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("get_a_wrapper", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
    auto ret = MyBasicData__F_get_a_wrapper(MyBasicData_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyBasicData__F_get_a_wrapper(MyBasicData_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py\", line 32, in get_a_wrapper\n", "get_a_wrapper() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_method_as_var.py:32
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyBasicData[] = {
    (HerculesBackendPackedCFunc)MyBasicData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyBasicData__F___init____c_api,
    (HerculesBackendPackedCFunc)MyBasicData__F_get_a__c_api,
    (HerculesBackendPackedCFunc)MyBasicData__F_get_a_wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyBasicData = {
    "4\000MyBasicData__F___init___wrapper\000MyBasicData__F___init__\000MyBasicData__F_get_a\000MyBasicData__F_get_a_wrapper\000",    __hercules_func_array__MyBasicData,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyBasicData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)my_pipeline__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyBasicData__F___init___wrapper\000my_pipeline\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "5\000MyBasicData__F___init___wrapper\000call_any_attr\000call_cls_attr\000my_pipeline\000MyBasicData__F___init__\000";

} // extern C

