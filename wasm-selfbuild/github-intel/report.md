# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 502 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 88.3 s | 479.8 s | 5.44× |
| Build the WASI compiler, elapsed | 50.6 s | 247.5 s | 4.89× |
| Rebuild with the WASI compiler, CPU | 131.2 s | 134.9 s | 1.031× |
| Rebuild with the WASI compiler, elapsed | 73.1 s | 75.0 s | 1.028× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44612055398).
