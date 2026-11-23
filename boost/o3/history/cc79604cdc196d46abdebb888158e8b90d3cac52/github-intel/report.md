# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.029s | 3.361× | 3.596× | 2.181s | 1.158× | 0.981× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 113.011s | 6.015× | 5.536× | 0.169s | 1.085× | 1.011× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.388s | 5.761× | 4.163× | 1.982s | 0.990× | 1.003× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.828s | 3.076× | 3.321× | 0.051s | 1.016× | 0.967× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.353s | 2.715× | 3.174× | 0.261s | 0.957× | 0.901× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.055s | 6.988× | 4.940× | 1.942s | 0.914× | 1.138× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.889s | 5.648× | 3.590× | 0.253s | 0.986× | 0.972× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 11.844s | 2.578× | 3.044× | 0.011s | 1.090× | 1.070× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.637s | 3.143× | 3.279× | 0.045s | 1.068× | 1.018× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.310s | 3.116× | 3.192× | 0.044s | 1.023× | 0.966× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.404s | 3.016× | 3.490× | 0.186s | 1.027× | 0.971× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.696s | 3.883× | 3.901× | 0.010s | 1.023× | 0.938× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.234s | 5.487× | 4.643× | 0.081s | 0.962× | 0.902× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 26.628s | 3.637× | 6.346× | 0.200s | 1.146× | 1.113× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.228s | 4.015× | 3.667× | 0.121s | 1.091× | 1.011× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 30.623s | 3.317× | 4.580× | 0.059s | 1.114× | 1.053× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 57.661s | 5.185× | 4.358× | 0.104s | 1.103× | 0.979× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.039× | 1.035×, 1.043× | 1.001× |
| clang | 1.049× | 1.054×, 1.044× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45241427099)
