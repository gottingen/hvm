#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ClassWithFullTypedVar;
namespace {
// User class forward declarations
struct ClassWithFullTypedVar;
struct ClassWithFullTypedVar_SharedView;

ClassWithFullTypedVar_SharedView ClassWithFullTypedVar__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int ClassWithFullTypedVar__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue my_generic_set_var(void* handle_2_71828182846=((void*)(int64_t)0));
int my_generic_set_var__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue ClassWithFullTypedVar__F___init__(const ClassWithFullTypedVar_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int ClassWithFullTypedVar__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t ClassWithFullTypedVar__F_foo_sum(const ClassWithFullTypedVar_SharedView& self);
int ClassWithFullTypedVar__F_foo_sum__c_api(HerculesAny*, int, HerculesAny*, void*);
struct ClassWithFullTypedVar : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "ClassWithFullTypedVar"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {ClassWithFullTypedVar::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"b", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"b", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  FTList<int64_t> b;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return b; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->b = HERCULES_TYPE_AS(val, FTList<int64_t>); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t foo_sum();
};

// flags for convert check
uint32_t ClassWithFullTypedVar::tag_s_2_71828182846_ = -854313678133176192;
uint32_t ClassWithFullTypedVar::var_num_s_2_71828182846_ = 1;
string_view ClassWithFullTypedVar::class_name_s_2_71828182846_ = "ClassWithFullTypedVar";
IUserDataRoot::__FunctionTable__ ClassWithFullTypedVar::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__ClassWithFullTypedVar, "ClassWithFullTypedVar");

struct ClassWithFullTypedVar_SharedView: public IUserDataSharedViewRoot {
  // member var
  ClassWithFullTypedVar *ptr;
  // constructor
  ClassWithFullTypedVar_SharedView(ClassWithFullTypedVar *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  ClassWithFullTypedVar_SharedView(ClassWithFullTypedVar *ptr) : ptr(ptr) {}
  ClassWithFullTypedVar_SharedView() : ptr(nullptr) {}
  ClassWithFullTypedVar_SharedView(const hercules::runtime::Any& ref) : ClassWithFullTypedVar_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "ClassWithFullTypedVar")) {}
  // UserDataRef
  ClassWithFullTypedVar_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("ClassWithFullTypedVar"));
    if(!base_ud_ptr->isinstance_2_71828182846(ClassWithFullTypedVar::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'ClassWithFullTypedVar' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<ClassWithFullTypedVar*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  ClassWithFullTypedVar* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void ClassWithFullTypedVar_F__deleter__(ILightUserData* ptr) { delete static_cast<ClassWithFullTypedVar*>(ptr); }
void* ClassWithFullTypedVar_F__placement_new__(void* buf) { return new (buf) ClassWithFullTypedVar; }
void ClassWithFullTypedVar_F__placement_del__(ILightUserData* ptr) { static_cast<ClassWithFullTypedVar*>(ptr)->ClassWithFullTypedVar::~ClassWithFullTypedVar(); }
ClassWithFullTypedVar_SharedView ClassWithFullTypedVar__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(ClassWithFullTypedVar)) {
    auto self = new ClassWithFullTypedVar;
    self->function_table_2_71828182846_ = &ClassWithFullTypedVar::function_table_s_2_71828182846_;
    ClassWithFullTypedVar__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(ClassWithFullTypedVar::tag_s_2_71828182846_, ClassWithFullTypedVar::var_num_s_2_71828182846_, self, ClassWithFullTypedVar_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(ClassWithFullTypedVar::tag_s_2_71828182846_, ClassWithFullTypedVar::var_num_s_2_71828182846_, sizeof(ClassWithFullTypedVar), ClassWithFullTypedVar_F__placement_new__, ClassWithFullTypedVar_F__placement_del__, __hercules_module_ctx);
    ClassWithFullTypedVar_SharedView self_view((ClassWithFullTypedVar*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &ClassWithFullTypedVar::function_table_s_2_71828182846_;
    ClassWithFullTypedVar__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL RTValue my_generic_set_var(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:63
  ClassWithFullTypedVar_SharedView a = (ClassWithFullTypedVar__F___init___wrapper(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:64
  RTValue obj = ((a).operator RTValue());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:65
  FTList<int64_t> b = (Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{}));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:66
  (void)kernel_object___setattr__(obj, "b", RTView(b));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:67
  return (None);
}

int my_generic_set_var__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = my_generic_set_var(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:63
      RTValue(std::move(ret)).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py\", line 63, in my_generic_set_var\n", "my_generic_set_var() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:63
  }
  return 0;
}

RTValue ClassWithFullTypedVar::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
  this->b = Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{((int64_t)1), ((int64_t)2), ((int64_t)3)});  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:29
  return (None);
}

HERCULES_DLL RTValue ClassWithFullTypedVar__F___init__(const ClassWithFullTypedVar_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
}

int ClassWithFullTypedVar__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
    auto ret = ClassWithFullTypedVar__F___init__(ClassWithFullTypedVar_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ClassWithFullTypedVar__F___init__(ClassWithFullTypedVar_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py\", line 28, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
    }
  }

  return 0;
}

int ClassWithFullTypedVar__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = ClassWithFullTypedVar__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py\", line 28, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:28
  }
  return 0;
}

int64_t ClassWithFullTypedVar::foo_sum() {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
  int64_t s = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:32
  {
    FTList<int64_t> const& __reserved_eval_cons_i45344_0 = this->b;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:33
    auto __reserved_iter_i7935_0 = __reserved_eval_cons_i45344_0.begin();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:33
    auto __reserved_iter_end_i2112_0 = __reserved_eval_cons_i45344_0.end();  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:33
    while ((__reserved_iter_i7935_0 != __reserved_iter_end_i2112_0)) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:33
      int64_t i = *__reserved_iter_i7935_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:33
      ++__reserved_iter_i7935_0;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:33
      {
        s = (s + i);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:34
      }
    }
  }
  return (s);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:35
}

HERCULES_DLL int64_t ClassWithFullTypedVar__F_foo_sum(const ClassWithFullTypedVar_SharedView& self) {  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
  return (self->foo_sum());  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
}

int ClassWithFullTypedVar__F_foo_sum__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("foo_sum", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
    auto ret = ClassWithFullTypedVar__F_foo_sum(ClassWithFullTypedVar_SharedView(static_cast<const Any&>(pos_args[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = ClassWithFullTypedVar__F_foo_sum(ClassWithFullTypedVar_SharedView(static_cast<const Any&>(args_t[0])));  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py\", line 31, in foo_sum\n", "foo_sum() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ft_as_cls_var.py:31
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__ClassWithFullTypedVar[] = {
    (HerculesBackendPackedCFunc)ClassWithFullTypedVar__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)ClassWithFullTypedVar__F___init____c_api,
    (HerculesBackendPackedCFunc)ClassWithFullTypedVar__F_foo_sum__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ClassWithFullTypedVar = {
    "3\000ClassWithFullTypedVar__F___init___wrapper\000ClassWithFullTypedVar__F___init__\000ClassWithFullTypedVar__F_foo_sum\000",    __hercules_func_array__ClassWithFullTypedVar,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)ClassWithFullTypedVar__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)my_generic_set_var__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000ClassWithFullTypedVar__F___init___wrapper\000my_generic_set_var\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000ClassWithFullTypedVar__F___init___wrapper\000my_generic_set_var\000ClassWithFullTypedVar__F___init__\000";

} // extern C

