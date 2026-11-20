# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.466426 | 17.122037 | 12.490673 | 0.008568 | 0.010452 | 0.007945 |
| regress_u.test | RUN | 2.641403 | 17.522427 | 12.609600 | 0.008793 | 0.010648 | 0.008394 |
| c_traits.test | RUN | 2.458994 | 16.838578 | 11.899134 | 0.006878 | 0.009078 | 0.006868 |
| c_traits_u.test | RUN | 2.664766 | 17.449849 | 12.469155 | 0.007365 | 0.009392 | 0.007315 |
| test1.test | RUN | 0.868280 | 4.216676 | 3.524465 | 0.002028 | 0.002254 | 0.002041 |
| test2.test | RUN | 1.176319 | 6.055000 | 5.249580 | 0.001900 | 0.002216 | 0.001999 |
| test3.test | RUN | 1.180129 | 6.051257 | 5.281907 | 0.001960 | 0.002127 | 0.002168 |
| test4.test | RUN | 1.027697 | 4.903622 | 4.325870 | 0.002082 | 0.002305 | 0.002118 |
| test5.test | RUN | 1.091832 | 5.292167 | 4.599390 | 0.001976 | 0.002218 | 0.002118 |
| test6.test | RUN | 0.978068 | 4.434742 | 3.852060 | 0.001825 | 0.002260 | 0.002127 |
| test7.test | RUN | 0.938134 | 4.580850 | 3.977178 | 0.002360 | 0.002188 | 0.002143 |
| test8.test | RUN | 0.933715 | 4.395374 | 3.872131 | 0.001984 | 0.002232 | 0.002064 |
| test9.test | RUN | 1.017954 | 4.803829 | 4.303789 | 0.002114 | 0.002231 | 0.002013 |
| test10.test | RUN | 1.000985 | 4.535505 | 3.996542 | 0.001910 | 0.002116 | 0.002204 |
| test11.test | RUN | 0.955922 | 4.382484 | 3.944738 | 0.001921 | 0.002244 | 0.002018 |
| test1u.test | RUN | 0.867571 | 4.122575 | 3.395158 | 0.002132 | 0.002157 | 0.002185 |
| test2u.test | RUN | 1.212208 | 6.178218 | 5.361387 | 0.002230 | 0.002406 | 0.002179 |
| test3u.test | RUN | 1.220014 | 6.311146 | 5.546977 | 0.002061 | 0.002271 | 0.002123 |
| test4u.test | RUN | 1.041152 | 4.937460 | 4.397207 | 0.002145 | 0.002466 | 0.002192 |
| test5u.test | RUN | 1.110675 | 5.464376 | 4.940577 | 0.001944 | 0.002310 | 0.002317 |
| test6u.test | RUN | 1.019321 | 4.558520 | 4.139388 | 0.002137 | 0.002264 | 0.002106 |
| test7u.test | RUN | 0.990059 | 4.751280 | 4.168476 | 0.002324 | 0.002392 | 0.002196 |
| test8u.test | RUN | 0.946146 | 4.445215 | 3.866549 | 0.002007 | 0.002435 | 0.002059 |
| test9u.test | RUN | 1.014235 | 4.803712 | 4.368694 | 0.001964 | 0.002146 | 0.002191 |
| test10u.test | RUN | 1.016750 | 4.530347 | 4.021876 | 0.002206 | 0.002204 | 0.002017 |
| test11u.test | RUN | 1.010454 | 4.548530 | 4.143580 | 0.002068 | 0.002345 | 0.002042 |
| misc1.test | RUN | 1.870019 | 11.721569 | 9.136822 | 0.002596 | 0.002706 | 0.002415 |
| misc2.test | RUN | 1.874118 | 10.979046 | 8.752546 | 0.002262 | 0.002563 | 0.002131 |
| test_format.test | RUN | 2.008658 | 13.668985 | 9.972579 | 0.002304 | 0.002389 | 0.002135 |
| test_cycles.test | RUN | 0.835253 | 4.017739 | 3.257664 | 0.001932 | 0.002253 | 0.002020 |
| test_non_char.test | RUN | 1.636753 | 9.531587 | 7.429134 | 0.002185 | 0.002420 | 0.002046 |
| test_static.test | RUN | 0.788874 | 3.647931 | 2.884364 | 0.001986 | 0.002093 | 0.001853 |
| test_actions.test | RUN | 2.023518 | 11.210587 | 9.074311 | 0.002556 | 0.002407 | 0.002625 |
| test_assert.test | RUN | 1.083932 | 4.767260 | 4.219943 | 0.002588 | 0.002250 | 0.002071 |
| test_assert_with_placeholder.test | RUN | 1.024773 | 4.353120 | 3.741530 | 0.002055 | 0.002220 | 0.001891 |
| test_symbols.test | RUN | 2.065841 | 10.994934 | 10.203394 | 0.002550 | 0.002617 | 0.002622 |
| test_dynamic.test | RUN | 1.300399 | 7.428228 | 5.906214 | 0.002475 | 0.002301 | 0.002100 |
| test_dynamic_grammar.test | RUN | 1.352967 | 7.969236 | 6.300437 | 0.002180 | 0.002258 | 0.002140 |
| test_skip.test | RUN | 1.559050 | 7.946257 | 7.195360 | 0.002276 | 0.002228 | 0.001914 |
| multiple_defs.test | LINK | 2.544203 | 14.585622 | 12.094569 | — | — | — |
| test_basic_regex.test | COMPILE | 0.514039 | 1.108651 | 1.500594 | — | — | — |
| test_match_results.test | COMPILE | 0.338817 | 0.755927 | 1.014698 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.343550 | 0.754373 | 1.007427 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.526697 | 1.227193 | 1.510011 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026591 | 0.049223 | 0.053005 | — | — | — |
| test_regex_error.test | COMPILE | 0.182947 | 0.408039 | 0.540803 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.337748 | 0.762393 | 0.960644 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.493278 | 1.247851 | 1.395739 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.301014 | 0.768006 | 0.959907 | — | — | — |
| test_regex_traits.test | COMPILE | 0.190237 | 0.410849 | 0.456955 | — | — | — |
| test_sub_match.test | COMPILE | 0.160637 | 0.327941 | 0.352315 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.086× | 1.088×, 1.084× | 1.004× |
| clang | 0.968× | 0.966×, 0.970× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004787s | 0.006389s | 0.004867s | byte equality observed |
| c_traits_u.test | 3 | 0.005251s | 0.006664s | 0.005000s | byte equality observed |
| misc1.test | 10 | 0.001524s | 0.001490s | 0.001462s | byte equality observed |
| misc2.test | 10 | 0.001362s | 0.001345s | 0.001327s | byte equality observed |
| regress.test | 3 | 0.005863s | 0.007235s | 0.005458s | byte equality observed |
| regress_u.test | 3 | 0.006096s | 0.007349s | 0.005605s | byte equality observed |
| test1.test | 10 | 0.001293s | 0.001285s | 0.001237s | byte equality observed |
| test10.test | 10 | 0.001287s | 0.001240s | 0.001229s | byte equality observed |
| test10u.test | 10 | 0.001266s | 0.001248s | 0.001237s | byte equality observed |
| test11.test | 10 | 0.001260s | 0.001247s | 0.001256s | byte equality observed |
| test11u.test | 10 | 0.001275s | 0.001277s | 0.001237s | byte equality observed |
| test1u.test | 10 | 0.001273s | 0.001300s | 0.001262s | byte equality observed |
| test2.test | 10 | 0.001306s | 0.001313s | 0.001263s | byte equality observed |
| test2u.test | 10 | 0.001319s | 0.001320s | 0.001283s | byte equality observed |
| test3.test | 10 | 0.001307s | 0.001286s | 0.001272s | byte equality observed |
| test3u.test | 10 | 0.001314s | 0.001313s | 0.001281s | byte equality observed |
| test4.test | 10 | 0.001308s | 0.001284s | 0.001261s | byte equality observed |
| test4u.test | 10 | 0.001292s | 0.001312s | 0.001262s | byte equality observed |
| test5.test | 10 | 0.001295s | 0.001316s | 0.001274s | byte equality observed |
| test5u.test | 10 | 0.001306s | 0.001303s | 0.001273s | byte equality observed |
| test6.test | 10 | 0.001274s | 0.001266s | 0.001241s | byte equality observed |
| test6u.test | 10 | 0.001270s | 0.001266s | 0.001267s | byte equality observed |
| test7.test | 10 | 0.001280s | 0.001279s | 0.001253s | byte equality observed |
| test7u.test | 10 | 0.001275s | 0.001265s | 0.001266s | byte equality observed |
| test8.test | 10 | 0.001267s | 0.001268s | 0.001244s | byte equality observed |
| test8u.test | 10 | 0.001271s | 0.001270s | 0.001252s | byte equality observed |
| test9.test | 10 | 0.001264s | 0.001292s | 0.001248s | byte equality observed |
| test9u.test | 10 | 0.001279s | 0.001272s | 0.001261s | byte equality observed |
| test_actions.test | 10 | 0.001477s | 0.001475s | 0.001435s | byte equality observed |
| test_assert.test | 10 | 0.001341s | 0.001327s | 0.001330s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001274s | 0.001257s | 0.001228s | byte equality observed |
| test_cycles.test | 10 | 0.001283s | 0.001294s | 0.001258s | byte equality observed |
| test_dynamic.test | 10 | 0.001274s | 0.001250s | 0.001227s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001344s | 0.001307s | 0.001300s | byte equality observed |
| test_format.test | 10 | 0.001335s | 0.001316s | 0.001288s | byte equality observed |
| test_non_char.test | 10 | 0.001297s | 0.001294s | 0.001282s | byte equality observed |
| test_skip.test | 10 | 0.001259s | 0.001271s | 0.001251s | byte equality observed |
| test_static.test | 10 | 0.001245s | 0.001256s | 0.001229s | byte equality observed |
| test_symbols.test | 10 | 0.001422s | 0.001418s | 0.001388s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
