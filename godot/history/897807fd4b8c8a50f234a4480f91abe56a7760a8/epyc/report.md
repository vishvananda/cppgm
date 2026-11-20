# Godot headless benchmarks

Compiler: `897807fd4b8c8a50f234a4480f91abe56a7760a8` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 874.52 | 226.59 |
| gcc | 3471.44 | 878.39 |
| clang | 2685.09 | 692.71 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.136× | 0.954× | 1.156× | 0.987× |
| arrays | 1.084× | 1.019× | 1.102× | 1.031× |
| strings | 0.967× | 1.000× | 0.961× | 1.000× |
| geometry | 0.959× | 0.949× | 0.966× | 0.955× |
| scene | 1.000× | 0.982× | 1.014× | 0.988× |

A/A variation above 2%: dispatch gcc measured_wall after: 1.029×; dispatch clang measured_wall before: 1.021×; arrays gcc cpu after: 1.035×; arrays gcc measured_wall before: 1.023×; arrays gcc measured_wall after: 1.035×; strings clang cpu before: 0.976×; strings clang measured_wall before: 0.972×; scene gcc cpu before: 0.915×; scene gcc measured_wall before: 0.917×; scene gcc measured_wall after: 0.976×; scene clang cpu before: 1.028×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.10.1 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957)
