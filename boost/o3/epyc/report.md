# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 50.226s | 3.195× | 3.681× | 2.421s | 1.224× | 1.020× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 137.737s | 5.445× | 5.461× | 0.247s | 1.062× | 1.019× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 103.526s | 6.053× | 4.566× | 2.023s | 0.967× | 0.986× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.345s | 2.976× | 3.463× | 0.070s | 1.045× | 0.978× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 62.741s | 2.694× | 3.332× | 0.330s | 1.079× | 0.998× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 62.643s | 7.051× | 5.206× | 2.246s | 0.817× | 1.133× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 42.027s | 5.366× | 3.813× | 0.329s | 1.064× | 1.102× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.167s | 2.403× | 3.085× | 0.015s | 1.072× | 1.138× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.544s | 2.936× | 3.336× | 0.065s | 1.040× | 1.042× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 13.934s | 2.927× | 3.232× | 0.066s | 1.034× | 1.004× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 35.582s | 2.845× | 3.626× | 0.257s | 1.003× | 0.956× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.254s | 3.623× | 3.886× | 0.014s | 1.018× | 0.937× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 33.845s | 5.165× | 4.523× | 0.129s | 0.963× | 0.956× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.668s | 3.340× | 6.446× | 0.303s | 1.035× | 1.011× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.646s | 3.638× | 3.727× | 0.148s | 1.043× | 1.011× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 38.979s | 3.038× | 4.618× | 0.090s | 1.053× | 1.015× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 68.393s | 4.797× | 4.318× | 0.147s | 1.135× | 0.997× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.042× | 1.044×, 1.039× | 0.988× |
| clang | 1.026× | 1.026×, 1.026× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44922642903)
