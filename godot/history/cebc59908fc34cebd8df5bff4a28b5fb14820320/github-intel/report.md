# Godot headless benchmarks

Compiler: `cebc59908fc34cebd8df5bff4a28b5fb14820320` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 907.44 | 232.90 |
| gcc | 3797.99 | 958.46 |
| clang | 3024.22 | 773.06 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.104× | 1.041× | 1.107× | 1.043× |
| arrays | 0.993× | 1.024× | 0.993× | 1.025× |
| strings | 0.974× | 0.994× | 0.973× | 0.995× |
| geometry | 1.078× | 0.977× | 1.081× | 0.978× |
| scene | 1.056× | 1.032× | 1.058× | 1.033× |

A/A variation above 2%: dispatch gcc cpu after: 0.967×; dispatch gcc measured_wall after: 0.966×; arrays clang cpu after: 1.158×; arrays clang measured_wall after: 1.162×; scene clang cpu before: 0.978×; scene clang cpu after: 1.024×; scene clang measured_wall before: 0.977×; scene clang measured_wall after: 1.025×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.41 | 9.27 | 8.63 |
| arrays | 2.51 | 2.49 | 2.59 |
| strings | 41.21 | 40.14 | 41.16 |
| geometry | 5.90 | 6.40 | 5.77 |
| scene | 14.17 | 14.80 | 14.59 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.27 | 9.20 | +0.7% | `c37fb6f9d` | steady |
| arrays | GCC | 2.49 | 2.47 | +0.8% | `c37fb6f9d` | steady |
| strings | GCC | 40.14 | 39.85 | +0.7% | `c37fb6f9d` | steady |
| geometry | GCC | 6.40 | 6.33 | +1.0% | `c37fb6f9d` | steady |
| scene | GCC | 14.80 | 14.67 | +0.9% | `c37fb6f9d` | steady |
| dispatch | Clang | 8.63 | 8.56 | +0.8% | `c37fb6f9d` | steady |
| arrays | Clang | 2.59 | 2.59 | +0.3% | `c37fb6f9d` | steady |
| strings | Clang | 41.16 | 40.99 | +0.4% | `c37fb6f9d` | steady |
| geometry | Clang | 5.77 | 5.73 | +0.7% | `c37fb6f9d` | steady |
| scene | Clang | 14.59 | 14.51 | +0.5% | `c37fb6f9d` | steady |

## Toolchains

- cppgm: cppgm 0.13.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613)
