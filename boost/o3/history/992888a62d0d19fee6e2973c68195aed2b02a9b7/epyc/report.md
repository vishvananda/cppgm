# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 50.577s | 3.144× | 3.658× | 2.446s | 1.192× | 1.008× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 134.534s | 5.482× | 5.565× | 0.237s | 1.086× | 1.054× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 101.171s | 6.056× | 4.730× | 1.945s | 1.001× | 1.031× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.216s | 2.943× | 3.475× | 0.066s | 1.084× | 1.037× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 61.930s | 2.689× | 3.364× | 0.324s | 1.083× | 1.019× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 61.600s | 7.031× | 5.285× | 2.214s | 0.920× | 1.163× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 41.927s | 5.396× | 3.827× | 0.329s | 1.075× | 1.100× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.002s | 2.435× | 3.103× | 0.015s | 1.050× | 1.109× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.512s | 2.950× | 3.376× | 0.063s | 1.069× | 1.042× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 13.896s | 3.020× | 3.259× | 0.066s | 1.072× | 1.001× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 35.297s | 2.910× | 3.658× | 0.252s | 1.038× | 0.971× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 14.846s | 3.801× | 4.075× | 0.013s | 1.107× | 1.037× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 33.078s | 5.294× | 4.647× | 0.127s | 0.964× | 0.959× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.091s | 3.367× | 6.563× | 0.292s | 1.066× | 1.056× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.469s | 3.652× | 3.793× | 0.146s | 1.059× | 1.014× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 37.835s | 3.108× | 4.727× | 0.089s | 1.050× | 1.001× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 66.739s | 4.896× | 4.403× | 0.146s | 1.131× | 1.006× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.040× | 1.040×, 1.041× | 1.001× |
| clang | 1.019× | 1.013×, 1.025× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44813597235)
