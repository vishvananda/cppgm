# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`56c86f755`](https://github.com/vishvananda/cppgm/commit/56c86f755ec2b56e235b3f5e5ff76e6d147c3f93) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44612055398) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 56c86f755ec2b56e235b3f5e5ff76e6d147c3f93.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.22× | 3.81× |
| Self-built compiler speed | 0.99× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 548.270 |
| Clang | 495.040 |
| GCC-built cppgm | 129.830 |
| Self-built cppgm | 134.160 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 131.810 | 132.882 | 0.99× |
| 2 | 134.092 | 134.686 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 131.353 | 130.185 | 1.01× |
| 2 | 130.676 | 130.949 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.996. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
