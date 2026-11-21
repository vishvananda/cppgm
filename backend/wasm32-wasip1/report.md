# WASI backend performance

Measured `992888a62d0d19fee6e2973c68195aed2b02a9b7` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44813597235)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.73× |
| Stanford/FloatMM | 2.17× |
| Stanford/Puzzle | 1.04× |
| Stanford/Treesort | 1.02× |

The badge gives the geometric mean of the per-program CPU speedups.
