# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 503 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 87.7 s | 477.6 s | 5.44× |
| Build the WASI compiler, elapsed | 50.5 s | 246.4 s | 4.88× |
| Rebuild with the WASI compiler, CPU | 133.1 s | 136.5 s | 1.025× |
| Rebuild with the WASI compiler, elapsed | 74.1 s | 75.6 s | 1.022× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44743598642).
