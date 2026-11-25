# index-cpp benchmarks

Compiler checkout: `bf2f830a479c21887e7ef6e44787b48dac78bf6d` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.095× | 1.080× |
| Compile CPU | 6.408× | 5.133× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,794 |
| gcc | 540,112 | 280,921 | 486,058 |
| clang | 513,720 | 264,561 | 319,350 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.004 | 0.738 | 0.838 | 0.735× | 0.824× | gcc |
| Base64::Encode | 0.906 | 1.012 | 0.790 | 1.111× | 0.872× | gcc |
| Binarytrees::Arena | 1.770 | 2.124 | 1.751 | 1.063× | 1.087× | clang |
| Binarytrees::Obj | 0.871 | 0.889 | 0.984 | 0.899× | 1.164× | — |
| Brainfuck::Array | 1.517 | 1.657 | 1.699 | 1.089× | 1.118× | — |
| Brainfuck::Recursion | 1.145 | 1.216 | 1.418 | 1.051× | 1.245× | — |
| CLBG::Fannkuchredux | 0.879 | 0.964 | 0.833 | 1.103× | 0.948× | — |
| CLBG::Mandelbrot | 0.947 | 0.978 | 0.970 | 1.032× | 1.024× | — |
| CLBG::Nbody | 0.659 | 0.624 | 0.634 | 0.945× | 0.963× | — |
| CLBG::Spectralnorm | 0.897 | 0.938 | 1.315 | 1.043× | 1.467× | — |
| CSV::Parse | 0.847 | 0.792 | 0.927 | 0.933× | 1.097× | clang |
| Calculator::Ast | 0.780 | 0.817 | 0.748 | 0.989× | 0.966× | gcc |
| Calculator::Interpreter | 1.160 | 1.233 | 1.168 | 0.967× | 1.024× | gcc |
| Compress::ArithDecode | 0.892 | 1.011 | 1.487 | 1.132× | 1.667× | — |
| Compress::ArithEncode | 1.003 | 0.997 | 1.073 | 0.993× | 1.071× | — |
| Compress::BWTDecode | 1.310 | 1.312 | 1.311 | 0.999× | 1.001× | — |
| Compress::BWTEncode | 0.754 | 0.782 | 0.923 | 1.029× | 1.224× | — |
| Compress::HuffDecode | 0.427 | 0.736 | 0.390 | 1.709× | 0.909× | — |
| Compress::HuffEncode | 0.806 | 0.928 | 0.831 | 1.141× | 1.032× | — |
| Compress::LZWDecode | 0.572 | 0.583 | 0.554 | 1.013× | 0.970× | — |
| Compress::LZWEncode | 0.969 | 0.947 | 0.952 | 0.973× | 0.985× | — |
| Distance::Jaro | 1.156 | 1.189 | 1.204 | 1.027× | 1.042× | — |
| Distance::NGram | 1.177 | 1.187 | 1.122 | 1.006× | 0.954× | — |
| Etc::CacheSimulation | 0.813 | 0.784 | 0.802 | 0.964× | 0.987× | — |
| Etc::GameOfLife | 1.138 | 1.171 | 1.109 | 1.022× | 0.979× | — |
| Etc::LogParser | 0.397 | 1.215 | 0.439 | 3.194× | 1.116× | — |
| Etc::NeuralNet | 0.780 | 0.728 | 0.708 | 0.928× | 0.907× | — |
| Etc::Sieve | 2.470 | 3.189 | 2.437 | 1.289× | 0.991× | — |
| Etc::TextRaytracer | 0.647 | 0.633 | 0.826 | 0.978× | 1.276× | — |
| Etc::Words | 0.929 | 0.904 | 0.905 | 0.972× | 0.979× | — |
| Graph::AStar | 0.885 | 1.206 | 0.760 | 1.144× | 0.943× | — |
| Graph::BFS | 0.667 | 0.827 | 0.609 | 0.982× | 0.939× | gcc |
| Graph::DFS | 0.885 | 0.993 | 0.783 | 0.975× | 0.976× | — |
| Hash::CRC32 | 0.244 | 0.716 | 1.003 | 2.921× | 4.111× | — |
| Hash::SHA256 | 0.338 | 0.914 | 0.778 | 2.699× | 2.299× | — |
| Json::Generate | 0.857 | 0.863 | 0.856 | 1.005× | 0.999× | — |
| Json::ParseDom | 1.012 | 0.993 | 0.978 | 0.973× | 0.968× | clang |
| Json::ParseMapping | 0.961 | 0.944 | 0.931 | 0.980× | 0.969× | clang |
| Matmul::Single | 0.758 | 0.769 | 0.764 | 1.004× | 1.009× | — |
| Matmul::T16 | 1.657 | 1.679 | 1.640 | 1.003× | 0.993× | — |
| Matmul::T4 | 0.780 | 0.784 | 0.774 | 1.001× | 0.996× | — |
| Matmul::T8 | 0.847 | 0.852 | 0.848 | 0.999× | 1.016× | — |
| Maze::AStar | 0.893 | 1.160 | 0.840 | 1.014× | 0.952× | gcc |
| Maze::BFS | 0.728 | 0.750 | 0.750 | 0.988× | 1.041× | gcc |
| Maze::Generator | 1.040 | 1.578 | 0.941 | 1.139× | 1.074× | gcc |
| Sort::Merge | 0.724 | 1.056 | 0.847 | 1.452× | 1.170× | — |
| Sort::Quick | 1.112 | 1.147 | 1.121 | 1.027× | 1.009× | — |
| Sort::Self | 1.174 | 1.084 | 1.099 | 0.921× | 0.937× | — |
| Template::Parse | 1.132 | 1.112 | 1.114 | 0.946× | 0.986× | gcc |
| Template::Regex | 0.927 | 0.984 | 1.105 | 1.034× | 1.194× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.008×.
Compile clang A/A CPU ratio: 0.995×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.3 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895)
