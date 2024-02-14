#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__A;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__B;
namespace {
// User class forward declarations
struct A;
struct A_SharedView;

// User class forward declarations
struct B;
struct B_SharedView;

A_SharedView A__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int A__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
B_SharedView B__F___init___wrapper(const RTView& param, void* handle_2_71828182846=((void*)(int64_t)0));
int B__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue A__F___init__(const A_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int A__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue B__F___init__(const B_SharedView& self, const RTView& param, void* handle_2_71828182846=((void*)(int64_t)0));
int B__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
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
};

// flags for convert check
uint32_t A::tag_s_2_71828182846_ = 8952735323558027461;
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

struct B : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "B"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {B::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"sub_class", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"sub_class", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  A_SharedView sub_class;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return sub_class.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->sub_class = static_cast<A_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "A")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const RTView& param, void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t B::tag_s_2_71828182846_ = 3618673831322766127;
uint32_t B::var_num_s_2_71828182846_ = 1;
string_view B::class_name_s_2_71828182846_ = "B";
IUserDataRoot::__FunctionTable__ B::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__B, "B");

struct B_SharedView: public IUserDataSharedViewRoot {
  // member var
  B *ptr;
  // constructor
  B_SharedView(B *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  B_SharedView(B *ptr) : ptr(ptr) {}
  B_SharedView() : ptr(nullptr) {}
  B_SharedView(const hercules::runtime::Any& ref) : B_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "B")) {}
  // UserDataRef
  B_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("B"));
    if(!base_ud_ptr->isinstance_2_71828182846(B::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'B' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<B*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  B* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

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

void B_F__deleter__(ILightUserData* ptr) { delete static_cast<B*>(ptr); }
void* B_F__placement_new__(void* buf) { return new (buf) B; }
void B_F__placement_del__(ILightUserData* ptr) { static_cast<B*>(ptr)->B::~B(); }
B_SharedView B__F___init___wrapper(const RTView& param, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(B)) {
    auto self = new B;
    self->function_table_2_71828182846_ = &B::function_table_s_2_71828182846_;
    B__F___init__(self,  param,  handle_2_71828182846);
    UserDataRef self_ref(B::tag_s_2_71828182846_, B::var_num_s_2_71828182846_, self, B_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(B::tag_s_2_71828182846_, B::var_num_s_2_71828182846_, sizeof(B), B_F__placement_new__, B_F__placement_del__, __hercules_module_ctx);
    B_SharedView self_view((B*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &B::function_table_s_2_71828182846_;
    B__F___init__(self_view,  param,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue A::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
  return (None);
}

HERCULES_DLL RTValue A__F___init__(const A_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
}

int A__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
    auto ret = A__F___init__(A_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = A__F___init__(A_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 26, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
    }
  }

  return 0;
}

int A__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = A__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 26, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:26
  }
  return 0;
}

RTValue B::__init__(const RTView& param, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
  this->sub_class = A_SharedView(static_cast<const Any&>(param));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:32
  return (None);
}

HERCULES_DLL RTValue B__F___init__(const B_SharedView& self, const RTView& param, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
  return (self->__init__(param, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
}

int B__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "param"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
    auto ret = B__F___init__(B_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = B__F___init__(B_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 31, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
    }
  }

  return 0;
}

int B__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"param"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
    auto ret = B__F___init___wrapper((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = B__F___init___wrapper((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py\", line 31, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_from_any.py:31
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__B[] = {
    (HerculesBackendPackedCFunc)B__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)B__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__B = {
    "2\000B__F___init___wrapper\000B__F___init__\000",    __hercules_func_array__B,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__A[] = {
    (HerculesBackendPackedCFunc)A__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)A__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__A = {
    "2\000A__F___init___wrapper\000A__F___init__\000",    __hercules_func_array__A,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)A__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)B__F___init___wrapper__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000A__F___init___wrapper\000B__F___init___wrapper\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000A__F___init___wrapper\000B__F___init___wrapper\000A__F___init__\000B__F___init__\000";

} // extern C

