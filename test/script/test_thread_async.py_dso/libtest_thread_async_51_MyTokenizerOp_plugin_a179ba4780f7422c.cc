#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTokenizerTask;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTaskManager;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTokenizerOp;
namespace {
// User class forward declarations
struct MyTokenizerTask;
struct MyTokenizerTask_SharedView;

// User class forward declarations
struct MyTaskManager;
struct MyTaskManager_SharedView;

// User class forward declarations
struct MyTokenizerOp;
struct MyTokenizerOp_SharedView;

MyTokenizerTask_SharedView MyTokenizerTask__F___init___wrapper(const unicode_view& query, const List& titles, const unicode_view& sep=unicode_view(U"\u0020", 1), void* handle_2_71828182846=((void*)(int64_t)0));
int MyTokenizerTask__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyTaskManager_SharedView MyTaskManager__F___init___wrapper(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
int MyTaskManager__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
MyTokenizerOp_SharedView MyTokenizerOp__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MyTokenizerOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyTokenizerTask__F___init__(const MyTokenizerTask_SharedView& self, const unicode_view& query, const List& titles, const unicode_view& sep=unicode_view(U"\u0020", 1), void* handle_2_71828182846=((void*)(int64_t)0));
int MyTokenizerTask__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Tuple MyTokenizerTask__F___call__(const MyTokenizerTask_SharedView& self, int64_t i=(int64_t)0);
int MyTokenizerTask__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyTaskManager__F___init__(const MyTaskManager_SharedView& self, int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
int MyTaskManager__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL UserDataRef MyTaskManager__F_submit(const MyTaskManager_SharedView& self, const MyTokenizerTask_SharedView& task);
int MyTaskManager__F_submit__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyTokenizerOp__F___init__(const MyTokenizerOp_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MyTokenizerOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MyTokenizerOp__F___call__(const MyTokenizerOp_SharedView& self, const List& queries, const List& titles);
int MyTokenizerOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MyTokenizerTask : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyTokenizerTask"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyTokenizerTask::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"query", "titles", "sep", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"query", 0}, 
      {"titles", 1}, 
      {"sep", 2}, 
    };
    return __var_table_s__;
  }

  // member vars
  Unicode query;
  List titles{ObjectPtr<Object>{nullptr}};
  Unicode sep;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return query; } break;
    case 1: { return titles; } break;
    case 2: { return sep; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->query = HERCULES_TYPE_AS(val, Unicode); } break;
    case 1: { this->titles = HERCULES_TYPE_AS(val, List); } break;
    case 2: { this->sep = HERCULES_TYPE_AS(val, Unicode); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const unicode_view& query, const List& titles, const unicode_view& sep=unicode_view(U"\u0020", 1), void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Tuple __call__(int64_t i=(int64_t)0);
};

// flags for convert check
uint32_t MyTokenizerTask::tag_s_2_71828182846_ = -2227422164480283157;
uint32_t MyTokenizerTask::var_num_s_2_71828182846_ = 3;
string_view MyTokenizerTask::class_name_s_2_71828182846_ = "MyTokenizerTask";
IUserDataRoot::__FunctionTable__ MyTokenizerTask::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyTokenizerTask, "MyTokenizerTask");

struct MyTokenizerTask_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyTokenizerTask *ptr;
  // constructor
  MyTokenizerTask_SharedView(MyTokenizerTask *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyTokenizerTask_SharedView(MyTokenizerTask *ptr) : ptr(ptr) {}
  MyTokenizerTask_SharedView() : ptr(nullptr) {}
  MyTokenizerTask_SharedView(const hercules::runtime::Any& ref) : MyTokenizerTask_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyTokenizerTask")) {}
  // UserDataRef
  MyTokenizerTask_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyTokenizerTask"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyTokenizerTask::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyTokenizerTask' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyTokenizerTask*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyTokenizerTask* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct MyTaskManager : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyTaskManager"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyTaskManager::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"thread_pool", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"thread_pool", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  UserDataRef thread_pool;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return thread_pool; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->thread_pool = HERCULES_TYPE_AS(val, UserDataRef); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual UserDataRef submit(const MyTokenizerTask_SharedView& task);
};

// flags for convert check
uint32_t MyTaskManager::tag_s_2_71828182846_ = 9110808306329049092;
uint32_t MyTaskManager::var_num_s_2_71828182846_ = 1;
string_view MyTaskManager::class_name_s_2_71828182846_ = "MyTaskManager";
IUserDataRoot::__FunctionTable__ MyTaskManager::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyTaskManager, "MyTaskManager");

struct MyTaskManager_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyTaskManager *ptr;
  // constructor
  MyTaskManager_SharedView(MyTaskManager *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyTaskManager_SharedView(MyTaskManager *ptr) : ptr(ptr) {}
  MyTaskManager_SharedView() : ptr(nullptr) {}
  MyTaskManager_SharedView(const hercules::runtime::Any& ref) : MyTaskManager_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyTaskManager")) {}
  // UserDataRef
  MyTaskManager_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyTaskManager"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyTaskManager::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyTaskManager' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyTaskManager*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyTaskManager* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct MyTokenizerOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MyTokenizerOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MyTokenizerOp::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"task_manager", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"task_manager", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  MyTaskManager_SharedView task_manager;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return task_manager.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->task_manager = static_cast<MyTaskManager_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "MyTaskManager")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual RTValue __call__(const List& queries, const List& titles);
};

// flags for convert check
uint32_t MyTokenizerOp::tag_s_2_71828182846_ = 7961221082863544838;
uint32_t MyTokenizerOp::var_num_s_2_71828182846_ = 1;
string_view MyTokenizerOp::class_name_s_2_71828182846_ = "MyTokenizerOp";
IUserDataRoot::__FunctionTable__ MyTokenizerOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MyTokenizerOp, "MyTokenizerOp");

struct MyTokenizerOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  MyTokenizerOp *ptr;
  // constructor
  MyTokenizerOp_SharedView(MyTokenizerOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MyTokenizerOp_SharedView(MyTokenizerOp *ptr) : ptr(ptr) {}
  MyTokenizerOp_SharedView() : ptr(nullptr) {}
  MyTokenizerOp_SharedView(const hercules::runtime::Any& ref) : MyTokenizerOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MyTokenizerOp")) {}
  // UserDataRef
  MyTokenizerOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MyTokenizerOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(MyTokenizerOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MyTokenizerOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MyTokenizerOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MyTokenizerOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MyTokenizerTask_F__deleter__(ILightUserData* ptr) { delete static_cast<MyTokenizerTask*>(ptr); }
void* MyTokenizerTask_F__placement_new__(void* buf) { return new (buf) MyTokenizerTask; }
void MyTokenizerTask_F__placement_del__(ILightUserData* ptr) { static_cast<MyTokenizerTask*>(ptr)->MyTokenizerTask::~MyTokenizerTask(); }
MyTokenizerTask_SharedView MyTokenizerTask__F___init___wrapper(const unicode_view& query, const List& titles, const unicode_view& sep, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyTokenizerTask)) {
    auto self = new MyTokenizerTask;
    self->function_table_2_71828182846_ = &MyTokenizerTask::function_table_s_2_71828182846_;
    MyTokenizerTask__F___init__(self,  query,  titles,  sep,  handle_2_71828182846);
    UserDataRef self_ref(MyTokenizerTask::tag_s_2_71828182846_, MyTokenizerTask::var_num_s_2_71828182846_, self, MyTokenizerTask_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyTokenizerTask::tag_s_2_71828182846_, MyTokenizerTask::var_num_s_2_71828182846_, sizeof(MyTokenizerTask), MyTokenizerTask_F__placement_new__, MyTokenizerTask_F__placement_del__, __hercules_module_ctx);
    MyTokenizerTask_SharedView self_view((MyTokenizerTask*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyTokenizerTask::function_table_s_2_71828182846_;
    MyTokenizerTask__F___init__(self_view,  query,  titles,  sep,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void MyTaskManager_F__deleter__(ILightUserData* ptr) { delete static_cast<MyTaskManager*>(ptr); }
void* MyTaskManager_F__placement_new__(void* buf) { return new (buf) MyTaskManager; }
void MyTaskManager_F__placement_del__(ILightUserData* ptr) { static_cast<MyTaskManager*>(ptr)->MyTaskManager::~MyTaskManager(); }
MyTaskManager_SharedView MyTaskManager__F___init___wrapper(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyTaskManager)) {
    auto self = new MyTaskManager;
    self->function_table_2_71828182846_ = &MyTaskManager::function_table_s_2_71828182846_;
    MyTaskManager__F___init__(self,  pool_size,  use_lockfree_pool,  handle_2_71828182846);
    UserDataRef self_ref(MyTaskManager::tag_s_2_71828182846_, MyTaskManager::var_num_s_2_71828182846_, self, MyTaskManager_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyTaskManager::tag_s_2_71828182846_, MyTaskManager::var_num_s_2_71828182846_, sizeof(MyTaskManager), MyTaskManager_F__placement_new__, MyTaskManager_F__placement_del__, __hercules_module_ctx);
    MyTaskManager_SharedView self_view((MyTaskManager*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyTaskManager::function_table_s_2_71828182846_;
    MyTaskManager__F___init__(self_view,  pool_size,  use_lockfree_pool,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void MyTokenizerOp_F__deleter__(ILightUserData* ptr) { delete static_cast<MyTokenizerOp*>(ptr); }
void* MyTokenizerOp_F__placement_new__(void* buf) { return new (buf) MyTokenizerOp; }
void MyTokenizerOp_F__placement_del__(ILightUserData* ptr) { static_cast<MyTokenizerOp*>(ptr)->MyTokenizerOp::~MyTokenizerOp(); }
MyTokenizerOp_SharedView MyTokenizerOp__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MyTokenizerOp)) {
    auto self = new MyTokenizerOp;
    self->function_table_2_71828182846_ = &MyTokenizerOp::function_table_s_2_71828182846_;
    MyTokenizerOp__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MyTokenizerOp::tag_s_2_71828182846_, MyTokenizerOp::var_num_s_2_71828182846_, self, MyTokenizerOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MyTokenizerOp::tag_s_2_71828182846_, MyTokenizerOp::var_num_s_2_71828182846_, sizeof(MyTokenizerOp), MyTokenizerOp_F__placement_new__, MyTokenizerOp_F__placement_del__, __hercules_module_ctx);
    MyTokenizerOp_SharedView self_view((MyTokenizerOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MyTokenizerOp::function_table_s_2_71828182846_;
    MyTokenizerOp__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue MyTokenizerTask::__init__(const unicode_view& query, const List& titles, const unicode_view& sep, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
  this->query = GenericValueConverter<Unicode>{}(query);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:29
  this->titles = std::move(titles);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:30
  this->sep = GenericValueConverter<Unicode>{}(sep);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:31
  return (None);
}

HERCULES_DLL RTValue MyTokenizerTask__F___init__(const MyTokenizerTask_SharedView& self, const unicode_view& query, const List& titles, const unicode_view& sep, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
  return (self->__init__(query, titles, sep, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
}

int MyTokenizerTask__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[4] {"self", "query", "titles", "sep"};
    static RTValue default_args[1]{RTValue(unicode_view(U"\u0020", 1))};
    KwargsUnpackHelper helper("__init__", arg_names, 4, default_args, 1);
    RTView pos_args[4];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
    auto ret = MyTokenizerTask__F___init__(MyTokenizerTask_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'pos_args[1]' is 'py::str' type"), internal::TypeAsHelper<List>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'pos_args[2]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'pos_args[3]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyTokenizerTask__F___init__(MyTokenizerTask_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<List>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[2]' is 'List' type"), unicode_view(U"\u0020", 1), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 4: {
        auto ret = MyTokenizerTask__F___init__(MyTokenizerTask_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), internal::TypeAsHelper<List>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[2]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((args_t[3]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[3]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "__init__() takes from 3 to 4 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
    }
  }

  return 0;
}

int MyTokenizerTask__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"query", "titles", "sep"};
    static RTValue default_args[1]{RTValue(unicode_view(U"\u0020", 1))};
    KwargsUnpackHelper helper("__init__", arg_names, 3, default_args, 1);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
    auto ret = MyTokenizerTask__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'pos_args[0]' is 'py::str' type"), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'pos_args[1]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'pos_args[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyTokenizerTask__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[1]' is 'List' type"), unicode_view(U"\u0020", 1), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      case 3: {
        auto ret = MyTokenizerTask__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[0]' is 'py::str' type"), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[1]' is 'List' type"), internal::TypeAsHelper<unicode_view>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "expect 'args_t[2]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 28, in __init__\n", "__init__() takes from 2 to 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:28
    }
  }

  return 0;
}

Tuple MyTokenizerTask::__call__(int64_t i) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
  List qs = (kernel_unicode_split(GenericValueConverter<unicode_view>{}(this->query), GenericValueConverter<unicode_view>{}(this->sep), (int64_t)-1));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:34
  List ts = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:35
  {
    List const& __reserved_eval_cons_t57342_0 = this->titles;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:36
    auto __reserved_iter_t32016_0 = __reserved_eval_cons_t57342_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:36
    auto __reserved_iter_end_t8841_0 = __reserved_eval_cons_t57342_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:36
    while ((__reserved_iter_t32016_0 != __reserved_iter_end_t8841_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:36
      unicode_view t = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_t32016_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 36, in __call__\n", "expect 'the element in this->titles' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:36
      ++__reserved_iter_t32016_0;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:36
      {
        (void)(ts).append((RTValue(kernel_unicode_split(t, GenericValueConverter<unicode_view>{}(this->sep), (int64_t)-1))));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:37
      }
    }
  }
  return (Kernel_Tuple::make(std::initializer_list<Tuple::value_type>{(i), (qs), (ts)}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:38
}

HERCULES_DLL Tuple MyTokenizerTask__F___call__(const MyTokenizerTask_SharedView& self, int64_t i) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
  return (self->__call__(i));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
}

int MyTokenizerTask__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "i"};
    static RTValue default_args[1]{RTValue((int64_t)0)};
    KwargsUnpackHelper helper("__call__", arg_names, 2, default_args, 1);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
    auto ret = MyTokenizerTask__F___call__(MyTokenizerTask_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 33, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyTokenizerTask__F___call__(MyTokenizerTask_SharedView(static_cast<const Any&>(args_t[0])), (int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      case 2: {
        auto ret = MyTokenizerTask__F___call__(MyTokenizerTask_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 33, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 33, in __call__\n", "__call__() takes from 1 to 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:33
    }
  }

  return 0;
}

RTValue MyTaskManager::__init__(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
  this->thread_pool = make_native_userdata(string_view("ThreadPoolExecutor", 18), pool_size, use_lockfree_pool);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:44
  return (None);
}

HERCULES_DLL RTValue MyTaskManager__F___init__(const MyTaskManager_SharedView& self, int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
  return (self->__init__(pool_size, use_lockfree_pool, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
}

int MyTaskManager__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "pool_size", "use_lockfree_pool"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
    auto ret = MyTaskManager__F___init__(MyTaskManager_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'pos_args[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyTaskManager__F___init__(MyTaskManager_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'args_t[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
    }
  }

  return 0;
}

int MyTaskManager__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"pool_size", "use_lockfree_pool"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
    auto ret = MyTaskManager__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'pos_args[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyTaskManager__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "expect 'args_t[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 43, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:43
    }
  }

  return 0;
}

UserDataRef MyTaskManager::submit(const MyTokenizerTask_SharedView& task) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
  return (internal::TypeAsHelper<UserDataRef>::run(((this->thread_pool).generic_call_attr("Submit", {(task), ((int64_t)1)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 48, in submit\n", "expect '(this->thread_pool).generic_call_attr(\"Submit\", {(task), ((int64_t)1)})' is 'UserDataRef' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:48
}

HERCULES_DLL UserDataRef MyTaskManager__F_submit(const MyTaskManager_SharedView& self, const MyTokenizerTask_SharedView& task) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
  return (self->submit(task));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
}

int MyTaskManager__F_submit__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "task"};
    KwargsUnpackHelper helper("submit", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
    auto ret = MyTaskManager__F_submit(MyTaskManager_SharedView(static_cast<const Any&>(pos_args[0])), MyTokenizerTask_SharedView(static_cast<const Any&>(pos_args[1])));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MyTaskManager__F_submit(MyTaskManager_SharedView(static_cast<const Any&>(args_t[0])), MyTokenizerTask_SharedView(static_cast<const Any&>(args_t[1])));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 47, in submit\n", "submit() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:47
    }
  }

  return 0;
}

RTValue MyTokenizerOp::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
  this->task_manager = MyTaskManager__F___init___wrapper((int64_t)2, (bool)1, this->session_handle_2_71828182846_);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:54
  return (None);
}

HERCULES_DLL RTValue MyTokenizerOp__F___init__(const MyTokenizerOp_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
}

int MyTokenizerOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
    auto ret = MyTokenizerOp__F___init__(MyTokenizerOp_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MyTokenizerOp__F___init__(MyTokenizerOp_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 53, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
    }
  }

  return 0;
}

int MyTokenizerOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MyTokenizerOp__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 53, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:53
  }
  return 0;
}

RTValue MyTokenizerOp::__call__(const List& queries, const List& titles) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
  if (!(((queries).size() == (titles).size()))) { THROW_PY_AssertionError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 57, in __call__\n", "q/t mismatch"); }  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:57
  List futures = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:58
  int64_t i_stop_74024035 = ((queries).size());  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:59
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < i_stop_74024035; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:59
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:59
    MyTokenizerTask_SharedView task = (MyTokenizerTask__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run(((queries).get_item((i))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 60, in __call__\n", "expect '(queries).get_item((i))' is 'py::str' type"), internal::TypeAsHelper<List>::run(((titles).get_item((i))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 60, in __call__\n", "expect '(titles).get_item((i))' is 'List' type"), unicode_view(U"\u0020", 1), this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:60
    (void)(futures).append((RTValue(this->task_manager->submit(task))));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:61
  }
  List result = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:63
  {
    List const& __reserved_eval_cons_f39753_0 = futures;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:64
    auto __reserved_iter_f63549_0 = __reserved_eval_cons_f39753_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:64
    auto __reserved_iter_end_f13054_0 = __reserved_eval_cons_f39753_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:64
    while ((__reserved_iter_f63549_0 != __reserved_iter_end_f13054_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:64
      RTView f = internal::TypeAsHelper<RTView>::run((*__reserved_iter_f63549_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 64, in __call__\n", "expect 'the element in futures' is 'RTView' type");  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:64
      ++__reserved_iter_f63549_0;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:64
      {
        (void)(result).append((kernel_object_get(f, {})));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:65
      }
    }
  }
  return (RTValue(result));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:66
  return (None);
}

HERCULES_DLL RTValue MyTokenizerOp__F___call__(const MyTokenizerOp_SharedView& self, const List& queries, const List& titles) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
  return (self->__call__(queries, titles));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
}

int MyTokenizerOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "queries", "titles"};
    KwargsUnpackHelper helper("__call__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
    auto ret = MyTokenizerOp__F___call__(MyTokenizerOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 56, in __call__\n", "expect 'pos_args[1]' is 'List' type"), internal::TypeAsHelper<List>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 56, in __call__\n", "expect 'pos_args[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MyTokenizerOp__F___call__(MyTokenizerOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 56, in __call__\n", "expect 'args_t[1]' is 'List' type"), internal::TypeAsHelper<List>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 56, in __call__\n", "expect 'args_t[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_async.py\", line 56, in __call__\n", "__call__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_async.py:56
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyTokenizerOp[] = {
    (HerculesBackendPackedCFunc)MyTokenizerOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTokenizerOp__F___init____c_api,
    (HerculesBackendPackedCFunc)MyTokenizerOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTokenizerOp = {
    "3\000MyTokenizerOp__F___init___wrapper\000MyTokenizerOp__F___init__\000MyTokenizerOp__F___call__\000",    __hercules_func_array__MyTokenizerOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyTaskManager[] = {
    (HerculesBackendPackedCFunc)MyTaskManager__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTaskManager__F___init____c_api,
    (HerculesBackendPackedCFunc)MyTaskManager__F_submit__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTaskManager = {
    "3\000MyTaskManager__F___init___wrapper\000MyTaskManager__F___init__\000MyTaskManager__F_submit\000",    __hercules_func_array__MyTaskManager,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MyTokenizerTask[] = {
    (HerculesBackendPackedCFunc)MyTokenizerTask__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTokenizerTask__F___init____c_api,
    (HerculesBackendPackedCFunc)MyTokenizerTask__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MyTokenizerTask = {
    "3\000MyTokenizerTask__F___init___wrapper\000MyTokenizerTask__F___init__\000MyTokenizerTask__F___call__\000",    __hercules_func_array__MyTokenizerTask,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MyTokenizerTask__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTaskManager__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTokenizerOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MyTokenizerOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "4\000MyTokenizerTask__F___init___wrapper\000MyTaskManager__F___init___wrapper\000MyTokenizerOp__F___init___wrapper\000MyTokenizerOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "6\000MyTokenizerTask__F___init___wrapper\000MyTaskManager__F___init___wrapper\000MyTokenizerOp__F___init___wrapper\000MyTokenizerTask__F___init__\000MyTaskManager__F___init__\000MyTokenizerOp__F___init__\000";

} // extern C

