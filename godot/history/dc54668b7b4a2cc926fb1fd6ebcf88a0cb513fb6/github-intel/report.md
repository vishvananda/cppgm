# Godot headless benchmarks

Compiler: `dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 908.01 | 233.27 |
| gcc | 3764.68 | 949.57 |
| clang | 3002.36 | 766.05 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.094× | 1.023× | 1.097× | 1.024× |
| arrays | 0.994× | 1.033× | 0.994× | 1.035× |
| strings | 0.973× | 0.992× | 0.972× | 0.993× |
| geometry | 1.080× | 0.978× | 1.083× | 0.978× |
| scene | 1.056× | 1.072× | 1.058× | 1.075× |

A/A variation above 2%: scene clang cpu before: 1.039×; scene clang cpu after: 0.978×; scene clang measured_wall before: 1.040×; scene clang measured_wall after: 0.978×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.37 | 9.21 | 8.56 |
| arrays | 2.51 | 2.49 | 2.59 |
| strings | 41.28 | 40.03 | 41.12 |
| geometry | 5.91 | 6.41 | 5.79 |
| scene | 14.04 | 14.76 | 14.72 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.21 | 9.26 | -0.5% | `bf2f830a4` | steady |
| arrays | GCC | 2.49 | 2.47 | +0.7% | `bf2f830a4` | steady |
| strings | GCC | 40.03 | 39.83 | +0.5% | `bf2f830a4` | steady |
| geometry | GCC | 6.41 | 6.34 | +1.0% | `bf2f830a4` | steady |
| scene | GCC | 14.76 | 14.70 | +0.4% | `bf2f830a4` | steady |
| dispatch | Clang | 8.56 | 8.53 | +0.4% | `bf2f830a4` | steady |
| arrays | Clang | 2.59 | 2.57 | +0.4% | `bf2f830a4` | steady |
| strings | Clang | 41.12 | 41.04 | +0.2% | `bf2f830a4` | steady |
| geometry | Clang | 5.79 | 5.74 | +0.8% | `bf2f830a4` | steady |
| scene | Clang | 14.72 | 14.95 | -1.5% | `bf2f830a4` | steady |

## Toolchains

- cppgm: cppgm 0.11.1 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989)
