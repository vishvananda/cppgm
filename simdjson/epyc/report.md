# simdjson benchmarks

Compiler: `0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.030× | 1.907× | 3.946× | 1.865× |
| scalar | twitter.json | 1.027× | 1.018× | 1.027× | 1.018× |
| scalar | citm_catalog.json | 1.005× | 1.118× | 1.005× | 1.118× |
| sse | Compile | 4.183× | 2.095× | 4.113× | 2.043× |
| sse | twitter.json | 1.016× | 1.003× | 1.016× | 1.003× |
| sse | citm_catalog.json | 1.009× | 1.006× | 1.009× | 1.006× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589)
