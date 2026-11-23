# Full C coverage plan

Complete C99, C11, and C17 first, then add C90/C95 and C23. For each
edition and target, collect evidence for every applicable mandatory rule,
including required diagnostics, translation limits, object interoperability,
and execution. A hosted claim applies to a tested compiler, SDK, and runtime
pairing. The matrix also records freestanding profiles, conditional features,
implementation-defined choices, and the macros that advertise them. GNU C
compatibility has its own results and release criteria.

The pre-campaign baseline is `v0.10.3` (`7bc2ee420`). The C branch now has
C99, C11, and C17 modes with ISO and GNU variants, PA38 tests on native and
Wasm, and pinned upstream jobs. Keep the upstream campaign in maintainer CI.
Teach C-specific behavior in PA38 and use the earliest owning assignment for
changes to shared behavior. Preserve the existing default language and edition.

[PA38 handout](../pa38/README.md) · [CI test jobs](../.github/workflows/tests.yml) ·
[WG14 editions and defect reports](https://www.open-std.org/jtc1/sc22/wg14/www/projects.html)

Track evidence as each milestone lands in the
[C conformance inventory](../reports/upstream-c-coverage.md) and the
[C frontend scaling report](performance/c-frontend-scaling.md).

The initial release matrix covers x86-64 and AArch64 Linux, Intel macOS
and Apple Silicon, bare Wasm, and WASI. Record results for each edition,
target ABI, and environment. Use the clause inventory for implementation
status and the matrix for qualification status. A cross-linked Mach-O
object establishes link evidence. A native run establishes execution
evidence for the tested SDK and runtime.

## Implementation order

| Milestone | Next work | Evidence required to close it |
| --- | --- | --- |
| Baseline and CI | Start with the existing GCC, Clang, `c-testsuite`, GCC torture, and Csmith lanes. Expand by uncovered rule, beginning with lexical edition boundaries and translation limits. | Frozen inputs, native controls, and a recorded disposition for the selected, excluded, and failing cases. |
| C99, C11, C17 core | Reuse the existing VLA, generic selection, and sparse initializer probes. Extend clause coverage for conversions, subobject effects, cross-unit linkage, and extended alignment. | Clause-level acceptance, diagnostics, and execution evidence in the applicable editions. Earlier-edition and GNU controls where the rule changes. |
| Target and library qualification | Verify the target predefines consumed by C headers. Qualify optional C11 features and compiler helpers, then run the hosted and freestanding matrices. | Mixed-compiler objects, target execution, feature macro checks, and runtime results for each published environment. |
| C90 and C95 | Reuse the same rules for legacy forms and the amendment. | Legacy positives and edition-boundary diagnostics, with the amendment's macros, characters, and library obligations exercised. |
| C23 | Land preprocessing, then type and declaration changes, then execution and library integration. | Individual C23 rules and their earlier-mode controls, target ABI and runtime evidence, and scaling checks for each substantial new path. |

Prepare the legacy and C23 inventories while C99 through C17 qualification
is in progress. Expand the release matrix after the relevant mode and its
preceding mode's controls pass. Keep fixes to shared translation and ABI
behavior independent of the edition work that exposed them.

Start the next batches from the existing receipts.

1. Extend the C99–C17 clause inventory from the existing trigraph,
   digraph, universal-character, macro redefinition, physical-line,
   and preprocessing-number evidence. Include header names and phase
   ordering at include boundaries, then cover declarators, initializers,
   conversions, constant expressions, and linkage. Pair edition boundaries
   with native reference runs and earliest-assignment regressions.
2. Run the existing translation-limit, mixed-object, and header probes on
   native Intel macOS and Apple Silicon. Expand the C99 header and musl
   replays to the mandatory C11 and C17 interfaces for each applicable SDK.
   Qualify capability macros against their operations and runtime helpers.
   Run the same probes in the corresponding freestanding profiles where
   applicable.
3. Advance GNU compatibility alongside the ISO inventory. Extend initializer
   coverage to overlaps across more than two array dimensions and paths
   with additional ranges interleaved with record members. Cover automatic
   ranges of aggregates with qualified subobjects. PA38 already exercises
   nested record members, fixed array indices, union member switches,
   static patches to large records, and two-dimensional overlaps of whole
   cells. Keep each of these cases tied to its GNU-mode behavioral control.
   Qualify the GNU trigraph default and explicit opt-in. Review
   space-separated line splices and their warning policy as a GNU extension.
   [Initializer evidence](../reports/upstream-c-coverage.md#gnu-range-designators-and-empty-records)

[Pinned suite receipts](../reports/upstream-c-coverage.md#pinned-suite-receipts) ·
[Initial hosted replays](../reports/upstream-c-coverage.md#initial-hosted-replays)

Linux glibc and WASI pass the initial hosted C99 math probes through
their default header paths. Extend those results to the outstanding
macOS SDK and library cases. Keep the nested macro scaling work in the
preprocessing batch. Expand the header probes to the translation and
runtime checks for C11 library features and the outstanding target ABI
cases. Keep clause inventory work moving alongside these replays so
uncovered requirements and library build failures guide the next batch.

## 1. Freeze the baseline and put a small suite in CI

Create a clause inventory covering lexical translation, preprocessing, types
and compatibility, expressions and constant evaluation, declarations and
initializers, statements and lifetime, and translation-unit linkage. Include
required limits and environment obligations. Record the rule, edition and
applicable defect resolutions, target requirements, the external and course
tests that exercise it, and its status. Track required behavior, optional
features, GNU extensions, and library availability in distinct fields. Use
WG14's drafts and defect resolutions to decide disputes between compilers.
Keep the relevant references and clause notes under `doc/` as gaps are fixed.

[C99 draft with corrigenda](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[C11 draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[C11 and C17 clarification requests](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2396.htm) ·
[Published C23 edition](https://www.iso.org/standard/82075.html) ·
[C23 DIS draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3219.pdf) ·
[WG14 issue index](https://open-std.org/JTC1/SC22/WG14/issues/)

Use one inventory entry per independently testable rule or requirement.
Record the expected oracle as well as the observed outcome. Where a rule
allows multiple outcomes, state the set or invariant the test checks.
Keep target and edition applicability on the entry and link results for
each applicable configuration. A suite pass count measures compatibility
with that suite. Coverage grows as individual rules gain evidence, with
uncovered requirements and unqualified targets visible in the same matrix.
The combined C99–C17 translation-limits program runs in the C CI job on
x86-64 Linux and WASI. Record the remaining native macOS executions in the
[translation-limits inventory](../reports/upstream-c-coverage.md#combined-translation-limits).

Use stable rule IDs in the inventory and the CI manifests so one test can
provide evidence for several requirements across editions or targets.
Validate the inventory for duplicate IDs and missing evidence links. Report
applicable requirements as uncovered, failing, or passing, and give a reason
for inapplicability. For implementation-defined behavior, check the documented
choice against the target ABI. For a constraint, check the diagnostic
requested by the rule. Record the policy for open WG14 issues by edition.
Derive missing cases from the clauses themselves, including combined
translation limits where required and cases that differ only in scope,
linkage, or mode. Publish the uncovered entries even when a manifest is green.

Use the existing inventory and manifests as the inputs for the matrix. Each
row records an edition and clause or resolved issue, applicability, the
observable requirement, and one or more test identifiers. Each result records
the target, hosted or freestanding profile, action, and observed outcome.
Join the two by test identifier so changing an oracle or replaying a target
updates its evidence without duplicating the requirement. Use the published
edition to resolve discrepancies between drafts and compiler behavior.

| Source | Initial selection |
| --- | --- |
| GCC `gcc.dg` | Expand the existing C99/C11/C17 feature and diagnostic manifests. Include `cpp` for preprocessing, `noncompile` for invalid-input handling, `compat` for mixed objects, and later the C23 cases named `c23-*` or `c2x-*` at the pinned revision. Use the GCC feature inventory to find cases outside the edition prefixes. [GCC C suites](https://gcc.gnu.org/onlinedocs/gccint/C-Tests.html) · [GCC feature inventory](https://gcc.gnu.org/projects/c-status.html) |
| Clang `clang/test/C` | Expand `C99`, `C11`, and `drs`, then add `C23`. Add selected C inputs from `Sema`, `Preprocessor`, and `CodeGen` where an observable outcome can be checked. [Pinned Clang test tree](https://github.com/llvm/llvm-project/tree/llvmorg-21.1.8/clang/test/C) · [Clang feature inventory](https://clang.llvm.org/c_status.html) |
| `c-testsuite` | All 220 programs at revision `5c7275656d751de0e68b2d340a95b5681858ed07`. Check exit status and combined output, with an explicit disposition for GNU-only or target-specific cases. [Pinned suite](https://github.com/c-testsuite/c-testsuite/tree/5c7275656d751de0e68b2d340a95b5681858ed07) |
| GCC torture and Csmith | Run `gcc.c-torture/execute` at `-O0` and `-O2`. Expand optimization levels as the baseline stabilizes. Add pinned Csmith seeds and compare output with GCC and Clang on the same ABI. Retain and reduce mismatches. [GCC C suites](https://gcc.gnu.org/onlinedocs/gccint/C-Tests.html) · [Csmith](https://github.com/csmith-project/csmith) |
| LLVM `test-suite` | Add C single-source regressions and multi-source execution cases with checked output. Deduplicate the bundled GCC torture cases against the pinned GCC corpus. Exercise these in the scheduled runtime campaign. [LLVM test-suite guide](https://llvm.org/docs/TestSuiteGuide.html) |
| WG14 defect resolutions | Turn examples into focused cases for uncovered clauses and edition differences. Use the published rule and its applicable resolution as the oracle when GCC and Clang disagree. Write small original tests for requirements without suitable upstream inputs. [WG14 issue index](https://open-std.org/JTC1/SC22/WG14/issues/) |

Use the GCC and LLVM revisions already pinned in the upstream workflow. The
shared manifest runner already accepts C editions and explicit preprocessing,
syntax, object, link, and execution actions. Reuse those actions and extend
them where cases need multiple objects or a new oracle. Preserve the meaning
of existing C++ manifests. Reuse DejaGnu and lit metadata extraction.
Review projections that drop GCC dump or LLVM IR checks and record the omitted
obligation. Do not turn a dump-only case into conformance evidence based
solely on successful compilation. Freeze test files and support inputs by
hash and record the edition, target, optimizer flags, headers, linker,
libraries, compiler versions, commands, and raw outcomes.

Keep the source-to-rule mapping independent of an individual run. Start a
versioned coverage table with the C99 through C17 translation limits and
edition probes, using them to validate the evidence join before migrating
the larger inventory. Have the report reject missing or duplicate rule
identifiers, stale case identifiers, and passing rows without a matching
edition and target receipt. Keep uncovered mandatory rules visible even
when all checked cases pass. Use the same structure for C90, C95, and C23
and add the C fixtures and maintainer corpus without duplicating the rules.

Run the same applicable cases with cppgm and the pinned native compiler.
Qualify inferred ISO modes with the native compiler in pedantic mode and check
the corresponding GNU or later-edition acceptance case. Distinguish a required
diagnostic from a required rejection. Record unexpected acceptance, wrong
output, link failures, abnormal termination and timeouts independently.
Preserve the reason for every exclusion or known failure. A known cppgm gap
stays visible in the report until it passes. A known failure records the
expected failure stage and symptom. An improvement, changed symptom, or new
failure requires review. Keep undefined inputs, native disagreements, and
inapplicable target cases out of differential pass denominators, with their
original provenance and disposition retained.

Add deterministic generators for interactions that isolated upstream tests
exercise only sparsely. Start with initializer overlap and brace boundaries,
redeclaration order and scope, and VLA evaluation and exit paths. Give each
generator a small independent oracle for values, evaluation counts, or
diagnostic requirements. Use GCC and Clang as additional controls where they
implement the case. Record the seed, edition, and flags for every failure
and land the reduction in its owning assignment.

Keep the reviewed GCC/Clang set and `c-testsuite` after the existing Linux
build, using its compiler artifact. For PRs, run a pinned edition and clause
slice plus existing PA38 checks and portable controls in the affected target
jobs. Expand scheduled and dispatched jobs to deterministic shards of the
applicable torture and regression corpus, with reproducible Csmith seed ranges
and bounded generation profiles. Cache pinned source and tool setup, bound
worker counts by the job's CPU and memory, and publish failures and timeouts
per shard. Use scheduled or release qualification for the larger hosted
projects and optimization matrix. Reuse the compiler artifacts and target
tools already prepared by each lane.

[Existing manifest runner](../scripts/run_cxx11_ci_suite.py) ·
[C++ upstream CI workflow](../.github/workflows/upstream-cxx11.yml) ·
[GCC directives](https://gcc.gnu.org/onlinedocs/gccint/Directives.html) ·
[LLVM testing guide](https://llvm.org/docs/TestingGuide.html)

## 2. Close the C99, C11, and C17 gaps

The first `c-testsuite` run on Linux x86-64 used the released cppgm binary
and a common GCC 15 C link step with `-lm`. GCC 15 and Clang 22 passed 220/220
at `-O0` and `-O2` in both `c17` and `gnu17`. cppgm passed 210/220 at `-O0`
and 209/220 at `-O2` in both modes. These are suite compatibility counts.
Some inputs tagged as portable use GNU extensions.

The branch has regressions for the optimizer crash, macro stack mismatch,
and C-only VLA link found in the pilot. Continue from the remaining cases
in the pinned `c-testsuite` manifest and the larger clause inventory. Fix
shared defects in the layer that owns them and rerun unrelated language
controls that use it.
[Pinned pilot cases](https://github.com/c-testsuite/c-testsuite/tree/5c7275656d751de0e68b2d340a95b5681858ed07/tests/single-exec) ·
[Current known gaps](../reports/upstream-c-testsuite-known-gaps.json)

1. **Unify mode setup.** Resolve input language, edition, GNU mode, diagnostic
   policy and target environment before the first token. Reuse the existing
   language selection and `.c` driver behavior. Verify predefined macros and
   feature probes in every mode, including
   `__STDC_VERSION__`, `__STDC_HOSTED__`, and conditional-feature macros.
   At each changed rule, pair acceptance in its defining edition with the
   earlier-mode diagnostic when required. Exercise interfaces where mode state
   can diverge, including preprocessing, syntax checks, LowIR emission and
   object emission.
2. **Complete declarators, initializers, and compatibility.** Cover
   multidimensional VLAs, variably modified typedefs, pointer types and
   parameters, prototype-scope `[*]`, alignment, and scope exits. Cover
   nested designators and positional continuation, overwritten initializers,
   union members, and flexible array members. Audit qualifiers, tags and
   scopes, composite types across redeclarations, default promotions and
   identifier-list functions, C inline definitions and tentative definitions
   across translation units. Exercise C lvalue rules, `_Generic` conversions
   and unevaluated branches, integer and address constant expressions,
   bit-fields, `restrict`, aliasing, and volatile effects at both optimization
   levels. Check `_Atomic`, thread-local objects, and complex arithmetic
   through the target ABI and the corresponding hosted interfaces where
   supported. Qualify their feature macros with the underlying operations and
   link-time helpers, including atomic ordering and lock-free reporting where
   applicable. Exercise aliasing and side effects under optimization with
   inputs that stay within the language rules.
3. **Qualify hosted extensions.** Find the general language or header behavior
   behind each failure. Use the existing system-header provenance and
   diagnostic policy, including `-isystem`, `#pragma GCC system_header` and
   `-Wsystem-headers`. Compare the same source through an ordinary header and
   a system header. Gate GNU spellings where they are recognized. Cover the
   builtin and attribute semantics the libraries require. Maintain a reviewed
   GNU extension inventory for hosted workloads, starting with the enum,
   attribute, statement-expression and range-designator cases exposed by the
   pilot. Resolve aliases, weak references or startup attributes through the
   existing object and linker contracts. Keep header names and project
   identities out of semantic decisions.

Qualify variably modified types as one batch. Separate whether a type is
variably modified from whether an object has a runtime size. Keep bound
expressions and their evaluation points with the declaration or type-name
that owns them. Derive byte strides in one pass after evaluating the
required bounds and reuse those values for `sizeof`, indexing and pointer
arithmetic. An alias reuses the extents captured at its declaration. Add
side-effecting bound tests for evaluation count, parameter adjustment, and
cleanup across loop iterations and scope exits. Include a case where the
standard permits either evaluation outcome. Keep the written bounds for
definition parameters through pointer adjustment. A size expression in the
outermost bracket can have an effect on function entry even though it
contributes no stride. Include object declarations, `sizeof` and `_Alignof`,
casts, compound literals, and `typeof` in their applicable dialects. Preserve
the distinction between diagnosing an unevaluated operand and demanding its
runtime work. Test both evaluated and elided bounds and the lifetime of
captured extents under repeated execution.

Before changing `__STDC_NO_VLA__`, run the same clause cases for
declarations, type-names and parameters with the driver, at `-O0` and
`-O2`, on every advertised target. Include native mixed-compiler calls
where parameter adjustment crosses an ABI boundary and check storage
cleanup on each exit edge. Audit standard diagnostics independently from
GNU VLA extensions. Include the PA38 prototype-scope `[*]` cases and their
definition-site diagnostics, and the cases for atomic and function-pointer
types with runtime bounds. Test compatible fixed and runtime bounds with
defined inputs. Include the file-scope anonymous type-name cases for
alignment, fixed-size `sizeof`, and GNU type compatibility.
Keep the current declaration's written bounds for evaluation and
its adjusted type for compatibility. Later, apply the distinct C23 rule
for variably modified types and automatic-storage VLA objects. Emit each
optional feature macro from the resolved edition and target configuration before
preprocessing starts, and exercise that configuration through object
emission and runtime before changing what it advertises.

The restrict qualifier is retained on the canonical type that owns it.
GCC's `c99-arraydecl-3` and PA38 exercise pointer conversions, typedefs,
array parameter adjustment and function compatibility. The tests distinguish
the C23 array-typedef rule from its extension behavior in earlier editions.
Keep these cases in the VLA qualification run and include qualified pointer
types in the C23 array-compatibility audit.

Audit `_Generic` compatibility before optimizing duplicate checks. Two
distinct pointers to complete array types can both be compatible with a
controlling pointer to an incomplete array. Diagnose multiple matches.
For association validation, index canonical identities where identity is
sufficient and use a compatible-type index or targeted comparisons for
cases such as enums, incomplete nested arrays, and unprototyped function
pointers. Measure a long list of distinct association types and check that
ordinary short lists keep their existing cost.

For aggregate initialization, resolve the current object and each designator
against typed layout once. Preserve the positional continuation and which
initializers supply the final values. Retain source locations for required
diagnostics. Use sparse paths or ranges when one source entry covers many
subobjects. Check nested continuation, overlapping writes, aggregate and
string initialization, flexible-array constraints, and required zero fill.
Measure analysis and emission separately so a large array's data does not
hide repeated traversal of the input initializers.

For GNU range designators, retain the written endpoints and suffix paths.
Build a sparse initializer plan that resolves overlaps without enumerating
every represented element in semantic analysis. Keep source entries and
their value evaluation distinct from the covered intervals so a surviving
range expression evaluates once. Test nested suffixes, later overwrites,
positional continuation, complete and inferred bounds, and static and
automatic storage. Vary the number of written entries, range width, and
overlap independently. Account for required data emission separately from
semantic work.
For scalar writes in one array, use an interval index or an endpoint
sweep with work proportional to written endpoints and surviving spans.
Sorting by the first index and tracking the latest active write in a
heap can find the winning spans. The heap drops expired writes when
they reach the top. A prototype matched an element-by-element oracle
on 10,000 generated overlap cases. Its 8,192-write case produced the
same 16,383 spans when the represented extent grew from 16,384 to
16.384 trillion elements. Retired instruction counts stayed within
0.01% in that pair.
The same sweep resolves overlaps when all competing writes cover the
same typed suffix or the winning write replaces the whole element.
Memoize suffix identities on the resolved paths and check competing
endpoints across the full winning interval.

Direct-member overlaps group writes by the resolved member. Each group
finds its own winning spans and clips them against a shared index of the
earliest and latest whole-record reset within each interval. The index
skips boundaries whose ordering is uniform. Automatic storage lowers
each surviving value once and uses a strided loop for the ranges that
consume it. When the base has no nonzero data, omit endpoint events
for zero writes.
Static record expressions provide sparse, offset-ordered data once
per source value. Apply member replacements and bit masks to those data
before repeating the published row. Keep pointer relocations typed and
evaluate a source record through the constant interpreter only when
its layout requires that fallback. Include a wide sparse record and a
dense repeated record when measuring this path.
For nested record and fixed-index paths, share the preceding
whole-object reset index between children. Each child path overlays
its own resets onto a version of the index along the changed intervals.
Resolve each path's writes against that version and lower ancestors
before descendants. For static data with both an ancestor and a
descendant write, apply the rectangle sweep to the occupied bits of
their typed layouts. Preserve intact scalar and relocation items.
Extend the scaling cases to independently vary the number of written
paths, their depth, and the resulting fragments.

For two array dimensions, sweep written row endpoints. Index active
column intervals by source rank and compare the old and new winners
along affected tree paths. Keep unchanged winners open across row
events. Whole-row replacements mask lower-ranked cells across their
row interval. Keep one retained value per source and use bounded
automatic loops or the existing static data writer for its disjoint
rectangles. Test independently changing columns so repeated full
scans of the active intervals show up in the scaling results.
[GCC range designators](https://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html)

For constant expressions, distinguish eligibility for the required C
context from the ability to fold a value. Start with static assertions,
case labels, enumerators, bit-fields, array bounds, and designator indices.
Then cover null pointer constants and static arithmetic and address
initializers. Check operand eligibility even when a short-circuit or
conditional expression skips evaluation, including the specific exception
for operators in unevaluated subexpressions. Use typed expression facts and
the existing evaluator. Carry required eligibility and value information
through the relevant semantic query so that VLA classification and lowering
can use the result directly. Preserve ordinary folding for expressions in
runtime contexts. Measure short constant expressions and long expression
chains independently.
[Constant-expression evidence and WG14 decisions](../reports/upstream-c-coverage.md#constant-expressions)

[Driver mode setup](../dev/src/driver/toolchain.cpp) ·
[C function parsing](../dev/src/syntax/parser_c_functions.cpp) ·
[GCC system-header behavior](https://gcc.gnu.org/onlinedocs/cpp/System-Headers.html)

## 3. Qualify the hosted and freestanding targets

- The driver resolves explicit `-ffreestanding` and `-fhosted` before
  preprocessing. Bare Wasm is freestanding, while native and WASI profiles
  default to hosted. Tests exercise the macros, hosted `main`, ordinary
  freestanding calls, explicit builtins, and custom startup. Track the
  compiler-generated helper contract separately for each supported ABI.
  Keep header search and link options independent of the language mode.
  [Environment qualification](../reports/upstream-c-coverage.md#execution-environment-selection)
- Derive target-dependent predefined macros from the resolved target data
  model and compiler capabilities when building the initial macro table.
  Check the type spellings, widths, limits, and literal suffixes consumed by
  real `<stdint.h>`, `<limits.h>`, and `<stdatomic.h>` headers. Exercise
  native defaults and explicit cross targets without manually supplying
  predefines. Include targets where two integer types have the same width
  but different ABI roles. Measure the fixed cost of constructing the
  initial macro table separately from work that grows with source size.
- On Linux x86-64 and AArch64, validate ELF objects against the pinned native
  toolchains and glibc. Add a musl header and runtime replay to expose
  assumptions coupled to one libc. On Intel macOS and Apple Silicon, validate
  Mach-O against Clang and the pinned SDK. On Wasm, exercise the bare target
  with freestanding inputs and WASI with the pinned SDK and Wasmtime. Record
  the SDK and runtime's availability for each hosted feature and edition.
- Track translation, object inspection, link and execution separately for
  every environment. Use QEMU user mode for fast AArch64 Linux correctness
  replays and native AArch64 for release ABI and performance measurements.
  Use native Intel macOS and Apple Silicon jobs for the Mach-O link and
  execution checks. Run bare Wasm with explicit imports and startup as needed,
  and WASI tests with the pinned sysroot and startup files. Exercise the
  freestanding header set, `__STDC_HOSTED__`, startup contract and required
  helper symbols against the advertised edition. Record availability of
  hosted headers independently from language support.
- Qualify `<tgmath.h>` through each SDK's default header search. For glibc,
  implement `__builtin_tgmath` using the canonical candidate signatures and
  the typed call arguments. Determine fixed and varying positions in one
  pass over the signatures, check their permitted type relationships, and
  use an index by canonical type for candidate selection and duplicate checks.
  Keep the selected callee and its conversions on the call. Exercise both
  real and complex families, integer promotion, and fixed results. Verify
  that `sizeof` leaves both candidate and argument expressions unevaluated.
  At runtime, evaluate only the selected candidate expression and each call
  argument once. Exercise the `__builtin_classify_type` fallback selected by
  glibc with the cross AArch64 Linux configuration's GNU compatibility macros.
  Check that type-name queries preserve the original type, expression queries
  apply the target's argument adjustments, and a single C operand has no
  runtime effects. Include C99 complex-to-real conversions in the fallback
  replay. Measure the direct conversion and type-query paths independently
  of macro expansion.
  For the Clang resource header used by WASI, retain `overloadable` on
  function declarations and reuse the existing overload and ABI machinery.
  Keep ordinary C declaration and call paths direct. Qualify prototype and
  redeclaration rules, the unmarked overload's C symbol, and Clang-compatible
  names for marked declarations. Exercise the header's unavailable ellipsis
  fallback and its unevaluated promotion queries. Check nested calls with
  one argument-level increase at a time to catch repeated work.
  Keep comparing the same token stream with and without wrapper macros.
  Reuse expanded inert ranges across enclosing replacements while preserving
  rescanning at token boundaries, macro disablement, and argument provenance.
  The nested type-generic math workload now scales linearly. Retain tests for
  active names between reusable ranges and for changes to macro bindings.
  Verify the ordinary and variadic preprocessor suites, including `#`, `##`,
  `__VA_OPT__`, and expansions that span a replacement boundary.
  Use emitted token count as well as source size in the scaling analysis.
  Compare replacement-frame visits, rescans, and token copies per produced
  token on nested single-use arguments and on macros that legitimately
  duplicate output.
  [GCC built-ins](https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html) ·
  [Clang `overloadable`](https://clang.llvm.org/docs/AttributeReference.html#overloadable)
- Compile both sides of each native ABI test in both directions (cppgm caller
  and native callee, then native caller and cppgm callee). Cover aggregate
  arguments and returns, variadics, bit-fields, long double, complex types,
  TLS and atomics. Test symbol properties, initialized data and cross-unit
  compatible types. Validate C and C++ `extern "C"` interoperability. Run
  hosted C with the normal driver and with a C link driver where applicable.
  Validate language-required runtime helpers separately from libc.
- Run selected libc-test cases with cppgm-compiled translation units and the
  same pinned runtime used by the native control. Use the difference to
  distinguish header compilation, compiler ABI and runtime failures. Build and
  run **zlib**, **Lua**, and **SQLite** with cppgm compiling the C sources.
  Start with zlib's checks, Lua's version-matched basic suite, and SQLite's
  amalgamation with a reproducible SQL smoke workload. Expand to upstream
  runtime subsets after both compilers pass the same configuration. Record
  toolchain settings, project versions, test counts, and disabled components.
- Build a per-edition header and library checklist from the standard. Test
  the required headers in isolation and in combination, including repeated
  inclusion where permitted. Exercise mandatory macros, types and function
  declarations at translation time, then check symbols and behavior with
  programs linked against the selected runtime. Include the permitted
  macro/function forms, calls through function pointers, and interfaces that
  use compiler-specific operations such as variadics and atomics. Record
  the standard's required versus conditional interfaces for each environment
  before using an SDK result to qualify the compiler and runtime together.
- Qualify C11 atomics, threads, complex arithmetic, and VLAs separately.
  For atomics, cover ordinary lvalue conversions and assignment, valid
  and invalid explicit memory orders, both outcomes of compare-exchange,
  supported lock-free sizes and alignments, and the runtime helper path
  for wider objects. Exercise each supported header's builtin interface
  with ordinary value buffers and padded atomic storage. Compare lock-free
  queries with emitted objects and test concurrency with defined C programs on
  native targets. Pair the threads API with TLS initialization and
  lifetime checks. Use the platform ABI for complex arguments and returns,
  including supported floating formats. Record optional floating-point
  and library annex support with the applicable standard macros and
  target runtime requirements.

[musl libc-test](https://wiki.musl-libc.org/libc-test.html) ·
[zlib](https://zlib.net/) · [Lua tests](https://www.lua.org/tests/) ·
[SQLite testing](https://sqlite.org/testing.html)

## 4. Extend coverage to legacy C and C23

- **C90 and C95.** Add the legacy modes and baseline them with GCC's C90
  tests and Clang defect cases. Cover the former default-int and implicit
  function declaration rules with paired C99 diagnostics. Check old-style
  definitions, declaration placement, comment and preprocessing rules,
  the C95 additions, and the advertised library/header profile. Include
  the applicable language and driver aliases in the mode matrix, including
  `c90`, `c89` and `iso9899:199409`. Test amendment digraphs and
  `__STDC_VERSION__` separately from its library additions.
  Parameterize the translation-limits generator by edition and verify each
  combined program against the applicable limits and execution environment.
  Reuse the declaration parser and store any legacy default type or promotion
  on the declaration or call that requires it. Use those facts for later
  compatibility and ABI checks. Exercise a long chain of legacy
  redeclarations as well as many distinct implicit function calls.
  [GCC edition options](https://gcc.gnu.org/onlinedocs/gcc/Standards.html)
- **C23.** Inventory every mandatory change against the published edition
  and applicable resolutions. Batch the preprocessing and literal changes
  first (`#embed`, feature probes, new directives, trigraph removal, digit
  separators, Unicode changes), then declaration and type semantics (`typeof`,
  `typeof_unqual`, `nullptr`, `_BitInt`, fixed underlying enum types, attributes,
  `auto` inference and `constexpr` objects), followed by initializer, statement
  and execution behavior. Cover empty initialization, compound literals with
  storage classes, and labels before declarations and at block ends. Pair
  older-mode acceptance of K&R definitions and non-prototype calls with the
  C23 rules for those forms. Qualify `_BitInt` across constant evaluation,
  promotions and conversions, storage, calls and the target ABI. Use the
  typed integer and ABI paths and cover widths around representation and
  calling convention boundaries.
  Recheck conditional-feature rules, including the C23 distinction between
  mandatory variably modified types and conditional automatic-storage VLA
  objects. Verify C23 header and library additions against each hosted
  runtime before making a hosted C23 claim for that configuration. Include
  checked arithmetic, bit utilities, updated variadics and header version
  macros. Test `#embed` cost against produced tokens and check that a small
  `limit` keeps work bounded even for a large resource.
  Recheck combined translation limits with the C23 rule set, and document
  target-specific limits, encodings, and ABI choices alongside the results.
  Record the resolution status of each WG14 issue used as a C23 oracle
  and identify any adopted changes that belong to later editions.
  [WG14 variably modified types](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2778.pdf)

[WG14 edition index](https://www.open-std.org/jtc1/sc22/wg14/www/projects.html) ·
[Clang C feature inventory](https://clang.llvm.org/c_status.html)

## Architecture and compile-time performance gates

Apply [`spec.md`](../spec.md) to every batch. Use one pull-based preprocessing
stream and one syntax tree per translation unit. Store compact, typed facts at
their owner and pass them directly to the existing LowIR and target pipelines.
Put common facts on their node or in dense arrays and reserve side tables for
sparse facts. Allocate frontend records from the translation-unit arena and
reclaim scratch in bulk. Schedule deferred work by entity or scope event.
Keep source-language and target choices independent. Use cppgm for source
through direct object emission. External compilers serve as test references,
build tools, and link drivers for already emitted objects. Per-section review
should identify the phase and owner of each new fact, its last consumer, and
which operations are proportional to tokens, demanded work, or output.

| Path | Review and measurement |
| --- | --- |
| Mode selection and preprocessing | Decode options once. Use compact edition or feature values at the construct that needs them. Put extra work on the relevant token or construct paths so ordinary input retains the existing fast path. Use shared tokenization and macro machinery with bounded lookahead. For macro push/pop, index by interned name and save only the affected binding. |
| C23 resource preprocessing | Resolve `#embed` in the preprocessor and feed its tokens through the existing stream. Account separately for resource lookup, bytes read, and tokens produced. Increase total resource size at a fixed small `limit`, then increase the limit on a fixed resource. The first run should keep the input bytes read, memory, and token work bounded. Test `__has_embed` independently because it produces a status even for large resources. |
| Types, scopes, and linkage | Keep interned identities and direct scope/name indexes. Fast-path equal canonical types. Keep lexical composite types on declarations and cross-scope compatibility facts on the linked entity where needed. Lower calls from their recorded conversions and resolve the symbol through the linked entity. Index redeclaration and tentative-definition work by entity. If a memo is useful, document its typed key, lifetime and dependence on completion state. Measure work as the number of declarations per entity and the number of independently linked names grow. |
| Array bounds, generic selection, and initializers | Keep evaluated VLA extents in compact declaration- or use-owned records with the required evaluation and lifetime. Lowering reads retained extents and conversions. Check each required generic association once, retain the selected expression and evaluate only that arm at runtime. Resolve initializer paths once. Keep sparse designators and zero fill compact until emission. Count bound visits, designator steps and subobjects to catch repeated scans of a dimension list, initializer or record. |
| Constant expressions and wide integers | Reuse typed evaluation with the constraints of each required C constant context. Retain the result where later phases consume it. Intern `_BitInt` types by width and signedness in the target context and retain layout and call classifications on their existing owners. Keep single-word values on the ordinary path and allocate wide storage only for values that require it. Measure widths and operation counts independently, including near word and ABI boundaries. Compare the work of wide arithmetic against the operations on its significant words. |
| Lowering and code generation | Consume typed facts directly, emit each entity once and reuse target layout, ABI, optimizer and backend machinery. Preserve streaming at `-O0`. Add typed LowIR vocabulary only when an operation requires it, with its existing text adapter and validator coverage. Reuse per-function scratch. Audit VLA cleanup, storage ownership, volatility and aliasing at optimized levels. |

At the start of each batch, identify the producer and consumers of the new
typed fact, the work and storage bounds in terms of inputs and output, and
the unaffected path used as a control. Select target facts once before
preprocessing. Keep type identity independent of mutable completion state:
attach captured VLA extents to their evaluation owner and update
redeclarations on the entity. Retain offsets, conversions, and linker-facing
properties in typed records so consumers can perform direct reads. Change
shared parser and semantic hot records only when the measurements justify the
cost on ordinary inputs. [Architecture requirements](../spec.md)

1. **Measure both C and the existing hot path.** Keep the frozen C++
   self-compile workload intact and run the established baseline comparison for
   shared changes. Add C inputs to the existing frontend scaling suite, with
   independent size series for large macro stacks and expansion, redeclaration
   chains and type compatibility, nested and sparse initializers, multidimensional
   VLA bounds and scope exits, generic selections, and each new C23 family.
   Include a frozen hosted C workload such as the SQLite amalgamation and
   representative zlib or Lua translation units. Pin their source and header
   closure. Start with preprocess-only for token changes, syntax-only for
   parser or semantic changes, and `-O0 -c` and `-O2 -c` for lowering and
   optimizer changes. Keep fixed-size, feature-free controls for each new
   benchmark and include workloads dominated by small ordinary constructs.
   For a feature that the parent compiler rejects, measure the first correct
   implementation against a frozen, equivalent program using existing
   constructs. Use that implementation as the baseline for later tuning.
   Keep separate records for feature cost and feature-free overhead.
2. **Check work growth and memory before tuning wall time.** Generate immutable
   inputs at successive doublings and compare the incremental cost per unit.
   Collect phase timing, peak RSS, allocation and IR sizes where available,
   retired instructions, and counters for the specific repeated work under
   review. Investigate growth faster than source, demanded semantic work or
   produced output implies. Require linear or near-linear behavior where
   `spec.md` calls for it, and document any standard- or ABI-required work
   above that bound. Profile confirmed bottlenecks before introducing caches
   or fast paths and remeasure the affected counters afterward. Vary one axis
   at a time. Examples include redeclarations per entity, dimensions per VLA,
   uses per captured extent, and entries per sparse initializer. Measure the
   feature with a constructed input and its dormant overhead with a workload
   that never uses it. Budget hot-record growth explicitly if a change adds a
   field shared with unrelated C or C++ input. Check the sizes and counts of
   hot records as well as process RSS. Use low-overhead counters that observe
   the production path, with counter collection measured separately. The
   existing generic association, runtime array interning, and VLA dimension
   benchmarks are examples of patterns where counts exposed avoidable scans.
   For each sparse feature, vary written entries and the represented extent
   independently, and record the ratio of incremental work at successive
   doublings after fixed startup costs. Use the feature's work counter when
   available, then confirm with retired instructions and peak memory. Add a
   small repeatable scaling check to the maintainer suite if the same
   algorithmic regression could recur. Keep wall-clock comparisons on
   controlled hosts.
   For example, explicit and inferred declarations with the same initializer
   isolate the cost of deduction. Both should do one semantic analysis of
   the initializer and emit equivalent objects. Retired instructions per
   declaration should stabilize as the number of declarations grows.
3. **Compare immutable binaries.** Use identical inputs and tools, A/A
   calibration and paired ABBA/BAAB blocks. Retain every observation. Verify
   unchanged outputs and use independent runtime and diagnostic oracles for
   intentional changes. Run the existing hardware-counter gate on its
   supported macOS host. Use GCC and Clang on the same covered C workloads to
   see where remaining compile-time costs concentrate. Compare each batch
   with its parent and the combined implementation with current main before
   release. Report counter and wall-time results separately from CI suite
   timing. Resolve reproducible regressions in existing C and C++ paths
   before landing a batch. Profile any remaining new-feature cost beyond
   the measured work required by the standard or ABI.
4. **Check the cost of emitted code where lowering changes.** Compare
   output-checked runtime and code size on the affected native targets at
   matching optimization levels. Use representative project workloads and
   focused cases for dynamic stack adjustment, aggregate copies, volatile
   accesses, and helper calls. Inspect the emitted instructions when cost
   rises and use the shared optimizer or backend when the improvement applies
   to both languages.

[Frontend scaling suite](../benchmarks/frontend_scaling/README.md) ·
[Compile A/B runner](../scripts/run_ab_compile_benchmark.py) ·
[Hardware-counter gate](../scripts/validate_perf_regression.py)

## Assignment regressions and completion

- Add a minimized regression for every fix in the earliest owning assignment.
  Use PA38 for C syntax and semantics, PA4 for shared macro processing, PA8
  for a new LowIR contract, and the owning optimizer, native or target
  assignment for a shared lowering or code-generation defect. Pair a small
  C source test with the shared-layer regression when both observations
  matter. Read the owning handout and use its existing Perl runners,
  reference tools, and fixture clusters. In PA38, use `.c-standard`,
  `.t.1` and Wasm expectation sidecars where relevant. Prefer portable
  observable outcomes and existing contract predicates over an exact
  implementation shape. Keep imported suites and this plan in the
  maintainer checkout. Retain source provenance and license information
  for any copied fixture.
- During iteration, run the reduced cases, relevant manifest slice and
  feature-specific scaling input. Group related changes once those checks
  pass. Before merging the batch, run PA38 native and Wasm, the impacted
  target jobs, the strict report, debug-info checks, PA35 through PA5,
  and the architecture and placement audits. Run inception for shared
  self-host changes and the PA36 smoke suite for lowering, optimization,
  or backend changes. Run `make test-harness` after harness changes and
  validate a student export when shipped inputs or their discovery change.
  [Repository validation](../AGENTS.md)
- Mark an edition and target complete when every applicable mandatory rule in
  the inventory has evidence, the selected upstream and target configurations
  have no unexplained failures, the hosted or freestanding checks and ABI
  probes pass, and the scaling and existing compile-performance gates pass.
  Publish the coverage matrix and the remaining conditional-feature, GNU
  extension and host-runtime limitations alongside each claim. Advertise
  hosted conformance only for a tested compiler, SDK, and runtime pairing.
