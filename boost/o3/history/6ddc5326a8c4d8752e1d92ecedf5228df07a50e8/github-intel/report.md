# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 56.795s | 3.307× | 3.554× | 2.829s | 1.156× | 0.999× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 159.895s | 5.570× | 5.306× | 0.232s | 1.026× | 1.054× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 131.799s | 5.809× | 4.371× | 2.265s | 0.970× | 1.048× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 9.308s | 3.111× | 3.298× | 0.065s | 1.053× | 1.043× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 69.698s | 2.824× | 3.195× | 0.322s | 1.043× | 0.988× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 76.095s | 7.047× | 4.960× | 2.791s | 0.937× | 1.103× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 48.842s | 5.675× | 3.605× | 0.329s | 1.034× | 1.098× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 16.699s | 2.555× | 2.988× | 0.015s | 1.076× | 1.169× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.822s | 3.072× | 3.114× | 0.064s | 1.011× | 1.028× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 15.608s | 3.110× | 3.140× | 0.061s | 1.022× | 1.036× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 39.448s | 3.026× | 3.443× | 0.250s | 1.035× | 1.032× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 17.322s | 3.787× | 3.853× | 0.012s | 1.061× | 0.999× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 38.175s | 5.516× | 4.564× | 0.110s | 0.977× | 0.955× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 38.839s | 3.500× | 5.906× | 0.295s | 1.042× | 1.019× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 18.925s | 3.895× | 3.479× | 0.159s | 1.041× | 1.003× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 42.218s | 3.255× | 4.475× | 0.088s | 1.067× | 1.004× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 79.175s | 5.128× | 4.260× | 0.146s | 1.096× | 0.981× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.032× | 1.030×, 1.034× | 1.006× |
| clang | 1.053× | 1.046×, 1.060× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44597827043)
