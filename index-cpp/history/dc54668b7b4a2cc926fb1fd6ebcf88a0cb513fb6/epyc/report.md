# index-cpp benchmarks

Compiler checkout: `dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.074× | 1.061× |
| Compile CPU | 6.439× | 5.291× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,936 |
| gcc | 540,112 | 280,921 | 486,088 |
| clang | 513,720 | 264,561 | 319,262 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.163 | 0.948 | 0.990 | 0.815× | 0.849× | — |
| Base64::Encode | 1.376 | 1.192 | 0.998 | 0.865× | 0.727× | — |
| Binarytrees::Arena | 2.048 | 2.167 | 2.130 | 1.053× | 1.040× | — |
| Binarytrees::Obj | 2.013 | 1.925 | 1.960 | 0.955× | 0.984× | gcc |
| Brainfuck::Array | 1.502 | 2.139 | 1.509 | 1.436× | 1.013× | — |
| Brainfuck::Recursion | 1.172 | 1.179 | 1.147 | 1.005× | 0.973× | — |
| CLBG::Fannkuchredux | 0.891 | 0.976 | 0.900 | 1.085× | 1.002× | clang |
| CLBG::Mandelbrot | 1.228 | 1.171 | 1.115 | 0.953× | 0.908× | — |
| CLBG::Nbody | 0.889 | 0.891 | 0.895 | 1.002× | 1.007× | — |
| CLBG::Spectralnorm | 0.893 | 0.927 | 1.575 | 1.038× | 1.764× | — |
| CSV::Parse | 0.908 | 0.821 | 0.912 | 0.902× | 1.002× | — |
| Calculator::Ast | 0.813 | 0.746 | 0.782 | 0.917× | 0.962× | — |
| Calculator::Interpreter | 1.121 | 1.038 | 1.125 | 0.924× | 1.008× | — |
| Compress::ArithDecode | 0.821 | 0.812 | 1.396 | 0.988× | 1.699× | — |
| Compress::ArithEncode | 0.928 | 0.854 | 0.955 | 0.921× | 1.027× | — |
| Compress::BWTDecode | 0.554 | 0.538 | 0.558 | 0.972× | 1.007× | — |
| Compress::BWTEncode | 0.831 | 0.853 | 0.994 | 1.025× | 1.189× | — |
| Compress::HuffDecode | 0.449 | 0.595 | 0.413 | 1.326× | 0.919× | — |
| Compress::HuffEncode | 0.726 | 0.775 | 0.917 | 1.069× | 1.253× | — |
| Compress::LZWDecode | 0.599 | 0.617 | 0.564 | 1.031× | 0.946× | — |
| Compress::LZWEncode | 1.014 | 0.979 | 0.996 | 0.966× | 0.984× | — |
| Distance::Jaro | 1.038 | 1.051 | 0.978 | 1.013× | 0.941× | — |
| Distance::NGram | 1.109 | 1.071 | 1.051 | 0.967× | 0.944× | — |
| Etc::CacheSimulation | 0.904 | 0.883 | 0.899 | 0.977× | 1.002× | — |
| Etc::GameOfLife | 1.019 | 0.953 | 1.013 | 0.936× | 1.000× | — |
| Etc::LogParser | 0.415 | 1.743 | 0.524 | 4.259× | 1.275× | — |
| Etc::NeuralNet | 0.972 | 0.829 | 0.817 | 0.852× | 0.846× | clang |
| Etc::Sieve | 1.179 | 1.559 | 1.188 | 1.323× | 1.007× | — |
| Etc::TextRaytracer | 0.894 | 0.881 | 1.062 | 0.984× | 1.187× | — |
| Etc::Words | 1.004 | 0.962 | 1.011 | 0.965× | 1.000× | — |
| Graph::AStar | 1.038 | 1.186 | 0.956 | 1.133× | 0.923× | clang |
| Graph::BFS | 1.449 | 1.248 | 1.101 | 0.826× | 0.764× | — |
| Graph::DFS | 1.386 | 1.216 | 1.223 | 0.863× | 0.884× | — |
| Hash::CRC32 | 0.257 | 0.706 | 0.802 | 2.747× | 3.121× | — |
| Hash::SHA256 | 0.383 | 1.169 | 1.178 | 3.051× | 3.076× | — |
| Json::Generate | 0.769 | 0.768 | 0.774 | 0.999× | 1.007× | gcc |
| Json::ParseDom | 0.954 | 0.911 | 0.887 | 0.954× | 0.928× | — |
| Json::ParseMapping | 0.907 | 0.867 | 0.847 | 0.955× | 0.930× | — |
| Matmul::Single | 1.187 | 1.186 | 1.185 | 1.000× | 0.996× | — |
| Matmul::T16 | 2.308 | 2.296 | 2.279 | 1.000× | 0.987× | — |
| Matmul::T4 | 1.163 | 1.167 | 1.163 | 1.003× | 1.000× | — |
| Matmul::T8 | 1.201 | 1.203 | 1.199 | 0.999× | 1.000× | — |
| Maze::AStar | 1.054 | 1.003 | 1.115 | 0.942× | 1.075× | — |
| Maze::BFS | 0.868 | 0.905 | 0.901 | 1.025× | 1.046× | — |
| Maze::Generator | 1.265 | 1.313 | 1.276 | 1.008× | 1.016× | gcc |
| Sort::Merge | 0.745 | 0.988 | 0.879 | 1.326× | 1.179× | — |
| Sort::Quick | 1.137 | 1.085 | 1.099 | 0.953× | 0.967× | — |
| Sort::Self | 1.098 | 1.040 | 1.056 | 0.948× | 0.963× | — |
| Template::Parse | 0.917 | 0.952 | 0.953 | 1.036× | 1.046× | gcc |
| Template::Regex | 0.983 | 1.039 | 1.095 | 1.056× | 1.139× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.995×.
Compile clang A/A CPU ratio: 1.001×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.1 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989)
