#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyInfo;
namespace {
// User class forward declarations
struct MyInfo;
struct MyInfo_SharedView;

MyInfo_SharedView MyInfo__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyInfo__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyInfo__F___init__(const MyInfo_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyInfo__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyInfo__F_process(const MyInfo_SharedView& self);
int MyInfo__F_process__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyInfo__F___call__(const MyInfo_SharedView& self);
int MyInfo__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyInfo : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyInfo"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyInfo::tag_s_2_71828182846_};
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
  virtual int64_t process();
  virtual int64_t __call__();
};

// flags for convert check
uint32_t MyInfo::tag_s_2_71828182846_ = -3083987428163049627;
uint32_t MyInfo::var_num_s_2_71828182846_ = 0;
string_view MyInfo::class_name_s_2_71828182846_ = "MyInfo";
IUserDataRoot::__FunctionTable__ MyInfo::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyInfo, "MyInfo");

struct MyInfo_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyInfo *ptr;
  // constructor
  MyInfo_SharedView(MyInfo *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyInfo_SharedView(MyInfo *ptr) : ptr(ptr) {}
  MyInfo_SharedView() : ptr(nullptr) {}
  MyInfo_SharedView(const hercules::runtime::Any& ref) : MyInfo_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyInfo")) {}
  // UserDataRef
  MyInfo_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyInfo"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyInfo::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyInfo' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyInfo*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyInfo* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyInfo_F__deleter__(ILightUserData* ptr) { delete static_cast<MyInfo*>(ptr); }
void* MyInfo_F__placement_new__(void* buf) { return new (buf) MyInfo; }
void MyInfo_F__placement_del__(ILightUserData* ptr) { static_cast<MyInfo*>(ptr)->MyInfo::~MyInfo(); }
MyInfo_SharedView MyInfo__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyInfo)) {
    auto self = new MyInfo;
    self->function_table_2_71828182846_ = &MyInfo::function_table_s_2_71828182846_;
    MyInfo__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyInfo::tag_s_2_71828182846_, MyInfo::var_num_s_2_71828182846_, self, MyInfo_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyInfo::tag_s_2_71828182846_, MyInfo::var_num_s_2_71828182846_, sizeof(MyInfo), MyInfo_F__placement_new__, MyInfo_F__placement_del__, __hercules_module_ctx);
    MyInfo_SharedView self_view((MyInfo*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyInfo::function_table_s_2_71828182846_;
    MyInfo__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyInfo::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
  return (None);
}

HERCULES_DLL RTValue MyInfo__F___init__(const MyInfo_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
}

int MyInfo__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
    auto ret = MyInfo__F___init__(MyInfo_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyInfo__F___init__(MyInfo_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py\", line 24, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
    }
  }

  return 0;
}

int MyInfo__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyInfo__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py\", line 24, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:24
  }
  return 0;
}

int64_t MyInfo::process() {  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
  return ((int64_t)2);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:28
}

HERCULES_DLL int64_t MyInfo__F_process(const MyInfo_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
  return (self->process());  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
}

int MyInfo__F_process__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("process", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
    auto ret = MyInfo__F_process(MyInfo_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyInfo__F_process(MyInfo_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py\", line 27, in process\n", "process() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:27
    }
  }

  return 0;
}

int64_t MyInfo::__call__() {  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
  return ((int64_t)2);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:31
}

HERCULES_DLL int64_t MyInfo__F___call__(const MyInfo_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
}

int MyInfo__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
    auto ret = MyInfo__F___call__(MyInfo_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyInfo__F___call__(MyInfo_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py\", line 30, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_nested_ops.py:30
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyInfo[] = {
    (HerculesBackendPackedCFunc)MyInfo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyInfo__F___init____c_api,
    (HerculesBackendPackedCFunc)MyInfo__F_process__c_api,
    (HerculesBackendPackedCFunc)MyInfo__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyInfo = {
    "4\000MyInfo__F___init___wrapper\000MyInfo__F___init__\000MyInfo__F_process\000MyInfo__F___call__\000",    __hercules_func_array__MyInfo,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyInfo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyInfo__F_process__c_api,
    (HerculesBackendPackedCFunc)MyInfo__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyInfo__F___init___wrapper\000MyInfo__F_process\000MyInfo__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyInfo__F___init___wrapper\000MyInfo__F___init__\000";

} // extern C

