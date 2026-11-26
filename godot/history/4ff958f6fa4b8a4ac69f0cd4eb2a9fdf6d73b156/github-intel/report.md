# Godot headless benchmarks

Compiler: `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 862.32 | 221.46 |
| gcc | 3691.46 | 930.88 |
| clang | 2910.63 | 741.15 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.100× | 1.026× | 1.103× | 1.028× |
| arrays | 0.995× | 1.035× | 0.995× | 1.037× |
| strings | 0.977× | 1.001× | 0.976× | 1.002× |
| geometry | 1.078× | 0.979× | 1.080× | 0.978× |
| scene | 1.065× | 1.025× | 1.066× | 1.026× |

A/A variation above 2%: dispatch gcc cpu after: 1.061×; dispatch gcc measured_wall after: 1.062×; dispatch clang cpu before: 1.095×; dispatch clang measured_wall before: 1.097×; strings gcc cpu after: 0.972×; strings gcc measured_wall after: 0.972×; scene gcc cpu after: 0.958×; scene gcc measured_wall after: 0.957×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.35 | 9.20 | 8.54 |
| arrays | 2.49 | 2.48 | 2.59 |
| strings | 40.94 | 39.89 | 41.02 |
| geometry | 5.86 | 6.34 | 5.74 |
| scene | 14.00 | 15.07 | 14.43 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.20 | 9.25 | -0.5% | `61c93cf80` | steady |
| arrays | GCC | 2.48 | 2.48 | -0.3% | `61c93cf80` | steady |
| strings | GCC | 39.89 | 40.03 | -0.3% | `61c93cf80` | steady |
| geometry | GCC | 6.34 | 6.38 | -0.6% | `61c93cf80` | steady |
| scene | GCC | 15.07 | 14.93 | +1.0% | `61c93cf80` | steady |
| dispatch | Clang | 8.54 | 8.59 | -0.6% | `61c93cf80` | steady |
| arrays | Clang | 2.59 | 2.59 | +0.2% | `61c93cf80` | steady |
| strings | Clang | 41.02 | 41.37 | -0.8% | `61c93cf80` | steady |
| geometry | Clang | 5.74 | 5.78 | -0.6% | `61c93cf80` | steady |
| scene | Clang | 14.43 | 14.59 | -1.1% | `61c93cf80` | steady |

## Toolchains

- cppgm: cppgm 0.11.4 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032)
