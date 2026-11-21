# Godot headless benchmarks

Compiler: `44d3c4a29971caff2cc064889ec96259f34e7504` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1075.46 | 278.22 |
| gcc | 4336.59 | 1097.82 |
| clang | 3809.45 | 982.02 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.053× | 0.987× | 1.055× | 0.989× |
| arrays | 0.893× | 0.987× | 0.890× | 0.987× |
| strings | 0.947× | 0.951× | 0.947× | 0.951× |
| geometry | 0.998× | 1.176× | 1.001× | 1.184× |
| scene | 1.002× | 0.976× | 1.004× | 0.976× |

A/A variation above 2%: dispatch clang cpu before: 1.075×; dispatch clang measured_wall before: 1.079×; arrays gcc cpu before: 0.959×; arrays gcc cpu after: 0.979×; arrays gcc measured_wall before: 0.958×; arrays gcc measured_wall after: 0.978×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 11.53 | 12.28 | 11.38 |
| arrays | 4.11 | 3.66 | 4.11 |
| strings | 40.43 | 38.18 | 38.39 |
| geometry | 8.66 | 8.69 | 10.24 |
| scene | 18.68 | 18.73 | 17.98 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 12.28 | - | - | - | no earlier run (2 earlier without time per pass) |
| arrays | GCC | 3.66 | - | - | - | no earlier run (2 earlier without time per pass) |
| strings | GCC | 38.18 | - | - | - | no earlier run (2 earlier without time per pass) |
| geometry | GCC | 8.69 | - | - | - | no earlier run (2 earlier without time per pass) |
| scene | GCC | 18.73 | - | - | - | no earlier run (2 earlier without time per pass) |
| dispatch | Clang | 11.38 | - | - | - | no earlier run (2 earlier without time per pass) |
| arrays | Clang | 4.11 | - | - | - | no earlier run (2 earlier without time per pass) |
| strings | Clang | 38.39 | - | - | - | no earlier run (2 earlier without time per pass) |
| geometry | Clang | 10.24 | - | - | - | no earlier run (2 earlier without time per pass) |
| scene | Clang | 17.98 | - | - | - | no earlier run (2 earlier without time per pass) |

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069)
