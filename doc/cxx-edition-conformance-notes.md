# C++ edition conformance references

- The C++17 relaxed template-template argument rules permit a class template
  with a compatible trailing parameter pack to match a template-template
  parameter with fixed parameters. Keep the parameter kinds and corresponding
  non-type parameter types compatible. [P0522R0](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0522r0.html)
- List initialization treats conversions from object pointers, function
  pointers and pointers to members to `bool` as narrowing.
  [P1957R2](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2020/p1957r2.html)
- A union's literal members determine which variants can participate in
  constant evaluation. A union can have an active literal member even when
  another alternative has a nonliteral type. See `[basic.types]` and the
  history of [CWG 2096](https://cplusplus.github.io/CWG/issues/2096.html).
- The C++20 declarations of constrained parameters place each parameter's name
  after the entire parameter declaration, including its type constraint. An
  explicit argument of that constraint can refer to a parameter declared
  earlier in the template head. See `[basic.scope.pdecl]` in [N4861](n4861.pdf).
- The C++20 literal operator rules form a string literal operator template's
  class-valued argument from the string literal. See `[lex.ext]`,
  `[over.literal]`, and `[temp.arg.nontype]` in [N4861](n4861.pdf).
- Coroutine suspension can transfer execution to the coroutine designated by
  the handle returned from `await_suspend`. See `[expr.await]` and
  `[dcl.fct.def.coroutine]` in [N4861](n4861.pdf).
