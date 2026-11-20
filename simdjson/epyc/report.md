# simdjson benchmarks

Compiler: `f14c300df24c805416e28f06d41b201a035b60c7` · CPU: AMD EPYC 9V45 96-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.175× | 1.862× | 4.139× | 1.830× |
| scalar | twitter.json | 1.115× | 1.074× | 1.115× | 1.074× |
| scalar | citm_catalog.json | 1.056× | 1.044× | 1.056× | 1.044× |
| sse | Compile | 4.124× | 1.862× | 4.079× | 1.827× |
| sse | twitter.json | 1.009× | 1.002× | 1.009× | 1.002× |
| sse | citm_catalog.json | 0.987× | 1.026× | 0.987× | 1.026× |

Calibration variation above 2%: scalar Compile clang cpu A/A before: 0.975×; scalar Compile clang wall A/A before: 0.972×; scalar twitter.json gcc cpu A/A before: 1.022×; scalar twitter.json gcc wall A/A before: 1.021×; scalar twitter.json clang cpu A/A before: 1.030×; scalar twitter.json clang wall A/A before: 1.030×; scalar citm_catalog.json clang cpu A/A after: 0.979×; scalar citm_catalog.json clang wall A/A after: 0.979×; sse Compile gcc cpu A/A after: 1.027×; sse Compile clang cpu A/A before: 0.971×; sse Compile clang wall A/A before: 0.976×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44743598642)
