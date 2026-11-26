# x86-64 backend performance

Measured `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45850603565)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.98× |
| Stanford/FloatMM | 0.84× |
| Stanford/Puzzle | 1.00× |
| Stanford/Treesort | 1.05× |

The badge gives the geometric mean of the per-program CPU speedups.
