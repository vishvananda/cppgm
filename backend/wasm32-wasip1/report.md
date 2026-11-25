# WASI backend performance

Measured `7584274b4d275fb41f7c5d064e751e5918e8e421` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45617981312)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.80× |
| Stanford/FloatMM | 1.66× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 1.08× |

The badge gives the geometric mean of the per-program CPU speedups.
