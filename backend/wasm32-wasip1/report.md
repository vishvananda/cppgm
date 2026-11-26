# WASI backend performance

Measured `dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6` on Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz. [CI run and raw observations](https://github.com/vishvananda/cppgm/actions/runs/45710374989)

### Portable public benchmarks on wasm32-wasip1

| Program | Runtime speedup vs Clang O3 |
| --- | ---: |
| Prolangs-C++/primes | 1.00× |
| Stanford/Bubblesort | 0.89× |
| Stanford/FloatMM | 2.60× |
| Stanford/Puzzle | 0.99× |
| Stanford/Treesort | 1.02× |

The badge gives the geometric mean of the per-program CPU speedups.
