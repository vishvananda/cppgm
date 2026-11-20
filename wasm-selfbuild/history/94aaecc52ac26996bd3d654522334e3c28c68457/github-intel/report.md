# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 502 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 174.8 s | 1008.6 s | 5.77× |
| Build the WASI compiler, elapsed | 94.4 s | 512.8 s | 5.43× |
| Rebuild with the WASI compiler, CPU | 258.0 s | 266.0 s | 1.031× |
| Rebuild with the WASI compiler, elapsed | 136.6 s | 140.8 s | 1.031× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: INTEL(R) XEON(R) PLATINUM 8573C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44656576225).
