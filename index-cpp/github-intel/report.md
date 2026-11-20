# index-cpp benchmarks

Compiler checkout: `897807fd4b8c8a50f234a4480f91abe56a7760a8` · CPU: Intel(R) Xeon(R) 6975P-C

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.089× | 1.097× |
| Compile CPU | 6.352× | 5.149× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,152 | 326,258 | 230,972 |
| gcc | 540,112 | 280,921 | 486,044 |
| clang | 513,720 | 264,561 | 317,786 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.980 | 0.745 | 0.845 | 0.752× | 0.878× | gcc |
| Base64::Encode | 0.911 | 1.024 | 0.794 | 1.126× | 0.872× | gcc |
| Binarytrees::Arena | 2.014 | 2.184 | 2.127 | 1.078× | 1.075× | — |
| Binarytrees::Obj | 0.992 | 0.926 | 1.208 | 0.916× | 1.261× | gcc |
| Brainfuck::Array | 1.640 | 1.659 | 1.704 | 1.013× | 1.039× | — |
| Brainfuck::Recursion | 1.131 | 1.212 | 1.426 | 1.071× | 1.259× | — |
| CLBG::Fannkuchredux | 0.902 | 0.970 | 0.833 | 1.072× | 0.939× | — |
| CLBG::Mandelbrot | 0.954 | 0.984 | 0.975 | 1.031× | 1.023× | — |
| CLBG::Nbody | 0.661 | 0.628 | 0.637 | 0.947× | 0.962× | — |
| CLBG::Spectralnorm | 0.980 | 0.945 | 1.321 | 0.962× | 1.347× | — |
| CSV::Parse | 0.855 | 0.797 | 0.931 | 0.932× | 1.091× | — |
| Calculator::Ast | 0.898 | 0.845 | 0.851 | 0.921× | 0.970× | gcc, clang |
| Calculator::Interpreter | 1.327 | 1.385 | 1.462 | 0.957× | 1.225× | gcc |
| Compress::ArithDecode | 0.879 | 1.018 | 1.496 | 1.155× | 1.704× | — |
| Compress::ArithEncode | 1.015 | 1.002 | 1.078 | 0.985× | 1.063× | — |
| Compress::BWTDecode | 1.315 | 1.317 | 1.315 | 1.000× | 1.002× | — |
| Compress::BWTEncode | 0.758 | 0.784 | 0.927 | 1.032× | 1.224× | — |
| Compress::HuffDecode | 0.446 | 0.736 | 0.392 | 1.652× | 0.875× | — |
| Compress::HuffEncode | 0.827 | 0.934 | 0.833 | 1.125× | 1.014× | gcc |
| Compress::LZWDecode | 0.583 | 0.579 | 0.554 | 0.991× | 0.955× | — |
| Compress::LZWEncode | 0.958 | 0.954 | 0.956 | 0.994× | 1.000× | — |
| Distance::Jaro | 1.160 | 1.194 | 1.210 | 1.026× | 1.042× | — |
| Distance::NGram | 1.176 | 1.192 | 1.129 | 1.012× | 0.961× | clang |
| Etc::CacheSimulation | 0.822 | 0.792 | 0.808 | 0.962× | 0.983× | — |
| Etc::GameOfLife | 1.127 | 1.161 | 1.107 | 1.029× | 0.985× | — |
| Etc::LogParser | 0.398 | 1.181 | 0.441 | 3.006× | 1.107× | — |
| Etc::NeuralNet | 0.784 | 0.732 | 0.712 | 0.932× | 0.910× | — |
| Etc::Sieve | 2.458 | 3.170 | 2.421 | 1.292× | 0.989× | — |
| Etc::TextRaytracer | 0.647 | 0.637 | 0.832 | 0.981× | 1.287× | — |
| Etc::Words | 0.923 | 0.905 | 0.913 | 0.990× | 0.995× | — |
| Graph::AStar | 1.043 | 1.231 | 1.066 | 1.172× | 1.019× | clang |
| Graph::BFS | 0.955 | 0.961 | 0.954 | 0.957× | 1.023× | clang |
| Graph::DFS | 1.074 | 1.024 | 1.035 | 0.950× | 0.982× | clang |
| Hash::CRC32 | 0.245 | 0.720 | 1.010 | 2.923× | 4.114× | — |
| Hash::SHA256 | 0.356 | 0.920 | 0.783 | 2.575× | 2.204× | — |
| Json::Generate | 0.856 | 0.863 | 0.854 | 1.008× | 1.002× | — |
| Json::ParseDom | 1.034 | 0.992 | 0.976 | 0.960× | 0.938× | clang |
| Json::ParseMapping | 0.978 | 0.943 | 0.930 | 0.964× | 0.942× | clang |
| Matmul::Single | 0.769 | 0.770 | 0.769 | 1.004× | 1.000× | — |
| Matmul::T16 | 1.653 | 1.659 | 1.644 | 0.995× | 0.991× | — |
| Matmul::T4 | 0.788 | 0.785 | 0.786 | 0.997× | 0.997× | — |
| Matmul::T8 | 0.851 | 0.847 | 0.840 | 0.994× | 0.984× | — |
| Maze::AStar | 1.312 | 1.509 | 1.288 | 0.914× | 1.096× | gcc, clang |
| Maze::BFS | 0.761 | 0.767 | 0.799 | 1.000× | 1.069× | gcc, clang |
| Maze::Generator | 1.389 | 1.866 | 1.735 | 1.208× | 1.424× | clang |
| Sort::Merge | 0.730 | 1.064 | 0.853 | 1.450× | 1.172× | — |
| Sort::Quick | 1.117 | 1.155 | 1.129 | 1.030× | 1.013× | — |
| Sort::Self | 1.181 | 1.095 | 1.107 | 0.923× | 0.940× | — |
| Template::Parse | 1.107 | 1.156 | 1.170 | 1.011× | 1.068× | gcc |
| Template::Regex | 0.933 | 0.988 | 1.144 | 1.063× | 1.238× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.984×.
Compile clang A/A CPU ratio: 0.996×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.1 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957)
