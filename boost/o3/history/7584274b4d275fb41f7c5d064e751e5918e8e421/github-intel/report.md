# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 42.388s | 3.420× | 3.643× | 2.190s | 1.160× | 0.973× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 117.259s | 5.952× | 5.552× | 0.184s | 1.068× | 1.061× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 99.982s | 5.946× | 4.321× | 1.994s | 1.008× | 1.008× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.016s | 3.077× | 3.292× | 0.052s | 1.050× | 1.022× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.071s | 2.809× | 3.265× | 0.257s | 1.031× | 0.990× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.143s | 7.385× | 5.045× | 1.934s | 0.928× | 1.153× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.072s | 5.755× | 3.681× | 0.257s | 1.039× | 1.083× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.169s | 2.563× | 3.004× | 0.011s | 1.087× | 1.091× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.977s | 3.062× | 3.143× | 0.049s | 1.042× | 0.958× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.638s | 3.101× | 3.117× | 0.047s | 1.016× | 0.904× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.788s | 3.058× | 3.479× | 0.199s | 1.010× | 0.937× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.114s | 3.925× | 3.927× | 0.010s | 1.029× | 0.901× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 29.148s | 5.549× | 4.522× | 0.085s | 0.954× | 0.879× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.320s | 3.554× | 5.982× | 0.231s | 1.072× | 0.975× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.937s | 3.944× | 3.563× | 0.132s | 1.059× | 1.003× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 32.536s | 3.240× | 4.408× | 0.071s | 1.001× | 0.944× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 60.138s | 5.206× | 4.296× | 0.114s | 1.091× | 0.950× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.039×, 1.038× | 1.000× |
| clang | 1.048× | 1.051×, 1.046× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45617981312)
