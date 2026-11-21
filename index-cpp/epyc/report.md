# index-cpp benchmarks

Compiler checkout: `dbbd227db37c255596e3fc11a4d3df8700ea7be7` · CPU: AMD EPYC 9V45 96-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.057× | 1.059× |
| Compile CPU | 6.459× | 4.963× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,754 | 230,932 |
| gcc | 540,112 | 280,921 | 485,978 |
| clang | 513,720 | 264,561 | 319,342 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 0.826 | 0.676 | 0.706 | 0.824× | 0.855× | gcc, clang |
| Base64::Encode | 0.905 | 0.863 | 0.669 | 0.957× | 0.736× | gcc |
| Binarytrees::Arena | 1.539 | 1.629 | 1.616 | 1.052× | 1.049× | gcc |
| Binarytrees::Obj | 0.679 | 0.645 | 0.750 | 0.941× | 1.096× | gcc |
| Brainfuck::Array | 1.098 | 1.399 | 1.250 | 1.282× | 1.149× | clang |
| Brainfuck::Recursion | 0.861 | 0.738 | 0.841 | 0.856× | 0.976× | — |
| CLBG::Fannkuchredux | 0.779 | 0.762 | 0.792 | 0.981× | 1.022× | — |
| CLBG::Mandelbrot | 0.870 | 0.843 | 0.867 | 0.972× | 0.998× | gcc |
| CLBG::Nbody | 0.625 | 0.626 | 0.630 | 0.998× | 1.011× | clang |
| CLBG::Spectralnorm | 0.658 | 0.714 | 1.012 | 1.081× | 1.538× | — |
| CSV::Parse | 0.643 | 0.593 | 0.653 | 0.937× | 0.998× | — |
| Calculator::Ast | 0.587 | 0.604 | 0.577 | 1.021× | 0.981× | gcc |
| Calculator::Interpreter | 0.763 | 0.702 | 0.778 | 0.891× | 1.060× | gcc |
| Compress::ArithDecode | 0.673 | 0.663 | 1.208 | 0.976× | 1.808× | — |
| Compress::ArithEncode | 0.837 | 0.760 | 0.788 | 0.910× | 0.945× | — |
| Compress::BWTDecode | 0.417 | 0.408 | 0.415 | 0.974× | 0.993× | — |
| Compress::BWTEncode | 0.571 | 0.599 | 0.723 | 1.049× | 1.265× | — |
| Compress::HuffDecode | 0.276 | 0.378 | 0.262 | 1.332× | 0.944× | gcc |
| Compress::HuffEncode | 0.506 | 0.502 | 0.692 | 0.988× | 1.364× | — |
| Compress::LZWDecode | 0.403 | 0.416 | 0.394 | 1.034× | 0.975× | — |
| Compress::LZWEncode | 0.746 | 0.726 | 0.728 | 0.982× | 0.964× | gcc |
| Distance::Jaro | 0.923 | 0.899 | 0.891 | 0.974× | 0.963× | — |
| Distance::NGram | 0.899 | 0.859 | 0.860 | 0.951× | 0.958× | — |
| Etc::CacheSimulation | 0.633 | 0.609 | 0.631 | 0.957× | 1.002× | — |
| Etc::GameOfLife | 0.872 | 0.655 | 0.666 | 0.777× | 0.767× | gcc, clang |
| Etc::LogParser | 0.249 | 0.853 | 0.288 | 3.363× | 1.132× | clang |
| Etc::NeuralNet | 0.702 | 0.615 | 0.589 | 0.871× | 0.864× | clang |
| Etc::Sieve | 0.914 | 1.262 | 0.853 | 1.380× | 0.934× | — |
| Etc::TextRaytracer | 0.592 | 0.580 | 0.722 | 0.977× | 1.214× | — |
| Etc::Words | 0.726 | 0.694 | 0.738 | 0.945× | 1.010× | — |
| Graph::AStar | 0.956 | 1.062 | 0.927 | 1.118× | 0.968× | — |
| Graph::BFS | 1.111 | 1.289 | 1.073 | 1.163× | 0.960× | gcc |
| Graph::DFS | 1.154 | 1.087 | 1.107 | 0.930× | 0.981× | gcc |
| Hash::CRC32 | 0.209 | 0.578 | 0.657 | 2.752× | 3.114× | — |
| Hash::SHA256 | 0.463 | 0.901 | 0.919 | 1.951× | 1.996× | — |
| Json::Generate | 0.649 | 0.651 | 0.657 | 1.002× | 1.019× | — |
| Json::ParseDom | 0.768 | 0.738 | 0.744 | 0.960× | 0.972× | — |
| Json::ParseMapping | 0.732 | 0.702 | 0.719 | 0.966× | 0.987× | — |
| Matmul::Single | 0.627 | 0.625 | 0.625 | 0.997× | 0.992× | — |
| Matmul::T16 | 1.285 | 1.306 | 1.324 | 1.013× | 1.032× | — |
| Matmul::T4 | 0.632 | 0.626 | 0.633 | 0.994× | 1.020× | — |
| Matmul::T8 | 0.657 | 0.653 | 0.693 | 0.989× | 1.049× | gcc |
| Maze::AStar | 1.111 | 0.953 | 0.908 | 0.887× | 0.920× | gcc, clang |
| Maze::BFS | 0.881 | 0.776 | 0.841 | 0.850× | 1.001× | gcc |
| Maze::Generator | 1.171 | 1.144 | 1.151 | 0.966× | 1.002× | gcc, clang |
| Sort::Merge | 0.631 | 0.931 | 0.681 | 1.471× | 1.080× | — |
| Sort::Quick | 1.087 | 1.033 | 1.050 | 0.973× | 0.972× | — |
| Sort::Self | 1.068 | 0.983 | 0.952 | 0.930× | 0.900× | gcc, clang |
| Template::Parse | 0.659 | 0.691 | 0.801 | 1.047× | 1.064× | gcc |
| Template::Regex | 0.740 | 0.820 | 0.907 | 1.143× | 1.142× | gcc |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.996×.
Compile clang A/A CPU ratio: 0.989×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.10.2 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903)
