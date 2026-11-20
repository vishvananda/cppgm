# index-cpp benchmarks

Compiler checkout: `f4ee6ed21703be4d5350c45f5d8ed33dc706c992` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.092× | 1.079× |
| Compile CPU | 6.267× | 5.081× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,644 |
| gcc | 540,112 | 280,921 | 486,072 |
| clang | 513,720 | 264,561 | 318,866 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.976 | 0.739 | 0.854 | 0.763× | 0.871× | clang |
| Base64::Encode | 0.914 | 1.011 | 0.800 | 1.103× | 0.872× | — |
| Binarytrees::Arena | 2.004 | 2.121 | 2.168 | 1.055× | 1.076× | gcc, clang |
| Binarytrees::Obj | 0.996 | 0.914 | 1.227 | 0.918× | 1.254× | gcc, clang |
| Brainfuck::Array | 1.640 | 1.663 | 1.715 | 1.014× | 1.045× | — |
| Brainfuck::Recursion | 1.131 | 1.211 | 1.427 | 1.071× | 1.264× | — |
| CLBG::Fannkuchredux | 0.903 | 0.978 | 0.837 | 1.082× | 0.922× | clang |
| CLBG::Mandelbrot | 0.953 | 0.982 | 0.976 | 1.029× | 1.025× | — |
| CLBG::Nbody | 0.661 | 0.626 | 0.638 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.980 | 0.942 | 1.325 | 0.959× | 1.348× | — |
| CSV::Parse | 0.854 | 0.795 | 0.933 | 0.931× | 1.095× | — |
| Calculator::Ast | 0.899 | 0.839 | 0.836 | 0.940× | 0.919× | gcc, clang |
| Calculator::Interpreter | 1.277 | 1.331 | 1.389 | 0.942× | 1.004× | gcc, clang |
| Compress::ArithDecode | 0.881 | 1.016 | 1.498 | 1.153× | 1.695× | — |
| Compress::ArithEncode | 1.014 | 0.999 | 1.080 | 0.987× | 1.064× | — |
| Compress::BWTDecode | 1.311 | 1.313 | 1.317 | 1.001× | 1.003× | — |
| Compress::BWTEncode | 0.757 | 0.783 | 0.928 | 1.030× | 1.227× | — |
| Compress::HuffDecode | 0.448 | 0.730 | 0.392 | 1.621× | 0.874× | — |
| Compress::HuffEncode | 0.826 | 0.933 | 0.839 | 1.126× | 1.014× | — |
| Compress::LZWDecode | 0.575 | 0.577 | 0.550 | 0.998× | 0.956× | — |
| Compress::LZWEncode | 0.960 | 0.952 | 0.958 | 0.992× | 0.995× | — |
| Distance::Jaro | 1.161 | 1.196 | 1.210 | 1.030× | 1.040× | — |
| Distance::NGram | 1.175 | 1.194 | 1.131 | 1.014× | 0.963× | — |
| Etc::CacheSimulation | 0.822 | 0.788 | 0.805 | 0.956× | 0.980× | — |
| Etc::GameOfLife | 1.105 | 1.148 | 1.104 | 1.021× | 0.998× | — |
| Etc::LogParser | 0.400 | 1.194 | 0.442 | 2.956× | 1.099× | gcc |
| Etc::NeuralNet | 0.785 | 0.730 | 0.713 | 0.929× | 0.907× | — |
| Etc::Sieve | 2.421 | 3.142 | 2.393 | 1.292× | 0.991× | — |
| Etc::TextRaytracer | 0.648 | 0.635 | 0.831 | 0.979× | 1.285× | — |
| Etc::Words | 0.925 | 0.901 | 0.914 | 0.970× | 0.996× | — |
| Graph::AStar | 1.043 | 1.223 | 1.073 | 1.172× | 1.022× | gcc |
| Graph::BFS | 0.983 | 0.928 | 0.949 | 0.931× | 0.967× | gcc, clang |
| Graph::DFS | 1.073 | 1.014 | 1.035 | 0.942× | 0.963× | gcc |
| Hash::CRC32 | 0.245 | 0.718 | 1.009 | 2.935× | 4.106× | — |
| Hash::SHA256 | 0.354 | 0.919 | 0.784 | 2.605× | 2.211× | — |
| Json::Generate | 0.851 | 0.858 | 0.856 | 1.007× | 1.006× | — |
| Json::ParseDom | 1.030 | 0.988 | 0.976 | 0.956× | 0.946× | — |
| Json::ParseMapping | 0.977 | 0.938 | 0.928 | 0.959× | 0.954× | — |
| Matmul::Single | 0.766 | 0.765 | 0.756 | 0.999× | 0.999× | — |
| Matmul::T16 | 1.657 | 1.660 | 1.650 | 1.002× | 0.997× | — |
| Matmul::T4 | 0.782 | 0.784 | 0.784 | 1.005× | 1.001× | — |
| Matmul::T8 | 0.855 | 0.844 | 0.841 | 0.984× | 0.984× | — |
| Maze::AStar | 1.303 | 1.418 | 1.317 | 1.087× | 0.897× | gcc, clang |
| Maze::BFS | 0.762 | 0.749 | 0.829 | 0.991× | 1.032× | clang |
| Maze::Generator | 1.352 | 1.864 | 1.741 | 1.348× | 1.197× | gcc, clang |
| Sort::Merge | 0.730 | 1.060 | 0.855 | 1.453× | 1.171× | — |
| Sort::Quick | 1.118 | 1.151 | 1.129 | 1.029× | 1.009× | — |
| Sort::Self | 1.179 | 1.091 | 1.109 | 0.923× | 0.940× | — |
| Template::Parse | 1.101 | 1.105 | 1.154 | 0.993× | 1.027× | clang |
| Template::Regex | 0.927 | 0.980 | 1.124 | 1.057× | 1.201× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.991×.
Compile clang A/A CPU ratio: 1.009×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294)
