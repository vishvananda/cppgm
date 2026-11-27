# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 541 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 104.5 s | 564.3 s | 5.40× |
| Build the WASI compiler, elapsed | 59.9 s | 289.9 s | 4.84× |
| Rebuild with the WASI compiler, CPU | 164.4 s | 169.2 s | 1.029× |
| Rebuild with the WASI compiler, elapsed | 90.0 s | 92.7 s | 1.028× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/46032707836).
