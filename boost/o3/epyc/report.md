# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 50.892s | 3.145× | 3.641× | 2.446s | 1.181× | 1.011× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 137.669s | 5.416× | 5.490× | 0.241s | 1.071× | 1.051× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 102.899s | 6.011× | 4.637× | 1.923s | 1.186× | 1.038× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.319s | 2.928× | 3.455× | 0.068s | 1.061× | 1.056× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 62.881s | 2.668× | 3.327× | 0.332s | 1.071× | 1.019× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 62.409s | 7.111× | 5.287× | 2.280s | 0.862× | 1.051× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 42.260s | 5.359× | 3.801× | 0.332s | 1.072× | 1.106× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.171s | 2.411× | 3.067× | 0.015s | 1.058× | 1.097× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.648s | 2.917× | 3.326× | 0.067s | 1.003× | 1.001× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 14.203s | 2.896× | 3.194× | 0.067s | 1.024× | 1.010× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 35.867s | 2.816× | 3.630× | 0.258s | 1.008× | 0.955× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.121s | 3.686× | 3.951× | 0.014s | 1.025× | 0.987× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 33.438s | 5.309× | 4.640× | 0.128s | 0.967× | 0.958× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.432s | 3.379× | 6.509× | 0.298s | 1.072× | 1.050× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.617s | 3.660× | 3.735× | 0.148s | 1.070× | 1.003× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 38.659s | 3.075× | 4.683× | 0.091s | 1.044× | 1.023× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 68.035s | 4.852× | 4.372× | 0.149s | 1.119× | 0.991× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.044× | 1.046×, 1.041× | 1.003× |
| clang | 1.025× | 1.017×, 1.032× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45272062060)
