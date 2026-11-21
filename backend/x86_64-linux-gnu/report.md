# x86-64 backend performance

Measured `7bc2ee42070147be1668ff16a16841c6e02b47e3` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44927958294)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 1.00× |
| Stanford/FloatMM | 0.82× |
| Stanford/Puzzle | 0.99× |
| Stanford/Treesort | 1.06× |

The badge gives the geometric mean of the per-program CPU speedups.
