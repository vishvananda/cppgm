# index-cpp benchmarks

Compiler checkout: `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` · CPU: AMD EPYC 9V74 80-Core Processor

Unchanged upstream: `79e0b423094d420da37fb714f20c53fc35eeb2a3`. All 50 checksums pass with cppgm, GCC and Clang. Full runtime inputs, paired ABBA/BAAB blocks with A/A calibration. Speeds are reference time / cppgm time: higher is better. The aggregate gives all 50 workloads equal weight and is separate from the public suite.

| Measurement | vs GCC | vs Clang |
|---|---:|---:|
| Generated code | 1.084× | 1.065× |
| Compile CPU | 6.405× | 5.347× |

| Compiler | Executable bytes | .text bytes | Compile peak RSS (KiB) |
|---|---:|---:|---:|
| cppgm | 632,056 | 328,626 | 231,962 |
| gcc | 540,112 | 280,921 | 486,036 |
| clang | 513,720 | 264,561 | 319,490 |

| Workload | cppgm seconds | GCC seconds | Clang seconds | vs GCC | vs Clang | A/A warning |
|---|---:|---:|---:|---:|---:|---|
| Base64::Decode | 1.505 | 1.230 | 1.285 | 0.816× | 0.853× | — |
| Base64::Encode | 1.790 | 1.550 | 1.296 | 0.863× | 0.734× | — |
| Binarytrees::Arena | 2.548 | 2.694 | 2.651 | 1.055× | 1.046× | — |
| Binarytrees::Obj | 2.466 | 2.292 | 2.486 | 0.951× | 1.038× | gcc |
| Brainfuck::Array | 1.968 | 2.710 | 1.966 | 1.385× | 1.015× | gcc, clang |
| Brainfuck::Recursion | 1.515 | 1.521 | 1.480 | 1.005× | 0.976× | clang |
| CLBG::Fannkuchredux | 1.163 | 1.261 | 1.158 | 1.086× | 0.999× | — |
| CLBG::Mandelbrot | 1.583 | 1.509 | 1.438 | 0.953× | 0.908× | — |
| CLBG::Nbody | 1.146 | 1.149 | 1.154 | 1.003× | 1.007× | — |
| CLBG::Spectralnorm | 1.148 | 1.183 | 1.993 | 1.031× | 1.745× | — |
| CSV::Parse | 1.164 | 1.056 | 1.167 | 0.908× | 1.000× | — |
| Calculator::Ast | 1.033 | 0.957 | 1.006 | 0.934× | 0.976× | — |
| Calculator::Interpreter | 1.654 | 1.546 | 1.757 | 0.927× | 1.003× | gcc |
| Compress::ArithDecode | 1.059 | 1.047 | 1.799 | 0.991× | 1.698× | — |
| Compress::ArithEncode | 1.197 | 1.103 | 1.227 | 0.921× | 1.025× | — |
| Compress::BWTDecode | 0.717 | 0.697 | 0.727 | 0.973× | 1.017× | — |
| Compress::BWTEncode | 1.075 | 1.107 | 1.280 | 1.029× | 1.199× | — |
| Compress::HuffDecode | 0.581 | 0.771 | 0.536 | 1.326× | 0.920× | — |
| Compress::HuffEncode | 0.938 | 1.001 | 1.185 | 1.070× | 1.261× | — |
| Compress::LZWDecode | 0.746 | 0.753 | 0.706 | 1.007× | 0.944× | — |
| Compress::LZWEncode | 1.300 | 1.260 | 1.277 | 0.972× | 0.983× | — |
| Distance::Jaro | 1.339 | 1.355 | 1.260 | 1.015× | 0.941× | — |
| Distance::NGram | 1.435 | 1.382 | 1.359 | 0.959× | 0.946× | — |
| Etc::CacheSimulation | 1.170 | 1.145 | 1.152 | 0.980× | 0.975× | — |
| Etc::GameOfLife | 1.553 | 1.609 | 1.578 | 1.022× | 1.023× | clang |
| Etc::LogParser | 0.536 | 2.292 | 0.659 | 4.230× | 1.227× | gcc, clang |
| Etc::NeuralNet | 1.259 | 1.073 | 1.056 | 0.904× | 0.901× | gcc |
| Etc::Sieve | 1.528 | 2.018 | 1.540 | 1.320× | 1.008× | — |
| Etc::TextRaytracer | 1.151 | 1.125 | 1.348 | 0.982× | 1.172× | clang |
| Etc::Words | 1.315 | 1.277 | 1.323 | 0.974× | 1.021× | — |
| Graph::AStar | 1.329 | 1.497 | 1.216 | 1.129× | 0.921× | — |
| Graph::BFS | 1.757 | 1.532 | 1.390 | 0.871× | 0.779× | clang |
| Graph::DFS | 1.623 | 1.440 | 1.477 | 0.876× | 0.896× | clang |
| Hash::CRC32 | 0.331 | 0.910 | 1.034 | 2.749× | 3.124× | — |
| Hash::SHA256 | 0.495 | 1.513 | 1.518 | 3.059× | 3.069× | — |
| Json::Generate | 0.990 | 0.993 | 0.992 | 0.999× | 1.002× | — |
| Json::ParseDom | 1.255 | 1.224 | 1.172 | 0.956× | 0.942× | — |
| Json::ParseMapping | 1.196 | 1.155 | 1.121 | 0.958× | 0.956× | gcc |
| Matmul::Single | 1.515 | 1.514 | 1.516 | 0.999× | 1.001× | — |
| Matmul::T16 | 2.963 | 2.950 | 2.950 | 1.001× | 0.998× | — |
| Matmul::T4 | 1.498 | 1.502 | 1.495 | 1.003× | 0.998× | — |
| Matmul::T8 | 1.536 | 1.543 | 1.545 | 1.000× | 1.007× | gcc |
| Maze::AStar | 1.550 | 1.488 | 1.745 | 0.953× | 1.099× | clang |
| Maze::BFS | 1.379 | 1.418 | 1.496 | 1.067× | 1.064× | — |
| Maze::Generator | 1.447 | 1.488 | 1.511 | 1.033× | 1.028× | gcc, clang |
| Sort::Merge | 0.962 | 1.274 | 1.135 | 1.325× | 1.179× | — |
| Sort::Quick | 1.466 | 1.400 | 1.418 | 0.955× | 0.968× | — |
| Sort::Self | 1.415 | 1.344 | 1.368 | 0.950× | 0.967× | — |
| Template::Parse | 1.737 | 1.995 | 2.046 | 1.143× | 0.990× | gcc, clang |
| Template::Regex | 1.578 | 1.756 | 1.846 | 1.169× | 1.101× | gcc, clang |

A/A warnings flag variation above 2%; no cases are dropped. Small timing differences need confirmation.
Compile gcc A/A CPU ratio: 0.997×.
Compile clang A/A CPU ratio: 1.008×.

Hardware counters: unavailable: perf is not installed on this host.

## Toolchains

- **cppgm**: cppgm 0.11.4 (host configuration: g++)
- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)

[Results](results.json) · [Provenance and header hashes](metadata.json) · [Raw compile observations](compile-observations.jsonl) · [Raw runtime observations](runtime-observations.jsonl)

[CI run and complete artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032)
