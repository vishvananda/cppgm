# index-cpp benchmarks

Compiler checkout: `61c93cf80bbefb800c9a2a397bacf09b138c2ed3` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.097× | 1.104× |
| Compile CPU | 6.280× | 5.011× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,988 |
| gcc | 540,112 | 280,921 | 486,080 |
| clang | 513,720 | 264,561 | 319,578 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.978 | 0.733 | 0.840 | 0.752× | 0.867× | clang |
| Base64::Encode | 0.905 | 1.007 | 0.791 | 1.113× | 0.872× | — |
| Binarytrees::Arena | 1.969 | 2.024 | 2.125 | 1.018× | 1.094× | gcc, clang |
| Binarytrees::Obj | 0.998 | 0.837 | 1.218 | 0.850× | 1.217× | gcc |
| Brainfuck::Array | 1.522 | 1.659 | 1.710 | 1.090× | 1.121× | — |
| Brainfuck::Recursion | 1.153 | 1.212 | 1.427 | 1.057× | 1.241× | — |
| CLBG::Fannkuchredux | 0.882 | 0.986 | 0.833 | 1.108× | 0.944× | clang |
| CLBG::Mandelbrot | 0.951 | 0.980 | 0.974 | 1.032× | 1.024× | — |
| CLBG::Nbody | 0.661 | 0.625 | 0.637 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.900 | 0.940 | 1.320 | 1.045× | 1.464× | — |
| CSV::Parse | 0.849 | 0.792 | 0.931 | 0.934× | 1.092× | — |
| Calculator::Ast | 0.827 | 0.806 | 0.852 | 0.987× | 1.009× | gcc, clang |
| Calculator::Interpreter | 1.181 | 1.131 | 1.510 | 0.965× | 1.187× | gcc |
| Compress::ArithDecode | 0.896 | 1.014 | 1.495 | 1.132× | 1.668× | — |
| Compress::ArithEncode | 1.004 | 0.999 | 1.079 | 0.995× | 1.072× | — |
| Compress::BWTDecode | 1.310 | 1.308 | 1.312 | 1.000× | 1.002× | — |
| Compress::BWTEncode | 0.756 | 0.778 | 0.925 | 1.031× | 1.223× | — |
| Compress::HuffDecode | 0.428 | 0.726 | 0.390 | 1.688× | 0.918× | — |
| Compress::HuffEncode | 0.810 | 0.929 | 0.838 | 1.137× | 1.036× | — |
| Compress::LZWDecode | 0.571 | 0.571 | 0.551 | 0.997× | 0.965× | — |
| Compress::LZWEncode | 0.974 | 0.950 | 0.956 | 0.977× | 0.982× | — |
| Distance::Jaro | 1.158 | 1.190 | 1.206 | 1.028× | 1.041× | — |
| Distance::NGram | 1.180 | 1.188 | 1.127 | 1.010× | 0.956× | — |
| Etc::CacheSimulation | 0.815 | 0.788 | 0.806 | 0.969× | 0.990× | — |
| Etc::GameOfLife | 1.114 | 1.110 | 1.107 | 1.004× | 0.994× | gcc |
| Etc::LogParser | 0.398 | 1.196 | 0.443 | 3.028× | 1.110× | gcc |
| Etc::NeuralNet | 0.782 | 0.728 | 0.712 | 0.931× | 0.908× | — |
| Etc::Sieve | 2.438 | 3.093 | 2.439 | 1.272× | 0.996× | — |
| Etc::TextRaytracer | 0.649 | 0.635 | 0.829 | 0.977× | 1.276× | — |
| Etc::Words | 0.928 | 0.904 | 0.913 | 0.985× | 0.978× | — |
| Graph::AStar | 1.036 | 1.200 | 1.073 | 1.219× | 1.036× | — |
| Graph::BFS | 0.850 | 0.819 | 0.952 | 1.021× | 1.025× | gcc, clang |
| Graph::DFS | 1.030 | 0.997 | 1.036 | 0.996× | 0.999× | gcc |
| Hash::CRC32 | 0.245 | 0.718 | 1.008 | 2.927× | 4.114× | — |
| Hash::SHA256 | 0.339 | 0.916 | 0.782 | 2.715× | 2.303× | — |
| Json::Generate | 0.858 | 0.855 | 0.857 | 1.000× | 0.999× | — |
| Json::ParseDom | 1.015 | 0.982 | 0.978 | 0.974× | 0.962× | — |
| Json::ParseMapping | 0.960 | 0.933 | 0.931 | 0.979× | 0.968× | — |
| Matmul::Single | 0.761 | 0.762 | 0.763 | 1.001× | 1.013× | — |
| Matmul::T16 | 1.628 | 1.639 | 1.622 | 1.009× | 0.999× | — |
| Matmul::T4 | 0.780 | 0.780 | 0.778 | 1.001× | 0.996× | — |
| Matmul::T8 | 0.838 | 0.840 | 0.840 | 1.007× | 1.002× | — |
| Maze::AStar | 1.048 | 1.050 | 1.366 | 1.019× | 1.171× | gcc, clang |
| Maze::BFS | 0.734 | 0.720 | 0.828 | 0.975× | 1.116× | gcc, clang |
| Maze::Generator | 1.296 | 1.655 | 1.817 | 1.265× | 1.322× | gcc, clang |
| Sort::Merge | 0.725 | 1.058 | 0.854 | 1.459× | 1.173× | — |
| Sort::Quick | 1.114 | 1.147 | 1.129 | 1.031× | 1.011× | — |
| Sort::Self | 1.178 | 1.086 | 1.108 | 0.922× | 0.941× | — |
| Template::Parse | 1.140 | 1.069 | 1.191 | 0.932× | 1.030× | gcc |
| Template::Regex | 0.931 | 0.954 | 1.145 | 1.027× | 1.231× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.005×.
Compile clang A/A CPU ratio: 1.002×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224)
