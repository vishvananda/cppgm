# index-cpp benchmarks

Compiler checkout: `0e83e16cfc2b07812fd972ecb73cd95be4783dad` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.100× | 1.085× |
| Compile CPU | 6.281× | 5.069× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 326,194 | 231,146 |
| gcc | 540,112 | 280,921 | 486,064 |
| clang | 513,720 | 264,561 | 319,382 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.992 | 0.735 | 0.837 | 0.742× | 0.847× | — |
| Base64::Encode | 0.905 | 1.010 | 0.789 | 1.114× | 0.871× | — |
| Binarytrees::Arena | 1.913 | 2.032 | 2.080 | 1.085× | 1.081× | clang |
| Binarytrees::Obj | 0.903 | 0.853 | 1.212 | 0.966× | 1.283× | gcc, clang |
| Brainfuck::Array | 1.633 | 1.659 | 1.706 | 1.014× | 1.042× | — |
| Brainfuck::Recursion | 1.127 | 1.208 | 1.423 | 1.072× | 1.266× | — |
| CLBG::Fannkuchredux | 0.897 | 0.968 | 0.835 | 1.074× | 0.938× | — |
| CLBG::Mandelbrot | 0.948 | 0.982 | 0.975 | 1.036× | 1.024× | — |
| CLBG::Nbody | 0.661 | 0.625 | 0.637 | 0.944× | 0.963× | — |
| CLBG::Spectralnorm | 0.979 | 0.940 | 1.320 | 0.959× | 1.348× | — |
| CSV::Parse | 0.850 | 0.795 | 0.929 | 0.934× | 1.092× | — |
| Calculator::Ast | 0.849 | 0.824 | 0.821 | 0.960× | 0.937× | clang |
| Calculator::Interpreter | 1.167 | 1.210 | 1.265 | 1.028× | 0.973× | gcc, clang |
| Compress::ArithDecode | 0.881 | 1.016 | 1.496 | 1.153× | 1.699× | — |
| Compress::ArithEncode | 1.006 | 1.000 | 1.079 | 0.995× | 1.074× | — |
| Compress::BWTDecode | 1.307 | 1.310 | 1.312 | 1.000× | 1.003× | — |
| Compress::BWTEncode | 0.755 | 0.779 | 0.925 | 1.032× | 1.222× | — |
| Compress::HuffDecode | 0.456 | 0.730 | 0.396 | 1.599× | 0.871× | — |
| Compress::HuffEncode | 0.820 | 0.933 | 0.835 | 1.136× | 1.018× | — |
| Compress::LZWDecode | 0.569 | 0.574 | 0.548 | 0.995× | 0.967× | — |
| Compress::LZWEncode | 0.958 | 0.950 | 0.959 | 0.988× | 1.001× | — |
| Distance::Jaro | 1.159 | 1.192 | 1.208 | 1.027× | 1.041× | — |
| Distance::NGram | 1.179 | 1.188 | 1.128 | 1.008× | 0.958× | gcc |
| Etc::CacheSimulation | 0.821 | 0.790 | 0.804 | 0.957× | 0.981× | — |
| Etc::GameOfLife | 1.102 | 1.151 | 1.097 | 1.020× | 0.987× | — |
| Etc::LogParser | 0.400 | 1.191 | 0.440 | 3.020× | 1.095× | gcc, clang |
| Etc::NeuralNet | 0.785 | 0.729 | 0.710 | 0.926× | 0.905× | — |
| Etc::Sieve | 2.424 | 3.130 | 2.406 | 1.283× | 0.992× | — |
| Etc::TextRaytracer | 0.647 | 0.636 | 0.829 | 0.980× | 1.281× | — |
| Etc::Words | 0.923 | 0.902 | 0.908 | 0.976× | 0.982× | — |
| Graph::AStar | 1.026 | 1.211 | 1.056 | 1.175× | 1.023× | gcc |
| Graph::BFS | 0.818 | 0.867 | 0.817 | 1.057× | 0.975× | gcc, clang |
| Graph::DFS | 1.064 | 1.012 | 1.026 | 0.947× | 0.967× | gcc, clang |
| Hash::CRC32 | 0.245 | 0.719 | 1.007 | 2.935× | 4.108× | — |
| Hash::SHA256 | 0.354 | 0.919 | 0.780 | 2.595× | 2.201× | — |
| Json::Generate | 0.854 | 0.858 | 0.853 | 1.001× | 0.997× | — |
| Json::ParseDom | 1.036 | 0.985 | 0.972 | 0.953× | 0.939× | — |
| Json::ParseMapping | 0.980 | 0.938 | 0.925 | 0.958× | 0.943× | — |
| Matmul::Single | 0.762 | 0.766 | 0.767 | 0.996× | 1.006× | — |
| Matmul::T16 | 1.649 | 1.643 | 1.634 | 0.989× | 0.992× | — |
| Matmul::T4 | 0.794 | 0.800 | 0.798 | 1.002× | 1.008× | — |
| Matmul::T8 | 0.841 | 0.841 | 0.839 | 0.992× | 1.002× | — |
| Maze::AStar | 0.970 | 1.103 | 0.964 | 1.097× | 1.065× | clang |
| Maze::BFS | 0.718 | 0.722 | 0.756 | 1.026× | 1.057× | — |
| Maze::Generator | 1.174 | 1.773 | 1.704 | 1.398× | 1.277× | gcc, clang |
| Sort::Merge | 0.728 | 1.060 | 0.849 | 1.457× | 1.167× | — |
| Sort::Quick | 1.115 | 1.149 | 1.125 | 1.031× | 1.010× | — |
| Sort::Self | 1.176 | 1.089 | 1.104 | 0.924× | 0.938× | — |
| Template::Parse | 1.056 | 1.077 | 1.086 | 1.011× | 1.026× | clang |
| Template::Regex | 0.915 | 0.962 | 1.096 | 1.044× | 1.198× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.995×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139)
