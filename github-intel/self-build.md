# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`f4ee6ed21`](https://github.com/vishvananda/cppgm/commit/f4ee6ed21703be4d5350c45f5d8ed33dc706c992) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44667760294) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: f4ee6ed21703be4d5350c45f5d8ed33dc706c992.

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
| GCC | 547.070 |
| Clang | 493.600 |
| GCC-built cppgm | 129.690 |
| Self-built cppgm | 131.820 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 130.992 | 133.474 | 0.98× |
| 2 | 128.114 | 129.339 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.006. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 130.173 | 130.416 | 1.00× |
| 2 | 131.072 | 131.072 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.992. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
