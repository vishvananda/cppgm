# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 51.318s | 3.061× | 3.739× | 2.429s | 1.189× | 1.018× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 136.413s | 5.448× | 5.686× | 0.242s | 1.062× | 1.090× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 101.557s | 6.038× | 4.681× | 1.936s | 0.985× | 1.037× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 8.301s | 2.911× | 3.446× | 0.068s | 1.043× | 1.038× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 62.592s | 2.643× | 3.348× | 0.326s | 1.055× | 1.022× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 61.984s | 6.999× | 5.284× | 2.241s | 0.883× | 1.088× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 42.130s | 5.339× | 3.821× | 0.324s | 1.075× | 1.130× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 15.079s | 2.402× | 3.096× | 0.014s | 1.105× | 1.167× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 9.552s | 2.928× | 3.393× | 0.064s | 1.053× | 1.073× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 13.962s | 2.913× | 3.252× | 0.064s | 1.035× | 1.043× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 35.481s | 2.830× | 3.661× | 0.253s | 1.010× | 0.968× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 15.034s | 3.666× | 4.057× | 0.013s | 1.128× | 1.038× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 33.615s | 5.654× | 4.624× | 0.128s | 0.966× | 0.979× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 35.130s | 3.565× | 6.554× | 0.290s | 1.148× | 1.066× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 16.530s | 3.813× | 3.765× | 0.146s | 1.125× | 1.015× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 38.369s | 3.197× | 4.685× | 0.089s | 1.109× | 1.026× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 67.249s | 5.146× | 4.408× | 0.146s | 1.172× | 1.013× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.042× | 1.042×, 1.042× | 0.996× |
| clang | 1.023× | 1.016×, 1.029× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44815881069)
