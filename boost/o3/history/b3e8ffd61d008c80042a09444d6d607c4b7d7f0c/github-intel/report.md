# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.499s | 3.399× | 3.641× | 2.172s | 1.170× | 0.989× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 110.927s | 6.095× | 5.707× | 0.165s | 1.094× | 1.091× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 97.999s | 5.933× | 4.319× | 1.940s | 1.015× | 1.029× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.668s | 3.188× | 3.388× | 0.048s | 1.092× | 1.014× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 50.381s | 2.885× | 3.261× | 0.239s | 1.114× | 0.965× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 55.883s | 7.362× | 4.974× | 1.951s | 0.879× | 1.133× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 34.896s | 5.847× | 3.708× | 0.236s | 1.110× | 1.103× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.002s | 2.548× | 3.019× | 0.011s | 0.988× | 1.124× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.735s | 3.103× | 3.226× | 0.046s | 1.039× | 1.015× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.381s | 3.099× | 3.187× | 0.044s | 1.022× | 1.000× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.593s | 3.014× | 3.500× | 0.191s | 0.995× | 1.009× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.753s | 3.844× | 4.078× | 0.010s | 0.960× | 0.970× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.172s | 5.490× | 4.769× | 0.081s | 0.949× | 1.000× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.643s | 3.491× | 6.129× | 0.217s | 1.040× | 1.104× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.680s | 3.859× | 3.576× | 0.127s | 1.032× | 1.023× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.540s | 3.218× | 4.493× | 0.066s | 1.004× | 0.982× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.678s | 5.077× | 4.369× | 0.109s | 1.052× | 1.002× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.039× | 1.037×, 1.041× | 0.996× |
| clang | 1.045× | 1.045×, 1.046× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44818861403)
