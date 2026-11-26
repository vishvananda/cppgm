# Compiler build and codegen benchmarks: AMD EPYC

Measured compiler: [`dc54668b7`](https://github.com/vishvananda/cppgm/commit/dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45710374989) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: AMD EPYC 9V74 80-Core Processor.

Measured compiler: dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 3.88× | 3.97× |
| Self-built compiler speed | 0.99× | 1.01× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 718.680 |
| Clang | 735.210 |
| GCC-built cppgm | 185.380 |
| Self-built cppgm | 187.510 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 183.887 | 185.192 | 0.99× |
| 2 | 183.994 | 185.568 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 188.273 | 186.048 | 1.01× |
| 2 | 187.693 | 185.619 | 1.01× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.998. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
