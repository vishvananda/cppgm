# Arm64 backend performance

Measured `61c93cf80bbefb800c9a2a397bacf09b138c2ed3` on Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0). [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45754596224)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.05× |
| Stanford/Bubblesort | 1.10× |
| Stanford/FloatMM | 3.13× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 0.97× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.10× | 0.88× |
| calls | 1.04× | 1.09× |
| memory | 1.03× | 0.98× |
| vectors | 1.00× | 0.98× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0).

Measured compiler: 61c93cf80bbefb800c9a2a397bacf09b138c2ed3.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 5.22× | 4.53× |
| Self-built compiler speed | 0.98× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 628.380 |
| Clang | 545.070 |
| GCC-built cppgm | 120.320 |
| Self-built cppgm | 126.930 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 123.947 | 125.980 | 0.98× |
| 2 | 124.098 | 126.142 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 120.972 | 122.422 | 0.99× |
| 2 | 121.617 | 122.414 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

## Native Arm application suites

All 81 public programs agree across cppgm, GCC and Clang. The three index-cpp binaries pass all 50 checksums.

| Suite | Measurement | vs GCC | vs Clang |
| --- | --- | ---: | ---: |
| Public programs | compile | 5.54× (78) | 4.97× (78) |
| Public programs | runtime | 1.07× (80) | 1.01× (80) |
| index-cpp | compile | 8.23× (50) | 7.06× (50) |
| index-cpp | runtime | 1.01× (50) | 1.02× (50) |

Counts show how many cases contributed to each speed ratio. The public suite omits timings below 10 ms. Public runtime uses CPU time. Index-cpp runtime uses elapsed time per workload. Both use paired observations.

[Per-case results, toolchain provenance and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45754596224)
