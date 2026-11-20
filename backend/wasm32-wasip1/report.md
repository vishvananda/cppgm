# WASI backend performance

Measured `f4ee6ed21703be4d5350c45f5d8ed33dc706c992` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44667760294)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.83× |
| Stanford/FloatMM | 1.70× |
| Stanford/Puzzle | 0.88× |
| Stanford/Treesort | 1.03× |

The badge gives the geometric mean of the per-program CPU speedups.
