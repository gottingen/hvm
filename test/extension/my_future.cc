
#include <future>
#include <thread>

#include <hercules/runtime/container_private.h>
#include <hercules/runtime/registry.h>
#include <hercules/runtime/future_wrap.h>

using namespace ::hercules::runtime;

namespace {
HERCULES_REGISTER_GLOBAL("test.get_future").set_body([](PyArgs args) -> RTValue {
  std::future<int> ft = std::async(std::launch::async, []{ return 8; });
  auto shared_ft = std::make_shared<std::future<int>>(std::move(ft));
  return Future::make_future_udref([shared_ft]() {
      if (shared_ft.get()->valid()) {
        return shared_ft.get()->get();
      } else {
        return -1;
      }
  });
});
}
