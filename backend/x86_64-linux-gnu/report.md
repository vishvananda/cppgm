# x86-64 backend performance

Measured `0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a` on INTEL(R) XEON(R) PLATINUM 8573C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44774088589)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 1.02× |
| Stanford/FloatMM | 0.77× |
| Stanford/Puzzle | 0.91× |
| Stanford/Treesort | 1.05× |

The badge gives the geometric mean of the per-program CPU speedups.
