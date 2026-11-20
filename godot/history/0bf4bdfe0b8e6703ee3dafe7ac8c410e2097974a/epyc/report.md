# Godot headless benchmarks

Compiler: `0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1394.61 | 358.08 |
| gcc | 5518.48 | 1395.93 |
| clang | 5532.72 | 1404.03 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.130× | 0.981× | 1.178× | 0.985× |
| arrays | 0.895× | 1.015× | 0.882× | 1.030× |
| strings | 0.977× | 0.962× | 0.984× | 0.962× |
| geometry | 0.946× | 0.769× | 0.944× | 0.748× |
| scene | 0.984× | 0.952× | 0.995× | 0.964× |

A/A variation above 2%: geometry gcc cpu before: 1.040×; geometry gcc measured_wall before: 1.042×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.10.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589)
