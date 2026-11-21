# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.668665 | 17.705732 | 13.983521 | 0.010434 | 0.013784 | 0.009634 |
| regress_u.test | RUN | 2.832801 | 18.143320 | 14.072773 | 0.009786 | 0.013610 | 0.009860 |
| c_traits.test | RUN | 2.691230 | 17.395718 | 13.383011 | 0.008313 | 0.011533 | 0.008025 |
| c_traits_u.test | RUN | 2.869641 | 18.009708 | 13.868452 | 0.008660 | 0.012397 | 0.008661 |
| test1.test | RUN | 1.032503 | 4.496589 | 4.182742 | 0.003038 | 0.003056 | 0.002992 |
| test2.test | RUN | 1.364745 | 6.346896 | 5.956384 | 0.002829 | 0.003060 | 0.003107 |
| test3.test | RUN | 1.360185 | 6.402713 | 6.151532 | 0.002845 | 0.003210 | 0.003062 |
| test4.test | RUN | 1.188477 | 5.276993 | 5.021712 | 0.002895 | 0.003036 | 0.003058 |
| test5.test | RUN | 1.270948 | 5.768497 | 5.399164 | 0.002658 | 0.003087 | 0.002691 |
| test6.test | RUN | 1.141375 | 4.842148 | 4.637316 | 0.002781 | 0.002943 | 0.003215 |
| test7.test | RUN | 1.110816 | 4.915077 | 4.655746 | 0.002500 | 0.003170 | 0.003078 |
| test8.test | RUN | 1.090792 | 4.811712 | 4.483429 | 0.002821 | 0.003070 | 0.003019 |
| test9.test | RUN | 1.183090 | 5.084871 | 5.047782 | 0.003017 | 0.003045 | 0.003104 |
| test10.test | RUN | 1.165747 | 4.838657 | 4.706333 | 0.002727 | 0.003103 | 0.002689 |
| test11.test | RUN | 1.124627 | 4.697860 | 4.620192 | 0.002955 | 0.003116 | 0.002765 |
| test1u.test | RUN | 1.026246 | 4.488351 | 4.102854 | 0.003259 | 0.003052 | 0.002705 |
| test2u.test | RUN | 1.392471 | 6.555887 | 6.173292 | 0.003016 | 0.003254 | 0.003092 |
| test3u.test | RUN | 1.421342 | 6.731566 | 6.306471 | 0.002951 | 0.003130 | 0.003274 |
| test4u.test | RUN | 1.204745 | 5.208767 | 5.032177 | 0.003132 | 0.003242 | 0.003167 |
| test5u.test | RUN | 1.282990 | 5.795640 | 5.622682 | 0.003101 | 0.003287 | 0.002972 |
| test6u.test | RUN | 1.189235 | 4.822012 | 4.696673 | 0.002996 | 0.003069 | 0.003051 |
| test7u.test | RUN | 1.145750 | 5.078029 | 4.766530 | 0.003071 | 0.003072 | 0.003187 |
| test8u.test | RUN | 1.105931 | 4.738736 | 4.513755 | 0.003138 | 0.003420 | 0.003091 |
| test9u.test | RUN | 1.193946 | 5.241086 | 5.130012 | 0.003012 | 0.003315 | 0.003030 |
| test10u.test | RUN | 1.175628 | 4.840631 | 4.703112 | 0.002973 | 0.003193 | 0.003044 |
| test11u.test | RUN | 1.187651 | 4.948394 | 4.833538 | 0.003180 | 0.003337 | 0.003070 |
| misc1.test | RUN | 2.114723 | 12.184478 | 10.349479 | 0.004037 | 0.003983 | 0.003954 |
| misc2.test | RUN | 2.138502 | 11.597845 | 10.029329 | 0.003339 | 0.003649 | 0.003380 |
| test_format.test | RUN | 2.234694 | 14.157390 | 11.371004 | 0.003114 | 0.003151 | 0.003390 |
| test_cycles.test | RUN | 1.009456 | 4.394520 | 3.866010 | 0.003128 | 0.003034 | 0.003084 |
| test_non_char.test | RUN | 1.836617 | 9.820229 | 8.700890 | 0.003253 | 0.003472 | 0.003145 |
| test_static.test | RUN | 0.914157 | 3.989855 | 3.436429 | 0.003107 | 0.003198 | 0.003076 |
| test_actions.test | RUN | 2.242879 | 11.957009 | 10.513147 | 0.003949 | 0.003778 | 0.004134 |
| test_assert.test | RUN | 1.324836 | 5.117406 | 4.948936 | 0.003314 | 0.003485 | 0.003354 |
| test_assert_with_placeholder.test | RUN | 1.221982 | 4.768094 | 4.577189 | 0.002855 | 0.002993 | 0.002873 |
| test_symbols.test | RUN | 2.319519 | 11.833138 | 11.933757 | 0.004125 | 0.004119 | 0.004203 |
| test_dynamic.test | RUN | 1.468216 | 7.935357 | 6.965888 | 0.003178 | 0.003071 | 0.003070 |
| test_dynamic_grammar.test | RUN | 1.520829 | 8.331897 | 7.200861 | 0.003362 | 0.003433 | 0.003397 |
| test_skip.test | RUN | 1.771828 | 8.744929 | 8.143489 | 0.003119 | 0.003114 | 0.003137 |
| multiple_defs.test | LINK | 2.867552 | 15.672767 | 13.707613 | — | — | — |
| test_basic_regex.test | COMPILE | 0.650562 | 1.325924 | 1.840285 | — | — | — |
| test_match_results.test | COMPILE | 0.424258 | 0.897551 | 1.238018 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.422233 | 0.901441 | 1.250998 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.639799 | 1.394290 | 1.923483 | — | — | — |
| test_regex_constants.test | COMPILE | 0.035473 | 0.059886 | 0.071593 | — | — | — |
| test_regex_error.test | COMPILE | 0.241251 | 0.479418 | 0.701261 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.419472 | 0.838384 | 1.238601 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.644892 | 1.415604 | 1.670148 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.417562 | 0.888249 | 1.099528 | — | — | — |
| test_regex_traits.test | COMPILE | 0.244841 | 0.470302 | 0.648255 | — | — | — |
| test_sub_match.test | COMPILE | 0.191790 | 0.390558 | 0.398364 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.121× | 1.141×, 1.100× | 0.972× |
| clang | 0.946× | 0.948×, 0.945× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.007182s | 0.010195s | 0.006680s | byte equality observed |
| c_traits_u.test | 2 | 0.007567s | 0.010820s | 0.006853s | byte equality observed |
| misc1.test | 8 | 0.002643s | 0.002586s | 0.002456s | byte equality observed |
| misc2.test | 10 | 0.002315s | 0.002178s | 0.002275s | byte equality observed |
| regress.test | 3 | 0.008850s | 0.011677s | 0.007756s | byte equality observed |
| regress_u.test | 3 | 0.009177s | 0.011638s | 0.008355s | byte equality observed |
| test1.test | 10 | 0.002036s | 0.001997s | 0.001992s | byte equality observed |
| test10.test | 10 | 0.002014s | 0.001969s | 0.001963s | byte equality observed |
| test10u.test | 10 | 0.002009s | 0.002005s | 0.001977s | byte equality observed |
| test11.test | 10 | 0.002010s | 0.001974s | 0.001951s | byte equality observed |
| test11u.test | 9 | 0.002002s | 0.001970s | 0.001972s | byte equality observed |
| test1u.test | 10 | 0.002027s | 0.002023s | 0.001974s | byte equality observed |
| test2.test | 10 | 0.002076s | 0.002071s | 0.002035s | byte equality observed |
| test2u.test | 10 | 0.002046s | 0.002048s | 0.002010s | byte equality observed |
| test3.test | 10 | 0.002045s | 0.002129s | 0.002006s | byte equality observed |
| test3u.test | 10 | 0.002016s | 0.002101s | 0.002040s | byte equality observed |
| test4.test | 10 | 0.002015s | 0.002008s | 0.001967s | byte equality observed |
| test4u.test | 9 | 0.002060s | 0.002033s | 0.001987s | byte equality observed |
| test5.test | 9 | 0.001995s | 0.002101s | 0.002000s | byte equality observed |
| test5u.test | 9 | 0.002028s | 0.002076s | 0.002033s | byte equality observed |
| test6.test | 10 | 0.002036s | 0.002001s | 0.001963s | byte equality observed |
| test6u.test | 10 | 0.002026s | 0.002002s | 0.001953s | byte equality observed |
| test7.test | 10 | 0.002010s | 0.002014s | 0.001979s | byte equality observed |
| test7u.test | 10 | 0.001988s | 0.002041s | 0.001976s | byte equality observed |
| test8.test | 10 | 0.001974s | 0.002015s | 0.001974s | byte equality observed |
| test8u.test | 10 | 0.002003s | 0.001998s | 0.002004s | byte equality observed |
| test9.test | 10 | 0.002019s | 0.002023s | 0.001986s | byte equality observed |
| test9u.test | 9 | 0.002020s | 0.002045s | 0.001979s | byte equality observed |
| test_actions.test | 9 | 0.002547s | 0.002555s | 0.002504s | byte equality observed |
| test_assert.test | 10 | 0.002130s | 0.002043s | 0.002057s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002015s | 0.001986s | 0.001950s | byte equality observed |
| test_cycles.test | 10 | 0.002033s | 0.001995s | 0.001973s | byte equality observed |
| test_dynamic.test | 10 | 0.002031s | 0.001980s | 0.001955s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002189s | 0.002072s | 0.002113s | byte equality observed |
| test_format.test | 10 | 0.002091s | 0.002056s | 0.002080s | byte equality observed |
| test_non_char.test | 10 | 0.002076s | 0.002033s | 0.002015s | byte equality observed |
| test_skip.test | 10 | 0.001979s | 0.001975s | 0.001912s | byte equality observed |
| test_static.test | 10 | 0.001878s | 0.001878s | 0.001862s | byte equality observed |
| test_symbols.test | 8 | 0.002341s | 0.002351s | 0.002402s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
