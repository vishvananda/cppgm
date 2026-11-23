# Full C coverage plan

Close C99 and C17 first, with a distinct C11 mode and tests for the rules
that differ by edition. Follow with legacy C90/C95 and C23. For each edition,
cover every applicable mandatory compiler requirement, including required
diagnostics, translation limits, and object and execution behavior. Track
hosted and freestanding environments explicitly. A hosted conformance claim
applies to the tested compiler, headers, and runtime together. Track conditional
features and implementation-defined choices by edition and target, and publish
only the feature macros that describe that configuration. Track GNU C
compatibility separately from ISO conformance.

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

The declarations batch now covers calls through inherited and hidden
prototypes, internal linkage, functions first declared in a block, and
conflicts between scopes. Keep the prototype visible at each declaration
separate from the compatibility requirements of the linked entity. The
constant-expression batch covers integer constant contexts and static
arithmetic and address initializers. The C11 alignment and assertion
cases in the pinned GCC C17 manifest now pass. The declaration batch also
covers `for` initializer constraints and prototypes that introduce tags.
Continue with alignment queries and agreement. Check the operand constraints
before reducing a type to its element alignment and use existing declaration
and layout facts for the GNU expression form. Expand the C99, C11, and C17
manifests from those clauses, and qualify the C11 optional-feature macros
against the target matrix before changing the advertised support. Keep
the existing VLA, generic selection, and sparse initializer tests in the
fast iteration loop for changes to their shared analysis paths.

## Implementation order

| Milestone | Next work | Evidence required to close it |
| --- | --- | --- |
| Baseline and CI | Start with the existing GCC, Clang, `c-testsuite`, GCC torture, and Csmith lanes. Expand selection by uncovered rule. | Frozen inputs, native controls, and a recorded disposition for the selected, excluded, and failing cases. |
| C99, C11, C17 core | Finish variably modified type-names and compatibility. Next cover aggregate initialization, redeclarations and linkage, constant expressions and effectful accesses. | Clause-level acceptance, diagnostics, and execution evidence in the applicable editions. Earlier-edition and GNU controls where the rule changes. |
| Target and library qualification | Qualify each completed feature on the affected ABIs. Run the hosted and freestanding matrices once the language and runtime pieces are in place. | Mixed-compiler objects, target execution, feature macro checks, and runtime results for each published environment. |
| C90 and C95 | Reuse the same rules for legacy forms and the amendment. | Legacy positives and edition-boundary diagnostics, with the amendment's macros, characters, and library obligations exercised. |
| C23 | Land preprocessing, then type and declaration changes, then execution and library integration. | Individual C23 rules and their earlier-mode controls, target ABI and runtime evidence, and scaling checks for each substantial new path. |

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
[WG14's nearby public draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf) ·
[WG14 issue index](https://open-std.org/JTC1/SC22/WG14/issues/)

Use one inventory entry per independently testable rule or requirement.
Record the expected oracle as well as the observed outcome. Where a rule
allows multiple outcomes, state the set or invariant the test checks.
Keep target and edition applicability on the entry and link results for
each applicable configuration. A suite pass count measures compatibility
with that suite. Coverage grows as individual rules gain evidence, with
uncovered requirements and unqualified targets visible in the same matrix.

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
and C-only VLA link found in the pilot. Continue from the four reviewed
`c-testsuite` source gaps and the larger clause inventory. Fix shared defects
in the layer that owns them and rerun unrelated language controls that use it.
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
| Types, scopes, and linkage | Keep interned identities and direct scope/name indexes. Fast-path equal canonical types. Keep lexical composite types on declarations and cross-scope compatibility facts on the linked entity where needed. Lower calls from their recorded conversions and resolve the symbol through the linked entity. Index redeclaration and tentative-definition work by entity. If a memo is useful, document its typed key, lifetime and dependence on completion state. Measure work as the number of declarations per entity and the number of independently linked names grow. |
| Array bounds, generic selection, and initializers | Keep evaluated VLA extents in compact declaration- or use-owned records with the required evaluation and lifetime. Lowering reads retained extents and conversions. Check each required generic association once, retain the selected expression and evaluate only that arm at runtime. Resolve initializer paths once. Keep sparse designators and zero fill compact until emission. Count bound visits, designator steps and subobjects to catch repeated scans of a dimension list, initializer or record. |
| Constant expressions and wide integers | Reuse typed evaluation with the constraints of each required C constant context. Retain the result where later phases consume it. Keep single-word values on the ordinary path and allocate wide storage only for values that require it. Measure widths and operation counts independently. |
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
