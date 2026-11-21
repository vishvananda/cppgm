# index-cpp benchmarks

Compiler checkout: `992888a62d0d19fee6e2973c68195aed2b02a9b7` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.081× | 1.085× |
| Compile CPU | 6.253× | 4.961× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 231,032 |
| gcc | 540,112 | 280,921 | 486,098 |
| clang | 513,720 | 264,561 | 319,082 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.974 | 0.730 | 0.837 | 0.741× | 0.866× | — |
| Base64::Encode | 0.903 | 1.001 | 0.788 | 1.110× | 0.870× | — |
| Binarytrees::Arena | 1.869 | 1.940 | 2.070 | 1.086× | 1.079× | — |
| Binarytrees::Obj | 0.927 | 0.837 | 1.193 | 0.973× | 1.268× | clang |
| Brainfuck::Array | 1.638 | 1.655 | 1.712 | 1.014× | 1.040× | — |
| Brainfuck::Recursion | 1.127 | 1.205 | 1.424 | 1.069× | 1.258× | — |
| CLBG::Fannkuchredux | 0.899 | 0.965 | 0.837 | 1.074× | 0.922× | gcc |
| CLBG::Mandelbrot | 0.951 | 0.979 | 0.975 | 1.030× | 1.024× | — |
| CLBG::Nbody | 0.661 | 0.623 | 0.637 | 0.946× | 0.964× | — |
| CLBG::Spectralnorm | 0.978 | 0.938 | 1.321 | 0.961× | 1.351× | — |
| CSV::Parse | 0.850 | 0.791 | 0.930 | 0.931× | 1.090× | — |
| Calculator::Ast | 0.867 | 0.742 | 0.823 | 0.882× | 0.942× | gcc, clang |
| Calculator::Interpreter | 1.183 | 1.068 | 1.315 | 0.957× | 1.087× | — |
| Compress::ArithDecode | 0.879 | 1.012 | 1.496 | 1.153× | 1.703× | — |
| Compress::ArithEncode | 1.012 | 0.998 | 1.077 | 0.987× | 1.062× | — |
| Compress::BWTDecode | 1.302 | 1.302 | 1.306 | 1.001× | 1.003× | — |
| Compress::BWTEncode | 0.753 | 0.776 | 0.923 | 1.033× | 1.226× | clang |
| Compress::HuffDecode | 0.443 | 0.726 | 0.389 | 1.626× | 0.888× | — |
| Compress::HuffEncode | 0.826 | 0.929 | 0.832 | 1.125× | 1.011× | — |
| Compress::LZWDecode | 0.573 | 0.567 | 0.547 | 0.994× | 0.952× | — |
| Compress::LZWEncode | 0.960 | 0.948 | 0.958 | 0.989× | 0.995× | — |
| Distance::Jaro | 1.161 | 1.191 | 1.208 | 1.026× | 1.039× | — |
| Distance::NGram | 1.175 | 1.188 | 1.129 | 1.013× | 0.962× | — |
| Etc::CacheSimulation | 0.821 | 0.786 | 0.807 | 0.957× | 0.979× | — |
| Etc::GameOfLife | 1.097 | 1.103 | 1.092 | 1.008× | 0.997× | — |
| Etc::LogParser | 0.396 | 1.175 | 0.443 | 2.973× | 1.124× | gcc |
| Etc::NeuralNet | 0.784 | 0.724 | 0.710 | 0.925× | 0.907× | — |
| Etc::Sieve | 2.411 | 3.090 | 2.382 | 1.287× | 0.986× | — |
| Etc::TextRaytracer | 0.647 | 0.634 | 0.829 | 0.980× | 1.280× | — |
| Etc::Words | 0.917 | 0.896 | 0.909 | 0.980× | 0.991× | — |
| Graph::AStar | 1.029 | 1.057 | 1.061 | 1.160× | 1.033× | gcc, clang |
| Graph::BFS | 0.960 | 0.644 | 0.921 | 0.897× | 0.936× | clang |
| Graph::DFS | 1.060 | 0.935 | 1.030 | 0.938× | 0.968× | gcc, clang |
| Hash::CRC32 | 0.245 | 0.717 | 1.010 | 2.929× | 4.116× | — |
| Hash::SHA256 | 0.355 | 0.915 | 0.784 | 2.577× | 2.205× | — |
| Json::Generate | 0.849 | 0.853 | 0.851 | 1.009× | 0.996× | — |
| Json::ParseDom | 1.029 | 0.976 | 0.968 | 0.952× | 0.939× | — |
| Json::ParseMapping | 0.972 | 0.929 | 0.921 | 0.957× | 0.945× | — |
| Matmul::Single | 0.762 | 0.755 | 0.752 | 0.990× | 0.994× | — |
| Matmul::T16 | 1.611 | 1.616 | 1.599 | 0.998× | 0.993× | — |
| Matmul::T4 | 0.772 | 0.771 | 0.775 | 1.000× | 0.996× | — |
| Matmul::T8 | 0.825 | 0.817 | 0.824 | 0.998× | 0.988× | — |
| Maze::AStar | 0.998 | 0.837 | 1.070 | 0.897× | 0.953× | clang |
| Maze::BFS | 0.717 | 0.700 | 0.762 | 0.976× | 1.041× | — |
| Maze::Generator | 1.179 | 1.089 | 1.779 | 1.092× | 1.317× | gcc, clang |
| Sort::Merge | 0.727 | 1.056 | 0.851 | 1.454× | 1.170× | — |
| Sort::Quick | 1.115 | 1.145 | 1.127 | 1.030× | 1.011× | — |
| Sort::Self | 1.177 | 1.083 | 1.107 | 0.922× | 0.940× | — |
| Template::Parse | 1.052 | 1.029 | 1.118 | 0.986× | 1.049× | — |
| Template::Regex | 0.914 | 0.942 | 1.103 | 1.034× | 1.202× | — |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.992×.
Compile clang A/A CPU ratio: 1.002×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235)
