#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Text2Ids;
namespace {
// User class forward declarations
struct Text2Ids;
struct Text2Ids_SharedView;

Text2Ids_SharedView Text2Ids__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int Text2Ids__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Text2Ids__F___init__(const Text2Ids_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int Text2Ids__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t Text2Ids__F_lookup(const Text2Ids_SharedView& self, const unicode_view& word);
int Text2Ids__F_lookup__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL List Text2Ids__F_batch_lookup(const Text2Ids_SharedView& self, const List& words);
int Text2Ids__F_batch_lookup__c_api(HerculesAny*, int, HerculesAny*, void*);
struct Text2Ids : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Text2Ids"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Text2Ids::tag_s_2_71828182846_};
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
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t lookup(const unicode_view& word);
  virtual List batch_lookup(const List& words);
};

// flags for convert check
uint32_t Text2Ids::tag_s_2_71828182846_ = -750426226255734863;
uint32_t Text2Ids::var_num_s_2_71828182846_ = 1;
string_view Text2Ids::class_name_s_2_71828182846_ = "Text2Ids";
IUserDataRoot::__FunctionTable__ Text2Ids::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Text2Ids, "Text2Ids");

struct Text2Ids_SharedView: public IUserDataSharedViewRoot {
  // member var
  Text2Ids *ptr;
  // constructor
  Text2Ids_SharedView(Text2Ids *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Text2Ids_SharedView(Text2Ids *ptr) : ptr(ptr) {}
  Text2Ids_SharedView() : ptr(nullptr) {}
  Text2Ids_SharedView(const hercules::runtime::Any& ref) : Text2Ids_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Text2Ids")) {}
  // UserDataRef
  Text2Ids_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Text2Ids"));
    if(!base_ud_ptr->isinstance_2_71828182846(Text2Ids::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Text2Ids' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Text2Ids*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Text2Ids* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void Text2Ids_F__deleter__(ILightUserData* ptr) { delete static_cast<Text2Ids*>(ptr); }
void* Text2Ids_F__placement_new__(void* buf) { return new (buf) Text2Ids; }
void Text2Ids_F__placement_del__(ILightUserData* ptr) { static_cast<Text2Ids*>(ptr)->Text2Ids::~Text2Ids(); }
Text2Ids_SharedView Text2Ids__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Text2Ids)) {
    auto self = new Text2Ids;
    self->function_table_2_71828182846_ = &Text2Ids::function_table_s_2_71828182846_;
    Text2Ids__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(Text2Ids::tag_s_2_71828182846_, Text2Ids::var_num_s_2_71828182846_, self, Text2Ids_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Text2Ids::tag_s_2_71828182846_, Text2Ids::var_num_s_2_71828182846_, sizeof(Text2Ids), Text2Ids_F__placement_new__, Text2Ids_F__placement_del__, __hercules_module_ctx);
    Text2Ids_SharedView self_view((Text2Ids*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Text2Ids::function_table_s_2_71828182846_;
    Text2Ids__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue Text2Ids::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
  this->table = Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u005B\u0055\u004E\u004B\u005D", 5), (int64_t)2}, {unicode_view(U"\u0077\u006F\u0072\u006C\u0064", 5), (int64_t)1}, {unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5), (int64_t)0}});  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:28
  return (None);
}

HERCULES_DLL RTValue Text2Ids__F___init__(const Text2Ids_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
}

int Text2Ids__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
    auto ret = Text2Ids__F___init__(Text2Ids_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Text2Ids__F___init__(Text2Ids_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 27, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
    }
  }

  return 0;
}

int Text2Ids__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = Text2Ids__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 27, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:27
  }
  return 0;
}

int64_t Text2Ids::lookup(const unicode_view& word) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
  return (internal::TypeAsHelper<int64_t>::run(((this->table).get_default((word), (RTValue((int64_t)2)))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 35, in lookup\n", "expect '(this->table).get_default((word), (RTValue((int64_t)2)))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:35
}

HERCULES_DLL int64_t Text2Ids__F_lookup(const Text2Ids_SharedView& self, const unicode_view& word) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
  return (self->lookup(word));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
}

int Text2Ids__F_lookup__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "word"};
    KwargsUnpackHelper helper("lookup", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
    auto ret = Text2Ids__F_lookup(Text2Ids_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 34, in lookup\n", "expect 'pos_args[1]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Text2Ids__F_lookup(Text2Ids_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 34, in lookup\n", "expect 'args_t[1]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 34, in lookup\n", "lookup() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:34
    }
  }

  return 0;
}

List Text2Ids::batch_lookup(const List& words) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
  return ([this, words]() -> List {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
    List __reserved_list_comp_result;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
    (void)(__reserved_list_comp_result).reserve(((words).size()));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
    {
      const List&__reserved_eval_cons_w10105_0 = words;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
      auto __reserved_iter_w25554_0 = __reserved_eval_cons_w10105_0.begin();  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
      auto __reserved_iter_end_w36285_0 = __reserved_eval_cons_w10105_0.end();  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
      while ((__reserved_iter_w25554_0 != __reserved_iter_end_w36285_0)) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
        unicode_view w = internal::TypeAsHelper<unicode_view>::run((*__reserved_iter_w25554_0), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 38, in batch_lookup\n", "expect 'the element in words' is 'py::str' type");  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
        ++__reserved_iter_w25554_0;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
        {
          (void)(__reserved_list_comp_result).append((RTValue(this->lookup(w))));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
        }
      }
    }
    return (__reserved_list_comp_result);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
  }());  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:38
}

HERCULES_DLL List Text2Ids__F_batch_lookup(const Text2Ids_SharedView& self, const List& words) {  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
  return (self->batch_lookup(words));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
}

int Text2Ids__F_batch_lookup__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "words"};
    KwargsUnpackHelper helper("batch_lookup", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
    auto ret = Text2Ids__F_batch_lookup(Text2Ids_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<List>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 37, in batch_lookup\n", "expect 'pos_args[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Text2Ids__F_batch_lookup(Text2Ids_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<List>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 37, in batch_lookup\n", "expect 'args_t[1]' is 'List' type"));  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/trace/test_text2id.py\", line 37, in batch_lookup\n", "batch_lookup() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/trace/test_text2id.py:37
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Text2Ids[] = {
    (HerculesBackendPackedCFunc)Text2Ids__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Text2Ids__F___init____c_api,
    (HerculesBackendPackedCFunc)Text2Ids__F_lookup__c_api,
    (HerculesBackendPackedCFunc)Text2Ids__F_batch_lookup__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Text2Ids = {
    "4\000Text2Ids__F___init___wrapper\000Text2Ids__F___init__\000Text2Ids__F_lookup\000Text2Ids__F_batch_lookup\000",    __hercules_func_array__Text2Ids,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)Text2Ids__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Text2Ids__F_lookup__c_api,
    (HerculesBackendPackedCFunc)Text2Ids__F_batch_lookup__c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "3\000Text2Ids__F___init___wrapper\000Text2Ids__F_lookup\000Text2Ids__F_batch_lookup\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000Text2Ids__F___init___wrapper\000Text2Ids__F___init__\000";

} // extern C

