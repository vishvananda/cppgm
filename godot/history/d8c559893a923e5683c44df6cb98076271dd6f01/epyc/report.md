# Godot headless benchmarks

Compiler: `d8c559893a923e5683c44df6cb98076271dd6f01` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1414.89 | 363.55 |
| gcc | 5608.61 | 1419.09 |
| clang | 5583.22 | 1421.46 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.197× | 1.261× | 1.207× | 1.276× |
| arrays | 0.837× | 0.937× | 0.833× | 0.937× |
| strings | 0.997× | 0.983× | 0.998× | 0.984× |
| geometry | 1.113× | 1.069× | 1.118× | 1.073× |
| scene | 1.066× | 1.047× | 1.070× | 1.052× |

A/A variation above 2%: dispatch clang cpu before: 0.977×; dispatch clang measured_wall before: 0.975×; arrays gcc cpu after: 1.056×; arrays gcc measured_wall after: 1.058×; geometry gcc cpu before: 0.941×; geometry gcc measured_wall before: 0.939×; geometry clang cpu before: 1.060×; geometry clang cpu after: 1.093×; geometry clang measured_wall before: 1.063×; geometry clang measured_wall after: 1.096×; scene gcc cpu before: 1.026×; scene gcc measured_wall before: 1.027×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 14.40 | 17.46 | 18.56 |
| arrays | 5.10 | 4.16 | 4.84 |
| strings | 54.47 | 54.01 | 53.46 |
| geometry | 12.58 | 14.06 | 13.79 |
| scene | 24.58 | 26.26 | 25.64 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 17.46 | - | - | - | no earlier run |
| arrays | GCC | 4.16 | - | - | - | no earlier run |
| strings | GCC | 54.01 | - | - | - | no earlier run |
| geometry | GCC | 14.06 | - | - | - | no earlier run |
| scene | GCC | 26.26 | - | - | - | no earlier run |
| dispatch | Clang | 18.56 | - | - | - | no earlier run |
| arrays | Clang | 4.84 | - | - | - | no earlier run |
| strings | Clang | 53.46 | - | - | - | no earlier run |
| geometry | Clang | 13.79 | - | - | - | no earlier run |
| scene | Clang | 25.64 | - | - | - | no earlier run |

## Toolchains

- cppgm: cppgm 0.11.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144)
