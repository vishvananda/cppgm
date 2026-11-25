# Godot headless benchmarks

Compiler: `7584274b4d275fb41f7c5d064e751e5918e8e421` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1037.22 | 268.23 |
| gcc | 4170.10 | 1057.52 |
| clang | 3770.72 | 967.84 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.080× | 0.996× | 1.083× | 0.998× |
| arrays | 0.910× | 1.001× | 0.909× | 1.002× |
| strings | 0.981× | 0.981× | 0.981× | 0.983× |
| geometry | 1.044× | 1.016× | 1.046× | 1.018× |
| scene | 1.037× | 1.047× | 1.039× | 1.050× |

A/A variation above 2%: dispatch gcc cpu before: 0.962×; dispatch gcc measured_wall before: 0.960×; dispatch clang cpu before: 0.938×; dispatch clang measured_wall before: 0.939×; strings gcc cpu after: 1.028×; strings gcc measured_wall after: 1.030×; strings clang cpu before: 1.052×; strings clang measured_wall before: 1.054×; geometry gcc cpu before: 0.979×; geometry gcc measured_wall before: 0.978×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 11.27 | 12.27 | 11.32 |
| arrays | 4.11 | 3.71 | 4.11 |
| strings | 38.90 | 37.96 | 38.28 |
| geometry | 8.35 | 8.70 | 8.50 |
| scene | 17.91 | 18.80 | 18.70 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 12.27 | 15.66 | -21.7% | `80079d548` | **reference moved** |
| arrays | GCC | 3.71 | 4.72 | -21.3% | `80079d548` | **reference moved** |
| strings | GCC | 37.96 | 49.73 | -23.7% | `80079d548` | **reference moved** |
| geometry | GCC | 8.70 | 11.15 | -21.9% | `80079d548` | **reference moved** |
| scene | GCC | 18.80 | 24.36 | -22.8% | `80079d548` | **reference moved** |
| dispatch | Clang | 11.32 | 14.57 | -22.3% | `80079d548` | **reference moved** |
| arrays | Clang | 4.11 | 5.30 | -22.4% | `80079d548` | **reference moved** |
| strings | Clang | 38.28 | 48.92 | -21.8% | `80079d548` | **reference moved** |
| geometry | Clang | 8.50 | 10.95 | -22.4% | `80079d548` | **reference moved** |
| scene | Clang | 18.70 | 23.35 | -19.9% | `80079d548` | **reference moved** |

## Toolchains

- cppgm: cppgm 0.10.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312)
