# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.446393 | 1.185365 | 1.288583 | 0.002268 | 0.002301 | 0.001900 |
| constrained_ops.test | RUN | 0.501396 | 1.280108 | 1.473671 | 0.001898 | 0.001952 | 0.001742 |
| cpp-next_bug.test | RUN | 0.508032 | 1.373497 | 1.523645 | 0.001875 | 0.002291 | 0.001920 |
| deep_copy.test | RUN | 0.425447 | 1.208775 | 1.374996 | 0.001905 | 0.002039 | 0.001768 |
| display_expr.test | RUN | 0.520164 | 1.529886 | 1.614360 | 0.002077 | 0.002007 | 0.001921 |
| deduce_domain.test | RUN | 0.408481 | 1.048317 | 1.206723 | 0.002305 | 0.002275 | 0.001833 |
| env_var.test | RUN | 0.563378 | 2.640364 | 1.978456 | 0.002062 | 0.002447 | 0.002353 |
| examples.test | RUN | 0.538121 | 1.699170 | 1.767652 | 0.002266 | 0.001918 | 0.001908 |
| external_transforms.test | RUN | 0.536222 | 1.420003 | 1.609793 | 0.002284 | 0.002219 | 0.001949 |
| lambda.test | RUN | 0.514403 | 1.462072 | 1.642170 | 0.002064 | 0.002096 | 0.001851 |
| make_expr.test | RUN | 0.522338 | 2.409080 | 1.754361 | 0.002371 | 0.002498 | 0.002296 |
| matches.test | RUN | 0.460495 | 1.187831 | 1.388687 | 0.001413 | 0.002270 | 0.001978 |
| flatten.test | RUN | 0.898687 | 3.539647 | 3.512996 | 0.002034 | 0.002258 | 0.001945 |
| switch.test | RUN | 0.447246 | 1.185866 | 1.308861 | 0.002257 | 0.002240 | 0.001850 |
| toy_spirit.test | RUN | 0.512402 | 1.521169 | 1.728168 | 0.001981 | 0.002327 | 0.001909 |
| toy_spirit2.test | RUN | 0.569026 | 1.595627 | 1.796907 | 0.002013 | 0.002189 | 0.001865 |
| make.test | RUN | 0.423948 | 1.537789 | 1.295897 | 0.002285 | 0.002264 | 0.002136 |
| mem_ptr.test | RUN | 0.592669 | 2.525902 | 2.008444 | 0.002369 | 0.002558 | 0.002058 |
| mpl.test | RUN | 0.496220 | 1.241846 | 1.432520 | 0.001637 | 0.002134 | 0.001877 |
| noinvoke.test | RUN | 0.425421 | 1.065371 | 1.208435 | 0.002081 | 0.002130 | 0.001947 |
| pack_expansion.test | RUN | 0.467748 | 1.559265 | 1.577222 | 0.001538 | 0.001599 | 0.001966 |
| protect.test | RUN | 0.402392 | 1.044565 | 0.998345 | 0.001623 | 0.001531 | 0.001387 |
| bug2407.test | COMPILE | 0.375018 | 0.751719 | 0.749275 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.997×, 0.995× | 1.002× |
| clang | 0.971× | 0.967×, 0.975× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001277s | 0.001288s | 0.001243s | byte equality observed |
| constrained_ops.test | 10 | 0.001264s | 0.001263s | 0.001192s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001243s | 0.001239s | 0.001219s | byte equality observed |
| deduce_domain.test | 10 | 0.001243s | 0.001259s | 0.001200s | byte equality observed |
| deep_copy.test | 10 | 0.001258s | 0.001242s | 0.001225s | byte equality observed |
| display_expr.test | 10 | 0.001252s | 0.001247s | 0.001188s | byte equality observed |
| env_var.test | 10 | 0.001340s | 0.001342s | 0.001331s | byte equality observed |
| examples.test | 10 | 0.001289s | 0.001278s | 0.001213s | byte equality observed |
| external_transforms.test | 10 | 0.001275s | 0.001265s | 0.001214s | byte equality observed |
| flatten.test | 10 | 0.001287s | 0.001284s | 0.001239s | byte equality observed |
| lambda.test | 10 | 0.001266s | 0.001245s | 0.001218s | byte equality observed |
| make.test | 10 | 0.001304s | 0.001288s | 0.001254s | byte equality observed |
| make_expr.test | 10 | 0.001390s | 0.001380s | 0.001364s | byte equality observed |
| matches.test | 10 | 0.001255s | 0.001279s | 0.001252s | byte equality observed |
| mem_ptr.test | 10 | 0.001333s | 0.001346s | 0.001332s | byte equality observed |
| mpl.test | 10 | 0.001259s | 0.001271s | 0.001244s | byte equality observed |
| noinvoke.test | 10 | 0.001222s | 0.001207s | 0.001189s | byte equality observed |
| pack_expansion.test | 10 | 0.001257s | 0.001276s | 0.001236s | byte equality observed |
| protect.test | 9 | 0.001257s | 0.001235s | 0.001210s | byte equality observed |
| switch.test | 10 | 0.001236s | 0.001227s | 0.001227s | byte equality observed |
| toy_spirit.test | 10 | 0.001228s | 0.001221s | 0.001214s | byte equality observed |
| toy_spirit2.test | 10 | 0.001245s | 0.001232s | 0.001227s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
