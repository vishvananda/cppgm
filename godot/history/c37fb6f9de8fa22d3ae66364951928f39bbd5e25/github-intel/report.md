# Godot headless benchmarks

Compiler: `c37fb6f9de8fa22d3ae66364951928f39bbd5e25` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 863.62 | 221.88 |
| gcc | 3665.46 | 923.98 |
| clang | 2949.29 | 751.98 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.099× | 1.027× | 1.102× | 1.029× |
| arrays | 0.994× | 1.033× | 0.994× | 1.034× |
| strings | 0.972× | 0.999× | 0.972× | 1.000× |
| geometry | 1.080× | 0.978× | 1.082× | 0.978× |
| scene | 1.056× | 1.033× | 1.057× | 1.035× |

A/A variation above 2%: scene clang cpu before: 0.978×; scene clang measured_wall before: 0.977×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.35 | 9.20 | 8.56 |
| arrays | 2.49 | 2.47 | 2.59 |
| strings | 40.88 | 39.85 | 40.99 |
| geometry | 5.86 | 6.33 | 5.73 |
| scene | 13.99 | 14.67 | 14.51 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.20 | 9.20 | +0.0% | `fc7c4523c` | steady |
| arrays | GCC | 2.47 | 2.48 | -0.3% | `fc7c4523c` | steady |
| strings | GCC | 39.85 | 39.94 | -0.2% | `fc7c4523c` | steady |
| geometry | GCC | 6.33 | 6.36 | -0.4% | `fc7c4523c` | steady |
| scene | GCC | 14.67 | 14.68 | -0.0% | `fc7c4523c` | steady |
| dispatch | Clang | 8.56 | 8.54 | +0.3% | `fc7c4523c` | steady |
| arrays | Clang | 2.59 | 2.59 | -0.2% | `fc7c4523c` | steady |
| strings | Clang | 40.99 | 41.01 | -0.0% | `fc7c4523c` | steady |
| geometry | Clang | 5.73 | 5.75 | -0.2% | `fc7c4523c` | steady |
| scene | Clang | 14.51 | 14.45 | +0.4% | `fc7c4523c` | steady |

## Toolchains

- cppgm: cppgm 0.12.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956)
