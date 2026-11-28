# x86-64 backend performance

Measured `cebc59908fc34cebd8df5bff4a28b5fb14820320` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/46092715613)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.02× |
| Stanford/Bubblesort | 0.87× |
| Stanford/FloatMM | 0.88× |
| Stanford/Puzzle | 0.90× |
| Stanford/Treesort | 0.97× |

The badge gives the geometric mean of the per-program CPU speedups.
