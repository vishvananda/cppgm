# simdjson benchmarks

Compiler: `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 6.609× | 3.043× | 6.429× | 2.996× |
| scalar | twitter.json | 1.022× | 0.921× | 1.022× | 0.921× |
| scalar | citm_catalog.json | 1.072× | 1.054× | 1.072× | 1.054× |
| sse | Compile | 6.429× | 3.099× | 6.354× | 2.968× |
| sse | twitter.json | 1.013× | 0.988× | 1.013× | 0.988× |
| sse | citm_catalog.json | 0.992× | 1.031× | 0.992× | 1.031× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.11.4 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032)
