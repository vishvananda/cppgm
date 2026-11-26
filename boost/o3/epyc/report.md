# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 69.881s | 3.078× | 3.998× | 3.035s | 1.162× | 1.014× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 189.682s | 5.258× | 6.114× | 0.288s | 1.046× | 1.085× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 135.717s | 6.093× | 5.127× | 2.425s | 1.028× | 1.070× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.667s | 2.898× | 3.825× | 0.078s | 1.084× | 1.086× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 87.442s | 2.641× | 3.652× | 0.389s | 1.057× | 1.034× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 83.379s | 6.847× | 5.777× | 3.348s | 0.822× | 1.062× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 58.711s | 5.316× | 4.191× | 0.386s | 1.072× | 1.132× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 21.211s | 2.396× | 3.400× | 0.018s | 1.064× | 1.099× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.432s | 2.942× | 3.764× | 0.076s | 1.082× | 1.029× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.040s | 2.950× | 3.612× | 0.078s | 1.082× | 1.084× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 49.048s | 2.876× | 4.161× | 0.320s | 0.979× | 0.961× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.288s | 3.639× | 4.334× | 0.016s | 1.074× | 0.980× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 45.766s | 5.097× | 4.917× | 0.156s | 0.966× | 0.968× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 50.540s | 3.404× | 7.058× | 0.340s | 1.082× | 1.122× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 23.165s | 3.660× | 4.178× | 0.182s | 1.053× | 1.039× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 53.236s | 3.034× | 5.052× | 0.105s | 1.068× | 1.033× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 90.469s | 4.889× | 4.801× | 0.183s | 1.146× | 1.022× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.035× | 1.035×, 1.035× | 1.009× |
| clang | 1.032× | 1.040×, 1.023× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45850603565)
