# x86-64 backend performance

Measured `cc79604cdc196d46abdebb888158e8b90d3cac52` on AMD EPYC 7763 64-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45241427099)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.03× |
| Stanford/Bubblesort | 0.92× |
| Stanford/FloatMM | 0.93× |
| Stanford/Puzzle | 1.13× |
| Stanford/Treesort | 1.01× |

The badge gives the geometric mean of the per-program CPU speedups.
