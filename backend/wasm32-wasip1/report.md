# WASI backend performance

Measured `49adadaefcc6510c6c725be8d3c780b397e68bc5` on AMD EPYC 7763 64-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45739944580)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.76× |
| Stanford/FloatMM | 2.24× |
| Stanford/Puzzle | 1.07× |
| Stanford/Treesort | 1.01× |

The badge gives the geometric mean of the per-program CPU speedups.
