# simdjson benchmarks

Compiler: `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` · CPU: AMD EPYC 7763 64-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 7.023× | 3.653× | 6.637× | 3.489× |
| scalar | twitter.json | 1.098× | 1.002× | 1.098× | 1.002× |
| scalar | citm_catalog.json | 1.010× | 1.068× | 1.010× | 1.068× |
| sse | Compile | 6.776× | 3.836× | 6.522× | 3.715× |
| sse | twitter.json | 1.016× | 1.011× | 1.016× | 1.011× |
| sse | citm_catalog.json | 1.013× | 0.998× | 1.013× | 0.998× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.11.4 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565)
