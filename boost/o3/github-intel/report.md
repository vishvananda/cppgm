# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 40.831s | 3.382× | 3.602× | 2.182s | 1.149× | 0.986× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 112.545s | 6.078× | 5.497× | 0.166s | 1.181× | 0.997× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 98.294s | 5.837× | 4.285× | 1.923s | 1.023× | 1.036× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 6.786s | 3.154× | 3.248× | 0.049s | 1.128× | 0.903× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.628s | 2.749× | 3.076× | 0.262s | 1.015× | 0.829× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.618s | 6.905× | 4.758× | 1.931s | 0.900× | 1.133× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.002s | 5.553× | 3.528× | 0.255s | 0.968× | 0.934× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.011s | 2.559× | 3.007× | 0.011s | 1.080× | 1.174× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 7.782s | 3.108× | 3.237× | 0.047s | 1.050× | 1.043× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.373s | 3.137× | 3.206× | 0.044s | 1.051× | 1.033× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 28.667s | 3.021× | 3.522× | 0.198s | 0.997× | 1.000× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.170s | 3.735× | 3.861× | 0.011s | 0.928× | 0.854× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.356s | 5.510× | 4.536× | 0.081s | 0.990× | 0.884× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.170s | 3.586× | 6.160× | 0.209s | 1.109× | 1.067× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.330s | 3.965× | 3.650× | 0.124s | 1.057× | 1.012× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.258s | 3.254× | 4.483× | 0.065s | 1.026× | 0.968× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 57.858s | 5.205× | 4.413× | 0.105s | 1.109× | 1.023× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.040× | 1.034×, 1.045× | 0.996× |
| clang | 1.049× | 1.047×, 1.052× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/46032707836)
