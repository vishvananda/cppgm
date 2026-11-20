# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 502 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 89.9 s | 481.6 s | 5.36× |
| Build the WASI compiler, elapsed | 51.5 s | 248.3 s | 4.82× |
| Rebuild with the WASI compiler, CPU | 132.4 s | 136.4 s | 1.034× |
| Rebuild with the WASI compiler, elapsed | 73.8 s | 75.6 s | 1.027× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44667760294).
