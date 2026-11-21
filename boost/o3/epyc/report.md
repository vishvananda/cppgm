# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 53.555s | 3.127× | 3.626× | 2.445s | 1.182× | 1.012× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 142.906s | 5.546× | 5.491× | 0.259s | 1.068× | 1.046× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 103.748s | 6.083× | 4.783× | 1.945s | 0.999× | 1.032× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.892s | 2.828× | 3.322× | 0.074s | 0.996× | 0.998× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 65.111s | 2.613× | 3.280× | 0.347s | 1.049× | 1.002× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 63.991s | 7.054× | 5.267× | 2.217s | 0.867× | 1.026× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 43.618s | 5.291× | 3.881× | 0.350s | 1.040× | 1.148× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 16.082s | 2.273× | 3.040× | 0.016s | 1.045× | 1.202× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.141s | 2.788× | 3.315× | 0.070s | 0.951× | 1.053× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.742s | 2.779× | 3.247× | 0.069s | 0.956× | 1.033× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 37.320s | 2.698× | 3.712× | 0.269s | 0.966× | 1.006× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 16.327s | 3.571× | 4.145× | 0.015s | 0.982× | 0.942× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 34.884s | 5.347× | 4.986× | 0.132s | 0.943× | 0.963× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 36.271s | 3.450× | 6.514× | 0.320s | 1.038× | 1.084× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 17.043s | 3.710× | 3.759× | 0.154s | 1.061× | 1.028× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 40.104s | 3.075× | 4.504× | 0.095s | 1.045× | 0.990× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 69.779s | 4.884× | 4.364× | 0.154s | 1.125× | 0.984× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.033× | 1.026×, 1.039× | 0.992× |
| clang | 1.022× | 1.017×, 1.027× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44830361139)
