# x86-64 backend performance

Measured `0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6` on AMD EPYC 9V74 80-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44801983152)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.11× |
| Stanford/Bubblesort | 0.87× |
| Stanford/FloatMM | 0.90× |
| Stanford/Puzzle | 0.97× |
| Stanford/Treesort | 0.96× |

The badge gives the geometric mean of the per-program CPU speedups.
