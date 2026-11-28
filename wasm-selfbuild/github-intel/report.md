# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 547 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 106.1 s | 564.8 s | 5.32× |
| Build the WASI compiler, elapsed | 60.6 s | 290.7 s | 4.80× |
| Rebuild with the WASI compiler, CPU | 165.7 s | 170.3 s | 1.030× |
| Rebuild with the WASI compiler, elapsed | 90.9 s | 93.2 s | 1.025× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/46092715613).
