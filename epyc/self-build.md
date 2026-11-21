# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`0e83e16cf`](https://github.com/vishvananda/cppgm/commit/0e83e16cfc2b07812fd972ecb73cd95be4783dad) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44830361139) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: 0e83e16cfc2b07812fd972ecb73cd95be4783dad.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.18× | 4.23× |
| Self-built compiler speed | 1.00× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 684.320 |
| Clang | 692.780 |
| GCC-built cppgm | 163.850 |
| Self-built cppgm | 170.180 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 170.213 | 167.758 | 1.01× |
| 2 | 170.427 | 171.830 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.020. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 169.441 | 166.755 | 1.02× |
| 2 | 170.814 | 171.207 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.982. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
