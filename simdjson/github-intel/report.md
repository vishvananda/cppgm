# simdjson benchmarks

Compiler: `44d3c4a29971caff2cc064889ec96259f34e7504` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 3.698× | 1.712× | 3.610× | 1.672× |
| scalar | twitter.json | 1.028× | 0.922× | 1.029× | 0.922× |
| scalar | citm_catalog.json | 1.059× | 1.045× | 1.059× | 1.045× |
| sse | Compile | 3.842× | 1.836× | 3.811× | 1.849× |
| sse | twitter.json | 1.007× | 0.986× | 1.007× | 0.986× |
| sse | citm_catalog.json | 0.995× | 1.030× | 0.995× | 1.030× |

Calibration variation above 2%: scalar Compile clang wall A/A before: 0.977×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069)
