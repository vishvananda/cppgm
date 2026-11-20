# x86-64 backend performance

Measured `56c86f755ec2b56e235b3f5e5ff76e6d147c3f93` on INTEL(R) XEON(R) PLATINUM 8573C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44612055398)

### Portable public benchmarks on x86_64-linux-gnu

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 1.03× |
| Stanford/FloatMM | 0.72× |
| Stanford/Puzzle | 0.92× |
| Stanford/Treesort | 1.04× |

The badge gives the geometric mean of the per-program CPU speedups.
