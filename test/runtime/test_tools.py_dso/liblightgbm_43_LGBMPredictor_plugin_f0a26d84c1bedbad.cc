#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LgbmModelTree;
extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LGBMPredictor;
namespace {
// User class forward declarations
struct LgbmModelTree;
struct LgbmModelTree_SharedView;

// User class forward declarations
struct LGBMPredictor;
struct LGBMPredictor_SharedView;

LgbmModelTree_SharedView LgbmModelTree__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int LgbmModelTree__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
LGBMPredictor_SharedView LGBMPredictor__F___init___wrapper(const unicode_view& fn_model, void* handle_2_71828182846=((void*)(int64_t)0));
int LGBMPredictor__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double sigmoid(double x, void* handle_2_71828182846=((void*)(int64_t)0));
int sigmoid__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue LgbmModelTree__F___init__(const LgbmModelTree_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int LgbmModelTree__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue LGBMPredictor__F___init__(const LGBMPredictor_SharedView& self, const unicode_view& fn_model, void* handle_2_71828182846=((void*)(int64_t)0));
int LGBMPredictor__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL double LGBMPredictor__F_eval(const LGBMPredictor_SharedView& self, const List& data);
int LGBMPredictor__F_eval__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List LGBMPredictor__F_predict(const LGBMPredictor_SharedView& self, const List& data_list);
int LGBMPredictor__F_predict__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL LgbmModelTree_SharedView LGBMPredictor__F__build_tree(const LGBMPredictor_SharedView& self, const List& tree_lines);
int LGBMPredictor__F__build_tree__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List LGBMPredictor__F___call__(const LGBMPredictor_SharedView& self, const List& data_list);
int LGBMPredictor__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct LgbmModelTree : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "LgbmModelTree"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {LgbmModelTree::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"split_feature", "left_child", "right_child", "threshold", "leaf_value", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"split_feature", 0}, 
      {"left_child", 1}, 
      {"right_child", 2}, 
      {"threshold", 3}, 
      {"leaf_value", 4}, 
    };
    return __var_table_s__;
  }

  // member vars
  FTList<int64_t> split_feature;
  FTList<int64_t> left_child;
  FTList<int64_t> right_child;
  FTList<double> threshold;
  FTList<double> leaf_value;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return split_feature; } break;
    case 1: { return left_child; } break;
    case 2: { return right_child; } break;
    case 3: { return threshold; } break;
    case 4: { return leaf_value; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->split_feature = HERCULES_TYPE_AS(val, FTList<int64_t>); } break;
    case 1: { this->left_child = HERCULES_TYPE_AS(val, FTList<int64_t>); } break;
    case 2: { this->right_child = HERCULES_TYPE_AS(val, FTList<int64_t>); } break;
    case 3: { this->threshold = HERCULES_TYPE_AS(val, FTList<double>); } break;
    case 4: { this->leaf_value = HERCULES_TYPE_AS(val, FTList<double>); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
};

// flags for convert check
uint32_t LgbmModelTree::tag_s_2_71828182846_ = -889248925948858277;
uint32_t LgbmModelTree::var_num_s_2_71828182846_ = 5;
string_view LgbmModelTree::class_name_s_2_71828182846_ = "LgbmModelTree";
IUserDataRoot::__FunctionTable__ LgbmModelTree::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__LgbmModelTree, "LgbmModelTree");

struct LgbmModelTree_SharedView: public IUserDataSharedViewRoot {
  // member var
  LgbmModelTree *ptr;
  // constructor
  LgbmModelTree_SharedView(LgbmModelTree *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  LgbmModelTree_SharedView(LgbmModelTree *ptr) : ptr(ptr) {}
  LgbmModelTree_SharedView() : ptr(nullptr) {}
  LgbmModelTree_SharedView(const hercules::runtime::Any& ref) : LgbmModelTree_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "LgbmModelTree")) {}
  // UserDataRef
  LgbmModelTree_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("LgbmModelTree"));
    if(!base_ud_ptr->isinstance_2_71828182846(LgbmModelTree::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'LgbmModelTree' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<LgbmModelTree*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  LgbmModelTree* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

struct LGBMPredictor : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "LGBMPredictor"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {LGBMPredictor::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"trees", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"trees", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  FTList<LgbmModelTree_SharedView> trees;

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return trees; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->trees = HERCULES_TYPE_AS(val, FTList<LgbmModelTree_SharedView>); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(const unicode_view& fn_model, void* handle_2_71828182846=((void*)(int64_t)0));
  virtual double eval(const List& data);
  virtual List predict(const List& data_list);
  virtual LgbmModelTree_SharedView _build_tree(const List& tree_lines);
  virtual List __call__(const List& data_list1);
};

// flags for convert check
uint32_t LGBMPredictor::tag_s_2_71828182846_ = 2175851255861411843;
uint32_t LGBMPredictor::var_num_s_2_71828182846_ = 1;
string_view LGBMPredictor::class_name_s_2_71828182846_ = "LGBMPredictor";
IUserDataRoot::__FunctionTable__ LGBMPredictor::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__LGBMPredictor, "LGBMPredictor");

struct LGBMPredictor_SharedView: public IUserDataSharedViewRoot {
  // member var
  LGBMPredictor *ptr;
  // constructor
  LGBMPredictor_SharedView(LGBMPredictor *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  LGBMPredictor_SharedView(LGBMPredictor *ptr) : ptr(ptr) {}
  LGBMPredictor_SharedView() : ptr(nullptr) {}
  LGBMPredictor_SharedView(const hercules::runtime::Any& ref) : LGBMPredictor_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "LGBMPredictor")) {}
  // UserDataRef
  LGBMPredictor_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("LGBMPredictor"));
    if(!base_ud_ptr->isinstance_2_71828182846(LGBMPredictor::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'LGBMPredictor' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<LGBMPredictor*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  LGBMPredictor* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void LgbmModelTree_F__deleter__(ILightUserData* ptr) { delete static_cast<LgbmModelTree*>(ptr); }
void* LgbmModelTree_F__placement_new__(void* buf) { return new (buf) LgbmModelTree; }
void LgbmModelTree_F__placement_del__(ILightUserData* ptr) { static_cast<LgbmModelTree*>(ptr)->LgbmModelTree::~LgbmModelTree(); }
LgbmModelTree_SharedView LgbmModelTree__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(LgbmModelTree)) {
    auto self = new LgbmModelTree;
    self->function_table_2_71828182846_ = &LgbmModelTree::function_table_s_2_71828182846_;
    LgbmModelTree__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(LgbmModelTree::tag_s_2_71828182846_, LgbmModelTree::var_num_s_2_71828182846_, self, LgbmModelTree_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(LgbmModelTree::tag_s_2_71828182846_, LgbmModelTree::var_num_s_2_71828182846_, sizeof(LgbmModelTree), LgbmModelTree_F__placement_new__, LgbmModelTree_F__placement_del__, __hercules_module_ctx);
    LgbmModelTree_SharedView self_view((LgbmModelTree*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &LgbmModelTree::function_table_s_2_71828182846_;
    LgbmModelTree__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

void LGBMPredictor_F__deleter__(ILightUserData* ptr) { delete static_cast<LGBMPredictor*>(ptr); }
void* LGBMPredictor_F__placement_new__(void* buf) { return new (buf) LGBMPredictor; }
void LGBMPredictor_F__placement_del__(ILightUserData* ptr) { static_cast<LGBMPredictor*>(ptr)->LGBMPredictor::~LGBMPredictor(); }
LGBMPredictor_SharedView LGBMPredictor__F___init___wrapper(const unicode_view& fn_model, void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(LGBMPredictor)) {
    auto self = new LGBMPredictor;
    self->function_table_2_71828182846_ = &LGBMPredictor::function_table_s_2_71828182846_;
    LGBMPredictor__F___init__(self,  fn_model,  handle_2_71828182846);
    UserDataRef self_ref(LGBMPredictor::tag_s_2_71828182846_, LGBMPredictor::var_num_s_2_71828182846_, self, LGBMPredictor_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(LGBMPredictor::tag_s_2_71828182846_, LGBMPredictor::var_num_s_2_71828182846_, sizeof(LGBMPredictor), LGBMPredictor_F__placement_new__, LGBMPredictor_F__placement_del__, __hercules_module_ctx);
    LGBMPredictor_SharedView self_view((LGBMPredictor*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &LGBMPredictor::function_table_s_2_71828182846_;
    LGBMPredictor__F___init__(self_view,  fn_model,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL double sigmoid(double x, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:26
  if ((Kernel_bool::make((((fabs(x) == std::numeric_limits<double>::infinity()) && !(x != x)))) || Kernel_bool::make(((x != x))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:27
    return (0.0000000000000000000e+00);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:28
  }
  if (Kernel_bool::make(((x < 0.0000000000000000000e+00)))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:29
    return ((1.0000000000000000000e+00 - ArithOps::div(1.0000000000000000000e+00, (1.0000000000000000000e+00 + exp(x)))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:30
  }
  return (ArithOps::div(1.0000000000000000000e+00, (1.0000000000000000000e+00 + exp((x * -1.0000000000000000000e+00)))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:31
}

int sigmoid__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"x"};
    KwargsUnpackHelper helper("sigmoid", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:26
    auto ret = sigmoid(internal::TypeAsHelper<double>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 26, in sigmoid\n", "expect 'pos_args[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = sigmoid(internal::TypeAsHelper<double>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 26, in sigmoid\n", "expect 'args_t[0]' is 'double' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 26, in sigmoid\n", "sigmoid() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:26
    }
  }

  return 0;
}

RTValue LgbmModelTree::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
  this->split_feature = Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{});  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:36
  this->left_child = Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{});  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:37
  this->right_child = Kernel_FTList::make<int64_t>(std::initializer_list<FTList<int64_t>::value_type>{});  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:38
  this->threshold = Kernel_FTList::make<double>(std::initializer_list<FTList<double>::value_type>{});  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:39
  this->leaf_value = Kernel_FTList::make<double>(std::initializer_list<FTList<double>::value_type>{});  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:40
  return (None);
}

HERCULES_DLL RTValue LgbmModelTree__F___init__(const LgbmModelTree_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
}

int LgbmModelTree__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
    auto ret = LgbmModelTree__F___init__(LgbmModelTree_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = LgbmModelTree__F___init__(LgbmModelTree_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 35, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
    }
  }

  return 0;
}

int LgbmModelTree__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = LgbmModelTree__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 35, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:35
  }
  return 0;
}

RTValue LGBMPredictor::__init__(const unicode_view& fn_model, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
  this->trees = Kernel_FTList::make<LgbmModelTree_SharedView>(std::initializer_list<FTList<LgbmModelTree_SharedView>::value_type>{});  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:45
  File fin = (kernel_file_open({(fn_model), (unicode_view(U"\u0072", 1)), (unicode_view(U"\u0075\u0074\u0066\u0038", 4))}));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:46
  List tree_lines = (Kernel_List::make());  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:47
  while ((bool)1) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:48
    (void)(tree_lines).clear();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:49
    while ((bool)1) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:50
      RTValue line = ((fin).Next());  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:51
      if (Kernel_bool::make((ArithOps::eq(line, unicode_view())))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:52
        break;
      }
      if (Kernel_bool::make((kernel_object___contains__(line, RTView(unicode_view(U"\u0054\u0072\u0065\u0065\u003D", 5)))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:54
        line = (fin).Next();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:55
        while (ArithOps::ne(kernel_object_strip(line, {}), unicode_view())) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:56
          (void)(tree_lines).append((line));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:57
          line = (fin).Next();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:58
        }
        break;
      }
    }
    if (Kernel_bool::make((((tree_lines).size() == (int64_t)0)))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:60
      break;
    }
    (void)(this->trees).append((this->_build_tree(tree_lines)));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:62
  }
  (void)(fin).close();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:63
  return (None);
}

HERCULES_DLL RTValue LGBMPredictor__F___init__(const LGBMPredictor_SharedView& self, const unicode_view& fn_model, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
  return (self->__init__(fn_model, handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
}

int LGBMPredictor__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "fn_model"};
    KwargsUnpackHelper helper("__init__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
    auto ret = LGBMPredictor__F___init__(LGBMPredictor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 44, in __init__\n", "expect 'pos_args[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LGBMPredictor__F___init__(LGBMPredictor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 44, in __init__\n", "expect 'args_t[1]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 44, in __init__\n", "__init__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
    }
  }

  return 0;
}

int LGBMPredictor__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"fn_model"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
    auto ret = LGBMPredictor__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 44, in __init__\n", "expect 'pos_args[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = LGBMPredictor__F___init___wrapper(internal::TypeAsHelper<unicode_view>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 44, in __init__\n", "expect 'args_t[0]' is 'py::str' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 44, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:44
    }
  }

  return 0;
}

double LGBMPredictor::eval(const List& data) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
  FTList<double> flat_data = ([this, data]() -> FTList<double> {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
    FTList<double> __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
    (void)(__reserved_list_comp_result).reserve(((data).size()));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
    {
      const List&__reserved_eval_cons_v10398_0 = data;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
      auto __reserved_iter_v27369_0 = __reserved_eval_cons_v10398_0.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
      auto __reserved_iter_end_v24634_0 = __reserved_eval_cons_v10398_0.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
      while ((__reserved_iter_v27369_0 != __reserved_iter_end_v24634_0)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
        double v = internal::TypeAsHelper<double>::run((*__reserved_iter_v27369_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 68, in eval\n", "expect 'the element in data' is 'double' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
        ++__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
        {
          (void)(__reserved_list_comp_result).append((v));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
  }());  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:68
  double s = (0.0000000000000000000e+00);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:69
  {
    FTList<LgbmModelTree_SharedView> const& __reserved_eval_cons_tree40161_0 = this->trees;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:70
    auto __reserved_iter_tree32739_0 = __reserved_eval_cons_tree40161_0.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:70
    auto __reserved_iter_end_tree25309_0 = __reserved_eval_cons_tree40161_0.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:70
    while ((__reserved_iter_tree32739_0 != __reserved_iter_end_tree25309_0)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:70
      LgbmModelTree_SharedView tree = *__reserved_iter_tree32739_0;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:70
      ++__reserved_iter_tree32739_0;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:70
      {
        int64_t node = ((int64_t)0);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:71
        while ((node >= (int64_t)0)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:72
          if (Kernel_bool::make((((flat_data).get_item(((tree->split_feature).get_item((node)))) <= (tree->threshold).get_item((node)))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:73
            node = (tree->left_child).get_item((node));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:74
          } else {
            node = (tree->right_child).get_item((node));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:76
          }
        }
        node = (~node);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:77
        s = (s + (tree->leaf_value).get_item((node)));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:78
      }
    }
  }
  return (sigmoid(s, this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:79
}

HERCULES_DLL double LGBMPredictor__F_eval(const LGBMPredictor_SharedView& self, const List& data) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
  return (self->eval(data));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
}

int LGBMPredictor__F_eval__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "data"};
    KwargsUnpackHelper helper("eval", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
    auto ret = LGBMPredictor__F_eval(LGBMPredictor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 65, in eval\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LGBMPredictor__F_eval(LGBMPredictor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 65, in eval\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 65, in eval\n", "eval() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:65
    }
  }

  return 0;
}

List LGBMPredictor::predict(const List& data_list) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
  List ret = (Kernel_List::make(std::initializer_list<List::value_type>{}));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:82
  {
    const List&__reserved_eval_cons_data4198_0 = data_list;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:83
    auto __reserved_iter_data21611_0 = __reserved_eval_cons_data4198_0.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:83
    auto __reserved_iter_end_data2105_0 = __reserved_eval_cons_data4198_0.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:83
    while ((__reserved_iter_data21611_0 != __reserved_iter_end_data2105_0)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:83
      List data = internal::TypeAsHelper<List>::run((*__reserved_iter_data21611_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 83, in predict\n", "expect 'the element in data_list' is 'List' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:83
      ++__reserved_iter_data21611_0;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:83
      {
        (void)(ret).append((RTValue(this->eval(data))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:84
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:85
}

HERCULES_DLL List LGBMPredictor__F_predict(const LGBMPredictor_SharedView& self, const List& data_list) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
  return (self->predict(data_list));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
}

int LGBMPredictor__F_predict__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "data_list"};
    KwargsUnpackHelper helper("predict", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
    auto ret = LGBMPredictor__F_predict(LGBMPredictor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 81, in predict\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LGBMPredictor__F_predict(LGBMPredictor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 81, in predict\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 81, in predict\n", "predict() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:81
    }
  }

  return 0;
}

LgbmModelTree_SharedView LGBMPredictor::_build_tree(const List& tree_lines) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
  LgbmModelTree_SharedView ret = (LgbmModelTree__F___init___wrapper(this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:88
  {
    const List&__reserved_eval_cons_line34973_0 = tree_lines;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:89
    auto __reserved_iter_line61663_0 = __reserved_eval_cons_line34973_0.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:89
    auto __reserved_iter_end_line18602_0 = __reserved_eval_cons_line34973_0.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:89
    while ((__reserved_iter_line61663_0 != __reserved_iter_end_line18602_0)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:89
      unicode_view line = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_line61663_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 89, in _build_tree\n", "expect 'the element in tree_lines' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:89
      ++__reserved_iter_line61663_0;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:89
      {
        List unpack_49819269 = (kernel_unicode_split(kernel_unicode_strip(line), unicode_view(U"\u003D", 1), (int64_t)-1));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:90
        if (!(((unpack_49819269).size() == (int64_t)2))) { THROW_PY_AssertionError("", "ValueError: values to unpack mismatch (expected 2)"); }
        Unicode key = (internal::TypeAsHelper<Unicode>::run(((unpack_49819269).get_item(((int64_t)0))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 90, in _build_tree\n", "expect '(unpack_49819269).get_item(((int64_t)0))' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:90
        Unicode value = (internal::TypeAsHelper<Unicode>::run(((unpack_49819269).get_item(((int64_t)1))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 90, in _build_tree\n", "expect '(unpack_49819269).get_item(((int64_t)1))' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:90
        List values = (kernel_unicode_split(GenericValueConverter<unicode_view>{}(value), unicode_view(U"\u0020", 1), (int64_t)-1));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:91
        if (Kernel_bool::make(((key == unicode_view(U"\u0073\u0070\u006C\u0069\u0074\u005F\u0066\u0065\u0061\u0074\u0075\u0072\u0065", 13))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:92
          {
            List const& __reserved_eval_cons_v10398_0 = values;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:93
            auto __reserved_iter_v27369_0 = __reserved_eval_cons_v10398_0.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:93
            auto __reserved_iter_end_v24634_0 = __reserved_eval_cons_v10398_0.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:93
            while ((__reserved_iter_v27369_0 != __reserved_iter_end_v24634_0)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:93
              unicode_view v = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_v27369_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 93, in _build_tree\n", "expect 'the element in values' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:93
              ++__reserved_iter_v27369_0;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:93
              {
                (void)(ret->split_feature).append((Kernel_int64_t::make((v))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:94
              }
            }
          }
        } else {
          if (Kernel_bool::make(((key == unicode_view(U"\u006C\u0065\u0066\u0074\u005F\u0063\u0068\u0069\u006C\u0064", 10))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:95
            {
              List const& __reserved_eval_cons_v10398_01 = values;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:96
              auto __reserved_iter_v27369_01 = __reserved_eval_cons_v10398_01.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:96
              auto __reserved_iter_end_v24634_01 = __reserved_eval_cons_v10398_01.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:96
              while ((__reserved_iter_v27369_01 != __reserved_iter_end_v24634_01)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:96
                unicode_view v1 = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_v27369_01), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 96, in _build_tree\n", "expect 'the element in values' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:96
                ++__reserved_iter_v27369_01;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:96
                {
                  (void)(ret->left_child).append((Kernel_int64_t::make((v1))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:97
                }
              }
            }
          } else {
            if (Kernel_bool::make(((key == unicode_view(U"\u0072\u0069\u0067\u0068\u0074\u005F\u0063\u0068\u0069\u006C\u0064", 11))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:98
              {
                List const& __reserved_eval_cons_v10398_02 = values;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:99
                auto __reserved_iter_v27369_02 = __reserved_eval_cons_v10398_02.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:99
                auto __reserved_iter_end_v24634_02 = __reserved_eval_cons_v10398_02.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:99
                while ((__reserved_iter_v27369_02 != __reserved_iter_end_v24634_02)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:99
                  unicode_view v2 = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_v27369_02), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 99, in _build_tree\n", "expect 'the element in values' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:99
                  ++__reserved_iter_v27369_02;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:99
                  {
                    (void)(ret->right_child).append((Kernel_int64_t::make((v2))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:100
                  }
                }
              }
            } else {
              if (Kernel_bool::make(((key == unicode_view(U"\u0074\u0068\u0072\u0065\u0073\u0068\u006F\u006C\u0064", 9))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:101
                {
                  List const& __reserved_eval_cons_v10398_03 = values;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:102
                  auto __reserved_iter_v27369_03 = __reserved_eval_cons_v10398_03.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:102
                  auto __reserved_iter_end_v24634_03 = __reserved_eval_cons_v10398_03.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:102
                  while ((__reserved_iter_v27369_03 != __reserved_iter_end_v24634_03)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:102
                    unicode_view v3 = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_v27369_03), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 102, in _build_tree\n", "expect 'the element in values' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:102
                    ++__reserved_iter_v27369_03;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:102
                    {
                      (void)(ret->threshold).append((Kernel_double::make((v3))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:103
                    }
                  }
                }
              } else {
                if (Kernel_bool::make(((key == unicode_view(U"\u006C\u0065\u0061\u0066\u005F\u0076\u0061\u006C\u0075\u0065", 10))))) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:104
                  {
                    List const& __reserved_eval_cons_v10398_04 = values;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:105
                    auto __reserved_iter_v27369_04 = __reserved_eval_cons_v10398_04.begin();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:105
                    auto __reserved_iter_end_v24634_04 = __reserved_eval_cons_v10398_04.end();  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:105
                    while ((__reserved_iter_v27369_04 != __reserved_iter_end_v24634_04)) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:105
                      unicode_view v4 = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_v27369_04), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 105, in _build_tree\n", "expect 'the element in values' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:105
                      ++__reserved_iter_v27369_04;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:105
                      {
                        (void)(ret->leaf_value).append((Kernel_double::make((v4))));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:106
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (ret);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:107
}

HERCULES_DLL LgbmModelTree_SharedView LGBMPredictor__F__build_tree(const LGBMPredictor_SharedView& self, const List& tree_lines) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
  return (self->_build_tree(tree_lines));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
}

int LGBMPredictor__F__build_tree__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "tree_lines"};
    KwargsUnpackHelper helper("_build_tree", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
    auto ret = LGBMPredictor__F__build_tree(LGBMPredictor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 87, in _build_tree\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
    (ret.operator RTValue()).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LGBMPredictor__F__build_tree(LGBMPredictor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 87, in _build_tree\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
        (ret.operator RTValue()).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 87, in _build_tree\n", "_build_tree() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:87
    }
  }

  return 0;
}

List LGBMPredictor::__call__(const List& data_list) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
  return (this->predict(data_list));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:110
}

HERCULES_DLL List LGBMPredictor__F___call__(const LGBMPredictor_SharedView& self, const List& data_list) {  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
  return (self->__call__(data_list));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
}

int LGBMPredictor__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "data_list"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
    auto ret = LGBMPredictor__F___call__(LGBMPredictor_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 109, in __call__\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = LGBMPredictor__F___call__(LGBMPredictor_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 109, in __call__\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py\", line 109, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/python/hvm/tools/lightgbm.py:109
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__LGBMPredictor[] = {
    (HerculesBackendPackedCFunc)LGBMPredictor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F___init____c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F_eval__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F_predict__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F__build_tree__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LGBMPredictor = {
    "6\000LGBMPredictor__F___init___wrapper\000LGBMPredictor__F___init__\000LGBMPredictor__F_eval\000LGBMPredictor__F_predict\000LGBMPredictor__F__build_tree\000LGBMPredictor__F___call__\000",    __hercules_func_array__LGBMPredictor,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__LgbmModelTree[] = {
    (HerculesBackendPackedCFunc)LgbmModelTree__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LgbmModelTree__F___init____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__LgbmModelTree = {
    "2\000LgbmModelTree__F___init___wrapper\000LgbmModelTree__F___init__\000",    __hercules_func_array__LgbmModelTree,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)LgbmModelTree__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F_eval__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F_predict__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F__build_tree__c_api,
    (HerculesBackendPackedCFunc)LGBMPredictor__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "6\000LgbmModelTree__F___init___wrapper\000LGBMPredictor__F___init___wrapper\000LGBMPredictor__F_eval\000LGBMPredictor__F_predict\000LGBMPredictor__F__build_tree\000LGBMPredictor__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "5\000LgbmModelTree__F___init___wrapper\000LGBMPredictor__F___init___wrapper\000sigmoid\000LgbmModelTree__F___init__\000LGBMPredictor__F___init__\000";

} // extern C

