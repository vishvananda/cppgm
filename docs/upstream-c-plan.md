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

The baseline is `v0.10.3` (`7bc2ee420`). PA38 has 106 LowIR fixtures and 36
native behavior controls. Its CI job checks those lanes and the Wasm fixtures.
It exposes `c99`, `gnu99`, `c17`, and `gnu17`. Keep the coverage campaign in
maintainer CI. Teach C-specific behavior in PA38 and use the earliest owning
assignment for changes to shared behavior.

[PA38 handout](../pa38/README.md) · [CI test jobs](../.github/workflows/tests.yml) ·
[WG14 editions and defect reports](https://www.open-std.org/jtc1/sc22/wg14/www/projects.html)

Track evidence as each milestone lands in the
[C conformance inventory](../reports/upstream-c-coverage.md) and the
[C frontend scaling report](performance/c-frontend-scaling.md).

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
[C11 and C17 defect reports](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2243.htm) ·
[C23 working draft](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3096.pdf)

| Source | Initial selection |
| --- | --- |
| GCC `gcc.dg` | C99/C11/C17 feature and diagnostic cases. Include `cpp` for preprocessing, `compat` for mixed objects, and later the C23 cases named `c23-*` or `c2x-*` at the pinned revision. [GCC C suites](https://gcc.gnu.org/onlinedocs/gccint/C-Tests.html) |
| Clang `clang/test/C` | `C99`, `C11`, and `drs`, then `C23`. Add selected C inputs from `Sema`, `Preprocessor`, and `CodeGen` where a portable observable outcome can be checked. [Clang test tree](https://github.com/llvm/llvm-project/tree/llvmorg-21.1.8/clang/test) |
| `c-testsuite` | All 220 programs at revision `5c7275656d751de0e68b2d340a95b5681858ed07`. Check exit status and combined output, with an explicit disposition for GNU-only or target-specific cases. [Pinned suite](https://github.com/c-testsuite/c-testsuite/tree/5c7275656d751de0e68b2d340a95b5681858ed07) |
| GCC torture and Csmith | Run `gcc.c-torture/execute` at `-O0` and `-O2`. Expand optimization levels as the baseline stabilizes. Add pinned Csmith seeds and compare output with GCC and Clang on the same ABI. Retain and reduce mismatches. [GCC C suites](https://gcc.gnu.org/onlinedocs/gccint/C-Tests.html) · [Csmith](https://github.com/csmith-project/csmith) |

Start with the GCC and LLVM revisions already pinned in the C++ workflow.
Extend the manifest and runner with a source language and dialect, explicit
actions for preprocessing, compiling, linking and running, and a runtime
output oracle when the case requires one. Preserve the meaning of existing
C++ manifests. Reuse DejaGnu and lit metadata extraction where applicable.
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
stays visible in the report until it passes.

Add the reviewed GCC/Clang set and `c-testsuite` after the existing Linux
build, using its compiler artifact. Scan larger corpora and run seeded
torture and differential checks on a schedule or by dispatch. Use portable
runtime cases for the other target lanes. Keep the PR lane bounded and reuse
the build and tools those lanes already prepare.

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

1. **Triage the pilot first.** Reduce the optimizer crash in `00159.c`, which
   disappears with LowIR passes disabled. Check whether the shared optimizer
   reproduces it from a small LowIR program. Reduce the `push_macro` and
   `pop_macro` mismatch in `00206.c` for the PA4 preprocessor lane. Investigate
   why the C VLA case `00207.c` references `__gxx_personality_v0`. Its object
   links and runs with a C++ driver, so add a C-only object-link control.
   Review the eight compile failures against the applicable ISO and GNU rules.
   Include minimized tests for the conditional operator with null pointer
   constants, prototype-scope array declarators, and `_Generic` as applicable.
   [Pinned pilot cases](https://github.com/c-testsuite/c-testsuite/tree/5c7275656d751de0e68b2d340a95b5681858ed07/tests/single-exec)
2. **Unify mode setup.** Resolve input language, edition, GNU mode, diagnostic
   policy and target capabilities before the first token. Keep the existing
   source-language selection and `.c` driver behavior while adding `c11` and
   `gnu11`. Verify preset macros and feature probes in every mode, including
   `__STDC_VERSION__`, `__STDC_HOSTED__`, and conditional-feature macros.
   At each changed rule, pair acceptance in its defining edition with the
   earlier-mode diagnostic when required. Exercise interfaces where mode state
   can diverge, including preprocessing, syntax checks, LowIR emission and
   object emission.
3. **Complete declarators, initializers, and compatibility.** Cover
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
   supported.
4. **Qualify hosted extensions.** Find the general language or header behavior
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

[musl libc-test](https://wiki.musl-libc.org/libc-test.html) ·
[zlib](https://zlib.net/) · [Lua tests](https://www.lua.org/tests/) ·
[SQLite testing](https://sqlite.org/testing.html)

## 4. Extend coverage to legacy C and C23

- **C90 and C95.** Add the legacy modes and baseline them with GCC's C90
  tests and Clang defect cases. Cover the former default-int and implicit
  function declaration rules with paired C99 diagnostics. Check old-style
  definitions, declaration placement, comment and preprocessing rules,
  the C95 additions, and the advertised library/header profile. Include
  the applicable language and driver aliases in the mode matrix.
- **C23.** Inventory every mandatory change against the published edition
  and applicable resolutions. Batch the preprocessing and literal changes
  first (`#embed`, feature probes, new directives, trigraph removal), then
  declaration and type semantics (`typeof`, `typeof_unqual`, `nullptr`,
  `_BitInt`, attributes, type inference and `constexpr` objects), followed by
  interface and execution behavior. Pair older-mode acceptance of K&R
  definitions and non-prototype calls with the C23 rules for those forms.
  Recheck conditional-feature rules, including the C23 distinction between
  variably modified types and automatic-storage VLA objects. Verify C23
  header and library additions against each hosted runtime before making a
  hosted C23 claim for that configuration.

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
through object emission. External compilers serve as test references, build
tools, and link drivers for already emitted objects.

| Path | Review and measurement |
| --- | --- |
| Mode selection and preprocessing | Decode options once. Use compact edition or feature values at the construct that needs them. Put extra work on the relevant token or construct paths so ordinary input retains the existing fast path. Use shared tokenization and macro machinery with bounded lookahead. For macro push/pop, index by interned name and save only the affected binding. |
| Types, scopes, and linkage | Keep interned identities and direct scope/name indexes. Fast-path equal canonical types. Resolve C compatibility and composite type work where required and retain the result on its owner. Index redeclaration and tentative-definition work by entity. If a memo is useful, document its typed key, lifetime and dependence on completion state. Measure type comparisons and work per redeclaration in long chains. |
| Array bounds, generic selection, and initializers | Keep evaluated VLA extents in compact declaration- or use-owned records with the required evaluation and lifetime. Lowering reads retained extents and conversions. Check each required generic association once, retain the selected expression and evaluate only that arm at runtime. Resolve initializer paths once. Keep sparse designators and zero fill compact until emission. Count bound visits, designator steps and subobjects to catch repeated scans of a dimension list, initializer or record. |
| Lowering and code generation | Consume typed facts directly, emit each entity once and reuse target layout, ABI, optimizer and backend machinery. Preserve streaming at `-O0`. Add typed LowIR vocabulary only when an operation requires it, with its existing text adapter and validator coverage. Reuse per-function scratch. Audit VLA cleanup, storage ownership, volatility and aliasing at optimized levels. |

1. **Measure both C and the existing hot path.** Keep the frozen C++
   self-compile workload intact and run the established baseline comparison for
   shared changes. Add C inputs to the existing frontend scaling suite, with
   independent size series for large macro stacks and expansion, redeclaration
   chains and type compatibility, nested and sparse initializers, multidimensional
   VLA bounds and scope exits, generic selections, and each new C23 family.
   Include a frozen hosted C workload such as the SQLite amalgamation and
   representative zlib or Lua translation units. Pin their source and header
   closure. Measure syntax-only, `-O0 -c`, and `-O2 -c` where they isolate
   distinct costs.
2. **Check work growth and memory before tuning wall time.** Generate immutable
   inputs at successive doublings and compare the incremental cost per unit.
   Collect phase timing, peak RSS, allocation and IR sizes where available,
   retired instructions, and counters for the specific repeated work under
   review. Investigate growth faster than source, demanded semantic work or
   produced output implies. Require linear or near-linear behavior where
   `spec.md` calls for it, and document any standard- or ABI-required work
   above that bound. Profile confirmed bottlenecks before introducing caches
   or fast paths and remeasure the affected counters afterward.
3. **Compare immutable binaries.** Use identical inputs and tools, A/A
   calibration and paired ABBA/BAAB blocks. Retain every observation. Verify
   unchanged outputs and use independent runtime and diagnostic oracles for
   intentional changes. Run the existing hardware-counter gate on its
   supported macOS host. Use GCC and Clang on the same covered C workloads to
   see where remaining compile-time costs concentrate. Resolve reproducible
   regressions in existing C and C++ paths before landing a batch.
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
- For each batch, run the reduced cases and relevant manifest slice first,
  then PA38 native and Wasm and the impacted target jobs. Before merging,
  run the strict report, debug-info checks, PA35 through PA5, and the
  architecture and placement audits from [AGENTS.md](../AGENTS.md). Run
  inception for shared self-host changes and the PA36 smoke suite for
  lowering, optimization, or backend changes. Check harness and export
  behavior when changing their inputs or wiring.
- Mark an edition and target complete when every applicable mandatory rule in
  the inventory has evidence, the selected upstream and target configurations
  have no unexplained failures, the hosted or freestanding checks and ABI
  probes pass, and the scaling and existing compile-performance gates pass.
  Publish the coverage matrix and the remaining conditional-feature, GNU
  extension and host-runtime limitations alongside each claim.
