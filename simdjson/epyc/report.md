# simdjson benchmarks

Compiler: `b3e8ffd61d008c80042a09444d6d607c4b7d7f0c` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.016× | 1.908× | 3.942× | 1.895× |
| scalar | twitter.json | 1.031× | 1.030× | 1.031× | 1.030× |
| scalar | citm_catalog.json | 1.001× | 1.115× | 1.001× | 1.114× |
| sse | Compile | 4.150× | 2.097× | 4.046× | 2.047× |
| sse | twitter.json | 1.014× | 1.000× | 1.014× | 1.000× |
| sse | citm_catalog.json | 1.010× | 1.011× | 1.010× | 1.011× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403)
