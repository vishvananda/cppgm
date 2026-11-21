# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.548367 | 1.377520 | 1.670913 | 0.002771 | 0.003186 | 0.003033 |
| constrained_ops.test | RUN | 0.603481 | 1.457734 | 1.868969 | 0.002906 | 0.003312 | 0.002860 |
| cpp-next_bug.test | RUN | 0.618404 | 1.582162 | 1.925022 | 0.002608 | 0.003021 | 0.003083 |
| deep_copy.test | RUN | 0.531374 | 1.383743 | 1.674143 | 0.002961 | 0.002948 | 0.003058 |
| display_expr.test | RUN | 0.636536 | 1.742708 | 1.986284 | 0.002746 | 0.002762 | 0.003130 |
| deduce_domain.test | RUN | 0.499139 | 1.167637 | 1.533942 | 0.003099 | 0.002777 | 0.002723 |
| env_var.test | RUN | 0.684406 | 2.928563 | 2.343258 | 0.003410 | 0.003683 | 0.003725 |
| examples.test | RUN | 0.645326 | 1.928206 | 2.251052 | 0.002851 | 0.002749 | 0.002846 |
| external_transforms.test | RUN | 0.634375 | 1.602599 | 2.030999 | 0.002781 | 0.002909 | 0.003086 |
| lambda.test | RUN | 0.615495 | 1.667115 | 2.048927 | 0.002885 | 0.002785 | 0.002950 |
| make_expr.test | RUN | 0.625664 | 2.664017 | 2.153522 | 0.003658 | 0.004071 | 0.003985 |
| matches.test | RUN | 0.561729 | 1.370028 | 1.772039 | 0.002841 | 0.003089 | 0.002946 |
| flatten.test | RUN | 1.039978 | 3.961452 | 4.299695 | 0.003210 | 0.003403 | 0.003072 |
| switch.test | RUN | 0.542133 | 1.347364 | 1.668508 | 0.003281 | 0.003163 | 0.003065 |
| toy_spirit.test | RUN | 0.615382 | 1.758679 | 2.150056 | 0.003230 | 0.003193 | 0.003104 |
| toy_spirit2.test | RUN | 0.662363 | 1.795488 | 2.225405 | 0.002737 | 0.003341 | 0.002850 |
| make.test | RUN | 0.530311 | 1.709297 | 1.666126 | 0.003471 | 0.003264 | 0.003342 |
| mem_ptr.test | RUN | 0.696948 | 2.865630 | 2.456612 | 0.003610 | 0.003680 | 0.003473 |
| mpl.test | RUN | 0.625514 | 1.460935 | 1.779247 | 0.002637 | 0.003287 | 0.003119 |
| noinvoke.test | RUN | 0.538260 | 1.177106 | 1.524287 | 0.003001 | 0.003129 | 0.002506 |
| pack_expansion.test | RUN | 0.636422 | 1.716985 | 1.922481 | 0.003178 | 0.002418 | 0.002287 |
| protect.test | RUN | 0.375583 | 1.225878 | 1.064732 | 0.002343 | 0.002286 | 0.002256 |
| bug2407.test | COMPILE | 0.466586 | 0.900115 | 1.012679 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 0.985×, 1.025× | 1.002× |
| clang | 0.979× | 0.967×, 0.991× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001728s | 0.001652s | 0.001709s | byte equality observed |
| constrained_ops.test | 10 | 0.001712s | 0.001650s | 0.001701s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001688s | 0.001620s | 0.001749s | byte equality observed |
| deduce_domain.test | 10 | 0.001711s | 0.001695s | 0.001713s | byte equality observed |
| deep_copy.test | 10 | 0.001687s | 0.001697s | 0.001717s | byte equality observed |
| display_expr.test | 10 | 0.001731s | 0.001670s | 0.001654s | byte equality observed |
| env_var.test | 10 | 0.001996s | 0.001936s | 0.001982s | byte equality observed |
| examples.test | 10 | 0.001730s | 0.001689s | 0.001749s | byte equality observed |
| external_transforms.test | 10 | 0.001790s | 0.001672s | 0.001691s | byte equality observed |
| flatten.test | 10 | 0.001757s | 0.001784s | 0.001717s | byte equality observed |
| lambda.test | 10 | 0.001721s | 0.001698s | 0.001704s | byte equality observed |
| make.test | 10 | 0.001872s | 0.001849s | 0.001874s | byte equality observed |
| make_expr.test | 8 | 0.002096s | 0.002051s | 0.002103s | byte equality observed |
| matches.test | 9 | 0.001691s | 0.001685s | 0.001681s | byte equality observed |
| mem_ptr.test | 10 | 0.002007s | 0.001963s | 0.001975s | byte equality observed |
| mpl.test | 10 | 0.001680s | 0.001708s | 0.001676s | byte equality observed |
| noinvoke.test | 10 | 0.001729s | 0.001615s | 0.001684s | byte equality observed |
| pack_expansion.test | 10 | 0.001793s | 0.001729s | 0.001775s | byte equality observed |
| protect.test | 10 | 0.001765s | 0.001717s | 0.001783s | byte equality observed |
| switch.test | 10 | 0.001702s | 0.001623s | 0.001683s | byte equality observed |
| toy_spirit.test | 10 | 0.001714s | 0.001643s | 0.001697s | byte equality observed |
| toy_spirit2.test | 10 | 0.001737s | 0.001645s | 0.001698s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
