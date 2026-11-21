# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 111.5 s | 719.7 s | 6.46× |
| Build the WASI compiler, elapsed | 62.9 s | 367.4 s | 5.85× |
| Rebuild with the WASI compiler, CPU | 154.7 s | 161.6 s | 1.051× |
| Rebuild with the WASI compiler, elapsed | 84.5 s | 88.1 s | 1.046× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V45 96-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44813597235).
