# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 69.622s | 3.165× | 4.022× | 3.031s | 1.177× | 1.012× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 190.569s | 5.358× | 6.015× | 0.297s | 1.044× | 1.042× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 135.570s | 6.223× | 5.077× | 2.423s | 1.024× | 1.073× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 11.558s | 2.933× | 3.830× | 0.082s | 1.050× | 1.048× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 87.426s | 2.650× | 3.672× | 0.398s | 1.039× | 1.042× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 83.774s | 7.050× | 5.843× | 3.164s | 0.904× | 1.186× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 58.408s | 5.366× | 4.200× | 0.404s | 1.031× | 1.120× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 21.346s | 2.383× | 3.379× | 0.018s | 1.077× | 1.236× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 13.443s | 2.925× | 3.741× | 0.080s | 1.012× | 1.027× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 19.305s | 2.924× | 3.571× | 0.079s | 1.077× | 1.086× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 49.149s | 2.881× | 4.197× | 0.316s | 1.007× | 1.005× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 20.367s | 3.641× | 4.410× | 0.016s | 0.978× | 0.988× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 46.512s | 5.189× | 5.012× | 0.160s | 0.932× | 0.971× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 50.290s | 3.445× | 7.027× | 0.361s | 1.035× | 1.086× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 22.856s | 3.718× | 4.251× | 0.180s | 1.057× | 1.083× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 52.781s | 3.081× | 5.046× | 0.109s | 1.034× | 1.025× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 92.195s | 4.839× | 4.804× | 0.186s | 1.131× | 1.019× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.040× | 1.040×, 1.040× | 1.001× |
| clang | 1.032× | 1.035×, 1.030× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44612055398)
