# x86-64 backend performance

Measured `49adadaefcc6510c6c725be8d3c780b397e68bc5` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45739944580)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.98× |
| Stanford/FloatMM | 0.83× |
| Stanford/Puzzle | 0.99× |
| Stanford/Treesort | 1.05× |

The badge gives the geometric mean of the per-program CPU speedups.
