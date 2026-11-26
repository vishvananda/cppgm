# Arm64 backend performance

Measured `d8c559893a923e5683c44df6cb98076271dd6f01` on Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0). [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45697047144)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.06× |
| Stanford/Bubblesort | 1.10× |
| Stanford/FloatMM | 3.13× |
| Stanford/Puzzle | 0.85× |
| Stanford/Treesort | 0.99× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.11× | 0.91× |
| calls | 1.01× | 1.06× |
| memory | 1.03× | 0.99× |
| vectors | 1.01× | 1.00× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0).

Measured compiler: d8c559893a923e5683c44df6cb98076271dd6f01.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 5.08× | 4.34× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 604.480 |
| Clang | 517.080 |
| GCC-built cppgm | 119.030 |
| Self-built cppgm | 121.330 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 118.076 | 119.434 | 0.99× |
| 2 | 120.884 | 121.632 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.986. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 117.215 | 118.618 | 0.99× |
| 2 | 121.511 | 120.085 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

## Native Arm application suites

All 81 public programs agree across cppgm, GCC and Clang. The three index-cpp binaries pass all 50 checksums.

| Suite | Measurement | vs GCC | vs Clang |
| --- | --- | ---: | ---: |
| Public programs | compile | 5.51× (77) | 4.89× (77) |
| Public programs | runtime | 1.07× (80) | 1.01× (80) |
| index-cpp | compile | 8.30× (50) | 7.21× (50) |
| index-cpp | runtime | 1.02× (50) | 1.03× (50) |

Counts show how many cases contributed to each speed ratio. The public suite omits timings below 10 ms. Public runtime uses CPU time. Index-cpp runtime uses elapsed time per workload. Both use paired observations.

[Per-case results, toolchain provenance and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45697047144)
