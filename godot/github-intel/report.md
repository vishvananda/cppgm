# Godot headless benchmarks

Compiler: `7bc2ee42070147be1668ff16a16841c6e02b47e3` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 882.77 | 226.66 |
| gcc | 3715.45 | 937.03 |
| clang | 2980.38 | 761.18 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.094× | 1.014× | 1.097× | 1.015× |
| arrays | 0.992× | 1.037× | 0.992× | 1.039× |
| strings | 0.986× | 1.000× | 0.986× | 1.001× |
| geometry | 1.081× | 0.980× | 1.083× | 0.981× |
| scene | 1.067× | 1.032× | 1.070× | 1.034× |

A/A variation above 2%: dispatch gcc cpu before: 0.954×; dispatch gcc measured_wall before: 0.953×; strings clang cpu before: 1.028×; strings clang measured_wall before: 1.028×; scene gcc cpu after: 1.033×; scene gcc measured_wall after: 1.033×; scene clang cpu after: 1.048×; scene clang measured_wall after: 1.049×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.42 | 9.28 | 8.53 |
| arrays | 2.49 | 2.48 | 2.59 |
| strings | 40.64 | 39.90 | 41.15 |
| geometry | 5.91 | 6.39 | 5.77 |
| scene | 14.00 | 14.77 | 14.47 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.28 | 9.23 | +0.5% | `dbbd227db` | steady |
| arrays | GCC | 2.48 | 2.48 | -0.1% | `dbbd227db` | steady |
| strings | GCC | 39.90 | 39.95 | -0.1% | `dbbd227db` | steady |
| geometry | GCC | 6.39 | 6.38 | +0.1% | `dbbd227db` | steady |
| scene | GCC | 14.77 | 14.78 | -0.1% | `dbbd227db` | steady |
| dispatch | Clang | 8.53 | 8.58 | -0.5% | `dbbd227db` | steady |
| arrays | Clang | 2.59 | 2.59 | +0.0% | `dbbd227db` | steady |
| strings | Clang | 41.15 | 41.21 | -0.1% | `dbbd227db` | steady |
| geometry | Clang | 5.77 | 5.79 | -0.3% | `dbbd227db` | steady |
| scene | Clang | 14.47 | 14.58 | -0.8% | `dbbd227db` | steady |

## Toolchains

- cppgm: cppgm 0.10.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294)
