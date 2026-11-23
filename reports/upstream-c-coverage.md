# C conformance inventory

The [C coverage plan](../docs/upstream-c-plan.md) defines scope and completion.
Clause numbers below follow C11 N1570 and C17, except where an edition is named.
An existing fixture establishes coverage for the behavior it exercises. The
open column lists work to qualify the remainder of each group.

[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C11 and C17 defect reports](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm)

| Clauses | Current C99 through C17 evidence | Open checks |
| --- | --- | --- |
| 5.1 Translation and execution environments | PA38 runs C on native and WASI. The pinned runtime suite links cppgm objects using a C driver. | Confirm required translation limits, initialization and termination, and freestanding entry contracts by target. |
| 5.2 Environment and character sets, 6.4 lexical elements | PA1 through PA4 cover shared source translation, tokens and macros. PA38 tests C literal types. Upstream cases exercise integer types and hexadecimal floating literals. | Audit C edition boundaries, trigraphs, UCNs, encodings, alternative tokens and numeric ranges. |
| 6.2.1–6.2.3 Scopes, linkage and namespaces | PA38 covers distinct namespaces, nested tags, typedefs and cross-unit declarations. | Complete prototype and label scopes, nested redeclarations and GNU forward enum declarations. |
| 6.2.4 Storage duration and lifetime | PA38 checks compound literals and automatic VLA scope exits. The hosted VLA test verifies a C-only link. | Cover variably modified declarations, bound evaluation, limited temporary lifetime and cross-ABI TLS. |
| 6.2.5–6.2.8 Types, compatibility and alignment | PA38 covers scalar kinds, pointer qualification, bit-fields and tentative definitions. GCC tests confirm the C99 boolean bit-field width and value rules. | Qualify composite types across units, array and function compatibility, C alignment rules, atomic representation and each ABI's bit-field layout. |
| 6.3 Conversions | PA38 checks arithmetic, promotions, void-pointer conversions and GNU pointer extensions. | Cover integer constant expressions as null pointer constants, conditional pointer composites, qualification, complex conversions and default argument promotions. |
| 6.5 Expressions | PA38 checks C value categories, generic selection, compound literals, casts and short-circuit effects. | Test aliasing, volatile and atomic effects, evaluation order and arithmetic boundaries across optimization levels. |
| 6.6 Constant expressions | PA38 exercises array bounds, static initialization and static assertions. | Distinguish the integer, arithmetic and address constant expression requirements from ordinary folding. |
| 6.7 Declarations and type names | PA38 covers tags, old and new function declarations, initializers, designators and one-dimensional VLAs. | Complete variably modified types, nested and overlapping designators, flexible arrays, repeated qualifiers and edition diagnostics. |
| 6.8 Statements and blocks | PA38 checks control flow, switch conversion and VLA scope exits. GCC's C99 runtime test checks for-declaration scoping. | Qualify for-declaration constraints, nested scopes and jumps involving variably modified types. |
| 6.9 External definitions | PA38 mixes units with common objects, inline definitions and identifier-list functions. | Check more cross-unit combinations, symbol visibility and inline linkage on each ABI. |
| 6.10 Preprocessing | PA4 covers shared macro replacement, conditional inclusion, pragmas and line control. PA38 probes C predefined macros. | Pin the GCC preprocessing corpus and qualify required diagnostics, mode macros and hosted header extensions. |
| 7 Library and language integration | PA38 hosted tests cover headers, varargs, builtins and startup attributes. The runtime matrix uses the host libc. | Qualify each SDK and its compiler-dependent headers. Add libc-test and hosted project builds. |
| Annexes and implementation-defined options | The existing target models record data layout and native ABI choices. | Publish the supported choices, conditional features and evidence for every advertised environment. |

## Additional editions

- **C90 and C95.** Inventory the earlier lexical and declaration rules,
  translation limits, and the amendment's language and hosted library changes.
- **C23.** Inventory preprocessing, literals, types, changed and removed
  constructs, runtime helpers and library requirements against the published
  edition and applicable WG14 decisions. Check both the introducing and the
  preceding editions.

## Pinned suite receipts

- **c-testsuite** inventories 220 programs in two dialects and at two
  optimization levels. cppgm passes 860 of 876 selected configurations.
  Four known source gaps account for 16 configurations. One source that
  reads an uninitialized automatic object is excluded from the runtime
  comparison. [Suite builder](../scripts/build_c_testsuite_ci_manifest.py) ·
  [Known gaps](upstream-c-testsuite-known-gaps.json)
- **GCC and Clang** execute the reviewed C99, C11 and C17 configurations,
  recording known failures separately from passes.
  [GCC C99](upstream-gcc-c99.json) · [GCC C11](upstream-gcc-c11.json) ·
  [GCC C17](upstream-gcc-c17.json) · [Clang C99](upstream-clang-c99.json) ·
  [Clang C11](upstream-clang-c11.json) · [Clang C17](upstream-clang-c17.json)

## Initial hosted replays

The Linux x86-64 replays compiled the project C files with cppgm in GNU17
mode. GCC 15 selected the zlib configuration and linked the project
objects. These results cover the listed workloads.

| Project | Configuration and result |
| --- | --- |
| zlib 1.3.1 | Static library, example and minigzip built at `-O3`. The upstream `teststatic` target passed. [zlib](https://zlib.net/) |
| Lua 5.4.8 | Linux static library, interpreter and bytecode compiler built at `-O2`. The version-matched documented basic suite passed. [Lua tests](https://www.lua.org/tests/#basic) |
| SQLite 3.50.4 | Amalgamation and shell built at `-O0` and `-O2`. Both SQL smoke runs passed transaction, aggregation, JSON and integrity checks. The build exposed C's tokenization of macros adjacent to quoted literals, now covered by PA38. [SQLite version](https://sqlite.org/releaselog/3_50_4.html) · [PA38 regression](../pa38/tests/general/100-adjacent-literal-macros.t) |

## Edition and declarator checks

The 15 edition fixtures agree with GCC 15 and Clang 21. They cover C11
static assertions, generic selection, atomic specifiers and qualifiers,
thread-local declarations, alignment specifiers and queries, and
nonreturning declarations. They also check GNU keyword spellings, omitted
assertion messages, and the effect of `-Wsystem-headers`. The checks run
in the native and Wasm PA38 lanes.

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

| C11 clause | Requirement | Current evidence |
| --- | --- | --- |
| 6.2.4p7, 6.7.6.2p5 | A VLA retains its size for its lifetime and releases automatic storage when its scope ends. | [Single-dimension VLA across a call](../pa38/tests/general/500-vla-call-c-unwind.t), [mixed and fully runtime dimensions](../pa38/tests/general/300-variable-array-multidimensional.t), and a C-only link of c-testsuite `00207.c`. |
| 6.7.6.2p2 | Variably modified identifiers obey block and prototype scope and linkage constraints, independently of whether they allocate storage. | [Automatic and static pointers](../pa38/tests/general/300-variable-array-pointer.t) and [extern rejection](../pa38/tests/general/300-variable-array-extern-pointer-bad.t). |
| 6.7.6.2p4–p6, 6.7.6.3p7 | Prototype-scope bounds are treated as `[*]`. Outermost parameter arrays adjust to pointers. | [Outermost star](../pa38/tests/general/300-array-parameter-star.t), [nested prototype bounds](../pa38/tests/general/300-variable-array-parameter.t), and [conflicting fixed inner bounds](../pa38/tests/general/300-variable-array-parameter-conflict-bad.t). |
| 6.7.8p3 | A typedef with a varying bound captures its extent each time execution reaches the declaration. | [Loop, alias composition, and extent reuse](../pa38/tests/general/300-variable-array-typedef.t). |
| 6.5.3.4p2, 6.7.6.2p5 | `sizeof` uses a VLA's runtime size. A bound inside `sizeof` can be elided if its value cannot change the result. | [Runtime array type names and the elidable pointer-type bound](../pa38/tests/general/300-variable-array-typeid.t). |
| 6.5.3.4p2 | A `sizeof` operand of VLA type is evaluated. Other expression operands are unevaluated, including their function calls. | [Side effects and C-only link](../pa38/tests/general/300-variable-array-sizeof-operand.t). |
| 6.5.2.5p1, 6.5.4 | Allow casts and pointer compound literals with variably modified type names. Diagnose a compound literal of VLA type. | [Side-effecting cast and pointer compound literal](../pa38/tests/general/300-variable-array-cast.t) and [VLA compound literal rejection](../pa38/tests/general/300-variable-array-compound-bad.t). |
| GNU `typeof` | Evaluate the operand of variably modified type. In a shared specifier, capture type-name bounds once and repeat expression effects per declarator. | [Type and expression operands, nested type names, and parameter adjustment](../pa38/tests/general/300-variable-array-typeof.t). |
| 6.8.6.1p1, 6.8.4.2p2 | `goto` and switch labels cannot bypass entry into the scope of a variably modified identifier. | [Jump into a VLA scope](../pa38/tests/general/300-variable-array-goto-bad.t), [typedef](../pa38/tests/general/300-variable-array-goto-typedef-bad.t), and [pointer](../pa38/tests/general/300-variable-array-case-pointer-bad.t). |
| 6.9.1p10 | Evaluate the size expressions of variably modified parameters on function entry. | [Inner strides and side effects in the adjusted outer bracket](../pa38/tests/general/300-variable-array-parameter.t), with and without `static`. |

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
  107 of the 128 configurations in GNU17 on Linux x86-64. The failures
  include multidimensional and variably modified arrays, GNU inline
  assembly, imaginary literal suffixes, GNU flexible member initialization,
  an always-inline call, and an optimized-only unresolved symbol. The
  scheduled and manually dispatched upstream workflow runs this sample
  and records unexpected differences independently of the known gaps.
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
