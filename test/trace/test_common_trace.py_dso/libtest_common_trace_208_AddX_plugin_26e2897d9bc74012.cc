#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__AddX;
namespace {
// User class forward declarations
struct AddX;
struct AddX_SharedView;

AddX_SharedView AddX__F___init___wrapper(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int AddX__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue AddX__F___init__(const AddX_SharedView& self, int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
int AddX__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t AddX__F_add(const AddX_SharedView& self, int64_t x);
int AddX__F_add__c_api(HerculesAny*, int, HerculesAny*, void*);
struct AddX : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "AddX"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {AddX::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"_x", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"_x", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  int64_t _x;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return _x; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->_x = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(int64_t x, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t add(int64_t x1);
};

// flags for convert check
uint32_t AddX::tag_s_2_71828182846_ = 9012775308307970432;
uint32_t AddX::var_num_s_2_71828182846_ = 1;
string_view AddX::class_name_s_2_71828182846_ = "AddX";
IUserDataRoot::__FunctionTable__ AddX::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__AddX, "AddX");

struct AddX_SharedView: public IUserDataSharedViewRoot {
  // member var
  AddX *ptr;
  // constructor
  AddX_SharedView(AddX *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  AddX_SharedView(AddX *ptr) : ptr(ptr) {}
  AddX_SharedView() : ptr(nullptr) {}
  AddX_SharedView(const hercules::runtime::Any& ref) : AddX_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "AddX")) {}
  // UserDataRef
  AddX_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("AddX"));
    if(!base_ud_ptr->isinstance_2_71828182846(AddX::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'AddX' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<AddX*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  AddX* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void AddX_F__deleter__(ILightUserData* ptr) { delete static_cast<AddX*>(ptr); }
void* AddX_F__placement_new__(void* buf) { return new (buf) AddX; }
void AddX_F__placement_del__(ILightUserData* ptr) { static_cast<AddX*>(ptr)->AddX::~AddX(); }
AddX_SharedView AddX__F___init___wrapper(int64_t x, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(AddX)) {
    auto self = new AddX;
    self->function_table_2_71828182846_ = &AddX::function_table_s_2_71828182846_;
    AddX__F___init__(self,  x,  handle_2_71828182846);
    UserDataRef self_ref(AddX::tag_s_2_71828182846_, AddX::var_num_s_2_71828182846_, self, AddX_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(AddX::tag_s_2_71828182846_, AddX::var_num_s_2_71828182846_, sizeof(AddX), AddX_F__placement_new__, AddX_F__placement_del__, __hercules_module_ctx);
    AddX_SharedView self_view((AddX*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &AddX::function_table_s_2_71828182846_;
    AddX__F___init__(self_view,  x,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue AddX::__init__(int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
  this->_x = x;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:210
  return (None);
}

HERCULES_DLL RTValue AddX__F___init__(const AddX_SharedView& self, int64_t x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
  return (self->__init__(x, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
}

int AddX__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "x"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
    auto ret = AddX__F___init__(AddX_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 209, in __init__\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = AddX__F___init__(AddX_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 209, in __init__\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 209, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
    }
  }

  return 0;
}

int AddX__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
    auto ret = AddX__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 209, in __init__\n", "expect 'pos_args[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = AddX__F___init___wrapper(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 209, in __init__\n", "expect 'args_t[0]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 209, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:209
    }
  }

  return 0;
}

int64_t AddX::add(int64_t x) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
  return ((this->_x + x));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:213
}

HERCULES_DLL int64_t AddX__F_add(const AddX_SharedView& self, int64_t x) {  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
  return (self->add(x));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
}

int AddX__F_add__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "x"};
    KwargsUnpackHelper helper("add", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
    auto ret = AddX__F_add(AddX_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 212, in add\n", "expect 'pos_args[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = AddX__F_add(AddX_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 212, in add\n", "expect 'args_t[1]' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py\", line 212, in add\n", "add() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_common_trace.py:212
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__AddX[] = {
    (HerculesBackendPackedCFunc)AddX__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)AddX__F___init____c_api,
    (HerculesBackendPackedCFunc)AddX__F_add__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__AddX = {
    "3\000AddX__F___init___wrapper\000AddX__F___init__\000AddX__F_add\000",    __hercules_func_array__AddX,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)AddX__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)AddX__F_add__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000AddX__F___init___wrapper\000AddX__F_add\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000AddX__F___init___wrapper\000AddX__F___init__\000";

} // extern C

