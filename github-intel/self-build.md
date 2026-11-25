# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`d8c559893`](https://github.com/vishvananda/cppgm/commit/d8c559893a923e5683c44df6cb98076271dd6f01) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45697047144) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

Measured compiler: d8c559893a923e5683c44df6cb98076271dd6f01.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.27× | 3.72× |
| Self-built compiler speed | 0.99× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 921.820 |
| Clang | 801.720 |
| GCC-built cppgm | 215.790 |
| Self-built cppgm | 216.510 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 217.165 | 219.835 | 0.99× |
| 2 | 214.300 | 216.242 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.994. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 220.635 | 218.628 | 1.01× |
| 2 | 220.987 | 216.792 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
