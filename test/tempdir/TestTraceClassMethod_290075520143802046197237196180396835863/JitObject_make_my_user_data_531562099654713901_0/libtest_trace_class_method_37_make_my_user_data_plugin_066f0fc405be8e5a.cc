#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyUserData;
namespace {
// User class forward declarations
struct MyUserData;
struct MyUserData_SharedView;

MyUserData_SharedView MyUserData__F___init___wrapper(int64_t a1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyUserData__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL MyUserData_SharedView make_my_user_data(int64_t i, void* handle_2_71828182846=((void*)(int64_t)0));
int make_my_user_data__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyUserData__F___init__(const MyUserData_SharedView& self, int64_t a1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyUserData__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyUserData__F_get(const MyUserData_SharedView& self);
int MyUserData__F_get__c_api(HerculesAny*, int, HerculesAny*, void*);
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
    static std::initializer_list<string_view> __var_names_s__ = {"a", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"a", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t a;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return a; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->a = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t a1, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t get();
};

// flags for convert check
uint32_t MyUserData::tag_s_2_71828182846_ = 5159588371735145082;
uint32_t MyUserData::var_num_s_2_71828182846_ = 1;
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

void MyUserData_F__deleter__(ILightUserData* ptr) { delete static_cast<MyUserData*>(ptr); }
void* MyUserData_F__placement_new__(void* buf) { return new (buf) MyUserData; }
void MyUserData_F__placement_del__(ILightUserData* ptr) { static_cast<MyUserData*>(ptr)->MyUserData::~MyUserData(); }
MyUserData_SharedView MyUserData__F___init___wrapper(int64_t a1, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyUserData)) {
    auto self = new MyUserData;
    self->function_table_2_71828182846_ = &MyUserData::function_table_s_2_71828182846_;
    MyUserData__F___init__(self,  a1,  handle_2_71828182846);
    UserDataRef self_ref(MyUserData::tag_s_2_71828182846_, MyUserData::var_num_s_2_71828182846_, self, MyUserData_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyUserData::tag_s_2_71828182846_, MyUserData::var_num_s_2_71828182846_, sizeof(MyUserData), MyUserData_F__placement_new__, MyUserData_F__placement_del__, __hercules_module_ctx);
    MyUserData_SharedView self_view((MyUserData*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyUserData::function_table_s_2_71828182846_;
    MyUserData__F___init__(self_view,  a1,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL MyUserData_SharedView make_my_user_data(int64_t i, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:37
  return (MyUserData__F___init___wrapper(i, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:38
}

int make_my_user_data__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"i"};
    KwargsUnpackHelper helper("make_my_user_data", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:37
    auto ret = make_my_user_data(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 37, in make_my_user_data\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:37
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = make_my_user_data(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 37, in make_my_user_data\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:37
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 37, in make_my_user_data\n", "make_my_user_data() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:37
    }
  }

  return 0;
}

RTValue MyUserData::__init__(int64_t a1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
  this->a = a1;  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:31
  return (None);
}

HERCULES_DLL RTValue MyUserData__F___init__(const MyUserData_SharedView& self, int64_t a1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
  return (self->__init__(a1, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
}

int MyUserData__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a1"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
    auto ret = MyUserData__F___init__(MyUserData_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 30, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyUserData__F___init__(MyUserData_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 30, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 30, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
    }
  }

  return 0;
}

int MyUserData__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"a1"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
    auto ret = MyUserData__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 30, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyUserData__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 30, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 30, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:30
    }
  }

  return 0;
}

int64_t MyUserData::get() {  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
  return (this->a);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:34
}

HERCULES_DLL int64_t MyUserData__F_get(const MyUserData_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
  return (self->get());  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
}

int MyUserData__F_get__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("get", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
    auto ret = MyUserData__F_get(MyUserData_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyUserData__F_get(MyUserData_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py\", line 33, in get\n", "get() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_trace_class_method.py:33
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyUserData[] = {
    (HerculesBackendPackedCFunc)MyUserData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyUserData__F___init____c_api,
    (HerculesBackendPackedCFunc)MyUserData__F_get__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyUserData = {
    "3\000MyUserData__F___init___wrapper\000MyUserData__F___init__\000MyUserData__F_get\000",    __hercules_func_array__MyUserData,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyUserData__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)make_my_user_data__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyUserData__F___init___wrapper\000make_my_user_data\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyUserData__F___init___wrapper\000make_my_user_data\000MyUserData__F___init__\000";

} // extern C

