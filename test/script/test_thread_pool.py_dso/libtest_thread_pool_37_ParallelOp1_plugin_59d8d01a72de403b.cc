#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ParallelOp1;
namespace {
// User class forward declarations
struct ParallelOp1;
struct ParallelOp1_SharedView;

ParallelOp1_SharedView ParallelOp1__F___init___wrapper(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
int ParallelOp1__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ParallelOp1__F___init__(const ParallelOp1_SharedView& self, int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846=((void*)(int64_t)0));
int ParallelOp1__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List ParallelOp1__F___call__(const ParallelOp1_SharedView& self, const UserDataRef& op, const List& inputs);
int ParallelOp1__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct ParallelOp1 : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ParallelOp1"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ParallelOp1::tag_s_2_71828182846_};
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
  virtual List __call__(const UserDataRef& op, const List& inputs);
};

// flags for convert check
uint32_t ParallelOp1::tag_s_2_71828182846_ = 7915968755504580266;
uint32_t ParallelOp1::var_num_s_2_71828182846_ = 1;
string_view ParallelOp1::class_name_s_2_71828182846_ = "ParallelOp1";
IUserDataRoot::__FunctionTable__ ParallelOp1::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ParallelOp1, "ParallelOp1");

struct ParallelOp1_SharedView: public IUserDataSharedViewRoot {
  // member var
  ParallelOp1 *ptr;
  // constructor
  ParallelOp1_SharedView(ParallelOp1 *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ParallelOp1_SharedView(ParallelOp1 *ptr) : ptr(ptr) {}
  ParallelOp1_SharedView() : ptr(nullptr) {}
  ParallelOp1_SharedView(const hercules::runtime::Any& ref) : ParallelOp1_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ParallelOp1")) {}
  // UserDataRef
  ParallelOp1_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ParallelOp1"));
    if(!base_ud_ptr->isinstance_2_71828182846(ParallelOp1::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ParallelOp1' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ParallelOp1*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ParallelOp1* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ParallelOp1_F__deleter__(ILightUserData* ptr) { delete static_cast<ParallelOp1*>(ptr); }
void* ParallelOp1_F__placement_new__(void* buf) { return new (buf) ParallelOp1; }
void ParallelOp1_F__placement_del__(ILightUserData* ptr) { static_cast<ParallelOp1*>(ptr)->ParallelOp1::~ParallelOp1(); }
ParallelOp1_SharedView ParallelOp1__F___init___wrapper(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ParallelOp1)) {
    auto self = new ParallelOp1;
    self->function_table_2_71828182846_ = &ParallelOp1::function_table_s_2_71828182846_;
    ParallelOp1__F___init__(self,  pool_size,  use_lockfree_pool,  handle_2_71828182846);
    UserDataRef self_ref(ParallelOp1::tag_s_2_71828182846_, ParallelOp1::var_num_s_2_71828182846_, self, ParallelOp1_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ParallelOp1::tag_s_2_71828182846_, ParallelOp1::var_num_s_2_71828182846_, sizeof(ParallelOp1), ParallelOp1_F__placement_new__, ParallelOp1_F__placement_del__, __hercules_module_ctx);
    ParallelOp1_SharedView self_view((ParallelOp1*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ParallelOp1::function_table_s_2_71828182846_;
    ParallelOp1__F___init__(self_view,  pool_size,  use_lockfree_pool,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue ParallelOp1::__init__(int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
  this->thread_pool = make_native_userdata(string_view("ThreadPoolExecutor", 18), pool_size, use_lockfree_pool);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:41
  return (None);
}

HERCULES_DLL RTValue ParallelOp1__F___init__(const ParallelOp1_SharedView& self, int64_t pool_size, bool use_lockfree_pool, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
  return (self->__init__(pool_size, use_lockfree_pool, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
}

int ParallelOp1__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "pool_size", "use_lockfree_pool"};
    KwargsUnpackHelper helper("__init__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
    auto ret = ParallelOp1__F___init__(ParallelOp1_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'pos_args[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = ParallelOp1__F___init__(ParallelOp1_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'args_t[2]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "__init__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
    }
  }

  return 0;
}

int ParallelOp1__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"pool_size", "use_lockfree_pool"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
    auto ret = ParallelOp1__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'pos_args[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = ParallelOp1__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<bool>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "expect 'args_t[1]' is 'bool' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 40, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:40
    }
  }

  return 0;
}

List ParallelOp1::__call__(const UserDataRef& op, const List& inputs) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
  return (internal::TypeAsHelper<List>::run(((this->thread_pool).generic_call_attr("ParallelFor", {(op), (inputs)})), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 45, in __call__\n", "expect '(this->thread_pool).generic_call_attr(\"ParallelFor\", {(op), (inputs)})' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:45
}

HERCULES_DLL List ParallelOp1__F___call__(const ParallelOp1_SharedView& self, const UserDataRef& op, const List& inputs) {  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
  return (self->__call__(op, inputs));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
}

int ParallelOp1__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "op", "inputs"};
    KwargsUnpackHelper helper("__call__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
    auto ret = ParallelOp1__F___call__(ParallelOp1_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<UserDataRef>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 44, in __call__\n", "expect 'pos_args[1]' is 'UserDataRef' type"), internal::TypeAsHelper<List>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 44, in __call__\n", "expect 'pos_args[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = ParallelOp1__F___call__(ParallelOp1_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<UserDataRef>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 44, in __call__\n", "expect 'args_t[1]' is 'UserDataRef' type"), internal::TypeAsHelper<List>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 44, in __call__\n", "expect 'args_t[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py\", line 44, in __call__\n", "__call__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_thread_pool.py:44
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ParallelOp1[] = {
    (HerculesBackendPackedCFunc)ParallelOp1__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ParallelOp1__F___init____c_api,
    (HerculesBackendPackedCFunc)ParallelOp1__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ParallelOp1 = {
    "3\000ParallelOp1__F___init___wrapper\000ParallelOp1__F___init__\000ParallelOp1__F___call__\000",    __hercules_func_array__ParallelOp1,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ParallelOp1__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ParallelOp1__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000ParallelOp1__F___init___wrapper\000ParallelOp1__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000ParallelOp1__F___init___wrapper\000ParallelOp1__F___init__\000";

} // extern C

