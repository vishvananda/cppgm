# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`61c93cf80`](https://github.com/vishvananda/cppgm/commit/61c93cf80bbefb800c9a2a397bacf09b138c2ed3) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45754596224) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 7763 64-Core Processor.

Measured compiler: 61c93cf80bbefb800c9a2a397bacf09b138c2ed3.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.91× | 4.40× |
| Self-built compiler speed | 1.00× | 1.02× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 986.190 |
| Clang | 1,109.930 |
| GCC-built cppgm | 252.540 |
| Self-built cppgm | 253.170 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 252.524 | 251.057 | 1.01× |
| 2 | 251.924 | 251.010 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 256.644 | 252.353 | 1.02× |
| 2 | 257.489 | 251.439 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
