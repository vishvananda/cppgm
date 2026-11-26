# x86-64 backend performance

Measured `4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45790989032)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.04× |
| Stanford/Bubblesort | 0.88× |
| Stanford/FloatMM | 0.89× |
| Stanford/Puzzle | 0.92× |
| Stanford/Treesort | 0.96× |

The badge gives the geometric mean of the per-program CPU speedups.
