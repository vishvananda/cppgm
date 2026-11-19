# simdjson benchmarks

Compiler: `56c86f755ec2b56e235b3f5e5ff76e6d147c3f93` · CPU: AMD EPYC 9V74 80-Core Processor

Unmodified simdjson v5.1.1 (`40a686ab89dc5ee58ec10d0514dd5c99abbc472b`), C++17 `-O3 -g0 -DNDEBUG`. Each backend is compiled separately; the SSE profile enables `-mpopcnt` for all three compilers. Compile times cover `src/simdjson.cpp` to an object; runtime covers repeated DOM parsing of hot input with a reused parser. One GCC-built driver per backend isolates library code generation. All three libraries produce identical canonical JSON for both inputs.

Ratios are reference time / cppgm time: **higher is better**. Medians of paired ABBA/BAAB block ratios; A/A calibration before and after each comparison.

| Backend | Measurement | vs GCC CPU | vs Clang CPU | vs GCC wall | vs Clang wall |
|---|---|---:|---:|---:|---:|
| scalar | Compile | 4.037× | 1.918× | 3.928× | 1.871× |
| scalar | twitter.json | 1.035× | 1.025× | 1.035× | 1.025× |
| scalar | citm_catalog.json | 1.003× | 1.116× | 1.003× | 1.116× |
| sse | Compile | 4.127× | 2.071× | 4.091× | 2.042× |
| sse | twitter.json | 1.015× | 0.998× | 1.015× | 0.998× |
| sse | citm_catalog.json | 1.004× | 1.004× | 1.005× | 1.004× |

Calibration variation above 2%: scalar Compile gcc cpu A/A after: 0.978×; scalar Compile gcc wall A/A after: 0.975×; scalar Compile clang cpu A/A before: 1.033×; scalar Compile clang wall A/A before: 1.032×; scalar citm_catalog.json gcc cpu A/A after: 1.021×; scalar citm_catalog.json gcc wall A/A after: 1.021×; sse Compile gcc wall A/A before: 1.029×; sse citm_catalog.json gcc cpu A/A after: 1.025×; sse citm_catalog.json gcc wall A/A after: 1.025×. No observations are dropped.

## Toolchains

- cppgm: cppgm 0.9.8 (host configuration: g++)
- gcc: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- clang: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results and per-block ratios](results.json) · [Provenance and header hashes](metadata.json) · [Compile observations](compile-observations.jsonl) · [Runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398)
