# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 94.4 s | 487.5 s | 5.16× |
| Build the WASI compiler, elapsed | 54.0 s | 251.5 s | 4.66× |
| Rebuild with the WASI compiler, CPU | 136.2 s | 141.1 s | 1.034× |
| Rebuild with the WASI compiler, elapsed | 75.4 s | 77.8 s | 1.029× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44830361139).
