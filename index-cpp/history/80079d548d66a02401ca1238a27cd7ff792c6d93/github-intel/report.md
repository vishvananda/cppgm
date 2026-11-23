# index-cpp benchmarks

Compiler checkout: `80079d548d66a02401ca1238a27cd7ff792c6d93` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.083× | 1.091× |
| Compile CPU | 6.215× | 5.019× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,754 | 231,020 |
| gcc | 540,112 | 280,921 | 486,020 |
| clang | 513,720 | 264,561 | 319,182 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.980 | 0.731 | 0.835 | 0.743× | 0.851× | — |
| Base64::Encode | 0.901 | 1.001 | 0.786 | 1.110× | 0.873× | — |
| Binarytrees::Arena | 1.923 | 1.990 | 2.113 | 1.039× | 1.134× | gcc, clang |
| Binarytrees::Obj | 0.976 | 0.837 | 1.201 | 0.856× | 1.218× | — |
| Brainfuck::Array | 1.520 | 1.652 | 1.707 | 1.087× | 1.123× | — |
| Brainfuck::Recursion | 1.147 | 1.200 | 1.421 | 1.050× | 1.237× | — |
| CLBG::Fannkuchredux | 0.881 | 0.964 | 0.831 | 1.093× | 0.946× | — |
| CLBG::Mandelbrot | 0.956 | 0.980 | 0.970 | 1.024× | 1.016× | — |
| CLBG::Nbody | 0.661 | 0.625 | 0.634 | 0.943× | 0.961× | — |
| CLBG::Spectralnorm | 0.899 | 0.940 | 1.316 | 1.044× | 1.467× | — |
| CSV::Parse | 0.848 | 0.794 | 0.928 | 0.936× | 1.096× | — |
| Calculator::Ast | 0.831 | 0.804 | 0.804 | 0.950× | 0.989× | — |
| Calculator::Interpreter | 1.215 | 1.115 | 1.228 | 0.943× | 1.058× | gcc, clang |
| Compress::ArithDecode | 0.871 | 1.015 | 1.489 | 1.165× | 1.712× | — |
| Compress::ArithEncode | 1.003 | 0.999 | 1.073 | 0.997× | 1.069× | — |
| Compress::BWTDecode | 1.304 | 1.304 | 1.303 | 1.000× | 1.000× | — |
| Compress::BWTEncode | 0.754 | 0.776 | 0.920 | 1.028× | 1.222× | — |
| Compress::HuffDecode | 0.418 | 0.723 | 0.386 | 1.760× | 0.920× | — |
| Compress::HuffEncode | 0.812 | 0.932 | 0.831 | 1.149× | 1.023× | — |
| Compress::LZWDecode | 0.567 | 0.573 | 0.550 | 1.007× | 0.967× | — |
| Compress::LZWEncode | 0.970 | 0.950 | 0.955 | 0.981× | 0.988× | — |
| Distance::Jaro | 1.157 | 1.190 | 1.206 | 1.027× | 1.041× | — |
| Distance::NGram | 1.173 | 1.190 | 1.126 | 1.013× | 0.961× | — |
| Etc::CacheSimulation | 0.819 | 0.786 | 0.801 | 0.959× | 0.980× | — |
| Etc::GameOfLife | 1.101 | 1.110 | 1.106 | 1.011× | 0.983× | gcc |
| Etc::LogParser | 0.397 | 1.175 | 0.440 | 2.980× | 1.108× | — |
| Etc::NeuralNet | 0.783 | 0.728 | 0.709 | 0.927× | 0.906× | — |
| Etc::Sieve | 2.418 | 3.120 | 2.417 | 1.287× | 0.994× | — |
| Etc::TextRaytracer | 0.649 | 0.635 | 0.827 | 0.978× | 1.278× | — |
| Etc::Words | 0.929 | 0.905 | 0.908 | 0.974× | 0.974× | — |
| Graph::AStar | 1.036 | 1.200 | 1.038 | 1.148× | 1.023× | — |
| Graph::BFS | 0.928 | 0.701 | 0.909 | 0.851× | 1.015× | gcc, clang |
| Graph::DFS | 1.068 | 0.992 | 1.011 | 0.898× | 0.963× | gcc |
| Hash::CRC32 | 0.245 | 0.717 | 1.004 | 2.927× | 4.115× | — |
| Hash::SHA256 | 0.338 | 0.916 | 0.779 | 2.710× | 2.308× | — |
| Json::Generate | 0.851 | 0.857 | 0.852 | 1.008× | 0.999× | — |
| Json::ParseDom | 1.008 | 0.982 | 0.970 | 0.971× | 0.965× | — |
| Json::ParseMapping | 0.956 | 0.933 | 0.924 | 0.975× | 0.967× | — |
| Matmul::Single | 0.754 | 0.748 | 0.760 | 0.993× | 1.005× | — |
| Matmul::T16 | 1.628 | 1.638 | 1.617 | 1.004× | 0.996× | — |
| Matmul::T4 | 0.778 | 0.778 | 0.775 | 0.999× | 0.999× | — |
| Matmul::T8 | 0.835 | 0.831 | 0.831 | 0.987× | 1.005× | — |
| Maze::AStar | 1.142 | 0.913 | 1.022 | 0.876× | 0.955× | gcc, clang |
| Maze::BFS | 0.741 | 0.712 | 0.778 | 0.967× | 1.046× | clang |
| Maze::Generator | 1.356 | 1.429 | 1.692 | 1.137× | 1.217× | gcc |
| Sort::Merge | 0.725 | 1.057 | 0.849 | 1.459× | 1.172× | — |
| Sort::Quick | 1.114 | 1.147 | 1.123 | 1.031× | 1.012× | — |
| Sort::Self | 1.175 | 1.084 | 1.102 | 0.924× | 0.939× | — |
| Template::Parse | 1.134 | 1.052 | 1.113 | 0.944× | 0.994× | gcc |
| Template::Regex | 0.927 | 0.953 | 1.102 | 1.030× | 1.191× | clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.007×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060)
