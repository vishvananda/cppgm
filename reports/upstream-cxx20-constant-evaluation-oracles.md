# C++20 constant-evaluation reference differences

The probes below used GCC 15.2.0 and Clang 21.1.8 with
`-std=c++20 -pedantic-errors -fsyntax-only`.

## Cleanup of discarded comma operands

With a constexpr destructor that appends a digit to a log, the two operands
in `(Digit{&log, 1}, Digit{&log, 2});` constructed in left-to-right order.
Starting at zero, GCC and Clang with
`-fexperimental-new-constant-interpreter` produced 21. Clang's default
interpreter produced 12. Apply reverse construction order at the end of
the full-expression. The PA16 control uses explicit casts to void for the
discarded values and passes with both compilers' default evaluators.
[N4861 class.temporary](https://timsong-cpp.github.io/cppwp/n4861/class.temporary)

## End of a by-value parameter's lifetime

A comma expression called a constexpr function on a by-value class
parameter whose destructor appended a digit, then read the log in its
right operand. GCC ran the destructor after the read. Clang ran it before
the read with either evaluator. The standard leaves the choice to the
implementation. cppgm uses the same caller-side cleanup for nontrivial
by-address parameters in constant evaluation and in runtime lowering.
The PA16 control observes the return value and the log after the
full-expression, where both reference compilers agree.
[N4861 expr.call](https://timsong-cpp.github.io/cppwp/n4861/expr.call)

## Mutable state during hypothetical constant destruction

GCC accepted the PA16 example in which the destructor of a constexpr
variable writes to its mutable member. Clang rejected it. The constant
destruction check treats the object's non-mutable subobjects as beginning
their lifetimes in the check. The mutable member falls outside that
permission, so the control requires rejection.
[N4861 expr.const](https://timsong-cpp.github.io/cppwp/n4861/expr.const)
[PA16 control](../pa16/tests/controls/100-cxx20-constexpr-variable-destructor-mutable-write-bad.t)
