# Godot headless benchmarks

Compiler: `94aaecc52ac26996bd3d654522334e3c28c68457` · CPU: INTEL(R) XEON(R) PLATINUM 8573C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 1024.68 | 263.12 |
| gcc | 4211.37 | 1061.69 |
| clang | 3388.07 | 862.16 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.073× | 1.009× | 1.089× | 1.013× |
| arrays | 0.983× | 1.008× | 0.983× | 1.016× |
| strings | 0.975× | 0.983× | 0.975× | 0.986× |
| geometry | 0.967× | 0.867× | 0.966× | 0.853× |
| scene | 1.027× | 0.991× | 1.035× | 1.003× |

A/A variation above 2%: dispatch clang cpu before: 0.973×; arrays gcc cpu before: 0.975×; arrays gcc measured_wall before: 0.971×; strings gcc cpu before: 0.975×; strings gcc measured_wall before: 0.967×; strings clang cpu before: 0.967×; strings clang measured_wall before: 0.963×; strings clang measured_wall after: 0.980×; geometry gcc measured_wall after: 1.027×; scene gcc cpu before: 1.054×; scene gcc measured_wall before: 1.060×; scene gcc measured_wall after: 1.021×; scene clang cpu before: 1.027×; scene clang measured_wall before: 1.028×. Every observation is retained.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225)
