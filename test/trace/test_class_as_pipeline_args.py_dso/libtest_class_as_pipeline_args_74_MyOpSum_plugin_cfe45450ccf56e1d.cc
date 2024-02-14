#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyInfo;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyOpSum;
namespace {
// User class forward declarations
struct MyInfo;
struct MyInfo_SharedView;

// User class forward declarations
struct MyOpSum;
struct MyOpSum_SharedView;

MyInfo_SharedView MyInfo__F___init___wrapper(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyInfo__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyOpSum_SharedView MyOpSum__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyOpSum__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t my_global_func(void* handle_2_71828182846=((void*)(int64_t)0));
int my_global_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyInfo__F___init__(const MyInfo_SharedView& self, int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyInfo__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyInfo__F_get_result(const MyInfo_SharedView& self);
int MyInfo__F_get_result__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyOpSum__F___init__(const MyOpSum_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyOpSum__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyOpSum__F___call__(const MyOpSum_SharedView& self, const RTView& info1, const RTView& info2);
int MyOpSum__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
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
  virtual int64_t get_result();
};

// flags for convert check
uint32_t MyInfo::tag_s_2_71828182846_ = 1960910253296602324;
uint32_t MyInfo::var_num_s_2_71828182846_ = 3;
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

struct MyOpSum : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyOpSum"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyOpSum::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"op_sum_attr", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"op_sum_attr", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t op_sum_attr;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return op_sum_attr; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->op_sum_attr = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(const RTView& info1, const RTView& info2);
};

// flags for convert check
uint32_t MyOpSum::tag_s_2_71828182846_ = -6428273715896201102;
uint32_t MyOpSum::var_num_s_2_71828182846_ = 1;
string_view MyOpSum::class_name_s_2_71828182846_ = "MyOpSum";
IUserDataRoot::__FunctionTable__ MyOpSum::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyOpSum, "MyOpSum");

struct MyOpSum_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyOpSum *ptr;
  // constructor
  MyOpSum_SharedView(MyOpSum *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyOpSum_SharedView(MyOpSum *ptr) : ptr(ptr) {}
  MyOpSum_SharedView() : ptr(nullptr) {}
  MyOpSum_SharedView(const hercules::runtime::Any& ref) : MyOpSum_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyOpSum")) {}
  // UserDataRef
  MyOpSum_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyOpSum"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyOpSum::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyOpSum' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyOpSum*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyOpSum* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyInfo_F__deleter__(ILightUserData* ptr) { delete static_cast<MyInfo*>(ptr); }
void* MyInfo_F__placement_new__(void* buf) { return new (buf) MyInfo; }
void MyInfo_F__placement_del__(ILightUserData* ptr) { static_cast<MyInfo*>(ptr)->MyInfo::~MyInfo(); }
MyInfo_SharedView MyInfo__F___init___wrapper(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyInfo)) {
    auto self = new MyInfo;
    self->function_table_2_71828182846_ = &MyInfo::function_table_s_2_71828182846_;
    MyInfo__F___init__(self,  a1,  b1,  c1,  handle_2_71828182846);
    UserDataRef self_ref(MyInfo::tag_s_2_71828182846_, MyInfo::var_num_s_2_71828182846_, self, MyInfo_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyInfo::tag_s_2_71828182846_, MyInfo::var_num_s_2_71828182846_, sizeof(MyInfo), MyInfo_F__placement_new__, MyInfo_F__placement_del__, __hercules_module_ctx);
    MyInfo_SharedView self_view((MyInfo*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyInfo::function_table_s_2_71828182846_;
    MyInfo__F___init__(self_view,  a1,  b1,  c1,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void MyOpSum_F__deleter__(ILightUserData* ptr) { delete static_cast<MyOpSum*>(ptr); }
void* MyOpSum_F__placement_new__(void* buf) { return new (buf) MyOpSum; }
void MyOpSum_F__placement_del__(ILightUserData* ptr) { static_cast<MyOpSum*>(ptr)->MyOpSum::~MyOpSum(); }
MyOpSum_SharedView MyOpSum__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyOpSum)) {
    auto self = new MyOpSum;
    self->function_table_2_71828182846_ = &MyOpSum::function_table_s_2_71828182846_;
    MyOpSum__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyOpSum::tag_s_2_71828182846_, MyOpSum::var_num_s_2_71828182846_, self, MyOpSum_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyOpSum::tag_s_2_71828182846_, MyOpSum::var_num_s_2_71828182846_, sizeof(MyOpSum), MyOpSum_F__placement_new__, MyOpSum_F__placement_del__, __hercules_module_ctx);
    MyOpSum_SharedView self_view((MyOpSum*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyOpSum::function_table_s_2_71828182846_;
    MyOpSum__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL int64_t my_global_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:70
  return ((int64_t)10);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:71
}

int my_global_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_global_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:70
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 70, in my_global_func\n", "my_global_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:70
  }
  return 0;
}

RTValue MyInfo::__init__(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
  this->a = a1;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:33
  this->b = b1;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:34
  this->c = c1;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:35
  return (None);
}

HERCULES_DLL RTValue MyInfo__F___init__(const MyInfo_SharedView& self, int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
  return (self->__init__(a1, b1, c1, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
}

int MyInfo__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"self", "a1", "b1", "c1"};
    KwargsUnpackHelper helper("__init__", arg_names, 4, nullptr, 0);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
    auto ret = MyInfo__F___init__(MyInfo_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'pos_args[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'pos_args[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 4: {
        auto ret = MyInfo__F___init__(MyInfo_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'args_t[2]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'args_t[3]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "__init__() takes 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
    }
  }

  return 0;
}

int MyInfo__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"a1", "b1", "c1"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
    auto ret = MyInfo__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'pos_args[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyInfo__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "expect 'args_t[2]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 32, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:32
    }
  }

  return 0;
}

int64_t MyInfo::get_result() {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
  return (((this->a + this->b) + this->c));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:38
}

HERCULES_DLL int64_t MyInfo__F_get_result(const MyInfo_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
  return (self->get_result());  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
}

int MyInfo__F_get_result__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("get_result", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
    auto ret = MyInfo__F_get_result(MyInfo_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyInfo__F_get_result(MyInfo_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 37, in get_result\n", "get_result() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:37
    }
  }

  return 0;
}

RTValue MyOpSum::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
  this->op_sum_attr = (int64_t)10;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:77
  return (None);
}

HERCULES_DLL RTValue MyOpSum__F___init__(const MyOpSum_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
}

int MyOpSum__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
    auto ret = MyOpSum__F___init__(MyOpSum_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyOpSum__F___init__(MyOpSum_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 76, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
    }
  }

  return 0;
}

int MyOpSum__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyOpSum__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 76, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:76
  }
  return 0;
}

int64_t MyOpSum::__call__(const RTView& info1, const RTView& info2) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
  MyInfo_SharedView info3 = (MyInfo__F___init___wrapper((int64_t)3, (int64_t)4, (int64_t)5, this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:80
  UserDataRef x = (MakeUserFunction(string_view("my_global_func", 14), (HerculesBackendPackedCFunc)my_global_func__c_api, this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:81
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add((x).generic_call({}), kernel_object___dispatch__(info1, "get_result", {})), kernel_object___getattr__(info1, "a")), kernel_object___dispatch__(info2, "get_result", {})), info3->get_result())), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 82, in __call__\n", "expect 'ArithOps::add(ArithOps::add(ArithOps::add(ArithOps::add((x).generic_call({}), kernel_object___dispatch__(info1, \"get_result\", {})), kernel_object___getattr__(info1, \"a\")), kernel_object___dispatch__(info2, \"get_result\", {})), info3->get_result())' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:82
}

HERCULES_DLL int64_t MyOpSum__F___call__(const MyOpSum_SharedView& self, const RTView& info1, const RTView& info2) {  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
  return (self->__call__(info1, info2));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
}

int MyOpSum__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "info1", "info2"};
    KwargsUnpackHelper helper("__call__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
    auto ret = MyOpSum__F___call__(MyOpSum_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]), (pos_args[2]));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyOpSum__F___call__(MyOpSum_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]), (args_t[2]));  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py\", line 79, in __call__\n", "__call__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_class_as_pipeline_args.py:79
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyOpSum[] = {
    (HerculesBackendPackedCFunc)MyOpSum__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOpSum__F___init____c_api,
    (HerculesBackendPackedCFunc)MyOpSum__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyOpSum = {
    "3\000MyOpSum__F___init___wrapper\000MyOpSum__F___init__\000MyOpSum__F___call__\000",    __hercules_func_array__MyOpSum,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyInfo[] = {
    (HerculesBackendPackedCFunc)MyInfo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyInfo__F___init____c_api,
    (HerculesBackendPackedCFunc)MyInfo__F_get_result__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyInfo = {
    "3\000MyInfo__F___init___wrapper\000MyInfo__F___init__\000MyInfo__F_get_result\000",    __hercules_func_array__MyInfo,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyInfo__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOpSum__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyOpSum__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000MyInfo__F___init___wrapper\000MyOpSum__F___init___wrapper\000MyOpSum__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "5\000MyInfo__F___init___wrapper\000MyOpSum__F___init___wrapper\000my_global_func\000MyInfo__F___init__\000MyOpSum__F___init__\000";

} // extern C

