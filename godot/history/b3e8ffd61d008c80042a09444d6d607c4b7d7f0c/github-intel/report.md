# Godot headless benchmarks

Compiler: `b3e8ffd61d008c80042a09444d6d607c4b7d7f0c` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 915.56 | 234.91 |
| gcc | 3749.66 | 945.78 |
| clang | 3043.29 | 777.25 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.072× | 0.993× | 1.074× | 0.994× |
| arrays | 0.993× | 1.032× | 0.993× | 1.034× |
| strings | 0.977× | 1.005× | 0.977× | 1.007× |
| geometry | 0.996× | 0.907× | 0.996× | 0.906× |
| scene | 1.013× | 1.017× | 1.013× | 1.018× |

A/A variation above 2%: dispatch gcc cpu before: 0.887×; dispatch gcc measured_wall before: 0.884×; dispatch clang cpu before: 0.890×; dispatch clang measured_wall before: 0.888×; scene gcc cpu before: 0.958×; scene gcc cpu after: 0.955×; scene gcc measured_wall before: 0.957×; scene gcc measured_wall after: 0.954×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.60 | 9.25 | 8.60 |
| arrays | 2.50 | 2.48 | 2.57 |
| strings | 40.98 | 39.98 | 41.27 |
| geometry | 6.39 | 6.37 | 5.77 |
| scene | 14.58 | 14.68 | 14.57 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.25 | 9.23 | +0.2% | `992888a62` | steady |
| arrays | GCC | 2.48 | 2.47 | +0.5% | `992888a62` | steady |
| strings | GCC | 39.98 | 39.89 | +0.2% | `992888a62` | steady |
| geometry | GCC | 6.37 | 6.35 | +0.4% | `992888a62` | steady |
| scene | GCC | 14.68 | 14.74 | -0.4% | `992888a62` | steady |
| dispatch | Clang | 8.60 | 8.51 | +1.1% | `992888a62` | steady |
| arrays | Clang | 2.57 | 2.55 | +0.7% | `992888a62` | steady |
| strings | Clang | 41.27 | 41.03 | +0.6% | `992888a62` | steady |
| geometry | Clang | 5.77 | 5.75 | +0.3% | `992888a62` | steady |
| scene | Clang | 14.57 | 14.48 | +0.6% | `992888a62` | steady |

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403)
