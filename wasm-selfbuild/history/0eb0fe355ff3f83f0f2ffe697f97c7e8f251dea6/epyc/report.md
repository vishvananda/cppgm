# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 148.7 s | 967.4 s | 6.51× |
| Build the WASI compiler, elapsed | 81.5 s | 491.9 s | 6.04× |
| Rebuild with the WASI compiler, CPU | 231.4 s | 243.5 s | 1.053× |
| Rebuild with the WASI compiler, elapsed | 123.4 s | 129.4 s | 1.049× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44801983152).
