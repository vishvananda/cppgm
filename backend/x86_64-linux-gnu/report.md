# x86-64 backend performance

Measured `94aaecc52ac26996bd3d654522334e3c28c68457` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44656576225)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 1.01× |
| Stanford/FloatMM | 0.78× |
| Stanford/Puzzle | 0.88× |
| Stanford/Treesort | 1.05× |

The badge gives the geometric mean of the per-program CPU speedups.
