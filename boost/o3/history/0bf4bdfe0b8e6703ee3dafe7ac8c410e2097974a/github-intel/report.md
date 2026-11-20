# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.529s | 3.480× | 3.750× | 2.165s | 1.194× | 0.990× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 111.401s | 6.193× | 5.743× | 0.168s | 1.111× | 1.102× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 96.980s | 6.049× | 4.427× | 2.059s | 0.962× | 0.979× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.531s | 3.287× | 3.533× | 0.046s | 1.184× | 1.159× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 49.401s | 2.967× | 3.403× | 0.228s | 1.197× | 1.083× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 55.346s | 7.530× | 5.116× | 1.936s | 0.887× | 1.052× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 34.361s | 6.025× | 3.766× | 0.229s | 1.168× | 1.091× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 11.773s | 2.664× | 3.045× | 0.010s | 1.219× | 1.137× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.593s | 3.267× | 3.288× | 0.046s | 1.154× | 0.992× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.216s | 3.273× | 3.211× | 0.044s | 1.169× | 0.961× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 27.946s | 3.156× | 3.540× | 0.183s | 1.114× | 0.980× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.628s | 4.030× | 4.064× | 0.010s | 1.036× | 0.935× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 27.952s | 5.903× | 4.658× | 0.079s | 1.055× | 0.928× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.010s | 3.710× | 6.253× | 0.210s | 1.168× | 1.079× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.431s | 4.094× | 3.636× | 0.122s | 1.168× | 1.028× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.128s | 3.372× | 4.604× | 0.063s | 1.174× | 1.055× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.233s | 5.287× | 4.373× | 0.107s | 1.124× | 0.984× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.037×, 1.033× | 0.996× |
| clang | 1.047× | 1.047×, 1.047× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44774088589)
