# simdjson benchmarks

Compiler: `c37fb6f9de8fa22d3ae66364951928f39bbd5e25` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 6.600× | 3.015× | 6.255× | 2.893× |
| scalar | twitter.json | 1.033× | 0.923× | 1.033× | 0.923× |
| scalar | citm_catalog.json | 1.071× | 1.052× | 1.071× | 1.052× |
| sse | Compile | 6.341× | 3.059× | 6.123× | 3.025× |
| sse | twitter.json | 1.016× | 0.991× | 1.016× | 0.991× |
| sse | citm_catalog.json | 1.002× | 1.029× | 1.002× | 1.029× |

Calibration variation above 2%: sse citm_catalog.json gcc cpu A/A before: 0.977×; sse citm_catalog.json gcc wall A/A before: 0.977×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.12.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956)
