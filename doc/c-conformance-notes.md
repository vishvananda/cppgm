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

## Variable dimensions and parameter adjustment

C11 6.7.6.2p4 makes an array variable length when its element size is
variable, including an array with a fixed outer count. A local declaration
or typedef evaluates the bounds it introduces. Section 6.7.8p3 requires
a typedef to capture its bounds each time execution reaches it. Uses of
the typedef refer to the captured extent.

The outermost array parameter adjusts to a pointer under 6.7.6.3p7.
The definition still evaluates the written size expressions on function
entry under 6.9.1p10. In prototype scope a variable bound has the meaning
of `[*]`. For `sizeof`, cppgm elides evaluation when all variable bounds
are behind a pointer and the resulting type has a fixed size. `_Alignof`
can use the element alignment without evaluating bounds.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 multidimensional arrays](../pa38/tests/general/300-variable-array-multidimensional.t) ·
[PA38 captured typedef extents](../pa38/tests/general/300-variable-array-typedef.t) ·
[PA38 parameter adjustment](../pa38/tests/general/300-variable-array-parameter.t)

## Evaluated type names and GNU `typeof`

The evaluation of a VLA size expression can be observable even when a cast's
converted result is unused. C11 6.5.2.5p1 permits a compound literal with a
pointer-to-VLA type and excludes a compound literal of VLA type. For an
expression operand of `sizeof`, 6.5.3.4p2 makes evaluation depend on whether
the expression has variable-length array type. Semantic analysis must still
check an unevaluated operand.

GNU `typeof` evaluates operands of variably modified type. In the tested
declarations, GCC 15 and Clang 21 evaluate the expression operand for each
declarator and share captured type-name bounds within the declaration. The
first declarator's evaluation can skip a conditional bound. In that case
later declarators also skip its evaluation, even when their execution
takes the other branch. In a probe that reads such an uncaptured extent,
GCC returned zero and Clang's value varied by optimization level. cppgm
initializes the extent slot to zero on entry to the declaration. A nested
`typeof` ends at its matching closing parenthesis, so a following array
declarator belongs to the enclosing type name.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC `typeof`](https://gcc.gnu.org/onlinedocs/gcc/Typeof.html) ·
[PA38 cast and compound literal](../pa38/tests/general/300-variable-array-cast.t) ·
[PA38 evaluated `sizeof` operand](../pa38/tests/general/300-variable-array-sizeof-operand.t) ·
[PA38 GNU `typeof`](../pa38/tests/general/300-variable-array-typeof.t)

## Designated and overlapping initializers

C11 6.7.9p17 and p18 associate each brace pair with a current object.
After initializing a designated subobject, a positional initializer
continues from that subobject. It can therefore finish the row of an
array, the members of a record, or the subobjects of a selected union
member before moving out to the next enclosing element.

WG14 issue 0413 preserves the other members when a designator replaces
one part of an earlier whole-subobject value. A new brace pair for the
whole subobject includes implicit initialization of its omitted members
under issue 0253. The compiler may elide the evaluation of an overwritten
value. Name lookup, type checking, and the static initializer constraint
in 6.7.9p4 still apply to the written expression.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 issue 0413](https://open-std.org/JTC1/SC22/WG14/issues/c11c17/issue0413.html) ·
[WG14 issue 0253](https://www.open-std.org/jtc1/sc22/wg14/issues/c99/issue0253.html) ·
[PA38 continuation case](../pa38/tests/general/300-designated-continuation.t) ·
[PA38 overlap case](../pa38/tests/general/300-designated-retained-values.t)

## Composite types and tentative definitions

C11 6.2.7p3 and p4 combine compatible types at a redeclaration that can
see the earlier declaration with linkage. The combination is recursive.
An incomplete array contributes its element type, and the completed
array contributes the bound. Prototyped function parameters contribute
their types in preference to a declaration without a prototype.
Implicit pointer conversion follows the compatible-pointee and
qualification rules in 6.5.16.1. Each use keeps the type visible at its
point of use.

C11 6.2.2 gives every declaration with external linkage of one identifier
in the program the same entity. Within a translation unit, 6.2.7p2
requires those declared types to be compatible even when a block has ended
or a nearer automatic object hides an earlier declaration. Apply paragraph
4 to the visible declaration when determining the type of a use.

Under 6.2.2p4 and p5, a block function declaration with or without an
explicit `extern` inherits the linkage of a visible prior declaration
with linkage. In its absence the function has external linkage. A visible
prototype remains in effect for a compatible declaration without a
prototype. Under 6.2.7p2, a block prototype also constrains compatible
declarations in other scopes. Its parameters and array bounds do not
become visible there.

Under 6.9.2p2, a remaining tentative definition uses the composite type
at the end of the translation unit and receives zero initialization.
Paragraph 5 exemplifies completing an otherwise incomplete external
tentative array with one element. Paragraph 3 requires an internal
tentative definition to be complete at its declaration.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 composite types](../pa38/tests/general/400-c-composite-types.t) ·
[PA38 block function linkage](../pa38/tests/general/400-c-block-function-linkage.t) ·
[PA38 tentative definitions](../pa38/tests/general/400-c-tentative-incomplete.t)

## Integer constant expressions

C11 6.6p6 restricts both the type and the operands of an integer constant
expression. Apply the rule wherever the surrounding construct requires an
integer constant. Evaluate only the selected path of `?:`, `&&`, and `||`.
The operand forms still apply to the skipped paths. An evaluated comma
operator is excluded by 6.6p3, while a comma between eligible operands can
appear in an unevaluated branch. A floating literal can be the immediate
operand of an arithmetic-to-integer cast. A fixed `sizeof` or `_Alignof`
supplies its result directly, using the operand in that operator's own
context. A generic selection takes its expression from the selected
association.

Under 6.7.6.2p4, a foldable integer bound can still produce a variable-length
array if its expression fails the integer constant rules. Under 6.3.2.3p3,
an eligible integer expression with value zero is a null pointer constant,
as is its cast to a pointer to unqualified `void`. A comma whose evaluated
result is zero leaves an ordinary integer, or an ordinary `void *` when
explicitly cast.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 DR 261](https://www.open-std.org/JTC1/SC22/WG14/www/docs/dr_261.htm) ·
[WG14 issue 0489](https://open-std.org/JTC1/SC22/WG14/issues/c11c17/issue0489.html) ·
[PA38 constant expressions](../pa38/tests/general/500-c-integer-constant-expressions.t)

## Static initialization

C11 6.7.9p4 requires constant expressions or string literals in an
initializer for an object with static or thread storage duration. The same
constraint applies to the initialized object of a file-scope compound
literal under 6.5.2.5. It also applies to earlier written values later
overridden by another initializer. An initializer in a block still uses
these rules if its object has static or thread storage duration.

6.6p3 allows prohibited operators only in an unevaluated subexpression.
For example `2 || 1 / 0` supplies the constant `1` without evaluating the
division. Under 6.6p7 and p9, an address constant can designate an object
with static storage duration or a function. Converting an integer constant
to pointer type can also form an address constant. Array and member access
can designate subobjects without reading stored values. Pointer addition
and subtraction by an integer constant retain the symbol and adjust its
byte offset. The linked definition may complete an external array whose
bound is still unknown at the initializer.

The supported additional forms include addresses cast to integers wide
enough for the relocation and GNU label addresses. For a cast to a pointer
to variably modified type, cppgm follows GCC's treatment when the written
bound contributes only type information to the address. The analyzed type
evaluation identifies any call, assignment, increment, decrement, or comma
operator that would prevent that treatment.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 static initialization](../pa38/tests/general/500-c-static-initializers.t) ·
[GCC C99 manifest](../reports/upstream-gcc-c99.json)

## Conditional pointer types and C inline definitions

C11 6.5.15p5 applies the usual arithmetic conversions even when
arithmetic operands have the same type. The integer promotions can
therefore change the result type of two narrow operands or two bit-fields.

C11 6.5.15p6 combines the qualifiers of the pointed-to types of the two
operands. When those types are compatible, it forms their composite
under 6.2.7p3. A bound or a prototype can therefore come from either
operand. The result type applies even when the condition is constant.

Under 6.7.4p3, an inline-only definition with external linkage must
avoid internal-linkage references and modifiable objects with static
or thread storage duration. A reference in an unevaluated expression
still counts. Under paragraph 7, an `extern` declaration or a
file-scope declaration without `inline` can make the definition external
even when the declaration follows the body. The same paragraph requires
a definition in the translation unit that declares an external function
inline. The pedantic policy diagnoses a missing definition.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 conditional pointer types](../pa38/tests/general/500-conditional-composite-pointer.t) ·
[PA38 late inline linkage](../pa38/tests/general/400-c-inline-linkage.t)
