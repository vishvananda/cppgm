# x86-64 backend performance

Measured `f14c300df24c805416e28f06d41b201a035b60c7` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44743598642)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.01× |
| Stanford/Bubblesort | 0.98× |
| Stanford/FloatMM | 0.84× |
| Stanford/Puzzle | 0.88× |
| Stanford/Treesort | 1.06× |

The badge gives the geometric mean of the per-program CPU speedups.
