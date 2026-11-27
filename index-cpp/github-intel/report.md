# index-cpp benchmarks

Compiler checkout: `fc7c4523cba2e80b1a19ce5f207866232b207872` · CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.091× | 1.076× |
| Compile CPU | 6.452× | 5.532× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,902 |
| gcc | 540,112 | 280,921 | 486,034 |
| clang | 513,720 | 264,561 | 319,154 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.196 | 1.086 | 1.207 | 0.901× | 1.019× | gcc, clang |
| Base64::Encode | 1.485 | 1.573 | 1.329 | 1.056× | 0.905× | gcc, clang |
| Binarytrees::Arena | 2.397 | 2.542 | 2.529 | 1.063× | 1.060× | clang |
| Binarytrees::Obj | 1.902 | 1.895 | 2.051 | 1.002× | 1.085× | clang |
| Brainfuck::Array | 1.587 | 2.076 | 1.979 | 1.306× | 1.248× | — |
| Brainfuck::Recursion | 1.447 | 1.618 | 1.348 | 1.116× | 0.933× | clang |
| CLBG::Fannkuchredux | 0.938 | 1.075 | 0.946 | 1.150× | 1.016× | — |
| CLBG::Mandelbrot | 1.665 | 1.644 | 1.655 | 0.988× | 0.994× | — |
| CLBG::Nbody | 0.932 | 0.884 | 0.904 | 0.949× | 0.968× | — |
| CLBG::Spectralnorm | 1.278 | 1.352 | 1.783 | 1.060× | 1.395× | gcc |
| CSV::Parse | 1.089 | 1.018 | 1.091 | 0.936× | 0.999× | — |
| Calculator::Ast | 1.228 | 1.147 | 1.168 | 0.926× | 0.948× | gcc |
| Calculator::Interpreter | 2.366 | 2.064 | 2.084 | 0.903× | 0.937× | gcc, clang |
| Compress::ArithDecode | 1.028 | 1.136 | 1.642 | 1.101× | 1.597× | — |
| Compress::ArithEncode | 1.155 | 1.190 | 1.253 | 1.031× | 1.086× | — |
| Compress::BWTDecode | 1.348 | 1.378 | 1.396 | 0.998× | 1.030× | gcc |
| Compress::BWTEncode | 1.014 | 1.065 | 1.176 | 1.063× | 1.169× | — |
| Compress::HuffDecode | 0.556 | 0.908 | 0.504 | 1.573× | 0.912× | — |
| Compress::HuffEncode | 0.923 | 0.996 | 1.085 | 1.081× | 1.179× | — |
| Compress::LZWDecode | 0.754 | 0.732 | 0.710 | 0.999× | 0.951× | gcc |
| Compress::LZWEncode | 1.127 | 1.102 | 1.123 | 0.977× | 0.998× | — |
| Distance::Jaro | 1.288 | 1.288 | 1.289 | 1.000× | 1.000× | — |
| Distance::NGram | 1.435 | 1.415 | 1.363 | 0.985× | 0.950× | — |
| Etc::CacheSimulation | 1.023 | 0.980 | 1.031 | 0.959× | 1.006× | — |
| Etc::GameOfLife | 1.998 | 1.507 | 1.681 | 0.786× | 0.834× | gcc, clang |
| Etc::LogParser | 0.512 | 1.363 | 0.571 | 2.662× | 1.114× | gcc |
| Etc::NeuralNet | 1.172 | 1.035 | 1.051 | 0.880× | 0.899× | — |
| Etc::Sieve | 2.641 | 3.192 | 2.556 | 1.211× | 0.996× | gcc, clang |
| Etc::TextRaytracer | 1.020 | 0.996 | 1.205 | 0.976× | 1.183× | — |
| Etc::Words | 1.196 | 1.141 | 1.192 | 0.932× | 1.003× | — |
| Graph::AStar | 1.196 | 1.286 | 1.155 | 1.096× | 0.974× | gcc, clang |
| Graph::BFS | 1.132 | 1.123 | 1.120 | 0.993× | 0.991× | gcc |
| Graph::DFS | 1.216 | 1.171 | 1.167 | 0.960× | 0.969× | gcc |
| Hash::CRC32 | 0.281 | 0.865 | 0.958 | 3.077× | 3.409× | — |
| Hash::SHA256 | 0.414 | 1.360 | 1.250 | 3.286× | 3.030× | — |
| Json::Generate | 1.133 | 1.126 | 1.129 | 0.993× | 1.002× | gcc |
| Json::ParseDom | 1.346 | 1.286 | 1.279 | 0.951× | 0.958× | clang |
| Json::ParseMapping | 1.276 | 1.219 | 1.260 | 0.951× | 0.987× | gcc, clang |
| Matmul::Single | 1.648 | 1.655 | 1.644 | 1.005× | 0.997× | — |
| Matmul::T16 | 3.239 | 3.322 | 3.244 | 1.026× | 1.000× | clang |
| Matmul::T4 | 1.649 | 1.657 | 1.644 | 0.999× | 0.996× | clang |
| Matmul::T8 | 1.686 | 1.728 | 1.700 | 1.025× | 1.013× | gcc |
| Maze::AStar | 2.071 | 2.150 | 2.325 | 1.020× | 1.108× | gcc |
| Maze::BFS | 1.675 | 1.773 | 1.773 | 1.051× | 1.096× | gcc, clang |
| Maze::Generator | 1.988 | 2.022 | 1.972 | 1.012× | 0.992× | clang |
| Sort::Merge | 0.837 | 1.204 | 0.984 | 1.441× | 1.175× | — |
| Sort::Quick | 1.306 | 1.330 | 1.313 | 1.018× | 1.004× | — |
| Sort::Self | 1.365 | 1.296 | 1.290 | 0.949× | 0.945× | — |
| Template::Parse | 2.418 | 2.684 | 2.243 | 1.070× | 0.968× | gcc, clang |
| Template::Regex | 1.901 | 1.881 | 1.978 | 0.933× | 1.066× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.999×.
Compile clang A/A CPU ratio: 0.983×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.5 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836)
