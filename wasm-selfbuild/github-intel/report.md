# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 521 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 93.6 s | 492.0 s | 5.26× |
| Build the WASI compiler, elapsed | 53.7 s | 253.9 s | 4.73× |
| Rebuild with the WASI compiler, CPU | 141.3 s | 146.0 s | 1.036× |
| Rebuild with the WASI compiler, elapsed | 78.2 s | 80.7 s | 1.031× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45241427099).
