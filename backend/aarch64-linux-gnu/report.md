# Arm64 backend performance

Measured `f4ee6ed21703be4d5350c45f5d8ed33dc706c992` on aarch64. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44667760294)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.02× |
| Stanford/Bubblesort | 0.85× |
| Stanford/FloatMM | 2.55× |
| Stanford/Puzzle | 1.31× |
| Stanford/Treesort | 0.93× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.16× | 0.91× |
| calls | 0.85× | 0.89× |
| memory | 1.02× | 0.98× |
| vectors | 1.00× | 0.96× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: None.

Measured compiler: f4ee6ed21703be4d5350c45f5d8ed33dc706c992.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 5.10× | 4.42× |
| Self-built compiler speed | 0.96× | 0.96× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 512.770 |
| Clang | 443.930 |
| GCC-built cppgm | 100.500 |
| Self-built cppgm | 105.770 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 101.206 | 104.910 | 0.96× |
| 2 | 99.460 | 103.070 | 0.96× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 99.643 | 104.469 | 0.95× |
| 2 | 101.412 | 104.547 | 0.97× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

## Native Arm application suites

All 81 public programs agree across cppgm, GCC and Clang. The three index-cpp binaries pass all 50 checksums.

| Suite | Measurement | vs GCC | vs Clang |
| --- | --- | ---: | ---: |
| Public programs | compile | 5.71× (77) | 5.06× (77) |
| Public programs | runtime | 1.03× (80) | 0.98× (80) |
| index-cpp | compile | 8.40× (50) | 7.30× (50) |
| index-cpp | runtime | 0.98× (50) | 0.97× (50) |

Counts show how many cases contributed to each speed ratio. The public suite omits timings below 10 ms. Public runtime uses CPU time. Index-cpp runtime uses elapsed time per workload. Both use paired observations.

[Per-case results, toolchain provenance and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44667760294)
