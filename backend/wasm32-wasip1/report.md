# WASI backend performance

Measured `cebc59908fc34cebd8df5bff4a28b5fb14820320` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/46092715613)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.84× |
| Stanford/FloatMM | 1.70× |
| Stanford/Puzzle | 0.87× |
| Stanford/Treesort | 0.96× |

The badge gives the geometric mean of the per-program CPU speedups.
