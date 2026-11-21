# WASI compiler self-build

cppgm and Clang each build `cppgm` for WASI. Both WASI compilers then rebuild `cppgm` from the same 521 sources in one pinned engine. Speedup is Clang time / cppgm time; higher is better.

| Measurement | cppgm | Clang | Speedup |
|---|---:|---:|---:|
| Build the WASI compiler, CPU | 159.3 s | 1015.1 s | 6.37× |
| Build the WASI compiler, elapsed | 87.1 s | 516.1 s | 5.93× |
| Rebuild with the WASI compiler, CPU | 243.3 s | 255.7 s | 1.048× |
| Rebuild with the WASI compiler, elapsed | 129.4 s | 135.5 s | 1.044× |

The build is one observation. The rebuild is the median of 3 paired ABBA blocks.

CPU: AMD EPYC 9V74 80-Core Processor. [Raw CI observations](https://github.com/vishvananda/cppgm/actions/runs/44922642903).
