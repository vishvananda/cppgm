# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`7bc2ee420`](https://github.com/vishvananda/cppgm/commit/7bc2ee42070147be1668ff16a16841c6e02b47e3) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44927958294) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 7bc2ee42070147be1668ff16a16841c6e02b47e3.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.24× | 3.84× |
| Self-built compiler speed | 1.00× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 577.470 |
| Clang | 523.540 |
| GCC-built cppgm | 136.180 |
| Self-built cppgm | 137.660 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 134.944 | 134.653 | 1.00× |
| 2 | 135.445 | 135.977 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.992. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 135.554 | 133.400 | 1.02× |
| 2 | 135.262 | 133.940 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.006. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
