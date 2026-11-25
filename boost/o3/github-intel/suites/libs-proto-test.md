# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.448635 | 1.190933 | 1.317291 | 0.001882 | 0.001872 | 0.001972 |
| constrained_ops.test | RUN | 0.512629 | 1.280310 | 1.469250 | 0.002092 | 0.002214 | 0.001889 |
| cpp-next_bug.test | RUN | 0.519365 | 1.381592 | 1.534944 | 0.001976 | 0.002014 | 0.002108 |
| deep_copy.test | RUN | 0.447315 | 1.216537 | 1.373210 | 0.001993 | 0.001960 | 0.001912 |
| display_expr.test | RUN | 0.528800 | 1.507279 | 1.647645 | 0.002212 | 0.002242 | 0.001984 |
| deduce_domain.test | RUN | 0.427094 | 1.063621 | 1.172524 | 0.002266 | 0.002189 | 0.001780 |
| env_var.test | RUN | 0.572481 | 2.642488 | 1.946565 | 0.002298 | 0.002472 | 0.002226 |
| examples.test | RUN | 0.558228 | 1.703981 | 1.820184 | 0.002158 | 0.002057 | 0.001947 |
| external_transforms.test | RUN | 0.539374 | 1.448451 | 1.615618 | 0.001943 | 0.002066 | 0.002213 |
| lambda.test | RUN | 0.525011 | 1.486889 | 1.651512 | 0.002097 | 0.002161 | 0.001908 |
| make_expr.test | RUN | 0.529174 | 2.433129 | 1.741716 | 0.002428 | 0.002617 | 0.002295 |
| matches.test | RUN | 0.463477 | 1.206627 | 1.413867 | 0.002124 | 0.002030 | 0.002126 |
| flatten.test | RUN | 0.915141 | 3.601399 | 3.518277 | 0.002174 | 0.002298 | 0.002160 |
| switch.test | RUN | 0.458075 | 1.209431 | 1.321357 | 0.002527 | 0.002216 | 0.002024 |
| toy_spirit.test | RUN | 0.513886 | 1.535022 | 1.726370 | 0.001901 | 0.002326 | 0.002124 |
| toy_spirit2.test | RUN | 0.563906 | 1.631335 | 1.828224 | 0.002172 | 0.002063 | 0.001898 |
| make.test | RUN | 0.440399 | 1.555499 | 1.320668 | 0.002534 | 0.002476 | 0.002430 |
| mem_ptr.test | RUN | 0.581413 | 2.575926 | 2.025842 | 0.002581 | 0.002421 | 0.002247 |
| mpl.test | RUN | 0.513158 | 1.264933 | 1.482833 | 0.002176 | 0.002043 | 0.001955 |
| noinvoke.test | RUN | 0.443446 | 1.069036 | 1.211251 | 0.002143 | 0.002190 | 0.001981 |
| pack_expansion.test | RUN | 0.530436 | 1.551347 | 1.616150 | 0.001598 | 0.001596 | 0.002000 |
| protect.test | RUN | 0.347081 | 1.065813 | 0.996877 | 0.001646 | 0.001630 | 0.001462 |
| bug2407.test | COMPILE | 0.382558 | 0.788008 | 0.753324 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.995×, 0.994× | 0.995× |
| clang | 0.976× | 0.976×, 0.975× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001299s | 0.001270s | 0.001254s | byte equality observed |
| constrained_ops.test | 10 | 0.001269s | 0.001258s | 0.001218s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001256s | 0.001242s | 0.001224s | byte equality observed |
| deduce_domain.test | 10 | 0.001264s | 0.001250s | 0.001222s | byte equality observed |
| deep_copy.test | 10 | 0.001255s | 0.001265s | 0.001227s | byte equality observed |
| display_expr.test | 10 | 0.001272s | 0.001244s | 0.001212s | byte equality observed |
| env_var.test | 10 | 0.001359s | 0.001370s | 0.001344s | byte equality observed |
| examples.test | 10 | 0.001294s | 0.001296s | 0.001269s | byte equality observed |
| external_transforms.test | 10 | 0.001265s | 0.001266s | 0.001246s | byte equality observed |
| flatten.test | 10 | 0.001287s | 0.001287s | 0.001268s | byte equality observed |
| lambda.test | 10 | 0.001236s | 0.001254s | 0.001243s | byte equality observed |
| make.test | 10 | 0.001311s | 0.001317s | 0.001276s | byte equality observed |
| make_expr.test | 10 | 0.001397s | 0.001379s | 0.001363s | byte equality observed |
| matches.test | 10 | 0.001275s | 0.001258s | 0.001230s | byte equality observed |
| mem_ptr.test | 10 | 0.001359s | 0.001334s | 0.001367s | byte equality observed |
| mpl.test | 10 | 0.001267s | 0.001227s | 0.001216s | byte equality observed |
| noinvoke.test | 10 | 0.001241s | 0.001239s | 0.001240s | byte equality observed |
| pack_expansion.test | 10 | 0.001287s | 0.001264s | 0.001232s | byte equality observed |
| protect.test | 10 | 0.001261s | 0.001271s | 0.001244s | byte equality observed |
| switch.test | 10 | 0.001262s | 0.001234s | 0.001216s | byte equality observed |
| toy_spirit.test | 10 | 0.001236s | 0.001231s | 0.001228s | byte equality observed |
| toy_spirit2.test | 10 | 0.001236s | 0.001261s | 0.001225s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
