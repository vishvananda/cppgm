# index-cpp benchmarks

Compiler checkout: `f14c300df24c805416e28f06d41b201a035b60c7` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.067× | 1.056× |
| Compile CPU | 6.387× | 5.915× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,736 |
| gcc | 540,112 | 280,921 | 486,030 |
| clang | 513,720 | 264,561 | 319,104 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.389 | 1.181 | 1.196 | 0.854× | 0.859× | — |
| Base64::Encode | 1.722 | 1.418 | 1.275 | 0.825× | 0.739× | — |
| Binarytrees::Arena | 2.385 | 2.426 | 2.527 | 1.025× | 1.052× | — |
| Binarytrees::Obj | 1.456 | 1.301 | 1.584 | 0.894× | 1.080× | clang |
| Brainfuck::Array | 2.533 | 2.810 | 2.694 | 1.083× | 1.060× | — |
| Brainfuck::Recursion | 1.743 | 1.743 | 1.696 | 1.002× | 0.979× | — |
| CLBG::Fannkuchredux | 0.995 | 1.145 | 0.986 | 1.151× | 0.991× | — |
| CLBG::Mandelbrot | 1.365 | 1.350 | 1.336 | 0.989× | 0.978× | — |
| CLBG::Nbody | 1.038 | 1.058 | 1.058 | 1.017× | 1.020× | — |
| CLBG::Spectralnorm | 1.184 | 1.143 | 1.739 | 0.968× | 1.468× | — |
| CSV::Parse | 1.214 | 1.086 | 1.148 | 0.893× | 0.946× | — |
| Calculator::Ast | 1.038 | 0.959 | 0.976 | 0.925× | 0.940× | — |
| Calculator::Interpreter | 1.344 | 1.250 | 1.360 | 0.949× | 1.013× | — |
| Compress::ArithDecode | 0.938 | 0.945 | 1.604 | 1.009× | 1.712× | — |
| Compress::ArithEncode | 1.079 | 0.980 | 1.109 | 0.908× | 1.026× | — |
| Compress::BWTDecode | 0.640 | 0.648 | 0.655 | 1.009× | 1.026× | — |
| Compress::BWTEncode | 1.111 | 1.132 | 1.357 | 1.007× | 1.215× | — |
| Compress::HuffDecode | 0.616 | 0.772 | 0.514 | 1.253× | 0.834× | — |
| Compress::HuffEncode | 0.984 | 1.230 | 1.031 | 1.248× | 1.048× | — |
| Compress::LZWDecode | 0.739 | 0.736 | 0.705 | 1.001× | 0.955× | — |
| Compress::LZWEncode | 1.336 | 1.299 | 1.307 | 0.982× | 0.979× | — |
| Distance::Jaro | 1.209 | 1.171 | 1.148 | 0.969× | 0.950× | — |
| Distance::NGram | 1.362 | 1.325 | 1.285 | 0.972× | 0.947× | — |
| Etc::CacheSimulation | 1.156 | 1.106 | 1.119 | 0.960× | 0.961× | — |
| Etc::GameOfLife | 1.196 | 1.102 | 1.167 | 0.931× | 0.970× | clang |
| Etc::LogParser | 0.521 | 1.944 | 0.657 | 3.738× | 1.262× | gcc |
| Etc::NeuralNet | 1.273 | 1.103 | 1.079 | 0.882× | 0.829× | gcc, clang |
| Etc::Sieve | 1.544 | 1.973 | 1.462 | 1.297× | 0.989× | gcc |
| Etc::TextRaytracer | 1.038 | 1.023 | 1.339 | 0.985× | 1.291× | — |
| Etc::Words | 1.310 | 1.288 | 1.331 | 0.986× | 1.026× | — |
| Graph::AStar | 1.139 | 1.284 | 1.053 | 1.135× | 0.919× | — |
| Graph::BFS | 1.411 | 1.113 | 1.068 | 0.829× | 0.759× | — |
| Graph::DFS | 1.318 | 1.134 | 1.204 | 0.875× | 0.911× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.749× | 3.123× | — |
| Hash::SHA256 | 0.452 | 1.475 | 1.379 | 3.260× | 3.048× | — |
| Json::Generate | 1.136 | 1.128 | 1.140 | 0.996× | 1.006× | — |
| Json::ParseDom | 1.281 | 1.204 | 1.191 | 0.937× | 0.930× | — |
| Json::ParseMapping | 1.220 | 1.144 | 1.135 | 0.938× | 0.931× | — |
| Matmul::Single | 1.387 | 1.385 | 1.385 | 0.999× | 0.997× | — |
| Matmul::T16 | 2.623 | 2.624 | 2.618 | 0.995× | 1.003× | — |
| Matmul::T4 | 1.355 | 1.354 | 1.354 | 1.000× | 0.999× | — |
| Matmul::T8 | 1.375 | 1.371 | 1.375 | 0.999× | 1.000× | — |
| Maze::AStar | 1.144 | 1.074 | 1.186 | 0.907× | 1.019× | gcc |
| Maze::BFS | 1.169 | 1.335 | 1.290 | 1.138× | 1.049× | gcc |
| Maze::Generator | 1.183 | 1.222 | 1.238 | 1.064× | 1.042× | — |
| Sort::Merge | 0.862 | 1.127 | 1.025 | 1.306× | 1.188× | — |
| Sort::Quick | 1.352 | 1.232 | 1.251 | 0.911× | 0.925× | — |
| Sort::Self | 1.260 | 1.206 | 1.231 | 0.958× | 0.977× | — |
| Template::Parse | 1.222 | 1.165 | 1.218 | 0.976× | 1.014× | gcc, clang |
| Template::Regex | 1.245 | 1.289 | 1.458 | 1.050× | 1.182× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.005×.
Compile clang A/A CPU ratio: 1.020×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44743598642)
