# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.795s | 3.450× | 3.608× | 2.160s | 1.158× | 0.987× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 114.226s | 5.958× | 5.472× | 0.175s | 1.055× | 0.995× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 100.099s | 5.798× | 4.243× | 2.009s | 0.987× | 1.000× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.050s | 3.020× | 3.201× | 0.054s | 0.972× | 0.927× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.054s | 2.773× | 3.205× | 0.260s | 1.006× | 0.937× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.041s | 7.123× | 5.011× | 1.949s | 0.916× | 1.119× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.769s | 5.768× | 3.670× | 0.253s | 1.046× | 1.099× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.189s | 2.542× | 3.006× | 0.012s | 1.041× | 1.132× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.963s | 3.064× | 3.171× | 0.048s | 1.034× | 1.039× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.534s | 3.141× | 3.207× | 0.047s | 1.059× | 1.014× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.467s | 3.073× | 3.585× | 0.193s | 1.041× | 1.055× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.974s | 3.996× | 4.061× | 0.010s | 1.049× | 1.005× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.836s | 5.606× | 4.561× | 0.083s | 0.992× | 0.912× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 28.120s | 3.529× | 5.943× | 0.228s | 1.048× | 0.964× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.885s | 3.878× | 3.417× | 0.135s | 1.013× | 0.877× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 32.509s | 3.143× | 4.244× | 0.070s | 0.963× | 0.869× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.585s | 5.034× | 4.102× | 0.112s | 1.036× | 0.870× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.037× | 1.034×, 1.039× | 0.999× |
| clang | 1.050× | 1.050×, 1.049× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45651777895)
