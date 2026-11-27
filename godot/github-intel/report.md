# Godot headless benchmarks

Compiler: `fc7c4523cba2e80b1a19ce5f207866232b207872` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 926.47 | 238.32 |
| gcc | 3894.84 | 983.61 |
| clang | 3087.90 | 792.13 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.097× | 1.015× | 1.100× | 1.016× |
| arrays | 0.994× | 1.037× | 0.994× | 1.040× |
| strings | 0.979× | 1.000× | 0.978× | 1.001× |
| geometry | 1.080× | 0.979× | 1.083× | 0.979× |
| scene | 1.054× | 1.029× | 1.056× | 1.032× |

A/A variation above 2%: strings clang cpu before: 0.891×; strings clang measured_wall before: 0.891×; scene gcc cpu before: 1.097×; scene gcc measured_wall before: 1.100×; scene clang cpu after: 1.045×; scene clang measured_wall after: 1.045×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.35 | 9.20 | 8.54 |
| arrays | 2.49 | 2.48 | 2.59 |
| strings | 41.09 | 39.94 | 41.01 |
| geometry | 5.87 | 6.36 | 5.75 |
| scene | 14.02 | 14.68 | 14.45 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.20 | 9.25 | -0.5% | `61c93cf80` | steady |
| arrays | GCC | 2.48 | 2.48 | -0.2% | `61c93cf80` | steady |
| strings | GCC | 39.94 | 40.03 | -0.2% | `61c93cf80` | steady |
| geometry | GCC | 6.36 | 6.38 | -0.3% | `61c93cf80` | steady |
| scene | GCC | 14.68 | 14.93 | -1.7% | `61c93cf80` | steady |
| dispatch | Clang | 8.54 | 8.59 | -0.6% | `61c93cf80` | steady |
| arrays | Clang | 2.59 | 2.59 | +0.1% | `61c93cf80` | steady |
| strings | Clang | 41.01 | 41.37 | -0.9% | `61c93cf80` | steady |
| geometry | Clang | 5.75 | 5.78 | -0.6% | `61c93cf80` | steady |
| scene | Clang | 14.45 | 14.59 | -1.0% | `61c93cf80` | steady |

## Toolchains

- cppgm: cppgm 0.11.5 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836)
