# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 539 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 177.2 s | 1137.1 s | 6.42× |
| Build the WASI compiler, elapsed | 96.0 s | 577.1 s | 6.01× |
| Rebuild with the WASI compiler, CPU | 277.8 s | 290.6 s | 1.048× |
| Rebuild with the WASI compiler, elapsed | 147.0 s | 153.2 s | 1.045× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45697047144).
