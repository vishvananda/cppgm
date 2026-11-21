# index-cpp benchmarks

Compiler checkout: `44d3c4a29971caff2cc064889ec96259f34e7504` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.079× | 1.071× |
| Compile CPU | 6.502× | 5.220× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,872 |
| gcc | 540,112 | 280,921 | 486,074 |
| clang | 513,720 | 264,561 | 318,902 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.281 | 1.034 | 1.091 | 0.803× | 0.875× | gcc, clang |
| Base64::Encode | 1.501 | 1.336 | 1.065 | 0.887× | 0.740× | clang |
| Binarytrees::Arena | 2.314 | 2.417 | 2.404 | 1.040× | 1.050× | clang |
| Binarytrees::Obj | 2.510 | 2.437 | 2.586 | 0.943× | 1.074× | gcc, clang |
| Brainfuck::Array | 1.426 | 2.322 | 1.570 | 1.559× | 1.195× | gcc |
| Brainfuck::Recursion | 1.136 | 1.256 | 1.209 | 1.113× | 1.082× | gcc |
| CLBG::Fannkuchredux | 0.980 | 1.081 | 0.998 | 1.105× | 1.010× | gcc, clang |
| CLBG::Mandelbrot | 1.335 | 1.276 | 1.179 | 0.951× | 0.904× | clang |
| CLBG::Nbody | 0.988 | 0.988 | 0.951 | 1.017× | 0.985× | — |
| CLBG::Spectralnorm | 1.053 | 1.024 | 1.717 | 0.963× | 1.647× | gcc |
| CSV::Parse | 0.994 | 0.929 | 0.988 | 0.922× | 1.047× | gcc |
| Calculator::Ast | 0.927 | 0.875 | 0.849 | 0.928× | 0.959× | clang |
| Calculator::Interpreter | 1.676 | 1.500 | 1.570 | 0.900× | 1.001× | gcc, clang |
| Compress::ArithDecode | 0.869 | 0.869 | 1.540 | 1.002× | 1.798× | — |
| Compress::ArithEncode | 0.984 | 0.948 | 1.025 | 0.961× | 1.042× | clang |
| Compress::BWTDecode | 0.599 | 0.592 | 0.601 | 0.952× | 0.998× | clang |
| Compress::BWTEncode | 0.913 | 0.952 | 1.121 | 1.038× | 1.235× | gcc |
| Compress::HuffDecode | 0.537 | 0.658 | 0.452 | 1.212× | 0.860× | clang |
| Compress::HuffEncode | 0.873 | 0.865 | 1.000 | 0.974× | 1.140× | clang |
| Compress::LZWDecode | 0.651 | 0.665 | 0.596 | 1.043× | 0.935× | clang |
| Compress::LZWEncode | 1.103 | 1.131 | 1.092 | 1.004× | 1.006× | clang |
| Distance::Jaro | 1.117 | 1.159 | 1.068 | 0.997× | 0.956× | clang |
| Distance::NGram | 1.224 | 1.189 | 1.153 | 0.981× | 0.948× | — |
| Etc::CacheSimulation | 0.974 | 0.956 | 0.934 | 0.996× | 0.964× | clang |
| Etc::GameOfLife | 1.320 | 1.230 | 1.264 | 0.943× | 1.017× | clang |
| Etc::LogParser | 0.447 | 1.934 | 0.538 | 4.352× | 1.268× | gcc, clang |
| Etc::NeuralNet | 1.054 | 0.952 | 0.895 | 0.877× | 0.869× | gcc, clang |
| Etc::Sieve | 1.288 | 1.704 | 1.292 | 1.335× | 1.023× | — |
| Etc::TextRaytracer | 0.980 | 0.941 | 1.156 | 0.970× | 1.186× | gcc, clang |
| Etc::Words | 1.108 | 1.075 | 1.091 | 0.965× | 0.999× | — |
| Graph::AStar | 1.308 | 1.472 | 1.179 | 1.119× | 0.914× | — |
| Graph::BFS | 2.264 | 2.032 | 1.843 | 0.887× | 0.790× | — |
| Graph::DFS | 1.750 | 1.579 | 1.588 | 0.895× | 0.879× | — |
| Hash::CRC32 | 0.280 | 0.740 | 0.835 | 2.753× | 3.107× | gcc, clang |
| Hash::SHA256 | 0.405 | 1.304 | 1.252 | 3.184× | 3.045× | gcc, clang |
| Json::Generate | 0.855 | 0.859 | 0.832 | 0.963× | 1.019× | gcc |
| Json::ParseDom | 1.024 | 1.001 | 0.984 | 0.986× | 0.974× | gcc, clang |
| Json::ParseMapping | 1.014 | 0.952 | 0.920 | 0.934× | 0.946× | clang |
| Matmul::Single | 1.296 | 1.325 | 1.263 | 1.004× | 1.005× | clang |
| Matmul::T16 | 2.590 | 2.555 | 2.524 | 0.978× | 0.998× | gcc |
| Matmul::T4 | 1.277 | 1.298 | 1.251 | 1.006× | 1.003× | gcc |
| Matmul::T8 | 1.363 | 1.333 | 1.294 | 0.970× | 0.969× | — |
| Maze::AStar | 1.638 | 1.584 | 1.837 | 0.957× | 1.086× | gcc |
| Maze::BFS | 1.476 | 1.493 | 1.464 | 0.997× | 0.990× | clang |
| Maze::Generator | 1.962 | 2.064 | 1.962 | 1.006× | 1.012× | — |
| Sort::Merge | 0.802 | 1.067 | 0.950 | 1.344× | 1.151× | clang |
| Sort::Quick | 1.230 | 1.197 | 1.191 | 0.952× | 0.988× | clang |
| Sort::Self | 1.175 | 1.141 | 1.140 | 0.959× | 0.995× | clang |
| Template::Parse | 1.175 | 1.246 | 1.269 | 1.021× | 1.118× | clang |
| Template::Regex | 1.181 | 1.316 | 1.345 | 1.120× | 1.151× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.987×.
Compile clang A/A CPU ratio: 1.005×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069)
