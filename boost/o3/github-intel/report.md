# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.332s | 3.328× | 3.667× | 2.164s | 1.173× | 0.997× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.884s | 6.112× | 5.648× | 0.174s | 1.079× | 1.086× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 96.983s | 6.039× | 4.357× | 1.952s | 1.023× | 1.025× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.591s | 3.251× | 3.415× | 0.048s | 1.144× | 1.020× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 49.685s | 2.950× | 3.357× | 0.233s | 1.174× | 1.026× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 55.528s | 7.382× | 5.080× | 1.955s | 0.903× | 1.123× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 34.667s | 5.919× | 3.741× | 0.231s | 1.114× | 1.106× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 11.774s | 2.586× | 3.066× | 0.011s | 1.126× | 1.130× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.657s | 3.135× | 3.258× | 0.045s | 1.073× | 1.036× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.214s | 3.165× | 3.231× | 0.043s | 1.030× | 1.048× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 27.821s | 3.096× | 3.574× | 0.181s | 1.060× | 1.026× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.540s | 3.888× | 3.998× | 0.009s | 0.988× | 0.919× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 27.700s | 5.555× | 4.760× | 0.077s | 0.999× | 0.990× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.008s | 3.576× | 6.221× | 0.210s | 1.071× | 1.102× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.414s | 3.928× | 3.631× | 0.126s | 1.031× | 1.040× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 30.826s | 3.278× | 4.617× | 0.061s | 1.081× | 1.093× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 57.247s | 5.252× | 4.425× | 0.103s | 1.127× | 1.024× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.036×, 1.034× | 1.004× |
| clang | 1.049× | 1.047×, 1.050× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44780058957)
