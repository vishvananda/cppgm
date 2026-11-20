# WASI backend performance

Measured `f14c300df24c805416e28f06d41b201a035b60c7` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44743598642)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.82× |
| Stanford/FloatMM | 1.67× |
| Stanford/Puzzle | 0.94× |
| Stanford/Treesort | 1.00× |

The badge gives the geometric mean of the per-program CPU speedups.
