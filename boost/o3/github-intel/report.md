# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 57.707s | 3.346× | 3.550× | 2.915s | 1.137× | 0.997× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 162.753s | 5.702× | 5.285× | 0.231s | 1.088× | 1.040× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 135.392s | 5.832× | 4.271× | 2.341s | 0.963× | 1.033× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 9.608s | 3.074× | 3.264× | 0.067s | 1.037× | 1.032× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 71.445s | 2.817× | 3.226× | 0.331s | 1.027× | 1.007× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 77.391s | 7.095× | 4.947× | 2.872s | 0.873× | 1.105× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 49.500s | 5.715× | 3.608× | 0.326s | 1.047× | 1.108× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 17.167s | 2.526× | 2.926× | 0.015s | 1.001× | 1.110× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 10.991s | 3.080× | 3.149× | 0.064s | 1.045× | 1.027× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 15.920s | 3.133× | 3.128× | 0.061s | 1.050× | 0.986× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 40.282s | 3.047× | 3.438× | 0.258s | 1.016× | 1.009× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 17.559s | 3.849× | 3.957× | 0.014s | 1.024× | 0.988× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 39.166s | 5.422× | 4.518× | 0.113s | 0.966× | 0.942× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 39.603s | 3.495× | 5.957× | 0.295s | 1.040× | 1.047× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 19.361s | 3.864× | 3.482× | 0.160s | 1.030× | 1.013× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 42.829s | 3.253× | 4.504× | 0.088s | 1.033× | 1.012× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 81.402s | 5.074× | 4.279× | 0.149s | 1.086× | 0.981× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.030× | 1.028×, 1.032× | 0.998× |
| clang | 1.050× | 1.051×, 1.048× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44667760294)
