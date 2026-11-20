# index-cpp benchmarks

Compiler checkout: `94aaecc52ac26996bd3d654522334e3c28c68457` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.085× | 1.077× |
| Compile CPU | 6.360× | 5.135× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 628,056 | 326,002 | 230,728 |
| gcc | 540,112 | 280,921 | 486,048 |
| clang | 513,720 | 264,561 | 319,538 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.994 | 0.736 | 0.840 | 0.740× | 0.846× | — |
| Base64::Encode | 0.909 | 1.008 | 0.792 | 1.107× | 0.872× | — |
| Binarytrees::Arena | 1.889 | 1.958 | 1.998 | 1.043× | 1.097× | gcc, clang |
| Binarytrees::Obj | 0.954 | 0.806 | 1.169 | 0.866× | 1.188× | gcc, clang |
| Brainfuck::Array | 1.639 | 1.663 | 1.704 | 1.013× | 1.041× | — |
| Brainfuck::Recursion | 1.129 | 1.206 | 1.423 | 1.068× | 1.262× | — |
| CLBG::Fannkuchredux | 0.901 | 0.980 | 0.833 | 1.080× | 0.928× | — |
| CLBG::Mandelbrot | 0.947 | 0.985 | 0.972 | 1.036× | 1.027× | — |
| CLBG::Nbody | 0.661 | 0.627 | 0.636 | 0.947× | 0.963× | — |
| CLBG::Spectralnorm | 0.979 | 0.943 | 1.319 | 0.961× | 1.349× | — |
| CSV::Parse | 0.853 | 0.794 | 0.930 | 0.933× | 1.093× | — |
| Calculator::Ast | 0.854 | 0.786 | 0.793 | 0.924× | 0.924× | gcc, clang |
| Calculator::Interpreter | 1.147 | 1.118 | 1.187 | 0.973× | 1.011× | clang |
| Compress::ArithDecode | 0.879 | 1.016 | 1.494 | 1.156× | 1.697× | — |
| Compress::ArithEncode | 1.012 | 1.000 | 1.077 | 0.986× | 1.066× | — |
| Compress::BWTDecode | 1.312 | 1.316 | 1.313 | 1.002× | 1.002× | — |
| Compress::BWTEncode | 0.758 | 0.784 | 0.927 | 1.035× | 1.228× | — |
| Compress::HuffDecode | 0.446 | 0.730 | 0.388 | 1.635× | 0.865× | — |
| Compress::HuffEncode | 0.826 | 0.934 | 0.837 | 1.131× | 1.010× | — |
| Compress::LZWDecode | 0.582 | 0.575 | 0.556 | 0.989× | 0.954× | — |
| Compress::LZWEncode | 0.956 | 0.951 | 0.956 | 0.995× | 1.000× | — |
| Distance::Jaro | 1.160 | 1.191 | 1.208 | 1.027× | 1.041× | — |
| Distance::NGram | 1.179 | 1.190 | 1.127 | 1.009× | 0.957× | — |
| Etc::CacheSimulation | 0.816 | 0.787 | 0.808 | 0.967× | 0.990× | — |
| Etc::GameOfLife | 1.128 | 1.156 | 1.107 | 1.026× | 0.994× | — |
| Etc::LogParser | 0.398 | 1.215 | 0.442 | 2.991× | 1.112× | gcc |
| Etc::NeuralNet | 0.783 | 0.729 | 0.711 | 0.933× | 0.909× | — |
| Etc::Sieve | 2.442 | 3.157 | 2.422 | 1.291× | 0.995× | — |
| Etc::TextRaytracer | 0.647 | 0.636 | 0.829 | 0.985× | 1.282× | — |
| Etc::Words | 0.925 | 0.907 | 0.913 | 0.978× | 0.994× | — |
| Graph::AStar | 1.022 | 1.213 | 1.063 | 1.145× | 1.022× | gcc |
| Graph::BFS | 0.815 | 0.726 | 0.902 | 0.914× | 0.960× | gcc, clang |
| Graph::DFS | 1.040 | 0.970 | 1.030 | 0.932× | 0.969× | gcc, clang |
| Hash::CRC32 | 0.245 | 0.718 | 1.007 | 2.933× | 4.114× | — |
| Hash::SHA256 | 0.353 | 0.917 | 0.783 | 2.615× | 2.209× | — |
| Json::Generate | 0.853 | 0.861 | 0.856 | 1.009× | 1.001× | — |
| Json::ParseDom | 1.028 | 0.988 | 0.980 | 0.961× | 0.937× | — |
| Json::ParseMapping | 0.976 | 0.940 | 0.933 | 0.962× | 0.941× | — |
| Matmul::Single | 0.761 | 0.752 | 0.761 | 0.989× | 1.001× | — |
| Matmul::T16 | 1.652 | 1.653 | 1.632 | 0.984× | 0.992× | — |
| Matmul::T4 | 0.784 | 0.790 | 0.783 | 1.004× | 0.999× | — |
| Matmul::T8 | 0.851 | 0.847 | 0.841 | 1.003× | 0.987× | — |
| Maze::AStar | 0.925 | 0.935 | 0.920 | 0.930× | 0.940× | gcc, clang |
| Maze::BFS | 0.724 | 0.720 | 0.748 | 0.988× | 1.033× | clang |
| Maze::Generator | 1.150 | 1.391 | 1.400 | 1.242× | 1.145× | gcc, clang |
| Sort::Merge | 0.728 | 1.060 | 0.851 | 1.459× | 1.167× | — |
| Sort::Quick | 1.114 | 1.149 | 1.125 | 1.033× | 1.013× | — |
| Sort::Self | 1.177 | 1.090 | 1.103 | 0.925× | 0.937× | — |
| Template::Parse | 1.064 | 1.064 | 1.114 | 0.981× | 1.020× | — |
| Template::Regex | 0.922 | 0.960 | 1.105 | 1.037× | 1.185× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.011×.
Compile clang A/A CPU ratio: 1.002×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225)
