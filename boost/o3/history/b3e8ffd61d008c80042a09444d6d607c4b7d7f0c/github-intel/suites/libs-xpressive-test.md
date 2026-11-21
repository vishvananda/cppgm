# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.526763 | 16.465138 | 12.526390 | 0.008731 | 0.010343 | 0.008294 |
| regress_u.test | RUN | 2.636675 | 17.053705 | 12.370653 | 0.008852 | 0.010372 | 0.008485 |
| c_traits.test | RUN | 2.468925 | 16.120422 | 11.905857 | 0.006990 | 0.008842 | 0.007019 |
| c_traits_u.test | RUN | 2.693190 | 16.692237 | 12.744413 | 0.007675 | 0.009456 | 0.007445 |
| test1.test | RUN | 0.884480 | 4.038304 | 3.590941 | 0.001933 | 0.001973 | 0.002347 |
| test2.test | RUN | 1.187196 | 5.835821 | 5.314108 | 0.002140 | 0.002266 | 0.002259 |
| test3.test | RUN | 1.187773 | 5.893396 | 5.255734 | 0.001872 | 0.002205 | 0.002229 |
| test4.test | RUN | 1.026379 | 4.710418 | 4.257500 | 0.002160 | 0.002133 | 0.002340 |
| test5.test | RUN | 1.099959 | 5.164936 | 4.643679 | 0.002111 | 0.002201 | 0.002131 |
| test6.test | RUN | 0.992461 | 4.225843 | 3.909386 | 0.002269 | 0.002032 | 0.002090 |
| test7.test | RUN | 0.957468 | 4.388376 | 3.961618 | 0.002011 | 0.002131 | 0.002240 |
| test8.test | RUN | 0.950919 | 4.269541 | 3.853053 | 0.001925 | 0.002134 | 0.002376 |
| test9.test | RUN | 1.037371 | 4.658608 | 4.339262 | 0.002148 | 0.002065 | 0.002113 |
| test10.test | RUN | 1.011244 | 4.405142 | 3.979737 | 0.002040 | 0.002030 | 0.002003 |
| test11.test | RUN | 0.970103 | 4.193809 | 3.955200 | 0.002054 | 0.002124 | 0.002611 |
| test1u.test | RUN | 0.877653 | 4.042284 | 3.432414 | 0.002353 | 0.002094 | 0.002032 |
| test2u.test | RUN | 1.227767 | 5.999453 | 5.433758 | 0.002269 | 0.001990 | 0.002170 |
| test3u.test | RUN | 1.238829 | 6.169599 | 5.597223 | 0.002134 | 0.002215 | 0.002139 |
| test4u.test | RUN | 1.047665 | 4.734139 | 4.242822 | 0.002068 | 0.002044 | 0.002125 |
| test5u.test | RUN | 1.131434 | 5.306861 | 4.783670 | 0.002144 | 0.002214 | 0.002220 |
| test6u.test | RUN | 1.047848 | 4.369265 | 4.091185 | 0.002277 | 0.002055 | 0.002034 |
| test7u.test | RUN | 0.989727 | 4.637971 | 4.062435 | 0.002303 | 0.002142 | 0.001954 |
| test8u.test | RUN | 0.958290 | 4.191290 | 3.798963 | 0.002317 | 0.002282 | 0.002055 |
| test9u.test | RUN | 1.039759 | 4.577890 | 4.433489 | 0.001938 | 0.002223 | 0.002178 |
| test10u.test | RUN | 1.033178 | 4.371288 | 4.060228 | 0.002140 | 0.002117 | 0.002246 |
| test11u.test | RUN | 1.010312 | 4.411364 | 4.100191 | 0.002524 | 0.002216 | 0.002131 |
| misc1.test | RUN | 1.906224 | 11.161383 | 9.173423 | 0.002732 | 0.002474 | 0.002774 |
| misc2.test | RUN | 1.861929 | 10.732209 | 9.033848 | 0.002161 | 0.002242 | 0.002543 |
| test_format.test | RUN | 2.005505 | 13.242394 | 10.302837 | 0.002344 | 0.002150 | 0.002234 |
| test_cycles.test | RUN | 0.840524 | 3.933074 | 3.284551 | 0.001952 | 0.002092 | 0.002119 |
| test_non_char.test | RUN | 1.649938 | 9.245297 | 7.510158 | 0.002424 | 0.002109 | 0.002214 |
| test_static.test | RUN | 0.776688 | 3.540648 | 2.902312 | 0.002167 | 0.002075 | 0.002079 |
| test_actions.test | RUN | 1.996945 | 10.925046 | 9.407081 | 0.002559 | 0.002775 | 0.002795 |
| test_assert.test | RUN | 1.103053 | 4.624186 | 4.231879 | 0.001974 | 0.002110 | 0.002117 |
| test_assert_with_placeholder.test | RUN | 1.021659 | 4.223122 | 3.812571 | 0.002091 | 0.002112 | 0.001967 |
| test_symbols.test | RUN | 2.068406 | 10.781844 | 10.354009 | 0.002903 | 0.002440 | 0.002630 |
| test_dynamic.test | RUN | 1.304949 | 7.303723 | 6.234164 | 0.002327 | 0.002116 | 0.002330 |
| test_dynamic_grammar.test | RUN | 1.350058 | 7.726778 | 6.193771 | 0.002230 | 0.002287 | 0.002278 |
| test_skip.test | RUN | 1.569865 | 7.811071 | 7.386228 | 0.002013 | 0.002016 | 0.002155 |
| multiple_defs.test | LINK | 2.564702 | 14.136107 | 12.131592 | — | — | — |
| test_basic_regex.test | COMPILE | 0.512097 | 1.098200 | 1.517581 | — | — | — |
| test_match_results.test | COMPILE | 0.338061 | 0.735473 | 0.981796 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.352143 | 0.743697 | 0.990894 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.527023 | 1.187931 | 1.499850 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027155 | 0.048014 | 0.053718 | — | — | — |
| test_regex_error.test | COMPILE | 0.184141 | 0.395807 | 0.525116 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.343164 | 0.737810 | 0.983068 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.442176 | 1.189877 | 1.320224 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.343343 | 0.744020 | 0.983393 | — | — | — |
| test_regex_traits.test | COMPILE | 0.192247 | 0.399478 | 0.504362 | — | — | — |
| test_sub_match.test | COMPILE | 0.162553 | 0.319218 | 0.407632 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.094× | 1.098×, 1.091× | 1.010× |
| clang | 0.974× | 0.969×, 0.980× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004758s | 0.006404s | 0.004773s | byte equality observed |
| c_traits_u.test | 3 | 0.005230s | 0.006687s | 0.005186s | byte equality observed |
| misc1.test | 10 | 0.001501s | 0.001497s | 0.001440s | byte equality observed |
| misc2.test | 10 | 0.001348s | 0.001375s | 0.001335s | byte equality observed |
| regress.test | 3 | 0.005792s | 0.007225s | 0.005315s | byte equality observed |
| regress_u.test | 3 | 0.006090s | 0.007475s | 0.005678s | byte equality observed |
| test1.test | 10 | 0.001253s | 0.001271s | 0.001264s | byte equality observed |
| test10.test | 8 | 0.001261s | 0.001284s | 0.001235s | byte equality observed |
| test10u.test | 10 | 0.001248s | 0.001279s | 0.001236s | byte equality observed |
| test11.test | 10 | 0.001245s | 0.001278s | 0.001223s | byte equality observed |
| test11u.test | 10 | 0.001257s | 0.001264s | 0.001236s | byte equality observed |
| test1u.test | 10 | 0.001252s | 0.001297s | 0.001232s | byte equality observed |
| test2.test | 10 | 0.001282s | 0.001308s | 0.001264s | byte equality observed |
| test2u.test | 9 | 0.001296s | 0.001341s | 0.001263s | byte equality observed |
| test3.test | 10 | 0.001289s | 0.001341s | 0.001269s | byte equality observed |
| test3u.test | 10 | 0.001303s | 0.001290s | 0.001268s | byte equality observed |
| test4.test | 10 | 0.001270s | 0.001303s | 0.001257s | byte equality observed |
| test4u.test | 10 | 0.001273s | 0.001298s | 0.001259s | byte equality observed |
| test5.test | 10 | 0.001278s | 0.001313s | 0.001287s | byte equality observed |
| test5u.test | 8 | 0.001294s | 0.001291s | 0.001280s | byte equality observed |
| test6.test | 10 | 0.001274s | 0.001252s | 0.001237s | byte equality observed |
| test6u.test | 10 | 0.001272s | 0.001274s | 0.001250s | byte equality observed |
| test7.test | 10 | 0.001259s | 0.001252s | 0.001240s | byte equality observed |
| test7u.test | 10 | 0.001283s | 0.001271s | 0.001265s | byte equality observed |
| test8.test | 10 | 0.001257s | 0.001267s | 0.001254s | byte equality observed |
| test8u.test | 10 | 0.001257s | 0.001294s | 0.001252s | byte equality observed |
| test9.test | 10 | 0.001263s | 0.001297s | 0.001268s | byte equality observed |
| test9u.test | 10 | 0.001276s | 0.001304s | 0.001234s | byte equality observed |
| test_actions.test | 10 | 0.001463s | 0.001504s | 0.001415s | byte equality observed |
| test_assert.test | 10 | 0.001333s | 0.001322s | 0.001282s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001234s | 0.001242s | 0.001206s | byte equality observed |
| test_cycles.test | 10 | 0.001292s | 0.001266s | 0.001266s | byte equality observed |
| test_dynamic.test | 10 | 0.001272s | 0.001220s | 0.001246s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001332s | 0.001336s | 0.001290s | byte equality observed |
| test_format.test | 10 | 0.001339s | 0.001315s | 0.001294s | byte equality observed |
| test_non_char.test | 10 | 0.001286s | 0.001313s | 0.001283s | byte equality observed |
| test_skip.test | 10 | 0.001255s | 0.001218s | 0.001238s | byte equality observed |
| test_static.test | 10 | 0.001237s | 0.001249s | 0.001253s | byte equality observed |
| test_symbols.test | 10 | 0.001432s | 0.001408s | 0.001374s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
