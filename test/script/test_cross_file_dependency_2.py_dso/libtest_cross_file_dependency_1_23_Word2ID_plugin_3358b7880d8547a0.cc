#include "hercules/runtime/codegen_all_includes.h"
#include <math.h>

using namespace ::hercules::runtime;
extern "C" void* __hercules_module_ctx = NULL;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__;

extern "C" HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Word2ID;
namespace {
// User class forward declarations
struct Word2ID;
struct Word2ID_SharedView;

Word2ID_SharedView Word2ID__F___init___wrapper(void* handle_2_71828182846=((void*)(int64_t)0));
int Word2ID__F___init___wrapper__c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL RTValue Word2ID__F___init__(const Word2ID_SharedView& self, void* handle_2_71828182846=((void*)(int64_t)0));
int Word2ID__F___init____c_api(HerculesAny*, int, HerculesAny*, void*);
HERCULES_DLL int64_t Word2ID__F___call__(const Word2ID_SharedView& self, const unicode_view& w);
int Word2ID__F___call____c_api(HerculesAny*, int, HerculesAny*, void*);
struct Word2ID : public IUserDataRoot {
  // flags for convert check
  static uint32_t tag_s_2_71828182846_;
  static uint32_t var_num_s_2_71828182846_;
  static string_view class_name_s_2_71828182846_;
  static IUserDataRoot::__FunctionTable__ function_table_s_2_71828182846_;

  // override meta functions
  const char* ClassName_2_71828182846() const override { return "Word2ID"; }
  uint32_t tag_2_71828182846() const override { return tag_s_2_71828182846_; }
  uint32_t size_2_71828182846() const override { return var_num_s_2_71828182846_; }

  bool isinstance_2_71828182846(uint64_t tag) override {
    static std::initializer_list<uint64_t> all_tags = {Word2ID::tag_s_2_71828182846_};
    return std::find(all_tags.begin(), all_tags.end(), tag) != all_tags.end();
  }

  std::initializer_list<string_view> VarNames_2_71828182846() const override {
    static std::initializer_list<string_view> __var_names_s__ = {"word2id", };
    return __var_names_s__;
  }

  const ska::flat_hash_map<string_view, int64_t>& VarTable_2_71828182846() const override {
    static ska::flat_hash_map<string_view, int64_t> __var_table_s__ = {
      {"word2id", 0}, 
    };
    return __var_table_s__;
  }

  // member vars
  Dict word2id{ObjectPtr<Object>{nullptr}};

  // Object pointer
  Object* self_node_ptr_2_71828182846 = nullptr;

  // override GetVar_2_71828182846 functions
  RTView GetVar_2_71828182846(int64_t idx) const override {
    switch (idx) {
    case 0: { return word2id; } break;
    default: { THROW_PY_IndexError("index overflow"); return nullptr; } break;

    }
  }
  // override SetVar_2_71828182846 functions
  void SetVar_2_71828182846(int64_t idx, const Any& val) override {
    switch (idx) {
    case 0: { this->word2id = HERCULES_TYPE_AS(val, Dict); } break;
    default: { THROW_PY_IndexError("index overflow"); } break;

    }
  }

  // virtual methods
  virtual RTValue __init__(void* handle_2_71828182846=((void*)(int64_t)0));
  virtual int64_t __call__(const unicode_view& w);
};

// flags for convert check
uint32_t Word2ID::tag_s_2_71828182846_ = -2763212929503271742;
uint32_t Word2ID::var_num_s_2_71828182846_ = 1;
string_view Word2ID::class_name_s_2_71828182846_ = "Word2ID";
IUserDataRoot::__FunctionTable__ Word2ID::function_table_s_2_71828182846_ = IUserDataRoot::InitFuncTable_2_71828182846(&__hercules_func_registry__Word2ID, "Word2ID");

struct Word2ID_SharedView: public IUserDataSharedViewRoot {
  // member var
  Word2ID *ptr;
  // constructor
  Word2ID_SharedView(Word2ID *ptr, UserDataRef ref) : ptr(ptr), IUserDataSharedViewRoot(std::move(ref)) {}
  Word2ID_SharedView(Word2ID *ptr) : ptr(ptr) {}
  Word2ID_SharedView() : ptr(nullptr) {}
  Word2ID_SharedView(const hercules::runtime::Any& ref) : Word2ID_SharedView(HERCULES_TYPE_AS_V2(ref, UserDataRef, "Word2ID")) {}
  // UserDataRef
  Word2ID_SharedView(UserDataRef ref) {
    IUserDataRoot* base_ud_ptr = static_cast<IUserDataRoot*>(ref.check_codegen_ptr("Word2ID"));
    if(!base_ud_ptr->isinstance_2_71828182846(Word2ID::tag_s_2_71828182846_)) {THROW_PY_TypeError("expect 'Word2ID' but get '", base_ud_ptr->ClassName_2_71828182846(), "'");}
    ptr = static_cast<Word2ID*>(base_ud_ptr);
    ud_ref = std::move(ref);
  }
  Word2ID* operator->() const { return ptr; }
  template <typename T, typename = typename std::enable_if<std::is_convertible<UserDataRef, T>::value>::type>
  operator T() const {return ud_ref;}
};

void Word2ID_F__deleter__(ILightUserData* ptr) { delete static_cast<Word2ID*>(ptr); }
void* Word2ID_F__placement_new__(void* buf) { return new (buf) Word2ID; }
void Word2ID_F__placement_del__(ILightUserData* ptr) { static_cast<Word2ID*>(ptr)->Word2ID::~Word2ID(); }
Word2ID_SharedView Word2ID__F___init___wrapper(void* handle_2_71828182846) {
  static auto buffer_size = UserDataRef::GetInternalBufferSize();
  if (buffer_size < sizeof(Word2ID)) {
    auto self = new Word2ID;
    self->function_table_2_71828182846_ = &Word2ID::function_table_s_2_71828182846_;
    Word2ID__F___init__(self,  handle_2_71828182846);
    UserDataRef self_ref(Word2ID::tag_s_2_71828182846_, Word2ID::var_num_s_2_71828182846_, self, Word2ID_F__deleter__, __hercules_module_ctx);
    self->self_node_ptr_2_71828182846 = (Object*)(self_ref.get());
    return self_ref;
  } else {
    UserDataRef self(Word2ID::tag_s_2_71828182846_, Word2ID::var_num_s_2_71828182846_, sizeof(Word2ID), Word2ID_F__placement_new__, Word2ID_F__placement_del__, __hercules_module_ctx);
    Word2ID_SharedView self_view((Word2ID*)self.ud_ptr_nocheck());
    self_view->function_table_2_71828182846_ = &Word2ID::function_table_s_2_71828182846_;
    Word2ID__F___init__(self_view,  handle_2_71828182846);
    self_view->self_node_ptr_2_71828182846 = (Object*)(self.get());
    return self;
  }
}

RTValue Word2ID::__init__(void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
  this->session_handle_2_71828182846_ = handle_2_71828182846;  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
  this->word2id = Kernel_Dict::make(std::initializer_list<Dict::value_type>{{unicode_view(U"\u0068\u0069", 2), (int64_t)1}, {unicode_view(U"\u0068\u0065\u006C\u006C\u006F", 5), (int64_t)0}});  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:25
  return (None);
}

HERCULES_DLL RTValue Word2ID__F___init__(const Word2ID_SharedView& self, void* handle_2_71828182846) {  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
  return (self->__init__(handle_2_71828182846));  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
}

int Word2ID__F___init____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[1] {"self"};
    KwargsUnpackHelper helper("__init__", arg_names, 1, nullptr, 0);
    RTView pos_args[1];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
    auto ret = Word2ID__F___init__(Word2ID_SharedView(static_cast<const Any&>(pos_args[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 1: {
        auto ret = Word2ID__F___init__(Word2ID_SharedView(static_cast<const Any&>(args_t[0])), resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py\", line 24, in __init__\n", "__init__() takes 1 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
    }
  }

  return 0;
}

int Word2ID__F___init___wrapper__c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  switch(num_args) {
    case 0: {
      auto ret = Word2ID__F___init___wrapper(resource_handle);  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
      (ret.operator RTValue()).MoveToCHost(out_ret_value);
    } break;
    default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py\", line 24, in __init__\n", "__init__() takes 0 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:24
  }
  return 0;
}

int64_t Word2ID::__call__(const unicode_view& w) {  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
  return (internal::TypeAsHelper<int64_t>::run(((this->word2id).get_default((w), (RTValue((int64_t)-1)))), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py\", line 28, in __call__\n", "expect '(this->word2id).get_default((w), (RTValue((int64_t)-1)))' is 'int64_t' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:28
}

HERCULES_DLL int64_t Word2ID__F___call__(const Word2ID_SharedView& self, const unicode_view& w) {  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
  return (self->__call__(w));  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
}

int Word2ID__F___call____c_api(HerculesAny* args, int num_args, HerculesAny* out_ret_value, void* resource_handle = nullptr)
{
  TArgs args_t(args, num_args);

  if (num_args > 0 && args[num_args - 1].code == TypeIndex::kRuntimeKwargs) {
    string_view arg_names[2] {"self", "w"};
    KwargsUnpackHelper helper("__call__", arg_names, 2, nullptr, 0);
    RTView pos_args[2];
    helper.unpack(pos_args, args, num_args);  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
    auto ret = Word2ID__F___call__(Word2ID_SharedView(static_cast<const Any&>(pos_args[0])), internal::TypeAsHelper<unicode_view>::run((pos_args[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py\", line 27, in __call__\n", "expect 'pos_args[1]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
    RTValue(std::move(ret)).MoveToCHost(out_ret_value);
  } else {
    switch(num_args) {
      case 2: {
        auto ret = Word2ID__F___call__(Word2ID_SharedView(static_cast<const Any&>(args_t[0])), internal::TypeAsHelper<unicode_view>::run((args_t[1]), __FILE__, __LINE__, "File \"/home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py\", line 27, in __call__\n", "expect 'args_t[1]' is 'py::str' type"));  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
        RTValue(std::move(ret)).MoveToCHost(out_ret_value);
      } break;
      default: {THROW_PY_TypeError("File \"/home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py\", line 27, in __call__\n", "__call__() takes 2 positional arguments but ", num_args, " were given");} break;  // /home/jeff/github/gottingen/hvm/test/script/test_cross_file_dependency_1.py:27
    }
  }

  return 0;
}


} // namespace

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__Word2ID[] = {
    (HerculesBackendPackedCFunc)Word2ID__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Word2ID__F___init____c_api,
    (HerculesBackendPackedCFunc)Word2ID__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__Word2ID = {
    "3\000Word2ID__F___init___wrapper\000Word2ID__F___init__\000Word2ID__F___call__\000",    __hercules_func_array__Word2ID,
};

} // extern C

extern "C" {

HERCULES_DLL HerculesBackendPackedCFunc __hercules_func_array__[] = {
    (HerculesBackendPackedCFunc)Word2ID__F___init___wrapper__c_api,
    (HerculesBackendPackedCFunc)Word2ID__F___call____c_api,
};
HERCULES_DLL HerculesFuncRegistry __hercules_func_registry__ = {
    "2\000Word2ID__F___init___wrapper\000Word2ID__F___call__\000",    __hercules_func_array__,
};

} // extern C

extern "C" {

HERCULES_DLL const char* __hercules_closures_names__ = "2\000Word2ID__F___init___wrapper\000Word2ID__F___init__\000";

} // extern C

