# simdjson benchmarks

Compiler: `0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.669× | 1.694× | 3.533× | 1.633× |
| scalar | twitter.json | 1.028× | 0.925× | 1.028× | 0.925× |
| scalar | citm_catalog.json | 1.060× | 1.045× | 1.060× | 1.045× |
| sse | Compile | 3.795× | 1.817× | 3.759× | 1.813× |
| sse | twitter.json | 1.011× | 0.983× | 1.011× | 0.983× |
| sse | citm_catalog.json | 1.000× | 1.027× | 1.000× | 1.027× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152)
