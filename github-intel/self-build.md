# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`dbbd227db`](https://github.com/vishvananda/cppgm/commit/dbbd227db37c255596e3fc11a4d3df8700ea7be7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44922642903) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: dbbd227db37c255596e3fc11a4d3df8700ea7be7.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.19× | 3.84× |
| Self-built compiler speed | 0.99× | 1.02× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 587.750 |
| Clang | 539.470 |
| GCC-built cppgm | 140.320 |
| Self-built cppgm | 142.440 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 138.126 | 138.304 | 1.00× |
| 2 | 133.932 | 135.152 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 0.999. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 143.640 | 141.773 | 1.01× |
| 2 | 144.193 | 141.748 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.005. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
