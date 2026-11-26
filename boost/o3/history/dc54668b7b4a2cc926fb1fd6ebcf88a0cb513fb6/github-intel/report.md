# Boost compilation and test execution

Boost 1.92.0, 17 C++11 suites (1,818 declarations). Ratios are reference / cppgm, higher is better.

Compilation counts child CPU of C++ test compilations, including expected rejections. It excludes configuration probes, library dependencies, C, linking and B2. Test execution includes process startup and the GDB integration test; it is correctness-test timing, not an application benchmark. The debugger source has identical volatile breakpoint anchors for all compilers; MPL and TypeTraits test enums use fixed underlying types for their -1 probes. Original test oracles are retained. Compile timings use one clean campaign per compiler; small differences need repeats.

| Suite | Declarations | Compile CPU cppgm | GCC | Clang | Test CPU cppgm | GCC | Clang |
|---|---:|---:|---:|---:|---:|---:|---:|
| [libs/accumulators/test](suites/libs-accumulators-test.md) | 49 | 41.661s | 3.344× | 3.645× | 2.182s | 1.150× | 0.988× |
| [libs/asio/test](suites/libs-asio-test.md) | 295 | 115.514s | 5.995× | 5.619× | 0.178s | 1.075× | 1.105× |
| [libs/container/test](suites/libs-container-test.md) | 89 | 101.301s | 5.759× | 4.303× | 1.971s | 1.010× | 1.029× |
| [libs/function/test](suites/libs-function-test.md) | 49 | 7.073s | 3.049× | 3.266× | 0.056s | 0.983× | 0.960× |
| [libs/fusion/test](suites/libs-fusion-test.md) | 221 | 52.642s | 2.749× | 3.224× | 0.263s | 0.980× | 0.978× |
| [libs/json/test](suites/libs-json-test.md) | 50 | 57.941s | 7.065× | 5.025× | 1.948s | 0.883× | 1.144× |
| [libs/mp11/test](suites/libs-mp11-test.md) | 234 | 36.201s | 5.636× | 3.617× | 0.262s | 0.983× | 1.047× |
| [libs/mpl/test](suites/libs-mpl-test.md) | 99 | 12.392s | 2.476× | 2.929× | 0.012s | 0.976× | 1.002× |
| [libs/optional/test](suites/libs-optional-test.md) | 74 | 8.057s | 2.997× | 3.125× | 0.052s | 0.940× | 0.921× |
| [libs/proto/test](suites/libs-proto-test.md) | 23 | 11.627s | 3.082× | 3.120× | 0.047s | 1.037× | 0.943× |
| [libs/qvm/test](suites/libs-qvm-test.md) | 134 | 29.006s | 2.985× | 3.450× | 0.202s | 0.969× | 0.933× |
| [libs/spirit/repository/test](suites/libs-spirit-repository-test.md) | 8 | 13.190s | 3.861× | 3.920× | 0.010s | 0.969× | 0.913× |
| [libs/type_erasure/test](suites/libs-type_erasure-test.md) | 60 | 28.902s | 5.519× | 4.653× | 0.083s | 0.970× | 0.934× |
| [libs/type_traits/test](suites/libs-type_traits-test.md) | 218 | 27.669s | 3.576× | 6.073× | 0.218s | 1.101× | 1.026× |
| [libs/uuid/test](suites/libs-uuid-test.md) | 80 | 13.498s | 3.996× | 3.590× | 0.130s | 1.051× | 0.951× |
| [libs/variant2/test](suites/libs-variant2-test.md) | 84 | 31.303s | 3.290× | 4.558× | 0.065s | 1.085× | 1.018× |
| [libs/xpressive/test](suites/libs-xpressive-test.md) | 51 | 58.330s | 5.225× | 4.394× | 0.107s | 1.102× | 0.996× |

Performance uses O3 with assertions enabled; the GDB test remains Og and is correctness-only.

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.038× | 1.036×, 1.040× | 1.004× |
| clang | 1.050× | 1.049×, 1.051× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

Exact commands, per-test times, native outcomes and toolchain/host identities are retained with the results.

[Shared comparison](standard/summary.md) · [Version-1 records](standard/records.json) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45710374989)
