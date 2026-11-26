# Godot headless benchmarks

Compiler: `49adadaefcc6510c6c725be8d3c780b397e68bc5` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 894.20 | 229.54 |
| gcc | 3710.67 | 935.64 |
| clang | 3013.28 | 768.49 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.153× | 1.024× | 1.158× | 1.025× |
| arrays | 0.991× | 1.033× | 0.991× | 1.035× |
| strings | 0.957× | 1.004× | 0.956× | 1.005× |
| geometry | 1.083× | 0.979× | 1.086× | 0.979× |
| scene | 1.053× | 1.035× | 1.054× | 1.036× |

A/A variation above 2%: dispatch clang cpu before: 1.043×; dispatch clang measured_wall before: 1.044×; scene clang cpu before: 0.966×; scene clang measured_wall before: 0.966×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.40 | 9.30 | 8.62 |
| arrays | 2.52 | 2.50 | 2.60 |
| strings | 41.26 | 40.10 | 41.38 |
| geometry | 5.93 | 6.43 | 5.80 |
| scene | 14.11 | 14.72 | 14.64 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.30 | 9.21 | +1.0% | `dc54668b7` | steady |
| arrays | GCC | 2.50 | 2.49 | +0.4% | `dc54668b7` | steady |
| strings | GCC | 40.10 | 40.03 | +0.2% | `dc54668b7` | steady |
| geometry | GCC | 6.43 | 6.41 | +0.4% | `dc54668b7` | steady |
| scene | GCC | 14.72 | 14.76 | -0.3% | `dc54668b7` | steady |
| dispatch | Clang | 8.62 | 8.56 | +0.6% | `dc54668b7` | steady |
| arrays | Clang | 2.60 | 2.59 | +0.5% | `dc54668b7` | steady |
| strings | Clang | 41.38 | 41.12 | +0.7% | `dc54668b7` | steady |
| geometry | Clang | 5.80 | 5.79 | +0.2% | `dc54668b7` | steady |
| scene | Clang | 14.64 | 14.72 | -0.5% | `dc54668b7` | steady |

## Toolchains

- cppgm: cppgm 0.11.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580)
