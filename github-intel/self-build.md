# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`cc79604cd`](https://github.com/vishvananda/cppgm/commit/cc79604cdc196d46abdebb888158e8b90d3cac52) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45241427099) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz.

Measured compiler: cc79604cdc196d46abdebb888158e8b90d3cac52.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.26× | 4.01× |
| Self-built compiler speed | 1.01× | 1.02× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 845.250 |
| Clang | 795.070 |
| GCC-built cppgm | 198.230 |
| Self-built cppgm | 198.720 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 198.803 | 197.399 | 1.01× |
| 2 | 198.594 | 197.777 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 200.798 | 197.694 | 1.02× |
| 2 | 201.016 | 197.033 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
