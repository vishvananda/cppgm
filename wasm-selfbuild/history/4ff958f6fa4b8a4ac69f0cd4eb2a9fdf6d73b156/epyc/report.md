# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 541 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 178.3 s | 1130.1 s | 6.34× |
| Build the WASI compiler, elapsed | 97.0 s | 573.9 s | 5.91× |
| Rebuild with the WASI compiler, CPU | 277.8 s | 289.9 s | 1.043× |
| Rebuild with the WASI compiler, elapsed | 146.8 s | 153.0 s | 1.043× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45850603565).
