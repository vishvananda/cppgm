# Godot headless benchmarks

Compiler: `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1275.78 | 326.95 |
| gcc | 5328.17 | 1344.41 |
| clang | 4483.77 | 1140.62 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.140× | 1.052× | 1.145× | 1.055× |
| arrays | 1.053× | 1.103× | 1.055× | 1.108× |
| strings | 0.983× | 1.002× | 0.983× | 1.003× |
| geometry | 1.075× | 1.053× | 1.077× | 1.056× |
| scene | 1.081× | 1.027× | 1.084× | 1.029× |

A/A variation above 2%: dispatch gcc cpu before: 1.151×; dispatch gcc measured_wall before: 1.147×; geometry clang measured_wall before: 0.980×; scene gcc cpu after: 0.936×; scene gcc measured_wall after: 0.934×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 11.15 | 13.12 | 11.69 |
| arrays | 3.47 | 3.66 | 3.88 |
| strings | 56.67 | 56.06 | 56.78 |
| geometry | 8.09 | 8.71 | 8.38 |
| scene | 21.40 | 22.55 | 22.15 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 13.12 | - | - | - | no earlier run |
| arrays | GCC | 3.66 | - | - | - | no earlier run |
| strings | GCC | 56.06 | - | - | - | no earlier run |
| geometry | GCC | 8.71 | - | - | - | no earlier run |
| scene | GCC | 22.55 | - | - | - | no earlier run |
| dispatch | Clang | 11.69 | - | - | - | no earlier run |
| arrays | Clang | 3.88 | - | - | - | no earlier run |
| strings | Clang | 56.78 | - | - | - | no earlier run |
| geometry | Clang | 8.38 | - | - | - | no earlier run |
| scene | Clang | 22.15 | - | - | - | no earlier run |

## Toolchains

- cppgm: cppgm 0.11.4 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565)
