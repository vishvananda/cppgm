# WASI backend performance

Measured `7bc2ee42070147be1668ff16a16841c6e02b47e3` on AMD EPYC 7763 64-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44927958294)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 0.99× |
| Stanford/Bubblesort | 0.87× |
| Stanford/FloatMM | 2.17× |
| Stanford/Puzzle | 0.97× |
| Stanford/Treesort | 1.02× |

The badge gives the geometric mean of the per-program CPU speedups.
