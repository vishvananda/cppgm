# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 42.628s | 3.330× | 3.597× | 2.191s | 1.151× | 0.989× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 116.916s | 5.985× | 5.441× | 0.186s | 1.090× | 0.981× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 100.400s | 5.924× | 4.258× | 2.002s | 0.998× | 1.006× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.083s | 3.053× | 3.249× | 0.056s | 0.985× | 0.939× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 53.152s | 2.760× | 3.195× | 0.274s | 1.006× | 0.934× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.652s | 7.238× | 5.017× | 1.958s | 0.883× | 1.042× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.152s | 5.753× | 3.650× | 0.259s | 1.048× | 1.080× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.488s | 2.485× | 2.929× | 0.012s | 1.074× | 1.142× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.070s | 3.035× | 3.144× | 0.052s | 0.988× | 0.957× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.761s | 3.096× | 3.104× | 0.047s | 1.005× | 0.951× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.784s | 3.047× | 3.522× | 0.199s | 1.001× | 0.994× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.055s | 3.899× | 4.030× | 0.011s | 0.961× | 0.967× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.696s | 5.687× | 4.610× | 0.083s | 0.980× | 0.928× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.233s | 3.514× | 6.028× | 0.229s | 1.030× | 1.039× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.883s | 3.916× | 3.577× | 0.136s | 1.021× | 0.981× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.956s | 3.267× | 4.535× | 0.072s | 0.998× | 0.992× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.337s | 5.204× | 4.365× | 0.110s | 1.103× | 1.000× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.033× | 1.034×, 1.032× | 1.001× |
| clang | 1.048× | 1.043×, 1.053× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45697047144)
