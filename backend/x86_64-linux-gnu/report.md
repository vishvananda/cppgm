# x86-64 backend performance

Measured `61c93cf80bbefb800c9a2a397bacf09b138c2ed3` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45754596224)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.98× |
| Stanford/FloatMM | 0.85× |
| Stanford/Puzzle | 0.98× |
| Stanford/Treesort | 1.07× |

The badge gives the geometric mean of the per-program CPU speedups.
