# Godot headless benchmarks

Compiler: `56c86f755ec2b56e235b3f5e5ff76e6d147c3f93` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 872.30 | 223.88 |
| gcc | 3631.73 | 915.18 |
| clang | 2925.77 | 744.68 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.065× | 0.981× | 1.086× | 1.002× |
| arrays | 1.009× | 1.026× | 0.993× | 1.035× |
| strings | 0.967× | 0.992× | 0.963× | 0.991× |
| geometry | 1.009× | 0.922× | 1.001× | 0.908× |
| scene | 1.017× | 1.017× | 1.013× | 1.024× |

A/A variation above 2%: dispatch gcc cpu after: 0.950×; dispatch gcc measured_wall after: 0.940×; dispatch clang cpu after: 1.028×; scene clang measured_wall before: 0.975×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398)
