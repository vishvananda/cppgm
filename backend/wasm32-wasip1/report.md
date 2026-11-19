# WASI backend performance

Measured `6ddc5326a8c4d8752e1d92ecedf5228df07a50e8` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44597827043)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.88× |
| Stanford/FloatMM | 2.14× |
| Stanford/Puzzle | 1.05× |
| Stanford/Treesort | 1.02× |

The badge gives the geometric mean of the per-program CPU speedups.
