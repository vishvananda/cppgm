# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 92.5 s | 482.8 s | 5.22× |
| Build the WASI compiler, elapsed | 53.1 s | 248.8 s | 4.69× |
| Rebuild with the WASI compiler, CPU | 135.8 s | 141.2 s | 1.042× |
| Rebuild with the WASI compiler, elapsed | 75.6 s | 78.0 s | 1.037× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44780058957).
