# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`49adadaef`](https://github.com/vishvananda/cppgm/commit/49adadaefcc6510c6c725be8d3c780b397e68bc5) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45739944580) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V45 96-Core Processor.

Measured compiler: 49adadaefcc6510c6c725be8d3c780b397e68bc5.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.11× | 3.74× |
| Self-built compiler speed | 0.99× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 651.330 |
| Clang | 591.510 |
| GCC-built cppgm | 158.320 |
| Self-built cppgm | 162.130 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 160.546 | 160.081 | 1.00× |
| 2 | 161.003 | 163.573 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.993. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 162.512 | 163.434 | 0.99× |
| 2 | 161.417 | 162.537 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.991. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
