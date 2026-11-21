# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 521 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 95.9 s | 507.0 s | 5.29× |
| Build the WASI compiler, elapsed | 55.1 s | 261.6 s | 4.75× |
| Rebuild with the WASI compiler, CPU | 140.8 s | 145.3 s | 1.032× |
| Rebuild with the WASI compiler, elapsed | 78.0 s | 80.2 s | 1.026× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: Intel(R) Xeon(R) 6975P-C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44927958294).
