# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.876s | 3.474× | 3.612× | 2.174s | 1.159× | 0.984× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 111.667s | 6.149× | 5.551× | 0.167s | 1.160× | 1.017× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 97.782s | 5.922× | 4.211× | 1.924s | 1.027× | 1.031× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.763s | 3.123× | 3.266× | 0.048s | 1.094× | 0.934× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 50.375s | 2.845× | 3.240× | 0.240s | 1.064× | 0.946× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 56.185s | 7.283× | 4.931× | 1.929s | 0.892× | 1.131× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 35.177s | 5.824× | 3.618× | 0.242s | 1.087× | 0.999× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.196s | 2.519× | 2.897× | 0.011s | 1.066× | 1.015× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.758s | 3.122× | 3.191× | 0.047s | 1.036× | 0.932× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.343s | 3.134× | 3.137× | 0.046s | 1.026× | 0.898× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.287s | 3.057× | 3.491× | 0.196s | 0.983× | 0.940× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 12.937s | 3.865× | 3.932× | 0.010s | 1.005× | 0.903× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.424s | 5.540× | 4.563× | 0.081s | 0.961× | 0.910× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.858s | 3.469× | 6.014× | 0.225s | 1.013× | 0.977× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.656s | 3.897× | 3.525× | 0.131s | 1.019× | 0.932× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.537s | 3.232× | 4.431× | 0.065s | 1.028× | 0.963× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 59.181s | 5.034× | 4.273× | 0.110s | 1.032× | 0.952× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.036× | 1.032×, 1.040× | 1.008× |
| clang | 1.051× | 1.049×, 1.053× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45739944580)
