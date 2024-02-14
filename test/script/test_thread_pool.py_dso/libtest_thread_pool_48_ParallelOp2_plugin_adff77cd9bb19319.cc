#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Op2;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ParallelOp2;
namespace {
// User class forward declarations
struct Op2;
struct Op2_SharedView;

// User class forward declarations
struct ParallelOp2;
struct ParallelOp2_SharedView;

Op2_SharedView Op2__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int Op2__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
ParallelOp2_SharedView ParallelOp2__F___init___wrapper(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
int ParallelOp2__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Op2__F___init__(const Op2_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int Op2__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double Op2__F___call__(const Op2_SharedView& self, double a);
int Op2__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ParallelOp2__F___init__(const ParallelOp2_SharedView& self, int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
int ParallelOp2__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List ParallelOp2__F___call__(const ParallelOp2_SharedView& self, const Op2_SharedView& op, const List& inputs);
int ParallelOp2__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct Op2 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Op2"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Op2::tag_s_2_71828182846_};
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
  virtual double __call__(double a);
};

// flags for convert check
uint32_t Op2::tag_s_2_71828182846_ = 4434096176335280195;
uint32_t Op2::var_num_s_2_71828182846_ = 0;
string_view Op2::class_name_s_2_71828182846_ = "Op2";
IUserDataRoot::__FunctionTable__ Op2::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Op2, "Op2");

struct Op2_SharedView: public IUserDataSharedViewRoot {
  // member var
  Op2 *ptr;
  // constructor
  Op2_SharedView(Op2 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Op2_SharedView(Op2 *ptr) : ptr(ptr) {}
  Op2_SharedView() : ptr(nullptr) {}
  Op2_SharedView(const hercules::runtime::Any& ref) : Op2_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Op2")) {}
  // UserDataRef
  Op2_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Op2"));
    if(!base_ud_ptr->isinstance_2_71828182846(Op2::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Op2' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Op2*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Op2* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct ParallelOp2 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ParallelOp2"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ParallelOp2::tag_s_2_71828182846_};
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
  virtual List __call__(const Op2_SharedView& op, const List& inputs);
};

// flags for convert check
uint32_t ParallelOp2::tag_s_2_71828182846_ = -2676937127200155316;
uint32_t ParallelOp2::var_num_s_2_71828182846_ = 1;
string_view ParallelOp2::class_name_s_2_71828182846_ = "ParallelOp2";
IUserDataRoot::__FunctionTable__ ParallelOp2::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ParallelOp2, "ParallelOp2");

struct ParallelOp2_SharedView: public IUserDataSharedViewRoot {
  // member var
  ParallelOp2 *ptr;
  // constructor
  ParallelOp2_SharedView(ParallelOp2 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ParallelOp2_SharedView(ParallelOp2 *ptr) : ptr(ptr) {}
  ParallelOp2_SharedView() : ptr(nullptr) {}
  ParallelOp2_SharedView(const hercules::runtime::Any& ref) : ParallelOp2_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ParallelOp2")) {}
  // UserDataRef
  ParallelOp2_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ParallelOp2"));
    if(!base_ud_ptr->isinstance_2_71828182846(ParallelOp2::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ParallelOp2' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ParallelOp2*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ParallelOp2* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void Op2_F__deleter__(ILightUserData* ptr) { delete static_cast<Op2*>(ptr); }
void* Op2_F__placement_new__(void* buf) { return new (buf) Op2; }
void Op2_F__placement_del__(ILightUserData* ptr) { static_cast<Op2*>(ptr)->Op2::~Op2(); }
Op2_SharedView Op2__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Op2)) {
    auto self = new Op2;
    self->function_table_2_71828182846_ = &Op2::function_table_s_2_71828182846_;
    Op2__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(Op2::tag_s_2_71828182846_, Op2::var_num_s_2_71828182846_, self, Op2_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Op2::tag_s_2_71828182846_, Op2::var_num_s_2_71828182846_, sizeof(Op2), Op2_F__placement_new__, Op2_F__placement_del__, __hercules_module_ctx);
    Op2_SharedView self_view((Op2*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Op2::function_table_s_2_71828182846_;
    Op2__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void ParallelOp2_F__deleter__(ILightUserData* ptr) { delete static_cast<ParallelOp2*>(ptr); }
void* ParallelOp2_F__placement_new__(void* buf) { return new (buf) ParallelOp2; }
void ParallelOp2_F__placement_del__(ILightUserData* ptr) { static_cast<ParallelOp2*>(ptr)->ParallelOp2::~ParallelOp2(); }
ParallelOp2_SharedView ParallelOp2__F___init___wrapper(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ParallelOp2)) {
    auto self = new ParallelOp2;
    self->function_table_2_71828182846_ = &ParallelOp2::function_table_s_2_71828182846_;
    ParallelOp2__F___init__(self,  pool_size,  use_lockfree_pool,  handle_2_71828182846);
    UserDataRef self_ref(ParallelOp2::tag_s_2_71828182846_, ParallelOp2::var_num_s_2_71828182846_, self, ParallelOp2_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ParallelOp2::tag_s_2_71828182846_, ParallelOp2::var_num_s_2_71828182846_, sizeof(ParallelOp2), ParallelOp2_F__placement_new__, ParallelOp2_F__placement_del__, __hercules_module_ctx);
    ParallelOp2_SharedView self_view((ParallelOp2*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ParallelOp2::function_table_s_2_71828182846_;
    ParallelOp2__F___init__(self_view,  pool_size,  use_lockfree_pool,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue Op2::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
  return (None);
}

HERCULES_DLL RTValue Op2__F___init__(const Op2_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
}

int Op2__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
    auto ret = Op2__F___init__(Op2_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Op2__F___init__(Op2_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 30, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
    }
  }

  return 0;
}

int Op2__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = Op2__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 30, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:30
  }
  return 0;
}

double Op2::__call__(double a) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
  return ((2.0000000000000000000e+00 * a));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:34
}

HERCULES_DLL double Op2__F___call__(const Op2_SharedView& self, double a) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
  return (self->__call__(a));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
}

int Op2__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "a"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
    auto ret = Op2__F___call__(Op2_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<double>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 33, in __call__\n", "expect 'pos_args[1]' is 'double' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Op2__F___call__(Op2_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<double>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 33, in __call__\n", "expect 'args_t[1]' is 'double' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 33, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:33
    }
  }

  return 0;
}

RTValue ParallelOp2::__init__(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
  this->thread_pool = make_native_userdata(string_view("ThreadPoolExecutor", 18), pool_size, use_lockfree_pool);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:52
  return (None);
}

HERCULES_DLL RTValue ParallelOp2__F___init__(const ParallelOp2_SharedView& self, int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
  return (self->__init__(pool_size, use_lockfree_pool, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
}

int ParallelOp2__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "pool_size", "use_lockfree_pool"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
    auto ret = ParallelOp2__F___init__(ParallelOp2_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'pos_args[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = ParallelOp2__F___init__(ParallelOp2_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'args_t[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
    }
  }

  return 0;
}

int ParallelOp2__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"pool_size", "use_lockfree_pool"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
    auto ret = ParallelOp2__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'pos_args[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ParallelOp2__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "expect 'args_t[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 51, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:51
    }
  }

  return 0;
}

List ParallelOp2::__call__(const Op2_SharedView& op, const List& inputs) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
  return (internal::TypeAsHelper<List>::run(((this->thread_pool).generic_call_attr("ParallelFor", {(op), (inputs)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 56, in __call__\n", "expect '(this->thread_pool).generic_call_attr(\"ParallelFor\", {(op), (inputs)})' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:56
}

HERCULES_DLL List ParallelOp2__F___call__(const ParallelOp2_SharedView& self, const Op2_SharedView& op, const List& inputs) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
  return (self->__call__(op, inputs));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
}

int ParallelOp2__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "op", "inputs"};
    KwargsUnpackHelper helper("__call__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
    auto ret = ParallelOp2__F___call__(ParallelOp2_SharedView(static_cast<const Any&>(pos_args[0])), Op2_SharedView(static_cast<const Any&>(pos_args[1])), internal::TypeAsHelper<List>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 55, in __call__\n", "expect 'pos_args[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = ParallelOp2__F___call__(ParallelOp2_SharedView(static_cast<const Any&>(args_t[0])), Op2_SharedView(static_cast<const Any&>(args_t[1])), internal::TypeAsHelper<List>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 55, in __call__\n", "expect 'args_t[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 55, in __call__\n", "__call__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:55
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ParallelOp2[] = {
    (HerculesBackendPackedCFunc)ParallelOp2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ParallelOp2__F___init____c_api,
    (HerculesBackendPackedCFunc)ParallelOp2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ParallelOp2 = {
    "3\000ParallelOp2__F___init___wrapper\000ParallelOp2__F___init__\000ParallelOp2__F___call__\000",    __hercules_func_array__ParallelOp2,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Op2[] = {
    (HerculesBackendPackedCFunc)Op2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Op2__F___init____c_api,
    (HerculesBackendPackedCFunc)Op2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Op2 = {
    "3\000Op2__F___init___wrapper\000Op2__F___init__\000Op2__F___call__\000",    __hercules_func_array__Op2,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)Op2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ParallelOp2__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ParallelOp2__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000Op2__F___init___wrapper\000ParallelOp2__F___init___wrapper\000ParallelOp2__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000Op2__F___init___wrapper\000ParallelOp2__F___init___wrapper\000Op2__F___init__\000ParallelOp2__F___init__\000";

} // extern C

