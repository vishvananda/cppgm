# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 541 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 108.2 s | 566.9 s | 5.24× |
| Build the WASI compiler, elapsed | 61.4 s | 291.8 s | 4.75× |
| Rebuild with the WASI compiler, CPU | 162.8 s | 167.2 s | 1.025× |
| Rebuild with the WASI compiler, elapsed | 89.4 s | 91.7 s | 1.022× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45754596224).
