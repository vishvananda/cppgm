# simdjson benchmarks

Compiler: `897807fd4b8c8a50f234a4480f91abe56a7760a8` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.639× | 1.684× | 3.533× | 1.633× |
| scalar | twitter.json | 1.027× | 0.921× | 1.027× | 0.921× |
| scalar | citm_catalog.json | 1.059× | 1.045× | 1.059× | 1.045× |
| sse | Compile | 3.813× | 1.842× | 3.715× | 1.803× |
| sse | twitter.json | 1.012× | 0.989× | 1.012× | 0.989× |
| sse | citm_catalog.json | 0.996× | 1.030× | 0.996× | 1.030× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.1 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957)
