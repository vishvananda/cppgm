# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 502 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 87.9 s | 471.6 s | 5.37× |
| Build the WASI compiler, elapsed | 50.5 s | 243.2 s | 4.82× |
| Rebuild with the WASI compiler, CPU | 128.6 s | 133.5 s | 1.033× |
| Rebuild with the WASI compiler, elapsed | 72.0 s | 74.1 s | 1.028× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44597827043).
