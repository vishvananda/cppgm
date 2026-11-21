# x86-64 backend performance

Measured `992888a62d0d19fee6e2973c68195aed2b02a9b7` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44813597235)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.01× |
| Stanford/Bubblesort | 0.99× |
| Stanford/FloatMM | 0.86× |
| Stanford/Puzzle | 0.88× |
| Stanford/Treesort | 1.06× |

The badge gives the geometric mean of the per-program CPU speedups.
