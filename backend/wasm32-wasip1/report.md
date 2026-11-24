# WASI backend performance

Measured `80079d548d66a02401ca1238a27cd7ff792c6d93` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45272062060)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.80× |
| Stanford/FloatMM | 1.73× |
| Stanford/Puzzle | 0.93× |
| Stanford/Treesort | 1.01× |

The badge gives the geometric mean of the per-program CPU speedups.
