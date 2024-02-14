#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySortOp;
namespace {
// User class forward declarations
struct MySortOp;
struct MySortOp_SharedView;

MySortOp_SharedView MySortOp__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int MySortOp__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL bool my_cmp_func(int64_t a, int64_t b, void* handle_2_71828182846=((void*)(int64_t)0));
int my_cmp_func__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue MySortOp__F___init__(const MySortOp_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int MySortOp__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MySortOp__F_bubbleSortV1(const MySortOp_SharedView& self, const List& arr, const UserDataRef& cmp_func);
int MySortOp__F_bubbleSortV1__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MySortOp__F_bubbleSortV2(const MySortOp_SharedView& self, const List& arr, const UserDataRef& cmp_func);
int MySortOp__F_bubbleSortV2__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List MySortOp__F___call__(const MySortOp_SharedView& self, const List& arr);
int MySortOp__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct MySortOp : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "MySortOp"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {MySortOp::tag_s_2_71828182846_};
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
  virtual List bubbleSortV1(const List& arr, const UserDataRef& cmp_func);
  virtual List bubbleSortV2(const List& arr1, const UserDataRef& cmp_func1);
  virtual List __call__(const List& arr2);
};

// flags for convert check
uint32_t MySortOp::tag_s_2_71828182846_ = -489888613597749989;
uint32_t MySortOp::var_num_s_2_71828182846_ = 0;
string_view MySortOp::class_name_s_2_71828182846_ = "MySortOp";
IUserDataRoot::__FunctionTable__ MySortOp::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__MySortOp, "MySortOp");

struct MySortOp_SharedView: public IUserDataSharedViewRoot {
  // member var
  MySortOp *ptr;
  // constructor
  MySortOp_SharedView(MySortOp *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  MySortOp_SharedView(MySortOp *ptr) : ptr(ptr) {}
  MySortOp_SharedView() : ptr(nullptr) {}
  MySortOp_SharedView(const hercules::runtime::Any& ref) : MySortOp_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "MySortOp")) {}
  // UserDataRef
  MySortOp_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("MySortOp"));
    if(!base_ud_ptr->isinstance_2_71828182846(MySortOp::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'MySortOp' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<MySortOp*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  MySortOp* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void MySortOp_F__deleter__(ILightUserData* ptr) { delete static_cast<MySortOp*>(ptr); }
void* MySortOp_F__placement_new__(void* buf) { return new (buf) MySortOp; }
void MySortOp_F__placement_del__(ILightUserData* ptr) { static_cast<MySortOp*>(ptr)->MySortOp::~MySortOp(); }
MySortOp_SharedView MySortOp__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(MySortOp)) {
    auto self = new MySortOp;
    self->function_table_2_71828182846_ = &MySortOp::function_table_s_2_71828182846_;
    MySortOp__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(MySortOp::tag_s_2_71828182846_, MySortOp::var_num_s_2_71828182846_, self, MySortOp_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(MySortOp::tag_s_2_71828182846_, MySortOp::var_num_s_2_71828182846_, sizeof(MySortOp), MySortOp_F__placement_new__, MySortOp_F__placement_del__, __hercules_module_ctx);
    MySortOp_SharedView self_view((MySortOp*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &MySortOp::function_table_s_2_71828182846_;
    MySortOp__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

HERCULES_DLL bool my_cmp_func(int64_t a, int64_t b, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:26
  return ((a >= b));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:27
}

int my_cmp_func__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"a", "b"};
    KwargsUnpackHelper helper("my_cmp_func", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:26
    auto ret = my_cmp_func(internal::TypeAsHelper<int64_t>::run((pos_args[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 26, in my_cmp_func\n", "expect 'pos_args[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 26, in my_cmp_func\n", "expect 'pos_args[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:26
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = my_cmp_func(internal::TypeAsHelper<int64_t>::run((args_t[0]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 26, in my_cmp_func\n", "expect 'args_t[0]' is 'int64_t' type"), internal::TypeAsHelper<int64_t>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 26, in my_cmp_func\n", "expect 'args_t[1]' is 'int64_t' type"), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:26
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 26, in my_cmp_func\n", "my_cmp_func() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:26
    }
  }

  return 0;
}

RTValue MySortOp::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
  return (None);
}

HERCULES_DLL RTValue MySortOp__F___init__(const MySortOp_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
}

int MySortOp__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
    auto ret = MySortOp__F___init__(MySortOp_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = MySortOp__F___init__(MySortOp_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 227, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
    }
  }

  return 0;
}

int MySortOp__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = MySortOp__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 227, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:227
  }
  return 0;
}

List MySortOp::bubbleSortV1(const List& arr, const UserDataRef& cmp_func) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
  int64_t n = ((arr).size());  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:231
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < n; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:232
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:232
    int64_t j_stop_74024035 = (((n - i) - (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:233
    for (int64_t j_iter_ = (int64_t)0; j_iter_ < j_stop_74024035; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:233
      int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:233
      if (Kernel_bool::make(((cmp_func).generic_call({(((arr).get_item((j)))), (((arr).get_item(((j + (int64_t)1)))))})))) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:234
        RTValue tmp = (((arr).get_item((j))));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:235
        (void)(arr).set_item((j), (((arr).get_item(((j + (int64_t)1))))));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:236
        (void)(arr).set_item(((j + (int64_t)1)), (tmp));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:237
      }
    }
  }
  return (arr);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:239
}

HERCULES_DLL List MySortOp__F_bubbleSortV1(const MySortOp_SharedView& self, const List& arr, const UserDataRef& cmp_func) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
  return (self->bubbleSortV1(arr, cmp_func));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
}

int MySortOp__F_bubbleSortV1__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "arr", "cmp_func"};
    KwargsUnpackHelper helper("bubbleSortV1", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
    auto ret = MySortOp__F_bubbleSortV1(MySortOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 230, in bubbleSortV1\n", "expect 'pos_args[1]' is 'List' type"), internal::TypeAsHelper<UserDataRef>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 230, in bubbleSortV1\n", "expect 'pos_args[2]' is 'UserDataRef' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MySortOp__F_bubbleSortV1(MySortOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 230, in bubbleSortV1\n", "expect 'args_t[1]' is 'List' type"), internal::TypeAsHelper<UserDataRef>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 230, in bubbleSortV1\n", "expect 'args_t[2]' is 'UserDataRef' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 230, in bubbleSortV1\n", "bubbleSortV1() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:230
    }
  }

  return 0;
}

List MySortOp::bubbleSortV2(const List& arr, const UserDataRef& cmp_func) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
  int64_t n = ((arr).size());  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:242
  for (int64_t i_iter_ = (int64_t)0; i_iter_ < n; i_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:243
    int64_t i = i_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:243
    int64_t j_stop_49819269 = (((n - i) - (int64_t)1));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:244
    for (int64_t j_iter_ = (int64_t)0; j_iter_ < j_stop_49819269; j_iter_ += (int64_t)1) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:244
      int64_t j = j_iter_;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:244
      if (Kernel_bool::make(((cmp_func).generic_call({(((arr).get_item((j)))), (((arr).get_item(((j + (int64_t)1)))))})))) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:245
        RTValue tmp = (((arr).get_item((j))));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:246
        (void)(arr).set_item((j), (((arr).get_item(((j + (int64_t)1))))));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:247
        (void)(arr).set_item(((j + (int64_t)1)), (tmp));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:248
      }
    }
  }
  return (arr);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:250
}

HERCULES_DLL List MySortOp__F_bubbleSortV2(const MySortOp_SharedView& self, const List& arr, const UserDataRef& cmp_func) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
  return (self->bubbleSortV2(arr, cmp_func));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
}

int MySortOp__F_bubbleSortV2__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[3] {"self", "arr", "cmp_func"};
    KwargsUnpackHelper helper("bubbleSortV2", arg_names, 3, nullptr, 0);
    RTView pos_args[3];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
    auto ret = MySortOp__F_bubbleSortV2(MySortOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 241, in bubbleSortV2\n", "expect 'pos_args[1]' is 'List' type"), internal::TypeAsHelper<UserDataRef>::run((pos_args[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 241, in bubbleSortV2\n", "expect 'pos_args[2]' is 'UserDataRef' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 3: {
        auto ret = MySortOp__F_bubbleSortV2(MySortOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 241, in bubbleSortV2\n", "expect 'args_t[1]' is 'List' type"), internal::TypeAsHelper<UserDataRef>::run((args_t[2]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 241, in bubbleSortV2\n", "expect 'args_t[2]' is 'UserDataRef' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 241, in bubbleSortV2\n", "bubbleSortV2() takes 3 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:241
    }
  }

  return 0;
}

List MySortOp::__call__(const List& arr) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
  UserDataRef x = (MakeUserFunction(string_view("my_cmp_func", 11), (HerculesBackendPackedCFunc)my_cmp_func__c_api, this->session_handle_2_71828182846_));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:253
  (void)this->bubbleSortV2(arr, x);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:254
  return (this->bubbleSortV1(arr, MakeUserFunction(string_view("my_cmp_func", 11), (HerculesBackendPackedCFunc)my_cmp_func__c_api, this->session_handle_2_71828182846_)));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:255
}

HERCULES_DLL List MySortOp__F___call__(const MySortOp_SharedView& self, const List& arr) {  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
  return (self->__call__(arr));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
}

int MySortOp__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "arr"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
    auto ret = MySortOp__F___call__(MySortOp_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 252, in __call__\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = MySortOp__F___call__(MySortOp_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 252, in __call__\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_function.py\", line 252, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_function.py:252
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__MySortOp[] = {
    (HerculesBackendPackedCFunc)MySortOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySortOp__F___init____c_api,
    (HerculesBackendPackedCFunc)MySortOp__F_bubbleSortV1__c_api,
    (HerculesBackendPackedCFunc)MySortOp__F_bubbleSortV2__c_api,
    (HerculesBackendPackedCFunc)MySortOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__MySortOp = {
    "5\000MySortOp__F___init___wrapper\000MySortOp__F___init__\000MySortOp__F_bubbleSortV1\000MySortOp__F_bubbleSortV2\000MySortOp__F___call__\000",    __hercules_func_array__MySortOp,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)MySortOp__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)MySortOp__F_bubbleSortV1__c_api,
    (HerculesBackendPackedCFunc)MySortOp__F_bubbleSortV2__c_api,
    (HerculesBackendPackedCFunc)MySortOp__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "4\000MySortOp__F___init___wrapper\000MySortOp__F_bubbleSortV1\000MySortOp__F_bubbleSortV2\000MySortOp__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "3\000MySortOp__F___init___wrapper\000my_cmp_func\000MySortOp__F___init__\000";

} // extern C

