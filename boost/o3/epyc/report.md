# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 43.909s | 2.858× | 3.001× | 2.000s | 1.104× | 0.986× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 116.441s | 5.397× | 4.721× | 0.244s | 1.010× | 0.967× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 87.739s | 6.327× | 4.293× | 1.749s | 0.924× | 0.887× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.142s | 2.953× | 2.855× | 0.066s | 1.120× | 1.001× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 51.176s | 2.800× | 2.936× | 0.318s | 1.142× | 0.987× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 53.934s | 7.450× | 4.586× | 1.730s | 0.834× | 1.093× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.634s | 5.474× | 3.193× | 0.343s | 1.087× | 1.010× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 13.430s | 2.228× | 2.429× | 0.017s | 0.935× | 0.942× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.355s | 2.909× | 2.709× | 0.067s | 1.047× | 0.931× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 12.085s | 2.865× | 2.750× | 0.064s | 1.069× | 0.949× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 30.367s | 2.762× | 2.840× | 0.249s | 1.018× | 0.901× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.341s | 3.520× | 3.334× | 0.014s | 1.029× | 0.903× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.540s | 5.973× | 3.962× | 0.119s | 1.007× | 0.906× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.643s | 3.332× | 4.956× | 0.299s | 1.060× | 0.941× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 14.245s | 3.485× | 3.064× | 0.542s | 1.008× | 0.973× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 32.262s | 3.094× | 3.799× | 0.090s | 1.079× | 0.946× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 55.368s | 5.177× | 4.040× | 0.134s | 1.169× | 0.993× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.055×, 1.015× | 0.997× |
| clang | 1.030× | 1.039×, 1.020× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45790989032)
