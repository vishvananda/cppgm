# Godot headless benchmarks

Compiler: `bf2f830a479c21887e7ef6e44787b48dac78bf6d` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified Godot 4.7.2 (`ed1daf0bf001b61586d9930840f2f1394092c079`), full headless release template, C++17 `-O3`, all default engine modules, 3D and computed GDScript dispatch retained. C files and final linking use GCC for all three builds.

Full-build times below are one clean build per compiler, including SCons and linking. They are not paired microbenchmark measurements.

| Compiler | Build CPU seconds | Build wall seconds |
|---|---:|---:|
| cppgm | 878.22 | 225.51 |
| gcc | 3734.44 | 941.53 |
| clang | 2966.68 | 757.20 |

Runtime ratios are **reference time / cppgm time: higher is better**. Work wall time excludes engine startup; process CPU time includes it. Fixed checked GDScript workloads exercise dispatch, arrays, strings, geometry and scene transforms; these are not rendering or game frame-rate measurements. Every checksum must match an independent calculation. Repeated work exceeds the configured pilot duration. Paired ABBA/BAAB blocks include A/A calibration before and after.

| Workload | vs GCC CPU | vs Clang CPU | vs GCC work wall | vs Clang work wall |
|---|---:|---:|---:|---:|
| dispatch | 1.107× | 1.029× | 1.110× | 1.031× |
| arrays | 0.994× | 1.032× | 0.993× | 1.034× |
| strings | 0.979× | 1.013× | 0.979× | 1.014× |
| geometry | 1.077× | 0.979× | 1.080× | 0.978× |
| scene | 1.081× | 1.072× | 1.082× | 1.076× |

A/A variation above 2%: dispatch gcc cpu before: 1.041×; dispatch gcc measured_wall before: 1.043×; dispatch clang cpu before: 1.033×; dispatch clang measured_wall before: 1.033×; scene gcc cpu after: 0.962×; scene gcc measured_wall after: 0.962×. Every observation is retained.

A GCC pilot sets the repeats for at least 3 s of work per observation. Process CPU time is user plus system time from wait4 resource usage, in microseconds. Address-space layout: randomized (`setarch -R` refused: setarch: failed to set personality to x86_64: Operation not permitted). The badge uses `measured_wall`.

Observations whose work wall time exceeds their process CPU time (off the CPU during the work): none.

Median `measured_wall` time per pass (one call over 100,000 iterations), in milliseconds:

| Workload | cppgm | gcc | clang |
|---|---:|---:|---:|
| dispatch | 8.30 | 9.26 | 8.53 |
| arrays | 2.49 | 2.47 | 2.57 |
| strings | 40.38 | 39.83 | 41.04 |
| geometry | 5.86 | 6.34 | 5.74 |
| scene | 13.85 | 14.70 | 14.95 |

## Reference binaries against earlier runs

Each reference binary's `measured_wall` time per pass is compared with the latest earlier run that has the same binary SHA-256 and the same CPU model. A change above 5% reads **reference moved**. The ratio of that workload then shows a change of the reference binary or of the runner, not of cppgm.

| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |
|---|---|---:|---:|---:|---|---|
| dispatch | GCC | 9.26 | 9.23 | +0.3% | `cc79604cd` | steady |
| arrays | GCC | 2.47 | 2.49 | -0.8% | `cc79604cd` | steady |
| strings | GCC | 39.83 | 40.20 | -0.9% | `cc79604cd` | steady |
| geometry | GCC | 6.34 | 6.40 | -1.0% | `cc79604cd` | steady |
| scene | GCC | 14.70 | 14.92 | -1.5% | `cc79604cd` | steady |
| dispatch | Clang | 8.53 | 8.63 | -1.1% | `cc79604cd` | steady |
| arrays | Clang | 2.57 | 2.60 | -1.1% | `cc79604cd` | steady |
| strings | Clang | 41.04 | 41.35 | -0.7% | `cc79604cd` | steady |
| geometry | Clang | 5.74 | 5.80 | -1.0% | `cc79604cd` | steady |
| scene | Clang | 14.95 | 14.54 | +2.8% | `cc79604cd` | steady |

## Toolchains

- cppgm: cppgm 0.10.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and build flags](metadata.json) · [Full-build observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[Shared comparison tables](standard/summary.md) · [Versioned records](standard/records.json) · [CI run and artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895)
