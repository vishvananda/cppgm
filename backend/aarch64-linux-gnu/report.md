# Arm64 backend performance

Measured `cc79604cdc196d46abdebb888158e8b90d3cac52` on Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0). [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45241427099)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.05× |
| Stanford/Bubblesort | 1.11× |
| Stanford/FloatMM | 3.14× |
| Stanford/Puzzle | 0.86× |
| Stanford/Treesort | 0.98× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.11× | 0.91× |
| calls | 1.05× | 1.08× |
| memory | 1.03× | 0.98× |
| vectors | 1.00× | 0.97× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0).

Measured compiler: cc79604cdc196d46abdebb888158e8b90d3cac52.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 5.03× | 4.41× |
| Self-built compiler speed | 0.99× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 534.660 |
| Clang | 468.840 |
| GCC-built cppgm | 106.230 |
| Self-built cppgm | 108.230 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 105.374 | 106.672 | 0.99× |
| 2 | 105.498 | 106.028 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.005. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 104.594 | 105.950 | 0.99× |
| 2 | 104.905 | 105.695 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.997. A/A variation limits conclusions about small differences.

## Native Arm application suites

All 81 public programs agree across cppgm, GCC and Clang. The three index-cpp binaries pass all 50 checksums.

| Suite | Measurement | vs GCC | vs Clang |
| --- | --- | ---: | ---: |
| Public programs | compile | 5.67× (78) | 5.05× (78) |
| Public programs | runtime | 1.07× (80) | 1.01× (80) |
| index-cpp | compile | 8.35× (50) | 7.00× (50) |
| index-cpp | runtime | 1.02× (50) | 1.03× (50) |

Counts show how many cases contributed to each speed ratio. The public suite omits timings below 10 ms. Public runtime uses CPU time. Index-cpp runtime uses elapsed time per workload. Both use paired observations.

[Per-case results, toolchain provenance and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45241427099)
