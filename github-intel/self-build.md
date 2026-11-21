# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`b3e8ffd61`](https://github.com/vishvananda/cppgm/commit/b3e8ffd61d008c80042a09444d6d607c4b7d7f0c) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44818861403) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: b3e8ffd61d008c80042a09444d6d607c4b7d7f0c.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.17× | 3.81× |
| Self-built compiler speed | 0.98× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 559.690 |
| Clang | 511.450 |
| GCC-built cppgm | 134.290 |
| Self-built cppgm | 133.930 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 132.386 | 134.534 | 0.98× |
| 2 | 131.971 | 134.352 | 0.98× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 135.291 | 133.774 | 1.01× |
| 2 | 136.208 | 134.824 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.002. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
