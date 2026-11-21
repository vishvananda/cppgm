# simdjson benchmarks

Compiler: `992888a62d0d19fee6e2973c68195aed2b02a9b7` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.007× | 2.086× | 3.910× | 2.055× |
| scalar | twitter.json | 1.078× | 0.986× | 1.078× | 0.986× |
| scalar | citm_catalog.json | 1.011× | 1.081× | 1.011× | 1.081× |
| sse | Compile | 4.190× | 2.354× | 4.101× | 2.309× |
| sse | twitter.json | 1.018× | 1.009× | 1.018× | 1.009× |
| sse | citm_catalog.json | 1.014× | 0.999× | 1.014× | 0.999× |

Calibration variation above 2%: scalar citm_catalog.json gcc cpu A/A before: 0.972×; scalar citm_catalog.json gcc cpu A/A after: 0.972×; scalar citm_catalog.json gcc wall A/A before: 0.972×; scalar citm_catalog.json gcc wall A/A after: 0.972×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235)
