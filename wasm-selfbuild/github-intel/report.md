# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 93.5 s | 490.1 s | 5.24× |
| Build the WASI compiler, elapsed | 53.4 s | 252.7 s | 4.73× |
| Rebuild with the WASI compiler, CPU | 137.3 s | 140.8 s | 1.026× |
| Rebuild with the WASI compiler, elapsed | 76.2 s | 78.0 s | 1.024× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44774088589).
