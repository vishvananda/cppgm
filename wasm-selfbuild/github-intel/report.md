# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 539 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 100.8 s | 540.2 s | 5.36× |
| Build the WASI compiler, elapsed | 57.8 s | 277.7 s | 4.80× |
| Rebuild with the WASI compiler, CPU | 158.5 s | 162.1 s | 1.024× |
| Rebuild with the WASI compiler, elapsed | 87.1 s | 89.1 s | 1.022× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45710374989).
