# WASI backend performance

Measured `c37fb6f9de8fa22d3ae66364951928f39bbd5e25` on AMD EPYC 9V45 96-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/46045514956)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 0.98× |
| Stanford/Bubblesort | 0.86× |
| Stanford/FloatMM | 1.86× |
| Stanford/Puzzle | 1.00× |
| Stanford/Treesort | 0.97× |

The badge gives the geometric mean of the per-program CPU speedups.
