# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.803588 | 17.689293 | 13.916728 | 0.010600 | 0.013804 | 0.009662 |
| regress_u.test | RUN | 2.966028 | 18.134950 | 14.164322 | 0.009714 | 0.013404 | 0.009783 |
| c_traits.test | RUN | 2.816923 | 17.358708 | 13.419658 | 0.008128 | 0.011602 | 0.007932 |
| c_traits_u.test | RUN | 3.071099 | 18.046803 | 13.727510 | 0.009249 | 0.012197 | 0.008726 |
| test1.test | RUN | 1.097969 | 4.575938 | 4.190480 | 0.002868 | 0.003313 | 0.003181 |
| test2.test | RUN | 1.416328 | 6.389467 | 6.000800 | 0.002377 | 0.003327 | 0.003008 |
| test3.test | RUN | 1.418464 | 6.455013 | 6.120285 | 0.002970 | 0.003259 | 0.002904 |
| test4.test | RUN | 1.221142 | 5.299439 | 5.036337 | 0.003111 | 0.003198 | 0.003118 |
| test5.test | RUN | 1.327275 | 5.754148 | 5.452358 | 0.003146 | 0.003271 | 0.003072 |
| test6.test | RUN | 1.192335 | 4.782287 | 4.636787 | 0.003019 | 0.003070 | 0.003098 |
| test7.test | RUN | 1.156961 | 4.914310 | 4.699026 | 0.002679 | 0.003190 | 0.002972 |
| test8.test | RUN | 1.122961 | 4.817178 | 4.491721 | 0.002971 | 0.003024 | 0.002992 |
| test9.test | RUN | 1.211010 | 5.136713 | 5.127817 | 0.003079 | 0.003187 | 0.003042 |
| test10.test | RUN | 1.205007 | 4.908789 | 4.767042 | 0.002757 | 0.003280 | 0.003107 |
| test11.test | RUN | 1.126929 | 4.672969 | 4.700881 | 0.002950 | 0.003299 | 0.002759 |
| test1u.test | RUN | 1.062215 | 4.510520 | 4.146178 | 0.003007 | 0.003070 | 0.002861 |
| test2u.test | RUN | 1.401871 | 6.681828 | 6.305708 | 0.003070 | 0.003213 | 0.003200 |
| test3u.test | RUN | 1.428131 | 6.774977 | 6.446945 | 0.002997 | 0.003174 | 0.003150 |
| test4u.test | RUN | 1.200993 | 5.264961 | 5.082334 | 0.003251 | 0.003246 | 0.003224 |
| test5u.test | RUN | 1.312918 | 5.804771 | 5.644098 | 0.003000 | 0.003340 | 0.003118 |
| test6u.test | RUN | 1.190961 | 4.881963 | 4.797224 | 0.003050 | 0.003183 | 0.003171 |
| test7u.test | RUN | 1.167627 | 5.081018 | 4.867339 | 0.002556 | 0.003099 | 0.003168 |
| test8u.test | RUN | 1.107612 | 4.706967 | 4.535942 | 0.003118 | 0.003302 | 0.002990 |
| test9u.test | RUN | 1.222171 | 5.140034 | 5.145136 | 0.003167 | 0.002947 | 0.003040 |
| test10u.test | RUN | 1.214088 | 4.883736 | 4.694059 | 0.003143 | 0.003173 | 0.003171 |
| test11u.test | RUN | 1.226345 | 4.904726 | 4.842086 | 0.003220 | 0.003115 | 0.003131 |
| misc1.test | RUN | 2.129673 | 12.146843 | 10.281383 | 0.003689 | 0.004059 | 0.003836 |
| misc2.test | RUN | 2.144084 | 11.708891 | 9.973160 | 0.003327 | 0.003568 | 0.003213 |
| test_format.test | RUN | 2.248100 | 14.094872 | 11.626887 | 0.003186 | 0.003368 | 0.003281 |
| test_cycles.test | RUN | 1.006578 | 4.368769 | 3.831127 | 0.003088 | 0.003199 | 0.003103 |
| test_non_char.test | RUN | 1.855810 | 9.949717 | 8.694521 | 0.003113 | 0.003521 | 0.003191 |
| test_static.test | RUN | 0.925115 | 4.077070 | 3.381021 | 0.003042 | 0.003017 | 0.003110 |
| test_actions.test | RUN | 2.298061 | 11.999544 | 10.713994 | 0.004079 | 0.004041 | 0.003541 |
| test_assert.test | RUN | 1.290728 | 5.181500 | 5.043552 | 0.003247 | 0.003298 | 0.002976 |
| test_assert_with_placeholder.test | RUN | 1.221589 | 4.741626 | 4.458732 | 0.003205 | 0.003039 | 0.003147 |
| test_symbols.test | RUN | 2.371904 | 11.966808 | 11.946225 | 0.004039 | 0.004373 | 0.004071 |
| test_dynamic.test | RUN | 1.485813 | 7.984937 | 6.896483 | 0.003271 | 0.003201 | 0.003156 |
| test_dynamic_grammar.test | RUN | 1.573019 | 8.537308 | 7.038442 | 0.003192 | 0.003537 | 0.003208 |
| test_skip.test | RUN | 1.842628 | 8.749843 | 8.406200 | 0.003195 | 0.003218 | 0.003079 |
| multiple_defs.test | LINK | 2.928100 | 15.704405 | 13.739840 | — | — | — |
| test_basic_regex.test | COMPILE | 0.661410 | 1.301176 | 1.897488 | — | — | — |
| test_match_results.test | COMPILE | 0.443998 | 0.913919 | 1.326338 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.443694 | 0.927648 | 1.267163 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.645269 | 1.493550 | 1.902297 | — | — | — |
| test_regex_constants.test | COMPILE | 0.036655 | 0.063518 | 0.069310 | — | — | — |
| test_regex_error.test | COMPILE | 0.229077 | 0.475162 | 0.678293 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.420252 | 0.913565 | 1.259387 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.649004 | 1.448939 | 1.711350 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.423586 | 0.891731 | 1.152747 | — | — | — |
| test_regex_traits.test | COMPILE | 0.243399 | 0.485744 | 0.683365 | — | — | — |
| test_sub_match.test | COMPILE | 0.186921 | 0.395746 | 0.367964 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.088× | 1.109×, 1.068× | 1.002× |
| clang | 0.961× | 0.967×, 0.956× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.007167s | 0.010258s | 0.006885s | byte equality observed |
| c_traits_u.test | 2 | 0.007737s | 0.010522s | 0.007356s | byte equality observed |
| misc1.test | 8 | 0.002681s | 0.002530s | 0.002558s | byte equality observed |
| misc2.test | 9 | 0.002340s | 0.002241s | 0.002282s | byte equality observed |
| regress.test | 3 | 0.009133s | 0.011317s | 0.008359s | byte equality observed |
| regress_u.test | 3 | 0.009334s | 0.011633s | 0.008607s | byte equality observed |
| test1.test | 10 | 0.002036s | 0.001924s | 0.002001s | byte equality observed |
| test10.test | 10 | 0.002043s | 0.002013s | 0.002013s | byte equality observed |
| test10u.test | 10 | 0.002027s | 0.001985s | 0.001997s | byte equality observed |
| test11.test | 10 | 0.002029s | 0.001981s | 0.002002s | byte equality observed |
| test11u.test | 10 | 0.002040s | 0.002001s | 0.002010s | byte equality observed |
| test1u.test | 10 | 0.002042s | 0.002055s | 0.002043s | byte equality observed |
| test2.test | 10 | 0.002105s | 0.002072s | 0.002085s | byte equality observed |
| test2u.test | 10 | 0.002101s | 0.002087s | 0.002096s | byte equality observed |
| test3.test | 10 | 0.002112s | 0.002085s | 0.002059s | byte equality observed |
| test3u.test | 10 | 0.002067s | 0.002079s | 0.002070s | byte equality observed |
| test4.test | 10 | 0.002039s | 0.002001s | 0.002048s | byte equality observed |
| test4u.test | 10 | 0.002082s | 0.002028s | 0.002058s | byte equality observed |
| test5.test | 10 | 0.002073s | 0.002054s | 0.002037s | byte equality observed |
| test5u.test | 10 | 0.002080s | 0.002084s | 0.002061s | byte equality observed |
| test6.test | 10 | 0.002061s | 0.002041s | 0.002057s | byte equality observed |
| test6u.test | 10 | 0.002059s | 0.002048s | 0.002037s | byte equality observed |
| test7.test | 10 | 0.002058s | 0.001994s | 0.001998s | byte equality observed |
| test7u.test | 9 | 0.002079s | 0.002029s | 0.002030s | byte equality observed |
| test8.test | 10 | 0.002060s | 0.002000s | 0.001995s | byte equality observed |
| test8u.test | 10 | 0.002059s | 0.002018s | 0.002038s | byte equality observed |
| test9.test | 10 | 0.002030s | 0.001994s | 0.001969s | byte equality observed |
| test9u.test | 10 | 0.002063s | 0.002003s | 0.001994s | byte equality observed |
| test_actions.test | 8 | 0.002581s | 0.002556s | 0.002560s | byte equality observed |
| test_assert.test | 9 | 0.002171s | 0.002082s | 0.002096s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002041s | 0.001972s | 0.002009s | byte equality observed |
| test_cycles.test | 10 | 0.002039s | 0.002016s | 0.002028s | byte equality observed |
| test_dynamic.test | 9 | 0.002031s | 0.001931s | 0.002033s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002191s | 0.002144s | 0.002187s | byte equality observed |
| test_format.test | 10 | 0.002160s | 0.002094s | 0.002106s | byte equality observed |
| test_non_char.test | 10 | 0.002139s | 0.002044s | 0.002094s | byte equality observed |
| test_skip.test | 10 | 0.002054s | 0.001989s | 0.002050s | byte equality observed |
| test_static.test | 9 | 0.001989s | 0.001944s | 0.001977s | byte equality observed |
| test_symbols.test | 9 | 0.002278s | 0.002313s | 0.002321s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
