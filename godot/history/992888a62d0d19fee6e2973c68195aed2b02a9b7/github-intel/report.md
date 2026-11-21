# Godot headless benchmarks

Compiler: `992888a62d0d19fee6e2973c68195aed2b02a9b7` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 876.69 | 224.96 |
| gcc | 3657.15 | 922.00 |
| clang | 2928.54 | 745.49 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.072× | 1.002× | 1.074× | 1.003× |
| arrays | 0.992× | 1.028× | 0.992× | 1.030× |
| strings | 0.977× | 1.001× | 0.976× | 1.002× |
| geometry | 0.998× | 0.906× | 0.998× | 0.904× |
| scene | 1.010× | 1.016× | 1.010× | 1.018× |

A/A variation above 2%: dispatch gcc cpu before: 1.103×; dispatch gcc measured_wall before: 1.106×; geometry gcc cpu before: 0.971×; geometry gcc measured_wall before: 0.971×; scene gcc cpu after: 1.044×; scene gcc measured_wall after: 1.045×; scene clang cpu before: 1.036×; scene clang cpu after: 0.980×; scene clang measured_wall before: 1.037×; scene clang measured_wall after: 0.979×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.54 | 9.23 | 8.51 |
| arrays | 2.49 | 2.47 | 2.55 |
| strings | 40.91 | 39.89 | 41.03 |
| geometry | 6.34 | 6.35 | 5.75 |
| scene | 14.51 | 14.74 | 14.48 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.23 | - | - | - | no earlier run (4 earlier without time per pass) |
| arrays | GCC | 2.47 | - | - | - | no earlier run (4 earlier without time per pass) |
| strings | GCC | 39.89 | - | - | - | no earlier run (4 earlier without time per pass) |
| geometry | GCC | 6.35 | - | - | - | no earlier run (4 earlier without time per pass) |
| scene | GCC | 14.74 | - | - | - | no earlier run (4 earlier without time per pass) |
| dispatch | Clang | 8.51 | - | - | - | no earlier run (4 earlier without time per pass) |
| arrays | Clang | 2.55 | - | - | - | no earlier run (4 earlier without time per pass) |
| strings | Clang | 41.03 | - | - | - | no earlier run (4 earlier without time per pass) |
| geometry | Clang | 5.75 | - | - | - | no earlier run (4 earlier without time per pass) |
| scene | Clang | 14.48 | - | - | - | no earlier run (4 earlier without time per pass) |

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235)
