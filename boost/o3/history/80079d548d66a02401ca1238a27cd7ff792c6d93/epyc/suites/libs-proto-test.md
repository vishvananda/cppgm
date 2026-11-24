# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.535845 | 1.392728 | 1.693839 | 0.003155 | 0.003234 | 0.002959 |
| constrained_ops.test | RUN | 0.620532 | 1.443249 | 1.912959 | 0.002970 | 0.003081 | 0.002916 |
| cpp-next_bug.test | RUN | 0.644762 | 1.608456 | 1.952681 | 0.002850 | 0.003076 | 0.003072 |
| deep_copy.test | RUN | 0.546047 | 1.349743 | 1.650779 | 0.002836 | 0.003007 | 0.002836 |
| display_expr.test | RUN | 0.644578 | 1.704582 | 2.063051 | 0.002904 | 0.002860 | 0.003084 |
| deduce_domain.test | RUN | 0.514815 | 1.210036 | 1.533934 | 0.002988 | 0.003178 | 0.002639 |
| env_var.test | RUN | 0.702245 | 2.892060 | 2.313709 | 0.003652 | 0.003371 | 0.003603 |
| examples.test | RUN | 0.685864 | 1.892953 | 2.250391 | 0.002901 | 0.002914 | 0.002894 |
| external_transforms.test | RUN | 0.642907 | 1.658536 | 2.065679 | 0.003088 | 0.002629 | 0.002842 |
| lambda.test | RUN | 0.646463 | 1.660280 | 2.056866 | 0.003078 | 0.002989 | 0.003054 |
| make_expr.test | RUN | 0.663181 | 2.717185 | 2.160896 | 0.003501 | 0.004106 | 0.004027 |
| matches.test | RUN | 0.599118 | 1.385739 | 1.799672 | 0.003060 | 0.002931 | 0.002938 |
| flatten.test | RUN | 1.057161 | 3.960284 | 4.286262 | 0.003229 | 0.003415 | 0.003001 |
| switch.test | RUN | 0.554836 | 1.359996 | 1.667502 | 0.003109 | 0.003058 | 0.003029 |
| toy_spirit.test | RUN | 0.620097 | 1.767164 | 2.137155 | 0.002909 | 0.003194 | 0.003189 |
| toy_spirit2.test | RUN | 0.666931 | 1.787432 | 2.284468 | 0.002820 | 0.003016 | 0.002603 |
| make.test | RUN | 0.534250 | 1.714622 | 1.690036 | 0.003465 | 0.003155 | 0.003212 |
| mem_ptr.test | RUN | 0.709370 | 2.869547 | 2.425629 | 0.003574 | 0.003985 | 0.003810 |
| mpl.test | RUN | 0.611755 | 1.512232 | 1.801849 | 0.002822 | 0.003205 | 0.002957 |
| noinvoke.test | RUN | 0.523613 | 1.273354 | 1.516624 | 0.002856 | 0.003003 | 0.003039 |
| pack_expansion.test | RUN | 0.640517 | 1.804373 | 1.987441 | 0.002444 | 0.002460 | 0.003143 |
| protect.test | RUN | 0.451993 | 1.269805 | 1.129595 | 0.002314 | 0.002284 | 0.002376 |
| bug2407.test | COMPILE | 0.386526 | 0.891624 | 0.991635 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.944×† | 0.902×, 0.985× | 1.001× |
| clang | 1.011×† | 0.961×, 1.060× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001710s | 0.001665s | 0.001684s | byte equality observed |
| constrained_ops.test | 10 | 0.001707s | 0.001635s | 0.001661s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001669s | 0.001671s | 0.001652s | byte equality observed |
| deduce_domain.test | 8 | 0.001650s | 0.001725s | 0.001634s | byte equality observed |
| deep_copy.test | 9 | 0.001654s | 0.001662s | 0.001654s | byte equality observed |
| display_expr.test | 10 | 0.001691s | 0.001662s | 0.001657s | byte equality observed |
| env_var.test | 10 | 0.001952s | 0.001939s | 0.001960s | byte equality observed |
| examples.test | 10 | 0.001731s | 0.001662s | 0.001675s | byte equality observed |
| external_transforms.test | 10 | 0.001715s | 0.001677s | 0.001673s | byte equality observed |
| flatten.test | 10 | 0.001728s | 0.001689s | 0.001723s | byte equality observed |
| lambda.test | 10 | 0.001701s | 0.001630s | 0.001672s | byte equality observed |
| make.test | 10 | 0.001831s | 0.001805s | 0.001819s | byte equality observed |
| make_expr.test | 8 | 0.002124s | 0.002035s | 0.002066s | byte equality observed |
| matches.test | 10 | 0.001684s | 0.001619s | 0.001633s | byte equality observed |
| mem_ptr.test | 10 | 0.001974s | 0.001926s | 0.001955s | byte equality observed |
| mpl.test | 10 | 0.001703s | 0.001612s | 0.001659s | byte equality observed |
| noinvoke.test | 10 | 0.001707s | 0.001712s | 0.001740s | byte equality observed |
| pack_expansion.test | 10 | 0.001753s | 0.001657s | 0.001724s | byte equality observed |
| protect.test | 10 | 0.001734s | 0.001689s | 0.001721s | byte equality observed |
| switch.test | 10 | 0.001718s | 0.001615s | 0.001645s | byte equality observed |
| toy_spirit.test | 10 | 0.001776s | 0.001629s | 0.001611s | byte equality observed |
| toy_spirit2.test | 10 | 0.001693s | 0.001641s | 0.001698s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
