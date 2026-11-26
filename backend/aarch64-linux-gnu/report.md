# Arm64 backend performance

Measured `dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6` on Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0). [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45710374989)

### Portable public benchmarks on aarch64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.06× |
| Stanford/Bubblesort | 1.10× |
| Stanford/FloatMM | 3.14× |
| Stanford/Puzzle | 0.86× |
| Stanford/Treesort | 0.98× |

The badge gives the geometric mean of the per-program CPU speedups.

### Native Arm64 kernel runtime

| Kernel | vs GCC O3 | vs Clang O3 |
| --- | ---: | ---: |
| lookup | 1.12× | 0.90× |
| calls | 1.03× | 1.07× |
| memory | 1.03× | 0.98× |
| vectors | 0.99× | 0.98× |

# Compiler build and codegen benchmarks

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Arm Neoverse N2 (implementer 0x41, part 0xd49, r0p0).

Measured compiler: dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6.

GCC: g++-14 (Ubuntu 14.3.0-14ubuntu1) 14.3.0.

Clang: Ubuntu clang version 22.1.2 (1ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 5.16× | 4.42× |
| Self-built compiler speed | 0.98× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 598.070 |
| Clang | 512.070 |
| GCC-built cppgm | 115.950 |
| Self-built cppgm | 119.830 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 114.286 | 117.020 | 0.98× |
| 2 | 113.838 | 116.155 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 116.951 | 116.456 | 1.00× |
| 2 | 115.212 | 116.313 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.011. A/A variation limits conclusions about small differences.

## Native Arm application suites

All 81 public programs agree across cppgm, GCC and Clang. The three index-cpp binaries pass all 50 checksums.

| Suite | Measurement | vs GCC | vs Clang |
| --- | --- | ---: | ---: |
| Public programs | compile | 5.46× (78) | 4.88× (78) |
| Public programs | runtime | 1.07× (80) | 1.01× (80) |
| index-cpp | compile | 8.35× (50) | 7.15× (50) |
| index-cpp | runtime | 0.99× (50) | 1.02× (50) |

Counts show how many cases contributed to each speed ratio. The public suite omits timings below 10 ms. Public runtime uses CPU time. Index-cpp runtime uses elapsed time per workload. Both use paired observations.

[Per-case results, toolchain provenance and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45710374989)
