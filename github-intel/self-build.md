# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`6d363dd28`](https://github.com/vishvananda/cppgm/commit/6d363dd28d9982fdbb0539bf97dab4f17cfbe369) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44686728157) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

Measured compiler: 6d363dd28d9982fdbb0539bf97dab4f17cfbe369.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.21× | 3.81× |
| Self-built compiler speed | 1.00× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 626.130 |
| Clang | 566.840 |
| GCC-built cppgm | 148.610 |
| Self-built cppgm | 151.540 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 154.476 | 154.510 | 1.00× |
| 2 | 154.747 | 153.307 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 150.817 | 151.237 | 1.00× |
| 2 | 152.040 | 149.941 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.989. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
