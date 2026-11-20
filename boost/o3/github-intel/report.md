# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 42.946s | 3.302× | 3.503× | 2.189s | 1.149× | 0.985× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 115.584s | 6.022× | 5.515× | 0.183s | 1.076× | 1.006× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.591s | 5.891× | 4.242× | 1.969s | 1.016× | 1.016× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.032s | 3.041× | 3.254× | 0.054s | 0.985× | 0.953× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.103s | 2.741× | 3.245× | 0.257s | 0.970× | 0.991× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.938s | 7.069× | 5.157× | 1.940s | 0.919× | 1.053× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.062s | 5.689× | 3.679× | 0.256s | 1.020× | 1.122× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.544s | 2.471× | 2.947× | 0.012s | 1.006× | 1.113× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.083s | 3.010× | 3.125× | 0.050s | 0.989× | 0.997× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.776s | 3.052× | 3.128× | 0.049s | 0.980× | 0.941× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.254s | 2.975× | 3.474× | 0.201s | 0.975× | 0.982× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.342s | 3.757× | 3.900× | 0.011s | 0.908× | 0.931× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 29.574s | 5.443× | 4.583× | 0.088s | 0.907× | 0.903× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.751s | 3.462× | 5.935× | 0.240s | 1.001× | 0.999× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.152s | 3.804× | 3.487× | 0.139s | 0.979× | 0.952× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.996s | 3.220× | 4.551× | 0.071s | 0.973× | 0.978× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 60.418s | 5.025× | 4.322× | 0.114s | 1.040× | 0.981× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.035×, 1.034× | 0.997× |
| clang | 1.048× | 1.044×, 1.051× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44656576225)
