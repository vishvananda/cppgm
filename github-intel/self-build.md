# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`44d3c4a29`](https://github.com/vishvananda/cppgm/commit/44d3c4a29971caff2cc064889ec96259f34e7504) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44815881069) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 44d3c4a29971caff2cc064889ec96259f34e7504.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.20× | 3.85× |
| Self-built compiler speed | 1.00× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 566.400 |
| Clang | 519.280 |
| GCC-built cppgm | 134.730 |
| Self-built cppgm | 135.210 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 136.237 | 137.024 | 0.99× |
| 2 | 138.942 | 138.781 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 139.729 | 139.333 | 1.00× |
| 2 | 138.587 | 138.546 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
