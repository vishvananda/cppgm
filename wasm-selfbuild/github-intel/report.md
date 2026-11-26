# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 541 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 111.3 s | 574.0 s | 5.16× |
| Build the WASI compiler, elapsed | 62.9 s | 295.2 s | 4.70× |
| Rebuild with the WASI compiler, CPU | 161.5 s | 167.5 s | 1.034× |
| Rebuild with the WASI compiler, elapsed | 88.7 s | 91.8 s | 1.032× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45790989032).
