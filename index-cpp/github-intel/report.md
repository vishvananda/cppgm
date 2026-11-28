# index-cpp benchmarks

Compiler checkout: `cebc59908fc34cebd8df5bff4a28b5fb14820320` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.094× | 1.081× |
| Compile CPU | 6.249× | 5.039× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,942 |
| gcc | 540,112 | 280,921 | 486,098 |
| clang | 513,720 | 264,561 | 318,980 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.003 | 0.733 | 0.837 | 0.735× | 0.834× | — |
| Base64::Encode | 0.905 | 1.007 | 0.789 | 1.112× | 0.872× | — |
| Binarytrees::Arena | 1.551 | 1.622 | 1.756 | 1.045× | 1.133× | — |
| Binarytrees::Obj | 0.841 | 0.767 | 0.976 | 0.908× | 1.161× | — |
| Brainfuck::Array | 1.516 | 1.650 | 1.700 | 1.090× | 1.121× | — |
| Brainfuck::Recursion | 1.151 | 1.210 | 1.417 | 1.048× | 1.231× | — |
| CLBG::Fannkuchredux | 0.879 | 0.961 | 0.831 | 1.092× | 0.947× | — |
| CLBG::Mandelbrot | 0.946 | 0.977 | 0.970 | 1.034× | 1.025× | — |
| CLBG::Nbody | 0.659 | 0.621 | 0.634 | 0.943× | 0.961× | — |
| CLBG::Spectralnorm | 0.896 | 0.936 | 1.314 | 1.045× | 1.466× | — |
| CSV::Parse | 0.847 | 0.794 | 0.928 | 0.938× | 1.096× | — |
| Calculator::Ast | 0.772 | 0.745 | 0.746 | 0.967× | 0.968× | — |
| Calculator::Interpreter | 1.135 | 1.105 | 1.146 | 0.966× | 0.998× | — |
| Compress::ArithDecode | 0.892 | 1.010 | 1.487 | 1.133× | 1.666× | — |
| Compress::ArithEncode | 1.000 | 0.995 | 1.074 | 0.995× | 1.074× | — |
| Compress::BWTDecode | 1.307 | 1.308 | 1.309 | 1.000× | 1.001× | — |
| Compress::BWTEncode | 0.754 | 0.776 | 0.923 | 1.030× | 1.224× | — |
| Compress::HuffDecode | 0.427 | 0.728 | 0.392 | 1.708× | 0.920× | — |
| Compress::HuffEncode | 0.808 | 0.930 | 0.831 | 1.149× | 1.018× | — |
| Compress::LZWDecode | 0.569 | 0.579 | 0.550 | 1.022× | 0.967× | — |
| Compress::LZWEncode | 0.968 | 0.943 | 0.952 | 0.975× | 0.986× | — |
| Distance::Jaro | 1.156 | 1.188 | 1.203 | 1.029× | 1.041× | — |
| Distance::NGram | 1.176 | 1.185 | 1.124 | 1.008× | 0.955× | — |
| Etc::CacheSimulation | 0.812 | 0.784 | 0.798 | 0.966× | 0.984× | — |
| Etc::GameOfLife | 1.131 | 1.155 | 1.110 | 1.020× | 0.978× | — |
| Etc::LogParser | 0.394 | 1.240 | 0.440 | 3.271× | 1.115× | clang |
| Etc::NeuralNet | 0.779 | 0.723 | 0.708 | 0.929× | 0.909× | — |
| Etc::Sieve | 2.434 | 3.155 | 2.428 | 1.291× | 0.993× | — |
| Etc::TextRaytracer | 0.647 | 0.633 | 0.826 | 0.978× | 1.278× | — |
| Etc::Words | 0.926 | 0.900 | 0.907 | 0.973× | 0.991× | — |
| Graph::AStar | 0.800 | 0.917 | 0.758 | 1.145× | 0.948× | — |
| Graph::BFS | 0.643 | 0.608 | 0.606 | 0.942× | 0.940× | gcc |
| Graph::DFS | 0.802 | 0.779 | 0.782 | 0.972× | 0.974× | — |
| Hash::CRC32 | 0.244 | 0.716 | 1.003 | 2.932× | 4.111× | — |
| Hash::SHA256 | 0.336 | 0.913 | 0.778 | 2.716× | 2.315× | — |
| Json::Generate | 0.856 | 0.861 | 0.855 | 1.006× | 0.998× | — |
| Json::ParseDom | 1.011 | 0.988 | 0.976 | 0.976× | 0.964× | — |
| Json::ParseMapping | 0.959 | 0.940 | 0.929 | 0.980× | 0.968× | — |
| Matmul::Single | 0.758 | 0.761 | 0.760 | 1.009× | 1.002× | clang |
| Matmul::T16 | 1.640 | 1.644 | 1.625 | 0.996× | 0.992× | — |
| Matmul::T4 | 0.779 | 0.778 | 0.777 | 0.997× | 0.997× | — |
| Matmul::T8 | 0.837 | 0.847 | 0.841 | 1.011× | 1.002× | — |
| Maze::AStar | 0.868 | 0.839 | 0.823 | 0.957× | 0.950× | — |
| Maze::BFS | 0.712 | 0.709 | 0.744 | 0.994× | 1.036× | — |
| Maze::Generator | 0.863 | 0.954 | 0.931 | 1.112× | 1.076× | gcc |
| Sort::Merge | 0.724 | 1.054 | 0.846 | 1.457× | 1.170× | — |
| Sort::Quick | 1.110 | 1.144 | 1.121 | 1.030× | 1.011× | — |
| Sort::Self | 1.174 | 1.082 | 1.099 | 0.922× | 0.936× | — |
| Template::Parse | 1.105 | 1.067 | 1.103 | 0.956× | 0.989× | — |
| Template::Regex | 0.918 | 0.960 | 1.099 | 1.041× | 1.192× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.004×.
Compile clang A/A CPU ratio: 0.992×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.13.0 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613)
