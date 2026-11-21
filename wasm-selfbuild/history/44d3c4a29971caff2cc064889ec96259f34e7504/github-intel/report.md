# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 511 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 173.1 s | 996.8 s | 5.76× |
| Build the WASI compiler, elapsed | 93.9 s | 506.4 s | 5.39× |
| Rebuild with the WASI compiler, CPU | 254.3 s | 264.0 s | 1.036× |
| Rebuild with the WASI compiler, elapsed | 134.8 s | 139.6 s | 1.035× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: INTEL(R) XEON(R) PLATINUM 8573C. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44815881069).
