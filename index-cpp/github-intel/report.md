# index-cpp benchmarks

Compiler checkout: `cc79604cdc196d46abdebb888158e8b90d3cac52` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.094× | 1.100× |
| Compile CPU | 6.332× | 5.044× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,754 | 230,938 |
| gcc | 540,112 | 280,921 | 486,074 |
| clang | 513,720 | 264,561 | 319,346 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.982 | 0.736 | 0.842 | 0.767× | 0.850× | gcc |
| Base64::Encode | 0.907 | 1.008 | 0.793 | 1.109× | 0.873× | — |
| Binarytrees::Arena | 1.950 | 2.098 | 2.026 | 1.048× | 1.084× | clang |
| Binarytrees::Obj | 1.001 | 0.925 | 1.167 | 0.903× | 1.205× | clang |
| Brainfuck::Array | 1.521 | 1.663 | 1.704 | 1.091× | 1.121× | — |
| Brainfuck::Recursion | 1.147 | 1.207 | 1.422 | 1.053× | 1.238× | — |
| CLBG::Fannkuchredux | 0.885 | 0.964 | 0.833 | 1.092× | 0.938× | — |
| CLBG::Mandelbrot | 0.955 | 0.981 | 0.973 | 1.028× | 1.022× | — |
| CLBG::Nbody | 0.662 | 0.625 | 0.636 | 0.944× | 0.961× | — |
| CLBG::Spectralnorm | 0.900 | 0.940 | 1.321 | 1.043× | 1.467× | — |
| CSV::Parse | 0.849 | 0.798 | 0.930 | 0.935× | 1.095× | — |
| Calculator::Ast | 0.853 | 0.836 | 0.796 | 0.966× | 0.989× | — |
| Calculator::Interpreter | 1.208 | 1.347 | 1.207 | 0.988× | 1.084× | gcc |
| Compress::ArithDecode | 0.873 | 1.017 | 1.493 | 1.163× | 1.715× | — |
| Compress::ArithEncode | 1.005 | 1.002 | 1.077 | 0.996× | 1.076× | — |
| Compress::BWTDecode | 1.312 | 1.310 | 1.315 | 0.998× | 1.005× | — |
| Compress::BWTEncode | 0.759 | 0.780 | 0.927 | 1.026× | 1.229× | — |
| Compress::HuffDecode | 0.423 | 0.730 | 0.394 | 1.730× | 0.927× | — |
| Compress::HuffEncode | 0.810 | 0.931 | 0.837 | 1.148× | 1.032× | — |
| Compress::LZWDecode | 0.568 | 0.573 | 0.558 | 1.004× | 0.977× | clang |
| Compress::LZWEncode | 0.970 | 0.948 | 0.956 | 0.976× | 0.987× | — |
| Distance::Jaro | 1.160 | 1.192 | 1.208 | 1.027× | 1.043× | — |
| Distance::NGram | 1.176 | 1.190 | 1.129 | 1.011× | 0.961× | — |
| Etc::CacheSimulation | 0.819 | 0.785 | 0.806 | 0.958× | 0.984× | — |
| Etc::GameOfLife | 1.106 | 1.114 | 1.118 | 0.996× | 1.002× | gcc, clang |
| Etc::LogParser | 0.398 | 1.168 | 0.443 | 2.912× | 1.106× | — |
| Etc::NeuralNet | 0.785 | 0.728 | 0.712 | 0.929× | 0.909× | — |
| Etc::Sieve | 2.420 | 3.107 | 2.446 | 1.271× | 1.002× | clang |
| Etc::TextRaytracer | 0.649 | 0.635 | 0.829 | 0.977× | 1.279× | — |
| Etc::Words | 0.939 | 0.901 | 0.914 | 0.960× | 0.979× | — |
| Graph::AStar | 1.038 | 1.220 | 1.059 | 1.170× | 1.051× | clang |
| Graph::BFS | 0.840 | 0.927 | 0.831 | 1.005× | 1.020× | clang |
| Graph::DFS | 1.062 | 1.022 | 1.006 | 0.946× | 1.019× | — |
| Hash::CRC32 | 0.245 | 0.718 | 1.006 | 2.933× | 4.112× | — |
| Hash::SHA256 | 0.339 | 0.916 | 0.782 | 2.703× | 2.316× | — |
| Json::Generate | 0.853 | 0.855 | 0.856 | 1.005× | 1.005× | gcc |
| Json::ParseDom | 1.015 | 0.984 | 0.977 | 0.972× | 0.959× | — |
| Json::ParseMapping | 0.962 | 0.935 | 0.931 | 0.976× | 0.965× | — |
| Matmul::Single | 0.758 | 0.764 | 0.768 | 1.004× | 1.009× | — |
| Matmul::T16 | 1.635 | 1.637 | 1.632 | 1.001× | 1.000× | — |
| Matmul::T4 | 0.780 | 0.786 | 0.778 | 1.005× | 0.999× | — |
| Matmul::T8 | 0.845 | 0.849 | 0.846 | 1.012× | 0.988× | — |
| Maze::AStar | 1.075 | 1.505 | 0.889 | 0.953× | 1.014× | gcc, clang |
| Maze::BFS | 0.732 | 0.728 | 0.757 | 1.008× | 1.253× | gcc, clang |
| Maze::Generator | 1.401 | 1.853 | 1.427 | 1.243× | 1.266× | gcc, clang |
| Sort::Merge | 0.726 | 1.058 | 0.851 | 1.457× | 1.173× | — |
| Sort::Quick | 1.116 | 1.148 | 1.126 | 1.029× | 1.010× | — |
| Sort::Self | 1.177 | 1.087 | 1.105 | 0.925× | 0.939× | — |
| Template::Parse | 1.147 | 1.107 | 1.117 | 0.916× | 1.029× | clang |
| Template::Regex | 0.931 | 0.964 | 1.106 | 1.027× | 1.213× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.004×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099)
