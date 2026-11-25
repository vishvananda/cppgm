# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`7584274b4`](https://github.com/vishvananda/cppgm/commit/7584274b4d275fb41f7c5d064e751e5918e8e421) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45617981312) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 7584274b4d275fb41f7c5d064e751e5918e8e421.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.20× | 3.81× |
| Self-built compiler speed | 0.99× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 669.350 |
| Clang | 608.170 |
| GCC-built cppgm | 159.530 |
| Self-built cppgm | 163.690 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 156.181 | 156.808 | 1.00× |
| 2 | 158.179 | 160.413 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.006. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 161.665 | 159.594 | 1.01× |
| 2 | 162.922 | 162.443 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.009. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
