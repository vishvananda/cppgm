# Godot headless benchmarks

Compiler: `80079d548d66a02401ca1238a27cd7ff792c6d93` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1362.97 | 351.57 |
| gcc | 5396.05 | 1367.16 |
| clang | 4782.22 | 1220.25 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.081× | 1.001× | 1.085× | 1.004× |
| arrays | 0.885× | 0.997× | 0.882× | 0.997× |
| strings | 1.003× | 0.994× | 1.004× | 0.996× |
| geometry | 1.037× | 1.012× | 1.037× | 1.015× |
| scene | 1.034× | 1.003× | 1.037× | 1.005× |

A/A variation above 2%: dispatch gcc cpu before: 0.963×; dispatch gcc measured_wall before: 0.962×; dispatch clang cpu before: 1.080×; dispatch clang measured_wall before: 1.083×; scene gcc cpu before: 0.979×; scene gcc measured_wall before: 0.979×; scene clang cpu before: 0.966×; scene clang measured_wall before: 0.965×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 14.41 | 15.66 | 14.57 |
| arrays | 5.34 | 4.72 | 5.30 |
| strings | 49.41 | 49.73 | 48.92 |
| geometry | 10.78 | 11.15 | 10.95 |
| scene | 23.29 | 24.36 | 23.35 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 15.66 | 12.28 | +27.5% | `44d3c4a29` | **reference moved** |
| arrays | GCC | 4.72 | 3.66 | +28.9% | `44d3c4a29` | **reference moved** |
| strings | GCC | 49.73 | 38.18 | +30.3% | `44d3c4a29` | **reference moved** |
| geometry | GCC | 11.15 | 8.69 | +28.4% | `44d3c4a29` | **reference moved** |
| scene | GCC | 24.36 | 18.73 | +30.1% | `44d3c4a29` | **reference moved** |
| dispatch | Clang | 14.57 | 11.38 | +28.0% | `44d3c4a29` | **reference moved** |
| arrays | Clang | 5.30 | 4.11 | +28.8% | `44d3c4a29` | **reference moved** |
| strings | Clang | 48.92 | 38.39 | +27.4% | `44d3c4a29` | **reference moved** |
| geometry | Clang | 10.95 | 10.24 | +6.9% | `44d3c4a29` | **reference moved** |
| scene | Clang | 23.35 | 17.98 | +29.8% | `44d3c4a29` | **reference moved** |

## Toolchains

- cppgm: cppgm 0.10.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060)
