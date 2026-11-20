# Compiler build and codegen benchmarks: Intel (GitHub)

Measured compiler: [`94aaecc52`](https://github.com/vishvananda/cppgm/commit/94aaecc52ac26996bd3d654522334e3c28c68457) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44656576225) · [Raw rebuild results](selfhost.json)

Speed is reference CPU time divided by cppgm CPU time; higher is better.

CPU: Intel(R) Xeon(R) 6975P-C.

Measured compiler: 94aaecc52ac26996bd3d654522334e3c28c68457.

GCC: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0.

Clang: Ubuntu clang version 21.1.8 (6ubuntu1).

Build jobs: 4.

| Measure | vs GCC ↑ | vs Clang ↑ |
| --- | ---: | ---: |
| Building cppgm | 4.18× | 3.74× |
| Self-built compiler speed | 1.00× | 1.00× |

Building cppgm compares toolchains compiling the same sources. Self-built compiler speed compares fixed native-built and self-built cppgm binaries rebuilding identical inputs in paired ABBA/BAAB blocks. Every rebuild must produce identical objects and compiler binaries.

### Building the compiler

| Compiler doing the rebuild | CPU seconds |
| --- | ---: |
| GCC | 545.660 |
| Clang | 488.020 |
| GCC-built cppgm | 130.400 |
| Self-built cppgm | 131.620 |

These are the initial bootstrap builds. GCC and Clang are each measured once.

#### Paired self-built compiler measurements

| Block | GCC-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 130.023 | 129.766 | 1.00× |
| 2 | 129.490 | 129.864 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

GCC-built A/A CPU ratio: 1.010. A/A variation limits conclusions about small differences.

#### Paired codegen measurements vs Clang-built compiler

| Block | Clang-built cppgm (s) | Self-built cppgm (s) | Self-built speed ↑ |
| ---: | ---: | ---: | ---: |
| 1 | 132.048 | 131.601 | 1.00× |
| 2 | 131.204 | 130.600 | 1.00× |

Each block averages its two observations per compiler. The badge uses the median block ratio; calibration and every observation are retained in the raw results.

Clang-built A/A CPU ratio: 1.000. A/A variation limits conclusions about small differences.

[Public program results](report.md) have their own measured revision.
