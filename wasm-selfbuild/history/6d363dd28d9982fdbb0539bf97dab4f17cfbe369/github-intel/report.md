# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 503 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 85.2 s | 460.4 s | 5.40× |
| Build the WASI compiler, elapsed | 49.2 s | 237.5 s | 4.83× |
| Rebuild with the WASI compiler, CPU | 130.4 s | 135.2 s | 1.036× |
| Rebuild with the WASI compiler, elapsed | 72.7 s | 74.8 s | 1.030× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44686728157).
