# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.488148 | 22.808736 | 16.833257 | 0.012504 | 0.014481 | 0.011444 |
| regress_u.test | RUN | 3.697707 | 23.398448 | 16.891291 | 0.011962 | 0.014786 | 0.012243 |
| c_traits.test | RUN | 3.427810 | 22.498597 | 16.191902 | 0.010010 | 0.012409 | 0.008711 |
| c_traits_u.test | RUN | 3.704026 | 23.160328 | 16.896109 | 0.010829 | 0.013209 | 0.010397 |
| test1.test | RUN | 1.230809 | 5.638173 | 4.816920 | 0.002543 | 0.002999 | 0.002933 |
| test2.test | RUN | 1.657548 | 8.061260 | 7.156487 | 0.002792 | 0.003034 | 0.002960 |
| test3.test | RUN | 1.646374 | 8.145509 | 7.200932 | 0.002797 | 0.003122 | 0.002755 |
| test4.test | RUN | 1.417623 | 6.575932 | 5.910943 | 0.002507 | 0.002917 | 0.002934 |
| test5.test | RUN | 1.511822 | 7.128523 | 6.265566 | 0.002947 | 0.002988 | 0.002942 |
| test6.test | RUN | 1.369929 | 5.987620 | 5.315096 | 0.002735 | 0.002995 | 0.002804 |
| test7.test | RUN | 1.326072 | 6.217544 | 5.439654 | 0.002766 | 0.003041 | 0.002930 |
| test8.test | RUN | 1.337631 | 6.004888 | 5.327413 | 0.002693 | 0.003006 | 0.002892 |
| test9.test | RUN | 1.435901 | 6.503850 | 5.904888 | 0.002807 | 0.002861 | 0.002868 |
| test10.test | RUN | 1.397668 | 6.199418 | 5.473403 | 0.002581 | 0.003038 | 0.002829 |
| test11.test | RUN | 1.349597 | 5.908186 | 5.407031 | 0.002748 | 0.003083 | 0.002719 |
| test1u.test | RUN | 1.214477 | 5.627474 | 4.671456 | 0.002818 | 0.002973 | 0.002635 |
| test2u.test | RUN | 1.686999 | 8.367452 | 7.376321 | 0.003043 | 0.003017 | 0.002700 |
| test3u.test | RUN | 1.712071 | 8.538564 | 7.581222 | 0.002749 | 0.002943 | 0.003007 |
| test4u.test | RUN | 1.458506 | 6.578164 | 5.967184 | 0.003198 | 0.003062 | 0.002983 |
| test5u.test | RUN | 1.539940 | 7.317048 | 6.632983 | 0.002953 | 0.003075 | 0.003031 |
| test6u.test | RUN | 1.402425 | 6.142044 | 5.613730 | 0.002911 | 0.003059 | 0.002976 |
| test7u.test | RUN | 1.388224 | 6.458276 | 5.734079 | 0.003206 | 0.003101 | 0.002850 |
| test8u.test | RUN | 1.326042 | 5.988354 | 5.329926 | 0.002652 | 0.003105 | 0.002923 |
| test9u.test | RUN | 1.426537 | 6.409521 | 5.935053 | 0.002811 | 0.003055 | 0.002877 |
| test10u.test | RUN | 1.396907 | 6.116783 | 5.497293 | 0.002831 | 0.002903 | 0.002846 |
| test11u.test | RUN | 1.437937 | 6.081855 | 5.681584 | 0.002919 | 0.003076 | 0.002893 |
| misc1.test | RUN | 2.618589 | 15.596032 | 12.580150 | 0.003550 | 0.003513 | 0.003636 |
| misc2.test | RUN | 2.583791 | 14.830137 | 12.003873 | 0.003221 | 0.003228 | 0.003082 |
| test_format.test | RUN | 2.764723 | 18.291143 | 13.950977 | 0.003524 | 0.003003 | 0.002943 |
| test_cycles.test | RUN | 1.176361 | 5.477153 | 4.439378 | 0.002970 | 0.002934 | 0.002910 |
| test_non_char.test | RUN | 2.263053 | 12.680471 | 10.294538 | 0.002834 | 0.003127 | 0.002875 |
| test_static.test | RUN | 1.096383 | 4.948442 | 3.941180 | 0.002984 | 0.002952 | 0.002871 |
| test_actions.test | RUN | 2.791268 | 14.987762 | 12.637971 | 0.003682 | 0.003456 | 0.003792 |
| test_assert.test | RUN | 1.530649 | 6.472872 | 5.764515 | 0.002972 | 0.003165 | 0.003079 |
| test_assert_with_placeholder.test | RUN | 1.461489 | 5.900981 | 5.205316 | 0.002900 | 0.002739 | 0.002867 |
| test_symbols.test | RUN | 2.798741 | 14.602334 | 14.106439 | 0.003894 | 0.003625 | 0.003582 |
| test_dynamic.test | RUN | 1.810727 | 10.019944 | 8.232626 | 0.002951 | 0.002693 | 0.002668 |
| test_dynamic_grammar.test | RUN | 1.858328 | 10.545235 | 8.426798 | 0.003203 | 0.003131 | 0.003064 |
| test_skip.test | RUN | 2.176219 | 10.718334 | 9.746774 | 0.003178 | 0.003028 | 0.002898 |
| multiple_defs.test | LINK | 3.560674 | 19.169431 | 16.433488 | — | — | — |
| test_basic_regex.test | COMPILE | 0.733007 | 1.546125 | 2.043935 | — | — | — |
| test_match_results.test | COMPILE | 0.502159 | 1.081807 | 1.399396 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.485854 | 1.061634 | 1.441121 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.739646 | 1.709362 | 2.082913 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037278 | 0.070212 | 0.069380 | — | — | — |
| test_regex_error.test | COMPILE | 0.264792 | 0.572927 | 0.753977 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.478342 | 1.074380 | 1.370573 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.728236 | 1.691823 | 1.771380 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.449865 | 1.077548 | 1.339214 | — | — | — |
| test_regex_traits.test | COMPILE | 0.273638 | 0.572902 | 0.708562 | — | — | — |
| test_sub_match.test | COMPILE | 0.229778 | 0.460374 | 0.498807 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.055× | 1.053×, 1.057× | 1.002× |
| clang | 0.972× | 0.963×, 0.981× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.008757s | 0.010973s | 0.008752s | byte equality observed |
| c_traits_u.test | 3 | 0.009562s | 0.011483s | 0.009321s | byte equality observed |
| misc1.test | 9 | 0.002552s | 0.002487s | 0.002418s | byte equality observed |
| misc2.test | 9 | 0.002272s | 0.002220s | 0.002234s | byte equality observed |
| regress.test | 3 | 0.011327s | 0.012610s | 0.010662s | byte equality observed |
| regress_u.test | 2 | 0.011323s | 0.012921s | 0.010995s | byte equality observed |
| test1.test | 10 | 0.002081s | 0.002071s | 0.002034s | byte equality observed |
| test10.test | 9 | 0.002086s | 0.002045s | 0.002056s | byte equality observed |
| test10u.test | 10 | 0.002094s | 0.002056s | 0.002029s | byte equality observed |
| test11.test | 10 | 0.002059s | 0.002070s | 0.002062s | byte equality observed |
| test11u.test | 10 | 0.002088s | 0.002052s | 0.002046s | byte equality observed |
| test1u.test | 10 | 0.002103s | 0.002037s | 0.002076s | byte equality observed |
| test2.test | 10 | 0.002124s | 0.002137s | 0.002097s | byte equality observed |
| test2u.test | 10 | 0.002146s | 0.002157s | 0.002102s | byte equality observed |
| test3.test | 10 | 0.002110s | 0.002144s | 0.002102s | byte equality observed |
| test3u.test | 9 | 0.002134s | 0.002178s | 0.002094s | byte equality observed |
| test4.test | 10 | 0.002089s | 0.002078s | 0.002066s | byte equality observed |
| test4u.test | 10 | 0.002126s | 0.002089s | 0.002048s | byte equality observed |
| test5.test | 10 | 0.002092s | 0.002096s | 0.002029s | byte equality observed |
| test5u.test | 10 | 0.002122s | 0.002102s | 0.002084s | byte equality observed |
| test6.test | 10 | 0.002073s | 0.002084s | 0.002043s | byte equality observed |
| test6u.test | 10 | 0.002103s | 0.002122s | 0.002068s | byte equality observed |
| test7.test | 10 | 0.002069s | 0.002059s | 0.002047s | byte equality observed |
| test7u.test | 7 | 0.002095s | 0.002134s | 0.002043s | byte equality observed |
| test8.test | 8 | 0.002092s | 0.002067s | 0.002042s | byte equality observed |
| test8u.test | 8 | 0.002093s | 0.002069s | 0.002046s | byte equality observed |
| test9.test | 9 | 0.002083s | 0.002098s | 0.002013s | byte equality observed |
| test9u.test | 10 | 0.002083s | 0.002118s | 0.002032s | byte equality observed |
| test_actions.test | 8 | 0.002462s | 0.002374s | 0.002372s | byte equality observed |
| test_assert.test | 10 | 0.002174s | 0.002141s | 0.002078s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002054s | 0.002008s | 0.001992s | byte equality observed |
| test_cycles.test | 10 | 0.002081s | 0.002098s | 0.002024s | byte equality observed |
| test_dynamic.test | 10 | 0.002064s | 0.002037s | 0.002041s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002210s | 0.002201s | 0.002163s | byte equality observed |
| test_format.test | 9 | 0.002173s | 0.002149s | 0.002081s | byte equality observed |
| test_non_char.test | 9 | 0.002121s | 0.002112s | 0.002078s | byte equality observed |
| test_skip.test | 10 | 0.002057s | 0.002048s | 0.001959s | byte equality observed |
| test_static.test | 10 | 0.001864s | 0.001836s | 0.001813s | byte equality observed |
| test_symbols.test | 9 | 0.002274s | 0.002201s | 0.002179s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
