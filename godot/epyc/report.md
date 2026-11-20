# Godot headless benchmarks

Compiler: `f4ee6ed21703be4d5350c45f5d8ed33dc706c992` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1386.01 | 355.96 |
| gcc | 5518.43 | 1397.19 |
| clang | 5556.50 | 1412.05 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.143× | 0.971× | 1.199× | 0.980× |
| arrays | 0.889× | 1.134× | 0.874× | 1.170× |
| strings | 0.934× | 0.933× | 0.934× | 0.937× |
| geometry | 0.976× | 0.984× | 0.967× | 0.999× |
| scene | 1.069× | 1.018× | 1.082× | 1.035× |

A/A variation above 2%: geometry gcc cpu after: 0.976×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294)
