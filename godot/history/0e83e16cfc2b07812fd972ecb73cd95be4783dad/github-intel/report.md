# Godot headless benchmarks

Compiler: `0e83e16cfc2b07812fd972ecb73cd95be4783dad` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 895.09 | 230.05 |
| gcc | 3705.44 | 934.13 |
| clang | 3003.74 | 766.28 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.069× | 0.999× | 1.071× | 1.000× |
| arrays | 0.993× | 1.031× | 0.993× | 1.033× |
| strings | 0.955× | 0.979× | 0.954× | 0.980× |
| geometry | 1.019× | 0.925× | 1.019× | 0.924× |
| scene | 1.028× | 0.989× | 1.029× | 0.990× |

A/A variation above 2%: dispatch gcc cpu before: 0.976×; dispatch gcc measured_wall before: 0.976×; dispatch clang measured_wall after: 0.979×; scene gcc cpu after: 1.042×; scene gcc measured_wall after: 1.042×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.60 | 9.23 | 8.58 |
| arrays | 2.49 | 2.48 | 2.58 |
| strings | 41.99 | 40.00 | 41.12 |
| geometry | 6.26 | 6.38 | 5.79 |
| scene | 14.64 | 14.74 | 14.55 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.23 | 9.25 | -0.3% | `b3e8ffd61` | steady |
| arrays | GCC | 2.48 | 2.48 | +0.1% | `b3e8ffd61` | steady |
| strings | GCC | 40.00 | 39.98 | +0.0% | `b3e8ffd61` | steady |
| geometry | GCC | 6.38 | 6.37 | +0.1% | `b3e8ffd61` | steady |
| scene | GCC | 14.74 | 14.68 | +0.4% | `b3e8ffd61` | steady |
| dispatch | Clang | 8.58 | 8.60 | -0.3% | `b3e8ffd61` | steady |
| arrays | Clang | 2.58 | 2.57 | +0.2% | `b3e8ffd61` | steady |
| strings | Clang | 41.12 | 41.27 | -0.4% | `b3e8ffd61` | steady |
| geometry | Clang | 5.79 | 5.77 | +0.5% | `b3e8ffd61` | steady |
| scene | Clang | 14.55 | 14.57 | -0.2% | `b3e8ffd61` | steady |

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139)
