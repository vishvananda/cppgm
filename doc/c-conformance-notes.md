# C conformance notes

These notes record WG14 rules exercised by the course regressions and the
initial upstream campaign. Clause numbers use the named edition or draft.

## C23 enumeration members and fixed bases

A fixed base names an integer type other than an enumeration or a
bit-precise integer. The underlying type drops qualifiers, including
atomic qualification. A base without a definition requires a standalone
declaration. The enumerator has the enumeration type while evaluating
later members. Each member value must fit the base. An implicit
successor of the base's maximum violates the constraint.

In a definition without a fixed base, an explicit value that fits in
`int` gives its member type `int`. Wider explicit values retain their
expression type during the definition. An implicit increment uses the
type of the addition and preserves the previous member's signedness
when widening after overflow. On completion, the members all have type
`int` if every value fits. Otherwise they have the enumeration type.
Its eligible compatible integer representation must hold every value.
cppgm's inferred range ends at `intmax_t` and `uintmax_t`. The
compiler-provided `__int128` is available as an explicit base.

WG14 issues 1021 and 1130 remain open. They cover promotion wording
and the prior type visible while redeclaring an enumerator.
[C23 N3096 §6.7.2.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf) ·
[WG14 issue 1021](https://www.open-std.org/jtc1/sc22/WG14/issues/c23/issue1021.html) ·
[WG14 issue 1130](https://www.open-std.org/jtc1/sc22/WG14/issues/c23/issue1130.html)

## C23 structure and union tag redefinitions

After closing the first member list, a tagged structure or union stays
complete through later definitions. Two definitions of the same tag in
the same scope cannot be nested. Compare the lists in declaration order,
including unnamed bit-fields, and check corresponding members' names,
types, alignment requests, and bit-field widths. Resolve each member's
type at its own declaration. If lookup finds a different tag in a
nearer scope, its type is distinct even if its layout matches.

Compare the contents of anonymous structure and union members. A type
declared without a tag in a named member remains distinct from any
other declaration of such a type. cppgm follows this distinction and
diagnoses the same-tag nesting cases that Clang 21 accepts in its local
probes. The record rules also compare the GNU layout attributes that
cppgm implements. A type alignment specified on a forward declaration
persists on the tag independently of the definitions' requests.
[C23 N3220 §§6.2.7 and 6.7.3.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N3037](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3037.pdf)

## C23 tag compatibility across scopes

Complete records with the same tag and kind may be compatible
across scopes. Compare each member's compatible type, name, alignment
and bit-field facts in order. The anonymous-member rule applies to
anonymous structures and unions embedded as members. A named field of
an untagged type retains its distinct type. A flexible array member and
a sized member do not match in the GCC and Clang C23 checks.

Check each pair in a recursive group before saving compatibility.
An incomplete record can acquire members later, so a failed comparison
must be reconsidered after completion. A composite record preserves
the stronger types of corresponding members. One original record can
supply the composite if all of its members already meet the requirements.

cppgm follows GCC 15 when comparing fixed-base enum tags with unknown
members. Two forward declarations with matching tags and bases are
compatible. A forward declaration and a definition remain distinct until
both have member lists to compare. Clang 21 also treats a tag with a
member list as compatible with a matching forward tag in the tested
case. WG14 issue 1018 covers the differing interpretations. A result
that depends on two forward enum declarations can change when either
definition appears, including inside a record comparison.
[C23 N3220 §6.2.7](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 issue log N3977, issues 1018 and 1027](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3977.htm) ·
[WG14 N3980](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3980.pdf)

## C23 enumeration tag redefinitions

Repeated definitions of the same tag in the same scope share the
enumeration type. Both lists pair members by name and agree on each
member's integer value. The lists can use different orders or defining
expressions. A fixed base must agree across declarations. The two
definitions cannot be nested within each other.

cppgm keeps the completed definition's enumerator types visible in
the next list, as exercised by the pinned GCC `c23-tag-enum-7.c`.
WG14 issue 1130 considers which previously declared type should apply
when the first definition changes the member's type on completion.
[C23 N3220 §§6.2.7, 6.7.3.3, and 6.7.3.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N3037](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3037.pdf) ·
[WG14 issue 1130](https://www.open-std.org/jtc1/sc22/WG14/issues/c23/issue1130.html)

## Named register objects and parameters

An explicit unary `&` on a register object or a record member reached
through that object requires a diagnostic. This includes a parameter
object and applies in unevaluated contexts. A register pointer can
designate separate storage. `sizeof` can inspect a register array.
The language gives undefined behavior to array-to-pointer conversion
of a register array. WG14 DR 116 confirms that implicit conversion
requires no diagnostic. Both cases retain that distinction in C23.
[C11 N1570 §§6.3.2.1, 6.5.3.2, 6.7.1, 6.9](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C23 N3220 §§6.3.2.1, 6.5.4.2, 6.7.2, 6.9.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 DR 116](https://open-std.org/JTC1/SC22/WG14/issues/c90/issue0116.html)

## C23 storage-class specifiers on compound literals

A compound literal can begin with `static`, `thread_local`,
`register`, or `constexpr`. Apply the storage-class constraints of
an object definition in its associated scope. At block scope,
`thread_local` requires `static`. The address of a thread-local object
is specific to an executing thread. An automatic literal keeps its
block lifetime. Its initializer is evaluated at each evaluation of the
literal unless it is `constexpr`.

The `constexpr` specifier adds const qualification and requires
exactly representable constant initializer values. The object's value
and fields reached by member access can be constant operands. Its
address can be an address constant when the object has static storage
duration. Address-of cannot designate a register literal or one of
its subobjects.

The C23 definition form uses the same storage-class syntax as object
definitions. WG14 N3871 spells out the permitted set as a constraint
for the next edition. cppgm diagnoses spellings outside that set.
Clang 21 does not parse those specifiers on compound literals. The
pinned GCC suite provides the execution and diagnostic cases.
[WG14 N3220 §§6.5.3.6, 6.6, 6.7.2 and 6.7.11](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N3038](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3038.htm) ·
[WG14 N3871](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3871.pdf)

## C23 labels in compound statements

An identifier, case, or default label can precede a declaration or
end a compound statement. The free label has the effect of a null
statement. A following declaration still belongs to the enclosing
block. The restrictions on entering the scope of variably modified
identifiers through a goto or switch label still apply.

A labeled substatement of an unbraced selection or iteration body
requires a statement after the label. GCC 15 and Clang 21 agree on
rejecting a declaration there. GCC also rejects a missing statement
at the closing brace of the surrounding block. Clang 21 accepts that
spelling. Use the compound-statement grammar for the boundary.
[WG14 N3220 §§6.8.2–6.8.5 and §6.8.7.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N2508](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2508.pdf)

## C23 empty initialization of variable-length arrays

An automatic VLA accepts an empty initializer. Its elements are
default-initialized, recursively including the first member of any
union and the padding of aggregate types. Compute the bounds at the
same point as for an uninitialized VLA and use the captured extent for
initialization. A typedef retains its earlier extent. A nonempty
initializer for a VLA, an empty initializer for an array of unknown
size, and a VLA compound literal require diagnostics.
[WG14 N3220 §§6.5.3.6, 6.7.11](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

## C23 auto inference

An object definition with `auto` and no written type obtains its type
from the converted initializer. Apply the written qualifications after
lvalue conversion and array or function decay. The inferred name is
unavailable in its initializer. It shadows the ordinary name in outer
scopes for this purpose. GNU `__auto_type` leaves the outer ordinary name
visible during its initializer. The implementation accepts the plain
identifier form with optional parentheses and attributes and requires
a single declarator for inference. Written types retain the block-scope
storage-class use of `auto`.
[WG14 N3220 §§6.2.1, 6.7.1, 6.7.2 and 6.7.10](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[Open C23 issue 1102](https://www.open-std.org/jtc1/sc22/wg14/issues/c23/issue1102.html)

GCC 15 accepts inferred declarations qualified by `_Atomic` and
`restrict`. Clang 21 predates LLVM's correction for these qualifiers.
The fixtures also exercise bit-field inference using the type the
compiler gives the generic controlling expression. GCC 15 accepts this
form, while Clang 21 diagnoses it.
[LLVM qualifier correction](https://github.com/llvm/llvm-project/commit/849d90b)

## C23 constexpr objects

A definition with `constexpr` adds const qualification. File-scope
definitions have internal linkage. A block definition without `static`
has automatic duration and a distinct address per live instance. Named
constants include members reached through `.`, recursively, with the
active member required for unions. Array subscripting does not produce a
named constant. The initializer must preserve each written value in its
destination, including the encoding of a string's elements and the
range of a bit-field. The constraint applies before a later designator
overrides a written value.
[WG14 N3220 §§6.2.2, 6.4.4.4, 6.4.5, 6.6, 6.7.2, 6.7.11](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

GCC 15 accepts a member of a constant aggregate as a `_BitInt` width in
strict mode. Clang 21 treats that form as a folding extension. The course
checks the named-member rule from §6.6. Clang's internal-linkage case is
replayed for object generation, with symbol binding checked separately
from the upstream LLVM IR assertions.

A structure or union constant can have a sparsely initialized array
member. Reading its scalar member requires the value of that member.
The declared array extent still governs object size and the array's
runtime storage. The same rules apply when another constexpr object is
initialized from the aggregate value.
[WG14 N3220 §§6.6, 6.7.11](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

After a copy initializer, a later designator replaces the named
subobject and preserves values supplied for its siblings. A braced
initializer still initializes its whole destination, including implicit
zeros. These rules also apply to copies of C23 constexpr objects.
[WG14 DR 413](https://open-std.org/JTC1/SC22/WG14/issues/c11c17/issue0413.html) ·
[WG14 DR 253](https://www.open-std.org/jtc1/sc22/wg14/issues/c99/issue0253.html)

## C23 bit-precise integers

The width includes the sign bit for a signed type. The minimum is two
bits for a signed type and one for an unsigned type. cppgm supports
widths through 128 and defines `__BITINT_MAXWIDTH__` for the target's
`<limits.h>`. It ranks a bit-precise integer below a standard or
extended integer of equal width. Converting an out-of-range integer to
a signed bit-precise type keeps the low bits and interprets them as
two's complement.
[WG14 N3220 §§6.2.5, 6.2.6.2, 6.3.1.1–6.3.1.3, 6.7.3.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

The parser retains a typed operand for a width and the scanned value of
a bit-precise literal. One-word values use the existing integer
operations. Wider values use the existing two-word representation.
Storage and calling conventions select the carrier's size and alignment.
Wasm aligns a wide unnamed argument to eight bytes, in agreement with
Clang's `va_arg` lowering. The selected Clang Wasm toolchain can align
outgoing wide arguments to sixteen bytes. A wide unnamed argument after
a single narrow one demonstrates the mismatch even between two Clang
objects.
[x86-64 psABI](https://gitlab.com/x86-psABIs/x86-64-ABI/-/blob/master/x86-64-ABI/low-level-sys-info.tex) ·
[AAPCS64](https://github.com/ARM-software/abi-aa/blob/main/aapcs64/aapcs64.rst)

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

## Structure and union declarator lists

C99 through C17 §6.7.2.1 permits a list in which each declarator can
independently include a bit-field width. An unnamed bit-field can appear
between ordinary members. One specifier-qualifier list supplies the base
type for the entire declaration, including when it defines a new
enumeration. Type constraints still apply to each member, including
the prohibition on a member of function type. C §6.2.3 gives each record
a separate member name space. A width expression uses the ordinary
name space, so a member name does not hide a typedef or enumerator
with the same spelling.

[C99 with corrigenda, N1256 §6.7.2.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft, N1570 §6.7.2.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 mixed declarators](../pa38/tests/general/300-c-mixed-member-declarators.t)

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
specifiers in C99 and pedantic C90 diagnostics for repeats in specifiers,
pointer declarators, or qualifiers applied through a typedef. The
typedef case includes arrays of qualified elements. The pinned Clang
cohort checks WG14 N505.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[PA38 qualifier regression](../pa38/tests/general/300-repeated-qualifiers.t)

## Control statement scope

C99 6.8.4p3 and 6.8.5p5 give each selection or iteration statement and
its substatements block scopes. An unbraced nested statement can
introduce a tag or enumerator, for example through a type name in an
`if` condition. Its names do not affect typedef recognition in the
enclosing statement's alternate branch. In a `do` statement, a name
introduced by the trailing condition belongs to the loop scope.
Keep the parser's name scopes aligned with those used in semantic
analysis. C90 and C95 put these names in the enclosing block.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[PA38 C99 scope fixture](../pa38/tests/general/500-c99-control-local-type-names.t) ·
[PA38 C90 scope fixture](../pa38/tests/general/500-c90-control-scopes.t)

## Array conversion in C90 and C95

The conversion requires an array lvalue in the legacy editions. The
array member of a structure returned by value therefore keeps its
array type as the right operand of comma. It cannot initialize a
pointer or participate in pointer arithmetic in that mode. GNU C
permits subscripting the array as an extension, including the
commuted form. Apply C99's broader conversion to all array expressions.
An element reached through C's array subscript is an lvalue, subject
to the lifetime restrictions on the temporary object.

[GCC non-lvalue array extension](https://gcc.gnu.org/onlinedocs/gcc/Subscripting.html) ·
[C99 with corrigenda, N1256 §§6.3.2.1 and 6.5.2.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[PA38 C90 array fixture](../pa38/tests/general/500-c90-returned-array-contexts.t) ·
[PA38 C99 array fixture](../pa38/tests/general/500-c99-returned-array-contexts.t)

## Constant contexts in legacy C

WG14 DR 081 leaves signed left shift implementation-defined before C99.
cppgm shifts the promoted left operand's bit representation, keeping
the bits that fit the type's width. Validate the shift count in a
constant expression before applying the operation. C90 and C95
constant initializers exclude assignment, increment, decrement,
function call, and comma operators even in a branch that will not be
evaluated. A constant size query can have an unevaluated operand.
In a brace-enclosed initializer of an automatic aggregate, the same
constant-expression restriction applies to the elements. A GNU
`__extension__` on the declaration can suppress the edition
diagnostic. A compatible record expression used as an unbraced
automatic initializer is allowed.

[WG14 DR 081](https://www.open-std.org/jtc1/sc22/wg14/www/docs/dr_081.html) ·
[GCC C90 shift rationale](https://gcc.gnu.org/legacy-ml/gcc-patches/2004-07/msg02126.html) ·
[PA38 shift fixture](../pa38/tests/general/500-c90-signed-left-shift.t) ·
[PA38 initializer fixture](../pa38/tests/general/500-c90-initializer-constant-contexts.t)

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

## Edition diagnostics in system macros

The installed glibc header can use a C11 generic selection in a
`<math.h>` macro expanded in C99, including in a size-optimized build.
cppgm follows GCC's system macro policy for these diagnostics. A token
written in the replacement list carries that policy into parsing. A
paste of two such tokens carries it too. Tokens supplied as arguments
retain their original policy. `-Wsystem-headers` enables the diagnostic
for the replacement-list tokens.

[GCC system headers](https://gcc.gnu.org/onlinedocs/cpp/System-Headers.html) ·
[PA38 system macro fixture](../pa38/tests/general/500-c99-system-macro-generic.t)

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

## Scoped floating-environment access

The C `STDC FENV_ACCESS` pragma applies at file scope and before the
explicit declarations and statements of a compound block. A nested
block restores the enclosing setting on exit. cppgm's default is OFF.
A direct pragma and `_Pragma` affect the same scope. Scalar real
arithmetic in an enabled scope observes the active rounding mode and
retains its floating status effects even when the value is discarded.
Runtime conversions preserve the active rounding mode where the
conversion uses it, and retain their status effects. A floating-to-integer
conversion still truncates toward zero. Ordered C relational operators
signal invalid on a quiet NaN in an enabled scope. Equality, inequality
and the quiet comparison macros keep their quiet semantics. Initializers
with static storage use translation-time arithmetic.
IEC 60559 square root observes rounding and can raise inexact. A call
to `pow` with negative zero raised to a negative odd integer raises
divide-by-zero. Calls to `sin` and `cos` on infinity raise invalid
independently if a flag clear separates them. In an enabled scope the
observable effects survive even when the call's result is discarded.
Binary128 classification and quiet comparisons can use the two words of
the value directly. The low word can distinguish a subnormal from zero
and a NaN from infinity. The quiet comparisons treat the two signed zeros
as equal and keep NaNs unordered. In an enabled native scope, a binary128
relational operator signals invalid independently of the comparison
helpers in the runtime library.
Division by a signed floating zero in a static C initializer is computed
at translation time. The result is a quiet NaN for zero divided by zero
or an infinity with the quotient's sign for a nonzero numeric numerator.
This also supports the installed WASI header's `NAN` expansion. An
automatic division in an enabled scope still raises its native exception.

[WG14 N1570, §§7.6.1, 7.12 and Annex F](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 hosted math status probe](../pa38/tests/general/500-c-fenv-libm.t) ·
[PA38 static division and runtime status probe](../pa38/tests/general/500-c-fenv-static-zero-division.t) ·
[PA38 long double classification and comparison probe](../pa38/tests/general/500-c-fenv-quad.t) ·
[PA38 scope and runtime probe](../pa38/tests/general/500-c-fenv-binary.t)

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

## VLA capability by edition

C99 requires variably modified types and automatic variable-length
arrays. C11 and C17 allow the implementation to omit the feature and
define `__STDC_NO_VLA__`. C23 requires variably modified types, including
adjusted array parameters, and retains the macro for an implementation
that omits automatic VLA objects. cppgm implements both and leaves the
macro undefined on the supported targets.

[C11 draft §6.10.8.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 N2778](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2778.pdf) ·
[C23 draft §6.10.10.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

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

## Array pointer qualification

Through C17, the qualifications of array elements do not qualify the
array itself. Under C11 6.7.3p9 and 6.5.16.1p1, a pointer to a row
with const elements can therefore initialize a plain void pointer.
Adding const to elements through an implicit row-pointer conversion
requires a diagnostic in that edition. Treat the C23 conversion as an
extension where the diagnostic policy permits it.

C23 6.2.5 gives an array the ordinary qualifications of its elements.
An array of atomic elements remains an array type, so atomic
qualification still participates in element compatibility. Apply the
new qualification at the immediate pointed-to type. Preserve
qualification below a further pointer. Section 6.7.7.3 requires equal
values for constant bounds when both are present and permits compatible
types with a fixed and a runtime bound. Section 6.5.16 combines the
pointed-to qualifiers and uses the composite pointed-to type. The
same notion of qualification applies to the constraints for assignment,
argument passing, pointer comparisons, and pointer subtraction.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C23 text](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N2607](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2607.pdf) ·
[PA38 C23 composite case](../pa38/tests/general/300-c23-qualified-array-pointer-composite.t)

## Ordered pointer comparisons

C11 6.5.8 and C23 6.5.9 require pointers to compatible object types,
allowing qualifications on either referenced type. Compatible void
pointers satisfy this rule. An object pointer and a pointer to void
with a different referenced type may compare for equality under
C11 6.5.9 and C23 6.5.10. Those equality clauses also permit compatible
function pointers and null pointer constants. The corresponding
ordered comparisons require a diagnostic. A supported GNU form may
still use the existing extension and system-header policy.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C23 text](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[PA38 comparison control](../pa38/tests/general/300-c-pointer-order.t)

## Discarded function results

C11 6.9.1p12 and C23 6.9.2 specify undefined behavior when a function
reaches its final brace and the caller uses the missing value. A call
that discards the result still returns control and retains the body's
side effects. This applies to both scalar and aggregate return types.
It differs from the separate hosted rule that falling off the end of
`main` returns zero.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C23 text](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[PA38 fallthrough regression](../pa38/tests/general/300-c-nonvoid-discarded-fallthrough.t)

## GNU shutdown functions

A GNU `destructor` attribute retains a function for normal termination.
The attribute can be written on an earlier declaration. It may coexist
with `constructor` on the same function. The implementation uses the
existing constructor priority range and defaults an omitted priority
to 65535. Larger destructor priorities run first. The usual library
callbacks registered during execution run before these earlier
callbacks. Abrupt termination with `_Exit` skips the hooks.

ELF carries each hook in a prioritized finalization array. Darwin host
objects register the callback with the image's DSO handle. Wasm uses
the existing C exit callback facility, so a freestanding module needs
to supply a runtime that calls its registered functions.

[GCC attribute documentation](https://gcc.gnu.org/onlinedocs/gcc-16.1.0/gcc/Common-Attributes.html) ·
[Clang attribute documentation](https://clang.llvm.org/docs/AttributeReference.html#constructor-destructor) ·
[PA30 host runtime case](../pa30/tests/run/800-gnu-shutdown-functions.t) ·
[PA38 C runtime case](../pa38/tests/general/500-gnu-shutdown-functions.t)

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

## Flexible arrays and record members

A flexible array is an incomplete array at the end of a struct with at
least one other named member. Names injected through C11 anonymous
records count. The restriction on embedding a flexible record in a
struct or array applies to unions that contain it, including through
another union. A pointer to such a record is a complete pointer type.
An ordinary struct copy uses the struct's fixed layout. Access through
the flexible member can use the storage supplied for the containing
object, as in the allocation example in the standard.

Use the declaration's typed members to recognize those constraints. In
pedantic mode, apply the GNU extension diagnostic to an embedding in a
struct or array and to a nonempty initializer of the flexible member.
GCC and Clang also require the member type itself to be an object type,
so a function typedef cannot declare a field.

GCC also accepts a string initializer for a nested flexible member in a
static record, including a file-scope compound literal. It rejects a nested
element list or a flexible tail within an array element. A string can use a
containing union's storage or extend the static object's end. cppgm keeps
the real member offsets when emitting data and reports a string that would
overlap a following member. Clang 22 rejects the nested string form.
[PA38 GNU strings](../pa38/tests/general/300-c-gnu-nested-flexible-strings.t) ·
[GCC 15 initializer implementation](https://github.com/gcc-mirror/gcc/blob/releases/gcc-15.2.0/gcc/c/c-typeck.cc) ·
[C11 draft, §6.7.2.1p3, p18, p20–p23](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC flexible array extensions](https://gcc.gnu.org/onlinedocs/gcc/Zero-Length.html)

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

## C floating-point contraction

C99 through C17 permit the implementation to contract a floating expression
within a scope where `FP_CONTRACT` is ON. OFF requires separate operations.
An explicit cast and a full-expression boundary can force intermediate
rounding. The pragma follows the scope and restoration rules of
`FENV_ACCESS`. cppgm defaults to OFF and may emit one rounded multiply-add
for a direct scalar float or double expression on AArch64. The LowIR
instruction records the decision before optimization.

[WG14 N1256 §§6.5, 7.12.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[WG14 N1570 §§6.5, 7.12.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 scope and runtime case](../pa38/tests/general/500-c-fp-contract.t)

## Complex arithmetic range and status effects

`CX_LIMITED_RANGE` has an OFF default and the same lexical scope as the
other C floating-point pragmas. cppgm uses the elementary product and
quotient formulas for scalar floating components in an ON scope. It uses
the full-range helpers for scaling and recovery in OFF scopes and for
software floating components. Hosted magnitude functions still use the
target math library.

A complex runtime call can update status flags. Under `FENV_ACCESS ON`
the call retains its ABI and carries a call-site boundary that accounts
for the active floating environment. An unused quotient can raise
invalid. The ON range formulas use the same effectful real operations
as other floating expressions in the scope.

[WG14 N1256 §§7.3.4, G.5.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[WG14 N1570 §§7.3.4, 7.6.1, G.5.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 range probe](../pa38/tests/general/500-c-complex-limited-range.t) ·
[PA38 status probe](../pa38/tests/general/500-c-complex-fenv.t)

## C23 resource inclusion

`#embed` and `__has_embed` share the same search and effective length.
The physical source directory precedes resource directories for quoted
names. Angle names use the ordered `--embed-dir=` list. Absolute names
refer directly to a regular file. This keeps resource lookup independent
of the header search and of presumed locations from `#line`. Found
resources in directives and queries are included in generated dependencies.

The effective length is the file size capped by the preprocessing
expression in `limit`. A zero limit still requires a successful lookup.
`prefix` and `suffix` wrap nonempty byte expansions. `if_empty` supplies
the entire empty expansion. Unsupported parameter names give a valid
query a zero result and are diagnosed in directives. The GCC and Clang
vendor parameters are outside this implementation.
[WG14 N3220 §§6.10.2, 6.10.4, and 6.10.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC binary resource inclusion](https://gcc.gnu.org/onlinedocs/cpp/Binary-Resource-Inclusion.html)

## C23 variadic macro omission

An omitted variadic argument in C23 contributes an empty token range.
An explicitly empty argument stays valid in earlier editions with
variadic macros. `__VA_OPT__` uses the macro-replaced argument, so a
token that expands away has the same effect as an empty argument.
Stringizing and pasting follow the ordinary replacement rules, including
placemarkers.
[WG14 N3033](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3033.htm)

In C17 with `-pedantic-errors`, GCC 15 and Clang 21 reject the
omission in a macro defined and called in user source. GCC accepts
the same omission for a system-header macro. cppgm follows that
behavior and enables the diagnostic there with `-Wsystem-headers`.

## C23 nullptr and variadic arguments

C23 reserves `nullptr` as a predefined constant. Its type is distinct
from pointer and arithmetic types and shares the object representation of
a null `void *`. The target layout gives it the size and alignment of
`char *`. The hosted SDK's `<stddef.h>` declares `nullptr_t`, as verified
with GCC 15's header. Earlier C modes permit both spellings as identifiers.

Apply the C23 conversion and operator rules before lowering. Equality
with `nullptr_t` accepts an integer zero constant expression. In a
conditional with a `nullptr_t` arm, an integer zero arm violates the
operand constraint. A mixed conditional takes the pointer type in either
order, including when that pointer is `(void *)0`. Preserve operand
effects even when the converted value is always null or false. The
published C23 rules and both tested compilers reject a direct cast from
`nullptr_t` to `int`. WG14 issue 1053 remains open and discusses changing
integer casts of null values.
[WG14 N3220 §§6.3.2.4, 6.5.5, 6.5.10, 6.5.16, 7.21.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N3042](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3042.htm) ·
[WG14 issue 1053](https://www.open-std.org/jtc1/sc22/wg14/issues/c23/issue1053.html)

C23 permits a variadic function to have zero named parameters. GCC 15
and Clang 21 implement the C23 `<stdarg.h>` `va_start` macro using
`__builtin_c23_va_start`. The first argument is the list. Additional
compatibility arguments are unevaluated and can contain other balanced
tokens. cppgm lowers the first argument through the existing variadic
intrinsic. The target ABI lets the callee read a `nullptr_t` argument as
`void *` or a character pointer.
[WG14 N3220 §§6.7.7.4, 7.16.1.1, 7.16.1.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

## C23 typeof specifiers

The lexer reserves `typeof` in C23 and the GNU C dialects, and
`typeof_unqual` in C23. GCC 15 and Clang 21 also accept `__typeof` and
`__typeof_unqual`, with or without trailing underscores, in C17.
The operators accept an expression or type name and diagnose a bit-field
operand. They share the variably modified operand evaluation rules.
A sole unnamed parameter of type `void` is an empty parameter list, even
when the type came from an expression operand of `typeof`.

The result retains the operand's type and qualifiers for `typeof`.
`typeof_unqual` removes top-level qualifiers, including `_Atomic` from
scalar and record types, and retains qualifiers beyond pointer derivations.
Array dimensions carry the ordinary qualifiers of their elements. The
unqualified version retains bounds and removes those ordinary qualifiers
without removing atomic element types, following GCC's PR117781 tests.
[WG14 N3220 §§6.2.5, 6.7.3.6, 6.7.7.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 N2927](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2927.htm) ·
[GCC array qualification fix](https://gcc.gnu.org/pipermail/gcc-cvs/2024-November/413304.html)

## C23 boolean constants and static assertions

`bool` names the same type as `_Bool`. `true` and `false` are predefined
constants of that type with values 1 and 0, including in integer constant
expressions. Preprocessing conditions interpret an unexpanded `true` as
1 in C23. In earlier C modes it is an ordinary identifier, which becomes
0 after macro expansion. C23 accepts `static_assert` with or without a
message and also retains `_Static_assert` as an alternate spelling.
[WG14 N3220 §§6.4.4.6, 6.6, 6.7.12, 6.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

## C23 attribute inquiries

`__has_c_attribute` is defined in C preprocessing conditions, including
the earlier C modes for GCC and Clang compatibility. Rescan its operand
to form a single attribute token with an optional namespace. Report
`202311L` for `noreturn` and `_Noreturn`, including the reserved spellings.
GCC 15 uses the same revision. Clang 21 reports `202202L` for `noreturn`.
Qualified GNU and target attributes use the existing capability queries.
Unsupported attributes return zero.
[WG14 N3220 §§6.7.13.7, 6.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC attribute inquiry](https://gcc.gnu.org/onlinedocs/cpp/_005f_005fhas_005fc_005fattribute.html) ·
[Clang attribute inquiry](https://clang.llvm.org/docs/LanguageExtensions.html#has-c-attribute)

## C23 binary integers and digit separators

GCC and Clang accept binary integers before C23 as an extension and
diagnose them under the pedantic policy. This applies to integer
constants in ordinary tokens and preprocessing conditions, including
tokens formed by macro pasting. Digit separators are part of the C23
token grammar. Through C17 the apostrophe has its earlier lexical
meaning in both ISO and GNU C modes.
[WG14 N3220 §§6.4.4.2–6.4.4.3, 6.4.8](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

## C23 Unicode identifiers

C23 uses XID_Start and XID_Continue for Unicode identifiers and
requires the decoded spelling to be in NFC. The compiler uses the
Unicode Character Database 15.1.0 for both checks. Raw and escaped
code points participate in the same check, including after line
splicing and token pasting. The check precedes identifier interning
and leaves valid spellings intact.
[WG14 N2836](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2836.pdf) ·
[WG14 N3220 §6.4.2.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

Use the generated tables checked in with the compiler. The table
generator checks the hashes of its three inputs from the Unicode
15.1.0 Character Database archive. The implementation uses NFC
Quick_Check and canonical combining classes to identify the small
segments that need decomposition and recomposition.
[Unicode 15.1.0 UCD archive](https://www.unicode.org/Public/zipped/15.1.0/UCD.zip) ·
[Unicode Normalization Forms](https://www.unicode.org/reports/tr15/)


## C23 bit utilities and checked integer arithmetic

The C23 bit utility macros preserve operand precision for the five standard
unsigned integer types, extended unsigned integers, and unsigned
bit-precise integers with the width of a standard or extended unsigned
type. A GNU header can select the `__builtin_stdc_*` family for these
operations. GCC also accepts other unsigned bit-precise widths in its
builtins. The argument is evaluated once, with its type determining which
bits participate. C23 leaves an unrepresentable bit ceiling undefined.
GCC's builtin returns the wrapped unsigned value.

The header also makes the size and fixed- and least-width integer types
available. Its byte order macros reflect the target's integer storage.
The typed functions return `unsigned int` for counts, indices and width,
`bool` for the single-bit predicate, and the operand type for floor and
ceiling. External definitions allow callers to take their addresses.

The C23 checked arithmetic macros report whether the mathematical result
fits the pointed-to type and store the conversion of that result in either
case. The SDK probes check mixed signs, narrowing, and the version macro.
The C23 variadic probes exercise the installed header's single-argument
`va_start` and independent copies of the argument-list cursor.
[C23 N3220 §§7.16, 7.18, 7.20](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC bit builtins](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc/Bit-Operation-Builtins.html)


## C23 translation and numerical limits

C23 specifies a hosted object size of at least 32,767 bytes. The other
thresholds exercised by the combined program match the modern editions.
The generator uses 65,535 bytes for C99 through C17. WG14 issue 1106
asks how to count nested constructs and whether additional limits are
necessary. It is open. The generated program uses the stated depths
and keeps a separate test result for each target and edition.

`<limits.h>` supplies widths for the standard integer types and a
`BITINT_MAXWIDTH` that is at least `ULLONG_WIDTH`. The matching limits
in `<stdint.h>` have the types of the corresponding promoted integers.
`<float.h>` reports format membership through the `*_IS_IEC_60559`
macros. These macros describe radix, precision and exponent range.
Annex F has separate requirements. A signaling NaN macro in a
translation-time initializer retains its signaling representation,
including when prefixed by unary plus or minus.

[C23 draft N3220 §§5.2.5.2–5.2.5.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 issue 1106](https://www.open-std.org/JTC1/SC22/WG14/issues/c23/issue1106.html)


## Standard library headers and C23 versions

C23 adds `<stdbit.h>` and `<stdckdint.h>`. The published freestanding
requirements include `<stdbit.h>`, the specified subset of `<string.h>`,
and `memalignment` from `<stdlib.h>`. The latter returns the largest
power-of-two alignment of an object pointer's address, including
alignments beyond the supported `alignas` range. A null pointer
returns zero. WG14 issue 1040
tracks the omission of `<stdckdint.h>` from that list. WG14 issue 1074
tracks the interaction of freestanding and conditional features,
including the separate Annex F requirements.
[C23 N3220 §§4, 7.24.9.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 issue 1040](https://www.open-std.org/jtc1/sc22/wg14/issues/c23/issue1040.html) ·
[WG14 issue 1074](https://www.open-std.org/jtc1/sc22/wg14/issues/c23/issue1074.html)

The C23 header version macros have two specified forms. Six headers,
including `<stdint.h>`, require exactly the token `202311L`. Fifteen,
including `<stdarg.h>`, permit an integer constant expression with that
value. Check the token spelling or the expression according to each
header's requirement.
[WG14 issue 1111](https://www.open-std.org/jtc1/sc22/wg14/issues/c23/issue1111.html)

The WASI SDK selects its exception-handling `<setjmp.h>` declarations
when `__wasm_exception_handling__` is defined. cppgm implements the
nonlocal jump in generated Wasm. The WASI SDK provides a signal emulation
archive with a separate compile and link opt-in.
[WASI SDK setjmp and longjmp notes](https://github.com/WebAssembly/wasi-sdk/blob/main/SetjmpLongjmp.md)

## C library calls and format macros

The header's function-like library macros and the underlying functions
can both be tested through the required declarations. Taking the
function's address exercises the same type as a call written with the
function name parenthesized. The C23 `memchr`, `strchr`, `strrchr`,
`strpbrk`, and `strstr` searches preserve the const qualification of
the searched elements. The concrete function declarations continue to
return unqualified pointers. The macros evaluate each argument once.
`memset_explicit` fills the requested byte range and preserves those
stores even if subsequent code stops using the object.
[C23 N3220 §§7.26.5, 7.26.6.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

`timespec_getres` returns the selected time base on success and zero
on failure. A null destination can query whether the resolution is
available. The WASI SDK maps `TIME_UTC` to `CLOCK_REALTIME`. The
supplement passes a local destination to `clock_getres` for a null
query because the Wasip1 implementation stores the successful result
through its pointer. C23 also exposes the SDK's `gmtime_r`,
`localtime_r`, and `timegm` in the time header.
[C23 N3220 §7.29](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[Pinned WASI clock implementation](https://github.com/WebAssembly/wasi-libc/blob/2e6fb9d8ee0c/libc-bottom-half/cloudlibc/src/libc/time/clock_getres.c)

C23 `char8_t` is `unsigned char`. `mbrtoc8` stores the first UTF-8
code unit of the decoded character, then returns `(size_t)-3` for
each pending unit without consuming input. A null input selects an
empty string and discards the output. `c8rtomb` accepts one UTF-8
unit at a time and writes the locale's multibyte sequence when the
character is complete. Invalid input reports `EILSEQ`.
[C23 N3220 §§7.30.1.1–2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

The WASI supplement uses the SDK's `mbrtoc32` and `c32rtomb` for
locale-dependent conversion. Its packed state distinguishes pending
UTF-8 output from partial SDK input. Both use the first word of
`mbstate_t`, so the SDK's `mbsinit` observes each pending state.
[Pinned WASI input decoder](https://github.com/WebAssembly/wasi-libc/blob/2e6fb9d8ee0c/libc-top-half/musl/src/multibyte/mbrtowc.c) ·
[Pinned WASI mbsinit](https://github.com/WebAssembly/wasi-libc/blob/2e6fb9d8ee0c/libc-top-half/musl/src/multibyte/mbsinit.c)

C23 narrow and wide integer conversions accept `0b` and `0B` with
base zero or two. The prefix can follow leading space and a sign.
A binary subject requires a digit after the prefix. Digit separators
end the subject. Range errors consume all subject digits and set
`errno` to `ERANGE`, even when a negative unsigned input overflows.
The WASI C23 declarations redirect calls and function addresses to
edition-specific symbols. Those entry points delegate other forms to
the original SDK functions.
[C23 N3220 §§7.8.2, 7.24.1.7, 7.31.4.1.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

C23 permits the sized deallocation functions to call `free`.
Their callers still provide the requested allocation size and, for
aligned allocations, the requested alignment. The C23 `bsearch`
macro preserves the base elements' const qualification. Its concrete
function remains available with an unqualified result type.
[C23 N3220 §§7.24.3.4–5, 7.24.5.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

C23 narrow and wide formatted output accepts `%b` for unsigned binary
and permits `%B` with an uppercase prefix. The same field width,
precision, and padding rules apply as for the other unsigned digit
conversions. Input accepts `%b` and recognizes binary prefixes in `%i`.
An input field width counts the sign and prefix. The `wN` and `wfN`
modifiers select exact-width or minimum-width types and fast types,
respectively. On WASI, `wf16` selects the SDK's 32-bit fast type. `PRIb*`, `PRIB*`,
and `SCNb*` specify the conversions for the typedefs in `<stdint.h>`.
The WASI supplement selects separate formatted I/O symbols in C23 so
that earlier-mode `%i` callers retain their original prefix behavior.
[C23 N3220 §§7.8.1, 7.23.6.1–2, 7.31.2.1–2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

C23 adds `atomic_char8_t` and `ATOMIC_CHAR8_T_LOCK_FREE`. GCC and Clang
make `__CHAR8_TYPE__` available as `unsigned char` in C23. cppgm uses
the same edition boundary. The GCC resource header uses that predefine
when declaring the atomic type. The standard's fence and flag functions
have concrete signatures. The WASI supplement provides callable symbols
using the SDK's inline operations and emits a hardware fence for a
nonrelaxed thread fence. Signal fences retain their compiler ordering.
[C23 N3220 §7.17](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

The `CMPLX`, `CMPLXF`, and `CMPLXL` macros preserve the converted
real and imaginary components. They must support static and thread
initializers when the operands support those initializers, and remain
arithmetic constant expressions for arithmetic constant operands.
The WASI supplement uses the typed complex constructor in C11 and later
modes. The three constructor macros preserve negative zero and the
precision of `long double` without intermediate complex arithmetic.
The SDK supplies the callable functions at all three precisions.
[C23 N3096 §§7.3.1, 7.3.9.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf)

C23 adds `fesetexcept`, `fetestexceptflag`, `fegetmode`, and `fesetmode`.
The flag functions operate on supported exceptions. The mode functions
save and restore control modes independently of the status flags.
The WASI SDK exposes an empty exception mask and a single rounding
direction, `FE_TONEAREST`. The supplemental routines use that fixed
environment, with a saved mode value and `FE_DFL_MODE` both restoring
round to nearest. Compiler qualification still needs the scoped
`FENV_ROUND` directive, including its effect on floating constants,
conversions, operations, and selected library macros.
[C23 N3096 §§7.6, 7.6.2, 7.6.4, 7.6.5](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf)

The C23 wide-character searches preserve const qualification on their
result elements. Their concrete functions retain mutable result pointer
types when the macros are suppressed. `<wchar.h>` supplies `WCHAR_WIDTH`
independently of the `<stdint.h>` definition.
[C23 N3220 §§7.31.1, 7.31.4.5](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

C23 makes `once_flag`, `ONCE_FLAG_INIT`, and `call_once` available through
`<stdlib.h>`. The WASI SDK uses the same flag representation and initial
value as its `pthread_once`. The three `strfrom` functions accept one
floating conversion with optional decimal precision. The WASI long
double function parses the caller's precision once and passes its value
to the existing full-precision formatter. The caller gets the full
required byte count when the destination is truncated or absent.
[C23 N3220 §§7.24, 7.24.1.3, 7.28.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

`assert` is a macro with its own reinclusion rules. Reincluding its
header uses the current definition of `NDEBUG`.
C23 uses a variadic macro, so a scalar compound-literal expression can
contain an initializer comma without additional parentheses.
[WG14 N1256 §§7.1.4, 7.2, 7.8](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[WG14 N3220 §§7.1.4, 7.2, 7.8](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

WASI's Clang-style `<inttypes.h>` obtains its `PRI` and `SCN` values
from the target's predefined format strings. Derive the length modifier
from the same type descriptor as the integer role. wasm32 uses `int`
for a 32-bit fixed-width integer, `long` for a pointer-width integer,
and `long long` for the maximum-width integer. The first two have
equal width and distinct modifiers. The SDK's long-double print and
scan implementation uses the explicit `-lc-printscan-long-double` link
option.
[WASI SDK 34](https://github.com/WebAssembly/wasi-sdk/releases/tag/wasi-sdk-34)

C23 integer conversions accept binary prefixes with base zero or two.
The C17 control checks where the conversion stops in the initial C
locale. The C23 stdio probes exercise binary formatting and scanning,
including fixed-width and fast-width modifiers. The other C23 runtime
cases check address alignment, explicit byte stores, string allocation,
time resolution, and the restartable UTF-8 conversions.
[WG14 N3220 §§7.23.6, 7.24, 7.26, 7.29, 7.30](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 binary formatting proposal](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2630.pdf)
