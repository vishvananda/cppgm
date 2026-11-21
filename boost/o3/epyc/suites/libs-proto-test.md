# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.576808 | 1.381253 | 1.765961 | 0.002876 | 0.003140 | 0.003317 |
| constrained_ops.test | RUN | 0.637464 | 1.451841 | 1.977809 | 0.003205 | 0.003099 | 0.003206 |
| cpp-next_bug.test | RUN | 0.657322 | 1.561753 | 2.049187 | 0.002930 | 0.002950 | 0.002842 |
| deep_copy.test | RUN | 0.549823 | 1.412491 | 1.740468 | 0.002992 | 0.002904 | 0.003002 |
| display_expr.test | RUN | 0.667400 | 1.716207 | 2.172359 | 0.003129 | 0.002688 | 0.003225 |
| deduce_domain.test | RUN | 0.541618 | 1.223846 | 1.503464 | 0.002917 | 0.002494 | 0.002388 |
| env_var.test | RUN | 0.712323 | 2.838516 | 2.575673 | 0.003660 | 0.002812 | 0.004020 |
| examples.test | RUN | 0.700042 | 1.908614 | 2.311887 | 0.003154 | 0.002948 | 0.003031 |
| external_transforms.test | RUN | 0.687593 | 1.677819 | 2.113813 | 0.002992 | 0.002758 | 0.003117 |
| lambda.test | RUN | 0.661597 | 1.674622 | 2.133279 | 0.003066 | 0.002884 | 0.002914 |
| make_expr.test | RUN | 0.657230 | 2.679725 | 2.279556 | 0.003871 | 0.003791 | 0.004362 |
| matches.test | RUN | 0.599631 | 1.369893 | 1.866153 | 0.003091 | 0.002958 | 0.003191 |
| flatten.test | RUN | 1.110758 | 3.925478 | 4.663099 | 0.003651 | 0.003370 | 0.003438 |
| switch.test | RUN | 0.570403 | 1.362875 | 1.761089 | 0.003220 | 0.002973 | 0.003375 |
| toy_spirit.test | RUN | 0.650526 | 1.779076 | 2.238153 | 0.002998 | 0.003410 | 0.003221 |
| toy_spirit2.test | RUN | 0.688320 | 1.810378 | 2.410873 | 0.003031 | 0.003209 | 0.003101 |
| make.test | RUN | 0.578381 | 1.740257 | 1.745908 | 0.003525 | 0.003411 | 0.003622 |
| mem_ptr.test | RUN | 0.710890 | 2.813137 | 2.645740 | 0.003658 | 0.003688 | 0.003597 |
| mpl.test | RUN | 0.649650 | 1.457652 | 1.879775 | 0.002947 | 0.003065 | 0.003230 |
| noinvoke.test | RUN | 0.553203 | 1.203662 | 1.605148 | 0.003305 | 0.002973 | 0.003411 |
| pack_expansion.test | RUN | 0.675006 | 1.772333 | 2.109042 | 0.002549 | 0.002412 | 0.003504 |
| protect.test | RUN | 0.518322 | 1.320297 | 1.332914 | 0.002518 | 0.002270 | 0.002438 |
| bug2407.test | COMPILE | 0.388162 | 0.888882 | 0.980552 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.948×† | 0.908×, 0.988× | 0.939× |
| clang | 1.059× | 1.056×, 1.061× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 8 | 0.001679s | 0.001689s | 0.001805s | byte equality observed |
| constrained_ops.test | 10 | 0.001685s | 0.001635s | 0.001794s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001695s | 0.001655s | 0.001838s | byte equality observed |
| deduce_domain.test | 10 | 0.001665s | 0.001619s | 0.001837s | byte equality observed |
| deep_copy.test | 10 | 0.001673s | 0.001613s | 0.001787s | byte equality observed |
| display_expr.test | 10 | 0.001675s | 0.001631s | 0.001783s | byte equality observed |
| env_var.test | 8 | 0.001973s | 0.001923s | 0.002100s | byte equality observed |
| examples.test | 10 | 0.001701s | 0.001687s | 0.001802s | byte equality observed |
| external_transforms.test | 10 | 0.001696s | 0.001677s | 0.001810s | byte equality observed |
| flatten.test | 10 | 0.001736s | 0.001705s | 0.001765s | byte equality observed |
| lambda.test | 9 | 0.001686s | 0.001653s | 0.001745s | byte equality observed |
| make.test | 10 | 0.001866s | 0.001814s | 0.001982s | byte equality observed |
| make_expr.test | 9 | 0.002071s | 0.002053s | 0.002198s | byte equality observed |
| matches.test | 10 | 0.001654s | 0.001672s | 0.001792s | byte equality observed |
| mem_ptr.test | 9 | 0.001968s | 0.001929s | 0.002087s | byte equality observed |
| mpl.test | 10 | 0.001689s | 0.001626s | 0.001782s | byte equality observed |
| noinvoke.test | 10 | 0.001682s | 0.001690s | 0.001729s | byte equality observed |
| pack_expansion.test | 10 | 0.001710s | 0.001706s | 0.001829s | byte equality observed |
| protect.test | 10 | 0.001774s | 0.001756s | 0.001837s | byte equality observed |
| switch.test | 10 | 0.001672s | 0.001608s | 0.001781s | byte equality observed |
| toy_spirit.test | 10 | 0.001655s | 0.001624s | 0.001767s | byte equality observed |
| toy_spirit2.test | 10 | 0.001678s | 0.001644s | 0.001812s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
