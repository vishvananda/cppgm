# WASI backend performance

Measured `44d3c4a29971caff2cc064889ec96259f34e7504` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44815881069)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.85× |
| Stanford/FloatMM | 2.20× |
| Stanford/Puzzle | 1.15× |
| Stanford/Treesort | 1.02× |

The badge gives the geometric mean of the per-program CPU speedups.
