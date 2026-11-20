# index-cpp benchmarks

Compiler checkout: `6d363dd28d9982fdbb0539bf97dab4f17cfbe369` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.088× | 1.079× |
| Compile CPU | 6.311× | 5.148× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,824 |
| gcc | 540,112 | 280,921 | 486,086 |
| clang | 513,720 | 264,561 | 318,864 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.007 | 0.736 | 0.841 | 0.737× | 0.829× | — |
| Base64::Encode | 0.909 | 1.006 | 0.793 | 1.107× | 0.871× | — |
| Binarytrees::Arena | 1.859 | 2.005 | 1.998 | 1.125× | 1.068× | clang |
| Binarytrees::Obj | 0.911 | 0.828 | 1.134 | 0.962× | 1.209× | gcc, clang |
| Brainfuck::Array | 1.635 | 1.656 | 1.704 | 1.013× | 1.041× | — |
| Brainfuck::Recursion | 1.130 | 1.208 | 1.424 | 1.068× | 1.261× | — |
| CLBG::Fannkuchredux | 0.897 | 0.963 | 0.833 | 1.065× | 0.930× | gcc |
| CLBG::Mandelbrot | 0.951 | 0.980 | 0.974 | 1.030× | 1.023× | — |
| CLBG::Nbody | 0.661 | 0.624 | 0.637 | 0.945× | 0.964× | — |
| CLBG::Spectralnorm | 0.978 | 0.940 | 1.319 | 0.960× | 1.350× | — |
| CSV::Parse | 0.851 | 0.792 | 0.929 | 0.930× | 1.093× | — |
| Calculator::Ast | 0.843 | 0.782 | 0.788 | 0.920× | 0.942× | gcc, clang |
| Calculator::Interpreter | 1.161 | 1.111 | 1.173 | 0.993× | 1.021× | gcc, clang |
| Compress::ArithDecode | 0.879 | 1.014 | 1.493 | 1.153× | 1.700× | — |
| Compress::ArithEncode | 1.014 | 0.998 | 1.075 | 0.987× | 1.061× | — |
| Compress::BWTDecode | 1.312 | 1.312 | 1.315 | 1.001× | 1.003× | — |
| Compress::BWTEncode | 0.758 | 0.780 | 0.926 | 1.032× | 1.220× | gcc |
| Compress::HuffDecode | 0.444 | 0.731 | 0.388 | 1.647× | 0.867× | — |
| Compress::HuffEncode | 0.827 | 0.931 | 0.837 | 1.127× | 1.012× | — |
| Compress::LZWDecode | 0.579 | 0.575 | 0.552 | 0.992× | 0.955× | — |
| Compress::LZWEncode | 0.958 | 0.950 | 0.956 | 0.991× | 0.997× | gcc |
| Distance::Jaro | 1.160 | 1.191 | 1.207 | 1.025× | 1.041× | — |
| Distance::NGram | 1.175 | 1.190 | 1.129 | 1.012× | 0.963× | — |
| Etc::CacheSimulation | 0.821 | 0.788 | 0.806 | 0.959× | 0.982× | — |
| Etc::GameOfLife | 1.103 | 1.117 | 1.095 | 1.013× | 0.993× | — |
| Etc::LogParser | 0.397 | 1.236 | 0.445 | 3.113× | 1.123× | gcc, clang |
| Etc::NeuralNet | 0.783 | 0.727 | 0.710 | 0.932× | 0.909× | — |
| Etc::Sieve | 2.430 | 3.130 | 2.407 | 1.286× | 0.991× | — |
| Etc::TextRaytracer | 0.647 | 0.635 | 0.829 | 0.980× | 1.282× | — |
| Etc::Words | 0.921 | 0.903 | 0.912 | 0.981× | 0.989× | — |
| Graph::AStar | 1.028 | 1.189 | 1.038 | 1.158× | 0.997× | — |
| Graph::BFS | 0.746 | 0.661 | 0.795 | 0.941× | 0.920× | gcc |
| Graph::DFS | 1.027 | 0.928 | 0.980 | 0.924× | 0.965× | gcc |
| Hash::CRC32 | 0.245 | 0.717 | 1.006 | 2.933× | 4.114× | — |
| Hash::SHA256 | 0.355 | 0.915 | 0.782 | 2.580× | 2.201× | — |
| Json::Generate | 0.853 | 0.861 | 0.854 | 1.006× | 0.999× | — |
| Json::ParseDom | 1.026 | 0.986 | 0.976 | 0.960× | 0.948× | — |
| Json::ParseMapping | 0.974 | 0.939 | 0.931 | 0.964× | 0.951× | — |
| Matmul::Single | 0.766 | 0.766 | 0.758 | 1.000× | 0.998× | — |
| Matmul::T16 | 1.625 | 1.637 | 1.622 | 0.996× | 1.005× | — |
| Matmul::T4 | 0.782 | 0.784 | 0.783 | 1.002× | 0.997× | — |
| Matmul::T8 | 0.839 | 0.835 | 0.839 | 0.992× | 1.001× | — |
| Maze::AStar | 0.934 | 0.851 | 0.964 | 0.956× | 0.951× | gcc |
| Maze::BFS | 0.728 | 0.717 | 0.758 | 0.990× | 1.027× | gcc, clang |
| Maze::Generator | 1.100 | 1.247 | 1.327 | 1.184× | 1.242× | gcc, clang |
| Sort::Merge | 0.728 | 1.057 | 0.851 | 1.450× | 1.171× | — |
| Sort::Quick | 1.114 | 1.147 | 1.125 | 1.029× | 1.010× | — |
| Sort::Self | 1.177 | 1.086 | 1.106 | 0.923× | 0.939× | — |
| Template::Parse | 1.070 | 1.055 | 1.103 | 0.988× | 1.030× | gcc |
| Template::Regex | 0.922 | 0.954 | 1.101 | 1.034× | 1.191× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.992×.
Compile clang A/A CPU ratio: 1.004×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.9.8 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44686728157)
