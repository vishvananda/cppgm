# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 60.681s | 3.341× | 3.676× | 2.902s | 1.147× | 0.983× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 161.814s | 5.906× | 5.699× | 0.217s | 1.090× | 1.060× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 131.296s | 6.132× | 4.519× | 2.255s | 0.950× | 1.014× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 9.868s | 3.158× | 3.462× | 0.064s | 1.031× | 1.030× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 74.595s | 2.854× | 3.390× | 0.312s | 1.051× | 1.037× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 77.178s | 7.189× | 5.240× | 3.022s | 0.899× | 1.095× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 50.439s | 5.827× | 3.924× | 0.311s | 1.051× | 1.143× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 18.068s | 2.559× | 3.130× | 0.015s | 1.006× | 1.093× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 11.403s | 3.151× | 3.429× | 0.061s | 1.032× | 1.046× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 16.637s | 3.147× | 3.297× | 0.060s | 1.019× | 0.992× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 42.164s | 3.114× | 3.751× | 0.254s | 1.027× | 1.046× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 18.000s | 3.832× | 4.083× | 0.013s | 0.979× | 1.004× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 40.213s | 5.447× | 4.748× | 0.110s | 0.971× | 0.946× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 42.355s | 3.619× | 6.443× | 0.280s | 1.043× | 1.078× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 19.967s | 3.949× | 3.770× | 0.163s | 0.998× | 0.985× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 45.752s | 3.259× | 4.761× | 0.088s | 0.987× | 0.977× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 82.245s | 5.117× | 4.413× | 0.151s | 1.108× | 0.965× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.009×, 1.011× | 1.003× |
| clang | 1.024× | 1.028×, 1.020× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44927958294)
