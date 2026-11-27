# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 542 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 177.3 s | 1122.4 s | 6.33× |
| Build the WASI compiler, elapsed | 96.4 s | 570.1 s | 5.92× |
| Rebuild with the WASI compiler, CPU | 277.7 s | 291.3 s | 1.050× |
| Rebuild with the WASI compiler, elapsed | 147.0 s | 154.0 s | 1.048× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/46045514956).
