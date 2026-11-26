# Godot headless benchmarks

Compiler: `61c93cf80bbefb800c9a2a397bacf09b138c2ed3` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 852.38 | 218.36 |
| gcc | 3615.95 | 911.25 |
| clang | 2961.39 | 755.95 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.099× | 1.025× | 1.101× | 1.027× |
| arrays | 0.994× | 1.039× | 0.994× | 1.041× |
| strings | 0.978× | 0.997× | 0.977× | 0.998× |
| geometry | 1.078× | 0.978× | 1.080× | 0.979× |
| scene | 1.079× | 1.056× | 1.081× | 1.058× |

A/A variation above 2%: dispatch clang cpu before: 1.139×; dispatch clang measured_wall before: 1.143×; scene gcc cpu before: 0.978×; scene gcc cpu after: 0.976×; scene gcc measured_wall before: 0.978×; scene gcc measured_wall after: 0.976×; scene clang cpu before: 0.975×; scene clang measured_wall before: 0.974×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.38 | 9.25 | 8.59 |
| arrays | 2.50 | 2.48 | 2.59 |
| strings | 41.27 | 40.03 | 41.37 |
| geometry | 5.90 | 6.38 | 5.78 |
| scene | 14.01 | 14.93 | 14.59 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.25 | 9.30 | -0.6% | `49adadaef` | steady |
| arrays | GCC | 2.48 | 2.50 | -0.7% | `49adadaef` | steady |
| strings | GCC | 40.03 | 40.10 | -0.2% | `49adadaef` | steady |
| geometry | GCC | 6.38 | 6.43 | -0.8% | `49adadaef` | steady |
| scene | GCC | 14.93 | 14.72 | +1.4% | `49adadaef` | steady |
| dispatch | Clang | 8.59 | 8.62 | -0.3% | `49adadaef` | steady |
| arrays | Clang | 2.59 | 2.60 | -0.3% | `49adadaef` | steady |
| strings | Clang | 41.37 | 41.38 | -0.0% | `49adadaef` | steady |
| geometry | Clang | 5.78 | 5.80 | -0.4% | `49adadaef` | steady |
| scene | Clang | 14.59 | 14.64 | -0.3% | `49adadaef` | steady |

## Toolchains

- cppgm: cppgm 0.11.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224)
