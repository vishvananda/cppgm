# simdjson benchmarks

Compiler: `cebc59908fc34cebd8df5bff4a28b5fb14820320` · CPU: Intel(R) Xeon(R) 6975P-C

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 6.566× | 3.007× | 6.322× | 2.891× |
| scalar | twitter.json | 1.029× | 0.920× | 1.029× | 0.920× |
| scalar | citm_catalog.json | 1.065× | 1.055× | 1.065× | 1.055× |
| sse | Compile | 6.404× | 3.060× | 6.210× | 2.968× |
| sse | twitter.json | 1.014× | 0.989× | 1.014× | 0.989× |
| sse | citm_catalog.json | 0.987× | 1.028× | 0.987× | 1.028× |

Calibration variation above 2%: none. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.13.0 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613)
