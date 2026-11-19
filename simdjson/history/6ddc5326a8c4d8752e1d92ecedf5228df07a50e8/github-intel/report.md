# simdjson benchmarks

Compiler: `6ddc5326a8c4d8752e1d92ecedf5228df07a50e8` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.680× | 1.685× | 3.612× | 1.672× |
| scalar | twitter.json | 1.023× | 0.920× | 1.023× | 0.920× |
| scalar | citm_catalog.json | 1.070× | 1.047× | 1.070× | 1.047× |
| sse | Compile | 3.785× | 1.829× | 3.682× | 1.802× |
| sse | twitter.json | 1.013× | 0.989× | 1.013× | 0.989× |
| sse | citm_catalog.json | 0.997× | 1.028× | 0.997× | 1.028× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043)
