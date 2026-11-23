# C conformance inventory

The [C coverage plan](../docs/upstream-c-plan.md) defines scope and completion.
Clause numbers below follow C11 N1570 and C17, except where an edition is named.
An existing fixture establishes coverage for the behavior it exercises. The
open column lists work to qualify the remainder of each group.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C11 and C17 defect reports](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm)

| Clauses | Current C99 through C17 evidence | Open checks |
| --- | --- | --- |
| 5.1 Translation and execution environments | PA38 runs C on native and WASI. The pinned runtime suite links cppgm objects using a C driver. | Confirm initialization and termination and freestanding entry contracts by target. |
| 5.2.4.1 Translation limits | One combined program passes under C99, C11, and C17 on Linux x86-64, Linux AArch64, WASI, and bare Wasm. | Run the combined program natively on Intel macOS and Apple Silicon. |
| 5.2 Environment and character sets, 6.4 lexical elements | PA1 through PA4 cover shared source translation, tokens and macros. PA38 tests C literal types. Upstream cases exercise integer types and hexadecimal floating literals. | Audit C edition boundaries, trigraphs, UCNs, encodings, alternative tokens and numeric ranges. |
| 6.2.1–6.2.3 Scopes, linkage and namespaces | PA38 covers distinct namespaces, nested tags, typedefs and cross-unit declarations. The GNU forward enum cases now pass. | Complete prototype and label scopes and nested redeclarations. |
| 6.2.4 Storage duration and lifetime | PA38 checks compound literals and automatic VLA scope exits. The hosted VLA test verifies a C-only link. | Cover variably modified declarations, bound evaluation, limited temporary lifetime and cross-ABI TLS. |
| 6.2.5–6.2.8 Types, compatibility and alignment | PA38 covers scalar kinds, pointer qualification, bit-fields and tentative definitions. GCC tests confirm the C99 boolean bit-field width and value rules. | Qualify composite types across units, array and function compatibility, C alignment rules, atomic representation and each ABI's bit-field layout. |
| 6.3 Conversions | PA38 checks arithmetic, promotions, void-pointer conversions and GNU pointer extensions. | Cover integer constant expressions as null pointer constants, conditional pointer composites, qualification, complex conversions and default argument promotions. |
| 6.5 Expressions | PA38 checks C value categories, generic selection, compound literals, casts and short-circuit effects. | Test aliasing, volatile and atomic effects, evaluation order and arithmetic boundaries across optimization levels. |
| 6.6 Constant expressions | PA38 exercises array bounds, static initialization and static assertions. | Distinguish the integer, arithmetic and address constant expression requirements from ordinary folding. |
| 6.7 Declarations and type names | PA38 covers tags, old and new function declarations, initializers, designators and one-dimensional VLAs. | Complete variably modified types, nested and overlapping designators, flexible arrays, repeated qualifiers and edition diagnostics. |
| 6.7.2.2–6.7.2.3 Enumeration specifiers and tags | PA38 checks the `int` constant rule, compatible object types, out-of-range diagnostics and GNU incomplete tags. | Qualify C23 enum bases and wider constants when that edition is enabled. |
| 6.8 Statements and blocks | PA38 checks control flow, switch conversion and VLA scope exits. GCC's C99 runtime test checks for-declaration scoping. | Qualify for-declaration constraints, nested scopes and jumps involving variably modified types. |
| 6.9 External definitions | PA38 mixes units with common objects, inline definitions and identifier-list functions. | Check more cross-unit combinations, symbol visibility and inline linkage on each ABI. |
| 6.10 Preprocessing | PA4 covers shared macro replacement, conditional inclusion, pragmas and line control. PA38 probes C predefined macros. | Pin the GCC preprocessing corpus and qualify required diagnostics, mode macros and hosted header extensions. |
| 7 Library and language integration | PA38 hosted tests cover headers, varargs, builtins and startup attributes. The runtime matrix uses the host libc. | Qualify each SDK and its compiler-dependent headers. Add libc-test and hosted project builds. |
| Annexes and implementation-defined options | The existing target models record data layout and native ABI choices. | Publish the supported choices, conditional features and evidence for every advertised environment. |

## Combined translation limits

Section 5.2.4.1 requires a single executable program that exercises every
applicable translation limit. The generated C99–C17 program covers all 22,
including nested preprocessing and declarations, identifier significance,
function and macro arity, the length of a logical line and concatenated
literals, aggregate sizes, and the 65,535-byte hosted object. It returns zero
when the value checks pass and a distinct status for each failed check.
[Generator](../scripts/generate_c_translation_limits.py) ·
[C99 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

Pedantic C99, C11, and C17 passed at `-O0` and `-O2` on Linux x86-64,
Linux AArch64 under QEMU, and WASI and bare Wasm under Wasmtime. The bare
Wasm run invokes an exported entry point and also checks the large object.
GCC 15 and Clang 21 passed the same edition and optimization matrix on
Linux x86-64. Both Darwin targets emitted objects and cross-linked dylibs
in all six configurations. Native macOS execution remains open. The C CI
job runs the Linux x86-64 and WASI configurations. It records the object,
link, and execution stages at both optimization levels. The rule inventory
maps the combined executable to each applicable minimum. It also tracks
the physical include check, the presumed diagnostic location, and the
unexpanded `#error` message as separate results. The job publishes the
target and edition matrix with the raw receipts. An absent result stays
uncovered even when the same case passes on another target.
[Versioned inventory](c-conformance.json) ·
[Evidence runner](../scripts/c_conformance.py) ·
[CI job](../.github/workflows/tests.yml)

## Additional editions

The driver baseline at `39e13e127` rejects `c90`, `c89`,
`iso9899:1990`, `iso9899:199409`, and `c23` before parsing.
The first boundary probes below used GCC 15 and Clang 21 on Linux
x86-64. The Clang old-style and no-prototype controls disabled its
deprecation diagnostics so they could check the language boundary.

| Rule | Reference outcomes | Current cppgm evidence |
| --- | --- | --- |
| `c90.version` | The C90 aliases compile a plain C function and leave `__STDC_VERSION__` undefined. | C90 driver support is open. |
| `c95.version` | `iso9899:199409` defines `__STDC_VERSION__` as `199409L`. | C95 driver support is open. |
| `c90.implicit-int` | A definition with omitted return type is accepted in C90 and C95. C99 diagnoses the missing type. | The C99 probe is rejected. |
| `c90.implicit-call` | Calling a function before its declaration is accepted in C90 and C95. C99 diagnoses the missing declaration. | The C99 probe is rejected. |
| `c90.block-declarations` | A declaration following a statement is diagnosed in pedantic C90 and C95. The input is valid in C99. | The C99 probe compiles. |
| `c90.line-comment` | A `//` comment after a function definition is diagnosed in pedantic C90 and C95 and accepted in C99. | The C99 probe compiles. |
| `c95.digraphs` | A body delimited by `<%` and `%>` is accepted in C95 and diagnosed in pedantic C90. | The C99 digraph control compiles. |
| `c95.wide-headers` | `<iso646.h>`, `<wchar.h>`, and `<wctype.h>` compose in C95. A linked program in the C locale classifies `L'a'` and `L'0'` correctly. | C99 and C17 objects passed with the host C linker and glibc. The C95 SDK pairing remains open. |
| `c23.version` | `-std=c23` compiles a plain C function and defines `202311L`. | C23 driver support is open. |
| `c23.trigraphs` | Trigraph braces form a valid body through C17. The same source is diagnosed in C23. | The C17 control compiles. |
| `c23.empty-parameters` | A call with an argument through a declaration with empty parentheses is accepted through C17 and diagnosed in C23. | The C17 control compiles. |
| `c23.identifier-list` | An identifier-list definition with explicit parameter types compiles through C17 and is diagnosed in C23. | The C17 control compiles. |

Coverage of translation limits, preprocessing and integer changes,
type and initializer changes, and hosted library obligations is still
open for these editions.
[WG14 C amendment summary](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2310.pdf) ·
[WG14 N3220](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC edition options](https://gcc.gnu.org/onlinedocs/gcc/Standards.html)

## Lexical translation and preprocessing

The PA38 code-unit fixture checks adjacent narrow strings containing an
embedded zero, two UTF-16 surrogate units and one UTF-32 code unit. It
checks the inferred bounds, final null, and zero fill for static, local
aggregate, and volatile arrays. GCC 15 and Clang 21 agree with the values.
The C clause job runs the fixture in C11 and C17 at `-O0` and `-O2` on
Linux x86-64 and WASI. The C11 regression also runs on AArch64 under
QEMU and cross-links on both Darwin architectures.
[PA38 code-unit fixture](../pa38/tests/general/500-c-string-code-units.t) ·
[WG14 N1570 §6.4.5](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf#page=89) ·
[Clause matrix](c-conformance.json)

The pinned GCC digraph and trigraph runtime cases pass in pedantic C99
and C11 respectively. Reduced C99, C11, and C17 controls also pass for
trigraph replacement before line splicing, digraph token pasting, UTF-8
and escaped spellings of the same identifier, and preprocessing-number
maximal munch. GCC 15 and Clang 21 agree on the outcomes. The Clang
line-comment control uses `-Wno-comment` to keep its spliced-comment
warning from becoming an error.
[GCC C99 manifest](upstream-gcc-c99.json) · [GCC C11 manifest](upstream-gcc-c11.json)

C source files and headers accept LF, CRLF, and standalone CR. The
physical-line fixture combines a BOM, ordinary and trigraph continuations,
a skipped conditional, `__LINE__`, and a presumed line set by `#line`.
GCC 15 and Clang 21 agree on the C99 fixture. A generated comparison
exercises 128 mixed-ending headers, and 128 C and C++ configurations
preserve preprocessing output for LF and CRLF continued comments.
Additional cases check recovery when the last physical line is spliced.
An LF, CRLF, CR, and mixed-ending replay also verifies an identical
presumed filename, line, and byte column in a diagnostic.
GCC's pinned `line4.c`, `line7.c`, and `line8.c` add CI evidence for
macro-expanded `#line` numbers, missing expanded operands, and empty
presumed filenames. cppgm and GCC pass all 44 reviewed C99 configurations.

The preprocessing-number fixture observes maximal munch by making a
macro name immediately after an exponent sign part of the number.
It checks a number produced by a paste, stringization of a number
that has no numeric value, and hexadecimal floating constants. The
negative case diagnoses an invalid number used in an expression.
Both positive fixtures run on Linux x86-64 in C99, C11, and C17, and on
AArch64 Linux under QEMU and WASI in C99. Both macOS architectures
cross-link. Native macOS execution remains open.

[PA38 physical lines](../pa38/tests/general/100-c-physical-lines.t) ·
[PA38 preprocessing numbers](../pa38/tests/general/100-c-preprocessing-numbers.t) ·
[WG14 notes](../doc/c-conformance-notes.md#source-line-mapping-and-preprocessing-numbers)

ISO C99 through C17 convert trigraphs. GNU modes leave them unchanged
unless `-trigraphs` is supplied. The PA38 tests observe the distinction
in a directive, a string, and a continued comment. The pinned GCC C11
job replays its trigraph program in both ISO C11 and GNU11 with explicit
conversion. The C driver also accepts whitespace-separated splices with
a warning. PA38 checks the effect on skipped conditionals, promotion to
an error, and suppression in system headers. The GNU policy here covers
translation and the spaced-splice warning. Trigraph-specific warnings
remain a separate compatibility item.

GCC 15, Clang 21, and cppgm pass 72 generated C99, C11, C17, and GNU C
header cases with mixed line endings. A separate replay checks the
warning and presumed location in preprocessing, syntax checks, LowIR,
and object emission. The four positive fixtures run on x86-64 Linux,
AArch64 Linux under QEMU, and WASI. Intel and Apple Silicon
Mach-O objects cross-link. Native macOS execution remains open.
[PA38 GNU defaults](../pa38/tests/general/100-c-gnu-trigraphs-default.t) ·
[PA38 explicit conversion](../pa38/tests/general/100-c-gnu-trigraphs-enabled.t) ·
[PA38 spaced splices](../pa38/tests/general/100-c-spaced-splices.t) ·
[Scaling](../docs/performance/c-frontend-scaling.md#trigraph-mode-and-spaced-line-splices) ·
[GCC initial processing](https://gcc.gnu.org/onlinedocs/cpp/Initial-processing.html)

C quoted includes use the directory of the path that opened the current
inclusion. GCC 15 and Clang 21 agree in the `#line` controls. `__FILE__`
and `__LINE__` still report the presumed location. cppgm and GCC use the
path for each inclusion in a two-directory hard-link probe. Clang 21 uses
the first path's directory for the second inclusion. With no angle
directories, cppgm and Clang exclude quote paths from the angle search.
GCC 15 accepts the angle header from `-iquote` in this configuration.
PA4 retains its course-defined search and uses the opened file's identity
for `#pragma once`.
[PA38 include fixture](../pa38/tests/general/100-c-include-physical.t) ·
[PA38 angle diagnostic](../pa38/tests/general/100-c-include-angle-local-bad.t) ·
[GCC line control](https://gcc.gnu.org/onlinedocs/cpp/Line-Control.html)

The pinned GCC `include4.c` and `include5.c` cases cover header names
formed by macro replacement and empty expansions after direct header
names. Both compilers pass all 46 reviewed GCC C99 configurations. The
PA38 physical-include fixture runs at `-O0` and `-O2` on Linux x86-64
and AArch64 under QEMU. It also passes the PA38 WASI lane and cross-links
on both Darwin architectures. Native macOS execution remains open.
[GCC C99 manifest](upstream-gcc-c99.json) ·
[PA4 include fixture](../pa4/tests/directives/200-include-empty-suffix.t)

An active `#error` includes its unexpanded message tokens. The PA4 case
exercises a macro name, a replaced comment, a splice, and a presumed
location. Maintainer C CI checks the translated message. Local
preprocessing, syntax, LowIR and object actions report it and exit with an
error. The skipped directive in the same fixture produces no diagnostic.
[PA4 error fixture](../pa4/tests/directives/150-error-message.t) ·
[WG14 N1570, §§6.10.2, 6.10.4, 6.10.5](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[Scaling](../docs/performance/c-frontend-scaling.md#include-lookup-and-directive-diagnostics)

Computed C quoted names retain literal backslashes, including ones that
introduce escape sequences in a string. cppgm, GCC 15, and Clang 21 find
the written filename with a simple escape, an incomplete escape, a
universal character name, and a quoted quote. The direct C header token
also keeps its backslashes. The lexer's C string token retains spelling
and the literal converter still checks escapes on use. For computed
`< lead.h >`, cppgm and GCC search for a leading space and discard the
trailing space, while Clang 21 attempts both spaces. The PA38 tests
exercise these paths with `#include` and `__has_include`. Both positive
fixtures run on Linux x86-64, AArch64 under QEMU, and WASI. They
cross-link on both Darwin architectures.
[PA38 quoted names](../pa38/tests/general/100-c-computed-quoted-header.t) ·
[PA38 angle names](../pa38/tests/general/100-c-computed-angle-header.t) ·
[PA38 invalid string escape](../pa38/tests/general/100-c-string-invalid-escape-bad.t) ·
[Scaling](../docs/performance/c-frontend-scaling.md#computed-header-names) ·
[GCC computed includes](https://gcc.gnu.org/onlinedocs/cpp/Computed-Includes.html)

A direct `__has_include(<header  name.h>)` still collapses the two spaces
when cppgm reconstructs the name from tokens. The corresponding direct
`#include` succeeds. GCC 15 and Clang 21 accept both forms. C23 extends
the header-name token context to the operand of `__has_include`.
[WG14 N3220, §§6.4.7, 6.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

C99 through C17 require a diagnostic for universal character names
below U+00A0 except U+0024, U+0040, and U+0060. cppgm applies the
pedantic policy when it converts a literal, including in a controlling
expression and in its `-E` post-token output. The lexer retains the fact
through macro expansion. The PA38 probes check an expanded wide string,
a concatenated piece, a short-circuit condition, stringization, skipped
text, and suppression in system headers. GCC 15 and Clang 21 both reject
the consumed escapes in pedantic C99 through C17. GCC 15 also agrees
with the system-header policy. Its two pinned tests now verify distinct
low-value and surrogate diagnostics, giving 24 of 24 reviewed GCC C17
configurations. The positive PA38 fixtures run on Linux x86-64, AArch64
under QEMU, and WASI, and cross-link on both Darwin architectures.
[C99 6.4.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 6.4.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[PA38 literal](../pa38/tests/general/100-c99-universal-escape-literal-bad.t) ·
[PA38 condition](../pa38/tests/general/100-c17-universal-escape-condition-bad.t) ·
[Scaling](../docs/performance/c-frontend-scaling.md#c-literal-universal-character-names)

The C99 and GNU99 lexer uses the 245 disjoint allowed intervals and
14 digit intervals derived from C99 Annex D. C11 and C17 use their
shared repertoire. The lexer applies the edition in source and when
lexing a pasted token, and interns raw UTF-8 and its matching escape
as the same name. The PA38 cases check U+01F6 across the edition
boundary, the initial and continuation rules for U+0E50, token
pasting and the independent literal rules. They run on Linux x86-64,
AArch64 under QEMU and WASI, and cross-link on both Darwin targets.

The C99 lexer passed the allowed interval endpoint runs and rejected
all 1,506 raw or escaped probes at disallowed boundaries. Clang 21
also accepts the allowed runs. GCC 15 rejects initial U+0E4F, which
the published Thai interval permits outside the digit ranges. GCC 15
allows the newer identifier repertoire when pedantic diagnostics are
disabled. cppgm and Clang 21 use the C99 repertoire whenever that mode
is selected. The GCC C99 manifest adds 13 configurations for macro
lookup, stringization, token pasting, preprocessing numbers, and
valid and invalid identifier characters. Both compilers pass all 40
reviewed cases.
[C99 Annex D](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 Annex D](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC C99 manifest](upstream-gcc-c99.json) ·
[Scaling](../docs/performance/c-frontend-scaling.md#c99-identifier-ranges)

The C macro redefinition check compares written parameter and replacement
spellings after line splicing. The lexer records a spelling only when
decoding a universal character name changes the token in a macro definition.
Lookup and substitution share the existing normalized identifier.
cppgm and GCC 15 diagnose changes in parameter escapes, replacement-list
identifiers, and string literals in pedantic C99, C11, and C17.
Clang 21 diagnoses the changed literal and accepts the changed identifiers.
All three accept the lookup and substitution controls. The pinned
`ucnid-11` case now checks the reason for rejection in GCC CI.
[C99 6.10.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[GCC C99 manifest](upstream-gcc-c99.json) ·
[PA38 macro control](../pa38/tests/general/100-c99-macro-redefinition-ucn.t)

The PA38 control uses a UTF-8 object name. It runs on Linux x86-64,
AArch64 Linux under QEMU, and WASI, including the Wasm LowIR round trip.
Both Darwin architectures cross-link. The LowIR reader validates and
preserves UTF-8 names introduced by a sigil. A PA8 regression exercises
that syntax. On Linux x86-64, a C name emitted by the compiler and read
back through LowIR linked and ran across GCC 15 and Clang 21 object
boundaries in both directions.
[PA8 reader fixture](../pa8/tests/spec/100-unicode-names.t)

## Pinned suite receipts

- **c-testsuite** inventories 220 programs in two dialects and at two
  optimization levels. cppgm and GCC 15 pass all 876 selected configurations.
  One source that reads an uninitialized automatic object is excluded from
  the runtime comparison. [Suite builder](../scripts/build_c_testsuite_ci_manifest.py) ·
  [Known gaps](upstream-c-testsuite-known-gaps.json)
- **GCC and Clang** execute the reviewed C99, C11 and C17 configurations,
  recording known failures separately from passes.
  [GCC C99](upstream-gcc-c99.json) · [GCC C11](upstream-gcc-c11.json) ·
  [GCC C17](upstream-gcc-c17.json) · [Clang C99](upstream-clang-c99.json) ·
  [Clang C11](upstream-clang-c11.json) · [Clang C17](upstream-clang-c17.json)

### GNU range designators and empty records

The final pinned initializer program, `00216.c`, matches its expected Linux
x86-64 output in C17 and GNU17 at `-O0` and `-O2`. The program exercises
overlapping scalar ranges, parenthesized compound literals in static
initializers, and a record containing a GNU empty struct. The empty struct
has size zero in C, so its enclosing record's two byte members are adjacent.

PA38 exercises retained and overwritten values, scalar braces and volatile
stores, inferred bounds, positional continuation, and static function-pointer
relocations. Separate fixtures check the empty record's size and enclosing
layout, parenthesized compound literals, decreasing intervals, and pedantic
rejection of range designators and empty records. The positive fixtures ran
with GCC 15 and cppgm on Linux x86-64 at `-O0` and `-O2`, and with cppgm on
AArch64 Linux under QEMU at both levels. PA38's Wasm lane passed, and both
Darwin architectures cross-linked Mach-O at both levels. On Linux x86-64,
GCC 15 and Clang 21 each called and returned records containing an empty
subobject across a cppgm object boundary in both directions. A generated
128-case replay agreed with GCC 15 on overlapping intervals and exactly
once evaluation of surviving ranges at `-O0` and `-O2`. A separate probe
covered complex values, atomic integers, and static negative zero. All 44
pinned musl libc-test configurations still pass. Native macOS execution
remains open.
[Range fixture](../pa38/tests/general/300-designated-gnu-ranges.t) ·
[Empty record fixture](../pa38/tests/general/300-record-gnu-empty.t) ·
[Compound literal fixture](../pa38/tests/general/500-c-static-parenthesized-compound.t) ·
[GCC ranges](https://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html) ·
[GCC empty structures](https://gcc.gnu.org/onlinedocs/gcc/Empty-Structures.html)

The PA38 aggregate fixture repeats complete records, union members
selected by whole union values, and array rows. It covers an inferred
outer bound, nested brace scopes, static and automatic storage, and
volatile-qualified records with ordinary members. It also checks that a
record-producing call runs once even when its surviving elements are
split into separate spans. The fixture matches GCC 15 on Linux x86-64
at `-O0` and `-O2`. It runs under QEMU on AArch64 Linux and in
the WASI lane. Both Darwin architectures cross-link.
[PA38 aggregate range fixture](../pa38/tests/general/300-designated-gnu-aggregate-ranges.t)

PA38 also checks member and subscript suffixes after ranges, including
two ranged dimensions, static bit-fields, and an inferred array bound.
The behavioral controls check that same-path overlaps preserve values
outside the overlap and evaluate each surviving source once. Positional
cases cover advancing to the next element and a later braced initializer
replacing the final ranged element. The fixture matches GCC 15 on
x86-64 Linux at `-O0` and `-O2`. It also runs under Linux AArch64 QEMU
and WASI and cross-links for both Darwin architectures. A pointwise
oracle checks the results of 96 generated nested overlap cases against
cppgm and GCC 15 at both optimization levels.
[PA38 range suffix fixture](../pa38/tests/general/300-designated-gnu-range-suffixes.t)

PA38 covers overlapping writes to distinct direct members of ranged
records in static and automatic storage. It checks bit-fields, a later
whole-record reset, brace elision, positional continuation within the
last record, and a patch to a record previously supplied by an
expression. The expression case preserves sibling values in accordance
with WG14 DR 413. GCC 15 clears a previously initialized sibling in
this case, including with point designators. A braced replacement
supplies zeros for its omitted fields, as in DR 253. A pointwise oracle
checks 128 generated sets of member and braced record writes in both
storage durations. GCC 15 and cppgm match those results at `-O0` and
`-O2`. The PA38 fixture passes on Linux x86-64, AArch64 QEMU, and WASI.
The Intel and Apple Silicon Mach-O objects both cross-link.

The remaining range cases include composition across a third array
dimension, extra ranges interleaved with member paths, and qualified
aggregates in automatic storage.
[PA38 field overlap fixture](../pa38/tests/general/300-designated-gnu-field-overlaps.t) ·
[WG14 DR 413](https://www.open-std.org/Jtc1/sc22/WG14/www/docs/dr_413.htm) ·
[WG14 DR 253](https://www.open-std.org/JTC1/SC22/WG14/www/docs/dr_253.htm)

Static overlap tests now cover nonzero record expressions with more
than five million logical subobjects. The fixture checks pointer
relocations, packed and ordinary bit-fields, member replacement by
zero, and a complete record reset. It runs on x86-64 Linux, AArch64
QEMU, and WASI. Both Darwin architectures cross-link. The previously
failing three-million-record program emits its 24 MB array as static
data and a linked program checks every record. A pointwise oracle checks
128 generated static initializers with mixed brace and record-expression
writes at `-O0` and `-O2`.
[PA38 static record fixture](../pa38/tests/general/300-designated-gnu-static-record-overlaps.t)

Two-dimensional overlaps now preserve each surviving cell, including
when later clauses replace a whole row. The PA38 case exercises scalar
and aggregate cells, string-backed rows, positional continuation,
and once-only evaluation after splitting a range. It matches GCC 15
on Linux x86-64 at `-O0` and `-O2`, runs under AArch64 QEMU and WASI,
and cross-links for both Darwin architectures. A pointwise sweep
oracle checks 10,000 priority and reset cases. Another oracle checks
128 generated pairs of automatic and static matrices at both
optimization levels. GCC 15 runs the constant-valued forms and
diagnoses some generated repeating braced rows containing nonconstant
expressions. cppgm also checks the call counts in those rows. A
static and automatic probe checks preservation of cells inherited
from a record expression, followed by a whole-row reset.
[PA38 two-dimensional range fixture](../pa38/tests/general/300-designated-gnu-rectangle-overlaps.t)

Nested member overlaps preserve siblings across complete brace and
record-valued replacements. PA38 checks continuation within the final
ranged record, fixed array indices within a path, bit-fields, and
pointer relocations. The fixture passes in GNU99, GNU11, and GNU17 on
x86-64 Linux, and in GNU17 on AArch64 QEMU and WASI. Intel and Apple
Silicon Mach-O objects cross-link. The
previously rejected nested brace case now matches GCC 15. A separate
128-case oracle checks static and automatic storage at `-O0` and
`-O2`. GCC runs the equivalent brace forms of the generated tests.
The versioned reset index also matches a pointwise oracle on 10,000
generated cases.
[PA38 nested member fixture](../pa38/tests/general/300-designated-gnu-nested-overlaps.t)

The union overlap fixture checks same-member updates, a switch away and
back, nested unions reached through fixed indices, once-only evaluation,
and static bit-fields and pointer relocations. It also checks a patch to
the member supplied by a whole union value. cppgm preserves that member's
untouched sibling, as it does for point designators. GCC 15 clears the
sibling in this case. Clang 22 preserves it in the equivalent point case
and diagnoses the range form with side effects as unimplemented.
The 128 generated cases with braced writes agree with a pointwise oracle
under both cppgm and GCC 15 at `-O0` and `-O2`. A separate oracle checks
10,000 sets of interval priorities and ancestor resets.

The PA38 fixture passes in GNU99, GNU11, and GNU17 on x86-64 Linux and in
GNU17 on AArch64 Linux under QEMU at both optimization levels. The WASI
lane passes. Intel and Apple Silicon Mach-O objects cross-link at both
levels. Native macOS execution remains open.
[PA38 union overlap fixture](../pa38/tests/general/300-designated-gnu-union-overlaps.t) ·
[GCC designators](https://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html) ·
[WG14 DR 413](https://www.open-std.org/JTC1/SC22/WG14/www/docs/dr_413.htm)

## Initial hosted replays

The Linux x86-64 replays compiled the project C files with cppgm in GNU17
mode. GCC 15 selected the zlib configuration and linked the project
objects. These results cover the listed workloads.

| Project | Configuration and result |
| --- | --- |
| zlib 1.3.1 | Static library, example and minigzip built at `-O3`. The upstream `teststatic` target passed. [zlib](https://zlib.net/) |
| Lua 5.4.8 | Linux static library, interpreter and bytecode compiler built at `-O2`. The version-matched documented basic suite passed. [Lua tests](https://www.lua.org/tests/#basic) |
| SQLite 3.50.4 | Amalgamation and shell built at `-O0` and `-O2`. Both SQL smoke runs passed transaction, aggregation, JSON and integrity checks. The build exposed C's tokenization of macros adjacent to quoted literals, now covered by PA38. [SQLite version](https://sqlite.org/releaselog/3_50_4.html) · [PA38 regression](../pa38/tests/general/100-adjacent-literal-macros.t) |

### Hosted C99 header-use probes

All 24 C99 headers compiled in isolation with the Linux x86-64 GCC 15
header search at `-std=c99 -pedantic-errors`. The include probes declared
one ordinary object after each header. Two macro-use probes identified
compiler-dependent behavior. GCC 15 and Clang 21 compiled,
linked with `libm`, and ran both probes on Linux.

| Required interface | Probe and cppgm result |
| --- | --- |
| `complex.h` imaginary unit | Construct `3.0 + 4.0 * I` and check the real and imaginary parts and magnitude. Passes with the real C library at `-std=c99 -pedantic-errors -O0` and `-O2` on x86-64 Linux, Linux AArch64 under QEMU, and WASI under Wasmtime. The typed `-E` stream accepts glibc's expansion. The header-independent PA38 probe also runs on bare Wasm and cross-links for both Darwin targets. Native Darwin and the SDK headers still require qualification. [PA38 value fixture](../pa38/tests/general/500-c-imaginary-literals.t) · [Extension policy fixture](../pa38/tests/general/500-c-imaginary-extension.t) |
| `tgmath.h` function selection | The probes pass in pedantic C99, C11 and C17 at `-O0` and `-O2` on Linux x86-64, Linux AArch64 under QEMU, and WASI under Wasmtime. They cover real and complex selection, result types, integer promotion, fixed pointer parameters and exactly-once evaluation. The AArch64 GCC 14 sysroot uses glibc's legacy macro path under the default GNU predefines. The WASI SDK uses the default Clang resource header and its `overloadable` declarations. |

The header-independent `__builtin_tgmath` fixtures pass at both optimization
levels on Linux x86-64, Linux AArch64 under QEMU and bare Wasm, pass the
PA38 WASI lane, and cross-link as Mach-O for both macOS targets. The pinned
GCC C17 lane adds six runtime configurations and two rejection cases for
the builtin.
[PA38 selection fixture](../pa38/tests/general/500-c-type-generic-math.t) ·
[PA38 extended-type fixture](../pa38/tests/general/500-c-type-generic-math-extended.t) ·
[GCC C17 manifest](upstream-gcc-c17.json)

The PA38 classification fixture checks type names, promoted C expressions,
unevaluated VLA bounds, and the evaluation behavior of the single-argument
and legacy variadic forms. The PA38 conversion fixture covers implicit and
explicit conversions to real types, static initializers, and the separate
boolean conversion rule. Both passed on x86-64 Linux, AArch64 under QEMU,
and bare Wasm under Wasmtime at `-O0` and `-O2`, and passed the PA38 WASI
lane. They cross-linked for both Mach-O targets. Native macOS execution
and SDK integration still need qualification. The PA30 test exercises
the shared C++ forms, including dependent queries and constant evaluation.
[PA38 classifier](../pa38/tests/general/500-c-builtin-classify-type.t) ·
[PA38 conversions](../pa38/tests/general/500-c-complex-to-real.t) ·
[PA30 classifier](../pa30/tests/run/800-builtin-classify-type.t)

The pinned GCC torture case `pr104604` also passes at `-O0` and `-O2`.
It exercises conversion from a GNU unsigned complex arithmetic result to
`unsigned char`. The sample now matches GCC in 111 of 128 configurations,
with 17 reviewed gaps.
[GCC torture known gaps](upstream-gcc-c-torture-known-gaps.json)

The pinned WASI SDK resource header compiles and runs the same two
runtime probes. A PA38 header fixture now exercises the default
`<tgmath.h>` search and the type and evaluation behavior of its macros.
The Clang C17 manifest adds the upstream header test, which checks
`creal`, `fabs`, and `logb` result sizes using each compiler's hosted
headers. The same source passes through the WASI SDK resource header
with cppgm and Clang. The standalone wasi-libc header has a distinct
fallback that depends on GNU predefines.
[PA38 header fixture](../pa38/tests/general/500-c-tgmath-header.t) ·
[Clang C17 manifest](upstream-clang-c17.json)

The PA38 declaration and call fixtures cover an unmarked C entry,
marked external and static functions, a block-only prototype, target
typing of a function address, and a selected unavailable ellipsis
fallback in an unevaluated operand. Mixed cppgm and Clang caller/callee
objects pass in both directions at `-O0` and `-O2` on Linux x86-64,
Linux AArch64 under QEMU, bare Wasm, and WASI. The same pairs cross-link
as Mach-O on both macOS architectures. PA30 tests the shared mangling
rule for C++ declarations with C linkage.
[PA38 overloads](../pa38/tests/general/500-c-overloadable.t) ·
[PA30 C linkage](../pa30/tests/run/800-overloadable-c-linkage.t) ·
[Clang overloadable declarations](https://clang.llvm.org/docs/AttributeReference.html#overloadable)

[C99 library clauses, §§7.3 and 7.22](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[GCC complex literal extension](https://gcc.gnu.org/onlinedocs/gcc/Complex.html) ·
[GCC type-generic math builtin](https://gcc.gnu.org/onlinedocs/gcc-15.2.0/gcc/Other-Builtins.html)

### musl libc-test pilot

The first replay used musl 1.2.5 and `libc-test` revision
`63e36e934e8f2bedf645303a90b64098e2af6c8f` on Linux x86-64. GCC 15 built
the static musl runtime and the upstream `libtest.a` support library.
Each compiler compiled the selected test source with musl headers in
C99 mode at `-O0` and `-O2`. Both used musl's GCC driver for static linking.
[musl 1.2.5](https://musl.libc.org/releases/musl-1.2.5.tar.gz) ·
[libc-test](https://wiki.musl-libc.org/libc-test.html)

GCC and cppgm now pass all 44 configurations, including the selected
locale, multibyte, string, formatted I/O, math conversion, pthread TLS,
local-exec TLS, and `setjmp` tests. The 22 sources were `clocale_mbfuncs`,
`fnmatch`, `fscanf`, `fwscanf`, `inet_pton`, `mbc`, `memstream`,
`pthread_tsd`, `qsort`, `setjmp`, `snprintf`, `sscanf`, `strtod`, `strtof`,
`strtold`, `tgmath`, `time`, `tls_init`, `tls_local_exec`, `udiv`, `ungetc`,
and `wcsstr` from `src/functional`.

| Resolved case | Compiler behavior exercised |
| --- | --- |
| `sscanf` | Overflowing constants produce target-format infinities. The reduced PA38 case also checks rounding ties, subnormals, and signed zero. GCC 15 and Clang 21 emit range warnings. [PA38 range case](../pa38/tests/general/500-c-floating-literal-overflow.t) |
| `tgmath` | GNU `typeof` accepts an unevaluated dereference with type `void`. The reduced PA38 case checks type and qualifier selection, `&*p`, pointer evaluation count, and rejection of void sizing and stores. [PA38 type selection](../pa38/tests/general/500-c-typeof-void-indirection.t) |

Both reduced positive cases passed at `-O0` and `-O2` on Linux x86-64,
Linux AArch64 under QEMU, WASI, and bare Wasm. Both macOS targets
cross-linked. Native macOS execution and its SDK headers remain open.
On Linux x86-64, 1,536 generated decimal and hexadecimal literals of
type `float`, `double`, and `long double` matched GCC 15 and Clang 21
byte-for-byte at both optimization levels. The cases include overflow,
subnormal, and underflow values.

The scheduled and manually dispatched upstream GCC job runs this pilot
with the shared manifest runner. It pins the musl source archive and the
libc-test checkout, records both archive hashes used for linking, and
publishes the commands and outcomes. The complete CI command passed
locally with GCC 15 and cppgm.
[CI script](../scripts/run_musl_libc_test_ci_suite.py) ·
[Upstream workflow](../.github/workflows/upstream-cxx11.yml)

A local expansion ran all 70 functional files without upstream build
fragments at both optimization levels. Each compiler passed 134 of 140
configurations, and all 140 execution outputs matched. The native
runtime also fails `mntent`, `strptime`, and `wordexp` at both levels.
Seven sources with upstream build fragments require a separate
dynamic-link or multiple-input qualification.

Header-isolation checks passed for all 24 C99 headers and all 29 C11 and
C17 headers with `-pedantic-errors`. The C11 and C17 configurations use
GCC 15's resource `<stdatomic.h>` after the musl include directory, as
the native musl driver does. A statically linked C11/C17 probe exercised
`thrd_create`, `thrd_join`, `_Thread_local` isolation, and relaxed atomic
updates at both optimization levels in both compilers.
[C11 standard headers, §7.1.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

## Edition and declarator checks

GNU attributes at the start of a parenthesized declarator are parsed before
the parser decides whether a nested declarator or parameter clause follows.
The pinned `00210.c` now runs in C17 and GNU17 at both `-O0` and `-O2`.
The PA38 case also checks named parameters, leading parameter attributes,
and GCC's scalar and vector type rules for modifiers in a nested
declarator. The tests observe calls and type sizes.
[PA38 fixture](../pa38/tests/general/300-c-attributed-nested-declarators.t) ·
[GCC attribute rules](https://gcc.gnu.org/onlinedocs/gcc/Attribute-Syntax.html) ·
[Scaling](../docs/performance/c-frontend-scaling.md#gnu-attributes-in-c-declarators)

The fixture runs on Linux x86-64, AArch64 Linux under QEMU, and WASI.
Both Darwin targets emit and cross-link Mach-O at `-O0` and `-O2`.
Native Darwin execution remains open.

The 15 edition fixtures agree with GCC 15 and Clang 21. They cover C11
static assertions, generic selection, atomic specifiers and qualifiers,
thread-local declarations, alignment specifiers and queries, and
nonreturning declarations. They also check GNU keyword spellings, omitted
assertion messages, and the effect of `-Wsystem-headers`. The checks run
in the native and Wasm PA38 lanes.

The enumeration fixtures cover §6.7.2.2's `int`-typed enumerators before
and after the closing brace, the signed and unsigned compatible object
types, and the diagnostic when an implicit increment exceeds `int`.
Separate probes exercise GNU wide enums and forward tags whose object
and function declarations share the identity resolved at completion. The
pedantic, incomplete-definition, and incomplete-return rejections agree with GCC 15 and
Clang 21. The positive fixtures pass at `-O0` and `-O2` on Linux x86-64,
Linux AArch64 under QEMU, WASI, and bare Wasm. They cross-link for both
Darwin architectures. The pinned `00170.c` and `00209.c` cases are now
required in both C17 dialects at both optimization levels. Mixed cppgm and
Clang 21 callers and callees pass in both directions on the running targets
at both optimization levels. The probes pass and return enums and a record
with unsigned, signed, and GNU wide enum members. The mixed objects also
cross-link for both Darwin architectures.
[C enum notes](../doc/c-conformance-notes.md#enumeration-constants-and-incomplete-tags) ·
[PA38 forward tags](../pa38/tests/general/300-c-forward-enum.t) ·
[PA38 enum constants](../pa38/tests/general/500-c-enum-types.t)

Additional C99 and C11 tests cover Unicode prefix tokenization, direct
macro expansion, token pasting, and Clang's C11 feature and extension
probes. ISO C99 agrees with both native compilers. GNU99 follows GCC's
retention of Unicode literal extensions. Both native compilers agree on
the pedantic constraint for `_Alignof(expression)`. C17 now reports the
edition for `__VA_OPT__` under pedantic diagnostics, following GCC.

A PA38 test covers conditional expressions with integer zero and
`(void *)0` in both operand orders, and with qualified void pointers.

[PA38 edition check](../pa38/tests/general/500-c11-edition-syntax.t) ·
[PA38 conditional pointer check](../pa38/tests/general/500-conditional-null-pointer.t)

Tagged struct, union, and enum names can precede the colon of a generic
association. c-testsuite `00219.c` now passes at both optimization levels
in C17 and GNU17.
[PA38 tag association](../pa38/tests/general/500-generic-tag-association.t)

A controlling `int (*)[]` can match both `int (*)[1]` and `int (*)[2]`.
GCC 15 and Clang 21 diagnose the multiple matches in pedantic C17.
cppgm now diagnoses the case as well. Added controls for duplicate
associations involving incomplete arrays, enums within prototypes, and
unprototyped functions. The latter test distinguishes a compatible
`int` parameter from a `float` parameter that default promotion changes.
Long lists of distinct pointers to complete arrays and fully prototyped
functions now scale near-linearly.
[PA38 multiple matches](../pa38/tests/general/500-generic-multiple-matches-bad.t) ·
[PA38 structural compatibility](../pa38/tests/general/500-generic-structural-compatibility.t) ·
[C frontend scaling](../docs/performance/c-frontend-scaling.md#generic-association-baseline)

The GNU conditional expression with one void operand now passes all
four configurations of c-testsuite `00213.c`, including its labels
inside loops and statement expressions. The extension gives the
expression a void result and evaluates the selected arm for effects.
Pedantic diagnostics follow GCC and Clang.
[PA38 conditional control](../pa38/tests/general/500-gnu-conditional-void.t)

## Generic selection requirements

The rules apply in C11 and C17. C99 edition tests separately exercise
the diagnostic for the extension. The listed fixtures run in PA38's
native and Wasm lanes.

| C11 6.5.1.1 | Evidence | Pending qualification |
| --- | --- | --- |
| p2 At most one default | [Duplicate default](../pa38/tests/general/500-generic-duplicate-default-bad.t) | |
| p2 Association names a complete object type | [Incomplete array](../pa38/tests/general/500-generic-incomplete-array-bad.t), [incomplete record](../pa38/tests/general/500-generic-incomplete-record-bad.t), [function](../pa38/tests/general/500-generic-function-association-bad.t) | |
| p2 Association type has no variable modification | Existing declaration restrictions reject VLA type names. | Exercise the restriction specifically for pointers to VLAs when the type names are supported. |
| p2 Association types are pairwise incompatible | [Typedef aliases](../pa38/tests/general/500-generic-duplicate-compatible-bad.t), [array bounds](../pa38/tests/general/500-generic-array-compatibility-bad.t), [enums in prototypes](../pa38/tests/general/500-generic-prototype-compatibility-bad.t), [unprototyped functions](../pa38/tests/general/500-generic-unprototyped-compatibility-bad.t) | Complete the underlying compatibility audit in 6.2.7. |
| p2 Control has at most one match | [Two pointer-to-array matches](../pa38/tests/general/500-generic-multiple-matches-bad.t) with an incomplete array under the controlling pointer. | |
| p2 Control has a match in the absence of a default | [No match](../pa38/tests/general/500-generic-no-match-bad.t), [qualification of the control](../pa38/tests/general/500-generic-qualified-no-match-bad.t) | Audit qualification and conversion outcomes against applicable WG14 decisions. |
| p3 Control and unselected expressions are unevaluated | [Effect counts and unreferenced call](../pa38/tests/general/500-generic-selection.t), [diagnostic for an invalid unselected expression](../pa38/tests/general/500-generic-invalid-unselected-bad.t) | |
| p4 Result retains type and expression category | [Record, lvalue, array, function designator and void results](../pa38/tests/general/500-generic-selection.t), [bit-field address constraint](../pa38/tests/general/500-generic-bit-field-address-bad.t) | |

## Variably modified type requirements

C99 requires variable-length arrays. cppgm defines `__STDC_NO_VLA__` in
C11 and C17 while qualification continues. The seven portable probes
for mixed dimensions, typedefs, pointers, parameters and `sizeof` type
names pass. GCC 15 and Clang 21 accept the corresponding PA38 cases in
pedantic C17. The type-name checks now also cover casts, compound literals,
and GNU `typeof`. Further compatibility rules and hosted target ABI
qualification remain open.

A replay of twelve PA38 C17 runtime cases passed at `-O0` and `-O2` on
Linux x86-64, AArch64 under QEMU, and WASI under Wasmtime. It covers scope
exits, variably modified type-names, bound capture, parameters, and a C-only
link across translation units. Both Darwin architectures also compiled and
linked all twelve cases at both levels. Native Darwin execution remains
pending. A separate adjusted-parameter probe links cppgm and Clang 21
objects in both caller and callee directions for C99, C11 and C17 at both
optimization levels. It runs on Linux x86-64, AArch64 under QEMU, and bare
Wasm under Wasmtime, and cross-links for both Darwin architectures.

Preprocessing defaults `__STDC_HOSTED__` to zero on bare Wasm and one
on WASI and the native targets. The
[execution environment checks](#execution-environment-selection) cover
explicit mode selection. These VLA checks leave `__STDC_NO_VLA__` defined.

| C11 clause | Requirement | Current evidence |
| --- | --- | --- |
| 6.7.6.2p1, p3 | An array has complete elements and a written bound uses the assignment-expression grammar. | [Incomplete external array](../pa38/tests/general/300-array-element-incomplete-bad.t), [typedef](../pa38/tests/general/300-array-typedef-element-incomplete-bad.t), [adjusted VLA parameter](../pa38/tests/general/300-array-vla-element-incomplete-bad.t), and [GCC `c99-arraydecl-2`](upstream-gcc-c99.json). [PA38 runtime case](../pa38/tests/general/300-array-declarator-constant-and-vla.t) covers a parenthesized comma and arrays of pointers to incomplete records. |
| 6.2.4p7, 6.7.6.2p5 | A VLA retains its size for its lifetime and releases automatic storage when its scope ends. | [Single-dimension VLA across a call](../pa38/tests/general/500-vla-call-c-unwind.t), [mixed and fully runtime dimensions](../pa38/tests/general/300-variable-array-multidimensional.t), and a C-only link of c-testsuite `00207.c`. |
| 6.7.6.2p2 | Variably modified identifiers obey block and prototype scope and linkage constraints, independently of whether they allocate storage. | [Automatic and static pointers](../pa38/tests/general/300-variable-array-pointer.t) and [extern rejection](../pa38/tests/general/300-variable-array-extern-pointer-bad.t). |
| 6.7.6.2p4–p6, 6.7.6.3p7 | Prototype-scope bounds are treated as `[*]`. Outermost parameter arrays adjust to pointers. | [Outermost star](../pa38/tests/general/300-array-parameter-star.t), [nested prototype bounds](../pa38/tests/general/300-variable-array-parameter.t), and [conflicting fixed inner bounds](../pa38/tests/general/300-variable-array-parameter-conflict-bad.t). |
| 6.2.1p8, 6.7.6.2p4 | Type names in a prototype can use `[*]`. | [PA38 prototype type names](../pa38/tests/general/300-array-prototype-type-names.t) covers alignment, size and nested callback prototypes. Negative cases cover a definition's parameter list, its body, file scope, and a variably modified generic association inside a prototype. |
| 6.7.6.3p7, p15 | The adjusted parameter object keeps bracket qualifiers. Function type compatibility uses the adjusted type without top-level qualifiers. | [C99 qualifiers in identifier-list definitions](../pa38/tests/general/300-array-declarator-constant-and-vla.t), [C99 restrict](../pa38/tests/general/300-restrict-kr-array.t), and [C11 atomic bracket qualifier](../pa38/tests/general/300-array-parameter-atomic.t). The [atomic conversion rejection](../pa38/tests/general/300-array-parameter-atomic-discard-bad.t) agrees with GCC 15. Clang 21 drops the atomic qualifier in this form. |
| 6.7.8p3 | A typedef with a varying bound captures its extent each time execution reaches the declaration. | [Loop, alias composition, and extent reuse](../pa38/tests/general/300-variable-array-typedef.t). |
| 6.7.2.4p3, 6.7.6.2p5 | An atomic pointer type can derive from a VLA. A single type specifier supplies the captured bound for its declarators. | [Atomic pointer type specifier](../pa38/tests/general/300-variable-array-atomic-type.t) covers shared and typedef bounds and definition parameters. [Direct atomic VLA](../pa38/tests/general/300-variable-array-atomic-direct-bad.t) checks the array constraint. |
| 6.7.6p3, 6.7.6.2p2 | A function type derives from its result, including a variably modified result. | [Local function pointer](../pa38/tests/general/300-variable-array-function-pointer.t) retains the runtime result bound. [The linkage case](../pa38/tests/general/300-variable-array-function-linkage-bad.t) rejects a function with that type, and [the goto case](../pa38/tests/general/300-variable-array-function-pointer-goto-bad.t) checks entry into the pointer's scope. |
| 6.5.3.4p2, 6.7.6.2p5 | `sizeof` uses a VLA's runtime size. A bound inside `sizeof` can be elided if its value cannot change the result. | [Runtime array type names and the elidable pointer-type bound](../pa38/tests/general/300-variable-array-typeid.t). |
| 6.5.3.4p2 | A `sizeof` operand of VLA type is evaluated. Other expression operands are unevaluated, including their function calls. | [Side effects and C-only link](../pa38/tests/general/300-variable-array-sizeof-operand.t). |
| 6.5.2.5p1, 6.5.4 | Allow casts and pointer compound literals with variably modified type names. Diagnose a compound literal of VLA type. | [Side-effecting cast and pointer compound literal](../pa38/tests/general/300-variable-array-cast.t) and [VLA compound literal rejection](../pa38/tests/general/300-variable-array-compound-bad.t). |
| GNU `typeof` | Evaluate the operand of variably modified type. In a shared specifier, capture type-name bounds once and repeat expression effects per declarator. | [Type and expression operands, nested type names, and parameter adjustment](../pa38/tests/general/300-variable-array-typeof.t). |
| 6.8.6.1p1, 6.8.4.2p2 | `goto` and switch labels cannot bypass entry into the scope of a variably modified identifier. | [Jump into a VLA scope](../pa38/tests/general/300-variable-array-goto-bad.t), [typedef](../pa38/tests/general/300-variable-array-goto-typedef-bad.t), and [pointer](../pa38/tests/general/300-variable-array-case-pointer-bad.t). |
| 6.9.1p10 | Evaluate the size expressions of variably modified parameters on function entry. | [Inner strides and side effects in the adjusted outer bracket](../pa38/tests/general/300-variable-array-parameter.t), with and without `static`. |
| 6.9.1p6 | An identifier-list definition declares every parameter in the list. | Pedantic checks for [all declarations omitted](../pa38/tests/general/300-array-kr-implicit-all-bad.t) and [one omitted](../pa38/tests/general/300-array-kr-implicit-some-bad.t). PA38 also [rejects `[*]` in an identifier-list definition](../pa38/tests/general/300-array-kr-unspecified-star-bad.t). |

The two new array runtime cases pass at `-O0` and `-O2` on Linux x86-64,
AArch64 under QEMU, and WASI under Wasmtime. Both Darwin architectures
cross-link the cases as Mach-O dylibs at both levels. The identifier-list
fixture also passes with Clang 21 at both levels and GCC 15 at `-O0`.
GCC 15 reports an internal compiler error during its `-O2` build.

The same compiler passes zlib 1.3.1 `teststatic` and the Lua 5.4.8 basic
suite on Linux x86-64. The SQLite amalgamation emits byte-identical
`-O2` objects before and after the changes.

[Declarator scaling and frozen compile controls](../docs/performance/c-frontend-scaling.md#c-identifier-list-parameter-declarations)

The current VLA compatibility probes pass after fixed and `[*]`
prototypes, for a conditional pointer with one fixed and one runtime
bound, and for a conditional pointer with two compatible captured bounds.
GCC 15 and Clang 21 agree on those cases. For type names inside prototype
expressions, DR 341 records an earlier discussion favoring a restriction
and ends with wording that permits prototype-scope type names. cppgm
follows the published wording. GCC 15 accepts these type names with an
advisory warning. Clang 21 rejects them.

The GCC C99 manifest includes `vla-5` for prototype compatibility,
`vla-8` for jumping past a variably modified function pointer, and
`vla-13` at `-O0` and `-O2` for bound evaluation in casts and pointer
compound literals. [GCC C99 manifest](upstream-gcc-c99.json) ·
[WG14 DR 341](https://www.open-std.org/jtc1/sc22/wg14/issues/c99/issue0341.html)

The VLA target replay covers eleven positive PA38 inputs in C99 and
seventeen in each of C11 and C17, all with `-pedantic-errors` at `-O0`
and `-O2`. Linux x86-64, AArch64 under QEMU, bare Wasm, and WASI each
pass all 90 runtime configurations. Intel and Arm Darwin each compile
and cross-link all 90 as Mach-O dylibs. Native Darwin execution remains
pending. Recompiling the 576 translation units after moving the function
variability flag to type insertion yielded identical objects.

An additional C11 mixed-compiler call uses `_Atomic(int (*)[++n])` in
the definition and a fixed array pointer parameter in the caller. The
caller and callee compile with cppgm and Clang 21 in both directions at
`-O0` and `-O2`. It runs on both Linux targets and both Wasm profiles and
cross-links for both Darwin architectures.

The new PA38 type-query case covers block- and file-scope type names with
runtime bounds, including bounds inside a nested query. GCC 15 and Clang
21 agree on the positive C11 fixture and the diagnostic for `[*]` outside
prototype scope. The positive and negative cases pass at `-O0` and
`-O2` in C11 and C17 across all six targets, with native or emulated
execution on Linux and both Wasm profiles. On both Darwin targets the
positive case cross-links with the cppgm and LLVM linkers.

The existing Intel macOS and Apple Silicon workflows run an eight-program
PA38 driver slice at `-O0` and `-O2`. It checks direct compilation and
linking, object linkage with cppgm and the host driver, and the LowIR
backend path. Native workflow results and the full Darwin qualification
remain pending. [PA38 type queries](../pa38/tests/general/500-types-compatible-vla.t)

## Restricted pointer types

PA38 checks restricted pointers to objects, type and object declaration
compatibility, GNU qualifier spellings, variably modified array parameters,
identifier-list definitions, and the qualifier of a conditional pointer
result. It diagnoses restrict on a scalar or function pointer and checks
qualifier discard and nested pointer conversion. The pinned GCC C99 lane
includes `c99-arraydecl-3`.

The earlier-edition array-typedef diagnostic follows Clang 21 and WG14
N2607. GCC 15 also accepts that form under `-pedantic-errors`. The GNU17
runtime case verifies element qualification in the extension. The combined
atomic and restrict parameter test follows GCC 15 and C11's qualified
atomic type rule. Clang 21 rejects the combination.

A mixed-compiler probe pairs a fixed array pointer parameter in the caller
with a restricted variably modified parameter in the definition. Both
cppgm/Clang 21 caller and callee directions ran successfully in C99, C11,
and C17 at `-O0` and `-O2` on Linux x86-64, AArch64 under QEMU, bare Wasm,
and WASI. Both Darwin architectures cross-linked those configurations
as Mach-O dylibs. The Linux hosted replays also passed zlib 1.3.1
`teststatic` and the Lua 5.4.8 basic suite.

[PA38 restrict parameter case](../pa38/tests/general/300-restrict-parameters.t) ·
[GCC C99 manifest](upstream-gcc-c99.json) ·
[WG14 N2607](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2607.pdf) ·
[WG14 DR 423](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1846.htm#dr_423) ·
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#c-restrict-qualifiers)

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

## Aggregate initializer requirements

Each designation keeps its written path in the syntax tree. Analysis uses
member lookup and array indices to build a sparse typed initializer plan.
Positional entries advance from the selected subobject. Replacing a whole
subobject discards its earlier plan, and replacing a member preserves the
rest of its earlier aggregate value. Overridden expressions still receive
semantic checks. Only the surviving expressions demand callable bodies.
Gaps in an array emit zero ranges or observable scalar initialization when
the element type requires it.

| Rule | Evidence |
| --- | --- |
| 6.7.9p4, p19 | [Overwritten undeclared name](../pa38/tests/general/300-designator-overridden-name-bad.t) and [overwritten nonconstant static initializer](../pa38/tests/general/300-designator-overridden-static-bad.t) diagnose the written expressions. GCC 15 agrees on both. Clang 21 accepts the nonconstant overwritten expression. |
| 6.7.2.1p13, 6.7.9p7 | [Anonymous member lookup](../pa38/tests/general/300-designated-retained-values.t) resolves a member injected through both an anonymous structure and an anonymous union. |
| 6.7.9p14, p19, p21 | [Overlays and replacement](../pa38/tests/general/300-designated-retained-values.t) preserve other characters and members. A new brace pair supplies the entire subobject, including zeros for omitted members. Clang 21 agrees on these cases. GCC 15 zeroes the sibling when a member replaces part of an earlier record expression. WG14 issue 0413 calls for preserving the sibling. |
| 6.7.9p17, p18, p20 | [Nested continuation](../pa38/tests/general/300-designated-continuation.t) reaches the remainder of an array row, record, or union member and continues in the enclosing object. GCC 15 and Clang 21 pass. |
| 6.7.9p21, p22 | [Sparse incomplete arrays](../pa38/tests/general/300-designated-sparse.t) infer the highest index even after a later entry initializes a lower index. Static and automatic gaps are zeroed, and a volatile array retains typed stores. GCC 15 and Clang 21 pass. |
| 6.6p7, p9 | [Static address constants](../pa38/tests/general/300-designated-gnu-flexible.t) cover nonzero integer constants cast to pointers and a constant conditional. Fixed addresses with an offset also go into static data. The integer-to-pointer mapping uses the selected target. |
| GNU static initializers | [Flexible array and compound-literal overlay](../pa38/tests/general/300-designated-gnu-flexible.t) agree with the GCC 15 results. |

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 issue 0413](https://open-std.org/JTC1/SC22/WG14/issues/c11c17/issue0413.html) ·
[WG14 issue 0253](https://www.open-std.org/jtc1/sc22/wg14/issues/c99/issue0253.html)

The four portable positive fixtures, including the original designated
initialization case, ran at `-O0` and `-O2` on Linux x86-64 and under
AArch64 QEMU. Both Darwin targets emitted Mach-O objects. PA38 native
and Wasm suites include the portable and GNU cases. GNU range designators
and their overlap and single-evaluation rules remain open.

[Initializer scaling measurements](../docs/performance/c-frontend-scaling.md#designated-initializers)

## Composite types, tentative definitions, and linkage

GCC 15 and Clang 21 on Linux x86-64 served as controls for the reduced
C17 cases. A declaration's lexical binding carries the type visible in
its scope. Linked objects first declared in a block share an entity
indexed by interned name. The compatibility type keeps the constraints
from all declarations of that entity. Analysis visits only incomplete
tentative definitions at the end of the translation unit.

| Rule | Evidence or remaining gap |
| --- | --- |
| 6.2.7p3, p4 and 6.7.6.3p15 | [Composite types](../pa38/tests/general/400-c-composite-types.t) combine array bounds through pointers, function parameters, and return types. The fixture checks implicit compatible-pointer conversion, bounds in nested scopes, and reads from two blocks that declare an object before its file-scope declaration. |
| 6.2.7p2, p4 | [Conflicting linked bounds](../pa38/tests/general/400-c-composite-linked-bounds-bad.t) diagnose a conflict after the enclosing block ends. [Shadowed array bound](../pa38/tests/general/400-c-composite-shadowed-bad.t) diagnoses a `sizeof` whose visible declaration has no bound. The pinned GCC cases include the same compatibility check for functions. |
| 6.5.15p5, p6 | [Conditional pointers](../pa38/tests/general/500-conditional-composite-pointer.t) retain a complete array bound in both operand orders, combine qualifiers, and evaluate the selected operand. A [prototype regression](../pa38/tests/general/500-conditional-composite-prototype-bad.t) checks arity when one operand lacks a prototype. [Integer promotions](../pa38/tests/general/500-conditional-integer-promotions.t) cover equal signed-character, boolean, and bit-field operands. The pinned GCC case checks arithmetic, aggregate, void, and pointer results in both orders. |
| 6.9.2p2, p3, p5 | [Incomplete tentative definitions](../pa38/tests/general/400-c-tentative-incomplete.t) emit one zeroed element for an external array with no bound by the end of its translation unit. A later bound or tag definition controls storage when supplied. [Internal tentative arrays](../pa38/tests/general/400-c-tentative-internal-bad.t) are checked at their declaration under the pedantic policy. An [uncompleted record](../pa38/tests/general/400-c-tentative-record-bad.t) is diagnosed at the end of its translation unit. The pinned Clang case exercises a tentative array. |
| 6.7.4p3, p7 | PA38 diagnoses an inline-only definition that [calls an internal function](../pa38/tests/general/400-c-inline-internal-call-bad.t), [references an internal object through `sizeof`](../pa38/tests/general/400-c-inline-internal-object-bad.t), [defines a modifiable static array](../pa38/tests/general/400-c-inline-static-bad.t), or [defines a modifiable thread-local object](../pa38/tests/general/400-c-inline-thread-bad.t). [Late linkage](../pa38/tests/general/400-c-inline-linkage.t) covers a later external declaration, an earlier inline declaration followed by its body, and an immutable static local. The [missing definition fixture](../pa38/tests/general/400-c-inline-missing-body-bad.t) uses the pedantic policy. The pinned GCC cases cover declaration order, internal linkage, diagnostics, and missing bodies. |

The two positive PA38 cases ran at `-O0` and `-O2` on Linux x86-64 and
under AArch64 QEMU. Mach-O object emission passed for both Darwin
architectures at both levels. PA38 exercises the cases in its native
and Wasm lanes. A separate reader with two block-scope declarations
linked and ran with an object definition in a second translation unit.
cppgm and GCC each compiled both sides in turn at `-O0` and `-O2`.

The same compiler built the C sources for zlib 1.3.1, Lua 5.4.8, and
SQLite 3.50.4 in GNU17 at `-O2`. GCC 15 linked the emitted objects.
Both zlib static test modes passed, Lua's basic suite reported
`final OK`, and the SQLite shell returned `2|16` for the aggregate
query over rows 4, 7, and 9 filtered above 4. zlib's configuration
also used GCC 15. The C branch's direct native link path still
rejects static archives, as does the parent compiler.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC C99 manifest](upstream-gcc-c99.json) ·
[GCC C17 manifest](upstream-gcc-c17.json) · [Clang C17 manifest](upstream-clang-c17.json) ·
[Declaration scaling measurements](../docs/performance/c-frontend-scaling.md#declarations-and-linkage)

### Block-scope function declarations

[Block function linkage](../pa38/tests/general/400-c-block-function-linkage.t)
checks inherited internal linkage, a hidden file-scope prototype, a nested
composite return type, and calls to functions first declared in a block.
A block prototype can supply the ABI boundary for a call to an external
symbol whose first declaration left the parameters unspecified. The fixture
includes a second translation unit that provides that function's definition.
The typed call uses that boundary through direct object emission and the
LowIR round trip.

The [visible prototype case](../pa38/tests/general/400-c-block-function-prototype-bad.t)
diagnoses an extra argument. The [file-scope bound case](../pa38/tests/general/400-c-block-function-hidden-bad.t)
checks that the first file-scope declaration starts with its written type.
Two cases check agreement between a block prototype and an empty identifier
list in a definition, [definition first](../pa38/tests/general/500-c-block-function-later-arity-bad.t)
and [prototype first](../pa38/tests/general/500-c-block-function-arity-bad.t).
The [GCC C17 manifest](upstream-gcc-c17.json) includes `redecl-11.c` for
conflicting array bounds in function parameters after a block ends. Clang
accepts that case. The compatibility requirement comes from C11 6.2.7p2,
which leaves the behavior of incompatible declarations undefined.

## Constant expressions

The reduced C17 cases use GCC 15 and Clang 21 as controls. WG14 DR 261
distinguishes a constant value from eligibility as a constant expression.
Issue 0489 addresses the constraints that still apply to unevaluated
operands.

| Rule or context | Evidence or remaining gap |
| --- | --- |
| 6.6p3, p6 and p11 | PA38 rejects [evaluated comma](../pa38/tests/general/500-c-ice-comma-bad.t), [cast floating arithmetic](../pa38/tests/general/500-c-ice-float-bad.t), and [an object operand in a skipped branch](../pa38/tests/general/500-c-ice-operand-bad.t). The [positive fixture](../pa38/tests/general/500-c-integer-constant-expressions.t) checks a skipped comma, an immediate floating literal cast, and the selected generic association. |
| 6.7.6.2p4 and p5 | A file-scope array with a [foldable comma bound](../pa38/tests/general/300-c-ice-array-bound-bad.t) is diagnosed as variably modified. The positive fixture also uses a block array whose dimension is the value of a `const` object. |
| Required integer contexts | PA38 also rejects a nonconstant [case label](../pa38/tests/general/500-c-ice-case-bad.t), [enumerator](../pa38/tests/general/400-c-ice-enumerator-bad.t), [bit-field width](../pa38/tests/general/200-c-ice-bit-field-bad.t), [alignment](../pa38/tests/general/300-c-ice-alignment-bad.t), and [array designator](../pa38/tests/general/300-c-ice-designator-bad.t). |
| 6.3.2.3p3 | PA38 checks computed null constants in implicit initialization, comparisons, calls, returns, and a conditional expression. The [GCC C99 manifest](upstream-gcc-c99.json) adds positive cases for unevaluated operands, casts to `void *`, and preservation of an ordinary pointer type when the converted value lacks the required operand forms. |
| 6.6p7–p10 and 6.7.9p4 | PA38 diagnoses a [comma in an arithmetic initializer](../pa38/tests/general/500-c-static-comma-bad.t), a [comma in a pointer offset](../pa38/tests/general/500-c-static-offset-bad.t), and an [increment in a variably modified cast](../pa38/tests/general/500-c-static-vla-bound-bad.t). GCC's C99 `c99-const-expr-11.c` tests several such bounds. Clang accepts the three reduced examples as additional forms. |

[WG14 DR 261](https://www.open-std.org/JTC1/SC22/WG14/www/docs/dr_261.htm) ·
[WG14 issue 0489](https://open-std.org/JTC1/SC22/WG14/issues/c11c17/issue0489.html)

The positive fixture passes on Linux x86-64 and AArch64 QEMU at `-O0` and
`-O2`. Both Darwin architectures emit Mach-O objects at both levels. PA38
runs the fixture through native and Wasm. The GCC C99 manifest passes all
16 selected cases. The pinned Clang C11 signed-character representation case
continues to accept `__builtin_bit_cast` in its assertions. Hosted GNU17
replays passed the zlib example and compression round trip, the Lua basic
suite, and the frozen SQLite shell workload.
[Constant-expression scaling](../docs/performance/c-frontend-scaling.md#integer-constant-expressions)

### Static initialization

GCC 15, Clang 21, and cppgm diagnose these cases under C17 `-fsyntax-only`.
The checks also apply when compiling directly to native or Wasm objects.

| Static initializer | Regression |
| --- | --- |
| A call in a file-scope aggregate | [Ordinary braced initialization](../pa38/tests/general/300-c-static-braced-call-bad.t) |
| A call in an object with thread storage duration | [Thread storage](../pa38/tests/general/400-c-static-thread-call-bad.t) |
| A call in a block-scope static initializer | [Block-scope static](../pa38/tests/general/500-c-static-local-call-bad.t) |
| A read of an ordinary external `int` | [External object's value](../pa38/tests/general/400-c-static-extern-value-bad.t) |
| The address of an automatic object | [Automatic storage address](../pa38/tests/general/500-c-static-local-address-bad.t) |
| A call in a file-scope compound literal | [Static compound literal](../pa38/tests/general/500-compound-static-nonconstant-bad.t) |

The [two-file runtime case](../pa38/tests/general/500-c-static-initializers.t)
initializes scalars, pointers, and records using arithmetic, a function
address, an incomplete array declared in the first unit, an address within
a file-scope compound literal, and a variably modified cast. It ran on Linux
x86-64 and AArch64 QEMU at `-O0` and `-O2`, and in PA38's Wasm lane. Both
Darwin architectures emitted Mach-O objects. The x86-64 object has neither
a startup initializer nor a C++ guard. The [compound literal fixture](../pa38/tests/general/500-compound-literals.t)
now emits its scalar copy as static data as well.

## C11 alignment and assertions

The pinned GCC C17 manifest passes all ten cases. cppgm now accepts C
alignment specifiers interleaved with storage, type, and qualifier
specifiers, and checks the contexts that forbid them. The PA38 layout
case verifies the strongest nonzero request, the address of static and
automatic objects, and the offsets of named and anonymous members. The
type operand uses the element alignment of a VLA without running its
bound. A standalone tag with `_Alignas(0)` remains valid. GCC diagnoses
an invalid alignment value there, while Clang discards the unused specifier.

The C11 alignment case runs on Linux x86-64, AArch64 under QEMU, and
Wasm. The freestanding copy used for cross-checking emitted objects
that LLVM inspected and linked for both Darwin architectures at `-O0`
and `-O2`. The prior Intel Mach-O failure came from a segment base
that allowed file padding to exceed the virtual segment extent. The
existing PA26 host check exercises a 128-byte-aligned data symbol.

The second repaired GCC test puts a static assertion in a `for`
initializer. Both native controls accept it. PA38 checks a true
assertion and the diagnostic for a false one.

PA38 checks alignment agreement with explicit definitions in the same
translation unit. The pedantic checks cover mismatched and missing requests
in either declaration order, block-scope `extern`, and a conflict before
an initialized definition. Runtime cases cover equal strongest requests,
neutral zero and natural alignment, a type completed after its declaration,
tentative storage, and alignment supplied by GNU attributes and typedefs.
GCC 15 accepts the explicit-definition conflicts Clang 21 diagnoses. WG14
issue 1044 leaves several details open. cppgm checks the strongest standard
request when it exceeds natural alignment and permits equivalent alignment
from a GNU-only definition. Declarations without an explicit definition
in the current translation unit retain the prior storage-alignment rules.
Target-specific extended alignment limits still need qualification.

[GCC C17 manifest](upstream-gcc-c17.json) ·
[PA38 layout case](../pa38/tests/general/500-c11-alignment.t) ·
[PA38 agreement case](../pa38/tests/general/400-c-alignment-redeclarations.t) ·
[PA38 neutral and GNU cases](../pa38/tests/general/400-c-alignment-redeclaration-extensions.t) ·
[PA38 assertion case](../pa38/tests/general/500-c11-for-static-assert.t) ·
[PA26 Mach-O host check](../pa26/tests/macho/100-handler-rejoin.cpp) ·
[WG14 C23 issue log](https://open-std.org/jtc1/sc22/wg14/www/docs/n3977.htm)

## C loop declarations and prototype tags

The pre-C23 `for` initializer check uses the kind, scope, and storage
of each typed binding introduced there. With `-pedantic-errors`, PA38
rejects static, external, and thread-local objects, typedefs, functions,
tags, and enumerators. The accepted cases exercise automatic and register
objects, shadowing, an existing tag, and an anonymous record. The GNU17
extension control exercises a static loop object. The pinned C99 manifest
now checks both GCC rejection cases alongside its existing execution test.
Where GCC and Clang differ on tags and enumerators, DR 277 is the oracle.

Tags introduced by a nested function prototype are scoped to that
declarator. The accepted loop fixture includes a function pointer
parameter with its own tag. Separate fixtures verify that a parameter
tag is distinct from a subsequent file-scope tag, that a tag introduced
in a function definition can be used in its body, and that two prototypes
which independently introduce a tag have conflicting types.

Both positive programs run on Linux x86-64, AArch64 under QEMU, and Wasm.
On Linux, LLVM also inspected and linked both programs' objects for Intel
and Apple Silicon at `-O0` and `-O2`.

[C11 draft, N1570 §6.2.1 and §6.8.5](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 DR 277](https://www.open-std.org/Jtc1/sc22/wg14/issues/c99/issue0277.html) ·
[GCC C99 manifest](upstream-gcc-c99.json) ·
[PA38 loop scope](../pa38/tests/general/500-c-for-declarations.t) ·
[PA38 prototype tag scope](../pa38/tests/general/500-c-prototype-tag-scope.t)

## Alignment queries

PA38 diagnoses standard `_Alignof(int[])` and an expression-form query on
a bit-field designator. It also rejects a request that weakens the known
element alignment of an incomplete array object or VLA. GCC diagnoses
both weakened requests, while Clang accepts the incomplete array case.

The runtime fixture reads an object's requested alignment from its own
initializer, queries an aligned typedef and a packed or capped member,
queries an incomplete array object in the GNU form, and leaves a VLA's
bound unevaluated. It also verifies acceptance of alignment and size
queries on the value of an assignment to a bit-field. Both native controls
accept this value, with different sizes for the reduced example.

The runtime fixture passes on Linux x86-64 and AArch64 under QEMU at
`-O0` and `-O2`, and in the PA38 Wasm lane. Linux LLVM tools also inspect
and link its objects for both Darwin architectures at those levels. The
expanded GCC C11 manifest passes all three cases. The batch also passes
the zlib 1.3.1 example and compression round trip and the Lua 5.4.8 basic
suite on Linux x86-64.

cppgm retains the GNU type-form incomplete-array query accepted by Clang
and preserves its previous handling of dereference expressions. GCC and
Clang disagree on whether dereferencing the address of an over-aligned
object propagates its declaration alignment. GNU alignment queries on
functions and their interaction with code alignment remain open.

[C11 draft, N1570 §6.5.3.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[GCC alignment queries](https://gcc.gnu.org/onlinedocs/gcc/Alignment.html) ·
[PA38 runtime fixture](../pa38/tests/general/500-c-alignment-queries.t) ·
[GCC C11 manifest](upstream-gcc-c11.json)

## Execution environment selection

PA38 checks the C execution mode with a shared source header. It exercises
flag precedence, invalid hosted entry signatures, the adjusted array
parameter and implicit zero of hosted `main`, ordinary calls to a
separately compiled `strlen` in freestanding mode, and an explicit
builtin. The `no_builtin=yes` LowIR
fact also prevents the reader from assigning a legacy startup role.
PA25 covers a supplied native entry with `-nostdlib` using the ordinary
compile-and-link test lane.

The freestanding source and serialized LowIR run with a custom startup
or explicit export at `-O0` and `-O2` on x86-64 Linux, AArch64 Linux
under QEMU, bare Wasm, and WASI. The same inputs cross-link on Intel and
Arm Darwin. Hosted tests at both levels run on the Linux targets and
with the pinned WASI startup. Bare Wasm diagnoses an explicit hosted
request. On Linux x86-64 an explicit builtin can use a compiler helper
with `-nostartfiles`; `-nostdlib` reports the helper unresolved when
the user supplies none. Native Linux also runs the three-parameter
hosted entry with `-nodefaultlibs`. Both execution modes can include
`<stddef.h>` with `-nostdlib` on Linux x86-64 and with the pinned WASI
SDK. The hosted WASI case also links through cppgm with that SDK.
The hosted case is in the two native macOS workflows. Intel runs the
custom entry in its strict report, and the Apple Silicon job runs the
PA25 case explicitly. Native execution results and library coverage
remain pending.
[PA38 environment cases](../pa38/tests/general/c-environment.h) ·
[PA25 custom entry](../pa25/tests/general/200-runtime-custom-entry.t)

An x86-64 glibc C11 probe compiled with cppgm and linked with GCC 15
passes thread creation and joining, thread-local storage, one-time
initialization, mutexes, condition variables, and thread-specific data
at `-O0` and `-O2`.

C input now selects the host's C include paths, and GNU `__auto_type`
supports GCC's C `<stdatomic.h>` macros. The pinned GCC C17 suite passes
both deduction cases, with the positive executed at `-O0` and `-O2`.
The PA38 hosted atomic case passes at both levels with GCC's native
x86-64 Linux headers and with the pinned WASI SDK. It exercises scalar
and aggregate operations, compare-exchange success and failure, and
single evaluation of a macro argument.

The deduction batch passed the strict course report (11,650), PA35 through PA5
(341), the debug-info checks, and the PA38 native and Wasm lanes. The
student export regenerated 26,138 verified reference files and repeated
PA38 using the bundled self-built tools. The expanded pinned manifests
and differential corpora kept their existing reviewed gaps.
[PA38 hosted atomic case](../pa38/tests/controls/500-c11-stdatomic.t) ·
[GCC C17 manifest](upstream-gcc-c17.json)

### Cross-target integer headers

The target environment supplies compiler integer predefines independently
of the host data model. Darwin uses `long long` for the exact 64-bit
type and `long` for `intmax_t`. Bare Wasm and WASI use `long long` for
both 64-bit roles and 32-bit `long` for the pointer-sized signed type.
The PA38 case checks the C integer headers, including the types of
literal macros and the limits they expose. PA37 checks the Emscripten
resource headers and PA39 checks the Arm Linux type predefines.

The integer and atomic cases pass with the configured cppgm predefines
at `-O0` and `-O2` on bare Wasm and AArch64 Linux, with Clang 21 and
23 resource headers. Intel and Arm Darwin compile and cross-link Mach-O
with those headers. The pinned WASI SDK and the GCC 14 and glibc
2.43 AArch64 Linux sysroot also run both cases at both levels. The same
Arm sysroot runs the thread and TLS probe under QEMU. The pinned Clang
23 header exercises the explicit `__SIG_ATOMIC_MIN__` predefine, and
GCC's C atomic header exercises the unsigned character type predefines.
An additional 16-byte aggregate control exercises load, exchange, and
both compare-exchange outcomes with the GNU `libatomic` ABI. It passes
at `-O0` and `-O2` on native x86-64 Linux and on AArch64 Linux under QEMU.
A multi-threaded C11 control with relaxed compare-exchange increments
and release/acquire publication also passes on both Linux targets and
at both levels.
Native Darwin execution, wider atomics on other runtimes, and full
optional-feature qualification remain open.
[PA38 integer header case](../pa38/tests/general/500-c-integer-headers.t) ·
[PA37 Emscripten layout](../pa37/tests/values/200-source-emscripten-layout.t) ·
[PA39 Linux data model](../pa39/tests/target/100-linux-data-model.t)

The batch passed the strict course report (11,650), PA37 and PA39,
PA38 native and Wasm, PA35 through PA5, and the native inception comparison.
The placement audit scanned 11,242
cases with zero placement findings. The student export regenerated
26,141 verified reference files, and the bundled compiler passed
the PA38 lanes and the Emscripten integer-header case.
[Compile-time measurements](../docs/performance/c-frontend-scaling.md#cross-target-integer-predefines)

### Atomic capability reporting

The resolved instruction profile supplies the GCC and Clang header
predefines. The scalar lock-free macros are usable in `#if`, as required
by DR 458. The C11 and C17 Wasm profile with `-mno-atomics` defines
`__STDC_NO_ATOMICS__` and reports false for the inline and runtime queries.
The C99 profile omits that C11 feature macro. Explicit command-line
`-D` and `-U` still control the macro table.

The builtin with an always lock-free result takes a constant size.
Other queries accept runtime arguments and evaluate them once on the
runtime path. Constant aligned inline cases still fold. On Linux,
runtime queries match the linked `libatomic` for sizes 0, 1, 2, 3, 4, 8,
16, and 17 at multiple alignments. Both the pointer and size-only forms
pass at `-O0` and `-O2` on x86-64 and under AArch64 QEMU. Enabled and
disabled Wasm queries pass under Wasmtime. Linux and bare Wasm pass
the scalar header cases with Clang 21 and 23 headers, and both Darwin
targets cross-link those cases and the dynamic queries. Native Darwin
runtime validation remains open.

At this stage, the GCC-based C atomic header used the generic runtime ABI
successfully for a 16-byte aggregate on Linux. The corresponding Clang
header probe reached a by-value builtin with an inline width restriction.
For an aggregate containing only 3, 12, 16, or 17 bytes, Clang 21 and
cppgm use atomic size/alignment pairs of 4/4, 16/16, 16/16, and 17/1 on
x86-64 Linux. GCC 15 uses 3/1, 12/1, 16/16, and 17/1. Test the amount
of storage read through the atomic object separately from the bytes
read from the ordinary desired value or written to the expected value.
[WG14 lock-free defect reports](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm#dr_458) ·
[PA30 runtime query](../pa30/tests/run/800-atomic-lock-free-query.t.1) ·
[PA37 Wasm runtime query](../pa37/tests/values/200-source-atomic-queries.t) ·
[PA38 C atomic capability](../pa38/tests/general/500-c-atomic-disabled.t)

The strict report passed 11,652 tests. PA36 smoke, PA37, PA38, PA39,
debug information, PA35 through PA5, and the native inception
comparison passed. The placement audit scanned 11,245 inputs with
zero placement findings. The student export verified 26,147 reference
files and passed the new PA30, PA37 and PA38 cases using its bundled
tools. The pinned upstream and differential runs retained their
reviewed outcomes.
[Compile-time measurements](../docs/performance/c-frontend-scaling.md#atomic-capability-queries)

### C11 atomic aggregate builtins

Clang's by-value builtins and GNU's generic pointer builtins use the
ordinary value size for sources, results and expected-value updates.
An atomic object containing a three-byte value uses an inline four-byte
operation. Wider representations use the existing size-prefixed runtime
ABI. The typed call selects either path. Lowering gets both widths from
the types it already needs for storage and stages operands only where
the representation or the runtime ABI requires it.

The PA30 runtime test checks the provider's width, both compare-exchange
outcomes, and canaries next to the ordinary value buffers. The PA38 hosted
control also checks exactly-once evaluation of the value passed to the
real header.
[PA30 runtime protocol](../pa30/tests/run/800-gnu-atomic-runtime-protocol.t.1) ·
[PA38 hosted atomic control](../pa38/tests/controls/500-c11-stdatomic.t)

At `-O0` and `-O2`, 3-, 12-, 16-, and 17-byte values passed with Clang's
and GCC's C headers and Linux's `libatomic` on x86-64 and under AArch64
QEMU. A release/acquire publication probe with 200,000 reads and
writes per width also passed for 3-, 12-, and 17-byte values with
Clang's header on both Linux targets. The original probe passed as bare
Wasm and WASI under Wasmtime with a single-thread ABI test provider.
It linked as Mach-O for Intel and Arm Darwin with a supplied provider.
Native Darwin execution and a concurrent wide Wasm runtime are still
open qualification items.
[Atomic aggregate rules](../doc/c-conformance-notes.md#atomic-aggregate-values) ·
[Compile-time measurements](../docs/performance/c-frontend-scaling.md#atomic-aggregate-builtins)

The strict report passed 11,652 tests. PA36 smoke, PA37, PA38 native and
Wasm, PA39, debug information, PA35 through PA5, and native inception
passed. The placement audit scanned 11,245 cases with zero findings. The
student export verified 26,147 reference files and passed the two
affected cases with its bundled tools. The pinned GCC, Clang,
`c-testsuite`, GCC torture, and Csmith results retained their reviewed
outcomes.

### Ordinary C atomic aggregate expressions

The direct three-byte aggregate return had split the read into ordinary
loads. Ordinary C assignment and lvalue conversion for a twelve-byte
object read torn values in all three native runs of the publication probe.
They now share the sized atomic operations used by the builtin path.
The assignment result reuses the ordinary value. Copies into arguments
and returns use the unqualified layout. Initialization covers padding in
local atomic objects and in explicitly initialized and omitted members.
[PA38 inline case](../pa38/tests/general/500-c-atomic-record-access.t) ·
[PA38 wide case](../pa38/tests/general/500-c-wide-atomic-record-access.t) ·
[Direct atomic access rules](../doc/c-conformance-notes.md#ordinary-c-atomic-reads-and-assignments)

The concurrent publication probe for 3-, 12-, and 17-byte values passed
three runs each at `-O0` and `-O2` on Linux x86-64 and AArch64 QEMU.
Clang and cppgm objects exchanged 12- and 17-byte values on x86-64 with
`libatomic`. Both optimization levels passed for bare Wasm and WASI with
a single-thread ABI test provider. Mach-O linked for both Darwin targets
with a supplied provider. The disabled Wasm atomic profile rejected wide
atomic access with an explicit diagnostic.

The strict report passed 11,652 tests. PA36 smoke, PA37, PA38 native and
Wasm, PA39, debug information, PA35 through PA5, and inception passed.
The placement audit scanned 11,248 cases with zero findings. The export
verified 26,153 reference outputs and passed the new native and Wasm
cases with the bundled tools. The upstream tests, GCC torture, and
Csmith retained their reviewed outcomes.

[Compile-time measurements](../docs/performance/c-frontend-scaling.md#ordinary-c-atomic-aggregate-expressions)

### Wide C atomic arithmetic

Wide C compound assignments and increment and decrement expressions now
share the runtime protocol for ordinary atomic loads and stores. AArch64
and Wasm previously rejected wide instructions reached from a
`long double` update. On x86-64, the instruction path could select
`cmpxchg16b` while other accesses used the provider. The wide
update prepares its expected buffer once, loads the representation,
and retries the computation from the expected value supplied by a failed
compare-exchange. Wide integer initialization stores directly before
publication.
[PA38 arithmetic case](../pa38/tests/general/500-c-wide-atomic-arithmetic.t) ·
[Forced retry provider](../pa38/tests/general/500-c-wide-atomic-arithmetic.wasm.c) ·
[Read-modify-write rules](../doc/c-conformance-notes.md#c-atomic-read-modify-write)

The PA38 case passed at `-O0` and `-O2` with native Linux `libatomic` on
x86-64 and under AArch64 QEMU. A three-thread test ran 12,000 updates per
thread for scalar and complex `long double` and found the expected
totals in three runs at each level on both targets. The parent produced
an incorrect complex total in all three x86-64 `-O2` trials. Bare Wasm and WASI
passed the separate provider test, which forces a failed compare-exchange
and checks the postfix value and evaluation counts. Intel and Arm
Mach-O linked with a supplied provider. Native Darwin execution remains
unverified. The disabled Wasm atomic profile diagnosed the wide update.

The strict report passed 11,652 tests. Debug information, PA36 smoke,
PA37, both PA38 lanes, PA39, PA35 through PA5, and inception passed.
The placement audit scanned 11,249 cases with zero findings. The student
export verified 26,156 reference outputs and passed the new native
compilation and Wasm runtime cases with its bundled tools. The pinned
upstream tests, GCC torture, and Csmith retained their reviewed outcomes.

Floating-point environment qualification remains open.
[Compile-time measurements](../docs/performance/c-frontend-scaling.md#wide-c-atomic-arithmetic)

### Explicit 128-bit integer atomics

Modern GNU scalar builtins and Clang's C11 arithmetic builtins now
accept 128-bit integers. The wide scalar memory operations use the
generic ABI. The wide arithmetic and existing narrow bitwise operations
share the compare-exchange loop. PA30 checks the old and new result
forms, signed wrap, failed expected-value updates, a forced retry, and
operand evaluation counts. Its rejection case checks the ordinary
expected pointer type. PA38 exercises both builtin spellings on Wasm.
[PA30 protocol fixture](../pa30/tests/run/800-gnu-atomic-runtime-protocol.t.1) ·
[PA30 expected type](../pa30/tests/compile/700-gnu-atomic-wide-expected-type-reject.t) ·
[PA38 arithmetic fixture](../pa38/tests/general/500-c-wide-atomic-arithmetic.t)

At `-O0` and `-O2`, the load, store, exchange, compare-exchange, and
fetch probe passed with both GCC and Clang C headers on Linux x86-64 and
AArch64 under QEMU with `libatomic`. Clang's header passed in bare
Wasm and WASI under Wasmtime with a single-thread test provider. Intel
and Arm Darwin Mach-O linked with a supplied provider. Native Darwin
execution remains open. The disabled Wasm atomic profile diagnosed the
wide builtin call.

Three threads each ran 10,001 fetch-add and fetch-xor operations. The
counter and high-bit mask matched their expected values in three
trials at each optimization level, using GCC's header on x86-64 and
Clang's header on AArch64 QEMU.

The strict report passed 11,653 tests. PA36 smoke, PA37, PA38 native
and Wasm, PA39, debug information, PA35 through PA5, and inception
passed. The placement audit scanned 11,250 cases with zero findings.
The student export verified 26,158 reference outputs and passed the
affected PA30 and PA38 cases, including the Wasm runtime case, with
its bundled tools. The pinned upstream tests, GCC torture, and Csmith
retained their reviewed outcomes.
[Compile-time measurements](../docs/performance/c-frontend-scaling.md#explicit-128-bit-integer-atomics)

## Cross-target smoke results

The prototype array, tagged generic association, and structure return
fixtures emit ELF objects for Linux x86-64 and AArch64 and Mach-O objects
for Darwin x86-64 and arm64 at `-O0` and `-O2`. All six Linux AArch64
objects linked with LLD and a minimal ELF startup routine and ran
successfully under QEMU user mode 10.2.1. Hosted SDK and native Darwin
execution are separate qualification items.

The five new VLA runtime fixtures ran at `-O0` and `-O2` on Linux x86-64
and Linux AArch64 under QEMU. Both Darwin targets emitted Mach-O objects.
The PA38 Wasm lane also ran the five fixtures and checked the associated
rejection cases. [PA38 VLA parameter case](../pa38/tests/general/300-variable-array-parameter.t)

The cast, `sizeof` expression, and GNU `typeof` fixtures ran at `-O0` and
`-O2` on Linux x86-64 and Linux AArch64 under QEMU. Both Darwin targets
emitted Mach-O objects at both optimization levels. The PA38 Wasm lane
ran all three positives and rejected the VLA compound literal. GCC 15
and Clang 21 agreed on the fixture outcomes. [PA38 GNU `typeof` case](../pa38/tests/general/300-variable-array-typeof.t)

Copies of volatile-qualified records now use LowIR scalar accesses for
the qualified storage, including by-value arguments and returns. The
new PA38 case also covers discarded reads, use of the assignment's value,
and a larger copy that uses a loop. The assignment reuses the right-hand
snapshot for the result. The volatile accesses remain in optimized LowIR.
The case ran at `-O0` and `-O2` on Linux x86-64 and Linux AArch64 under
QEMU. The Wasm lane passed and both Darwin targets emitted Mach-O. Aggregate
transfers involving individually qualified subobjects remain an audit item.
[PA38 volatile record case](../pa38/tests/general/400-volatile-record-access.t)

## GCC torture and Csmith pilots

- **GCC torture.** At the GCC revision used by upstream CI, 1,339 C files
  in the top-level execute directory passed the initial standalone screen.
  A deterministic sample selected the 64 lowest SHA-256 digests of the
  basenames. GCC 15 agreed at `-O0` and `-O2` on all 64. cppgm matched
  109 of the 128 configurations in GNU17 on Linux x86-64. The failures
  include multidimensional and variably modified arrays, GNU inline
  assembly, GNU flexible member initialization,
  an always-inline call, and an optimized-only unresolved symbol. The
  current compiler matches 111 of 128 configurations with 17 reviewed
  failures. The scheduled and manually dispatched upstream workflow runs
  this sample and records unexpected differences independently of the known gaps.
  [Pinned execute corpus](https://github.com/gcc-mirror/gcc/tree/5115c7e447fc07457443df874bf57840e8316d5f/gcc/testsuite/gcc.c-torture/execute) ·
  [GCC suite instructions](https://gcc.gnu.org/onlinedocs/gccint/C-Tests.html)
- **Csmith 2.3.0.** Ran seeds 1 through 16 with at most three functions
  and a block depth limit of three. GCC 15 and Clang 21 agreed on 15 seeds
  at both optimization levels. Seed 16 timed out in all four native runs
  under the 40-second limit. cppgm initially could not parse the hosted
  floating-point limit macros. Probing host predefined macros in C mode
  closed that gap. Two of the seeds also exposed C++ copy
  constructor calls in C struct returns. With both fixes, cppgm matched
  all 30 qualified configurations in Linux x86-64 C17.
  The scheduled and manually dispatched upstream workflow now repeats
  these differential checks and retains the generated source, native
  checksums, and compiler receipts.
  [Pinned generator](https://github.com/csmith-project/csmith/tree/30dccd73b78652c4719f36572994778a5b233a4e) ·
  [PA38 floating limits](../pa38/tests/general/500-hosted-c-float-limits.t) ·
  [PA38 struct returns](../pa38/tests/general/500-c-record-return.t)
