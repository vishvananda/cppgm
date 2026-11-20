# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`0bf4bdfe0`](https://github.com/vishvananda/cppgm/commit/0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44774088589) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.20× | 3.83× |
| Self-built compiler speed | 0.99× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 576.470 |
| Clang | 525.760 |
| GCC-built cppgm | 137.160 |
| Self-built cppgm | 138.780 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 136.671 | 137.294 | 1.00× |
| 2 | 136.505 | 137.914 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.008. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 137.260 | 136.464 | 1.01× |
| 2 | 137.138 | 135.564 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.994. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
