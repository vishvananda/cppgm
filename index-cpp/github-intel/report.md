# index-cpp benchmarks

Compiler checkout: `0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.089× | 1.085× |
| Compile CPU | 6.316× | 5.136× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,992 |
| gcc | 540,112 | 280,921 | 486,088 |
| clang | 513,720 | 264,561 | 317,650 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.986 | 0.758 | 0.839 | 0.769× | 0.850× | clang |
| Base64::Encode | 0.913 | 1.023 | 0.791 | 1.102× | 0.874× | — |
| Binarytrees::Arena | 2.024 | 2.188 | 2.128 | 1.057× | 1.087× | clang |
| Binarytrees::Obj | 0.995 | 0.962 | 1.218 | 0.916× | 1.264× | — |
| Brainfuck::Array | 1.642 | 1.667 | 1.713 | 1.019× | 1.043× | — |
| Brainfuck::Recursion | 1.132 | 1.214 | 1.425 | 1.074× | 1.261× | — |
| CLBG::Fannkuchredux | 0.903 | 0.968 | 0.847 | 1.065× | 0.939× | — |
| CLBG::Mandelbrot | 0.955 | 0.983 | 0.975 | 1.027× | 1.023× | — |
| CLBG::Nbody | 0.663 | 0.623 | 0.637 | 0.943× | 0.963× | — |
| CLBG::Spectralnorm | 0.982 | 0.942 | 1.322 | 0.957× | 1.351× | — |
| CSV::Parse | 0.853 | 0.799 | 0.931 | 0.932× | 1.099× | — |
| Calculator::Ast | 0.907 | 0.857 | 0.833 | 0.927× | 0.943× | — |
| Calculator::Interpreter | 1.417 | 1.376 | 1.231 | 0.928× | 1.021× | clang |
| Compress::ArithDecode | 0.883 | 1.022 | 1.497 | 1.155× | 1.699× | — |
| Compress::ArithEncode | 1.018 | 1.006 | 1.078 | 0.985× | 1.062× | — |
| Compress::BWTDecode | 1.313 | 1.315 | 1.311 | 1.000× | 1.001× | — |
| Compress::BWTEncode | 0.758 | 0.780 | 0.925 | 1.027× | 1.224× | — |
| Compress::HuffDecode | 0.449 | 0.737 | 0.393 | 1.635× | 0.871× | — |
| Compress::HuffEncode | 0.829 | 0.938 | 0.832 | 1.126× | 1.005× | — |
| Compress::LZWDecode | 0.579 | 0.575 | 0.553 | 0.990× | 0.959× | — |
| Compress::LZWEncode | 0.962 | 0.957 | 0.962 | 0.993× | 0.999× | — |
| Distance::Jaro | 1.164 | 1.196 | 1.211 | 1.026× | 1.041× | — |
| Distance::NGram | 1.179 | 1.198 | 1.129 | 1.011× | 0.960× | — |
| Etc::CacheSimulation | 0.825 | 0.791 | 0.803 | 0.956× | 0.976× | — |
| Etc::GameOfLife | 1.100 | 1.119 | 1.093 | 1.015× | 0.995× | — |
| Etc::LogParser | 0.397 | 1.216 | 0.440 | 3.034× | 1.107× | gcc |
| Etc::NeuralNet | 0.786 | 0.732 | 0.711 | 0.930× | 0.908× | — |
| Etc::Sieve | 2.426 | 3.134 | 2.416 | 1.293× | 0.994× | — |
| Etc::TextRaytracer | 0.650 | 0.639 | 0.830 | 0.982× | 1.281× | — |
| Etc::Words | 0.917 | 0.903 | 0.916 | 0.976× | 0.998× | — |
| Graph::AStar | 1.051 | 1.240 | 1.062 | 1.170× | 1.016× | — |
| Graph::BFS | 0.986 | 0.966 | 0.900 | 0.961× | 0.996× | — |
| Graph::DFS | 1.078 | 1.026 | 1.021 | 0.947× | 0.967× | — |
| Hash::CRC32 | 0.246 | 0.721 | 1.008 | 2.923× | 4.114× | — |
| Hash::SHA256 | 0.356 | 0.922 | 0.782 | 2.578× | 2.210× | — |
| Json::Generate | 0.853 | 0.863 | 0.855 | 1.006× | 1.004× | — |
| Json::ParseDom | 1.032 | 0.988 | 0.974 | 0.955× | 0.949× | gcc |
| Json::ParseMapping | 0.978 | 0.940 | 0.929 | 0.956× | 0.955× | gcc |
| Matmul::Single | 0.758 | 0.770 | 0.766 | 1.015× | 1.005× | — |
| Matmul::T16 | 1.625 | 1.627 | 1.621 | 1.005× | 0.996× | — |
| Matmul::T4 | 0.782 | 0.782 | 0.782 | 1.008× | 0.997× | — |
| Matmul::T8 | 0.831 | 0.834 | 0.830 | 1.007× | 1.001× | — |
| Maze::AStar | 1.509 | 1.611 | 1.058 | 1.003× | 0.970× | gcc |
| Maze::BFS | 0.807 | 1.092 | 0.764 | 1.018× | 1.039× | gcc, clang |
| Maze::Generator | 1.410 | 1.954 | 1.521 | 1.294× | 1.308× | gcc, clang |
| Sort::Merge | 0.733 | 1.066 | 0.851 | 1.454× | 1.164× | — |
| Sort::Quick | 1.120 | 1.157 | 1.127 | 1.029× | 1.006× | — |
| Sort::Self | 1.183 | 1.096 | 1.106 | 0.922× | 0.936× | — |
| Template::Parse | 1.231 | 1.238 | 1.137 | 0.929× | 1.046× | — |
| Template::Regex | 0.940 | 1.023 | 1.114 | 1.035× | 1.206× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 1.006×.
Compile clang A/A CPU ratio: 1.003×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152)
