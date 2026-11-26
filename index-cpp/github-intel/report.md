# index-cpp benchmarks

Compiler checkout: `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.095× | 1.082× |
| Compile CPU | 6.296× | 5.082× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 232,118 |
| gcc | 540,112 | 280,921 | 486,076 |
| clang | 513,720 | 264,561 | 319,118 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.000 | 0.734 | 0.844 | 0.735× | 0.847× | — |
| Base64::Encode | 0.907 | 1.007 | 0.794 | 1.111× | 0.875× | — |
| Binarytrees::Arena | 1.853 | 1.926 | 2.128 | 1.053× | 1.135× | gcc |
| Binarytrees::Obj | 0.950 | 0.818 | 1.223 | 0.881× | 1.243× | gcc, clang |
| Brainfuck::Array | 1.520 | 1.652 | 1.708 | 1.087× | 1.124× | — |
| Brainfuck::Recursion | 1.147 | 1.216 | 1.423 | 1.053× | 1.233× | — |
| CLBG::Fannkuchredux | 0.881 | 0.963 | 0.833 | 1.086× | 0.956× | — |
| CLBG::Mandelbrot | 0.951 | 0.980 | 0.973 | 1.029× | 1.024× | — |
| CLBG::Nbody | 0.660 | 0.624 | 0.637 | 0.945× | 0.964× | — |
| CLBG::Spectralnorm | 0.899 | 0.938 | 1.320 | 1.044× | 1.467× | — |
| CSV::Parse | 0.849 | 0.794 | 0.931 | 0.936× | 1.096× | — |
| Calculator::Ast | 0.802 | 0.768 | 0.807 | 0.972× | 0.966× | — |
| Calculator::Interpreter | 1.135 | 1.092 | 1.209 | 0.964× | 0.995× | clang |
| Compress::ArithDecode | 0.894 | 1.012 | 1.494 | 1.133× | 1.671× | — |
| Compress::ArithEncode | 1.003 | 0.998 | 1.077 | 0.996× | 1.072× | — |
| Compress::BWTDecode | 1.309 | 1.310 | 1.312 | 1.002× | 1.003× | — |
| Compress::BWTEncode | 0.756 | 0.778 | 0.927 | 1.033× | 1.225× | — |
| Compress::HuffDecode | 0.427 | 0.729 | 0.392 | 1.689× | 0.925× | clang |
| Compress::HuffEncode | 0.813 | 0.929 | 0.835 | 1.146× | 1.025× | — |
| Compress::LZWDecode | 0.568 | 0.573 | 0.550 | 1.007× | 0.974× | — |
| Compress::LZWEncode | 0.970 | 0.946 | 0.958 | 0.974× | 0.989× | — |
| Distance::Jaro | 1.158 | 1.190 | 1.208 | 1.028× | 1.044× | — |
| Distance::NGram | 1.179 | 1.187 | 1.129 | 1.007× | 0.958× | — |
| Etc::CacheSimulation | 0.814 | 0.784 | 0.804 | 0.964× | 0.988× | — |
| Etc::GameOfLife | 1.107 | 1.118 | 1.099 | 1.011× | 0.990× | — |
| Etc::LogParser | 0.397 | 1.221 | 0.441 | 3.136× | 1.109× | gcc |
| Etc::NeuralNet | 0.782 | 0.727 | 0.712 | 0.929× | 0.909× | — |
| Etc::Sieve | 2.421 | 3.128 | 2.420 | 1.293× | 0.998× | — |
| Etc::TextRaytracer | 0.649 | 0.633 | 0.830 | 0.977× | 1.278× | — |
| Etc::Words | 0.929 | 0.898 | 0.909 | 0.968× | 0.978× | — |
| Graph::AStar | 1.008 | 1.195 | 1.064 | 1.203× | 1.044× | gcc, clang |
| Graph::BFS | 0.729 | 0.651 | 0.906 | 1.008× | 0.941× | clang |
| Graph::DFS | 1.019 | 0.937 | 1.030 | 0.941× | 0.988× | gcc |
| Hash::CRC32 | 0.245 | 0.717 | 1.006 | 2.927× | 4.110× | — |
| Hash::SHA256 | 0.339 | 0.915 | 0.780 | 2.699× | 2.309× | — |
| Json::Generate | 0.855 | 0.857 | 0.854 | 1.004× | 0.994× | — |
| Json::ParseDom | 1.013 | 0.984 | 0.974 | 0.969× | 0.962× | — |
| Json::ParseMapping | 0.959 | 0.935 | 0.928 | 0.977× | 0.968× | — |
| Matmul::Single | 0.757 | 0.764 | 0.770 | 1.007× | 1.010× | — |
| Matmul::T16 | 1.615 | 1.610 | 1.613 | 0.998× | 1.002× | — |
| Matmul::T4 | 0.783 | 0.780 | 0.780 | 1.003× | 0.996× | — |
| Matmul::T8 | 0.827 | 0.833 | 0.833 | 1.004× | 1.008× | gcc |
| Maze::AStar | 0.913 | 0.853 | 0.914 | 1.001× | 0.800× | gcc, clang |
| Maze::BFS | 0.717 | 0.710 | 0.763 | 0.995× | 1.027× | clang |
| Maze::Generator | 1.177 | 1.292 | 1.353 | 1.207× | 1.082× | gcc, clang |
| Sort::Merge | 0.725 | 1.056 | 0.851 | 1.457× | 1.173× | — |
| Sort::Quick | 1.114 | 1.146 | 1.125 | 1.029× | 1.009× | — |
| Sort::Self | 1.177 | 1.084 | 1.105 | 0.921× | 0.936× | — |
| Template::Parse | 1.112 | 1.045 | 1.111 | 0.941× | 0.960× | — |
| Template::Regex | 0.919 | 0.950 | 1.117 | 1.035× | 1.190× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.008×.
Compile clang A/A CPU ratio: 1.001×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.4 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565)
