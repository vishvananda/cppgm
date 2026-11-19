# index-cpp benchmarks

Compiler checkout: `56c86f755ec2b56e235b3f5e5ff76e6d147c3f93` · CPU: AMD EPYC 7763 64-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.061× | 1.059× |
| Compile CPU | 6.371× | 5.854× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,546 |
| gcc | 540,112 | 280,921 | 485,982 |
| clang | 513,720 | 264,561 | 319,334 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.382 | 1.182 | 1.191 | 0.856× | 0.861× | — |
| Base64::Encode | 1.717 | 1.413 | 1.264 | 0.823× | 0.735× | — |
| Binarytrees::Arena | 2.346 | 2.406 | 2.489 | 1.024× | 1.059× | — |
| Binarytrees::Obj | 1.389 | 1.329 | 1.555 | 0.948× | 1.117× | clang |
| Brainfuck::Array | 2.655 | 2.809 | 2.866 | 1.050× | 1.114× | — |
| Brainfuck::Recursion | 1.743 | 1.742 | 1.699 | 1.002× | 0.970× | — |
| CLBG::Fannkuchredux | 0.980 | 1.147 | 0.976 | 1.165× | 0.996× | — |
| CLBG::Mandelbrot | 1.365 | 1.350 | 1.336 | 0.989× | 0.979× | — |
| CLBG::Nbody | 1.038 | 1.057 | 1.058 | 1.016× | 1.019× | — |
| CLBG::Spectralnorm | 1.184 | 1.139 | 1.736 | 0.964× | 1.466× | — |
| CSV::Parse | 1.216 | 1.086 | 1.149 | 0.896× | 0.945× | — |
| Calculator::Ast | 1.025 | 0.961 | 0.980 | 0.926× | 0.959× | — |
| Calculator::Interpreter | 1.332 | 1.231 | 1.349 | 0.921× | 1.009× | — |
| Compress::ArithDecode | 0.938 | 0.947 | 1.603 | 1.009× | 1.709× | — |
| Compress::ArithEncode | 1.079 | 0.981 | 1.110 | 0.909× | 1.029× | — |
| Compress::BWTDecode | 0.639 | 0.645 | 0.656 | 1.010× | 1.026× | — |
| Compress::BWTEncode | 1.101 | 1.097 | 1.351 | 0.996× | 1.227× | — |
| Compress::HuffDecode | 0.615 | 0.774 | 0.513 | 1.248× | 0.837× | — |
| Compress::HuffEncode | 0.982 | 1.227 | 1.034 | 1.248× | 1.053× | — |
| Compress::LZWDecode | 0.740 | 0.732 | 0.697 | 0.993× | 0.942× | — |
| Compress::LZWEncode | 1.326 | 1.293 | 1.293 | 0.964× | 0.978× | — |
| Distance::Jaro | 1.210 | 1.169 | 1.149 | 0.966× | 0.950× | — |
| Distance::NGram | 1.368 | 1.324 | 1.284 | 0.966× | 0.939× | — |
| Etc::CacheSimulation | 1.144 | 1.111 | 1.109 | 0.965× | 0.973× | — |
| Etc::GameOfLife | 1.173 | 1.089 | 1.152 | 0.931× | 0.984× | gcc |
| Etc::LogParser | 0.519 | 1.955 | 0.663 | 3.724× | 1.266× | gcc |
| Etc::NeuralNet | 1.249 | 1.107 | 1.079 | 0.882× | 0.823× | gcc |
| Etc::Sieve | 1.379 | 1.813 | 1.373 | 1.315× | 0.994× | — |
| Etc::TextRaytracer | 1.039 | 1.019 | 1.339 | 0.978× | 1.289× | — |
| Etc::Words | 1.314 | 1.277 | 1.321 | 0.971× | 1.004× | — |
| Graph::AStar | 1.115 | 1.268 | 1.024 | 1.136× | 0.919× | — |
| Graph::BFS | 1.311 | 1.067 | 1.006 | 0.822× | 0.759× | — |
| Graph::DFS | 1.272 | 1.094 | 1.158 | 0.858× | 0.906× | — |
| Hash::CRC32 | 0.293 | 0.806 | 0.915 | 2.749× | 3.123× | — |
| Hash::SHA256 | 0.452 | 1.473 | 1.380 | 3.254× | 3.050× | — |
| Json::Generate | 1.140 | 1.131 | 1.139 | 1.002× | 1.000× | — |
| Json::ParseDom | 1.277 | 1.192 | 1.184 | 0.930× | 0.928× | — |
| Json::ParseMapping | 1.216 | 1.132 | 1.129 | 0.930× | 0.931× | — |
| Matmul::Single | 1.386 | 1.385 | 1.383 | 0.999× | 0.998× | — |
| Matmul::T16 | 2.628 | 2.636 | 2.627 | 0.989× | 1.006× | — |
| Matmul::T4 | 1.353 | 1.353 | 1.354 | 1.000× | 1.000× | — |
| Matmul::T8 | 1.373 | 1.373 | 1.376 | 1.000× | 1.002× | — |
| Maze::AStar | 1.073 | 0.974 | 1.121 | 0.908× | 1.050× | — |
| Maze::BFS | 1.104 | 1.104 | 1.194 | 0.966× | 1.085× | gcc, clang |
| Maze::Generator | 1.138 | 1.170 | 1.170 | 1.033× | 1.028× | — |
| Sort::Merge | 0.861 | 1.127 | 1.024 | 1.309× | 1.189× | — |
| Sort::Quick | 1.351 | 1.232 | 1.250 | 0.912× | 0.926× | — |
| Sort::Self | 1.258 | 1.205 | 1.228 | 0.958× | 0.975× | — |
| Template::Parse | 1.147 | 1.148 | 1.151 | 1.002× | 1.007× | gcc |
| Template::Regex | 1.199 | 1.260 | 1.419 | 1.053× | 1.191× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.009×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398)
