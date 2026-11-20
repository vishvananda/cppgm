#ifndef __cpp_impl_coroutine
#define __cpp_impl_coroutine 201902L
#endif
#include <coroutine>

struct Task {
  struct promise_type {
    Task get_return_object();
    std::suspend_never initial_suspend() noexcept;
    std::suspend_never final_suspend() noexcept;
    void unhandled_exception() noexcept;
    void return_void() noexcept;
  };
};

struct Value {
  bool await_ready() const noexcept;
  void await_suspend(std::coroutine_handle<>) const noexcept;
  int await_resume() const noexcept;
};

Task invalid() {
  thread_local int cached = co_await Value{};
}
