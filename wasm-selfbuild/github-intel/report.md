# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 524 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 88.8 s | 482.0 s | 5.43× |
| Build the WASI compiler, elapsed | 51.4 s | 248.8 s | 4.84× |
| Rebuild with the WASI compiler, CPU | 139.3 s | 146.7 s | 1.051× |
| Rebuild with the WASI compiler, elapsed | 77.4 s | 80.6 s | 1.041× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45272062060).
