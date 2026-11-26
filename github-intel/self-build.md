# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`4ff958f6f`](https://github.com/vishvananda/cppgm/commit/4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45790989032) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz.

Measured compiler: 4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.20× | 3.95× |
| Self-built compiler speed | 0.99× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 1,014.440 |
| Clang | 953.810 |
| GCC-built cppgm | 241.600 |
| Self-built cppgm | 244.610 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 240.583 | 242.867 | 0.99× |
| 2 | 241.208 | 242.531 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 247.076 | 243.485 | 1.01× |
| 2 | 246.550 | 242.870 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
