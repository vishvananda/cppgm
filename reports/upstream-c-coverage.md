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
applicable translation limit. The generator selects the 22 thresholds for
the edition, including the 32,767-byte hosted object in C90 and C95 and
the 65,535-byte hosted object in C99 through C17. Individual value checks
have distinct exit codes. For C90 and C95, the generated program uses
positional initialization and gives its external names distinct
six-character prefixes.
[Generator](../scripts/generate_c_translation_limits.py) ·
[C89 draft](https://www.columbia.edu/~ng2573/c89/c89-draft.html) ·
[C99 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

The C90 and C95 programs passed at `-O0` and `-O2` on x86-64 Linux, AArch64
Linux under QEMU, both Mach-O targets with local loaders, and WASI and bare
Wasm under Wasmtime. GCC 15 and Clang 21 passed both programs on Linux
x86-64. The C clause runner collects the legacy results alongside the
C99 through C17 matrix.

Pedantic C99, C11, and C17 passed at `-O0` and `-O2` on Linux x86-64,
Linux AArch64 under QEMU, and WASI and bare Wasm under Wasmtime. The bare
Wasm run invokes an exported entry point and also checks the large object.
GCC 15 and Clang 21 passed the same edition and optimization matrix on
Linux x86-64. Both Darwin targets emitted objects and cross-linked dylibs
in all six configurations. Native macOS execution remains open. The C CI
job runs the Linux x86-64, WASI, and bare Wasm configurations. The bare
compile uses `-ffreestanding -nostdinc`. The link exports the C entry
without a sysroot or startup files. The receipt checks that the actual
exported return value is zero, since Wasmtime reports it on stdout. The
job records the object, link, and execution stages at both optimization
levels. The native AArch64 Linux, Intel macOS, and Apple Silicon jobs
now collect this evidence with their own host C linkers. All 22 C99
through C17 cases pass on Linux AArch64 under QEMU with a cross-linked
glibc runtime. Native results from these jobs remain pending. The
rule inventory maps the combined executable to each applicable minimum.
It also tracks
the physical include check, the presumed diagnostic location, and the
unexpanded `#error` message as separate results. The job publishes the
target and edition matrix with the raw receipts. An absent result stays
uncovered even when the same case passes on another target.
[Versioned inventory](c-conformance.json) ·
[Evidence runner](../scripts/c_conformance.py) ·
[CI job](../.github/workflows/tests.yml)

## Numerical limits and rounding modes

The integer-limit probe checks the target ranges in `#if`, the plain
char range against the runtime signedness, and the promoted types in
C99, C11, and C17. The C99 fixture uses the reserved `__typeof__` and
`__builtin_types_compatible_p` spellings for the type assertions.
Separate floating probes check significand and exponent
macros, decimal precision, finite extrema, epsilon, C11 subnormals,
and the default rounding code. The probes use the actual headers.
They check `long` width and `long double` precision against the
expected target independently of the compiler's macro values.

The bare Wasm header replay uses the pinned SDK's compiler resource
headers and no libc. It links its binary128 comparisons with the
pinned compiler-rt archive. The runner hashes those inputs and
records them with the tested configurations. The default rounding
probe links without the archive. The WASI hosted probe passes the
same resource directory at compilation and link time so the driver
can supply binary128 helpers from its selected SDK.

The native rounding probe checks the four C rounding codes after
`fesetround()` and restores the entry mode. AArch64 previously used
the x86 rounding field to decode `fegetround()` and returned 1 for
toward zero. Bare Wasm previously tried to link a `fegetround()`
import. The regressions exercise observable results and the Wasm
module links without libc.

The C99 through C17 probes pass at `-O0` and `-O2` on Linux x86-64,
Linux AArch64 under QEMU, WASI, and bare Wasm. The AArch64 replay passes
with both GCC and Clang's compiler headers. Clang's `<float.h>` also
reports all four dynamic codes on x86-64 and AArch64. The installed GCC
headers use a fixed code for nearest.

Native macOS evidence remains open.
The `FENV_ACCESS ON` probe now preserves `1.0 + 0x1p-53` as runtime
arithmetic. It checks upward and downward rounding in the same function
and checks `FE_INEXACT` after a discarded addition. It also checks the
default mode in a nested block, restoration of the enclosing mode, and
a static initializer. Direct and LowIR round-trip execution pass on
Linux x86-64 from `-O0` to `-O3` in C99 through C17. AArch64 under QEMU
passes at `-O0`, `-O2`, and `-O3`. Bare Wasm passes the scope and
default-rounding control. An upward-rounded binary128 addition also
passes on AArch64 with libgcc. Further library profiles remain open.

The conversion probe now covers int to float and double to float
under upward and downward modes, and invalid after discarding an
out-of-range conversion to int. The comparison probe checks invalid
for ordered operators on quiet NaNs, including a discarded result,
and quiet behavior for equality and `isless`. It also exercises the
x87 long double comparison where available. Direct and LowIR
round-trip builds pass on x86-64 Linux at `-O0` through `-O3`.
AArch64 Linux under QEMU and bare Wasm pass at `-O0`, `-O2`, and
`-O3`, with the Wasm probe checking the comparison results and
default rounding. Native macOS execution and the broader library
and software-floating environment profiles remain open.
[Conversion probe](../pa38/tests/general/500-c-fenv-convert.t) ·
[Comparison probe](../pa38/tests/general/500-c-fenv-compare.t) ·
[PA38 scope and runtime probe](../pa38/tests/general/500-c-fenv-binary.t) ·
[WG14 N1570 §7.6.1 and F.8.4](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[Integer probe](../scripts/tests/c_integer_limits.c) ·
[Floating probe](../scripts/tests/c_float_limits.c) ·
[Default rounding probe](../scripts/tests/c_default_rounding.c) ·
[Clause inventory](c-conformance.json)

With `FENV_ACCESS ON`, hosted math call boundaries preserve observable
rounding and exception effects. The previous optimizer discarded the
inexact effect of an unused `sqrt` result and could replace `pow` with
ordinary arithmetic or combine `sin` and `cos` across a flag clear. PA33
checks explicit math call boundaries. PA38 checks downward rounding of
`sqrt`, an unused square root and power, and independent invalid flags
from `sin` and `cos` on infinity.

Linux x86-64 and AArch64 under QEMU pass direct and LowIR round-trip
execution in C99, C11, and C17 at `-O0`, `-O2`, and `-O3`. GCC 15 and
Clang 21 on x86-64 pass the same libm fixture when their builtin
substitutions are disabled. The WASI replay checks default-rounding
results for the three real square root interfaces and `pow`. A separate
header-free probe retains all four library imports in Intel and Arm64
Mach-O objects. LLD links those objects as shared libraries with dynamic
symbol lookup. Native macOS SDK execution remains open.
[PA33 call-boundary probe](../pa33/tests/o2/600-math-call-boundaries.t) ·
[PA38 hosted math probe](../pa38/tests/general/500-c-fenv-libm.t) ·
[WG14 N1570 §§7.6.1, 7.12.7, F.3, and F.10](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

The `FP_CONTRACT` probe uses a product that rounds to one before
addition and a fused result that is exactly nonzero. It checks file scope,
nested block scope, `_Pragma`, DEFAULT, and the intermediate rounding of
a cast or separate assignment. The probe passes in C99, C11, and C17 at
`-O0` and `-O2` on Linux x86-64, AArch64 Linux under QEMU, WASI, and bare
Wasm. The AArch64 replay checks that ON fuses both scalar widths and
passes after LowIR serialization through `-O3`. The Apple Silicon
profile emits Arm64 Mach-O objects from the same LowIR, and LLD
cross-links the fixture. Native macOS execution remains open.
[PA38 probe](../pa38/tests/general/500-c-fp-contract.t) ·
[WG14 N1570 §§6.5 and 7.12.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

The `CX_LIMITED_RANGE` fixture exercises file scope, block scope,
`_Pragma`, DEFAULT, and compound assignments. The OFF controls divide
complex values whose component squares would overflow or underflow.
They also check infinity recovery when the elementary product would
produce two NaNs. Under ON, scalar floating complex multiplication
and division use the elementary formulas.

The complex environment fixture reproduced a discarded division that
set invalid at `-O0` and disappeared at `-O2`. The call now carries
an effectful LowIR signature at that call site. The native fixture
checks invalid from a full-range division and inexact from a
limited-range division. Its Wasm control checks the quotient at
the target's round-to-nearest setting. Native x86-64 and Linux
AArch64 under QEMU passed both probes and their LowIR round trips
at `-O0`, `-O2`, and `-O3`. C99 through C17 clause replays
passed on those targets, WASI, and bare Wasm. The PA37 runtime probe
also covers double and binary128 complex helper calls against the
SDK's compiler-rt. A separately compiled double complex quotient
passed with cppgm in either caller or callee. The other compiler
was GCC 15 on x86-64, Clang 21 on AArch64 under QEMU, and the
WASI SDK's Clang on Wasm. The range probe cross-compiles into Intel
and Arm64 Mach-O objects. Native macOS execution remains open.
[PA38 range case](../pa38/tests/general/500-c-complex-limited-range.t) ·
[PA38 environment case](../pa38/tests/general/500-c-complex-fenv.t) ·
[PA37 runtime case](../pa37/tests/runtime/500-complex-runtime.t) ·
[WG14 N1570 §§7.3.4, 7.6.1, G.5.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

The long double probe exercises classification and all six quiet predicates
over 196 ordered and unordered pairs. It checks invalid after a discarded
relational comparison. On AArch64 Linux under QEMU, the prior compiler
set invalid during quiet operations. The new lowering compares the binary128
representation using scalar integers, and a native status instruction
signals invalid only for a relational comparison on the unordered path.
Direct and LowIR round-trip objects pass at `-O0` through `-O3` in C99,
C11, and C17. The x86-64 Linux, WASI, and bare Wasm clause probes also
pass. The Wasm probes exercise the values and do not query exception flags.
[PA38 probe](../pa38/tests/general/500-c-fenv-quad.t) ·
[WG14 N1570 §§7.12.3, 7.12.14, and Annex F.3](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[compiler-rt's binary128 comparison helpers](https://github.com/llvm/llvm-project/blob/main/compiler-rt/lib/builtins/comparetf2.c)

The hosted probe exercises classification and all six quiet comparisons
through the installed `<math.h>` on each standard real type. It also
checks mixed-type comparisons, single evaluation of operands, and the
native invalid flag. The AArch64 glibc `signbit` macro uses the typed
`__builtin_signbitf` even when the argument selects another branch.
PA30 checks the builtin's conversion and sign results. On x86-64,
glibc's size-optimized fallback expands `_Generic` into C99 code.
PA38 checks suppression for replacement-list tokens and re-enables
diagnostics for user inputs and `-Wsystem-headers`.

The hosted probe passes in C99, C11, and C17 at `-O0`, `-O2`, and
`-Oz` with glibc 2.43 on Linux x86-64 and AArch64 under QEMU, with musl
1.2.5 on Linux x86-64, and with the pinned WASI SDK. WASI's `NAN`
expands to floating division in the selected preprocessing environment.
A separate probe uses static division on all three real types and checks
that an automatic division still raises invalid on native targets.

[PA30 signbit fixture](../pa30/tests/run/800-builtin-fp-predicates-run.t.1) ·
[PA38 hosted fixture](../pa38/tests/general/500-c-hosted-math-classification.t) ·
[PA38 zero division fixture](../pa38/tests/general/500-c-fenv-static-zero-division.t) ·
[WG14 N1570 §§7.12.3, 7.12.14, and Annex F.8](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

## C23 preprocessing baseline

GCC 15 and Clang 21 both accept `c23`, `gnu23`, `c2x`, `gnu2x`, and
`iso9899:2024` and report `202311L` for all five spellings. The
clause inventory records the source and preprocessing obligations
individually. It uses N3220 for clause numbers and checks adoption
against the proposals. N3220 is a related public C2y working draft.
The WG14 editor's report attributes the corresponding C23 draft edits
to clarity, wording and cross-references.

| Area | Baseline and upstream sources |
| --- | --- |
| Trigraphs | Both compilers translate trigraphs in ISO C17 and leave them unchanged in C23. GCC `cpp/c23-trigraphs-*.c` and Clang `C/C23/n2940.c` cover this boundary and explicit enabling. |
| Binary numbers and digit separators | Both compilers accept binary integer literals and separators in C23 and reject the probe in pedantic C17. GCC `c23-binary-constants-*.c` and `c23-digit-separators-*.c`, and Clang `C/C23/n2549.c`, check value, type, token formation and diagnostics. |
| Conditional directives | GCC and Clang select the same groups for valid `#elifdef` and `#elifndef` in C23. They reject these directives in the outer conditional section in pedantic C17. GCC skips an unrecognized form inside a nested skipped group, where Clang issues an extension error. GCC `cpp/c23-elifdef-*.c` covers the forms and operands. |
| Warning directives | A reached C23 `#warning` produces a diagnostic with the unexpanded message. Both compilers accept the file under `-pedantic-errors` and suppress the warning in a skipped group. |
| Unicode | GCC `cpp/c23-ucn*.c` and Clang `C/C23/n2836_n2939.c` cover the change to Unicode identifier properties and the literal rules. Check initial and continuation characters, normalization, and agreement between direct UTF-8 and universal spelling. |
| Resource inclusion | GCC `cpp/embed-*.c` and Clang `C/C23/n3017.c` supply binary fixtures and cover resource status, replacement and parameters. The implementation must bound bytes read and tokens produced by the effective limit. |

cppgm now selects the experimental C23 mode for all five spellings.
The first batch enables the version macro, C23 trigraph defaults,
`#elifdef`, `#elifndef` and `#warning`. The GCC digit-separator acceptance
case exposed a lexical boundary and decimal line-control rule. The
lexer consumes an apostrophe and the following nondigit together, so
`0x0'e-0xe` has a subtraction after its first token. Decimal
`#line` accepts separators between digits in C23. The pinned GCC and
Clang lanes run eleven and four C23 configurations, respectively.
PA38 covers these edition boundaries with the same native and WASI
fixtures. The clause runner separately checks predefined version,
trigraphs including splice behavior, conditional selection, and the
warning's unexpanded message. Identifier normalization, resource
inclusion and later declaration semantics still need implementation.
Earlier pedantic C modes still accept the binary integer and
digit-separator probe that both GCC 15 and Clang 21 diagnose.

The clause run recorded 466 passes, including 15 C23 checks across
Linux x86-64, WASI and bare Wasm. All six new executable PA38 fixtures
passed at `-O0` and `-O2` on Linux x86-64, Linux AArch64 under QEMU,
both Mach-O targets with local loaders, bare Wasm and WASI. The
GCC and Clang resource baseline agrees on separate embed search
paths, zero-limit status, unknown vendor parameter status, and
replacement by prefix, suffix or empty-resource tokens.
[GCC resource search and parameters](https://gcc.gnu.org/onlinedocs/cpp/Binary-Resource-Inclusion.html)

The frozen C++ overload and GNU17 SQLite objects stayed byte-identical
in A/A, ABBA and BAAB blocks for this batch. Retired instructions
changed by +0.004% and -0.003%, and peak RSS by +0.116% and +0.122%,
respectively. The PA1 fixture checks the apostrophe token boundary
for C++14 as well.
On generated files with 128 to 1,024 conditional sections, the
`#elifdef` form used 2.81% to 5.84% fewer retired instructions than
`#elif defined(...)`. The two spellings produced byte-identical
objects in the A/A, ABBA and BAAB blocks. The directive reuses the
macro binding lookup and the existing conditional state.
The strict course report passed 11,674 tests. PA38 passed 477 native
tests, 540 WASI tests and three native ABI tests. PA39, debug-info,
inception, self-host through PA5, the harness checks and the source
and placement audits passed. The previous C cohorts still pass their
reviewed expectations, including the 60-case GCC C90 screen.
The final student export passed all 67 PA1 checks and the same PA38
native, WASI and ABI lanes.

[Clause inventory](c-conformance.json) ·
[WG14 N3221 editor's report](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3221.htm) ·
[WG14 N3220 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC change inventory](https://gcc.gnu.org/projects/c-status.html) ·
[Clang change inventory](https://clang.llvm.org/c_status.html)

## C23 resource inclusion

PA38 exercises computed and direct resource names, resource lookup after
`#line`, byte order, all four standard parameters and all three query
results. It checks diagnostics for missing resources, unsupported
parameters, duplicates, negative limits, `defined` in a limit, and
unbalanced parameter tokens. GCC 15.2 and Clang 21.1 accept the positive
fixture and diagnose all six negative fixtures. The pinned C23 CI
manifests now pass 14 GCC cases and nine Clang cases. The executable
fixture also passed at `-O0` and `-O2` for Linux x86-64, Linux AArch64
under QEMU, both Mach-O targets with local loaders, WASI, and bare Wasm.

The implementation records successful resource queries in dependency
output, as Clang does. Both GCC and Clang record files consumed by
`#embed`. The PA38 lane checks the standard parameters; the GCC and
Clang vendor parameters are outside the supported profile.
[WG14 N3220 §§6.10.2, 6.10.4, and 6.10.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC resource search and parameters](https://gcc.gnu.org/onlinedocs/cpp/Binary-Resource-Inclusion.html)

A read trace at `limit(64)` shows exactly 64 bytes read and 127 tokens
produced for files of 4 KiB, 1 MiB, and 64 MiB. The three preprocessed
outputs are identical, retired instructions stay at 3.79 million, and
median RSS stays between 17,348 and 17,492 KiB. At 64 MiB, limits of
4,096, 16,384 and 65,536 read
exactly those byte counts and produce 8,191, 32,767 and 131,071 tokens.
Retired instructions rise with token count, while median RSS stays
at or below 17,500 KiB. `__has_embed` reads zero payload bytes for
every size and limit, with retired instructions at 3.68 million.

The frozen C++ overload and GNU17 SQLite objects are byte-identical in
the A/A, ABBA and BAAB runs. Paired retired instructions changed by
−0.013% and +0.016%, and peak RSS changed by −0.077% and +0.049%.
The A/A task-clock spread was 43% and 17%, respectively, on the
shared host.

## C23 variadic macros and literal probes

The PA38 variadic macro fixture checks omitted, explicitly empty, and
macro-expanded empty arguments, including stringizing and pasting.
In strict C17, GCC and Clang reject omission in user macros. GCC accepts
omission with system-header definitions, and cppgm follows that policy.
`-Wsystem-headers` enables the diagnostic there. Both compilers accept
the C23 fixture. [WG14 N3033](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3033.htm)

The literal fixtures check basic and control characters, NUL, malformed
escapes and surrogates. The GCC C23 corpus also rejects
`c23-ucn-1.c` at its first invalid surrogate after the valid escape
cases. The number fixture checks binary literal types and suffixes,
stringizing and pasting digit separators, separated exponents, and
`#line`. The pinned C23 suites pass 15 GCC cases and nine Clang cases.
The clause matrices pass 514 probes, including 63 C23 probes across
Linux x86-64, WASI, and bare Wasm.

The positive PA38 fixtures ran at `-O0` and `-O2` for Linux x86-64,
Linux AArch64 under QEMU, both Mach-O targets with local loaders,
WASI, and bare Wasm. The ordinary PA38 lanes pass 491 source
fixtures on native and WASI, 63 native control fixtures, and
three native ABI fixtures. The strict course report passed 11,674
tests. Debug-info, inception, and self-host coverage through PA5
passed, as did the harness, source, and placement audits.
The C90 through C17 upstream manifests retain their
reviewed outcomes. The student export verified 26,626 portable
reference files and passed PA1 and the same PA38 native, WASI,
control, and ABI lanes.

The variadic diagnostic adds work only when a variable argument
is omitted. The frozen C++ overload and GNU17 SQLite objects are
byte-identical across all A/A, ABBA, and BAAB trials. Paired
retired instructions changed by +0.0005% and less than 0.0001%,
and peak RSS changed by −0.049% and +0.051%.
With 256, 1,024 and 4,096 C23 conditional groups exercising
omitted, empty and nonempty macro arguments, both binaries produced
identical output. The candidate used 10.67 million, 31.56 million
and 115.10 million retired instructions, respectively. The
paired increase stayed at or below 0.05%.

## C23 Unicode identifiers

The C23 lexer enforces the Unicode 15.1 XID repertoire and NFC for
raw, escaped and pasted identifiers. The PA38 cases cover valid
combining marks, raw and escaped name equivalence, line splicing,
Unicode 15.1 CJK, and distinct diagnostics for invalid characters or
non-NFC spellings. The C17 control retains its older repertoire.
The normalization check leaves string and preprocessing-number
spellings intact. [WG14 N3220 §6.4.2.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

The implementation matched the Unicode data for all 1,114,112
code-point lookups and passed 95,370 NFC decisions from the Unicode
15.1 normalization corpus, plus 100,000 randomized decisions
against the canonical decomposition and composition rules.
The generator verifies the three upstream input hashes.
[Unicode 15.1 database](https://www.unicode.org/Public/zipped/15.1.0/UCD.zip) ·
[Unicode Normalization Forms](https://www.unicode.org/reports/tr15/)

GCC 15 and Clang 21 accept the positive PA38 fixture. Both reject
invalid XID use. GCC diagnoses the tested non-NFC identifiers.
Clang 21 accepts the tested non-NFC cases in pedantic C23 mode.
The pinned manifests pass 17 GCC cases and ten Clang cases.
The clause matrix passes 538 probes, including 87 C23 probes, on
Linux x86-64, WASI, and bare Wasm. The PA38 positive tests run at
`-O0` and `-O2` on both Linux native targets, both Mach-O targets,
WASI, and bare Wasm. Linux AArch64 uses QEMU and Mach-O uses the
local loaders.

PA38 passes 499 source cases in both the native and WASI lanes.
The student export verified 26,638 portable reference files and
passed PA1 and the PA38 native, WASI, control, and ABI lanes.
The older C upstream manifests retain their reviewed outcomes.
The strict course report passes 11,674 cases. Debug-info, inception,
self-host through PA5, the harness checks, source and architecture
audits, and the placement audit also pass.

The frozen C++ overload and GNU17 SQLite builds produce identical
objects in A/A, ABBA, and BAAB trials. Paired retired instructions
change by +0.0030% and +0.0003%. RSS changes by +0.144% and −0.128%.
A/A task-clock varies by 56% and 41% on the shared host.

The source benchmark uses identifiers of 64 through 32,768
characters and compiles to identical outputs. Retired instruction
counts scale with consumed code points. The longest ASCII case
changes by +0.026%. CJK starters add 11.5% and ordered combining
marks use 5.0% fewer instructions than the previous lexer.
For marks that need full reordering after a
precomposed starter, the longest input adds 29.4% and uses
334.6 million retired instructions. Plain Unicode starters and
directly checkable combining sequences bypass allocation. When
decomposition is needed, scratch covers the current normalization
segment and canonical ordering is linear.

## C23 attribute inquiries and number edition boundaries

`__has_c_attribute` rescans its operand and returns the C23 revision
for `noreturn` and `_Noreturn`, including their reserved spellings.
Qualified extension names use the existing target attribute capabilities.
Unsupported attributes return zero. The query is also available in earlier
C modes, following GCC 15 and Clang 21. cppgm diagnoses ordinary source
use outside preprocessing conditions. Both reference compilers accepted
that use in the local probe. [WG14 N3220 §§6.7.13.7, 6.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

Before C23, both reference compilers accept binary integers as an
extension and diagnose them under `-pedantic-errors`. Both reject digit
separators in ISO and GNU C17. PA38 covers direct and pasted spellings in
source and preprocessing conditions. cppgm applies its existing system
header diagnostic policy. In the macro-use probe, GCC follows the same
policy and Clang 21 diagnoses the expansion at the user call site.

The GCC C23 manifest passes 23 cases and the Clang C23 manifest passes
ten. Two added Clang C17 cases exercise the ordinary and pedantic
numeric boundaries, and the earlier known C17 gap remains recorded.
The clause matrix passes 550 probes, including 99 C23 probes, on
Linux x86-64, WASI, and bare Wasm. The three positive portable probes
also run at `-O0` and `-O2` on both Linux native targets, both Mach-O
targets, WASI, and bare Wasm. Linux AArch64 uses QEMU. Mach-O uses the
local loaders.

The strict course report passes all 11,674 cases. Debug-info, inception,
self-host through PA5, the harness, and the architecture, source and
placement audits pass. The student export verifies 26,656 portable
reference files and passes PA1 and the PA38 native, WASI, control and
ABI lanes, including 509 C source cases in each of the two source lanes.

[Frozen-input and attribute query measurements](../docs/performance/c-frontend-scaling.md#c23-attribute-inquiries)

## C23 typeof specifiers and boolean keywords

PA38 exercises the two C23 type inquiries with qualified pointers,
atomic scalars and arrays, function designators,
and variably modified type and expression operands. Both inquiries
diagnose bit-fields. The C17 fixture covers the reserved extension
spellings and shows that the C23 keyword spellings still work as C17
identifiers. It also checks that a `typeof`-derived sole `void`
parameter has an empty call signature and lowers without a parameter
binding. C23 recognizes `bool`, `true`, `false`, and `static_assert`.
[WG14 N3220 §§6.4.4.6, 6.7.3.6, 6.7.12](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

The pinned manifests pass 27 GCC and 12 Clang C23 configurations,
including Clang's cases for adjusted parameter types.
The Clang compile replay suppresses its encoding warning for a non-UTF-8
byte in the pinned test's comment. The GCC runtime case also runs at
`-O2`, and the Clang VLA object returns the expected size of 13.
The clause matrix passes 580 probes, including 129 C23 probes, across
Linux x86-64, WASI, and bare Wasm. All four positive PA38 fixtures run
at `-O0` and `-O2` on both Linux native targets, both Mach-O targets,
WASI, and bare Wasm. Linux AArch64 uses QEMU. Mach-O uses the local
loaders.

The strict course report passes all 11,674 cases. Debug-info, inception,
self-host through PA5, the harness, and the architecture, source and
placement audits pass. PA38 passes 517 source cases in each of the
native and WASI lanes. The student export verifies 26,672 portable
reference files and passes PA1 and the PA38 native, WASI, control and
ABI lanes. The earlier C upstream manifests retain their reviewed outcomes.

[Frozen-input and array qualification measurements](../docs/performance/c-frontend-scaling.md#c23-type-inquiry-and-boolean-keywords)

## C23 nullptr and variadic calls

PA38 covers `nullptr_t` as a distinct scalar type, including static and
empty initialization, pointer and boolean conversions, atomic qualifiers,
comparison constraints and preservation of operand effects. The C17
controls check ordinary identifier use and the earlier ellipsis-only
diagnostic. C23 `<stdarg.h>` can use `__builtin_c23_va_start` without a
named argument. The revised operation uses the existing variadic ABI.
[WG14 N3220 §§6.3.2.4, 7.16.1.4, 7.21.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)

The pinned C23 manifests pass 38 GCC and 13 Clang configurations. The
GCC cases exercise the `<stddef.h>` typedef and `<stdarg.h>` macro, plus
variadic reads from registers and the stack. The additional pinned C17
case passes. The clause matrix passes 613 probes, including 162 C23
probes, on Linux x86-64, WASI, and bare Wasm.

The three positive PA38 fixtures run at `-O0` and `-O2` on both Linux
targets, both Mach-O targets, WASI, and bare Wasm. A separate two-object
replay passes both compiler directions on all six targets at both
optimization levels. It checks calls with a `nullptr_t` parameter and
return plus an ellipsis-only call that carries a null sentinel alongside
integer and floating arguments. Linux AArch64 runs under QEMU and
Mach-O runs under the local loaders.

The strict course report passes all 11,674 tests, and the student export
verifies 26,689 portable reference files. The exported PA1 and PA38
suites pass using the self-built reference tools. After moving the
contextual boolean conversion helper to meet the source size limit,
the PA38 native, Wasm and ABI suites, debug-info tests, inception,
and self-host through PA5 pass again.

[Frozen-input and feature scaling measurements](../docs/performance/c-frontend-scaling.md#c23-nullptr-and-variadic-calls)

## C23 bit-precise integers

PA38 exercises integer constant widths and their limits, literal suffixes,
preprocessing arithmetic, promotions, bit-fields, casts, unsigned
wraparound, signed overflow constraints, and arithmetic through atomic
updates. A wide switch tests labels that share their low word. The
duplicate-label fixture tests conversion of a negative ordinary case
value to a wide unsigned value.

The pinned C23 manifests pass 45 GCC and 14 Clang configurations. The
GCC C11 and C17 manifests pass six and 26 configurations respectively
including the new extension and header checks. The clause matrix passes
661 probes, including 210 for C23, on Linux x86-64, WASI and bare Wasm.
PA38 passes 542 native, 542 Wasm, 63 controls and three ABI cases.
PA30's deferred C++ template case passes with its original sign
specifier handling.

The strict course report passes all 11,674 tests. The student export
verifies 26,711 portable reference files. Exported PA1 and PA38 pass with
the self-built reference tools. The corrected build also passes inception,
self-host through PA5, the debug-info checks and the architecture audits.

The three non-atomic execution fixtures pass on Linux x86-64 and
AArch64, both Mach-O targets, WASI and bare Wasm at `-O0` and `-O2`.
The two-compiler replay passes in both directions at both optimization
levels on all six targets. It checks narrow and wide arguments and returns,
a wide argument on the stack, aggregate layout, a signed wide global,
and unnamed arguments whose offsets agree. Clang 23.1.0 in the WASI SDK can
emit a sixteen-byte stack alignment for a wide unnamed argument while
its `va_arg` advances using eight bytes. A sequence with a single
narrow argument immediately before the wide one reproduces that
mismatch with two Clang objects. cppgm uses eight-byte alignment at
both ends.

The wide multiplication, division, remainder and floating-conversion
replay passes on Linux x86-64, Linux AArch64, WASI and bare Wasm using
the existing runtime helpers. The Linux host additionally passes the
wide atomic arithmetic replay linked with libatomic through the host
linker at both optimization levels.

[Frozen-input and width scaling measurements](../docs/performance/c-frontend-scaling.md#c23-bit-precise-integers)

## C23 constexpr objects

PA38 covers file-scope and automatic definitions, named scalar and
aggregate constants, member and union selection, and exact initialization
before conversion. The scalar fixture evaluates a named constant as a
`_BitInt` width and checks distinct addresses in recursive invocations.
The aggregate fixture covers designated initialization, copies, and
sparse arrays. The complex fixture checks exact initializer conversions
and copies of a named complex constant. Rejection cases include complex
to real initialization and signaling NaN conversion. The C17 control
uses `constexpr` as an identifier.

The pinned C23 manifests pass 46 GCC and 15 Clang configurations.
The object emitted for Clang's linkage case has local read-only symbols
for the three addressed constants. The clause matrix passes 736 probes,
including 285 C23 probes, on Linux x86-64, WASI and bare Wasm.
PA38 passes 565 native, 565 Wasm, 63 controls and three ABI cases.
The strict course report passes all 11,674 tests. Debug-info, self-host
through PA5, the architecture checks, and the placement audit also pass.
The student export verifies 26,742 portable reference outputs and passes
PA1 and the native, Wasm, control, and ABI lanes of PA38 using the packaged
reference binaries.

The three positive fixtures pass at `-O0` and `-O2` on x86-64 Linux,
AArch64 Linux under QEMU, both Mach-O targets through the local
execution harness, bare Wasm and WASI. These runs use freestanding
startup for the cross targets. The following C23 gaps remain open
in this area.

- Declaring an object with inferred `auto`, including `constexpr auto`.
- Storage classes on compound literals and their use as constant operands.
- Named record constants with very large sparse array members.
  A record containing a ten-million-element array still reaches the
  interpreter's storage budget when only a scalar member is needed.

[C23 constexpr rules](../doc/c-conformance-notes.md#c23-constexpr-objects) ·
[Frozen-input and constexpr scaling measurements](../docs/performance/c-frontend-scaling.md#c23-constexpr-objects)

## Additional editions

The driver baseline at `39e13e127` rejects `c90`, `c89`,
`iso9899:1990`, `iso9899:199409`, and `c23` before parsing.
The first boundary probes below used GCC 15 and Clang 21 on Linux
x86-64. The Clang old-style and no-prototype controls disabled its
deprecation diagnostics so they could check the language boundary.

| Rule | Reference outcomes | Current cppgm evidence |
| --- | --- | --- |
| `c90.version` | The C90 aliases compile a plain C function and leave `__STDC_VERSION__` undefined. | `c90`, `c89`, `iso9899:1990`, `gnu89`, and `gnu90` passed. |
| `c95.version` | `iso9899:199409` defines `__STDC_VERSION__` as `199409L`. | The PA38 and pinned GCC probes passed. |
| `c90.implicit-int` | A definition with omitted return type is accepted in C90 and C95. C99 diagnoses the missing type. | PA38 covers the definition, a declaration with a storage class, and an identifier-list parameter. It also checks the C99 rejection. |
| `c90.implicit-call` | Calling a function before its declaration is accepted in C90 and C95. C99 diagnoses the missing declaration. | PA38 checks the C99 rejection and runs a C90 call that passes a promoted integer and double to a later definition. |
| `c90.block-declarations` | A declaration following a statement is diagnosed in pedantic C90 and C95. The input is valid in C99. | PA38 and pinned GCC cases passed the legacy rejection probes. The C99 control compiles. |
| `c90.line-comment` | GCC and Clang accept line comments in system headers in the ISO legacy modes. | PA38 checks user input, GNU89, and a system-header pragma with an inherited quoted include. The WASI SDK probe exercises system include paths. |
| `c90.control-scope` | Declarations in a control statement reach the enclosing block before C99. | PA38 checks selection and iteration statements and brackets the change with a C99 control. |
| `c99.control-scope` | Selection and iteration substatements have their own scope. A name introduced by a `do` condition ends with that iteration statement. | PA38 runs typedef and enumerator shadowing probes. The pinned Clang block-scope case checks the parser boundary. |
| `c90.later-constructs` | Pedantic C90 diagnoses C99 type specifiers, array declarator modifiers, compound literals, trailing enum commas, flexible members, and repeated qualifiers. | PA38 and GCC exercise the individual rejections. PA38 also checks equivalent C99 uses, including VLAs, and allowed explicit GNU extensions. |
| `c90.array-conversion` | Non-lvalue arrays retain array type in C90. GCC and Clang support a GNU subscript extension. C99 adds the usual array decay for these operands. | PA38 covers pointer conversions, subscript, comma and size queries, and address-taking on a C99 subscript element. |
| `c90.constant-context` | A legacy signed left shift uses the promoted type's bit representation. C90 initializers restrict operators in skipped branches and require constant elements in automatic aggregate lists. | The pinned GCC cases and paired PA38 probes check the arithmetic, constant initializers, conditional null typing, and GNU declaration suppression. |
| `c90.function-use` | GCC diagnoses `__func__` in pedantic C90. A static function named in an expression requires a definition, with an exception for constant size queries. | PA38 checks the predefined name, an unreachable reference, a later definition after a block redeclaration, and a declaration used only under `sizeof`. |
| `c11.record-and-typedef` | C11 permits anonymous structure and union members and redefinition of a typedef for the same non-variably-modified type. | PA38 runs both C11 features, checks the pedantic C99 diagnostics, and rejects a C11 typedef redefinition for a VLA. |
| `c90.pp-number` | The ISO C90 and C95 grammars allow signs after `e` and `E`. C99 adds signs after `p` and `P`. | PA38 checks macro substitution, stringization and pasting. cppgm and GCC follow the legacy grammar. Clang keeps the signed binary exponent together in its legacy modes. |
| `c95.digraphs` | A body delimited by `<%` and `%>` is accepted in C95 and diagnosed in pedantic C90. | PA38 checks directive delimiters and token pasting. Pinned GCC cases check stringization in both editions. |
| `c95.wide-headers` | `<iso646.h>`, `<wchar.h>`, and `<wctype.h>` compose in C95. | The hosted probe runs restartable conversions, wide-string operations and classification in the C locale. It passed on x86-64 Linux, AArch64 Linux under QEMU, and WASI. |
| `c95.inline-linkage` | GNU89's plain inline definition supplies its external symbol. An `extern inline` definition refers to the external symbol when emitted as a call. | PA38 links cppgm and an independent C provider. The glibc wide-header test also checks calls through the installed `btowc` wrapper at `-O0` and `-O2`. |
| `c23.version` | `-std=c23` compiles a plain C function and defines `202311L`. | The five aliases and the PA38 C23 version probe passed. |
| `c23.trigraphs` | Trigraph braces form a valid body through C17. The same source is diagnosed in C23. | PA38 checks default removal, retained spelling and splice behavior, and the explicit conversion option. |
| `c23.empty-parameters` | A call with an argument through a declaration with empty parentheses is accepted through C17 and diagnosed in C23. | The C17 control compiles. |
| `c23.identifier-list` | An identifier-list definition with explicit parameter types compiles through C17 and is diagnosed in C23. | The C17 control compiles. |

The pinned legacy cohorts pass 36 GCC C90 configurations, five GCC C95
configurations, and two Clang C90 configurations. The broader GCC
`c90-*.c` screen now agrees on all 60 selected configurations, up from
47 before the expression and function-use fixes and 34 before the
earlier diagnostics batch. All three binaries were checked with the
complete pinned source directory. Clang 21 differs from GCC in some
legacy diagnostics and shift behavior. Full hosted library
qualification remains open.

The strict course report passed 11,673 tests. PA38 passed on native x86-64
and WASI in both the solution checkout and the student export. The positive
legacy declaration and digraph probes passed at `-O0` and `-O2` on Linux
x86-64, Linux AArch64 under QEMU, both Mach-O targets using local image
loaders, bare Wasm, and WASI. The C runtime sample passed 876 cases and
the GCC torture sample retained its 113 matches in 128 configurations.
Debug-info, inception, and self-host through PA5 passed.

On Linux x86-64, the ABBA and BAAB blocks produced byte-identical objects
for the frozen C++ overload input and GNU17 SQLite. Retired instructions
changed by less than 0.006% and peak RSS by less than 0.11% on both inputs.
Task-clock readings were noisy. Generated C90 files with 128 to 1,024
implicit calls produced byte-identical objects to files using explicit
block-scope declarations. At each doubling, retired instructions grew
by less than 1.9 times, both for repeated declarations of one function
and for distinct names.

After the scope, preprocessing and inline-linkage changes, the frozen C++
and SQLite objects remained byte-identical. Retired instructions changed
by less than 0.016%. On synthetic files with 128 to 1,024 consecutive
control statements, C90 instruction counts fell by 0.93% to 1.30%.
The same inputs in C99 used at most 0.044% more instructions. Both editions
produced byte-identical objects in the A/A, ABBA and BAAB blocks.

With the additional edition checks and C99 statement scopes, the frozen
C++ overload and GNU17 SQLite objects were byte-identical again. Retired
instructions rose by 0.046% to 0.050% for C++ and 0.025% to 0.028% for
SQLite over three A/A, ABBA and BAAB trials. Peak RSS changed by -0.051%
to +0.050% for C++ and +0.259% to +0.393% for SQLite. Task-clock effects
stayed within the corresponding A/A spreads. On the control-heavy
synthetic inputs, instructions rose by 0.029% to 0.054% in C90 and
0.423% to 0.542% in C99.

The four new positive PA38 fixtures passed at `-O0` and `-O2` on all six
target profiles. The Mach-O runs used local loaders and independent
linking. GCC and cppgm suppress the `long long` diagnostic for a replacement
token supplied by a system macro but diagnose the same spelling in a
user-supplied macro argument. Clang 21 diagnoses both uses.

The strict report passed all 11,673 checks. PA38 passed 449 native tests,
512 WASI tests, and three native ABI tests in the solution and student
export. PA39 passed 106 tests, and the clause runner passed 451 probes
across Linux x86-64, WASI, and bare Wasm. The 876 runtime cases and the
113 of 128 GCC torture configurations reproduced their prior results.
Debug-info checks, inception, self-hosting through PA5, the harness
tests, and the source and placement audits passed.

After the expression and function-use fixes, the frozen C++ overload and
GNU17 SQLite inputs produced byte-identical objects in A/A, ABBA and BAAB
blocks. Retired instructions rose by 0.008% on both inputs. Peak RSS rose
by 0.003% and 0.060%, respectively. Task-clock effects were within the
23% to 36% A/A spreads. In generated pedantic C90 sources with 128 to
1,024 conditional initializers, the additional operand checks added
0.54% to 1.04% retired instructions. Each doubling remained below
1.81 times the previous count. The matched C99 input changed by
-0.021% to +0.059%. Both editions produced byte-identical objects.

The eight new executable probes passed `-O0` and `-O2` on x86-64
Linux, QEMU AArch64 Linux, both Mach-O targets with local loaders,
bare Wasm and WASI. The Wasm cross-object replay uses a freestanding
entry point to preserve the original `main` spelling for the
`__func__` probes. PA38 separately exercises hosted WASI startup.
That batch passed all 11,673 strict course checks, 467 native and
530 WASI PA38 checks, three PA38 native ABI checks, 106 PA39 checks,
451 conformance probes, debug-info, inception and self-host through PA5.
The 467 native, 530 WASI and three ABI checks also passed in the
student export.

[GCC C90 manifest](upstream-gcc-c90.json) ·
[GCC C95 manifest](upstream-gcc-c95.json) ·
[Clang C90 manifest](upstream-clang-c90.json) ·
[WG14 C amendment summary](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2310.pdf) ·
[WG14 scope resolution](https://www.open-std.org/JTC1/SC22/WG14/www/docs/n868.htm) ·
[GCC inline linkage](https://gcc.gnu.org/onlinedocs/gcc/Inline.html) ·
[WG14 N3220](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[GCC edition options](https://gcc.gnu.org/onlinedocs/gcc/Standards.html)

## Lexical translation and preprocessing

The PA38 code-unit fixture checks adjacent narrow strings containing an
embedded zero, two UTF-16 surrogate units and one UTF-32 code unit. It
checks the inferred bounds, final null, and zero fill for static, local
aggregate, and volatile arrays. GCC 15 and Clang 21 agree with the values.
The C clause job runs the fixture in C11 and C17 at `-O0` and `-O2` on
Linux x86-64, WASI, and bare Wasm. The C11 regression also runs on
AArch64 under QEMU and cross-links on both Darwin architectures.
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

A direct `__has_include(<header  name.h>)` now preserves both spaces.
PA38 exercises direct names, a macro alias for the operator, computed
names with expandable tokens, and empty macro suffixes. GCC 15 and
Clang 21 pass the positive fixture in C99, C11, C17, and C23. cppgm
passes it in the three existing C modes and diagnoses empty names and
nonempty suffixes. The positive fixture runs on Linux x86-64, AArch64
under QEMU, and WASI, and cross-links on both Darwin targets. A
separate GNU17 test with two include directories also passes for
`__has_include_next` with all three compilers. The extension has its
own C99 through C17 receipts. The C23 rule remains uncovered until
cppgm selects and exercises that edition.
[PA38 header operands](../pa38/tests/general/100-c-has-include-header-operands.t) ·
[Clause inventory](c-conformance.json) ·
[WG14 N3220, §§6.4.7, 6.10.2](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[Scaling](../docs/performance/c-frontend-scaling.md#direct-c-header-queries)

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

### Hosted C11 and C17 library probes

The C clause runner compiles, links, and runs focused fixtures in C11 and
C17 at `-O0` and `-O2`. The shared hosted cases cover the assertion,
alignment, and `noreturn` headers, aligned allocation, `timespec_get`,
the four `<uchar.h>` conversion functions, `quick_exit` handler order,
exclusive `fopen` mode, and the optional atomic interface. Each run owns
its working directory, so the file-mode test can create a fresh file.

All eight hosted cases passed at both optimization levels in both editions
on Linux x86-64 with glibc and Linux AArch64 with glibc under QEMU. The
seven applicable cases passed on WASI under Wasmtime. The eight Linux
cases passed locally in all four configurations with both GCC and cppgm linked
statically against musl 1.2.5. The native macOS jobs run the applicable
fixtures. Native macOS results remain to be collected, and the required
Unicode conversion rule remains uncovered for the Darwin SDK.

The Linux thread fixture verifies start and join, thread-local isolation,
one-time initialization, thread-specific storage and destruction, and a
condition-variable handoff. cppgm now follows the target predefines
observed in GCC and Clang. Both Linux targets omit the macro. Both Darwin
targets predefine `__STDC_NO_THREADS__` as `1`, including in earlier C
modes and C++, as Clang does. The selected target controls this value
even when the build compiler runs on a different platform. Header-free
macro dumps agreed with Clang 21 on all six targets in C99, C11, C17,
and C++20, and with GCC 15 on Linux x86-64. Adding `-ffreestanding` in
each C edition left the result unchanged.
[C11 feature macros and threads, §§6.10.8.3 and 7.26.1](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[Clang Darwin predefines](https://github.com/llvm/llvm-project/blob/llvmorg-22.1.2/clang/lib/Basic/Targets/OSTargets.cpp)

The Linux runtime results use a system-libc link of cppgm's object file.
The default cppgm executable link uses the course runtime and reports
undefined C11 thread symbols for this fixture.

WASI and bare Wasm also omit the predefine to match Clang. With the
selected `wasm32-wasip1` SDK, both compilers can include `<threads.h>`,
but linking a call to `thrd_create` fails because the library lacks the
symbol. Both compilers link `pthread_create`, which reports failure at
runtime. The clause runner checks the predefine separately from runtime
thread support. [wasi-libc target behavior](https://github.com/WebAssembly/wasi-libc#building-from-source)

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
and Wasm suites include the portable and GNU cases. The GNU range cases
track overlap and single evaluation in the dedicated inventory.
[GNU range designators](#gnu-range-designators-and-empty-records)

[Initializer scaling measurements](../docs/performance/c-frontend-scaling.md#designated-initializers)

### Flexible array and record member constraints

PA38 checks that a flexible array is the final member of a structure
with another named member. Names injected by an anonymous aggregate count
toward the requirement. The tests also reject a function-typed member,
and check strict-mode diagnostics for embedding a flexible structure or
a union containing one as a structure member or array element. Both
positional and designated nonempty initialization of a flexible member
require a diagnostic in strict mode. The implementation updates the record facts
as it declares each member, including transitively through union members.
[PA38 positive fixture](../pa38/tests/general/300-c-flexible-array.t) ·
[C11 draft, §§6.7.2.1 and 6.7.9](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)

The ten clause configurations per edition passed in C99, C11, and C17
on Linux x86-64, AArch64 Linux under QEMU, WASI, and freestanding Wasm.
The positive fixture also ran with GCC 15 and Clang 21 on x86-64 Linux,
and its freestanding form cross-linked as Mach-O for both Darwin targets
at `-O0` and `-O2`.
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#c-flexible-array-member-constraints)

The GNU static initializer path now supports nested flexible-array strings
through records and unions. It retains the declared type and carries the
initialized storage extent in the initializer plan. The GNU case
`pr28865.c` passes at both optimization levels. PA38 checks both
positional and designated initializers, file-scope compound literal
storage, and the offset of a later initialized member. GCC 15 emits the
later member at the wrong offset in that last case. The negative cases
cover strict ISO modes, nested element lists and writes, automatic
storage, array elements, and overlap with a following member.
[PA38 GNU strings](../pa38/tests/general/300-c-gnu-nested-flexible-strings.t) ·
[PA38 following member](../pa38/tests/general/300-c-gnu-nested-flexible-following-member.t) ·
[PA38 compound literal](../pa38/tests/general/300-c-gnu-flexible-compound-literal.t)

The three GNU fixtures passed on all six target profiles in GNU99, GNU11,
and GNU17 at `-O0` and `-O2`. Linux AArch64 ran under QEMU, both Darwin
profiles used SDK-free Mach-O replay, and both Wasm profiles used Wasmtime.
All seven negative fixtures produced the expected diagnostic class on
each target. A separate Linux x86-64 probe passed with GCC 15 and cppgm
for a wide string with an embedded null. The pinned GCC torture run now
matches 113 of 128 configurations, with 15 reviewed gaps.
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#nested-flexible-array-string-initializers)

The separate by-value ABI probe passed with cppgm and GCC 15 objects
in both caller/callee directions on Linux x86-64. For a structure with
an `unsigned` prefix and a flexible `int` tail, GCC and cppgm pass and
return the prefix in registers. Clang 21 passes the structure on the
stack and returns through a hidden pointer. Direct mixed GCC and Clang
executables failed in both directions at `-O0` and `-O2`, as did mixed
cppgm and Clang executables. On Linux AArch64, mixed cppgm and Clang
executables passed in both directions. On Darwin Arm64, the emitted
Mach-O objects agree on the register convention for this probe.
Intel Darwin now uses the retained flexible-record fact to select Clang's
memory convention. The PA38 mixed-object test passes a flexible record to
the host and calls back with a union containing the record. Cross-linked
x86-64 Mach-O code ran at `-O0` and `-O2` in a freestanding image mapped
on Linux. The same execution route passed an over-aligned flexible record
return and variadic arguments in both compiler directions. The Intel macOS
job also selects the PA38 fixture for native execution. The same fixture
passed using the GCC provider on Linux x86-64 and the Clang provider on
Linux AArch64 under QEMU in all six edition and optimization combinations.
[PA38 mixed-object test](../pa38/tests/abi/300-flexible-array-boundary.t) ·
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#intel-darwin-flexible-record-abi) ·
[GCC x86 classification](https://github.com/gcc-mirror/gcc/blob/releases/gcc-15.1.0/gcc/config/i386/i386.cc#L2119-L2137) ·
[Clang x86 classification](https://github.com/llvm/llvm-project/blob/llvmorg-21.1.8/clang/lib/CodeGen/Targets/X86.cpp#L1885-L1889)

### Unnamed bit-field layout and calls

Linux AAPCS64 includes the container of an unnamed bit-field in the
aggregate alignment. cppgm, GCC 14 and Clang 22 report size 8 and
alignment 4 for `struct { unsigned char a:3; unsigned :0; unsigned char b:5; }`
on Linux AArch64, including under GNU packed and `#pragma pack(1)`.
Darwin Arm64 gives the structure size 5 and alignment 1, as Clang does.
[AAPCS64 bit-field rules](https://github.com/ARM-software/abi-aa/blob/main/aapcs64/aapcs64.rst#bit-fields)

A nonzero unnamed integer field takes part in Arm aggregate
classification. `union { float f; unsigned :1; }` crosses the call
boundary in integer registers. The PA38 test compares sizes and
alignments with a separately compiled provider, calls across that
boundary and calls back with the same union. The test also checks a
floating structure with a zero-width field. C11 and C17 pass at `-O0`
and `-O2` with GCC 14 and Clang 22 on Linux AArch64 under QEMU. The
same Clang checks pass for independently linked Arm64 Mach-O under the
SDK-free replay. PA38 also runs this fixture in the native Arm workflows.
PA39 exercises the layout and union calling convention in C++ on both
Arm targets. [PA38 mixed-object test](../pa38/tests/abi/300-unnamed-bit-field-boundary.t) ·
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#arm-unnamed-bit-field-abi)

For `union { float f; unsigned :0; }`, Clang 22 and cppgm use
floating-point registers. GCC 14 on AArch64 Linux uses integer registers.
Direct mixed GCC and Clang executables fail in both directions at `-O0`
and `-O2`. Both compilers use floating-point registers for the equivalent
structure. The Wasm reference uses its single-field convention for the
union with either width.
[GCC record and union classification](https://github.com/gcc-mirror/gcc/blob/releases/gcc-14.3.0/gcc/config/aarch64/aarch64.cc#L20309-L20369)

### GNU alignment and packed bit-field storage

The parser retains GNU `aligned` on the existing declarator, including
after the width. An attributed unnamed field uses an abstract declarator.
Analysis resolves the attribute once and records the member's alignment
and packing for layout. The PA38 tests include the standard `_Alignas`
diagnostic and reject GNU `aligned` between a field name and its colon.
The PA30 template fixture supplies the alignment at instantiation.

For a named field with `aligned(8)` between two single-byte members,
the record has size 16 and alignment 8, and the following byte starts
at offset 9. An unnamed zero-width field with the same request moves the
following byte to offset 8. Its record has alignment 8 on Linux AArch64
and alignment 1 on the other profiles. For a three-bit field whose
explicit alignment is greater than `#pragma pack`, GCC caps the
position alignment and Clang discards the explicit request for the
position. cppgm follows GCC on Linux and Clang on Darwin and Wasm.

Packed union alternatives use a separate bounded bit-field run when
their payload is narrower than the underlying type. The one-byte and
three-byte static objects carry symbol sizes 1 and 3. The PA30 fixture
places the three-byte union immediately before a protected page and
checks a read and write through the field. The earlier four-byte
access faults in that probe. This checks the byte bound independently
of the compiler's choice of narrower operations.

The PA38 runtime fixture passed all 36 combinations of profile,
GNU99/GNU11/GNU17 and `-O0`/`-O2`. GCC 15 on Linux x86-64, GCC 14 on
Linux AArch64 and Clang 22 on the remaining profiles passed the same
matrix. Linux AArch64 ran under QEMU, both Wasm profiles under Wasmtime,
and both Darwin profiles through SDK-free Mach-O replay.
[PA38 runtime fixture](../pa38/tests/general/500-c-gnu-aligned-bit-fields.t) ·
[PA30 guard-page fixture](../pa30/tests/run/800-gnu-aligned-bit-field-run.t.1) ·
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#gnu-aligned-and-packed-bit-fields)

Comma-separated declarations may combine ordinary fields and bit-fields.
The PA38 runtime case covers both orders, a zero-width separator and a list
that defines the enum used by its members. GCC 15, Clang 22 and cppgm
passed it in strict C99, C11 and C17. The negative cases exercise function
members and pointer bit-fields in mixed lists. PA11 covers an ordinary
member function alongside bit-fields, and PA14 covers instantiation of its
out-of-class definition with a dependent field width. A separate PA38
case checks that width expressions still see an enclosing typedef or
enumerator with the same spelling as a member.
[PA38 member name space](../pa38/tests/general/300-c-member-name-space.t) ·
[PA38 mixed declarators](../pa38/tests/general/300-c-mixed-member-declarators.t) ·
[PA11 shared declarations](../pa11/tests/general/400-mixed-member-declarators.t) ·
[PA14 template declarations](../pa14/tests/general/300-mixed-template-member-declarators.t)

Both C fixtures passed at `-O0` and `-O2` in C99, C11 and C17 with
cppgm and the target controls. The runs used GCC 15 on Linux x86-64, GCC
14 on Linux AArch64 under QEMU, and Clang 22 on the two Mach-O and two
Wasm profiles. Mach-O execution used the SDK-free replay. Bare Wasm and
WASI ran in Wasmtime. The two negative fixtures produced their expected
diagnostics on each target. The pinned c-testsuite run passed all 876
selected configurations. The GCC torture sample matched 111 of 128
configurations, with the same 17 reviewed gaps.
[Compile-work measurements](../docs/performance/c-frontend-scaling.md#mixed-record-member-declarations)

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
