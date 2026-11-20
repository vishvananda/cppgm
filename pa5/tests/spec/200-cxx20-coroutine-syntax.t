struct task {};

task sequence(int value) {
  co_yield value + 1;
  (void) (co_await value);
  co_return {value};
}

task empty() {
  co_return;
}
