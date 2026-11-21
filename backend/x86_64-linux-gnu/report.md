# x86-64 backend performance

Measured `44d3c4a29971caff2cc064889ec96259f34e7504` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44815881069)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.98× |
| Stanford/FloatMM | 0.84× |
| Stanford/Puzzle | 0.88× |
| Stanford/Treesort | 1.05× |

The badge gives the geometric mean of the per-program CPU speedups.
