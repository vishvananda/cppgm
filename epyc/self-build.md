# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`80079d548`](https://github.com/vishvananda/cppgm/commit/80079d548d66a02401ca1238a27cd7ff792c6d93) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45272062060) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V45 96-Core Processor.

Measured compiler: 80079d548d66a02401ca1238a27cd7ff792c6d93.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.00× | 3.66× |
| Self-built compiler speed | 1.00× | 0.99× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 527.440 |
| Clang | 481.570 |
| GCC-built cppgm | 131.720 |
| Self-built cppgm | 134.920 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 131.260 | 132.575 | 0.99× |
| 2 | 131.170 | 129.974 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.979. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 129.441 | 130.996 | 0.99× |
| 2 | 126.973 | 127.520 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.993. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
