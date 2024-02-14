#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LookupTable;
namespace {
// User class forward declarations
struct LookupTable;
struct LookupTable_SharedView;

LookupTable_SharedView LookupTable__F___init___wrapper(const RTView& table, void* handle_2_71828182846=((void*)(int64_t)0));
int LookupTable__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue LookupTable__F___init__(const LookupTable_SharedView& self, const RTView& table, void* handle_2_71828182846=((void*)(int64_t)0));
int LookupTable__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t LookupTable__F___call__(const LookupTable_SharedView& self, const unicode_view& x);
int LookupTable__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct LookupTable : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "LookupTable"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {LookupTable::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"table", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"table", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  Dict table{ObjectPtr<Object>{nullptr}};

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return table; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->table = HERCULES_TYPE_AS(val, Dict); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const RTView& table, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(const unicode_view& x);
};

// flags for convert check
uint32_t LookupTable::tag_s_2_71828182846_ = -9153292284337507176;
uint32_t LookupTable::var_num_s_2_71828182846_ = 1;
string_view LookupTable::class_name_s_2_71828182846_ = "LookupTable";
IUserDataRoot::__FunctionTable__ LookupTable::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__LookupTable, "LookupTable");

struct LookupTable_SharedView: public IUserDataSharedViewRoot {
  // member var
  LookupTable *ptr;
  // constructor
  LookupTable_SharedView(LookupTable *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  LookupTable_SharedView(LookupTable *ptr) : ptr(ptr) {}
  LookupTable_SharedView() : ptr(nullptr) {}
  LookupTable_SharedView(const hercules::runtime::Any& ref) : LookupTable_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "LookupTable")) {}
  // UserDataRef
  LookupTable_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("LookupTable"));
    if(!base_ud_ptr->isinstance_2_71828182846(LookupTable::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'LookupTable' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<LookupTable*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  LookupTable* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void LookupTable_F__deleter__(ILightUserData* ptr) { delete static_cast<LookupTable*>(ptr); }
void* LookupTable_F__placement_new__(void* buf) { return new (buf) LookupTable; }
void LookupTable_F__placement_del__(ILightUserData* ptr) { static_cast<LookupTable*>(ptr)->LookupTable::~LookupTable(); }
LookupTable_SharedView LookupTable__F___init___wrapper(const RTView& table, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(LookupTable)) {
    auto self = new LookupTable;
    self->function_table_2_71828182846_ = &LookupTable::function_table_s_2_71828182846_;
    LookupTable__F___init__(self,  table,  handle_2_71828182846);
    UserDataRef self_ref(LookupTable::tag_s_2_71828182846_, LookupTable::var_num_s_2_71828182846_, self, LookupTable_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(LookupTable::tag_s_2_71828182846_, LookupTable::var_num_s_2_71828182846_, sizeof(LookupTable), LookupTable_F__placement_new__, LookupTable_F__placement_del__, __hercules_module_ctx);
    LookupTable_SharedView self_view((LookupTable*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &LookupTable::function_table_s_2_71828182846_;
    LookupTable__F___init__(self_view,  table,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue LookupTable::__init__(const RTView& table, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
  this->table = internal::TypeAsHelper<Dict>::run((table), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 65, in __init__\n", "expect 'table' is 'Dict' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:65
  return (None);
}

HERCULES_DLL RTValue LookupTable__F___init__(const LookupTable_SharedView& self, const RTView& table, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
  return (self->__init__(table, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
}

int LookupTable__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "table"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
    auto ret = LookupTable__F___init__(LookupTable_SharedView(static_cast<const Any&>(pos_args[0])), (pos_args[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LookupTable__F___init__(LookupTable_SharedView(static_cast<const Any&>(args_t[0])), (args_t[1]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 64, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
    }
  }

  return 0;
}

int LookupTable__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"table"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
    auto ret = LookupTable__F___init___wrapper((pos_args[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = LookupTable__F___init___wrapper((args_t[0]), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 64, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:64
    }
  }

  return 0;
}

int64_t LookupTable::__call__(const unicode_view& x) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
  return (internal::TypeAsHelper<int64_t>::run(((this->table).get_default((x))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 68, in __call__\n", "expect '(this->table).get_default((x))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:68
}

HERCULES_DLL int64_t LookupTable__F___call__(const LookupTable_SharedView& self, const unicode_view& x) {  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
  return (self->__call__(x));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
}

int LookupTable__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "x"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
    auto ret = LookupTable__F___call__(LookupTable_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 67, in __call__\n", "expect 'pos_args[1]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LookupTable__F___call__(LookupTable_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 67, in __call__\n", "expect 'args_t[1]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py\", line 67, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_basic_pipeline.py:67
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__LookupTable[] = {
    (HerculesBackendPackedCFunc)LookupTable__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LookupTable__F___init____c_api,
    (HerculesBackendPackedCFunc)LookupTable__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LookupTable = {
    "3\000LookupTable__F___init___wrapper\000LookupTable__F___init__\000LookupTable__F___call__\000",    __hercules_func_array__LookupTable,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)LookupTable__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LookupTable__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000LookupTable__F___init___wrapper\000LookupTable__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000LookupTable__F___init___wrapper\000LookupTable__F___init__\000";

} // extern C

