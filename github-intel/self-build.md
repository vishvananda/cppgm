# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`bf2f830a4`](https://github.com/vishvananda/cppgm/commit/bf2f830a479c21887e7ef6e44787b48dac78bf6d) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45651777895) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: bf2f830a479c21887e7ef6e44787b48dac78bf6d.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.25× | 3.77× |
| Self-built compiler speed | 0.99× | 1.02× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 665.160 |
| Clang | 590.780 |
| GCC-built cppgm | 156.660 |
| Self-built cppgm | 158.810 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 155.098 | 155.587 | 1.00× |
| 2 | 155.576 | 156.901 | 0.99× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.003. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 156.981 | 154.087 | 1.02× |
| 2 | 157.878 | 155.375 | 1.02× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 0.994. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
