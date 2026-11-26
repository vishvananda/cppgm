# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 539 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 226.0 s | 1455.8 s | 6.44× |
| Build the WASI compiler, elapsed | 120.8 s | 737.3 s | 6.10× |
| Rebuild with the WASI compiler, CPU | 362.3 s | 373.0 s | 1.031× |
| Rebuild with the WASI compiler, elapsed | 189.6 s | 195.2 s | 1.030× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/45739944580).
