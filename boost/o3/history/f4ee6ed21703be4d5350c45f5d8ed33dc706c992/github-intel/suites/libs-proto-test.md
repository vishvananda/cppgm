# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.604867 | 1.649359 | 1.810339 | 0.003075 | 0.003018 | 0.002739 |
| constrained_ops.test | RUN | 0.684920 | 1.740069 | 2.030843 | 0.002430 | 0.003085 | 0.002629 |
| cpp-next_bug.test | RUN | 0.706363 | 1.928394 | 2.103534 | 0.002693 | 0.002815 | 0.002612 |
| deep_copy.test | RUN | 0.608358 | 1.680716 | 1.848975 | 0.002531 | 0.002720 | 0.002859 |
| display_expr.test | RUN | 0.725265 | 2.125238 | 2.216936 | 0.002828 | 0.002816 | 0.002626 |
| deduce_domain.test | RUN | 0.574260 | 1.498592 | 1.624042 | 0.002760 | 0.002892 | 0.002836 |
| env_var.test | RUN | 0.770973 | 3.610987 | 2.663147 | 0.003076 | 0.003178 | 0.003103 |
| examples.test | RUN | 0.744972 | 2.323204 | 2.495749 | 0.002912 | 0.002792 | 0.002609 |
| external_transforms.test | RUN | 0.739588 | 2.014325 | 2.227215 | 0.003118 | 0.002797 | 0.002628 |
| lambda.test | RUN | 0.707224 | 2.042610 | 2.256726 | 0.002740 | 0.002769 | 0.002529 |
| make_expr.test | RUN | 0.713791 | 3.337155 | 2.383737 | 0.003253 | 0.003546 | 0.003211 |
| matches.test | RUN | 0.652651 | 1.660576 | 1.934403 | 0.002669 | 0.002798 | 0.002707 |
| flatten.test | RUN | 1.189747 | 4.739282 | 4.734307 | 0.002974 | 0.002920 | 0.002816 |
| switch.test | RUN | 0.617004 | 1.670020 | 1.828097 | 0.002684 | 0.002812 | 0.002614 |
| toy_spirit.test | RUN | 0.698582 | 2.127088 | 2.339575 | 0.002734 | 0.002902 | 0.002784 |
| toy_spirit2.test | RUN | 0.763684 | 2.235959 | 2.490482 | 0.002778 | 0.002858 | 0.002772 |
| make.test | RUN | 0.609754 | 2.159349 | 1.815607 | 0.003083 | 0.003023 | 0.003203 |
| mem_ptr.test | RUN | 0.784541 | 3.431108 | 2.711252 | 0.003179 | 0.003351 | 0.003506 |
| mpl.test | RUN | 0.691922 | 1.787852 | 2.005277 | 0.002566 | 0.003004 | 0.002731 |
| noinvoke.test | RUN | 0.592479 | 1.450135 | 1.682191 | 0.002847 | 0.002990 | 0.002751 |
| pack_expansion.test | RUN | 0.643938 | 2.178330 | 2.142158 | 0.002170 | 0.003104 | 0.001998 |
| protect.test | RUN | 0.562172 | 1.442922 | 1.292968 | 0.002091 | 0.002036 | 0.002051 |
| bug2407.test | COMPILE | 0.533190 | 1.045733 | 1.163028 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.985×, 0.986× | 0.998× |
| clang | 0.973× | 0.968×, 0.978× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001707s | 0.001698s | 0.001625s | byte equality observed |
| constrained_ops.test | 10 | 0.001663s | 0.001664s | 0.001678s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001706s | 0.001615s | 0.001687s | byte equality observed |
| deduce_domain.test | 10 | 0.001639s | 0.001596s | 0.001614s | byte equality observed |
| deep_copy.test | 10 | 0.001675s | 0.001625s | 0.001640s | byte equality observed |
| display_expr.test | 10 | 0.001685s | 0.001624s | 0.001642s | byte equality observed |
| env_var.test | 10 | 0.001882s | 0.001851s | 0.001831s | byte equality observed |
| examples.test | 10 | 0.001724s | 0.001681s | 0.001672s | byte equality observed |
| external_transforms.test | 10 | 0.001692s | 0.001643s | 0.001663s | byte equality observed |
| flatten.test | 10 | 0.001711s | 0.001719s | 0.001675s | byte equality observed |
| lambda.test | 10 | 0.001672s | 0.001632s | 0.001621s | byte equality observed |
| make.test | 9 | 0.001799s | 0.001742s | 0.001743s | byte equality observed |
| make_expr.test | 10 | 0.001930s | 0.001887s | 0.001861s | byte equality observed |
| matches.test | 10 | 0.001663s | 0.001598s | 0.001604s | byte equality observed |
| mem_ptr.test | 10 | 0.001869s | 0.001841s | 0.001772s | byte equality observed |
| mpl.test | 10 | 0.001662s | 0.001628s | 0.001596s | byte equality observed |
| noinvoke.test | 10 | 0.001640s | 0.001642s | 0.001622s | byte equality observed |
| pack_expansion.test | 9 | 0.001726s | 0.001706s | 0.001663s | byte equality observed |
| protect.test | 10 | 0.001697s | 0.001689s | 0.001689s | byte equality observed |
| switch.test | 10 | 0.001639s | 0.001707s | 0.001620s | byte equality observed |
| toy_spirit.test | 9 | 0.001670s | 0.001634s | 0.001602s | byte equality observed |
| toy_spirit2.test | 9 | 0.001653s | 0.001643s | 0.001628s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
