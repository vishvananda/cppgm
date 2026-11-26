# index-cpp benchmarks

Compiler checkout: `49adadaefcc6510c6c725be8d3c780b397e68bc5` · CPU: AMD EPYC 9V45 96-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.070× | 1.059× |
| Compile CPU | 6.335× | 5.079× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,998 |
| gcc | 540,112 | 280,921 | 486,106 |
| clang | 513,720 | 264,561 | 319,372 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.874 | 0.709 | 0.719 | 0.808× | 0.845× | — |
| Base64::Encode | 0.946 | 0.901 | 0.693 | 0.915× | 0.737× | — |
| Binarytrees::Arena | 1.612 | 1.683 | 1.657 | 1.015× | 1.045× | gcc |
| Binarytrees::Obj | 0.716 | 0.670 | 0.760 | 0.945× | 1.091× | gcc, clang |
| Brainfuck::Array | 1.152 | 1.469 | 1.292 | 1.281× | 1.118× | gcc |
| Brainfuck::Recursion | 0.894 | 0.770 | 0.863 | 0.838× | 0.961× | gcc, clang |
| CLBG::Fannkuchredux | 0.814 | 0.810 | 0.837 | 1.009× | 1.023× | — |
| CLBG::Mandelbrot | 0.899 | 0.886 | 0.912 | 0.998× | 1.010× | — |
| CLBG::Nbody | 0.653 | 0.663 | 0.655 | 1.016× | 0.995× | — |
| CLBG::Spectralnorm | 0.685 | 0.753 | 1.047 | 1.101× | 1.526× | clang |
| CSV::Parse | 0.656 | 0.617 | 0.662 | 0.904× | 1.018× | gcc |
| Calculator::Ast | 0.623 | 0.637 | 0.604 | 1.033× | 0.978× | gcc |
| Calculator::Interpreter | 0.794 | 0.820 | 0.819 | 0.991× | 1.059× | clang |
| Compress::ArithDecode | 0.700 | 0.700 | 1.241 | 0.974× | 1.812× | gcc |
| Compress::ArithEncode | 0.877 | 0.796 | 0.820 | 0.913× | 0.909× | — |
| Compress::BWTDecode | 0.439 | 0.427 | 0.428 | 0.958× | 0.992× | gcc, clang |
| Compress::BWTEncode | 0.595 | 0.629 | 0.762 | 1.042× | 1.298× | — |
| Compress::HuffDecode | 0.291 | 0.396 | 0.271 | 1.376× | 0.934× | — |
| Compress::HuffEncode | 0.534 | 0.526 | 0.710 | 0.974× | 1.349× | gcc |
| Compress::LZWDecode | 0.422 | 0.430 | 0.404 | 1.007× | 0.971× | clang |
| Compress::LZWEncode | 0.776 | 0.768 | 0.746 | 0.970× | 0.978× | — |
| Distance::Jaro | 0.945 | 0.940 | 0.915 | 0.998× | 0.980× | clang |
| Distance::NGram | 0.935 | 0.905 | 0.893 | 0.966× | 0.973× | — |
| Etc::CacheSimulation | 0.661 | 0.620 | 0.641 | 0.919× | 0.986× | — |
| Etc::GameOfLife | 1.016 | 0.897 | 0.726 | 0.764× | 0.799× | gcc, clang |
| Etc::LogParser | 0.262 | 0.897 | 0.297 | 3.335× | 1.297× | gcc, clang |
| Etc::NeuralNet | 0.727 | 0.663 | 0.635 | 0.902× | 0.865× | gcc, clang |
| Etc::Sieve | 0.950 | 1.337 | 0.860 | 1.386× | 0.935× | gcc |
| Etc::TextRaytracer | 0.624 | 0.621 | 0.746 | 0.956× | 1.223× | gcc |
| Etc::Words | 0.756 | 0.733 | 0.749 | 0.956× | 1.005× | gcc |
| Graph::AStar | 0.997 | 1.112 | 0.929 | 1.093× | 0.945× | — |
| Graph::BFS | 1.165 | 1.407 | 1.120 | 1.167× | 0.996× | clang |
| Graph::DFS | 1.260 | 1.136 | 1.130 | 0.915× | 0.956× | — |
| Hash::CRC32 | 0.217 | 0.607 | 0.683 | 2.795× | 3.182× | gcc |
| Hash::SHA256 | 0.486 | 0.952 | 0.954 | 1.969× | 1.980× | gcc |
| Json::Generate | 0.677 | 0.688 | 0.675 | 0.989× | 1.004× | — |
| Json::ParseDom | 0.802 | 0.786 | 0.774 | 0.952× | 0.982× | gcc |
| Json::ParseMapping | 0.768 | 0.742 | 0.732 | 0.970× | 0.965× | clang |
| Matmul::Single | 0.657 | 0.660 | 0.647 | 0.991× | 0.969× | — |
| Matmul::T16 | 1.340 | 1.345 | 1.337 | 0.983× | 0.997× | — |
| Matmul::T4 | 0.661 | 0.659 | 0.637 | 0.986× | 0.965× | — |
| Matmul::T8 | 0.685 | 0.708 | 0.696 | 1.004× | 1.018× | — |
| Maze::AStar | 1.156 | 1.249 | 1.024 | 1.015× | 0.986× | gcc, clang |
| Maze::BFS | 0.960 | 1.117 | 0.843 | 1.081× | 0.984× | gcc, clang |
| Maze::Generator | 1.265 | 1.300 | 1.188 | 1.001× | 0.968× | — |
| Sort::Merge | 0.657 | 0.986 | 0.704 | 1.477× | 1.089× | gcc, clang |
| Sort::Quick | 1.128 | 1.093 | 1.113 | 0.977× | 0.987× | clang |
| Sort::Self | 1.118 | 1.059 | 1.025 | 0.930× | 0.920× | clang |
| Template::Parse | 0.732 | 1.188 | 0.685 | 1.281× | 0.998× | gcc, clang |
| Template::Regex | 0.806 | 1.129 | 0.897 | 1.159× | 1.186× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.957×.
Compile clang A/A CPU ratio: 1.017×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580)
