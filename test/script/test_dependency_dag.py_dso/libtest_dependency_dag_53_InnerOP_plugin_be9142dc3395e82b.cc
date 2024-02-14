#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__GlobalRss;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__InnerRss;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__InnerOP;
namespace {
// User class forward declarations
struct GlobalRss;
struct GlobalRss_SharedView;

// User class forward declarations
struct InnerRss;
struct InnerRss_SharedView;

// User class forward declarations
struct InnerOP;
struct InnerOP_SharedView;

GlobalRss_SharedView GlobalRss__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int GlobalRss__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
InnerRss_SharedView InnerRss__F___init___wrapper(const GlobalRss_SharedView& grss, void* handle_2_71828182846=((void*)(int64_t)0));
int InnerRss__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
InnerOP_SharedView InnerOP__F___init___wrapper(const InnerRss_SharedView& irss, void* handle_2_71828182846=((void*)(int64_t)0));
int InnerOP__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode inner_func(void* handle_2_71828182846=((void*)(int64_t)0));
int inner_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode global_func(void* handle_2_71828182846=((void*)(int64_t)0));
int global_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue GlobalRss__F___init__(const GlobalRss_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int GlobalRss__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue InnerRss__F___init__(const InnerRss_SharedView& self, const GlobalRss_SharedView& grss, void* handle_2_71828182846=((void*)(int64_t)0));
int InnerRss__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue InnerOP__F___init__(const InnerOP_SharedView& self, const InnerRss_SharedView& irss, void* handle_2_71828182846=((void*)(int64_t)0));
int InnerOP__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode InnerOP__F___call__(const InnerOP_SharedView& self);
int InnerOP__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct GlobalRss : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "GlobalRss"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {GlobalRss::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"name", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"name", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  Unicode name;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return name; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->name = HERCULES_TYPE_AS(val, Unicode); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t GlobalRss::tag_s_2_71828182846_ = 8404366137394456860;
uint32_t GlobalRss::var_num_s_2_71828182846_ = 1;
string_view GlobalRss::class_name_s_2_71828182846_ = "GlobalRss";
IUserDataRoot::__FunctionTable__ GlobalRss::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__GlobalRss, "GlobalRss");

struct GlobalRss_SharedView: public IUserDataSharedViewRoot {
  // member var
  GlobalRss *ptr;
  // constructor
  GlobalRss_SharedView(GlobalRss *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  GlobalRss_SharedView(GlobalRss *ptr) : ptr(ptr) {}
  GlobalRss_SharedView() : ptr(nullptr) {}
  GlobalRss_SharedView(const hercules::runtime::Any& ref) : GlobalRss_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "GlobalRss")) {}
  // UserDataRef
  GlobalRss_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("GlobalRss"));
    if(!base_ud_ptr->isinstance_2_71828182846(GlobalRss::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'GlobalRss' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<GlobalRss*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  GlobalRss* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct InnerRss : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "InnerRss"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {InnerRss::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"name", "grss", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"name", 0}, 
      {"grss", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  Unicode name;
  GlobalRss_SharedView grss;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return name; } break;
    case 1: { return grss.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->name = HERCULES_TYPE_AS(val, Unicode); } break;
    case 1: { this->grss = static_cast<GlobalRss_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "GlobalRss")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const GlobalRss_SharedView& grss, void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t InnerRss::tag_s_2_71828182846_ = -3684500098277966086;
uint32_t InnerRss::var_num_s_2_71828182846_ = 2;
string_view InnerRss::class_name_s_2_71828182846_ = "InnerRss";
IUserDataRoot::__FunctionTable__ InnerRss::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__InnerRss, "InnerRss");

struct InnerRss_SharedView: public IUserDataSharedViewRoot {
  // member var
  InnerRss *ptr;
  // constructor
  InnerRss_SharedView(InnerRss *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  InnerRss_SharedView(InnerRss *ptr) : ptr(ptr) {}
  InnerRss_SharedView() : ptr(nullptr) {}
  InnerRss_SharedView(const hercules::runtime::Any& ref) : InnerRss_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "InnerRss")) {}
  // UserDataRef
  InnerRss_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("InnerRss"));
    if(!base_ud_ptr->isinstance_2_71828182846(InnerRss::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'InnerRss' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<InnerRss*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  InnerRss* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct InnerOP : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "InnerOP"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {InnerOP::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"irss", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"irss", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  InnerRss_SharedView irss;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return irss.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->irss = static_cast<InnerRss_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "InnerRss")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const InnerRss_SharedView& irss, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual Unicode __call__();
};

// flags for convert check
uint32_t InnerOP::tag_s_2_71828182846_ = 5958213354149388986;
uint32_t InnerOP::var_num_s_2_71828182846_ = 1;
string_view InnerOP::class_name_s_2_71828182846_ = "InnerOP";
IUserDataRoot::__FunctionTable__ InnerOP::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__InnerOP, "InnerOP");

struct InnerOP_SharedView: public IUserDataSharedViewRoot {
  // member var
  InnerOP *ptr;
  // constructor
  InnerOP_SharedView(InnerOP *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  InnerOP_SharedView(InnerOP *ptr) : ptr(ptr) {}
  InnerOP_SharedView() : ptr(nullptr) {}
  InnerOP_SharedView(const hercules::runtime::Any& ref) : InnerOP_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "InnerOP")) {}
  // UserDataRef
  InnerOP_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("InnerOP"));
    if(!base_ud_ptr->isinstance_2_71828182846(InnerOP::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'InnerOP' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<InnerOP*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  InnerOP* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void GlobalRss_F__deleter__(ILightUserData* ptr) { delete static_cast<GlobalRss*>(ptr); }
void* GlobalRss_F__placement_new__(void* buf) { return new (buf) GlobalRss; }
void GlobalRss_F__placement_del__(ILightUserData* ptr) { static_cast<GlobalRss*>(ptr)->GlobalRss::~GlobalRss(); }
GlobalRss_SharedView GlobalRss__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(GlobalRss)) {
    auto self = new GlobalRss;
    self->function_table_2_71828182846_ = &GlobalRss::function_table_s_2_71828182846_;
    GlobalRss__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(GlobalRss::tag_s_2_71828182846_, GlobalRss::var_num_s_2_71828182846_, self, GlobalRss_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(GlobalRss::tag_s_2_71828182846_, GlobalRss::var_num_s_2_71828182846_, sizeof(GlobalRss), GlobalRss_F__placement_new__, GlobalRss_F__placement_del__, __hercules_module_ctx);
    GlobalRss_SharedView self_view((GlobalRss*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &GlobalRss::function_table_s_2_71828182846_;
    GlobalRss__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void InnerRss_F__deleter__(ILightUserData* ptr) { delete static_cast<InnerRss*>(ptr); }
void* InnerRss_F__placement_new__(void* buf) { return new (buf) InnerRss; }
void InnerRss_F__placement_del__(ILightUserData* ptr) { static_cast<InnerRss*>(ptr)->InnerRss::~InnerRss(); }
InnerRss_SharedView InnerRss__F___init___wrapper(const GlobalRss_SharedView& grss, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(InnerRss)) {
    auto self = new InnerRss;
    self->function_table_2_71828182846_ = &InnerRss::function_table_s_2_71828182846_;
    InnerRss__F___init__(self,  grss,  handle_2_71828182846);
    UserDataRef self_ref(InnerRss::tag_s_2_71828182846_, InnerRss::var_num_s_2_71828182846_, self, InnerRss_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(InnerRss::tag_s_2_71828182846_, InnerRss::var_num_s_2_71828182846_, sizeof(InnerRss), InnerRss_F__placement_new__, InnerRss_F__placement_del__, __hercules_module_ctx);
    InnerRss_SharedView self_view((InnerRss*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &InnerRss::function_table_s_2_71828182846_;
    InnerRss__F___init__(self_view,  grss,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void InnerOP_F__deleter__(ILightUserData* ptr) { delete static_cast<InnerOP*>(ptr); }
void* InnerOP_F__placement_new__(void* buf) { return new (buf) InnerOP; }
void InnerOP_F__placement_del__(ILightUserData* ptr) { static_cast<InnerOP*>(ptr)->InnerOP::~InnerOP(); }
InnerOP_SharedView InnerOP__F___init___wrapper(const InnerRss_SharedView& irss, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(InnerOP)) {
    auto self = new InnerOP;
    self->function_table_2_71828182846_ = &InnerOP::function_table_s_2_71828182846_;
    InnerOP__F___init__(self,  irss,  handle_2_71828182846);
    UserDataRef self_ref(InnerOP::tag_s_2_71828182846_, InnerOP::var_num_s_2_71828182846_, self, InnerOP_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(InnerOP::tag_s_2_71828182846_, InnerOP::var_num_s_2_71828182846_, sizeof(InnerOP), InnerOP_F__placement_new__, InnerOP_F__placement_del__, __hercules_module_ctx);
    InnerOP_SharedView self_view((InnerOP*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &InnerOP::function_table_s_2_71828182846_;
    InnerOP__F___init__(self_view,  irss,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL Unicode inner_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:45
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0069\u006E\u006E\u0065\u0072\u005F\u0066\u0075\u006E\u0063", 10)));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:46
}

int inner_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = inner_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:45
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 45, in inner_func\n", "inner_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:45
  }
  return 0;
}

HERCULES_DLL Unicode global_func(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:24
  return (GenericValueConverter<Unicode>{}(unicode_view(U"\u0067\u006C\u006F\u0062\u0061\u006C\u005F\u0066\u0075\u006E\u0063", 11)));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:25
}

int global_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = global_func(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:24
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 24, in global_func\n", "global_func() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:24
  }
  return 0;
}

RTValue GlobalRss::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
  this->name = GenericValueConverter<Unicode>{}(unicode_view(U"\u0047\u006C\u006F\u0062\u0061\u006C\u0052\u0073\u0073", 9));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:31
  return (None);
}

HERCULES_DLL RTValue GlobalRss__F___init__(const GlobalRss_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
}

int GlobalRss__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
    auto ret = GlobalRss__F___init__(GlobalRss_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = GlobalRss__F___init__(GlobalRss_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 30, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
    }
  }

  return 0;
}

int GlobalRss__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = GlobalRss__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 30, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:30
  }
  return 0;
}

RTValue InnerRss::__init__(const GlobalRss_SharedView& grss, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
  this->name = GenericValueConverter<Unicode>{}(unicode_view(U"\u0049\u006E\u006E\u0065\u0072\u0052\u0073\u0073", 8));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:50
  this->grss = std::move(grss);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:51
  return (None);
}

HERCULES_DLL RTValue InnerRss__F___init__(const InnerRss_SharedView& self, const GlobalRss_SharedView& grss, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
  return (self->__init__(grss, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
}

int InnerRss__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "grss"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
    auto ret = InnerRss__F___init__(InnerRss_SharedView(static_cast<const Any&>(pos_args[0])), GlobalRss_SharedView(static_cast<const Any&>(pos_args[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = InnerRss__F___init__(InnerRss_SharedView(static_cast<const Any&>(args_t[0])), GlobalRss_SharedView(static_cast<const Any&>(args_t[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 49, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
    }
  }

  return 0;
}

int InnerRss__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"grss"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
    auto ret = InnerRss__F___init___wrapper(GlobalRss_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = InnerRss__F___init___wrapper(GlobalRss_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 49, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:49
    }
  }

  return 0;
}

RTValue InnerOP::__init__(const InnerRss_SharedView& irss, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
  this->irss = std::move(irss);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:56
  return (None);
}

HERCULES_DLL RTValue InnerOP__F___init__(const InnerOP_SharedView& self, const InnerRss_SharedView& irss, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
  return (self->__init__(irss, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
}

int InnerOP__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "irss"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
    auto ret = InnerOP__F___init__(InnerOP_SharedView(static_cast<const Any&>(pos_args[0])), InnerRss_SharedView(static_cast<const Any&>(pos_args[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = InnerOP__F___init__(InnerOP_SharedView(static_cast<const Any&>(args_t[0])), InnerRss_SharedView(static_cast<const Any&>(args_t[1])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 55, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
    }
  }

  return 0;
}

int InnerOP__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"irss"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
    auto ret = InnerOP__F___init___wrapper(InnerRss_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = InnerOP__F___init___wrapper(InnerRss_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 55, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:55
    }
  }

  return 0;
}

Unicode InnerOP::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
  List parts = (Kernel_List::make((Kernel_List::make(std::initializer_list<List::value_type>{}))));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:59
  (void)(parts).append((RTValue(inner_func(this->session_handle_2_71828182846_))));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:60
  (void)(parts).append((RTValue(global_func(this->session_handle_2_71828182846_))));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:61
  (void)(parts).append((RTValue(this->irss->name)));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:62
  (void)(parts).append((RTValue(this->irss->grss->name)));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:63
  return (kernel_unicode_join(unicode_view(U"\u002C", 1), parts));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:64
}

HERCULES_DLL Unicode InnerOP__F___call__(const InnerOP_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
}

int InnerOP__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
    auto ret = InnerOP__F___call__(InnerOP_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = InnerOP__F___call__(InnerOP_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 58, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:58
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__InnerOP[] = {
    (HerculesBackendPackedCFunc)InnerOP__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)InnerOP__F___init____c_api,
    (HerculesBackendPackedCFunc)InnerOP__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__InnerOP = {
    "3\000InnerOP__F___init___wrapper\000InnerOP__F___init__\000InnerOP__F___call__\000",    __hercules_func_array__InnerOP,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__InnerRss[] = {
    (HerculesBackendPackedCFunc)InnerRss__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)InnerRss__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__InnerRss = {
    "2\000InnerRss__F___init___wrapper\000InnerRss__F___init__\000",    __hercules_func_array__InnerRss,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__GlobalRss[] = {
    (HerculesBackendPackedCFunc)GlobalRss__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)GlobalRss__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__GlobalRss = {
    "2\000GlobalRss__F___init___wrapper\000GlobalRss__F___init__\000",    __hercules_func_array__GlobalRss,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)GlobalRss__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)InnerRss__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)InnerOP__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)InnerOP__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "4\000GlobalRss__F___init___wrapper\000InnerRss__F___init___wrapper\000InnerOP__F___init___wrapper\000InnerOP__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "8\000GlobalRss__F___init___wrapper\000InnerRss__F___init___wrapper\000InnerOP__F___init___wrapper\000inner_func\000global_func\000GlobalRss__F___init__\000InnerRss__F___init__\000InnerOP__F___init__\000";

} // extern C

