# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`f14c300df`](https://github.com/vishvananda/cppgm/commit/f14c300df24c805416e28f06d41b201a035b60c7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44743598642) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 7763 64-Core Processor.

Measured compiler: f14c300df24c805416e28f06d41b201a035b60c7.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.06× | 4.32× |
| Self-built compiler speed | 0.99× | 1.05× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 927.640 |
| Clang | 988.490 |
| GCC-built cppgm | 228.640 |
| Self-built cppgm | 221.170 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 208.502 | 212.905 | 0.98× |
| 2 | 208.148 | 209.976 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.994. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 216.590 | 210.889 | 1.03× |
| 2 | 246.065 | 229.060 | 1.07× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.025. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
