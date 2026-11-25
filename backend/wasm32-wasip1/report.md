# WASI backend performance

Measured `d8c559893a923e5683c44df6cb98076271dd6f01` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45697047144)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.80× |
| Stanford/FloatMM | 1.69× |
| Stanford/Puzzle | 0.89× |
| Stanford/Treesort | 1.09× |

The badge gives the geometric mean of the per-program CPU speedups.
