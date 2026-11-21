# index-cpp benchmarks

Compiler checkout: `b3e8ffd61d008c80042a09444d6d607c4b7d7f0c` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.086× | 1.076× |
| Compile CPU | 6.323× | 5.054× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 231,114 |
| gcc | 540,112 | 280,921 | 486,026 |
| clang | 513,720 | 264,561 | 319,296 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.002 | 0.732 | 0.838 | 0.726× | 0.841× | — |
| Base64::Encode | 0.905 | 1.006 | 0.802 | 1.112× | 0.884× | — |
| Binarytrees::Arena | 1.849 | 1.897 | 2.019 | 1.052× | 1.101× | clang |
| Binarytrees::Obj | 0.887 | 0.814 | 1.156 | 0.934× | 1.286× | clang |
| Brainfuck::Array | 1.629 | 1.648 | 1.688 | 1.011× | 1.037× | — |
| Brainfuck::Recursion | 1.125 | 1.201 | 1.419 | 1.072× | 1.261× | — |
| CLBG::Fannkuchredux | 0.893 | 0.962 | 0.829 | 1.063× | 0.927× | — |
| CLBG::Mandelbrot | 0.948 | 0.977 | 0.970 | 1.031× | 1.023× | — |
| CLBG::Nbody | 0.659 | 0.623 | 0.634 | 0.948× | 0.962× | — |
| CLBG::Spectralnorm | 0.975 | 0.937 | 1.315 | 0.961× | 1.348× | — |
| CSV::Parse | 0.849 | 0.791 | 0.927 | 0.934× | 1.089× | — |
| Calculator::Ast | 0.823 | 0.762 | 0.778 | 0.925× | 0.921× | — |
| Calculator::Interpreter | 1.120 | 1.080 | 1.161 | 0.968× | 1.048× | — |
| Compress::ArithDecode | 0.876 | 1.011 | 1.488 | 1.154× | 1.699× | — |
| Compress::ArithEncode | 1.011 | 0.995 | 1.073 | 0.986× | 1.061× | — |
| Compress::BWTDecode | 1.308 | 1.308 | 1.310 | 1.000× | 1.002× | — |
| Compress::BWTEncode | 0.754 | 0.776 | 0.923 | 1.031× | 1.225× | — |
| Compress::HuffDecode | 0.444 | 0.728 | 0.392 | 1.642× | 0.869× | — |
| Compress::HuffEncode | 0.821 | 0.927 | 0.835 | 1.131× | 1.017× | — |
| Compress::LZWDecode | 0.577 | 0.573 | 0.555 | 0.993× | 0.963× | — |
| Compress::LZWEncode | 0.956 | 0.944 | 0.952 | 0.986× | 0.996× | — |
| Distance::Jaro | 1.157 | 1.188 | 1.203 | 1.027× | 1.040× | — |
| Distance::NGram | 1.170 | 1.187 | 1.125 | 1.013× | 0.960× | — |
| Etc::CacheSimulation | 0.819 | 0.784 | 0.806 | 0.957× | 0.983× | — |
| Etc::GameOfLife | 1.136 | 1.156 | 1.131 | 1.014× | 0.980× | — |
| Etc::LogParser | 0.395 | 1.194 | 0.440 | 2.999× | 1.116× | — |
| Etc::NeuralNet | 0.779 | 0.724 | 0.708 | 0.929× | 0.909× | — |
| Etc::Sieve | 2.441 | 3.135 | 2.434 | 1.283× | 0.997× | — |
| Etc::TextRaytracer | 0.645 | 0.633 | 0.826 | 0.980× | 1.280× | — |
| Etc::Words | 0.919 | 0.901 | 0.909 | 0.981× | 0.989× | — |
| Graph::AStar | 0.922 | 1.009 | 0.855 | 1.174× | 0.947× | gcc |
| Graph::BFS | 0.686 | 0.637 | 0.724 | 0.956× | 0.863× | clang |
| Graph::DFS | 0.963 | 0.855 | 0.978 | 0.962× | 0.943× | gcc |
| Hash::CRC32 | 0.244 | 0.716 | 1.003 | 2.932× | 4.113× | — |
| Hash::SHA256 | 0.352 | 0.913 | 0.777 | 2.593× | 2.206× | — |
| Json::Generate | 0.849 | 0.859 | 0.853 | 1.011× | 1.003× | — |
| Json::ParseDom | 1.022 | 0.982 | 0.972 | 0.960× | 0.948× | — |
| Json::ParseMapping | 0.970 | 0.935 | 0.926 | 0.961× | 0.954× | — |
| Matmul::Single | 0.764 | 0.760 | 0.766 | 1.002× | 0.994× | — |
| Matmul::T16 | 1.648 | 1.641 | 1.647 | 1.005× | 0.998× | — |
| Matmul::T4 | 0.779 | 0.778 | 0.782 | 0.999× | 1.003× | — |
| Matmul::T8 | 0.855 | 0.841 | 0.847 | 0.988× | 0.988× | — |
| Maze::AStar | 0.888 | 0.842 | 0.851 | 0.958× | 0.915× | — |
| Maze::BFS | 0.718 | 0.709 | 0.745 | 0.989× | 1.034× | — |
| Maze::Generator | 1.023 | 1.218 | 1.421 | 1.123× | 1.184× | gcc, clang |
| Sort::Merge | 0.726 | 1.055 | 0.847 | 1.452× | 1.167× | — |
| Sort::Quick | 1.111 | 1.144 | 1.122 | 1.030× | 1.010× | — |
| Sort::Self | 1.173 | 1.083 | 1.099 | 0.923× | 0.937× | — |
| Template::Parse | 1.054 | 1.040 | 1.094 | 0.988× | 1.028× | — |
| Template::Regex | 0.915 | 0.948 | 1.097 | 1.036× | 1.199× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.002×.
Compile clang A/A CPU ratio: 1.004×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403)
