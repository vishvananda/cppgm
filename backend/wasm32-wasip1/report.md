# WASI backend performance

Measured `61c93cf80bbefb800c9a2a397bacf09b138c2ed3` on AMD EPYC 7763 64-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45754596224)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.75× |
| Stanford/FloatMM | 2.24× |
| Stanford/Puzzle | 0.99× |
| Stanford/Treesort | 1.00× |

The badge gives the geometric mean of the per-program CPU speedups.
