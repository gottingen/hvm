#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Pad;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__PadTest;
namespace {
// User class forward declarations
struct Pad;
struct Pad_SharedView;

// User class forward declarations
struct PadTest;
struct PadTest_SharedView;

Pad_SharedView Pad__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int Pad__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
PadTest_SharedView PadTest__F___init___wrapper(const List& padding, void* handle_2_71828182846=((void*)(int64_t)0));
int PadTest__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Pad__F___init__(const Pad_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int Pad__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List Pad__F___call__(const Pad_SharedView& self, const List& images, const List& top_pads);
int Pad__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue PadTest__F___init__(const PadTest_SharedView& self, const List& padding, void* handle_2_71828182846=((void*)(int64_t)0));
int PadTest__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List PadTest__F___call__(const PadTest_SharedView& self, const List& images);
int PadTest__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct Pad : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Pad"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Pad::tag_s_2_71828182846_};
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
  virtual List __call__(const List& images, const List& top_pads);
};

// flags for convert check
uint32_t Pad::tag_s_2_71828182846_ = -1386204115738918014;
uint32_t Pad::var_num_s_2_71828182846_ = 0;
string_view Pad::class_name_s_2_71828182846_ = "Pad";
IUserDataRoot::__FunctionTable__ Pad::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Pad, "Pad");

struct Pad_SharedView: public IUserDataSharedViewRoot {
  // member var
  Pad *ptr;
  // constructor
  Pad_SharedView(Pad *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Pad_SharedView(Pad *ptr) : ptr(ptr) {}
  Pad_SharedView() : ptr(nullptr) {}
  Pad_SharedView(const hercules::runtime::Any& ref) : Pad_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Pad")) {}
  // UserDataRef
  Pad_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Pad"));
    if(!base_ud_ptr->isinstance_2_71828182846(Pad::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Pad' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Pad*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Pad* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct PadTest : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "PadTest"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {PadTest::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"padding", "op", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"padding", 0}, 
      {"op", 1}, 
    };
    return __var_table_s__;
  }

  // member vars
  List padding{ObjectPtr<Object>{nullptr}};
  Pad_SharedView op;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return padding; } break;
    case 1: { return op.operator RTView(); } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->padding = HERCULES_TYPE_AS(val, List); } break;
    case 1: { this->op = static_cast<Pad_SharedView>(HERCULES_TYPE_AS_V2(val, UserDataRef, "Pad")); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const List& padding, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual List __call__(const List& images);
};

// flags for convert check
uint32_t PadTest::tag_s_2_71828182846_ = 8487980566750357702;
uint32_t PadTest::var_num_s_2_71828182846_ = 2;
string_view PadTest::class_name_s_2_71828182846_ = "PadTest";
IUserDataRoot::__FunctionTable__ PadTest::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__PadTest, "PadTest");

struct PadTest_SharedView: public IUserDataSharedViewRoot {
  // member var
  PadTest *ptr;
  // constructor
  PadTest_SharedView(PadTest *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  PadTest_SharedView(PadTest *ptr) : ptr(ptr) {}
  PadTest_SharedView() : ptr(nullptr) {}
  PadTest_SharedView(const hercules::runtime::Any& ref) : PadTest_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "PadTest")) {}
  // UserDataRef
  PadTest_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("PadTest"));
    if(!base_ud_ptr->isinstance_2_71828182846(PadTest::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'PadTest' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<PadTest*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  PadTest* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void Pad_F__deleter__(ILightUserData* ptr) { delete static_cast<Pad*>(ptr); }
void* Pad_F__placement_new__(void* buf) { return new (buf) Pad; }
void Pad_F__placement_del__(ILightUserData* ptr) { static_cast<Pad*>(ptr)->Pad::~Pad(); }
Pad_SharedView Pad__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Pad)) {
    auto self = new Pad;
    self->function_table_2_71828182846_ = &Pad::function_table_s_2_71828182846_;
    Pad__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(Pad::tag_s_2_71828182846_, Pad::var_num_s_2_71828182846_, self, Pad_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Pad::tag_s_2_71828182846_, Pad::var_num_s_2_71828182846_, sizeof(Pad), Pad_F__placement_new__, Pad_F__placement_del__, __hercules_module_ctx);
    Pad_SharedView self_view((Pad*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Pad::function_table_s_2_71828182846_;
    Pad__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void PadTest_F__deleter__(ILightUserData* ptr) { delete static_cast<PadTest*>(ptr); }
void* PadTest_F__placement_new__(void* buf) { return new (buf) PadTest; }
void PadTest_F__placement_del__(ILightUserData* ptr) { static_cast<PadTest*>(ptr)->PadTest::~PadTest(); }
PadTest_SharedView PadTest__F___init___wrapper(const List& padding, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(PadTest)) {
    auto self = new PadTest;
    self->function_table_2_71828182846_ = &PadTest::function_table_s_2_71828182846_;
    PadTest__F___init__(self,  padding,  handle_2_71828182846);
    UserDataRef self_ref(PadTest::tag_s_2_71828182846_, PadTest::var_num_s_2_71828182846_, self, PadTest_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(PadTest::tag_s_2_71828182846_, PadTest::var_num_s_2_71828182846_, sizeof(PadTest), PadTest_F__placement_new__, PadTest_F__placement_del__, __hercules_module_ctx);
    PadTest_SharedView self_view((PadTest*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &PadTest::function_table_s_2_71828182846_;
    PadTest__F___init__(self_view,  padding,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue Pad::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
  return (None);
}

HERCULES_DLL RTValue Pad__F___init__(const Pad_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
}

int Pad__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
    auto ret = Pad__F___init__(Pad_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Pad__F___init__(Pad_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 24, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
    }
  }

  return 0;
}

int Pad__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = Pad__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 24, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:24
  }
  return 0;
}

List Pad::__call__(const List& images, const List& top_pads) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
  return (images);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:30
}

HERCULES_DLL List Pad__F___call__(const Pad_SharedView& self, const List& images, const List& top_pads) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
  return (self->__call__(images, top_pads));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
}

int Pad__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "images", "top_pads"};
    KwargsUnpackHelper helper("__call__", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
    auto ret = Pad__F___call__(Pad_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 27, in __call__\n", "expect 'pos_args[1]' is 'List' type"), internal::TypeAsHelper<List>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 27, in __call__\n", "expect 'pos_args[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = Pad__F___call__(Pad_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 27, in __call__\n", "expect 'args_t[1]' is 'List' type"), internal::TypeAsHelper<List>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 27, in __call__\n", "expect 'args_t[2]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 27, in __call__\n", "__call__() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:27
    }
  }

  return 0;
}

RTValue PadTest::__init__(const List& padding, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
  this->padding = std::move(padding);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:35
  this->op = Pad__F___init___wrapper(this->session_handle_2_71828182846_);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:36
  return (None);
}

HERCULES_DLL RTValue PadTest__F___init__(const PadTest_SharedView& self, const List& padding, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
  return (self->__init__(padding, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
}

int PadTest__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "padding"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
    auto ret = PadTest__F___init__(PadTest_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 34, in __init__\n", "expect 'pos_args[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = PadTest__F___init__(PadTest_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 34, in __init__\n", "expect 'args_t[1]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 34, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
    }
  }

  return 0;
}

int PadTest__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"padding"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
    auto ret = PadTest__F___init___wrapper(internal::TypeAsHelper<List>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 34, in __init__\n", "expect 'pos_args[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = PadTest__F___init___wrapper(internal::TypeAsHelper<List>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 34, in __init__\n", "expect 'args_t[0]' is 'List' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 34, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:34
    }
  }

  return 0;
}

List PadTest::__call__(const List& images) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
  return (this->op->__call__(images, Kernel_List::make(std::initializer_list<List::value_type>{(internal::TypeAsHelper<int64_t>::run(((this->padding).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 39, in __call__\n", "expect '(this->padding).get_item(((int64_t)0))' is 'int64_t' type"))})));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:39
}

HERCULES_DLL List PadTest__F___call__(const PadTest_SharedView& self, const List& images) {  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
  return (self->__call__(images));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
}

int PadTest__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "images"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
    auto ret = PadTest__F___call__(PadTest_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 38, in __call__\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = PadTest__F___call__(PadTest_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 38, in __call__\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py\", line 38, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_ann_type_checker.py:38
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__PadTest[] = {
    (HerculesBackendPackedCFunc)PadTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)PadTest__F___init____c_api,
    (HerculesBackendPackedCFunc)PadTest__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__PadTest = {
    "3\000PadTest__F___init___wrapper\000PadTest__F___init__\000PadTest__F___call__\000",    __hercules_func_array__PadTest,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Pad[] = {
    (HerculesBackendPackedCFunc)Pad__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Pad__F___init____c_api,
    (HerculesBackendPackedCFunc)Pad__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Pad = {
    "3\000Pad__F___init___wrapper\000Pad__F___init__\000Pad__F___call__\000",    __hercules_func_array__Pad,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)Pad__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)PadTest__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)PadTest__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000Pad__F___init___wrapper\000PadTest__F___init___wrapper\000PadTest__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "4\000Pad__F___init___wrapper\000PadTest__F___init___wrapper\000Pad__F___init__\000PadTest__F___init__\000";

} // extern C

