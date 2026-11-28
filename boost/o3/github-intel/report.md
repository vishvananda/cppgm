# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.121s | 3.556× | 3.753× | 2.172s | 1.177× | 0.998× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 114.644s | 6.250× | 5.719× | 0.176s | 1.212× | 1.154× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.176s | 6.032× | 4.368× | 1.962s | 1.023× | 1.031× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.025s | 3.118× | 3.283× | 0.053s | 1.118× | 1.026× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.017s | 2.813× | 3.247× | 0.253s | 1.069× | 0.995× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.894s | 7.130× | 5.083× | 1.956s | 0.864× | 1.047× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.814s | 5.675× | 3.644× | 0.276s | 1.004× | 1.087× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.729s | 2.470× | 2.929× | 0.012s | 1.049× | 1.149× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.229s | 3.009× | 3.123× | 0.054s | 0.971× | 1.007× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 12.027s | 3.056× | 3.063× | 0.049s | 1.041× | 0.930× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.827s | 2.966× | 3.391× | 0.209s | 0.985× | 0.937× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.487s | 3.841× | 3.823× | 0.011s | 0.997× | 0.963× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 29.731s | 5.617× | 4.544× | 0.091s | 0.929× | 0.876× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.999s | 3.549× | 5.972× | 0.247s | 1.056× | 1.044× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.460s | 3.802× | 3.474× | 0.142s | 1.011× | 0.984× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 33.809s | 3.133× | 4.475× | 0.079s | 0.973× | 0.987× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 61.943s | 5.038× | 4.300× | 0.120s | 1.044× | 0.976× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.039× | 1.038×, 1.041× | 1.006× |
| clang | 1.056× | 1.054×, 1.059× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/46092715613)
