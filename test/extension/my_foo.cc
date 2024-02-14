
#include <hercules/runtime/container_private.h>
#include <hercules/runtime/native_object_registry.h>

using namespace ::hercules::runtime;

class MyFoo {
 public:
  MyFoo(Unicode tag) : tag(std::move(tag)) {
  }
  ~MyFoo() = default;
  List split(const Unicode& input) const {
    return input.split();
  }
  Unicode tag;
};

namespace {
HVM_REGISTER_NATIVE_OBJECT(MyFoo)
    .SetConstructor([](PyArgs args) -> std::shared_ptr<void> {
      HSCHECK_EQ(args.size(), 1) << "[MyFoo] Expect 1 arguments but get " << args.size();
      return std::make_shared<MyFoo>(args[0].As<Unicode>());
    })
    .RegisterFunction("split", [](void* self, PyArgs args) -> RTValue {
      HSCHECK_EQ(args.size(), 1) << "[MyFoo][func: split] Expect 1 arguments but get "
                                 << args.size();
      return reinterpret_cast<MyFoo*>(self)->split(args[0].As<Unicode>());
    });
}