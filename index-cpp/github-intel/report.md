# index-cpp benchmarks

Compiler checkout: `d8c559893a923e5683c44df6cb98076271dd6f01` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.089× | 1.076× |
| Compile CPU | 6.330× | 5.119× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,996 |
| gcc | 540,112 | 280,921 | 486,062 |
| clang | 513,720 | 264,561 | 319,042 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.011 | 0.731 | 0.837 | 0.722× | 0.834× | — |
| Base64::Encode | 0.903 | 1.002 | 0.788 | 1.109× | 0.871× | — |
| Binarytrees::Arena | 1.634 | 1.691 | 1.791 | 1.069× | 1.070× | gcc |
| Binarytrees::Obj | 0.852 | 0.768 | 0.994 | 0.898× | 1.149× | gcc |
| Brainfuck::Array | 1.515 | 1.652 | 1.704 | 1.091× | 1.124× | — |
| Brainfuck::Recursion | 1.147 | 1.212 | 1.419 | 1.051× | 1.227× | — |
| CLBG::Fannkuchredux | 0.880 | 0.960 | 0.832 | 1.096× | 0.937× | — |
| CLBG::Mandelbrot | 0.950 | 0.978 | 0.970 | 1.028× | 1.021× | — |
| CLBG::Nbody | 0.659 | 0.623 | 0.634 | 0.945× | 0.962× | — |
| CLBG::Spectralnorm | 0.897 | 0.936 | 1.316 | 1.044× | 1.468× | — |
| CSV::Parse | 0.847 | 0.792 | 0.927 | 0.937× | 1.094× | — |
| Calculator::Ast | 0.773 | 0.742 | 0.746 | 0.961× | 0.955× | — |
| Calculator::Interpreter | 1.160 | 1.118 | 1.183 | 0.962× | 1.016× | — |
| Compress::ArithDecode | 0.892 | 1.010 | 1.490 | 1.131× | 1.670× | — |
| Compress::ArithEncode | 1.002 | 0.995 | 1.074 | 0.994× | 1.071× | — |
| Compress::BWTDecode | 1.308 | 1.308 | 1.308 | 1.000× | 1.000× | — |
| Compress::BWTEncode | 0.755 | 0.782 | 0.923 | 1.043× | 1.223× | — |
| Compress::HuffDecode | 0.426 | 0.727 | 0.387 | 1.703× | 0.901× | — |
| Compress::HuffEncode | 0.810 | 0.927 | 0.833 | 1.144× | 1.029× | — |
| Compress::LZWDecode | 0.573 | 0.581 | 0.556 | 1.017× | 0.967× | — |
| Compress::LZWEncode | 0.970 | 0.946 | 0.954 | 0.978× | 0.980× | — |
| Distance::Jaro | 1.156 | 1.188 | 1.203 | 1.027× | 1.041× | — |
| Distance::NGram | 1.176 | 1.185 | 1.125 | 1.008× | 0.953× | — |
| Etc::CacheSimulation | 0.812 | 0.784 | 0.802 | 0.964× | 0.987× | — |
| Etc::GameOfLife | 1.125 | 1.159 | 1.106 | 1.030× | 0.983× | — |
| Etc::LogParser | 0.397 | 1.192 | 0.441 | 3.023× | 1.105× | gcc |
| Etc::NeuralNet | 0.780 | 0.726 | 0.710 | 0.930× | 0.910× | — |
| Etc::Sieve | 2.465 | 3.167 | 2.460 | 1.292× | 0.994× | — |
| Etc::TextRaytracer | 0.648 | 0.633 | 0.827 | 0.976× | 1.276× | — |
| Etc::Words | 0.926 | 0.898 | 0.905 | 0.969× | 0.969× | — |
| Graph::AStar | 0.816 | 0.924 | 0.782 | 1.147× | 0.912× | — |
| Graph::BFS | 0.650 | 0.609 | 0.613 | 0.942× | 0.940× | — |
| Graph::DFS | 0.815 | 0.781 | 0.803 | 0.969× | 0.969× | clang |
| Hash::CRC32 | 0.244 | 0.716 | 1.003 | 2.932× | 4.108× | — |
| Hash::SHA256 | 0.337 | 0.913 | 0.777 | 2.709× | 2.311× | — |
| Json::Generate | 0.858 | 0.861 | 0.857 | 1.005× | 0.999× | — |
| Json::ParseDom | 1.009 | 0.987 | 0.977 | 0.978× | 0.969× | — |
| Json::ParseMapping | 0.959 | 0.938 | 0.930 | 0.980× | 0.970× | — |
| Matmul::Single | 0.754 | 0.751 | 0.761 | 0.999× | 1.007× | — |
| Matmul::T16 | 1.657 | 1.648 | 1.644 | 0.993× | 0.980× | — |
| Matmul::T4 | 0.782 | 0.780 | 0.780 | 0.999× | 0.997× | — |
| Matmul::T8 | 0.845 | 0.841 | 0.845 | 1.004× | 0.993× | — |
| Maze::AStar | 0.888 | 0.840 | 0.851 | 0.945× | 0.932× | — |
| Maze::BFS | 0.732 | 0.720 | 0.762 | 0.981× | 1.042× | — |
| Maze::Generator | 0.935 | 0.959 | 0.970 | 1.056× | 1.046× | gcc, clang |
| Sort::Merge | 0.724 | 1.054 | 0.847 | 1.458× | 1.170× | — |
| Sort::Quick | 1.111 | 1.143 | 1.123 | 1.029× | 1.009× | — |
| Sort::Self | 1.175 | 1.081 | 1.099 | 0.921× | 0.935× | — |
| Template::Parse | 1.137 | 1.083 | 1.123 | 0.952× | 0.982× | — |
| Template::Regex | 0.932 | 0.964 | 1.109 | 1.035× | 1.186× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.006×.
Compile clang A/A CPU ratio: 1.003×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.0 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144)
