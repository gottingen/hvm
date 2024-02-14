#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__GlobalRss;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__A;
namespace {
// User class forward declarations
struct GlobalRss;
struct GlobalRss_SharedView;

// User class forward declarations
struct A;
struct A_SharedView;

GlobalRss_SharedView GlobalRss__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int GlobalRss__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
A_SharedView A__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int A__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL Unicode wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue GlobalRss__F___init__(const GlobalRss_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int GlobalRss__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue A__F___init__(const A_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int A__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL GlobalRss_SharedView A__F_func(const A_SharedView& self);
int A__F_func__c_api(HerculesAny*, int, HerculesAny*, void*);
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

struct A : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "A"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {A::tag_s_2_71828182846_};
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
  virtual GlobalRss_SharedView func();
};

// flags for convert check
uint32_t A::tag_s_2_71828182846_ = -4342520001129332119;
uint32_t A::var_num_s_2_71828182846_ = 0;
string_view A::class_name_s_2_71828182846_ = "A";
IUserDataRoot::__FunctionTable__ A::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__A, "A");

struct A_SharedView: public IUserDataSharedViewRoot {
  // member var
  A *ptr;
  // constructor
  A_SharedView(A *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  A_SharedView(A *ptr) : ptr(ptr) {}
  A_SharedView() : ptr(nullptr) {}
  A_SharedView(const hercules::runtime::Any& ref) : A_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "A")) {}
  // UserDataRef
  A_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("A"));
    if(!base_ud_ptr->isinstance_2_71828182846(A::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'A' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<A*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  A* operator->() const { return ptr; }
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

void A_F__deleter__(ILightUserData* ptr) { delete static_cast<A*>(ptr); }
void* A_F__placement_new__(void* buf) { return new (buf) A; }
void A_F__placement_del__(ILightUserData* ptr) { static_cast<A*>(ptr)->A::~A(); }
A_SharedView A__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(A)) {
    auto self = new A;
    self->function_table_2_71828182846_ = &A::function_table_s_2_71828182846_;
    A__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(A::tag_s_2_71828182846_, A::var_num_s_2_71828182846_, self, A_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(A::tag_s_2_71828182846_, A::var_num_s_2_71828182846_, sizeof(A), A_F__placement_new__, A_F__placement_del__, __hercules_module_ctx);
    A_SharedView self_view((A*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &A::function_table_s_2_71828182846_;
    A__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL Unicode wrapper(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:75
  A_SharedView a = (A__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:76
  return (a->func()->name);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:77
}

int wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:75
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 75, in wrapper\n", "wrapper() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:75
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

RTValue A::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
  return (None);
}

HERCULES_DLL RTValue A__F___init__(const A_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
}

int A__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
    auto ret = A__F___init__(A_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = A__F___init__(A_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 35, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
    }
  }

  return 0;
}

int A__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = A__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 35, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:35
  }
  return 0;
}

GlobalRss_SharedView A::func() {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
  GlobalRss_SharedView rss = (GlobalRss__F___init___wrapper(this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:39
  return (rss);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:40
}

HERCULES_DLL GlobalRss_SharedView A__F_func(const A_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
  return (self->func());  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
}

int A__F_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("func", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
    auto ret = A__F_func(A_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = A__F_func(A_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py\", line 38, in func\n", "func() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_dependency_dag.py:38
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__A[] = {
    (HerculesBackendPackedCFunc)A__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)A__F___init____c_api,
    (HerculesBackendPackedCFunc)A__F_func__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__A = {
    "3\000A__F___init___wrapper\000A__F___init__\000A__F_func\000",    __hercules_func_array__A,
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
    (HerculesBackendPackedCFunc)A__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000GlobalRss__F___init___wrapper\000A__F___init___wrapper\000wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "5\000GlobalRss__F___init___wrapper\000A__F___init___wrapper\000wrapper\000GlobalRss__F___init__\000A__F___init__\000";

} // extern C
