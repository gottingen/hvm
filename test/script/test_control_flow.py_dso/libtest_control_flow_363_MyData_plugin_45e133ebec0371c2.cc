#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyData;
namespace {
// User class forward declarations
struct MyData;
struct MyData_SharedView;

MyData_SharedView MyData__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyData__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyData__F___init__(const MyData_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyData__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MyData__F_foo(const MyData_SharedView& self);
int MyData__F_foo__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyData__F___call__(const MyData_SharedView& self);
int MyData__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyData : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyData"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyData::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"data", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"data", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  List data{ObjectPtr<Object>{nullptr}};

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return data; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->data = HERCULES_TYPE_AS(val, List); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual List foo();
  virtual int64_t __call__();
};

// flags for convert check
uint32_t MyData::tag_s_2_71828182846_ = -2495304773407999587;
uint32_t MyData::var_num_s_2_71828182846_ = 1;
string_view MyData::class_name_s_2_71828182846_ = "MyData";
IUserDataRoot::__FunctionTable__ MyData::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyData, "MyData");

struct MyData_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyData *ptr;
  // constructor
  MyData_SharedView(MyData *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyData_SharedView(MyData *ptr) : ptr(ptr) {}
  MyData_SharedView() : ptr(nullptr) {}
  MyData_SharedView(const hercules::runtime::Any& ref) : MyData_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyData")) {}
  // UserDataRef
  MyData_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyData"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyData::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyData' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyData*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyData* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyData_F__deleter__(ILightUserData* ptr) { delete static_cast<MyData*>(ptr); }
void* MyData_F__placement_new__(void* buf) { return new (buf) MyData; }
void MyData_F__placement_del__(ILightUserData* ptr) { static_cast<MyData*>(ptr)->MyData::~MyData(); }
MyData_SharedView MyData__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyData)) {
    auto self = new MyData;
    self->function_table_2_71828182846_ = &MyData::function_table_s_2_71828182846_;
    MyData__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyData::tag_s_2_71828182846_, MyData::var_num_s_2_71828182846_, self, MyData_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyData::tag_s_2_71828182846_, MyData::var_num_s_2_71828182846_, sizeof(MyData), MyData_F__placement_new__, MyData_F__placement_del__, __hercules_module_ctx);
    MyData_SharedView self_view((MyData*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyData::function_table_s_2_71828182846_;
    MyData__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyData::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
  this->data = Kernel_List::make(std::initializer_list<List::value_type>{});  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:366
  return (None);
}

HERCULES_DLL RTValue MyData__F___init__(const MyData_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
}

int MyData__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
    auto ret = MyData__F___init__(MyData_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyData__F___init__(MyData_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 365, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
    }
  }

  return 0;
}

int MyData__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyData__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 365, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:365
  }
  return 0;
}

List MyData::foo() {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
  (void)(this->data).append((RTValue(unicode_view(U"\u0068\u0069", 2))));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:369
  return (this->data);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:370
}

HERCULES_DLL List MyData__F_foo(const MyData_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
  return (self->foo());  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
}

int MyData__F_foo__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
    auto ret = MyData__F_foo(MyData_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyData__F_foo(MyData_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 368, in foo\n", "foo() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:368
    }
  }

  return 0;
}

int64_t MyData::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:373
  int64_t i_stop_74024035 = ((this->foo()).size());  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:374
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < i_stop_74024035; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:374
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:374
    (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, i);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:375
    s = (s + i);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:376
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:377
}

HERCULES_DLL int64_t MyData__F___call__(const MyData_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
}

int MyData__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
    auto ret = MyData__F___call__(MyData_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyData__F___call__(MyData_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_control_flow.py\", line 372, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_control_flow.py:372
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyData[] = {
    (HerculesBackendPackedCFunc)MyData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyData__F___init____c_api,
    (HerculesBackendPackedCFunc)MyData__F_foo__c_api,
    (HerculesBackendPackedCFunc)MyData__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyData = {
    "4\000MyData__F___init___wrapper\000MyData__F___init__\000MyData__F_foo\000MyData__F___call__\000",    __hercules_func_array__MyData,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyData__F_foo__c_api,
    (HerculesBackendPackedCFunc)MyData__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyData__F___init___wrapper\000MyData__F_foo\000MyData__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyData__F___init___wrapper\000MyData__F___init__\000";

} // extern C

