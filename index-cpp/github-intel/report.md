# index-cpp benchmarks

Compiler checkout: `7584274b4d275fb41f7c5d064e751e5918e8e421` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.094× | 1.096× |
| Compile CPU | 6.335× | 5.159× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,946 |
| gcc | 540,112 | 280,921 | 486,106 |
| clang | 513,720 | 264,561 | 318,978 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.944 | 0.734 | 0.839 | 0.783× | 0.877× | — |
| Base64::Encode | 0.905 | 1.010 | 0.790 | 1.115× | 0.875× | — |
| Binarytrees::Arena | 1.904 | 2.118 | 2.170 | 1.056× | 1.172× | — |
| Binarytrees::Obj | 0.960 | 0.915 | 1.223 | 0.895× | 1.295× | gcc |
| Brainfuck::Array | 1.520 | 1.659 | 1.708 | 1.088× | 1.124× | — |
| Brainfuck::Recursion | 1.155 | 1.208 | 1.422 | 1.045× | 1.235× | — |
| CLBG::Fannkuchredux | 0.883 | 0.966 | 0.835 | 1.095× | 0.949× | — |
| CLBG::Mandelbrot | 0.950 | 0.981 | 0.974 | 1.031× | 1.025× | — |
| CLBG::Nbody | 0.662 | 0.625 | 0.637 | 0.945× | 0.964× | — |
| CLBG::Spectralnorm | 0.899 | 0.942 | 1.320 | 1.045× | 1.469× | — |
| CSV::Parse | 0.851 | 0.794 | 0.929 | 0.935× | 1.091× | — |
| Calculator::Ast | 0.849 | 0.850 | 0.818 | 0.960× | 0.957× | clang |
| Calculator::Interpreter | 1.274 | 1.363 | 1.281 | 0.967× | 1.033× | gcc, clang |
| Compress::ArithDecode | 0.896 | 1.015 | 1.494 | 1.129× | 1.671× | — |
| Compress::ArithEncode | 1.005 | 1.000 | 1.078 | 0.994× | 1.076× | — |
| Compress::BWTDecode | 1.309 | 1.311 | 1.310 | 0.999× | 1.004× | — |
| Compress::BWTEncode | 0.756 | 0.782 | 0.925 | 1.034× | 1.226× | — |
| Compress::HuffDecode | 0.428 | 0.723 | 0.392 | 1.691× | 0.910× | — |
| Compress::HuffEncode | 0.815 | 0.929 | 0.836 | 1.129× | 1.034× | — |
| Compress::LZWDecode | 0.573 | 0.575 | 0.558 | 1.004× | 0.972× | — |
| Compress::LZWEncode | 0.974 | 0.954 | 0.962 | 0.975× | 0.987× | — |
| Distance::Jaro | 1.160 | 1.195 | 1.207 | 1.028× | 1.042× | — |
| Distance::NGram | 1.181 | 1.190 | 1.127 | 1.008× | 0.955× | — |
| Etc::CacheSimulation | 0.815 | 0.790 | 0.806 | 0.968× | 0.992× | — |
| Etc::GameOfLife | 1.219 | 1.152 | 1.149 | 0.980× | 0.978× | gcc, clang |
| Etc::LogParser | 0.399 | 1.180 | 0.441 | 2.954× | 1.094× | — |
| Etc::NeuralNet | 0.784 | 0.728 | 0.710 | 0.926× | 0.906× | — |
| Etc::Sieve | 2.498 | 3.152 | 2.457 | 1.271× | 0.993× | clang |
| Etc::TextRaytracer | 0.650 | 0.637 | 0.828 | 0.980× | 1.276× | — |
| Etc::Words | 0.929 | 0.905 | 0.905 | 0.977× | 0.979× | — |
| Graph::AStar | 1.036 | 1.228 | 1.060 | 1.164× | 1.027× | clang |
| Graph::BFS | 0.903 | 0.959 | 0.839 | 0.968× | 0.983× | gcc, clang |
| Graph::DFS | 1.047 | 1.023 | 1.019 | 0.944× | 0.983× | clang |
| Hash::CRC32 | 0.245 | 0.720 | 1.007 | 2.925× | 4.116× | — |
| Hash::SHA256 | 0.339 | 0.919 | 0.780 | 2.709× | 2.308× | — |
| Json::Generate | 0.856 | 0.861 | 0.857 | 1.006× | 1.000× | clang |
| Json::ParseDom | 1.008 | 0.989 | 0.974 | 0.977× | 0.967× | — |
| Json::ParseMapping | 0.958 | 0.939 | 0.929 | 0.978× | 0.971× | — |
| Matmul::Single | 0.762 | 0.764 | 0.770 | 1.002× | 1.010× | gcc |
| Matmul::T16 | 1.688 | 1.694 | 1.687 | 1.001× | 0.991× | — |
| Matmul::T4 | 0.787 | 0.791 | 0.784 | 1.001× | 0.998× | — |
| Matmul::T8 | 0.869 | 0.861 | 0.865 | 1.017× | 0.993× | gcc |
| Maze::AStar | 1.231 | 1.519 | 1.014 | 1.062× | 1.019× | gcc |
| Maze::BFS | 0.742 | 0.818 | 0.794 | 0.993× | 1.107× | gcc |
| Maze::Generator | 1.421 | 1.942 | 1.713 | 1.267× | 1.299× | gcc, clang |
| Sort::Merge | 0.726 | 1.058 | 0.849 | 1.455× | 1.170× | — |
| Sort::Quick | 1.115 | 1.149 | 1.125 | 1.027× | 1.009× | — |
| Sort::Self | 1.179 | 1.088 | 1.103 | 0.921× | 0.937× | — |
| Template::Parse | 1.165 | 1.094 | 1.135 | 0.890× | 0.989× | gcc |
| Template::Regex | 0.937 | 0.972 | 1.114 | 1.014× | 1.194× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.002×.
Compile clang A/A CPU ratio: 0.997×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312)
