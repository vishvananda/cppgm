# WASI backend performance

Measured `cc79604cdc196d46abdebb888158e8b90d3cac52` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45241427099)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.85× |
| Stanford/FloatMM | 1.77× |
| Stanford/Puzzle | 0.82× |
| Stanford/Treesort | 1.04× |

The badge gives the geometric mean of the per-program CPU speedups.
