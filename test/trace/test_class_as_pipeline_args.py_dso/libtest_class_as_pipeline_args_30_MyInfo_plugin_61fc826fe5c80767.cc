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

MyInfo_SharedView MyInfo__F___init___wrapper(int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyInfo__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyInfo__F___init__(const MyInfo_SharedView& self, int64_t a1, int64_t b1, int64_t c1, void* handle_2_71828182846=((void*)(int64_t)0));
int MyInfo__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyInfo__F_get_result(const MyInfo_SharedView& self);
int MyInfo__F_get_result__c_api(HerculesAny*, int, HerculesAny*, void*);
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


} // namespace

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
    (HerculesBackendPackedCFunc)MyInfo__F_get_result__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyInfo__F___init___wrapper\000MyInfo__F_get_result\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MyInfo__F___init___wrapper\000MyInfo__F___init__\000";

} // extern C

