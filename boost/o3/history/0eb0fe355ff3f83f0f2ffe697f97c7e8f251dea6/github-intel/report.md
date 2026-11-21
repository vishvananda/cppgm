# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.662s | 3.348× | 3.638× | 2.158s | 1.156× | 0.992× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.412s | 6.084× | 5.696× | 0.174s | 1.080× | 1.079× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 97.197s | 5.917× | 4.373× | 2.056s | 0.961× | 0.973× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.608s | 3.198× | 3.466× | 0.048s | 1.085× | 1.101× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 50.143s | 2.867× | 3.335× | 0.235s | 1.093× | 1.048× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 55.700s | 7.301× | 4.972× | 1.955s | 0.884× | 1.166× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.312s | 5.793× | 3.641× | 0.240s | 1.066× | 1.019× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.137s | 2.548× | 2.956× | 0.011s | 1.054× | 1.022× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.907s | 3.090× | 3.157× | 0.048s | 1.055× | 0.965× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.556s | 3.117× | 3.136× | 0.045s | 1.066× | 0.950× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.611s | 3.057× | 3.472× | 0.190s | 1.048× | 0.959× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.882s | 3.922× | 3.841× | 0.009s | 1.066× | 0.944× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.634s | 5.610× | 4.460× | 0.081s | 0.990× | 0.888× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.071s | 3.565× | 5.958× | 0.224s | 1.084× | 0.960× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.755s | 3.961× | 3.525× | 0.129s | 1.100× | 0.951× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.654s | 3.321× | 4.441× | 0.068s | 1.096× | 0.925× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.790s | 5.257× | 4.214× | 0.109s | 1.131× | 0.904× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.040× | 1.038×, 1.041× | 1.003× |
| clang | 1.049× | 1.047×, 1.051× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44801983152)
