# WASI backend performance

Measured `bf2f830a479c21887e7ef6e44787b48dac78bf6d` on AMD EPYC 9V45 96-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45651777895)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 0.99× |
| Stanford/Bubblesort | 0.83× |
| Stanford/FloatMM | 1.99× |
| Stanford/Puzzle | 0.96× |
| Stanford/Treesort | 0.99× |

The badge gives the geometric mean of the per-program CPU speedups.
