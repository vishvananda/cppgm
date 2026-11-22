# C conformance notes

These notes record WG14 rules exercised by the course regressions and the
initial upstream campaign. Clause numbers use the named edition or draft.

## C99 bit-field width

C99 6.7.2.1 constrains a bit-field's width by the declared type. Its
corrigendum and DR 335 clarify the representation and value semantics
of `_Bool` bit-fields. cppgm's C target profiles use one value bit for
`_Bool`. They diagnose a wider field declaration. This check belongs to
C declaration semantics before target record layout. The C99 regression
and the upstream width diagnostic exercise the constraint. The upstream
runtime case exercises valid one-bit fields.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[WG14 DR 335](https://www.open-std.org/jtc1/sc22/wg14/www/docs/dr_335.htm) ·
[PA38 width regression](../pa38/tests/general/300-bool-bitfield-width-bad.t)

## Repeated qualifiers in C99

C99 6.7.3 makes a repeated type qualifier equivalent to one occurrence.
The declaration already retains qualifiers as bits. Reapplying the same
bit gives the C type directly. PA38 exercises duplicate const and volatile
specifiers in C99, and the pinned Clang cohort checks WG14 N505.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[PA38 qualifier regression](../pa38/tests/general/300-repeated-qualifiers.t)

## Macros adjacent to quoted literals

C17 6.4 tokenizes an identifier after a string or character literal as a
separate preprocessing token. The identifier can be expanded before
adjacent string literals are concatenated. PA38 covers both forms.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 literal regression](../pa38/tests/general/100-adjacent-literal-macros.t)

## C11 syntax in earlier modes

C11 adds generic selection (6.5.1.1), alignment queries (6.5.3.4), atomic
types and qualifiers (6.7.2.4 and 6.7.3), thread-local storage (6.7.1),
nonreturning functions (6.7.4), alignment specifiers (6.7.5), and static
assertions (6.7.10). C23 permits omission of the static assertion message.
PA38 exercises those edition boundaries and the system-header exception
used by GCC and Clang. GNU `__thread` and `__alignof__` use their existing
extension spellings in C99.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C23 draft, N3096](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf) ·
[PA38 edition control](../pa38/tests/general/500-c11-edition-syntax.t)

## Conditional pointers and null pointer constants

C11 6.3.2.3p3 defines a null pointer constant as an integer constant
expression with value zero or such an expression cast to `void *`.
C11 6.5.15p6 gives a conditional expression with an integer null pointer
constant and a pointer the pointer operand's type, in either order.
The PA38 case checks `(void *)0`, qualification, and conversion to a
function pointer. A cast to `const void *` retains its qualification.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 conditional pointer regression](../pa38/tests/general/500-conditional-null-pointer.t)

## Array parameters with an unspecified prototype bound

C11 6.7.6.2 and 6.7.6.3 allow `[*]` in function prototype scope. For the
outermost array parameter, pointer adjustment retains the qualifiers
written inside the brackets. PA38 checks compatible declarations and
rejects a star in a function definition, an ordinary object declaration,
and a parameter with a `static` minimum bound.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 prototype array regression](../pa38/tests/general/300-array-parameter-star.t)

## VLA scope and C objects

C17 6.2.4 specifies the lifetime of a variable-length array. C17 6.8.6.1
constrains jumps into a variably modified identifier's scope. Scope exits
restore dynamic stack storage. An ordinary C compilation defaults to the
C unwind policy and emits a VLA object that can link through a C driver.
The hosted c-testsuite case checks this by linking the cppgm-produced object
with GCC's C driver. PA38 checks a VLA that stays live across a call.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 tracked editions](https://www.open-std.org/jtc1/sc22/wg14/www/projects.html) ·
[PA38 VLA call regression](../pa38/tests/general/500-vla-call-c-unwind.t)
