# Godot headless benchmarks

Compiler: `cc79604cdc196d46abdebb888158e8b90d3cac52` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 890.30 | 228.45 |
| gcc | 3707.45 | 934.60 |
| clang | 3014.90 | 770.98 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.080× | 1.015× | 1.082× | 1.017× |
| arrays | 0.990× | 1.033× | 0.989× | 1.035× |
| strings | 0.988× | 1.008× | 0.987× | 1.009× |
| geometry | 1.082× | 0.979× | 1.084× | 0.979× |
| scene | 1.077× | 1.050× | 1.079× | 1.053× |

A/A variation above 2%: scene gcc cpu after: 1.026×; scene gcc measured_wall after: 1.026×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.48 | 9.23 | 8.63 |
| arrays | 2.51 | 2.49 | 2.60 |
| strings | 40.87 | 40.20 | 41.35 |
| geometry | 5.91 | 6.40 | 5.80 |
| scene | 14.05 | 14.92 | 14.54 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.23 | 9.28 | -0.5% | `7bc2ee420` | steady |
| arrays | GCC | 2.49 | 2.48 | +0.7% | `7bc2ee420` | steady |
| strings | GCC | 40.20 | 39.90 | +0.8% | `7bc2ee420` | steady |
| geometry | GCC | 6.40 | 6.39 | +0.2% | `7bc2ee420` | steady |
| scene | GCC | 14.92 | 14.77 | +1.1% | `7bc2ee420` | steady |
| dispatch | Clang | 8.63 | 8.53 | +1.1% | `7bc2ee420` | steady |
| arrays | Clang | 2.60 | 2.59 | +0.4% | `7bc2ee420` | steady |
| strings | Clang | 41.35 | 41.15 | +0.5% | `7bc2ee420` | steady |
| geometry | Clang | 5.80 | 5.77 | +0.5% | `7bc2ee420` | steady |
| scene | Clang | 14.54 | 14.47 | +0.5% | `7bc2ee420` | steady |

## Toolchains

- cppgm: cppgm 0.10.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099)
