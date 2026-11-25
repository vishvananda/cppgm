# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 537 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 223.7 s | 1379.9 s | 6.17× |
| Build the WASI compiler, elapsed | 119.6 s | 698.9 s | 5.85× |
| Rebuild with the WASI compiler, CPU | 345.3 s | 355.8 s | 1.029× |
| Rebuild with the WASI compiler, elapsed | 180.9 s | 186.3 s | 1.029× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45617981312).
