# index-cpp benchmarks

Compiler checkout: `0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.095× | 1.077× |
| Compile CPU | 6.288× | 5.069× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,990 |
| gcc | 540,112 | 280,921 | 486,008 |
| clang | 513,720 | 264,561 | 319,792 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.986 | 0.736 | 0.841 | 0.748× | 0.847× | clang |
| Base64::Encode | 0.907 | 1.013 | 0.792 | 1.117× | 0.876× | — |
| Binarytrees::Arena | 1.976 | 2.088 | 2.079 | 1.084× | 1.061× | gcc, clang |
| Binarytrees::Obj | 0.972 | 0.881 | 1.206 | 0.938× | 1.206× | — |
| Brainfuck::Array | 1.646 | 1.665 | 1.706 | 1.011× | 1.038× | — |
| Brainfuck::Recursion | 1.128 | 1.216 | 1.426 | 1.077× | 1.263× | — |
| CLBG::Fannkuchredux | 0.900 | 0.968 | 0.835 | 1.073× | 0.929× | — |
| CLBG::Mandelbrot | 0.954 | 0.984 | 0.974 | 1.028× | 1.025× | — |
| CLBG::Nbody | 0.662 | 0.627 | 0.637 | 0.946× | 0.964× | — |
| CLBG::Spectralnorm | 0.981 | 0.942 | 1.320 | 0.961× | 1.347× | — |
| CSV::Parse | 0.854 | 0.796 | 0.929 | 0.933× | 1.087× | — |
| Calculator::Ast | 0.903 | 0.817 | 0.816 | 0.916× | 0.913× | gcc |
| Calculator::Interpreter | 1.353 | 1.254 | 1.316 | 0.950× | 0.961× | gcc, clang |
| Compress::ArithDecode | 0.883 | 1.019 | 1.495 | 1.154× | 1.695× | — |
| Compress::ArithEncode | 1.014 | 1.006 | 1.077 | 0.986× | 1.063× | — |
| Compress::BWTDecode | 1.307 | 1.309 | 1.308 | 1.000× | 1.000× | — |
| Compress::BWTEncode | 0.756 | 0.784 | 0.922 | 1.035× | 1.221× | — |
| Compress::HuffDecode | 0.447 | 0.731 | 0.389 | 1.629× | 0.869× | — |
| Compress::HuffEncode | 0.828 | 0.936 | 0.836 | 1.117× | 1.011× | — |
| Compress::LZWDecode | 0.575 | 0.569 | 0.555 | 0.987× | 0.966× | gcc |
| Compress::LZWEncode | 0.962 | 0.950 | 0.956 | 0.988× | 0.998× | — |
| Distance::Jaro | 1.162 | 1.195 | 1.208 | 1.023× | 1.043× | — |
| Distance::NGram | 1.177 | 1.192 | 1.132 | 1.011× | 0.962× | — |
| Etc::CacheSimulation | 0.825 | 0.792 | 0.812 | 0.958× | 0.983× | — |
| Etc::GameOfLife | 1.099 | 1.113 | 1.095 | 1.013× | 0.988× | — |
| Etc::LogParser | 0.398 | 1.233 | 0.443 | 3.079× | 1.116× | gcc |
| Etc::NeuralNet | 0.785 | 0.732 | 0.712 | 0.931× | 0.908× | — |
| Etc::Sieve | 2.418 | 3.110 | 2.389 | 1.284× | 0.990× | — |
| Etc::TextRaytracer | 0.649 | 0.637 | 0.831 | 0.978× | 1.282× | — |
| Etc::Words | 0.919 | 0.907 | 0.912 | 0.987× | 0.987× | — |
| Graph::AStar | 1.039 | 1.232 | 1.069 | 1.182× | 1.016× | gcc |
| Graph::BFS | 0.968 | 0.956 | 0.925 | 0.962× | 0.935× | gcc |
| Graph::DFS | 1.075 | 1.025 | 1.029 | 0.944× | 0.944× | gcc |
| Hash::CRC32 | 0.246 | 0.721 | 1.012 | 2.929× | 4.105× | — |
| Hash::SHA256 | 0.354 | 0.921 | 0.784 | 2.607× | 2.213× | — |
| Json::Generate | 0.849 | 0.861 | 0.851 | 1.014× | 1.004× | — |
| Json::ParseDom | 1.030 | 0.982 | 0.971 | 0.952× | 0.943× | — |
| Json::ParseMapping | 0.975 | 0.934 | 0.923 | 0.956× | 0.950× | — |
| Matmul::Single | 0.751 | 0.766 | 0.756 | 1.005× | 1.005× | — |
| Matmul::T16 | 1.612 | 1.613 | 1.600 | 0.999× | 0.994× | — |
| Matmul::T4 | 0.778 | 0.782 | 0.776 | 1.003× | 1.001× | — |
| Matmul::T8 | 0.826 | 0.825 | 0.827 | 0.997× | 0.998× | — |
| Maze::AStar | 1.094 | 1.388 | 0.884 | 1.113× | 0.900× | gcc, clang |
| Maze::BFS | 0.733 | 0.750 | 0.742 | 1.054× | 1.133× | gcc, clang |
| Maze::Generator | 1.377 | 1.821 | 1.613 | 1.291× | 1.163× | gcc, clang |
| Sort::Merge | 0.730 | 1.064 | 0.851 | 1.457× | 1.167× | — |
| Sort::Quick | 1.119 | 1.155 | 1.129 | 1.031× | 1.010× | — |
| Sort::Self | 1.182 | 1.093 | 1.105 | 0.924× | 0.938× | — |
| Template::Parse | 1.074 | 1.078 | 1.117 | 0.997× | 1.039× | gcc, clang |
| Template::Regex | 0.919 | 0.962 | 1.115 | 1.045× | 1.206× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.006×.
Compile clang A/A CPU ratio: 0.998×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.0 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589)
