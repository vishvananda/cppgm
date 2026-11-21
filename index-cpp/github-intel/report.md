# index-cpp benchmarks

Compiler checkout: `7bc2ee42070147be1668ff16a16841c6e02b47e3` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.101× | 1.091× |
| Compile CPU | 6.231× | 5.099× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,754 | 230,928 |
| gcc | 540,112 | 280,921 | 486,048 |
| clang | 513,720 | 264,561 | 318,942 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.184 | 1.135 | 1.139 | 0.933× | 0.965× | gcc, clang |
| Base64::Encode | 1.265 | 1.351 | 1.097 | 1.063× | 0.885× | gcc, clang |
| Binarytrees::Arena | 2.260 | 2.351 | 2.417 | 1.035× | 1.089× | — |
| Binarytrees::Obj | 1.128 | 1.035 | 1.352 | 0.904× | 1.212× | clang |
| Brainfuck::Array | 1.518 | 1.655 | 1.716 | 1.089× | 1.130× | — |
| Brainfuck::Recursion | 1.146 | 1.209 | 1.421 | 1.056× | 1.239× | — |
| CLBG::Fannkuchredux | 0.881 | 0.962 | 0.831 | 1.093× | 0.943× | gcc |
| CLBG::Mandelbrot | 0.949 | 0.978 | 0.971 | 1.028× | 1.022× | — |
| CLBG::Nbody | 0.659 | 0.623 | 0.635 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.898 | 0.937 | 1.317 | 1.045× | 1.466× | — |
| CSV::Parse | 0.853 | 0.793 | 0.933 | 0.933× | 1.094× | — |
| Calculator::Ast | 0.917 | 0.871 | 0.893 | 0.947× | 0.978× | — |
| Calculator::Interpreter | 1.500 | 1.458 | 1.550 | 0.979× | 1.029× | gcc |
| Compress::ArithDecode | 0.869 | 1.012 | 1.491 | 1.165× | 1.714× | — |
| Compress::ArithEncode | 1.004 | 0.998 | 1.075 | 0.995× | 1.069× | — |
| Compress::BWTDecode | 1.313 | 1.315 | 1.317 | 1.002× | 1.002× | — |
| Compress::BWTEncode | 0.756 | 0.780 | 0.923 | 1.031× | 1.221× | — |
| Compress::HuffDecode | 0.419 | 0.727 | 0.393 | 1.727× | 0.942× | — |
| Compress::HuffEncode | 0.808 | 0.929 | 0.833 | 1.150× | 1.031× | — |
| Compress::LZWDecode | 0.569 | 0.573 | 0.554 | 1.011× | 0.974× | clang |
| Compress::LZWEncode | 0.968 | 0.949 | 0.950 | 0.981× | 0.982× | — |
| Distance::Jaro | 1.157 | 1.189 | 1.205 | 1.028× | 1.041× | — |
| Distance::NGram | 1.172 | 1.186 | 1.125 | 1.011× | 0.959× | — |
| Etc::CacheSimulation | 0.817 | 0.786 | 0.806 | 0.963× | 0.989× | — |
| Etc::GameOfLife | 1.143 | 1.179 | 1.160 | 1.005× | 1.002× | gcc, clang |
| Etc::LogParser | 0.397 | 1.193 | 0.440 | 3.012× | 1.110× | — |
| Etc::NeuralNet | 0.781 | 0.726 | 0.708 | 0.928× | 0.907× | — |
| Etc::Sieve | 2.431 | 3.122 | 2.447 | 1.279× | 0.998× | gcc, clang |
| Etc::TextRaytracer | 0.647 | 0.633 | 0.827 | 0.977× | 1.277× | — |
| Etc::Words | 0.932 | 0.902 | 0.909 | 0.967× | 0.976× | — |
| Graph::AStar | 1.098 | 1.317 | 1.126 | 1.193× | 1.021× | clang |
| Graph::BFS | 1.054 | 1.040 | 1.026 | 1.004× | 0.980× | — |
| Graph::DFS | 1.127 | 1.083 | 1.080 | 0.958× | 0.968× | — |
| Hash::CRC32 | 0.244 | 0.715 | 1.005 | 2.926× | 4.110× | — |
| Hash::SHA256 | 0.337 | 0.915 | 0.780 | 2.715× | 2.315× | — |
| Json::Generate | 0.859 | 0.857 | 0.853 | 1.001× | 0.992× | — |
| Json::ParseDom | 1.019 | 0.987 | 0.981 | 0.968× | 0.967× | — |
| Json::ParseMapping | 0.967 | 0.938 | 0.938 | 0.972× | 0.972× | — |
| Matmul::Single | 0.766 | 0.759 | 0.770 | 0.990× | 1.007× | — |
| Matmul::T16 | 1.641 | 1.636 | 1.631 | 0.998× | 0.989× | — |
| Matmul::T4 | 0.777 | 0.776 | 0.774 | 1.001× | 0.993× | — |
| Matmul::T8 | 0.841 | 0.857 | 0.844 | 1.015× | 1.011× | — |
| Maze::AStar | 1.794 | 1.714 | 1.833 | 0.978× | 1.023× | clang |
| Maze::BFS | 1.421 | 1.549 | 1.552 | 1.113× | 1.078× | gcc |
| Maze::Generator | 1.773 | 2.196 | 2.107 | 1.246× | 1.213× | gcc |
| Sort::Merge | 0.728 | 1.059 | 0.851 | 1.456× | 1.171× | — |
| Sort::Quick | 1.117 | 1.149 | 1.127 | 1.029× | 1.009× | — |
| Sort::Self | 1.179 | 1.089 | 1.106 | 0.924× | 0.938× | — |
| Template::Parse | 1.863 | 1.760 | 1.656 | 0.928× | 0.925× | gcc, clang |
| Template::Regex | 1.292 | 1.227 | 1.425 | 0.994× | 1.092× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.022×.
Compile clang A/A CPU ratio: 0.991×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294)
