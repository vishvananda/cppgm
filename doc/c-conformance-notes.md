# C conformance notes

These notes record WG14 rules exercised by the course regressions and the
initial upstream campaign. Clause numbers use the named edition or draft.

## Source line mapping and preprocessing numbers

Translation phase 1 maps physical line endings. The C source mapping
accepts UTF-8 with an optional initial BOM and accepts LF, CRLF and
standalone CR as line endings. Phase 2 deletes a backslash and its
following line ending after trigraph replacement. A continued
`//` comment consequently extends over the following physical line.
Presumed locations count physical lines before those deletions.
For `#line __LINE__`, WG14 DR 464 allows the difference between
expanding the token as it is read and first reading the entire
directive. cppgm uses the token's current presumed line.

The C99 through C17 ISO dialects replace trigraphs before splicing.
The GNU dialects leave trigraphs unchanged unless explicitly enabled.
Both profiles also recognize horizontal whitespace before a spliced
line ending as an extension. The warning uses the backslash's physical
offset after applying the file's presumed-location and system-header
rules.
[GCC initial processing](https://gcc.gnu.org/onlinedocs/cpp/Initial-processing.html) ·
[Clang splice warning](https://clang.llvm.org/docs/DiagnosticsReference.html#wbackslash-newline-escape)

The grammar of preprocessing numbers is broader than that of
integer and floating constants. The longest preprocessing token
can include a sign after `e`, `E`, `p`, or `P` even when it cannot
be converted to a constant. Token pasting uses the preprocessing
grammar, and stringization can preserve the spelling for later
use as text.

[WG14 N1256, §§5.1.1.2, 6.4.8, 6.10.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[WG14 N1570, §§5.1.1.2, 6.4.8, 6.10.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 DR 464](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm#dr_464)

## Include directives and error messages

C99 through C17 leave the header search and the combination of tokens
in a macro-produced header name implementation-defined. cppgm follows
GCC and Clang for relative C search. Quoted names first use the path
that opened the current inclusion, even after `#line`. Angle names
search the configured angle paths. Absolute names are used directly.
A direct header-name token can be followed by macros that expand to an
empty sequence. When an angle header name cannot be lexed on the first
pass, macro replacement can supply the closing delimiter. C header
paths retain literal backslashes after line splicing. A computed
quoted name uses the body of its preprocessing token without string
escape conversion. A C string can therefore supply a header path with
what would be an invalid string escape. When the same token is used as
a string literal, conversion checks its escapes. In computed angle names,
a run of separating whitespace counts as one space, including after
the opening angle, and any whitespace before the closing angle is
discarded. This follows GCC's computed-angle convention.

A direct operand of `__has_include` is a header-name token and
retains its written spacing. Operands supplied as ordinary
preprocessing tokens undergo macro replacement before the name is
formed. A suffix that expands to no tokens can precede the closing
parenthesis. An empty name or an unexpected leftover token produces
a diagnostic. The GNU `__has_include_next` extension applies the
same operand rules.

An active `#error` diagnostic includes the following preprocessing
tokens. It preserves their spellings after splicing and comment
replacement without expanding macro names. The diagnostic uses the
presumed filename and line.

[WG14 N1570, §§6.10.2, 6.10.4, 6.10.5](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 N3220, §§6.4.7, 6.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC line control](https://gcc.gnu.org/onlinedocs/cpp/Line-Control.html) ·
[GCC computed includes](https://gcc.gnu.org/onlinedocs/cpp/Computed-Includes.html) ·
[GCC C99 include cases](../reports/upstream-gcc-c99.json)

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

## C99 complex header constants

C99 7.3.1 requires `<complex.h>` to provide `_Complex_I` and `I`.
glibc and wasi-libc implement these using imaginary numeric suffixes, a GNU
C extension in C99 through C17. PA38 checks their component types, static
initialization and the two parts of the value. It also checks the extent of
`__extension__` on declarations and cast-expressions. GCC 15 suppresses
the diagnostic for a replacement-list token from a system macro by default.
Clang 21 still diagnoses a bare suffix expanded into user code at
`-pedantic-errors`. cppgm follows GCC for these macros and enables the
diagnostic with `-Wsystem-headers`.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[GCC complex types and constants](https://gcc.gnu.org/onlinedocs/gcc/Complex.html) ·
[PA38 runtime and diagnostic fixtures](../pa38/tests/general/500-c-imaginary-extension.t)

## C99 type-generic math

C99 7.22 determines a type-generic math function from the types of its
generic arguments. Glibc uses GNU `__builtin_tgmath` to express the
selection. The compiler checks the candidates' prototypes and the type
relationships between their varying parameters and results. Standard
families select an exact match after promoting integer arguments to the
appropriate floating type. For the GNU narrowing families with a fixed
floating result, a missing exact match selects the first candidate of the
same domain that covers the argument format's precision and exponent range.
Only the chosen candidate expression and the actual call arguments are
evaluated. The tests also cover the result type in unevaluated contexts.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[GCC builtin rules](https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html) ·
[PA38 selection regression](../pa38/tests/general/500-c-type-generic-math.t)

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

## C11 alignment and assertions

C11 lists alignment in the declaration specifiers (6.7) and DR 444
clarifies its use on record members. A nonzero request applies to the
declared object or member, including an anonymous member. Use the strongest
request and require it to meet the natural alignment of the type. Reject
requests on parameters, bit-fields, typedefs, functions, and register
objects (6.7.5). The type-name form uses the type's alignment, so a
variably modified array can supply its element alignment without running
the bound expression (6.5.3.4 and 6.7.5).

Standard `_Alignof` requires a complete type. Determine whether an array
type is complete before looking at the element alignment. An incomplete
array object is also accepted by GNU expression queries. For a named
object or member the GNU query uses the alignment established by its
declaration and layout. A query may appear in the object's own
initializer. Reject a bit-field designator while allowing queries on the
value of a C assignment to a bit-field.

C11 6.7.5p7 requires equivalent alignment on the definition when any
declaration carries an alignment specifier. WG14 issue 1044 asks how this
applies to zero, natural alignment, tentative definitions, and multiple
specifiers. Compare the strongest standard request per declaration with the
explicit definition in the same translation unit, treating requests that
leave natural alignment unchanged as neutral. Under the existing GNU
compatibility policy, an equivalent GNU alignment on the definition can
satisfy the check. Report local disagreements in pedantic modes. Keep the
strongest storage alignment for tentative definitions without an initializer.

The `for` grammar also takes a declaration (6.8.5). A static assertion
fits that grammar without introducing an identifier. Check it as a
declaration, even when the loop body would never run.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 defect report 444](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2059.htm#dr_444) ·
[WG14 issue 1044](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3977.htm) ·
[Alignment fixture](../pa38/tests/general/500-c11-alignment.t) ·
[Alignment query fixture](../pa38/tests/general/500-c-alignment-queries.t) ·
[For initializer fixture](../pa38/tests/general/500-c11-for-static-assert.t)

## Declarations in a C for initializer

From C99 through C17, 6.8.5p3 allows identifiers declared in the initializer
to denote only objects with automatic or register storage class. WG14
DR 277 confirms that the rule covers tags and enumerators. In addition
to the lifetime of the object, check the kind of each declaration and
its actual scope. A reference to an existing tag and the members of an
anonymous record leave the rule satisfied. C23 removes this constraint.

[WG14 DR 277](https://www.open-std.org/Jtc1/sc22/wg14/issues/c99/issue0277.html) ·
[C23 draft, N3096](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf) ·
[PA38 loop scope fixture](../pa38/tests/general/500-c-for-declarations.t)

## Tags in C function declarators

Under 6.2.1p4 and 6.7.2.3p8, introducing a tag in the parameter list of
a prototype gives it scope through the end of that declarator. A visible
tag can be reused there. A tag introduced in a definition's own parameter
list has block scope through its body. Two otherwise identical prototypes
that separately introduce a tag do not declare compatible function types.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 prototype scope fixture](../pa38/tests/general/500-c-prototype-tag-scope.t) ·
[PA38 redeclaration fixture](../pa38/tests/general/300-c-prototype-tag-redeclaration-bad.t)

## Literal prefixes and feature probes by edition

C11 6.4.4.4 and 6.4.5 add Unicode character and string prefixes. In
ISO C99, `u`, `U`, and `u8` before a quote are identifiers, so a
macro can expand there. Token pasting follows the same edition as source
lexing. GNU99 retains GCC's Unicode literal extensions. The wide `L`
prefix remains available in each mode.

C99 6.4.3p2 and C11 6.4.3p2 restrict universal character names below
U+00A0 to U+0024, U+0040, and U+0060, including in quoted literals.
C23 lifts this limit in quoted literals. Surrogate values still fail.
Record the earlier-edition requirement while lexing and apply the
pedantic policy when converting an expanded literal. A short-circuit
operand in a controlling expression still needs literal conversion.
[PA38 preprocessing case](../pa38/tests/general/100-c17-universal-escape-condition-bad.t) ·
[PA38 literal case](../pa38/tests/general/100-c99-universal-escape-literal-bad.t)

C99 6.4.2.1p3 uses the character ranges in Annex D and excludes its
digit ranges at the start of an identifier. C11 D.1 and D.2 replace
the repertoire and the initial exclusions. In each edition the lexer
uses the same ranges for a raw UTF-8 identifier character and its
universal character name, and interns the resulting UTF-8 spelling.
Apply the identifier rule when lexing the result of token pasting.
Quoted literals have their own character rules.
[PA38 C99 identifiers](../pa38/tests/general/100-c99-unicode-identifiers.t) ·
[PA38 C11 identifiers](../pa38/tests/general/100-c11-unicode-identifiers.t)

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

## Enumeration constants and incomplete tags

In C99 through C17, 6.7.2.2 requires each enumerator's value to fit `int`
and gives the constant type `int`. This applies inside later initializers.
The enumeration's compatible integer type is a separate choice. The target
controls use `unsigned int` for an all-nonnegative range that fits in `int`
and `int` if the range includes negative values. The GNU extension for
wider values uses a compatible integer type that holds the range.

Under 6.7.2.3, a reference to an enumeration tag without a definition
requires a complete type. GNU C permits an incomplete tag and allows
pointer, `extern`, and prototype declarations before completion. A later
definition in the same scope completes the existing type. Tag lookup
ignores ordinary identifiers through enclosing scopes. For a bare
`enum E;` with a visible outer enum, cppgm follows GCC and references the
existing tag. Clang can introduce a new local tag in this extension case.
[C99 draft, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC enum extensions](https://gcc.gnu.org/onlinedocs/gcc/Enum-Extensions.html)

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

## Floating constant range

C99–C17 6.4.4.2 places the conversion of a floating constant at translation
time. The target representations round past the finite range to infinity.
Keep the suffix-selected type and round directly to its format. This
preserves the largest finite values, subnormals, and unary-minus signed zero.
The PA38 case exercises static initialization, expression values, and a
hexadecimal tie at the upper boundary of `float`. GCC 15 and Clang 21
accept overflowing constants and emit range warnings. cppgm emits the
rounded values.
[C99 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 range case](../pa38/tests/general/500-c-floating-literal-overflow.t)

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

## Numerical limits and rounding modes

C99 through C17 specify the minimum integer ranges and the promoted
types of the integer limit macros. The supported profiles use eight-bit
bytes and two's complement. Native `long` is 64 bits and Wasm
`long` is 32 bits. `CHAR_MIN` and `CHAR_MAX` follow the selected
plain-char signedness. The floating limit macros describe binary32
`float` and binary64 `double`. The `long double` format is x87
extended on x86-64, binary64 on Apple Silicon, and binary128 on
AArch64 Linux and Wasm. The header probes check numerical values using
exact hexadecimal literals and volatile reads.

`FLT_ROUNDS` is the rounding code for floating addition. A header can
obtain it through `__builtin_flt_rounds()`. Native lowering translates
the selected C library's `fegetround()` representation. The AArch64
Linux and Darwin representations use the FPCR mode bits, and the x86
representations use the x87 rounding field. Wasm uses round-to-nearest.
The query there needs no C runtime call. The native regression changes
the rounding mode through the C library and checks each code before
restoring the previous mode.

[WG14 N1570, §§5.2.4.2, 7.6.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf#page=44) ·
[WebAssembly numerics](https://webassembly.github.io/spec/core/exec/numerics.html#floating-point-operations) ·
[PA30 native query](../pa30/tests/run/800-builtin-fp-rounds.t.1) ·
[PA37 Wasm query](../pa37/tests/module/100-source-wasm-flt-rounds.t)

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

C11 6.7.6.2p1 and p3 require a complete element type and an assignment
expression for a written bound. Diagnose incomplete records even in a
typedef, an external declaration, or a parameter whose array is later
adjusted to a pointer. A parenthesized comma expression is permitted in
the bound and can make the array variable length.

C11 6.7.6.2p4 makes an array variable length when its element size is
variable, including an array with a fixed outer count. A local declaration
or typedef evaluates the bounds it introduces. Section 6.7.8p3 requires
a typedef to capture its bounds each time execution reaches it. Uses of
the typedef refer to the captured extent.

The outermost array parameter adjusts to a pointer under 6.7.6.3p7.
The bracket qualifiers apply to the pointer object. This includes `_Atomic`
in C11. A function signature uses the unqualified adjusted parameter type
for compatibility. The definition retains the qualified parameter object.
The same rules apply to array declarators in identifier-list definitions.
C99 and later editions that retain identifier lists require every parameter
to be declared under 6.9.1p6. cppgm diagnoses implicit declarations in
pedantic modes for those editions.

The definition still evaluates the written size expressions on function
entry under 6.9.1p10. In prototype scope a variable bound has the meaning
of `[*]`. DR 341 adds scope for type names under 6.2.1p8 and permits
prototype-scope type names with `[*]` under 6.7.6.2p4. Apply that published
wording to type names inside expressions in a prototype, including
`_Alignof`. A nested callback prototype has its own parameter scope, even
inside another function's definition. Type names in the definition's own
parameter list or body have block scope.

For `sizeof`, cppgm elides evaluation when all variable bounds
are behind a pointer and the resulting type has a fixed size. `_Alignof`
and a type-name `_Alignas` can use the element alignment without
evaluating bounds. C11 6.7.6.2p2 restricts the scope of an identifier
declared with variably modified type. Under 6.2.1p8, an anonymous type
name is not a declaration of an identifier. Such a type name can appear
in a file-scope query. `[*]` still requires function prototype scope.

GNU `__builtin_types_compatible_p` is an integer constant expression.
Apply array compatibility to the types after checking each bound. Compare
two known constant bounds, and disregard top-level qualification as for the
fixed-type form. Neither operand evaluates its bounds, including a bound
inside another type name or an expression used with `__typeof__`.

C11 6.7.2.4 permits `_Atomic(type-name)` with a pointer to a VLA. It
forbids an array type itself. Evaluating the specifier captures its written
bound for all declarators in the declaration, or uses the extent an earlier
typedef captured. Under 6.7.6p3 a function type and any pointer derived from
it inherit the variably modified property of the return type. Parameter
types are checked in their own scope. Under 6.7.6.2p2, a direct function
declaration with linkage cannot have variably modified type.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 DR 341](https://www.open-std.org/jtc1/sc22/wg14/issues/c99/issue0341.html) ·
[GCC type compatibility builtin](https://gcc.gnu.org/onlinedocs/gcc-15.1.0/gcc/Other-Builtins.html) ·
[PA38 variably modified type queries](../pa38/tests/general/500-types-compatible-vla.t) ·
[PA38 multidimensional arrays](../pa38/tests/general/300-variable-array-multidimensional.t) ·
[PA38 captured typedef extents](../pa38/tests/general/300-variable-array-typedef.t) ·
[PA38 declarators and identifier-list parameters](../pa38/tests/general/300-array-declarator-constant-and-vla.t) ·
[PA38 atomic parameter adjustment](../pa38/tests/general/300-array-parameter-atomic.t) ·
[PA38 parameter adjustment](../pa38/tests/general/300-variable-array-parameter.t)

## Restricted pointer types

C11 6.7.3 permits `restrict` on pointers to object types. This includes
pointers to `void` and incomplete records. Array parameter brackets qualify
the adjusted pointer object under 6.7.6.3p7. The top-level qualifier goes
away for lvalue conversion and when comparing function parameter types.
It remains observable in the type of the parameter's address. Pointer
qualification conversion under 6.3.2.3p2 adds qualifiers at the first
pointed-to type. Pointer assignment in 6.5.16.1 preserves the source's
pointed-to qualifiers. A conditional expression uses their union under
6.5.15p6.

C23 expands the constraint on `restrict` to arrays whose elements are
object pointers, including multidimensional arrays. In earlier editions
cppgm treats direct qualification through such an array typedef as an
extension. C11's `_Atomic` qualifier can appear alongside qualifiers on
the adjusted pointer object, using the pointer qualification combinations
discussed in DR 423.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 DR 423](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1846.htm#dr_423) ·
[WG14 N2607](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2607.pdf) ·
[PA38 parameter and conversion case](../pa38/tests/general/300-restrict-parameters.t)

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

C11 6.5.3.2 supplies the result type from the pointer operand. A GNU
`typeof` query can therefore recover `void` or a qualified `void` through
indirection without evaluating the pointer. The same clause cancels
`&*p` even when `p` is null. musl's `<tgmath.h>` uses the unevaluated
form with conditional pointer types. Standard `sizeof` and assignment
still require complete object types.

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

## C execution environments

C17 5.1.2 distinguishes freestanding startup from the hosted `main`
interface. The native cppgm startup also supplies the environment
vector as a third parameter. The WASI startup uses the zero- and
two-parameter forms. C17 6.10.8.1 gives `__STDC_HOSTED__` the
value corresponding to the selected environment.

Like GCC and Clang, freestanding C checks `main` as an ordinary function
and avoids inferring library contracts from ordinary function names.
Explicit builtins retain their semantics. The compiler can still
generate calls to helpers, which the linker or user-supplied runtime must
provide. The compiler supplies startup and library members independently
according to the link options. Header paths are selected separately.

[C draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC C dialect options](https://gcc.gnu.org/onlinedocs/gcc-15.1.0/gcc/C-Dialect-Options.html) ·
[Clang freestanding builds](https://clang.llvm.org/docs/UsersManual.html#freestanding-builds)

## GNU inferred object types in C headers

GCC's C `<stdatomic.h>` uses the reserved spelling `__auto_type` to
hold atomic arguments used by a macro. The declaration takes one plain
identifier and one expression initializer. Its identifier enters scope
after that initializer. Infer the type from the initializer's value
conversions and apply any qualifiers written on the declaration.
For an initializer with a variably modified type, reuse the bounds
captured by the initializer. This keeps the effects and evaluation
count the same as for an explicitly typed declaration.

[GCC GNU C deduction rules](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc/Typeof.html) ·
[PA38 deduction case](../pa38/tests/general/300-c-gnu-auto-type.t) ·
[PA38 hosted atomic case](../pa38/tests/controls/500-c11-stdatomic.t)

## C integer headers by target

`<stdint.h>` can use compiler predefined type names, integer limits,
and literal suffixes. These names describe distinct ABI roles. The
Darwin targets use `long long` for the exact 64-bit type and `long` for
the maximum-width integer and pointer-sized signed types. The wasm32
profiles use `long long` for the exact 64-bit and maximum-width types
and 32-bit `long` for pointer-sized signed integers. Match the type
rank along with the width, including in the literal forms returned by
`INT64_C` and `INTMAX_C`.

[Clang predefined integer macros](https://github.com/llvm/llvm-project/blob/llvmorg-21.1.8/clang/lib/Frontend/InitPreprocessor.cpp) ·
[Clang resource stdint.h](https://github.com/llvm/llvm-project/blob/llvmorg-21.1.8/clang/lib/Headers/stdint.h) ·
[PA38 integer header case](../pa38/tests/general/500-c-integer-headers.t)

## C11 lock-free atomic queries

The lock-free macros are preprocessing constants. Their values describe
the scalar atomic types and the selected instruction profile. The
type-based `atomic_is_lock_free` interface accepts a null pointer of
the corresponding atomic pointer type. The GNU size and pointer builtins
can also ask about an explicit address alignment.

On Linux, widths and addresses that cannot be proved lock-free by the
compiler can query the linked `libatomic` provider. The size-only
Clang builtin uses natural alignment. The Wasm and Darwin profiles use
their inline width and alignment rules for a dynamic query.

[WG14 DR 458](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm#dr_458) ·
[WG14 DR 465](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm#dr_465) ·
[GCC atomic builtins](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc/_005f_005fatomic-Builtins.html) ·
[Clang atomic extensions](https://clang.llvm.org/docs/LanguageExtensions.html#c11-atomic-builtins)

## Atomic aggregate values

The size and alignment of an atomic object can differ from those of its
ordinary value type. Clang's C header passes desired values by value. GCC's
C header passes pointers to ordinary desired, expected, and result values.
Both interfaces use the target's atomic representation for the operation.
A failed compare-exchange replaces the expected value, and a successful
compare-exchange leaves it intact.

cppgm initializes the padding added by the atomic type when it prepares an
ordinary value for an atomic write or comparison. An inline operation uses
the atomic storage width. A call to a generic runtime provider passes the
atomic storage width to the provider and copies only the ordinary value
bytes to the caller's result. The default layout follows the course's
Clang-style rounding rule. A separate compiler using a different
`_Atomic(T)` layout needs matching object layout for interoperation.

[WG14 DR 431](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm#dr_431) ·
[Clang atomic lowering](https://github.com/llvm/llvm-project/blob/llvmorg-21.1.8/clang/lib/CodeGen/CGAtomic.cpp) ·
[GCC atomic builtins](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc/_005f_005fatomic-Builtins.html)

## Ordinary C atomic reads and assignments

An lvalue conversion reads an atomic object with sequentially consistent
ordering and produces a value of the unqualified type. This applies when
copy-initializing, passing, returning, or discarding a value. An assignment
stores the entire atomic representation with the same ordering. Its
result is the stored value and requires no additional load. Initialization
of an unpublished object writes the ordinary value and initializes any
additional atomic padding.

[WG14 N1570, §§6.2.6.1, 6.3.2.1, and 6.5.16](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[Clang atomic lowering](https://github.com/llvm/llvm-project/blob/llvmorg-21.1.8/clang/lib/CodeGen/CGAtomic.cpp)

## C atomic read-modify-write

Compound assignment, increment, and decrement on an atomic object
perform one sequentially consistent read-modify-write. The object
address and right operand are computed once. A compare-exchange loop
computes a new value from the current expected value on each attempt.
Failure supplies the replacement expected value. Postfix increment
and decrement return the value consumed by the successful operation.

With the generic atomic ABI, use the same width and runtime provider
for the initial load, compare-exchange, and ordinary atomic reads and
writes. This allows one provider to synchronize all operations on
the object. The initial load can be relaxed because the successful
compare-exchange performs the ordered operation. The floating-point
environment rules for discarded attempts belong to the outstanding
`FENV_ACCESS` qualification.

[WG14 N1570, §§6.5.2.4, 6.5.3.1, and 6.5.16.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 N1567 on floating-point retries](https://www.open-std.org/JTC1/sc22/wg14/www/docs/n1567.htm) ·
[LLVM atomic libcalls](https://llvm.org/docs/Atomics.html#libcalls-atomic)

## Explicit 128-bit integer atomics

The GCC and Clang C headers can use their atomic builtins on the
`__int128` integer extension. GCC's scalar load, store, exchange, and
compare-exchange forms use the same runtime representation as the C11
forms. A scalar compare-exchange takes an expected pointer to the value
type. A read-modify-write computes the wrapped result at the width of the
object and returns either the old or the new value according to the
builtin spelling.

For a synthesized compare-exchange loop, the operation's order applies
to a successful exchange. A failure reads the observed value. Release
therefore becomes relaxed for failure, and acquire-release becomes
acquire. A runtime-valued order takes the sequentially consistent
fallback while its operand is still evaluated once.

[GCC atomic builtins](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc/_005f_005fatomic-Builtins.html) ·
[Clang atomic builtins](https://clang.llvm.org/docs/LanguageExtensions.html#c11-atomic-builtins) ·
[WG14 N1570, §7.17.7](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

## Complex to real conversions

C99 §6.3.1.7 converts a complex expression to a real type using the real
component and the ordinary scalar conversion. This includes truncation
toward zero in the representable range for an integer result. The separate
rule in §6.3.1.2 gives a boolean result using the comparison of the entire
value with zero. The same value rules apply during static initialization.
[WG14 N1256, §§6.3.1.2, 6.3.1.4, and 6.3.1.7](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf)

## Clang C overloadable declarations

The Clang resource header uses a set of prototyped functions with one
name to implement C type-generic math. Its promotion queries also use
an unavailable ellipsis declaration. The expression needs a valid
selected function even when `typeof` suppresses evaluation.

The attribute changes the function name's encoding. The target still
uses the declared C parameter and result types for calls. An unmarked
overload keeps its C symbol. Declaration and call resolution use typed
signatures, including C-compatible conversions and the C floating
promotion ranks. These rules are independent of the header that uses
the attribute.
[Clang overloadable declarations](https://clang.llvm.org/docs/AttributeReference.html#overloadable)
