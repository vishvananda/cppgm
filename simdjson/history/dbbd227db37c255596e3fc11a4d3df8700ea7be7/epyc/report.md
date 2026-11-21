# simdjson benchmarks

Compiler: `dbbd227db37c255596e3fc11a4d3df8700ea7be7` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.113× | 1.935× | 4.067× | 1.910× |
| scalar | twitter.json | 1.038× | 1.031× | 1.038× | 1.031× |
| scalar | citm_catalog.json | 0.963× | 1.073× | 0.963× | 1.074× |
| sse | Compile | 4.206× | 2.079× | 4.125× | 2.059× |
| sse | twitter.json | 1.014× | 0.998× | 1.014× | 0.998× |
| sse | citm_catalog.json | 1.009× | 1.003× | 1.009× | 1.003× |

Calibration variation above 2%: sse twitter.json clang cpu A/A before: 1.024×; sse twitter.json clang wall A/A before: 1.024×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.10.2 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903)
