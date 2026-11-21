# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 112.3 s | 703.3 s | 6.26× |
| Build the WASI compiler, elapsed | 63.2 s | 359.2 s | 5.68× |
| Rebuild with the WASI compiler, CPU | 157.5 s | 161.5 s | 1.026× |
| Rebuild with the WASI compiler, elapsed | 86.2 s | 88.3 s | 1.024× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V45 96-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44818861403).
