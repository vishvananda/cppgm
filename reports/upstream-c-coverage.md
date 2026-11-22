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

- **c-testsuite** exercises 220 programs in two dialects and at two
  optimization levels. The first fixed batch passed 848 of 880 configurations.
  The remaining 32 record eight source failures with their expected diagnostic
  and reason. [Suite builder](../scripts/build_c_testsuite_ci_manifest.py) ·
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
| SQLite 3.50.4 | Amalgamation and shell built at `-O0`. The SQL smoke run passed transaction, aggregation, JSON and integrity checks. The build exposed C's tokenization of macros adjacent to quoted literals, now covered by PA38. [SQLite version](https://sqlite.org/releaselog/3_50_4.html) · [PA38 regression](../pa38/tests/general/100-adjacent-literal-macros.t) |
