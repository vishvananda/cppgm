# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 56.082s | 3.379× | 3.559× | 2.862s | 1.133× | 0.984× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 158.209s | 5.824× | 5.316× | 0.223s | 1.138× | 1.063× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 131.720s | 5.916× | 4.320× | 2.413s | 0.923× | 0.990× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 9.339s | 3.088× | 3.255× | 0.065s | 1.039× | 1.035× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 69.070s | 2.827× | 3.258× | 0.310s | 1.061× | 1.054× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 75.558s | 7.068× | 4.956× | 2.772s | 0.899× | 1.120× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 48.293s | 5.736× | 3.632× | 0.316s | 1.061× | 1.121× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 17.059s | 2.482× | 2.901× | 0.015s | 0.994× | 1.150× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 11.043s | 3.002× | 3.069× | 0.065s | 0.976× | 0.994× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 15.832s | 3.047× | 3.078× | 0.061s | 0.993× | 0.967× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 39.949s | 2.974× | 3.376× | 0.261s | 0.978× | 0.970× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 17.409s | 3.785× | 3.897× | 0.013s | 1.002× | 0.955× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 39.012s | 5.455× | 4.371× | 0.111s | 0.973× | 0.920× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 39.278s | 3.458× | 5.850× | 0.302s | 1.008× | 0.972× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 19.134s | 3.845× | 3.439× | 0.161s | 1.038× | 0.971× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 42.208s | 3.260× | 4.490× | 0.087s | 1.033× | 0.998× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 79.353s | 5.111× | 4.250× | 0.147s | 1.082× | 0.962× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.041× | 1.040×, 1.042× | 0.994× |
| clang | 1.057× | 1.057×, 1.057× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45754596224)
