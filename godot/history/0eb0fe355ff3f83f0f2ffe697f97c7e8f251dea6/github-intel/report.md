# Godot headless benchmarks

Compiler: `0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 887.49 | 227.68 |
| gcc | 3745.06 | 945.11 |
| clang | 2987.99 | 761.84 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.075× | 1.009× | 1.083× | 1.008× |
| arrays | 0.991× | 1.026× | 0.994× | 1.036× |
| strings | 0.983× | 1.000× | 0.975× | 1.006× |
| geometry | 0.991× | 0.914× | 0.998× | 0.902× |
| scene | 1.018× | 0.991× | 1.015× | 0.998× |

A/A variation above 2%: dispatch clang measured_wall after: 1.025×; strings gcc measured_wall after: 1.022×; scene gcc cpu before: 0.966×; scene gcc measured_wall before: 0.968×; scene gcc measured_wall after: 0.979×; scene clang cpu after: 1.071×; scene clang measured_wall after: 1.088×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152)
