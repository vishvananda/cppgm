# WASI backend performance

Measured `94aaecc52ac26996bd3d654522334e3c28c68457` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44656576225)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.88× |
| Stanford/FloatMM | 1.66× |
| Stanford/Puzzle | 0.86× |
| Stanford/Treesort | 0.97× |

The badge gives the geometric mean of the per-program CPU speedups.
