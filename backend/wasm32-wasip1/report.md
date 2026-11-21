# WASI backend performance

Measured `0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44801983152)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.77× |
| Stanford/FloatMM | 1.76× |
| Stanford/Puzzle | 0.89× |
| Stanford/Treesort | 1.01× |

The badge gives the geometric mean of the per-program CPU speedups.
