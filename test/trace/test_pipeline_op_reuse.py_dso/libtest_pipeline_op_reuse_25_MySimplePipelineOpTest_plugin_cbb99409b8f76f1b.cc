#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySimplePipelineOpTest;
namespace {
// User class forward declarations
struct MySimplePipelineOpTest;
struct MySimplePipelineOpTest_SharedView;

MySimplePipelineOpTest_SharedView MySimplePipelineOpTest__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MySimplePipelineOpTest__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySimplePipelineOpTest__F___init__(const MySimplePipelineOpTest_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MySimplePipelineOpTest__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MySimplePipelineOpTest__F___call__(const MySimplePipelineOpTest_SharedView& self, int64_t a);
int MySimplePipelineOpTest__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MySimplePipelineOpTest : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MySimplePipelineOpTest"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MySimplePipelineOpTest::tag_s_2_71828182846_};
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
  virtual int64_t __call__(int64_t a);
};

// flags for convert check
uint32_t MySimplePipelineOpTest::tag_s_2_71828182846_ = -2180434013575313132;
uint32_t MySimplePipelineOpTest::var_num_s_2_71828182846_ = 0;
string_view MySimplePipelineOpTest::class_name_s_2_71828182846_ = "MySimplePipelineOpTest";
IUserDataRoot::__FunctionTable__ MySimplePipelineOpTest::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MySimplePipelineOpTest, "MySimplePipelineOpTest");

struct MySimplePipelineOpTest_SharedView: public IUserDataSharedViewRoot {
  // member var
  MySimplePipelineOpTest *ptr;
  // constructor
  MySimplePipelineOpTest_SharedView(MySimplePipelineOpTest *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MySimplePipelineOpTest_SharedView(MySimplePipelineOpTest *ptr) : ptr(ptr) {}
  MySimplePipelineOpTest_SharedView() : ptr(nullptr) {}
  MySimplePipelineOpTest_SharedView(const hercules::runtime::Any& ref) : MySimplePipelineOpTest_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MySimplePipelineOpTest")) {}
  // UserDataRef
  MySimplePipelineOpTest_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MySimplePipelineOpTest"));
    if(!base_ud_ptr->isinstance_2_71828182846(MySimplePipelineOpTest::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MySimplePipelineOpTest' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MySimplePipelineOpTest*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MySimplePipelineOpTest* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MySimplePipelineOpTest_F__deleter__(ILightUserData* ptr) { delete static_cast<MySimplePipelineOpTest*>(ptr); }
void* MySimplePipelineOpTest_F__placement_new__(void* buf) { return new (buf) MySimplePipelineOpTest; }
void MySimplePipelineOpTest_F__placement_del__(ILightUserData* ptr) { static_cast<MySimplePipelineOpTest*>(ptr)->MySimplePipelineOpTest::~MySimplePipelineOpTest(); }
MySimplePipelineOpTest_SharedView MySimplePipelineOpTest__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MySimplePipelineOpTest)) {
    auto self = new MySimplePipelineOpTest;
    self->function_table_2_71828182846_ = &MySimplePipelineOpTest::function_table_s_2_71828182846_;
    MySimplePipelineOpTest__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MySimplePipelineOpTest::tag_s_2_71828182846_, MySimplePipelineOpTest::var_num_s_2_71828182846_, self, MySimplePipelineOpTest_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MySimplePipelineOpTest::tag_s_2_71828182846_, MySimplePipelineOpTest::var_num_s_2_71828182846_, sizeof(MySimplePipelineOpTest), MySimplePipelineOpTest_F__placement_new__, MySimplePipelineOpTest_F__placement_del__, __hercules_module_ctx);
    MySimplePipelineOpTest_SharedView self_view((MySimplePipelineOpTest*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MySimplePipelineOpTest::function_table_s_2_71828182846_;
    MySimplePipelineOpTest__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MySimplePipelineOpTest::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
  return (None);
}

HERCULES_DLL RTValue MySimplePipelineOpTest__F___init__(const MySimplePipelineOpTest_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
}

int MySimplePipelineOpTest__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
    auto ret = MySimplePipelineOpTest__F___init__(MySimplePipelineOpTest_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySimplePipelineOpTest__F___init__(MySimplePipelineOpTest_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py\", line 28, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
    }
  }

  return 0;
}

int MySimplePipelineOpTest__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MySimplePipelineOpTest__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py\", line 28, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:28
  }
  return 0;
}

int64_t MySimplePipelineOpTest::__call__(int64_t a) {  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
  return ((a * (int64_t)2));  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:32
}

HERCULES_DLL int64_t MySimplePipelineOpTest__F___call__(const MySimplePipelineOpTest_SharedView& self, int64_t a) {  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
  return (self->__call__(a));  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
}

int MySimplePipelineOpTest__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
    auto ret = MySimplePipelineOpTest__F___call__(MySimplePipelineOpTest_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py\", line 31, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MySimplePipelineOpTest__F___call__(MySimplePipelineOpTest_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py\", line 31, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py\", line 31, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_pipeline_op_reuse.py:31
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySimplePipelineOpTest[] = {
    (HerculesBackendPackedCFunc)MySimplePipelineOpTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySimplePipelineOpTest__F___init____c_api,
    (HerculesBackendPackedCFunc)MySimplePipelineOpTest__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySimplePipelineOpTest = {
    "3\000MySimplePipelineOpTest__F___init___wrapper\000MySimplePipelineOpTest__F___init__\000MySimplePipelineOpTest__F___call__\000",    __hercules_func_array__MySimplePipelineOpTest,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MySimplePipelineOpTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySimplePipelineOpTest__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MySimplePipelineOpTest__F___init___wrapper\000MySimplePipelineOpTest__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000MySimplePipelineOpTest__F___init___wrapper\000MySimplePipelineOpTest__F___init__\000";

} // extern C

