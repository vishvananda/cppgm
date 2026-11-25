# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 537 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 106.9 s | 553.0 s | 5.17× |
| Build the WASI compiler, elapsed | 60.8 s | 284.2 s | 4.68× |
| Rebuild with the WASI compiler, CPU | 163.3 s | 167.6 s | 1.027× |
| Rebuild with the WASI compiler, elapsed | 89.8 s | 91.9 s | 1.024× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45651777895).
