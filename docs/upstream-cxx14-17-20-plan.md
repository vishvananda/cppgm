# Upstream C++14, C++17 and C++20 test plan

Extend the GCC and Clang language suites with the existing manifest and runner.
Use each new edition's tests to exercise the supported course profile and add
explicit rejection checks for earlier ISO modes. Keep feature decisions out of
the ordinary token and expression paths. The C++20 scope is the set of features
in [LANGUAGE_PROFILE.md](../LANGUAGE_PROFILE.md).

## What the C++11 campaign established

- **GCC** checks out a pinned `g++.dg/cpp0x` corpus. The manifest builder uses
  DejaGnu's Tcl `dg-get-options` to extract directives, then projects a reviewed
  subset of compile and run actions. It computes the active diagnostic
  expectation from the directives and applies source-hashed dispositions.
  A run case also has to link and exit successfully.
  [GCC manifest builder](../scripts/build_gcc_cxx11_ci_manifest.py) ·
  [GCC test directives](https://gcc.gnu.org/onlinedocs/gccint/Directives.html)
- **Clang** uses LLVM's pinned lit metadata and shell parsers. The builder
  projects individual `RUN` configurations, including active `-verify`
  prefixes and reviewed local input closures. Strict native qualification
  checks inferred modes and selected projections. LLVM IR, FileCheck and
  other omitted obligations remain visible in the manifest.
  [Clang manifest builder](../scripts/build_clang_cxx11_ci_manifest.py) ·
  [Native qualification](../scripts/qualify_clang_cxx11_ci_manifest.py) ·
  [LLVM testing guide](https://llvm.org/docs/TestingGuide.html)
- **Both** build a frozen inventory before running cppgm. The same manifest,
  flags by role, and verified source inputs go to both compilers. Receipts
  record excluded cases, hashes, diagnostics, abnormal exits and the projected
  outcomes. The published preview reports 3,968 GCC and 815 Clang configurations.
  Those are configuration counts. Its cppgm-first suite timing is a CI
  observation with fresh output files.
  [Common runner](../scripts/run_cxx11_ci_suite.py) ·
  [Published C++11 results](performance/preview/upstream-cxx11.md)

The current `diagnostic` outcome accepts a normal compile with text on stderr,
including a successful compile that emitted a warning. Keep that outcome for
the existing reviewed C++11 projections. Add a distinct `reject` outcome for
language boundaries. It requires a normal nonzero compiler exit and a
diagnostic. A matching acceptance case in the supported edition checks that an
unrelated parse error cannot be the only reason a boundary test passes.

## Where the modes leak today

I ran 21 independent snippets against the v0.9.8 compiler using
`-nostdinc -fsyntax-only` in ISO C++11/14/17/20 and GNU C++11. Pinned
GCC 15.2 and Clang 21.1.8 also compiled each snippet in ISO C++11 and its
introducing edition with `-pedantic-errors`. cppgm accepted 15 of the 21
in ISO C++11; both reference compilers rejected all 15 in strict C++11.

| Observed in cppgm | Examples | First change |
| --- | --- | --- |
| Accepted in ISO C++11 | Generic lambdas, digit separators, binary and hex floating literals, `if constexpr`, selection initializers, structured bindings, inline variables, fold expressions, nested namespaces, one-argument `static_assert`, explicit lambda template heads | Apply the edition gate at the recognized token or construct. |
| Documented C++11 extensions | Relaxed constexpr bodies, variable templates, visible-body return deduction | Review each use in hosted headers, the compiler's own sources and the course. Move language-only coursework to the introducing edition. |
| Edition separation in the probe | Init-capture and `decltype(auto)` began working in C++14, CTAD in C++17, and named concepts, `consteval` and `char8_t` in C++20 | Use these as controls when consolidating mode state. |

The ordinary driver uses the GNU number dialect even with an explicit ISO
standard, and hosted preprocessing enables separator and exponent syntax.
The parser lets hosted mode bypass some lambda restrictions, and its
selection-head scanner runs regardless of edition. `__has_feature` and
`__has_extension` share one answer path. In the probe, ISO C++11 accepted a
generic lambda while its feature probe returned false.
[Driver mode setup](../dev/src/driver/toolchain.cpp) ·
[Syntax unit](../dev/src/syntax/syntax_unit.cpp) ·
[Preprocessor setup](../dev/src/preprocess/preprocessor.cpp) ·
[Feature probes](../dev/src/preprocess/macro/feature_probes.cpp) ·
[Clang feature query semantics](https://clang.llvm.org/docs/LanguageExtensions.html#has-feature-and-has-extension)

## Audit the extensions and narrow header compatibility

GCC and Clang suppress selected extension diagnostics in system headers.
With `-std=c++11 -pedantic-errors`, both accepted `if constexpr`, selection
initializers, variable templates, fold expressions and conditional
`explicit` in an `-isystem` header. Both rejected those examples through
`-I` and with `-Wsystem-headers`. Placing `#pragma GCC system_header` before
the constructs in the `-I` header also enabled them. Generic lambdas,
deduced function returns, loops in constexpr bodies, digit separators and CTAD
still failed in system headers on both compilers. Clang suppressed warnings for
some other relaxed constexpr forms, including local declarations and additional
return statements, in system headers. libc++ uses those forms in C++11.
Clang also accepted `decltype(auto)` and hexadecimal floating literals in
system headers in the initial probes. GCC rejected those cases.
[GCC system header rules](https://gcc.gnu.org/onlinedocs/cpp/System-Headers.html) ·
[Clang system header rules](https://clang.llvm.org/docs/UsersManual.html#controlling-diagnostics-in-system-headers)

### How GCC, Clang and the libraries make the decision

GCC and Clang parse `if constexpr` in C++11 and issue a C++17 extension
diagnostic. Their diagnostic code can suppress it based on the source
location's system-header status, even under `-pedantic-errors`. Built-in
system paths, `-isystem` and `#pragma GCC system_header` supply that status.
The pragma applies from its location onward. Both compilers accepted the
same preprocessed input after adding only system-header flag `3` to its
line marker. `__cplusplus` stayed `201103L`, `__STRICT_ANSI__` stayed set,
and `__cpp_if_constexpr` stayed absent. Defining `__cpp_if_constexpr`
manually had no effect on acceptance in ordinary source.
[GCC parser](https://github.com/gcc-mirror/gcc/blob/5115c7e447fc07457443df874bf57840e8316d5f/gcc/cp/parser.cc#L13955-L13972) ·
[GCC diagnostics](https://github.com/gcc-mirror/gcc/blob/5115c7e447fc07457443df874bf57840e8316d5f/gcc/diagnostic.cc#L1378-L1423) ·
[Clang parser](https://github.com/llvm/llvm-project/blob/2078da43e25a4623cab2d0d60decddf709aaea28/clang/lib/Parse/ParseStmt.cpp#L1399-L1415) ·
[Clang diagnostics](https://github.com/llvm/llvm-project/blob/2078da43e25a4623cab2d0d60decddf709aaea28/clang/lib/Basic/DiagnosticIDs.cpp#L539-L569)

The libraries use `__cplusplus` and feature-test macros to select which
declarations to write. For example, libc++ derives `_LIBCPP_STD_VER` from
`__cplusplus`, and libstdc++ leaves `_GLIBCXX17_CONSTEXPR` empty before C++17.
They also deliberately select some newer syntax in older modes and suppress
only its associated warnings.
[libc++ language configuration](https://github.com/llvm/llvm-project/blob/2078da43e25a4623cab2d0d60decddf709aaea28/libcxx/include/__configuration/language.h#L19-L35) ·
[libstdc++ language configuration](https://github.com/gcc-mirror/gcc/blob/5115c7e447fc07457443df874bf57840e8316d5f/libstdc%2B%2B-v3/include/bits/c%2B%2Bconfig#L193-L206)

- **libc++** usually emits `#pragma GCC system_header`. Defining
  `_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER` skips that pragma and enables scoped
  diagnostic push, ignore and pop around library namespace blocks. With
  Clang 21, a copy of the installed `__utility/pair.h` on an ordinary `-I`
  path compiled in strict C++11 with either setting. With the macro defined,
  removing just the `-Wc++20-extensions` suppression from the preprocessed
  input caused errors on `explicit(bool)`. The same removal with the header
  on `-isystem` still compiled.
  [libc++ pair](https://github.com/llvm/llvm-project/blob/2078da43e25a4623cab2d0d60decddf709aaea28/libcxx/include/__utility/pair.h#L46-L53) ·
  [libc++ diagnostic configuration](https://github.com/llvm/llvm-project/blob/2078da43e25a4623cab2d0d60decddf709aaea28/libcxx/include/__config#L563-L600)
- **libstdc++** uses explicit `#pragma GCC diagnostic` scopes around some
  declarations. Its `__is_pair` inline variable template is enabled from
  C++11 with `-Wc++14-extensions` and `-Wc++17-extensions` locally ignored.
  A standalone copy of that block compiled with GCC 15 and Clang 21 under
  `-std=c++11 -pedantic-errors -Wsystem-headers` and failed on both when the
  two `ignored` directives were removed.
  [libstdc++ pair](https://github.com/gcc-mirror/gcc/blob/5115c7e447fc07457443df874bf57840e8316d5f/libstdc%2B%2B-v3/include/bits/stl_pair.h#L1212-L1222)

### cppgm compatibility policy

Follow the GCC and Clang diagnostic model for later syntax cppgm already
implements. Each language gate supplies the introducing edition and marks
the diagnostic as an extension or a hard requirement. The lexer, parser and
sema use the same extension policy. This gives a newly supported construct
the same header behavior as soon as its gate uses the policy. Suppression
depends on the warning group and source provenance. The table below guides
migration of existing behavior and provides test cases.

The installed libstdc++ and libc++ both passed a strict C++11 include sweep
covering ten common headers. Inspection of the active preprocessed output
found `if constexpr` and `no_unique_address` in both libraries.
libstdc++'s `bits/stl_pair.h` also defines the inline variable template
`__is_pair`. libc++'s `__utility/pair.h` uses conditional `explicit`, and
`__locale_dir/num.h` uses selection initializers. All of these uses are
present in C++11 mode. Header compatibility must keep the semantics of
those constructs, including overload participation and layout.
[PA30 header contract](../pa30/README.md)

| Concession | Initial disposition |
| --- | --- |
| `if constexpr`, selection initializers, conditional `explicit`, inline variables and variable templates | Route the edition diagnostic through the shared extension policy. Active uses in the installed headers provide acceptance controls. |
| `no_unique_address` | Review as a separately supported attribute. Both native compilers accepted it in primary C++11 source with `-pedantic-errors` and passed an empty-member layout check. Test mixed-compiler ABI before changing its availability. |
| Relaxed constexpr and deduced function returns | Move language-only users to C++14 and test whether the global extensions can be removed. Neither native compiler admitted the probe in a system header. |
| Generic lambdas and explicit lambda template heads | Enforce the edition in primary source. The header probes admitted explicit template heads only. Look for a real supported header use before granting that permission. |
| Digit separators, binary literals and hex floats | Enforce digit separators from C++14. Review binary literals and hex floats as GNU spellings separately. Both native compilers accepted them in ordinary GNU C++11 in the probe. |
| Alias-declaration selection initializers and other later hosted concessions | Find the original consumer and reproduce its active use before retaining a permission. The ten-header sweep found no alias initializer. PA30 has existing exercises to trace. |

1. **Inventory every current concession.** Start with the profile's three
   documented C++11 extensions, PA30's later syntax and attributes, and
   lexer/parser/sema branches that use `hosted` as a permission. For each
   entry record the feature and edition, original rationale or owning test,
   whether there is an active header use, the supported header and toolchain
   versions, native ISO and GNU behavior in primary files and headers, and
   the disposition. Test both libstdc++ and libc++ with the same C++11/14/17/20
   configurations we ship. Exercise representative template instantiations
   and ABI/ODR cases in addition to an include sweep. Check the self-build
   and the public/library consumers before calling a concession unused.
2. **Classify the diagnostic at each existing language gate.** Keep standard
   behavior and adopted defect reports in their applicable editions. Keep
   intentional GNU extensions in the GNU dialect where the course or a
   supported consumer requires them. Use native probes to distinguish
   suppressible extension diagnostics, such as `if constexpr`, from hard
   requirements, such as the C++14 digit-separator grammar in C++11. Map
   extensions to `-Wc++14-extensions`, `-Wc++17-extensions`, or
   `-Wc++20-extensions` from their introducing edition. Remove legacy global
   concessions after changing language-only fixtures to their proper
   edition. If a real header relies on something both native compilers
   reject in the same mode, inspect its active predefines, builtin probes
   and include environment before keeping a cppgm-specific exception.
   [Course language profile](../LANGUAGE_PROFILE.md) ·
   [Defect report references](../doc/REFERENCES.md)
3. **Resolve extension diagnostics at their source location.** Keep the
   policy out of line and call it only when an already-recognized construct
   would issue an edition diagnostic. Reuse `SourcePositions::in_system_header`
   and the existing inclusion table. Inherit system status through nested
   includes, including an ordinary search path reached from a system header.
   Record `#pragma GCC system_header` and `#pragma clang system_header` as
   location boundaries within the current include. With `-Wsystem-headers`,
   re-enable the ordinary diagnostic policy for system locations. Use
   `-pedantic-errors` for the strict earlier-edition boundary tests. Honor scoped
   `GCC diagnostic` and `clang diagnostic` push, ignore and pop for the
   edition groups, through both `#pragma` and `_Pragma`. Record changes at
   directive and include boundaries so deferred parsing or instantiation
   can recover the policy at the construct's original location. An include
   resumption may have a lower raw location than its child's directives.
   Preserve the TU edition, `__cplusplus` and feature probes. A template
   admitted in a system header keeps that decision when used from ordinary
   source. Genuine semantic errors still diagnose.
   [Source positions](../dev/src/preprocess/preprocessor.h) ·
   [Current semantic use](../dev/src/sema/analyzer_declarations.cpp#L2489) ·
   [Pragma operator handling](../dev/src/preprocess/preprocessor.cpp#L226)
4. **Qualify the policy and source locations with paired tests.** Compile the
   same construct in primary source, an `-I` header, an `-isystem` header, a
   nested include and on either side of the system-header pragma. Exercise
   `-Wsystem-headers` and `_Pragma` push, ignore and pop. GCC 15 and Clang 21
   agreed on those controls for `if constexpr`, including a hard type error
   inside the ignored scope and rejection of the extension after the pop.
   Keep user macro arguments subject to the policy at their user location.
   For an inline variable emitted by a system macro at a user call site,
   GCC accepted the sample and Clang rejected it. Use Clang's expansion
   location policy for that diagnostic and preserve cppgm's existing macro
   location model. Add targeted cases for paste and deferred parsing.
   Use the existing PA30 Perl fixtures and `.system-includes` control for
   student-facing coverage of the hosted header behavior.
   [Macro location contract](../dev/src/preprocess/lexer/pp_token.h)

### Detect standard-library upgrades that need compiler work

- Reuse the hosted test matrix for a small pinned set of libstdc++
  and libc++ consumers in each supported edition. Instantiate representative
  library templates and check observable behavior in addition to checking
  include-only acceptance. Include libc++'s normal configuration and its
  `_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER` configuration on an ordinary `-I`
  path for the scoped warning controls. Keep Linux and macOS results tied
  to their respective library and SDK versions.
  [Hosted test matrix](../.github/workflows/tests.yml)
- Run the same consumers on a scheduled lane and before advancing a
  supported toolchain or SDK pin. Use the candidate library and matching
  reference compiler as a pair, and record the compiler, library, target,
  edition and flags. A case the reference compiler accepts and cppgm
  rejects becomes a reduced regression test before promoting that pin.
  Record whether it needs a diagnostic classification, a missing builtin,
  or implementation of a new construct. A new construct requires its
  grammar and semantics before the shared policy can govern its use.

## Select features without adding work to the common paths

1. **Decode the language once.** Extend the existing `LanguageMode` with a
   compact edition and explicit extension policy. Derive the existing lexer,
   parser and analyzer flags at translation-unit setup. Derive
   `__cplusplus` from the same edition. Pass those resolved options through
   the normal driver, source emit modes and standalone token tools. Preserve
   the separate C and target settings. This replaces the repeated comparison
   of `__cplusplus` strings at setup boundaries.
   [Mode definition](../dev/src/lex/language_mode.h)
2. **Use the grammar that already recognized the construct.** Check
   `if constexpr` after consuming `constexpr`, structured bindings after
   recognizing the bracketed declarator, and lambda extensions at the
   corresponding capture, parameter or template-head branch. In earlier
   modes, go straight to the ordinary condition parser for `if` and `switch`
   when the compatibility policy disables selection initializers. Keep that
   fast path for ordinary source even if selected system headers need the
   initializer form. Prototype parsing an ordinary condition and handling
   an actual initializer-shaped continuation on the exceptional path. Verify
   declarations and long ambiguous conditions before adopting it. This can
   remove the existing selection-head lookahead on ordinary source. Avoid a
   source-inclusion search on every `if`. Check
   edition-dependent semantic rules where their typed operands already exist,
   as with `noexcept` type identity and constexpr body eligibility.
   [Current selection-head parser](../dev/src/syntax/parser_statements.cpp#L644)
3. **Reuse the fast classifications.** Select number syntax once and check
   extension spellings in their existing prefix, separator or exponent
   branches. Keep keyword classification at first identifier interning;
   repeated identifiers keep the cached token kind. Use small existing-style
   flags for parser gates and the out-of-line diagnostic policy. Share feature
   names, minimum editions, macro values and documented extension availability
   in a compact description used at setup or when a feature is actually
   queried. Header permissions must not advertise TU-wide feature support.
   A bounded lookup or precomputed name table is sufficient for feature
   probes. Keep token, AST and type sizes stable. Profile before
   adding any probe cache or per-edition parser specialization.
   [Identifier interning](../dev/src/lex/identifier_table.cpp#L49) ·
   [Frontend invariants](../spec.md)
4. **Verify all paths agree.** Test syntax acceptance, emitted objects,
   `__cpp_*`, `__has_feature` and `__has_extension` at the edition
   boundary. Test older identifiers that become keywords in C++20. Use
   existing typed facts through lowering and template instantiation, with
   no source scan, second parse, or extra per-node language metadata.

## Expand the upstream suites in stages

1. **Generalize the infrastructure first.** Parameterize the same two
   adapters, qualifier and common runner by edition and dialect. Replay the
   current C++11 inputs and compare case IDs, commands, outcomes and
   exclusions before enabling more modes. Preserve the old manifest reader
   or version the format if the new reject outcome needs it.
2. **Start discovery on the existing pins.** The pinned GCC checkout contains
   714 direct `.C` files in `cpp1y`, 575 in `cpp1z`, and 1,276 in
   `cpp2a`. These are source inventories. Evaluate the applicable
   `dg-do`, `dg-options`, effective-target predicates and diagnostics for
   each configuration. An edition directory only supplies candidates.
   For example, the pinned `cpp1z/constexpr-if1.C` targets C++11 and expects
   a warning through C++14. Derive a strict earlier-mode reject check only
   after validating that boundary with the native compilers. Evaluate
   recognized edition predicates, including `_only`, `_down` and aliases,
   against the selected effective edition. Keep unknown targets, compound
   predicates and extra build actions visible for review.
   [Pinned GCC example](https://github.com/gcc-mirror/gcc/blob/5115c7e447fc07457443df874bf57840e8316d5f/gcc/testsuite/g%2B%2B.dg/cpp1z/constexpr-if1.C)
3. **Use explicit Clang RUNs first.** Seed from `Parser`, `SemaCXX` and
   `CXX`, retaining the condition, target and active verifier prefixes per
   RUN. Start with self-contained syntax/object cases. Separate qualified
   implicit-mode runs, local header closures and LLVM-only projections in
   the results. A filename or a successful run under another edition
   provides no applicability evidence. Preserve unsupported and expected
   failure dispositions with their original reasons.
   [Pinned multi-edition Clang example](https://github.com/llvm/llvm-project/blob/2078da43e25a4623cab2d0d60decddf709aaea28/clang/test/Parser/cxx0x-lambda-expressions.cpp)
4. **Promote a fixed cohort per feature.** Start with C++14 literals,
   lambdas, placeholders and constexpr, then C++17 declarations, selection
   and templates, then the named C++20 course features. Each cohort needs
   positive cases, mandatory negatives, and representative runtime results
   where the source supplies a meaningful run oracle. For C++20, report
   concepts/constraints, comparisons, immediate functions and UTF-8
   semantics by feature. Keep unimplemented features, library and platform
   prerequisites, ambiguous diagnostics, and unsupported original oracles
   in the inventory. Record reference disagreements separately and
   adjudicate them against the edition wording and adopted defect reports.
   A new cppgm failure in an applicable case stays a failure. Use small
   coursework regressions in the earliest owning PA, with its existing
   Perl runner, `.cxx-standard` sidecar or driver `.flags` convention.

## Record each compiler gap in its owning assignment

Before fixing an applicable upstream or Boost failure, reduce it to a small
independent test and reproduce the original failure. Add the reducer to the
earliest owning PA and the feature cluster it actually exercises, using the
assignment's existing Perl harness and edition controls. Include a valid
counterpart for a rejection when it helps isolate the rule. Re-run the
unchanged upstream case before promoting it to CI.

Cite the edition and stable clause tag in the handout when the rule needs
explanation. Retain missing working drafts or applicable adopted CWG wording
in `doc/`, with source links, revision, hashes and adoption status in the
existing reference manifests. Use the student export document list for
references that a handout cites. Keep the original publication attribution.
[Offline language references](../doc/REFERENCES.md)

## Run the imported tests in CI

Extend the existing upstream correctness workflow and runner to execute the
reviewed GCC and Clang cohorts for **C++14, C++17, and C++20**. Each promoted
cohort enters CI when it lands. GCC draws from `cpp1y`, `cpp1z`, and `cpp2a`.
Clang draws from the qualified edition-specific configurations in `Parser`,
`SemaCXX`, and `CXX`. Keep the current full C++11 checks on pull requests and
`main`. [Current upstream workflow](../.github/workflows/upstream-cxx11.yml)

- **Pull requests** run a fixed, small selection of imported GCC and Clang
  cases for each of the three editions, alongside the edition-boundary
  controls. Include compile acceptance, strict rejection and representative
  run cases where the original test has a run oracle. Expose the full pinned
  suites through manual dispatch for changes that need a broader check.
- **Every push to `main`** runs the full promoted cohorts from both vendors
  in all three editions. Reuse the same-revision compiler artifact from the
  normal test build when its runtime is compatible with the pinned test
  container. Otherwise share one snapshot-pinned build across the upstream
  jobs. Bound upstream parallelism so ordinary assignment tests start
  promptly, and retain both vendors' results when either fails.
  [Test build and artifact](../.github/workflows/tests.yml)
- **Scheduled discovery and pin updates** extract metadata and hash inputs
  once per pin, then project by edition and feature. Cache extraction and
  native qualification by source closure, metadata tools, reference
  toolchain, target, edition, flags and projection policy. Review newly
  applicable cases before adding them to the fixed CI cohorts. Keep course
  tests and the student export independent of the upstream checkouts.
- **CI results** show GCC and Clang separately for each edition, with counts
  by dialect and outcome. Run cppgm and the matching reference compiler
  against the same frozen case inventory. Retain manifests, commands,
  native qualification, exclusions and diagnostics even on failure. An
  unexpected result on an applicable case fails its check. Verify that a
  full CI run reports a nonempty cohort for all six vendor and edition
  combinations before calling the rollout complete.

## Replay the Boost suites that C++11 skipped

Use the local Boost 1.92.0 campaign at `/home/vishvananda/work/boost-1.92`.
`PROGRESS.md` indexes all 201 B2 build and test projects, with a review and
raw `b2.log` for each. `results.md` indexes the individual attempts. The
later integrated replay stopped during the JSON debugger receipt check, so
use the reviewed per-project log as the baseline for what was skipped.
The local archive matches the [CI archive pin](../scripts/boost_ci.py#L37).

The log records **30 whole projects** excluded for language requirements.
These are the paths under `libs/`, grouped by the requirement recorded in
the C++11 campaign.

| Edition | Projects |
| --- | --- |
| C++14 (25) | `convert/test`, `decimal/test`, `geometry/index/test`, `geometry/test`, `gil/test`, `graph/build`, `graph/test`, `graph_parallel/build`, `graph_parallel/test`, `hana/test`, `histogram/test`, `lambda2/test`, `math/build`, `math/test`, `mpi/build`, `mpi/test`, `multiprecision/test`, `numeric/odeint/test`, `outcome/test`, `parameter_python/test`, `python/build`, `safe_numerics/test`, `stl_interfaces/test`, `units/test`, `yap/test` |
| C++17 (3) | `mqtt5/test`, `openmethod/test`, `redis/test` |
| C++20 (2) | `cobalt/build`, `cobalt/test` |

There are also **972 skipped declarations in 21 otherwise validated
projects**. The target IDs reconcile exactly with `review-conditions.json`
(867), `source-language-exclusions.json` (79), and the MSM evidence named in
`higher-standard-exclusions.json` (19 C++17 and 7 C++20). The other exact
whole-project sources are `project-exclusions.json`, the Math test review
linked from `PROGRESS.md`, and the MQTT5 program in
`source-program-exclusions.json`. Keep platform, dependency and unrelated
feature omissions in their own recorded categories. For example, the ten
Serialization legacy-hash tests remain disabled on the pinned libstdc++
even with GCC in C++14.

1. **Freeze the exact replay inventory from those records.** Store the B2
   project or target ID, requested edition, compiler flags, required
   dependencies and original B2 outcome in a maintainer manifest, so CI can
   reproduce the check without the old local workspace. Qualify each case
   in a fresh B2 build with the pinned native compiler and dependency
   configuration. Use Clang 21 with the same libstdc++ and B2 properties for
   Cobalt's test project. GCC 15.2 crashes during code generation on four of
   its original sources. Start whole projects at their recorded minimum and
   follow original per-target requirements for newer variants. Keep the
   original special link and run settings, including the uBLAS Tensor
   shared-link test and the mixed-edition MSM groups. The original Spirit
   `x3_attribute_type_check` source omits the header that defines
   `boost::decay_t`. Replay the recorded native control with
   `boost/type_traits/decay.hpp` preincluded for this target under both compilers.
   GIL's compile and run tests of `path_spec.cpp` share a default B2 target
   name. Give the compile test its own name in the extracted Jamfile to
   execute both original test definitions. The default GIL format test
   needs the JPEG, PNG, TIFF and zlib development packages. Replay GIL
   with shared linking so libtiff supplies its codec dependencies.
   Copy Graph's two archived DOT fixtures into B2's working directory for
   its isomorphism test. Apply two bounds fixes to the extracted Boost
   Graph Parallel headers before running its original MPI tests. Form
   one-past pointers directly in the centrality reduction and discard
   empty partitions before the next strong-components BFS. The pinned
   GCC 15.2 libstdc++ assertions otherwise abort those tests.
   In Hana's type-name helper, select the spelling
   of `__PRETTY_FUNCTION__` that cppgm already provides. Keep Hana's
   original type-name assertions, including the runtime comparisons.
   Include `<stdint.h>` in YAP's unary operator test, which uses `uint32_t`
   directly. In uBLAS's `test_assignment.cpp`, enable the legacy Boost.Timer
   API before including its header. Apply both changes equally to the native
   and cppgm runs and preserve the original test assertions.
   Point Outcome's Predef check and its four compile-fail tests at the
   headers installed at the release archive's root. Run Safe Numerics in
   the release variant so its performance test reaches its run oracle.
   Use shared linking for Serialization's recovered tests so the tests
   that load shared libraries are enabled.
2. **Require actual cppgm builds and test execution.** Reuse the B2 runner
   with separate build roots by compiler and edition. Verify the actual
   C++ invocations use the candidate compiler and recorded standard. Each
   skipped target must now reach its original compile, link or run oracle.
   Match the native case inventory, including expected failures. A missing
   target, configuration-only success or downstream skip leaves that case
   open. Use focused targets during implementation and run the combined
   inventory before qualifying the rollout.
3. **Keep the recovered suites covered in CI.** Add a Boost correctness
   check for the recovered targets as their editions become available. Keep
   the existing 17-suite C++11 benchmark cohort fixed for comparable
   timings. The rollout is complete when all 30 projects and all 972
   declarations are accounted for by their original outcomes. Cobalt needs
   C++20 coroutine grammar and lowering in addition to its concepts probe.
   Track coroutines as an explicit implementation dependency for closing
   the Boost check. [Existing Boost benchmark](../benchmarks/boost/README.md)

### Cobalt and PFR checkpoints

- Class-valued arguments now cover Cobalt's `template<static_protocol P>`
  declarations, calls with ADL-only lookup and constraints that use the
  parameter object. The pinned Cobalt compile probe went from 24 of 60
  successful translation units to 31. The remaining 29 stop at coroutine
  producer operations. The probe forced the coroutine feature-test macro
  solely to reach those operations. Keep the compiler macro disabled until
  the producer path and the original Boost runtime tests pass.
- PA18 exercises class argument equivalence, class deduction, address
  identity, and rejection in C++17. The Linux x86-64 mixed object check
  resolves both a specialization and its parameter object across cppgm,
  GCC and Clang. The three positive controls also execute on WASI.
  Recheck class values with extended-width scalars, subobject addresses
  and adjusted pointers to members before claiming complete support.
- Native Boost.PFR executes 135 declarations in C++14 and 195 across the
  C++14 and C++17 configurations. Eighty-eight additional declarations in
  the frozen inventory depend on the upstream C++26 configurations.
  B2 reports the C++14 generator as a standalone Python test. Its
  original source dependency, execution receipt and requested build
  mode are required evidence for that declaration.
- The three PFR `huge_count.cpp` variants exposed runaway template work
  on both main and the edition branch. A converting initializer was
  applied to the children of a nested aggregate, so PFR's field-count
  search kept doubling its index sequence. With the aggregate conversion
  fixed, all three original configurations compile in under 50 ms using
  less than 17 MiB peak RSS on the same host. Keep the remaining PFR replay
  bounded while investigating its other failures.

## Measure before promoting the changes

- Use the existing compile-performance tooling with immutable baseline and
  candidate binaries, frozen inputs, A/A calibration and paired ABBA/BAAB
  blocks. Run the frozen standard compile workload at O0 through O3, a
  preprocessing-heavy hosted input, a syntax-only template-heavy input,
  and a C++17 library consumer. Include GNU C++11 source from the compiler's
  own rebuild and a strict C++11 input that uses none of the new forms.
  Check outputs for unchanged valid programs and record deliberate
  diagnostic or feature-macro differences separately.
- Use retired instructions and phase workloads as the fast screen. Inspect
  the hot paths for added lookups, per-token branches or allocation and
  compare peak RSS. Measure cycles, branch misses, instruction-cache misses
  where available, and wall time on an isolated host before promotion.
  Require no repeatable increase on unchanged C++11 workloads. Treat noisy
  results as a reason to repeat the comparison. Full self-host and
  hosted-header compatibility runs qualify the combined batch.
  [Compile A/B runner](../scripts/run_ab_compile_benchmark.py) ·
  [Hardware-counter gate](../scripts/validate_perf_regression.py)
- Land the harness generalization separately from the mode fixes. The first
  compiler batch should establish the header audit and shared diagnostic
  policy, then prove them with `if constexpr`, conditional `explicit` and
  digit separators. These cases exercise system provenance, scoped warning
  suppression, and a lexical boundary that the native compilers enforce
  even in system headers. Verify hosted consumers before removing their
  existing blanket permissions. Add the remaining features in measurable
  batches and run the strict report, audits, PA35 self-host checks and
  student export before promoting each edition's initial cohort.

## Prepare the release

Include a separate version commit in the completed C++ edition PR. Update
`CPPGM_VERSION` in `dev/src/support/version.h` and verify the reported version
matches the intended release tag. Use that tag on the merged release commit.
