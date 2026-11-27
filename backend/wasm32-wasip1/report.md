# WASI backend performance

Measured `fc7c4523cba2e80b1a19ce5f207866232b207872` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/46032707836)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.82× |
| Stanford/FloatMM | 2.19× |
| Stanford/Puzzle | 1.05× |
| Stanford/Treesort | 0.96× |

The badge gives the geometric mean of the per-program CPU speedups.
