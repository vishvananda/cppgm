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

## Literal prefixes and feature probes by edition

C11 6.4.4.4 and 6.4.5 add Unicode character and string prefixes. In
ISO C99, `u`, `U`, and `u8` before a quote are identifiers, so a
macro can expand there. Token pasting follows the same edition as source
lexing. GNU99 retains GCC's Unicode literal extensions. The wide `L`
prefix remains available in each mode.

C11's `_Alignof` takes a type name under 6.5.3.4. With pedantic
diagnostics enabled, the expression form is a GNU extension. The GNU
spelling `__alignof__` accepts the expression. The C23 optional
variadic macro syntax is available as an extension in earlier modes and
has a C23 diagnostic there when requested. The C11 feature and extension
probe answers follow the selected edition and the pedantic policy.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C23 draft, N3096](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf) ·
[PA38 C99 prefix regression](../pa38/tests/general/100-c99-literal-prefix-macros.t) ·
[PA38 C11 prefix regression](../pa38/tests/general/100-c11-unicode-prefixes.t)

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

## Generic associations with tagged types

A generic association in C11 6.5.1.1 places a colon directly after a type
name. Struct and union specifiers have no base clause. In C11 and C17,
an enum specifier also ends before the association colon. PA38 checks
struct, union and enum associations and a struct tag shadowed by a
block-scope definition.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 association regression](../pa38/tests/general/500-generic-tag-association.t)

## Generic association compatibility

C11 6.5.1.1p2 constrains both the association list and the match for the
controlling expression. Array types with distinct constant lengths are
incompatible with one another. Each can be compatible with an array of
unspecified length under 6.7.6.2p6, which can give a controlling pointer
multiple matches. Section 6.7.6.3p15 makes an unprototyped function type
compatible with certain prototypes subject to default argument promotions.
The PA38 regressions exercise each constraint as well as distinct valid
types in the same list.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 multiple matches](../pa38/tests/general/500-generic-multiple-matches-bad.t) ·
[PA38 incomplete array associations](../pa38/tests/general/500-generic-array-compatibility-bad.t) ·
[PA38 unprototyped association](../pa38/tests/general/500-generic-unprototyped-compatibility-bad.t)

## Hosted floating limits and structure returns

C11 5.2.4.2.2 describes the floating-point characteristics available
through `<float.h>`. The hosted compiler's limit-macro replacements must
be valid expressions in C. C11 6.8.6.4 converts the return expression to
the result type as if by assignment. A structure return uses the typed
object copy and target return convention. PA38 tests both an ABI register
result and a larger aggregate returned through caller-provided storage.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 floating limits](../pa38/tests/general/500-hosted-c-float-limits.t) ·
[PA38 structure return](../pa38/tests/general/500-c-record-return.t)

## Volatile-qualified record accesses

C11 5.1.2.3 and 6.7.3 make volatile accesses observable. A by-value
argument or return reads the record through its lvalue before transferring
its value. A discarded volatile-qualified record still needs a read. For
a whole qualified record, cppgm transfers the representation in scalar
chunks up to eight bytes and within the record layout's alignment. The
qualified endpoint carries the volatile operation. Copies to or from
ordinary temporaries allow ordinary optimization. A large representation
uses the shared scalar copy loop.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 DR 476](https://www.open-std.org/jtc1/sc22/wg14/issues/c11c17/issue0476.html) ·
[PA38 volatile record regression](../pa38/tests/general/400-volatile-record-access.t)

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
