# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`4ff958f6f`](https://github.com/vishvananda/cppgm/commit/4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45850603565) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 7763 64-Core Processor.

Measured compiler: 4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.91× | 4.27× |
| Self-built compiler speed | 1.00× | 1.02× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 1,043.180 |
| Clang | 1,138.610 |
| GCC-built cppgm | 266.700 |
| Self-built cppgm | 266.350 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 262.103 | 263.011 | 1.00× |
| 2 | 260.962 | 260.598 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.005. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 263.887 | 261.611 | 1.01× |
| 2 | 271.183 | 263.420 | 1.03× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.015. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
