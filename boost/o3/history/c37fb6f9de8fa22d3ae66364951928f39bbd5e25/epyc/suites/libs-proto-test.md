# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.734474 | 1.917971 | 2.554207 | 0.003156 | 0.003790 | 0.003433 |
| constrained_ops.test | RUN | 0.833438 | 1.981359 | 2.855511 | 0.003545 | 0.003880 | 0.003832 |
| cpp-next_bug.test | RUN | 0.854520 | 2.205209 | 2.946913 | 0.003302 | 0.003846 | 0.003645 |
| deep_copy.test | RUN | 0.716703 | 1.859549 | 2.496963 | 0.003282 | 0.003464 | 0.003818 |
| display_expr.test | RUN | 0.871716 | 2.346683 | 3.103301 | 0.003688 | 0.003480 | 0.003911 |
| deduce_domain.test | RUN | 0.704236 | 1.660488 | 2.358239 | 0.003196 | 0.003298 | 0.003867 |
| env_var.test | RUN | 0.930833 | 4.002730 | 3.509343 | 0.004244 | 0.004226 | 0.004772 |
| examples.test | RUN | 0.888767 | 2.524609 | 3.477103 | 0.003751 | 0.003295 | 0.003542 |
| external_transforms.test | RUN | 0.873030 | 2.249061 | 3.130371 | 0.003669 | 0.003188 | 0.003821 |
| lambda.test | RUN | 0.868374 | 2.189327 | 3.198475 | 0.003106 | 0.003419 | 0.003663 |
| make_expr.test | RUN | 0.857396 | 3.700805 | 3.288324 | 0.004714 | 0.004701 | 0.005219 |
| matches.test | RUN | 0.755233 | 1.853654 | 2.754594 | 0.003565 | 0.003565 | 0.003780 |
| flatten.test | RUN | 1.488070 | 5.180388 | 6.343627 | 0.004052 | 0.003670 | 0.003693 |
| switch.test | RUN | 0.759400 | 1.851236 | 2.519180 | 0.003837 | 0.003486 | 0.003912 |
| toy_spirit.test | RUN | 0.834323 | 2.442040 | 3.242530 | 0.003677 | 0.003778 | 0.003815 |
| toy_spirit2.test | RUN | 0.948591 | 2.484548 | 3.386814 | 0.003639 | 0.003752 | 0.003653 |
| make.test | RUN | 0.717909 | 2.392388 | 2.490528 | 0.004085 | 0.004463 | 0.004137 |
| mem_ptr.test | RUN | 0.938308 | 3.773410 | 3.623907 | 0.004156 | 0.004784 | 0.004717 |
| mpl.test | RUN | 0.842941 | 2.034147 | 2.785205 | 0.003300 | 0.003569 | 0.003554 |
| noinvoke.test | RUN | 0.710364 | 1.634119 | 2.302105 | 0.003570 | 0.003786 | 0.003585 |
| pack_expansion.test | RUN | 0.832019 | 2.456655 | 2.834803 | 0.002824 | 0.004077 | 0.002557 |
| protect.test | RUN | 0.626292 | 1.644329 | 1.686360 | 0.002696 | 0.002783 | 0.002666 |
| bug2407.test | COMPILE | 0.622895 | 1.203944 | 1.372989 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.975×, 0.992× | 0.993× |
| clang | 0.975× | 0.979×, 0.970× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.002049s | 0.002033s | 0.002063s | byte equality observed |
| constrained_ops.test | 9 | 0.002064s | 0.002004s | 0.001947s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002045s | 0.002021s | 0.001960s | byte equality observed |
| deduce_domain.test | 9 | 0.002001s | 0.001970s | 0.001963s | byte equality observed |
| deep_copy.test | 10 | 0.002028s | 0.002009s | 0.001973s | byte equality observed |
| display_expr.test | 9 | 0.001969s | 0.001954s | 0.002003s | byte equality observed |
| env_var.test | 8 | 0.002389s | 0.002352s | 0.002319s | byte equality observed |
| examples.test | 9 | 0.002023s | 0.001950s | 0.001990s | byte equality observed |
| external_transforms.test | 9 | 0.002127s | 0.001945s | 0.001997s | byte equality observed |
| flatten.test | 8 | 0.002150s | 0.002038s | 0.002057s | byte equality observed |
| lambda.test | 9 | 0.002007s | 0.002036s | 0.001943s | byte equality observed |
| make.test | 8 | 0.002217s | 0.002172s | 0.002184s | byte equality observed |
| make_expr.test | 8 | 0.002443s | 0.002455s | 0.002446s | byte equality observed |
| matches.test | 9 | 0.002049s | 0.001935s | 0.001931s | byte equality observed |
| mem_ptr.test | 7 | 0.002384s | 0.002316s | 0.002350s | byte equality observed |
| mpl.test | 9 | 0.001988s | 0.002059s | 0.001925s | byte equality observed |
| noinvoke.test | 10 | 0.001989s | 0.001982s | 0.001975s | byte equality observed |
| pack_expansion.test | 9 | 0.002109s | 0.002094s | 0.002042s | byte equality observed |
| protect.test | 9 | 0.002071s | 0.002002s | 0.002086s | byte equality observed |
| switch.test | 9 | 0.002021s | 0.001971s | 0.002009s | byte equality observed |
| toy_spirit.test | 10 | 0.002010s | 0.001996s | 0.002030s | byte equality observed |
| toy_spirit2.test | 9 | 0.002071s | 0.002024s | 0.002002s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
