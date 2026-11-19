# WASI backend performance

Measured `56c86f755ec2b56e235b3f5e5ff76e6d147c3f93` on Intel(R) Xeon(R) 6975P-C. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/44612055398)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.86× |
| Stanford/FloatMM | 1.73× |
| Stanford/Puzzle | 0.89× |
| Stanford/Treesort | 1.02× |

The badge gives the geometric mean of the per-program CPU speedups.
