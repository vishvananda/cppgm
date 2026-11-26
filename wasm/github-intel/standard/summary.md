# Correctness and performance

Speedup = reference time / cppgm time; higher is better. CPU and elapsed metrics are separate.
Each row keeps GCC and Clang separate for one phase and metric. Missing values are not passes or zeros.

Availability describes the supplied records; measurements from other reports may not have been imported.

| Workload / configuration | Optimization levels | Availability | Details |
|---|---|---|---|
| Internal compiler tests / Required assignment contracts | declared: mixed; recorded: none | not measured | TESTING_AND_REFERENCES.md |
| Internal compiler tests / Qualified C++ object overlap | declared: O0, O3; recorded: none | not measured | TESTING_AND_REFERENCES.md |
| GCC C++11 language tests / Source-reviewed language profile | declared: mixed; recorded: none | not measured | reports/cxx11-completion.txt |
| Clang C++11 language tests / Source-reviewed language profile | declared: mixed; recorded: none | not measured | reports/cxx11-completion.txt |
| Boost compilation and test execution / 17 C++11 suites at O3 with assertions; GDB correctness-only | declared: O3, mixed; recorded: none | not measured | benchmarks/boost/README.md |
| Boost compilation and test execution / Historical 17-suite C++11 debug campaigns | declared: O0, mixed; recorded: none | not measured | benchmarks/boost/README.md |
| Boost compilation and test execution / Historical correctness snapshots | declared: mixed; recorded: none | not measured | benchmarks/boost/README.md |
| Public benchmark suite / Declared public programs | declared: O0, O3; recorded: none | not measured | benchmarks/public/README.md |
| Build the compiler / Course build | declared: mixed; recorded: none | not measured | benchmarks/self_compile/README.md |
| cppgm code generation / Self-built versus host-built compiler | declared: mixed; recorded: none | not measured | benchmarks/self_compile/README.md |
| index-cpp / All 50 checksummed workloads | declared: O0, O2, O3; recorded: none | not measured | benchmarks/index_cpp/README.md |
| simdjson / Scalar fallback | declared: O3; recorded: none | not measured | benchmarks/simdjson/README.md |
| simdjson / SSE backend | declared: O3; recorded: none | not measured | benchmarks/simdjson/README.md |
| Godot build and benchmark / Full headless release and five checked GDScript workloads | declared: O3; recorded: none | not measured | benchmarks/godot/README.md |
| [Wasm32 portable kernels / Scalar source](wasm.md) | declared: O0, O1, O2, O3; recorded: O0, O3 | recorded | pa37/benchmarks/README.md |
| [Wasm32 portable kernels / Explicit SIMD128 source](wasm.md) | declared: O0, O1, O2, O3; recorded: O0, O3 | recorded | pa37/benchmarks/README.md |

## Correctness coverage

| Workload / configuration | Oracle | CPU / environment | Opt | Passed / executed / selected | Excluded | Status | Revision |
|---|---|---|---|---|---|---|---|
| [wasm/scalar](wasm.md) | Independent Perl arithmetic, seeded edge cases and cross-compiler checksums | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz / GitHub hosted; Ubuntu 26.04 container | O0 | 64 / 64 / 64 independent oracle cases | 0 | passed | dc54668b7 |
| [wasm/simd128](wasm.md) | Independent Perl arithmetic, seeded edge cases and cross-compiler checksums | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz / GitHub hosted; Ubuntu 26.04 container | O0 | 64 / 64 / 64 independent oracle cases | 0 | passed | dc54668b7 |
| [wasm/scalar](wasm.md) | Independent Perl arithmetic, seeded edge cases and cross-compiler checksums | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz / GitHub hosted; Ubuntu 26.04 container | O3 | 64 / 64 / 64 independent oracle cases | 0 | passed | dc54668b7 |
| [wasm/simd128](wasm.md) | Independent Perl arithmetic, seeded edge cases and cross-compiler checksums | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz / GitHub hosted; Ubuntu 26.04 container | O3 | 64 / 64 / 64 independent oracle cases | 0 | passed | dc54668b7 |

## Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz — GitHub hosted; Ubuntu 26.04 container

Architecture: x86_64; host profile `wasm-c09a272f0c5a1f55`.

| Workload / configuration / test | Opt | Phase / metric | vs GCC | vs Clang | Validation | Case set | Revision |
|---|---|---|---:|---:|---|---|---|
| [wasm/scalar/checked-workloads](wasm.md) | O0 | runtime / cpu_seconds | not-applicable | 0.951× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/checked-workloads](wasm.md) | O0 | runtime / elapsed_seconds | not-applicable | 0.951× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/checked-workloads](wasm.md) | O3 | runtime / cpu_seconds | not-applicable | 1.106× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/checked-workloads](wasm.md) | O3 | runtime / elapsed_seconds | not-applicable | 1.106× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/instantiation-and-start](wasm.md) | O0 | startup / elapsed_seconds | not-applicable | 0.896× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/instantiation-and-start](wasm.md) | O3 | startup / elapsed_seconds | not-applicable | 0.950× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/module-size](wasm.md) | O0 | link / bytes | not-applicable | 0.641× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/module-size](wasm.md) | O3 | link / bytes | not-applicable | 0.664× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O0 | compile / cpu_seconds | not-applicable | 3.110× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O0 | compile / elapsed_seconds | not-applicable | 3.112× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O0 | link / cpu_seconds | not-applicable | 1.224× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O0 | link / elapsed_seconds | not-applicable | 1.216× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O3 | compile / cpu_seconds | not-applicable | 8.375× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O3 | compile / elapsed_seconds | not-applicable | 8.298× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O3 | link / cpu_seconds | not-applicable | 1.226× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/scalar/one-translation-unit](wasm.md) | O3 | link / elapsed_seconds | not-applicable | 1.217× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/checked-workloads](wasm.md) | O0 | runtime / cpu_seconds | not-applicable | 0.949× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/checked-workloads](wasm.md) | O0 | runtime / elapsed_seconds | not-applicable | 0.949× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/checked-workloads](wasm.md) | O3 | runtime / cpu_seconds | not-applicable | 1.041× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/checked-workloads](wasm.md) | O3 | runtime / elapsed_seconds | not-applicable | 1.042× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/instantiation-and-start](wasm.md) | O0 | startup / elapsed_seconds | not-applicable | 0.964× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/instantiation-and-start](wasm.md) | O3 | startup / elapsed_seconds | not-applicable | 0.983× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/module-size](wasm.md) | O0 | link / bytes | not-applicable | 0.600× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/module-size](wasm.md) | O3 | link / bytes | not-applicable | 0.617× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O0 | compile / cpu_seconds | not-applicable | 3.101× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O0 | compile / elapsed_seconds | not-applicable | 3.072× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O0 | link / cpu_seconds | not-applicable | 1.222× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O0 | link / elapsed_seconds | not-applicable | 1.220× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O3 | compile / cpu_seconds | not-applicable | 8.187× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O3 | compile / elapsed_seconds | not-applicable | 8.104× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O3 | link / cpu_seconds | not-applicable | 1.267× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
| [wasm/simd128/one-translation-unit](wasm.md) | O3 | link / elapsed_seconds | not-applicable | 1.261× | clang: 64/64 cppgm, 64/64 reference; gcc: not-applicable | 64 independent oracle cases; set e6ee71a3 | `dc54668b7` |
