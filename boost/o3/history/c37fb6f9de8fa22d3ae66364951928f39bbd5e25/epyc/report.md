# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 68.586s | 3.105× | 4.015× | 3.027s | 1.171× | 1.011× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 187.520s | 5.282× | 5.990× | 0.281s | 1.067× | 1.053× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 133.524s | 6.162× | 5.123× | 2.422s | 1.023× | 1.061× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.618s | 2.873× | 3.808× | 0.080s | 1.027× | 1.040× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 86.869s | 2.609× | 3.632× | 0.383s | 1.050× | 1.034× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 83.467s | 6.750× | 5.688× | 3.238s | 0.876× | 1.165× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 58.308s | 5.290× | 4.154× | 0.383s | 1.065× | 1.146× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 21.164s | 2.352× | 3.369× | 0.018s | 1.006× | 1.145× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.473s | 2.868× | 3.686× | 0.075s | 1.051× | 1.067× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.210s | 2.894× | 3.553× | 0.079s | 1.041× | 1.057× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 49.240s | 2.844× | 4.117× | 0.322s | 0.962× | 0.930× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 19.822s | 3.622× | 4.291× | 0.016s | 1.012× | 0.954× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 45.581s | 5.008× | 4.879× | 0.156s | 0.963× | 0.983× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 50.542s | 3.355× | 6.952× | 0.345s | 1.051× | 1.079× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 23.034s | 3.628× | 4.164× | 0.180s | 1.023× | 1.032× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 52.870s | 3.018× | 5.027× | 0.106s | 1.023× | 1.000× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 90.961s | 4.795× | 4.728× | 0.185s | 1.129× | 1.011× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.037× | 1.038×, 1.036× | 0.999× |
| clang | 1.034× | 1.034×, 1.034× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/46045514956)
