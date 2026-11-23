# simdjson benchmarks

Compiler: `cc79604cdc196d46abdebb888158e8b90d3cac52` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.631× | 1.691× | 3.592× | 1.692× |
| scalar | twitter.json | 1.021× | 0.918× | 1.021× | 0.918× |
| scalar | citm_catalog.json | 1.069× | 1.052× | 1.069× | 1.052× |
| sse | Compile | 3.794× | 1.819× | 3.699× | 1.785× |
| sse | twitter.json | 1.019× | 0.993× | 1.019× | 0.993× |
| sse | citm_catalog.json | 0.996× | 1.028× | 0.996× | 1.028× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.3 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099)
