# WASI backend performance

Measured `897807fd4b8c8a50f234a4480f91abe56a7760a8` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44780058957)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.87× |
| Stanford/FloatMM | 1.72× |
| Stanford/Puzzle | 0.92× |
| Stanford/Treesort | 1.03× |

The badge gives the geometric mean of the per-program CPU speedups.
