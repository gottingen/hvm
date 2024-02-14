#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ClassWithAttr;
namespace {
// User class forward declarations
struct ClassWithAttr;
struct ClassWithAttr_SharedView;

ClassWithAttr_SharedView ClassWithAttr__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int ClassWithAttr__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ClassWithAttr__F___init__(const ClassWithAttr_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int ClassWithAttr__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t ClassWithAttr__F___call__(const ClassWithAttr_SharedView& self);
int ClassWithAttr__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct ClassWithAttr : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ClassWithAttr"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ClassWithAttr::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"word2id", "offset", "k", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"word2id", 0}, 
      {"offset", 1}, 
      {"k", 2}, 
    };
    return __var_table_s__;
  }

  // member vars
  Dict word2id{ObjectPtr<Object>{nullptr}};
  int64_t offset;
  int64_t k;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return word2id; } break;
    case 1: { return offset; } break;
    case 2: { return k; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->word2id = HERCULES_TYPE_AS(val, Dict); } break;
    case 1: { this->offset = HERCULES_TYPE_AS(val, int64_t); } break;
    case 2: { this->k = HERCULES_TYPE_AS(val, int64_t); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__();
};

// flags for convert check
uint32_t ClassWithAttr::tag_s_2_71828182846_ = 9151900074367005622;
uint32_t ClassWithAttr::var_num_s_2_71828182846_ = 3;
string_view ClassWithAttr::class_name_s_2_71828182846_ = "ClassWithAttr";
IUserDataRoot::__FunctionTable__ ClassWithAttr::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ClassWithAttr, "ClassWithAttr");

struct ClassWithAttr_SharedView: public IUserDataSharedViewRoot {
  // member var
  ClassWithAttr *ptr;
  // constructor
  ClassWithAttr_SharedView(ClassWithAttr *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ClassWithAttr_SharedView(ClassWithAttr *ptr) : ptr(ptr) {}
  ClassWithAttr_SharedView() : ptr(nullptr) {}
  ClassWithAttr_SharedView(const hercules::runtime::Any& ref) : ClassWithAttr_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ClassWithAttr")) {}
  // UserDataRef
  ClassWithAttr_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ClassWithAttr"));
    if(!base_ud_ptr->isinstance_2_71828182846(ClassWithAttr::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ClassWithAttr' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ClassWithAttr*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ClassWithAttr* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ClassWithAttr_F__deleter__(ILightUserData* ptr) { delete static_cast<ClassWithAttr*>(ptr); }
void* ClassWithAttr_F__placement_new__(void* buf) { return new (buf) ClassWithAttr; }
void ClassWithAttr_F__placement_del__(ILightUserData* ptr) { static_cast<ClassWithAttr*>(ptr)->ClassWithAttr::~ClassWithAttr(); }
ClassWithAttr_SharedView ClassWithAttr__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ClassWithAttr)) {
    auto self = new ClassWithAttr;
    self->function_table_2_71828182846_ = &ClassWithAttr::function_table_s_2_71828182846_;
    ClassWithAttr__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(ClassWithAttr::tag_s_2_71828182846_, ClassWithAttr::var_num_s_2_71828182846_, self, ClassWithAttr_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ClassWithAttr::tag_s_2_71828182846_, ClassWithAttr::var_num_s_2_71828182846_, sizeof(ClassWithAttr), ClassWithAttr_F__placement_new__, ClassWithAttr_F__placement_del__, __hercules_module_ctx);
    ClassWithAttr_SharedView self_view((ClassWithAttr*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ClassWithAttr::function_table_s_2_71828182846_;
    ClassWithAttr__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue ClassWithAttr::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
  this->word2id = Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u0062", 1), (int64_t)2}, {unicode_view(U"\u0061", 1), (int64_t)1}});  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:40
  this->offset = (int64_t)10;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:41
  if (Kernel_bool::make(((bool)1))) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:42
    this->k = (int64_t)5;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:43
  }
  return (None);
}

HERCULES_DLL RTValue ClassWithAttr__F___init__(const ClassWithAttr_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
}

int ClassWithAttr__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
    auto ret = ClassWithAttr__F___init__(ClassWithAttr_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ClassWithAttr__F___init__(ClassWithAttr_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 39, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
    }
  }

  return 0;
}

int ClassWithAttr__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = ClassWithAttr__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 39, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:39
  }
  return 0;
}

int64_t ClassWithAttr::__call__() {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
  return ((((internal::TypeAsHelper<int64_t>::run(((this->word2id).get_item((unicode_view(U"\u0061", 1)))), __FILE__, __LINE__, "", "expect '(this->word2id).get_item((unicode_view(U\"\\u0061\", 1)))' is 'int64_t' type") + internal::TypeAsHelper<int64_t>::run(((this->word2id).get_item((unicode_view(U"\u0062", 1)))), __FILE__, __LINE__, "", "expect '(this->word2id).get_item((unicode_view(U\"\\u0062\", 1)))' is 'int64_t' type")) + this->offset) + this->k));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:46
}

HERCULES_DLL int64_t ClassWithAttr__F___call__(const ClassWithAttr_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
  return (self->__call__());  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
}

int ClassWithAttr__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__call__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
    auto ret = ClassWithAttr__F___call__(ClassWithAttr_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ClassWithAttr__F___call__(ClassWithAttr_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_class_basic.py\", line 45, in __call__\n", "__call__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_class_basic.py:45
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ClassWithAttr[] = {
    (HerculesBackendPackedCFunc)ClassWithAttr__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ClassWithAttr__F___init____c_api,
    (HerculesBackendPackedCFunc)ClassWithAttr__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ClassWithAttr = {
    "3\000ClassWithAttr__F___init___wrapper\000ClassWithAttr__F___init__\000ClassWithAttr__F___call__\000",    __hercules_func_array__ClassWithAttr,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ClassWithAttr__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ClassWithAttr__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000ClassWithAttr__F___init___wrapper\000ClassWithAttr__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000ClassWithAttr__F___init___wrapper\000ClassWithAttr__F___init__\000";

} // extern C

