# index-cpp benchmarks

Compiler checkout: `c37fb6f9de8fa22d3ae66364951928f39bbd5e25` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.077× | 1.062× |
| Compile CPU | 6.443× | 5.335× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 232,004 |
| gcc | 540,112 | 280,921 | 486,084 |
| clang | 513,720 | 264,561 | 319,480 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.167 | 0.950 | 0.993 | 0.816× | 0.846× | — |
| Base64::Encode | 1.382 | 1.191 | 1.003 | 0.866× | 0.726× | — |
| Binarytrees::Arena | 2.054 | 2.151 | 2.135 | 1.053× | 1.038× | — |
| Binarytrees::Obj | 1.984 | 1.918 | 2.005 | 0.933× | 0.997× | gcc |
| Brainfuck::Array | 1.530 | 2.138 | 1.565 | 1.414× | 1.001× | — |
| Brainfuck::Recursion | 1.173 | 1.182 | 1.147 | 1.012× | 0.971× | — |
| CLBG::Fannkuchredux | 0.892 | 0.982 | 0.901 | 1.090× | 1.015× | — |
| CLBG::Mandelbrot | 1.227 | 1.171 | 1.115 | 0.954× | 0.909× | — |
| CLBG::Nbody | 0.890 | 0.891 | 0.895 | 1.002× | 1.006× | — |
| CLBG::Spectralnorm | 0.892 | 0.927 | 1.577 | 1.039× | 1.769× | — |
| CSV::Parse | 0.908 | 0.821 | 0.907 | 0.908× | 0.997× | — |
| Calculator::Ast | 0.812 | 0.743 | 0.790 | 0.911× | 0.970× | — |
| Calculator::Interpreter | 1.192 | 1.042 | 1.206 | 0.907× | 1.008× | gcc |
| Compress::ArithDecode | 0.821 | 0.812 | 1.395 | 0.989× | 1.702× | — |
| Compress::ArithEncode | 0.927 | 0.855 | 0.952 | 0.921× | 1.026× | — |
| Compress::BWTDecode | 0.554 | 0.538 | 0.560 | 0.969× | 1.012× | — |
| Compress::BWTEncode | 0.831 | 0.855 | 0.983 | 1.027× | 1.199× | — |
| Compress::HuffDecode | 0.450 | 0.597 | 0.412 | 1.324× | 0.917× | — |
| Compress::HuffEncode | 0.728 | 0.776 | 0.918 | 1.065× | 1.268× | — |
| Compress::LZWDecode | 0.599 | 0.617 | 0.562 | 1.032× | 0.938× | — |
| Compress::LZWEncode | 1.015 | 0.977 | 0.994 | 0.964× | 0.982× | — |
| Distance::Jaro | 1.037 | 1.050 | 0.977 | 1.012× | 0.940× | — |
| Distance::NGram | 1.107 | 1.071 | 1.076 | 0.967× | 0.971× | — |
| Etc::CacheSimulation | 0.906 | 0.880 | 0.891 | 0.973× | 0.989× | — |
| Etc::GameOfLife | 1.077 | 0.958 | 1.135 | 0.933× | 0.974× | gcc, clang |
| Etc::LogParser | 0.414 | 1.766 | 0.519 | 4.225× | 1.256× | gcc, clang |
| Etc::NeuralNet | 0.972 | 0.841 | 0.818 | 0.918× | 0.902× | gcc, clang |
| Etc::Sieve | 1.185 | 1.567 | 1.193 | 1.322× | 1.006× | — |
| Etc::TextRaytracer | 0.895 | 0.881 | 1.060 | 0.984× | 1.184× | — |
| Etc::Words | 1.007 | 0.966 | 1.008 | 0.960× | 1.001× | — |
| Graph::AStar | 1.087 | 1.225 | 1.026 | 1.146× | 0.937× | — |
| Graph::BFS | 1.552 | 1.266 | 1.206 | 0.844× | 0.760× | gcc |
| Graph::DFS | 1.398 | 1.201 | 1.250 | 0.865× | 0.890× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.179 | 1.176 | 3.070× | 3.065× | — |
| Json::Generate | 0.769 | 0.773 | 0.778 | 1.010× | 1.014× | — |
| Json::ParseDom | 0.952 | 0.912 | 0.900 | 0.962× | 0.948× | — |
| Json::ParseMapping | 0.905 | 0.871 | 0.853 | 0.968× | 0.935× | clang |
| Matmul::Single | 1.181 | 1.187 | 1.187 | 1.006× | 1.003× | — |
| Matmul::T16 | 2.324 | 2.326 | 2.304 | 1.002× | 0.992× | — |
| Matmul::T4 | 1.163 | 1.167 | 1.163 | 1.004× | 1.000× | — |
| Matmul::T8 | 1.200 | 1.203 | 1.200 | 1.000× | 0.999× | gcc |
| Maze::AStar | 1.215 | 1.116 | 1.415 | 0.970× | 1.088× | gcc, clang |
| Maze::BFS | 1.105 | 0.982 | 1.239 | 0.993× | 1.069× | gcc, clang |
| Maze::Generator | 1.260 | 1.264 | 1.311 | 1.016× | 1.035× | gcc |
| Sort::Merge | 0.745 | 0.986 | 0.879 | 1.325× | 1.180× | — |
| Sort::Quick | 1.136 | 1.086 | 1.099 | 0.957× | 0.967× | — |
| Sort::Self | 1.098 | 1.040 | 1.058 | 0.948× | 0.964× | — |
| Template::Parse | 0.986 | 0.984 | 1.064 | 1.064× | 0.953× | gcc, clang |
| Template::Regex | 1.015 | 1.068 | 1.206 | 1.081× | 1.100× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.996×.
Compile clang A/A CPU ratio: 0.994×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.12.0 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956)
