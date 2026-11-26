# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.502084 | 16.831759 | 12.473479 | 0.008784 | 0.010228 | 0.007344 |
| regress_u.test | RUN | 2.669793 | 17.297539 | 12.596051 | 0.008911 | 0.010913 | 0.008586 |
| c_traits.test | RUN | 2.511377 | 16.660431 | 12.056326 | 0.007395 | 0.008854 | 0.007005 |
| c_traits_u.test | RUN | 2.707635 | 17.171250 | 12.702771 | 0.007742 | 0.009369 | 0.007567 |
| test1.test | RUN | 0.869916 | 4.102041 | 3.564534 | 0.002134 | 0.002115 | 0.002174 |
| test2.test | RUN | 1.190933 | 5.895516 | 5.357560 | 0.001905 | 0.002359 | 0.002173 |
| test3.test | RUN | 1.181142 | 5.972360 | 5.301594 | 0.001920 | 0.002238 | 0.002305 |
| test4.test | RUN | 1.027877 | 4.817010 | 4.370505 | 0.002166 | 0.002070 | 0.002232 |
| test5.test | RUN | 1.087589 | 5.249483 | 4.641736 | 0.002069 | 0.002126 | 0.002138 |
| test6.test | RUN | 0.975584 | 4.344051 | 3.889100 | 0.001877 | 0.002136 | 0.001981 |
| test7.test | RUN | 0.955863 | 4.512497 | 3.977682 | 0.002159 | 0.002258 | 0.001984 |
| test8.test | RUN | 0.942156 | 4.352027 | 3.833376 | 0.001643 | 0.002135 | 0.002237 |
| test9.test | RUN | 1.024236 | 4.748802 | 4.323353 | 0.002038 | 0.002284 | 0.002260 |
| test10.test | RUN | 0.996165 | 4.440542 | 3.994176 | 0.001934 | 0.002218 | 0.002136 |
| test11.test | RUN | 0.967270 | 4.344729 | 3.961507 | 0.002086 | 0.002143 | 0.001941 |
| test1u.test | RUN | 0.868888 | 4.098149 | 3.420520 | 0.001972 | 0.002047 | 0.002252 |
| test2u.test | RUN | 1.199904 | 6.114945 | 5.348846 | 0.002243 | 0.002222 | 0.002175 |
| test3u.test | RUN | 1.210597 | 6.294341 | 5.445698 | 0.002210 | 0.002308 | 0.002271 |
| test4u.test | RUN | 1.029425 | 4.811393 | 4.263232 | 0.002066 | 0.002146 | 0.002006 |
| test5u.test | RUN | 1.116897 | 5.365593 | 4.820439 | 0.001942 | 0.002081 | 0.002251 |
| test6u.test | RUN | 1.013228 | 4.470318 | 3.956834 | 0.002157 | 0.002050 | 0.002104 |
| test7u.test | RUN | 0.963394 | 4.678326 | 4.050191 | 0.002341 | 0.002118 | 0.002202 |
| test8u.test | RUN | 0.929638 | 4.318443 | 3.818074 | 0.002257 | 0.002133 | 0.002008 |
| test9u.test | RUN | 1.026752 | 4.684383 | 4.411852 | 0.001998 | 0.002096 | 0.002232 |
| test10u.test | RUN | 1.016130 | 4.416139 | 3.941657 | 0.002222 | 0.002141 | 0.002072 |
| test11u.test | RUN | 0.991918 | 4.447852 | 4.123017 | 0.002089 | 0.002121 | 0.002154 |
| misc1.test | RUN | 1.856051 | 11.520020 | 9.186153 | 0.002508 | 0.002679 | 0.002459 |
| misc2.test | RUN | 1.894029 | 10.887866 | 8.920573 | 0.002012 | 0.002713 | 0.002381 |
| test_format.test | RUN | 2.013658 | 13.639008 | 10.280623 | 0.002255 | 0.002284 | 0.002089 |
| test_cycles.test | RUN | 0.836609 | 3.914626 | 3.226520 | 0.002073 | 0.002310 | 0.002014 |
| test_non_char.test | RUN | 1.619038 | 9.336159 | 7.614436 | 0.002193 | 0.002217 | 0.002152 |
| test_static.test | RUN | 0.779940 | 3.647073 | 2.834909 | 0.002008 | 0.002150 | 0.001926 |
| test_actions.test | RUN | 1.971546 | 11.304351 | 9.247625 | 0.002637 | 0.002703 | 0.002531 |
| test_assert.test | RUN | 1.107490 | 4.776747 | 4.198218 | 0.002597 | 0.002296 | 0.002134 |
| test_assert_with_placeholder.test | RUN | 1.044735 | 4.311821 | 3.856595 | 0.002097 | 0.002332 | 0.001975 |
| test_symbols.test | RUN | 2.021028 | 11.039495 | 10.472943 | 0.002373 | 0.002824 | 0.002742 |
| test_dynamic.test | RUN | 1.297400 | 7.494023 | 5.998486 | 0.001953 | 0.002187 | 0.002229 |
| test_dynamic_grammar.test | RUN | 1.343692 | 7.956682 | 6.386926 | 0.002248 | 0.002294 | 0.002257 |
| test_skip.test | RUN | 1.559936 | 8.042358 | 7.364158 | 0.001968 | 0.002208 | 0.002065 |
| multiple_defs.test | LINK | 2.579932 | 14.670586 | 12.305360 | — | — | — |
| test_basic_regex.test | COMPILE | 0.508942 | 1.104980 | 1.524933 | — | — | — |
| test_match_results.test | COMPILE | 0.336952 | 0.744193 | 1.011462 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.341937 | 0.755047 | 1.041336 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.515501 | 1.223245 | 1.508921 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027954 | 0.048569 | 0.054596 | — | — | — |
| test_regex_error.test | COMPILE | 0.188457 | 0.404785 | 0.542982 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.346295 | 0.760654 | 0.974916 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.476513 | 1.237818 | 1.380550 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.334812 | 0.771103 | 0.973681 | — | — | — |
| test_regex_traits.test | COMPILE | 0.193659 | 0.406486 | 0.453394 | — | — | — |
| test_sub_match.test | COMPILE | 0.157204 | 0.325134 | 0.320634 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.090× | 1.092×, 1.088× | 1.010× |
| clang | 0.975× | 0.971×, 0.980× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004756s | 0.006486s | 0.004803s | byte equality observed |
| c_traits_u.test | 3 | 0.005266s | 0.006781s | 0.005077s | byte equality observed |
| misc1.test | 10 | 0.001531s | 0.001499s | 0.001502s | byte equality observed |
| misc2.test | 10 | 0.001349s | 0.001376s | 0.001353s | byte equality observed |
| regress.test | 3 | 0.005921s | 0.007188s | 0.005367s | byte equality observed |
| regress_u.test | 3 | 0.006024s | 0.007513s | 0.005800s | byte equality observed |
| test1.test | 10 | 0.001264s | 0.001293s | 0.001247s | byte equality observed |
| test10.test | 10 | 0.001282s | 0.001264s | 0.001237s | byte equality observed |
| test10u.test | 10 | 0.001284s | 0.001268s | 0.001255s | byte equality observed |
| test11.test | 10 | 0.001285s | 0.001256s | 0.001234s | byte equality observed |
| test11u.test | 10 | 0.001282s | 0.001264s | 0.001257s | byte equality observed |
| test1u.test | 10 | 0.001280s | 0.001280s | 0.001229s | byte equality observed |
| test2.test | 10 | 0.001299s | 0.001314s | 0.001291s | byte equality observed |
| test2u.test | 10 | 0.001307s | 0.001359s | 0.001290s | byte equality observed |
| test3.test | 10 | 0.001325s | 0.001321s | 0.001282s | byte equality observed |
| test3u.test | 10 | 0.001327s | 0.001335s | 0.001259s | byte equality observed |
| test4.test | 10 | 0.001297s | 0.001320s | 0.001266s | byte equality observed |
| test4u.test | 10 | 0.001292s | 0.001301s | 0.001277s | byte equality observed |
| test5.test | 10 | 0.001295s | 0.001301s | 0.001283s | byte equality observed |
| test5u.test | 10 | 0.001294s | 0.001321s | 0.001263s | byte equality observed |
| test6.test | 10 | 0.001301s | 0.001265s | 0.001265s | byte equality observed |
| test6u.test | 10 | 0.001262s | 0.001307s | 0.001265s | byte equality observed |
| test7.test | 10 | 0.001289s | 0.001268s | 0.001264s | byte equality observed |
| test7u.test | 10 | 0.001270s | 0.001295s | 0.001265s | byte equality observed |
| test8.test | 10 | 0.001270s | 0.001294s | 0.001246s | byte equality observed |
| test8u.test | 10 | 0.001286s | 0.001275s | 0.001226s | byte equality observed |
| test9.test | 10 | 0.001272s | 0.001317s | 0.001274s | byte equality observed |
| test9u.test | 10 | 0.001286s | 0.001289s | 0.001254s | byte equality observed |
| test_actions.test | 10 | 0.001496s | 0.001508s | 0.001455s | byte equality observed |
| test_assert.test | 10 | 0.001338s | 0.001307s | 0.001303s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001265s | 0.001284s | 0.001258s | byte equality observed |
| test_cycles.test | 10 | 0.001267s | 0.001290s | 0.001256s | byte equality observed |
| test_dynamic.test | 10 | 0.001292s | 0.001279s | 0.001285s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001332s | 0.001374s | 0.001340s | byte equality observed |
| test_format.test | 10 | 0.001344s | 0.001354s | 0.001310s | byte equality observed |
| test_non_char.test | 10 | 0.001328s | 0.001271s | 0.001266s | byte equality observed |
| test_skip.test | 10 | 0.001259s | 0.001270s | 0.001229s | byte equality observed |
| test_static.test | 10 | 0.001249s | 0.001255s | 0.001194s | byte equality observed |
| test_symbols.test | 10 | 0.001425s | 0.001424s | 0.001386s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
