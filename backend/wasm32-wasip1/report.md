# WASI backend performance

Measured `b3e8ffd61d008c80042a09444d6d607c4b7d7f0c` on AMD EPYC 9V45 96-Core Processor. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44818861403)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.84× |
| Stanford/FloatMM | 1.81× |
| Stanford/Puzzle | 1.01× |
| Stanford/Treesort | 1.04× |

The badge gives the geometric mean of the per-program CPU speedups.
