# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.443256 | 1.174255 | 1.306695 | 0.002302 | 0.002045 | 0.001974 |
| constrained_ops.test | RUN | 0.503721 | 1.251963 | 1.462371 | 0.002258 | 0.002112 | 0.002051 |
| cpp-next_bug.test | RUN | 0.514965 | 1.366200 | 1.518152 | 0.001763 | 0.002066 | 0.002099 |
| deep_copy.test | RUN | 0.432583 | 1.175907 | 1.375680 | 0.001896 | 0.001968 | 0.001657 |
| display_expr.test | RUN | 0.524124 | 1.479272 | 1.598547 | 0.002092 | 0.001562 | 0.002006 |
| deduce_domain.test | RUN | 0.406875 | 1.052012 | 1.186186 | 0.002176 | 0.002040 | 0.002036 |
| env_var.test | RUN | 0.562615 | 2.578224 | 1.971021 | 0.002159 | 0.002440 | 0.002287 |
| examples.test | RUN | 0.531291 | 1.686987 | 1.834835 | 0.002055 | 0.002054 | 0.002071 |
| external_transforms.test | RUN | 0.528490 | 1.419837 | 1.620681 | 0.002211 | 0.001895 | 0.002144 |
| lambda.test | RUN | 0.511634 | 1.439382 | 1.607673 | 0.001854 | 0.002074 | 0.002075 |
| make_expr.test | RUN | 0.516281 | 2.434366 | 1.768184 | 0.002207 | 0.002563 | 0.002649 |
| matches.test | RUN | 0.449060 | 1.171120 | 1.415145 | 0.001811 | 0.002320 | 0.002056 |
| flatten.test | RUN | 0.864969 | 3.538209 | 3.486678 | 0.002152 | 0.002233 | 0.001901 |
| switch.test | RUN | 0.434320 | 1.177524 | 1.348471 | 0.001955 | 0.001971 | 0.001951 |
| toy_spirit.test | RUN | 0.501233 | 1.518493 | 1.731244 | 0.002020 | 0.002078 | 0.002174 |
| toy_spirit2.test | RUN | 0.529153 | 1.602982 | 1.852188 | 0.002039 | 0.002232 | 0.001963 |
| make.test | RUN | 0.431533 | 1.507007 | 1.329461 | 0.002243 | 0.002215 | 0.002212 |
| mem_ptr.test | RUN | 0.566267 | 2.550968 | 1.969038 | 0.002139 | 0.002471 | 0.002512 |
| mpl.test | RUN | 0.494281 | 1.252611 | 1.449775 | 0.001924 | 0.002214 | 0.002187 |
| noinvoke.test | RUN | 0.417939 | 1.043605 | 1.234521 | 0.001882 | 0.002209 | 0.001953 |
| pack_expansion.test | RUN | 0.520359 | 1.535812 | 1.598937 | 0.001576 | 0.002181 | 0.002165 |
| protect.test | RUN | 0.344202 | 1.029656 | 0.971780 | 0.001475 | 0.001489 | 0.001534 |
| bug2407.test | COMPILE | 0.344244 | 0.689014 | 0.821090 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.979×, 0.994× | 0.989× |
| clang | 0.976× | 0.967×, 0.985× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001252s | 0.001249s | 0.001225s | byte equality observed |
| constrained_ops.test | 10 | 0.001268s | 0.001222s | 0.001223s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001266s | 0.001237s | 0.001200s | byte equality observed |
| deduce_domain.test | 10 | 0.001259s | 0.001224s | 0.001207s | byte equality observed |
| deep_copy.test | 10 | 0.001238s | 0.001243s | 0.001185s | byte equality observed |
| display_expr.test | 10 | 0.001254s | 0.001220s | 0.001197s | byte equality observed |
| env_var.test | 10 | 0.001350s | 0.001356s | 0.001343s | byte equality observed |
| examples.test | 10 | 0.001286s | 0.001293s | 0.001280s | byte equality observed |
| external_transforms.test | 10 | 0.001281s | 0.001238s | 0.001242s | byte equality observed |
| flatten.test | 10 | 0.001317s | 0.001281s | 0.001280s | byte equality observed |
| lambda.test | 10 | 0.001259s | 0.001216s | 0.001244s | byte equality observed |
| make.test | 10 | 0.001296s | 0.001275s | 0.001250s | byte equality observed |
| make_expr.test | 10 | 0.001387s | 0.001415s | 0.001351s | byte equality observed |
| matches.test | 10 | 0.001264s | 0.001223s | 0.001208s | byte equality observed |
| mem_ptr.test | 10 | 0.001364s | 0.001330s | 0.001332s | byte equality observed |
| mpl.test | 10 | 0.001263s | 0.001218s | 0.001201s | byte equality observed |
| noinvoke.test | 10 | 0.001222s | 0.001234s | 0.001241s | byte equality observed |
| pack_expansion.test | 10 | 0.001261s | 0.001227s | 0.001241s | byte equality observed |
| protect.test | 10 | 0.001247s | 0.001231s | 0.001222s | byte equality observed |
| switch.test | 10 | 0.001238s | 0.001231s | 0.001228s | byte equality observed |
| toy_spirit.test | 10 | 0.001219s | 0.001242s | 0.001213s | byte equality observed |
| toy_spirit2.test | 10 | 0.001235s | 0.001265s | 0.001236s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
