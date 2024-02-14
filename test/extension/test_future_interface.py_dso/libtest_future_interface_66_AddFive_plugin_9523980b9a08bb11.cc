#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__AddFive;
namespace {
// User class forward declarations
struct AddFive;
struct AddFive_SharedView;

AddFive_SharedView AddFive__F___init___wrapper(const UserDataRef& op, void* handle_2_71828182846=((void*)(int64_t)0));
int AddFive__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue AddFive__F___init__(const AddFive_SharedView& self, const UserDataRef& op, void* handle_2_71828182846=((void*)(int64_t)0));
int AddFive__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t AddFive__F___call__(const AddFive_SharedView& self);
int AddFive__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct AddFive : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "AddFive"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {AddFive::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"_op", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"_op", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  UserDataRef _op;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return _op; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->_op = HERCULES_TYPE_AS(val, UserDataRef); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const UserDataRef& op, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__();
};

// flags for convert check
uint32_t AddFive::tag_s_2_71828182846_ = -1585553239558248069;
uint32_t AddFive::var_num_s_2_71828182846_ = 1;
string_view AddFive::class_name_s_2_71828182846_ = "AddFive";
IUserDataRoot::__FunctionTable__ AddFive::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__AddFive, "AddFive");

struct AddFive_SharedView: public IUserDataSharedViewRoot {
  // member var
  AddFive *ptr;
  // constructor
  AddFive_SharedView(AddFive *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  AddFive_SharedView(AddFive *ptr) : ptr(ptr) {}
  AddFive_SharedView() : ptr(nullptr) {}
  AddFive_SharedView(const hercules::runtime::Any& ref) : AddFive_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "AddFive")) {}
  // UserDataRef
  AddFive_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("AddFive"));
    if(!base_ud_ptr->isinstance_2_71828182846(AddFive::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'AddFive' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<AddFive*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  AddFive* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void AddFive_F__deleter__(ILightUserData* ptr) { delete static_cast<AddFive*>(ptr); }
void* AddFive_F__placement_new__(void* buf) { return new (buf) AddFive; }
void AddFive_F__placement_del__(ILightUserData* ptr) { static_cast<AddFive*>(ptr)->AddFive::~AddFive(); }
AddFive_SharedView AddFive__F___init___wrapper(const UserDataRef& op, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(AddFive)) {
    auto self = new AddFive;
    self->function_table_2_71828182846_ = &AddFive::function_table_s_2_71828182846_;
    AddFive__F___init__(self,  op,  handle_2_71828182846);
    UserDataRef self_ref(AddFive::tag_s_2_71828182846_, AddFive::var_num_s_2_71828182846_, self, AddFive_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(AddFive::tag_s_2_71828182846_, AddFive::var_num_s_2_71828182846_, sizeof(AddFive), AddFive_F__placement_new__, AddFive_F__placement_del__, __hercules_module_ctx);
    AddFive_SharedView self_view((AddFive*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &AddFive::function_table_s_2_71828182846_;
    AddFive__F___init__(self_view,  op,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue AddFive::__init__(const UserDataRef& op, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
  this->_op = std::move(op);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:69
  return (None);
}

HERCULES_DLL RTValue AddFive__F___init__(const AddFive_SharedView& self, const UserDataRef& op, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
  return (self->__init__(op, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
}

int AddFive__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "op"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
    auto ret = AddFive__F___init__(AddFive_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<UserDataRef>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 68, in __init__\n", "expect 'pos_args[1]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = AddFive__F___init__(AddFive_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<UserDataRef>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 68, in __init__\n", "expect 'args_t[1]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 68, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
    }
  }

  return 0;
}

int AddFive__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"op"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
    auto ret = AddFive__F___init___wrapper(internal::TypeAsHelper<UserDataRef>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 68, in __init__\n", "expect 'pos_args[0]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = AddFive__F___init___wrapper(internal::TypeAsHelper<UserDataRef>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 68, in __init__\n", "expect 'args_t[0]' is 'UserDataRef' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 68, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:68
    }
  }

  return 0;
}

int64_t AddFive::__call__() {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
  return (internal::TypeAsHelper<int64_t>::run((ArithOps::add((this->_op).generic_call({}), (int64_t)5)), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 72, in __call__\n", "expect 'ArithOps::add((this->_op).generic_call({}), (int64_t)5)' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:72
}

HERCULES_DLL int64_t AddFive__F___call__(const AddFive_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
}

int AddFive__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
    auto ret = AddFive__F___call__(AddFive_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = AddFive__F___call__(AddFive_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py\", line 71, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/extension/test_future_interface.py:71
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__AddFive[] = {
    (HerculesBackendPackedCFunc)AddFive__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)AddFive__F___init____c_api,
    (HerculesBackendPackedCFunc)AddFive__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__AddFive = {
    "3\000AddFive__F___init___wrapper\000AddFive__F___init__\000AddFive__F___call__\000",    __hercules_func_array__AddFive,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)AddFive__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)AddFive__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000AddFive__F___init___wrapper\000AddFive__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000AddFive__F___init___wrapper\000AddFive__F___init__\000";

} // extern C

