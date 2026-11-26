# simdjson benchmarks

Compiler: `dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 6.971× | 3.338× | 6.745× | 3.207× |
| scalar | twitter.json | 1.042× | 1.031× | 1.042× | 1.031× |
| scalar | citm_catalog.json | 0.964× | 1.071× | 0.964× | 1.071× |
| sse | Compile | 6.709× | 3.469× | 6.417× | 3.408× |
| sse | twitter.json | 1.016× | 1.001× | 1.016× | 1.001× |
| sse | citm_catalog.json | 1.008× | 1.008× | 1.008× | 1.008× |

Calibration variation above 2%: sse Compile gcc cpu A/A after: 1.024×; sse Compile gcc wall A/A after: 1.026×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.11.1 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989)
