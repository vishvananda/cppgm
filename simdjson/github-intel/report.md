# simdjson benchmarks

Compiler: `49adadaefcc6510c6c725be8d3c780b397e68bc5` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 6.544× | 3.000× | 6.288× | 2.892× |
| scalar | twitter.json | 1.022× | 0.919× | 1.022× | 0.919× |
| scalar | citm_catalog.json | 1.070× | 1.054× | 1.070× | 1.054× |
| sse | Compile | 6.371× | 3.071× | 6.181× | 3.026× |
| sse | twitter.json | 1.017× | 0.997× | 1.017× | 0.997× |
| sse | citm_catalog.json | 0.996× | 1.029× | 0.996× | 1.029× |

Calibration variation above 2%: scalar Compile clang wall A/A after: 1.024×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.11.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580)
