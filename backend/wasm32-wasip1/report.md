# WASI backend performance

Measured `dbbd227db37c255596e3fc11a4d3df8700ea7be7` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44922642903)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.83× |
| Stanford/FloatMM | 1.67× |
| Stanford/Puzzle | 0.91× |
| Stanford/Treesort | 0.99× |

The badge gives the geometric mean of the per-program CPU speedups.
