# Godot headless benchmarks

Compiler: `dbbd227db37c255596e3fc11a4d3df8700ea7be7` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 899.74 | 230.92 |
| gcc | 3767.81 | 950.98 |
| clang | 3017.75 | 770.18 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.088× | 1.009× | 1.090× | 1.010× |
| arrays | 0.991× | 1.031× | 0.991× | 1.033× |
| strings | 0.979× | 0.995× | 0.979× | 0.995× |
| geometry | 1.080× | 0.981× | 1.082× | 0.981× |
| scene | 1.048× | 1.068× | 1.049× | 1.071× |

A/A variation above 2%: dispatch gcc cpu before: 1.168×; dispatch gcc cpu after: 1.030×; dispatch gcc measured_wall before: 1.172×; dispatch gcc measured_wall after: 1.031×; strings gcc cpu after: 1.027×; strings gcc measured_wall after: 1.028×; scene clang cpu before: 0.975×; scene clang measured_wall before: 0.975×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.47 | 9.23 | 8.58 |
| arrays | 2.50 | 2.48 | 2.59 |
| strings | 40.71 | 39.95 | 41.21 |
| geometry | 5.90 | 6.38 | 5.79 |
| scene | 14.14 | 14.78 | 14.58 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.23 | 9.23 | +0.0% | `0e83e16cf` | steady |
| arrays | GCC | 2.48 | 2.48 | -0.2% | `0e83e16cf` | steady |
| strings | GCC | 39.95 | 40.00 | -0.1% | `0e83e16cf` | steady |
| geometry | GCC | 6.38 | 6.38 | +0.0% | `0e83e16cf` | steady |
| scene | GCC | 14.78 | 14.74 | +0.3% | `0e83e16cf` | steady |
| dispatch | Clang | 8.58 | 8.58 | -0.0% | `0e83e16cf` | steady |
| arrays | Clang | 2.59 | 2.58 | +0.6% | `0e83e16cf` | steady |
| strings | Clang | 41.21 | 41.12 | +0.2% | `0e83e16cf` | steady |
| geometry | Clang | 5.79 | 5.79 | -0.1% | `0e83e16cf` | steady |
| scene | Clang | 14.58 | 14.55 | +0.2% | `0e83e16cf` | steady |

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903)
