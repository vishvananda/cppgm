# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`992888a62`](https://github.com/vishvananda/cppgm/commit/992888a62d0d19fee6e2973c68195aed2b02a9b7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44813597235) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V45 96-Core Processor.

Measured compiler: 992888a62d0d19fee6e2973c68195aed2b02a9b7.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.85× | 3.77× |
| Self-built compiler speed | 0.96× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 476.020 |
| Clang | 465.750 |
| GCC-built cppgm | 123.690 |
| Self-built cppgm | 124.590 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 119.831 | 126.593 | 0.95× |
| 2 | 125.045 | 127.278 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.012. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 127.683 | 127.176 | 1.00× |
| 2 | 124.296 | 126.205 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.001. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
