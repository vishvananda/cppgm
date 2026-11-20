# WASI backend performance

Measured `6d363dd28d9982fdbb0539bf97dab4f17cfbe369` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44686728157)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.93× |
| Stanford/FloatMM | 1.78× |
| Stanford/Puzzle | 0.89× |
| Stanford/Treesort | 1.06× |

The badge gives the geometric mean of the per-program CPU speedups.
