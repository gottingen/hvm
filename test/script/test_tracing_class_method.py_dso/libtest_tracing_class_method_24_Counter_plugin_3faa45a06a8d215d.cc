#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Counter;
namespace {
// User class forward declarations
struct Counter;
struct Counter_SharedView;

Counter_SharedView Counter__F___init___wrapper(int64_t init_value, void* handle_2_71828182846=((void*)(int64_t)0));
int Counter__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Counter__F___init__(const Counter_SharedView& self, int64_t init_value, void* handle_2_71828182846=((void*)(int64_t)0));
int Counter__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t Counter__F_minus(const Counter_SharedView& self, int64_t a);
int Counter__F_minus__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t Counter__F_add(const Counter_SharedView& self, int64_t a);
int Counter__F_add__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t Counter__F___call__(const Counter_SharedView& self, int64_t a);
int Counter__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct Counter : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Counter"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Counter::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"value", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"value", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t value;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return value; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->value = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t init_value, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t minus(int64_t a);
  virtual int64_t add(int64_t a1);
  virtual int64_t __call__(int64_t a2);
};

// flags for convert check
uint32_t Counter::tag_s_2_71828182846_ = -6027375235283411240;
uint32_t Counter::var_num_s_2_71828182846_ = 1;
string_view Counter::class_name_s_2_71828182846_ = "Counter";
IUserDataRoot::__FunctionTable__ Counter::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Counter, "Counter");

struct Counter_SharedView: public IUserDataSharedViewRoot {
  // member var
  Counter *ptr;
  // constructor
  Counter_SharedView(Counter *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Counter_SharedView(Counter *ptr) : ptr(ptr) {}
  Counter_SharedView() : ptr(nullptr) {}
  Counter_SharedView(const hercules::runtime::Any& ref) : Counter_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Counter")) {}
  // UserDataRef
  Counter_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Counter"));
    if(!base_ud_ptr->isinstance_2_71828182846(Counter::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Counter' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Counter*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Counter* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void Counter_F__deleter__(ILightUserData* ptr) { delete static_cast<Counter*>(ptr); }
void* Counter_F__placement_new__(void* buf) { return new (buf) Counter; }
void Counter_F__placement_del__(ILightUserData* ptr) { static_cast<Counter*>(ptr)->Counter::~Counter(); }
Counter_SharedView Counter__F___init___wrapper(int64_t init_value, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Counter)) {
    auto self = new Counter;
    self->function_table_2_71828182846_ = &Counter::function_table_s_2_71828182846_;
    Counter__F___init__(self,  init_value,  handle_2_71828182846);
    UserDataRef self_ref(Counter::tag_s_2_71828182846_, Counter::var_num_s_2_71828182846_, self, Counter_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Counter::tag_s_2_71828182846_, Counter::var_num_s_2_71828182846_, sizeof(Counter), Counter_F__placement_new__, Counter_F__placement_del__, __hercules_module_ctx);
    Counter_SharedView self_view((Counter*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Counter::function_table_s_2_71828182846_;
    Counter__F___init__(self_view,  init_value,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue Counter::__init__(int64_t init_value, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
  this->value = init_value;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:30
  return (None);
}

HERCULES_DLL RTValue Counter__F___init__(const Counter_SharedView& self, int64_t init_value, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
  return (self->__init__(init_value, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
}

int Counter__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "init_value"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
    auto ret = Counter__F___init__(Counter_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 29, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Counter__F___init__(Counter_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 29, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 29, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
    }
  }

  return 0;
}

int Counter__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"init_value"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
    auto ret = Counter__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 29, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Counter__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 29, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 29, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:29
    }
  }

  return 0;
}

int64_t Counter::minus(int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
  this->value = (this->value - a);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:33
  return (this->value);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:34
}

HERCULES_DLL int64_t Counter__F_minus(const Counter_SharedView& self, int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
  return (self->minus(a));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
}

int Counter__F_minus__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("minus", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
    auto ret = Counter__F_minus(Counter_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 32, in minus\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Counter__F_minus(Counter_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 32, in minus\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 32, in minus\n", "minus() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:32
    }
  }

  return 0;
}

int64_t Counter::add(int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
  this->value = (this->value + a);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:37
  return (this->value);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:38
}

HERCULES_DLL int64_t Counter__F_add(const Counter_SharedView& self, int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
  return (self->add(a));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
}

int Counter__F_add__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("add", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
    auto ret = Counter__F_add(Counter_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 36, in add\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Counter__F_add(Counter_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 36, in add\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 36, in add\n", "add() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:36
    }
  }

  return 0;
}

int64_t Counter::__call__(int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
  this->value = ((this->value * a) + a);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:41
  return (this->value);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:42
}

HERCULES_DLL int64_t Counter__F___call__(const Counter_SharedView& self, int64_t a) {  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
  return (self->__call__(a));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
}

int Counter__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
    auto ret = Counter__F___call__(Counter_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 40, in __call__\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Counter__F___call__(Counter_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 40, in __call__\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py\", line 40, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_tracing_class_method.py:40
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Counter[] = {
    (HerculesBackendPackedCFunc)Counter__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Counter__F___init____c_api,
    (HerculesBackendPackedCFunc)Counter__F_minus__c_api,
    (HerculesBackendPackedCFunc)Counter__F_add__c_api,
    (HerculesBackendPackedCFunc)Counter__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Counter = {
    "5\000Counter__F___init___wrapper\000Counter__F___init__\000Counter__F_minus\000Counter__F_add\000Counter__F___call__\000",    __hercules_func_array__Counter,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)Counter__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Counter__F_minus__c_api,
    (HerculesBackendPackedCFunc)Counter__F_add__c_api,
    (HerculesBackendPackedCFunc)Counter__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "4\000Counter__F___init___wrapper\000Counter__F_minus\000Counter__F_add\000Counter__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000Counter__F___init___wrapper\000Counter__F___init__\000";

} // extern C

