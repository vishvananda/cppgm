# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`0eb0fe355`](https://github.com/vishvananda/cppgm/commit/0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44801983152) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.21× | 3.86× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 563.950 |
| Clang | 517.150 |
| GCC-built cppgm | 133.990 |
| Self-built cppgm | 136.670 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 134.607 | 135.665 | 0.99× |
| 2 | 133.131 | 134.070 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.005. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 137.771 | 138.322 | 1.00× |
| 2 | 139.617 | 139.212 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.004. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
