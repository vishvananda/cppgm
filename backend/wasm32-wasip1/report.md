# WASI backend performance

Measured `0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a` on AMD EPYC 9V45 96-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44774088589)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.01× |
| Stanford/Bubblesort | 0.70× |
| Stanford/FloatMM | 1.89× |
| Stanford/Puzzle | 0.93× |
| Stanford/Treesort | 1.00× |

The badge gives the geometric mean of the per-program CPU speedups.
