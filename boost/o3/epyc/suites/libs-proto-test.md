# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.534638 | 1.163083 | 1.168916 | 0.002691 | 0.002964 | 0.003025 |
| constrained_ops.test | RUN | 0.523536 | 1.271326 | 1.361180 | 0.002478 | 0.003230 | 0.002693 |
| cpp-next_bug.test | RUN | 0.540435 | 1.333585 | 1.463676 | 0.002786 | 0.003041 | 0.002805 |
| deep_copy.test | RUN | 0.460364 | 1.194272 | 1.199569 | 0.002811 | 0.003012 | 0.002807 |
| display_expr.test | RUN | 0.547713 | 1.436146 | 1.509460 | 0.002732 | 0.002981 | 0.002817 |
| deduce_domain.test | RUN | 0.448613 | 1.047290 | 1.137020 | 0.002855 | 0.003031 | 0.002188 |
| env_var.test | RUN | 0.592193 | 2.504440 | 1.795386 | 0.003345 | 0.003333 | 0.003260 |
| examples.test | RUN | 0.572512 | 1.623724 | 1.649311 | 0.002777 | 0.002630 | 0.002426 |
| external_transforms.test | RUN | 0.549928 | 1.408865 | 1.452396 | 0.002631 | 0.003229 | 0.002682 |
| lambda.test | RUN | 0.527946 | 1.401022 | 1.482098 | 0.002651 | 0.003063 | 0.002396 |
| make_expr.test | RUN | 0.538172 | 2.239495 | 1.583924 | 0.003339 | 0.003771 | 0.003805 |
| matches.test | RUN | 0.470177 | 1.147908 | 1.325629 | 0.002916 | 0.002862 | 0.002349 |
| flatten.test | RUN | 0.887326 | 3.336320 | 3.227516 | 0.003137 | 0.003113 | 0.002640 |
| switch.test | RUN | 0.454145 | 1.139187 | 1.236646 | 0.002822 | 0.002966 | 0.002522 |
| toy_spirit.test | RUN | 0.507089 | 1.453712 | 1.563489 | 0.002959 | 0.003029 | 0.002776 |
| toy_spirit2.test | RUN | 0.565802 | 1.501298 | 1.697840 | 0.002858 | 0.003068 | 0.002713 |
| make.test | RUN | 0.460491 | 1.391747 | 1.217131 | 0.003568 | 0.003204 | 0.002955 |
| mem_ptr.test | RUN | 0.616669 | 2.459957 | 1.786904 | 0.003554 | 0.003523 | 0.003233 |
| mpl.test | RUN | 0.545698 | 1.189979 | 1.290251 | 0.002815 | 0.003110 | 0.002800 |
| noinvoke.test | RUN | 0.478004 | 1.022344 | 1.100854 | 0.002976 | 0.003236 | 0.002771 |
| pack_expansion.test | RUN | 0.539997 | 1.546067 | 1.415408 | 0.002410 | 0.003178 | 0.002573 |
| protect.test | RUN | 0.338838 | 1.119977 | 0.789249 | 0.002415 | 0.002306 | 0.002081 |
| bug2407.test | COMPILE | 0.384672 | 0.686802 | 0.776410 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.970× | 0.978×, 0.963× | 0.983× |
| clang | 0.989× | 0.995×, 0.982× | 1.042× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001533s | 0.001454s | 0.001514s | byte equality observed |
| constrained_ops.test | 10 | 0.001511s | 0.001429s | 0.001503s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001500s | 0.001452s | 0.001485s | byte equality observed |
| deduce_domain.test | 10 | 0.001507s | 0.001460s | 0.001488s | byte equality observed |
| deep_copy.test | 10 | 0.001545s | 0.001426s | 0.001500s | byte equality observed |
| display_expr.test | 10 | 0.001523s | 0.001453s | 0.001512s | byte equality observed |
| env_var.test | 10 | 0.001753s | 0.001694s | 0.001754s | byte equality observed |
| examples.test | 10 | 0.001517s | 0.001447s | 0.001513s | byte equality observed |
| external_transforms.test | 10 | 0.001537s | 0.001527s | 0.001520s | byte equality observed |
| flatten.test | 10 | 0.001555s | 0.001508s | 0.001548s | byte equality observed |
| lambda.test | 10 | 0.001495s | 0.001447s | 0.001484s | byte equality observed |
| make.test | 10 | 0.001645s | 0.001571s | 0.001665s | byte equality observed |
| make_expr.test | 10 | 0.001838s | 0.001780s | 0.001854s | byte equality observed |
| matches.test | 10 | 0.001489s | 0.001443s | 0.001509s | byte equality observed |
| mem_ptr.test | 10 | 0.001721s | 0.001703s | 0.001725s | byte equality observed |
| mpl.test | 10 | 0.001505s | 0.001465s | 0.001519s | byte equality observed |
| noinvoke.test | 10 | 0.001498s | 0.001466s | 0.001480s | byte equality observed |
| pack_expansion.test | 10 | 0.001547s | 0.001501s | 0.001537s | byte equality observed |
| protect.test | 10 | 0.001549s | 0.001498s | 0.001548s | byte equality observed |
| switch.test | 10 | 0.001508s | 0.001429s | 0.001490s | byte equality observed |
| toy_spirit.test | 10 | 0.001510s | 0.001448s | 0.001480s | byte equality observed |
| toy_spirit2.test | 10 | 0.001486s | 0.001453s | 0.001483s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
