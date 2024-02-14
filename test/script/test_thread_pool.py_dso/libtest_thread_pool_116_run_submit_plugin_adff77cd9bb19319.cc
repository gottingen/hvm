#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTask;
namespace {
// User class forward declarations
struct MyTask;
struct MyTask_SharedView;

MyTask_SharedView MyTask__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyTask__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue run_submit(void* handle_2_71828182846=((void*)(int64_t)0));
int run_submit__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyTask__F___init__(const MyTask_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyTask__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t MyTask__F___call__(const MyTask_SharedView& self);
int MyTask__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyTask : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyTask"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyTask::tag_s_2_71828182846_};
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
  virtual int64_t __call__();
};

// flags for convert check
uint32_t MyTask::tag_s_2_71828182846_ = -8597547612858533957;
uint32_t MyTask::var_num_s_2_71828182846_ = 0;
string_view MyTask::class_name_s_2_71828182846_ = "MyTask";
IUserDataRoot::__FunctionTable__ MyTask::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyTask, "MyTask");

struct MyTask_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyTask *ptr;
  // constructor
  MyTask_SharedView(MyTask *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyTask_SharedView(MyTask *ptr) : ptr(ptr) {}
  MyTask_SharedView() : ptr(nullptr) {}
  MyTask_SharedView(const hercules::runtime::Any& ref) : MyTask_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyTask")) {}
  // UserDataRef
  MyTask_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyTask"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyTask::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyTask' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyTask*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyTask* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyTask_F__deleter__(ILightUserData* ptr) { delete static_cast<MyTask*>(ptr); }
void* MyTask_F__placement_new__(void* buf) { return new (buf) MyTask; }
void MyTask_F__placement_del__(ILightUserData* ptr) { static_cast<MyTask*>(ptr)->MyTask::~MyTask(); }
MyTask_SharedView MyTask__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyTask)) {
    auto self = new MyTask;
    self->function_table_2_71828182846_ = &MyTask::function_table_s_2_71828182846_;
    MyTask__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyTask::tag_s_2_71828182846_, MyTask::var_num_s_2_71828182846_, self, MyTask_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyTask::tag_s_2_71828182846_, MyTask::var_num_s_2_71828182846_, sizeof(MyTask), MyTask_F__placement_new__, MyTask_F__placement_del__, __hercules_module_ctx);
    MyTask_SharedView self_view((MyTask*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyTask::function_table_s_2_71828182846_;
    MyTask__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL RTValue run_submit(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:117
  UserDataRef thread_pool = (make_native_userdata(string_view("ThreadPoolExecutor", 18), (int64_t)4, (bool)1));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:118
  MyTask_SharedView task = (MyTask__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:119
  RTValue f = ((thread_pool).generic_call_attr("Submit", {(task)}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:120
  (void)kernel_builtins_print(string_view(" ", 1), string_view("\n", 1), stdout, kernel_object_get(f, {}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:121
  return (None);
}

int run_submit__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = run_submit(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:117
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 117, in run_submit\n", "run_submit() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:117
  }
  return 0;
}

RTValue MyTask::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
  return (None);
}

HERCULES_DLL RTValue MyTask__F___init__(const MyTask_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
}

int MyTask__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
    auto ret = MyTask__F___init__(MyTask_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyTask__F___init__(MyTask_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 109, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
    }
  }

  return 0;
}

int MyTask__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyTask__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 109, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:109
  }
  return 0;
}

int64_t MyTask::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
  List x = (Kernel_List::make(std::initializer_list<List::value_type>{((int64_t)1), ((int64_t)2)}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:113
  return (internal::TypeAsHelper<int64_t>::run(((x).get_item(((int64_t)2))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 114, in __call__\n", "expect '(x).get_item(((int64_t)2))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:114
}

HERCULES_DLL int64_t MyTask__F___call__(const MyTask_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
}

int MyTask__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
    auto ret = MyTask__F___call__(MyTask_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyTask__F___call__(MyTask_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 112, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:112
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyTask[] = {
    (HerculesBackendPackedCFunc)MyTask__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTask__F___init____c_api,
    (HerculesBackendPackedCFunc)MyTask__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTask = {
    "3\000MyTask__F___init___wrapper\000MyTask__F___init__\000MyTask__F___call__\000",    __hercules_func_array__MyTask,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyTask__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)run_submit__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000MyTask__F___init___wrapper\000run_submit\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MyTask__F___init___wrapper\000run_submit\000MyTask__F___init__\000";

} // extern C

