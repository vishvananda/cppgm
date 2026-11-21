# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.468407 | 17.158123 | 12.124294 | 0.008970 | 0.010526 | 0.007963 |
| regress_u.test | RUN | 2.670350 | 17.584902 | 12.183157 | 0.009097 | 0.011049 | 0.008348 |
| c_traits.test | RUN | 2.506219 | 16.907351 | 11.694573 | 0.007120 | 0.009017 | 0.006681 |
| c_traits_u.test | RUN | 2.681390 | 17.555397 | 12.082664 | 0.007799 | 0.009554 | 0.007261 |
| test1.test | RUN | 0.882147 | 4.233788 | 3.499395 | 0.002288 | 0.002606 | 0.002020 |
| test2.test | RUN | 1.221210 | 6.070878 | 5.043879 | 0.002077 | 0.002224 | 0.001892 |
| test3.test | RUN | 1.204085 | 6.018685 | 5.134201 | 0.002343 | 0.002285 | 0.002043 |
| test4.test | RUN | 1.042486 | 4.960757 | 4.185399 | 0.002314 | 0.002302 | 0.001856 |
| test5.test | RUN | 1.116086 | 5.353768 | 4.415403 | 0.002252 | 0.002350 | 0.001852 |
| test6.test | RUN | 0.974568 | 4.519319 | 3.724128 | 0.001920 | 0.002424 | 0.001892 |
| test7.test | RUN | 0.962402 | 4.650660 | 3.866569 | 0.001844 | 0.002311 | 0.001943 |
| test8.test | RUN | 0.955394 | 4.400145 | 3.766329 | 0.002148 | 0.002226 | 0.001880 |
| test9.test | RUN | 1.036405 | 4.859753 | 4.113826 | 0.002032 | 0.002428 | 0.001931 |
| test10.test | RUN | 1.016886 | 4.601251 | 3.826366 | 0.001844 | 0.002413 | 0.001796 |
| test11.test | RUN | 0.964025 | 4.455258 | 3.790008 | 0.002093 | 0.002316 | 0.001898 |
| test1u.test | RUN | 0.878833 | 4.144277 | 3.356607 | 0.001910 | 0.002186 | 0.002022 |
| test2u.test | RUN | 1.224130 | 6.249810 | 5.138131 | 0.002060 | 0.002327 | 0.001733 |
| test3u.test | RUN | 1.223491 | 6.403678 | 5.241228 | 0.002183 | 0.002459 | 0.001844 |
| test4u.test | RUN | 1.044717 | 4.932968 | 4.152461 | 0.002258 | 0.002307 | 0.001896 |
| test5u.test | RUN | 1.110920 | 5.442475 | 4.655134 | 0.001972 | 0.002394 | 0.001956 |
| test6u.test | RUN | 1.012785 | 4.571367 | 3.909694 | 0.002009 | 0.002357 | 0.001969 |
| test7u.test | RUN | 0.987232 | 4.768156 | 3.965019 | 0.002011 | 0.002394 | 0.002015 |
| test8u.test | RUN | 0.943529 | 4.461104 | 3.768296 | 0.002442 | 0.002324 | 0.001906 |
| test9u.test | RUN | 1.036558 | 4.792178 | 4.281199 | 0.002110 | 0.002463 | 0.001958 |
| test10u.test | RUN | 1.015904 | 4.524049 | 3.807232 | 0.002165 | 0.002239 | 0.001856 |
| test11u.test | RUN | 1.012094 | 4.564335 | 3.957855 | 0.002332 | 0.002356 | 0.001951 |
| misc1.test | RUN | 1.912777 | 11.682939 | 8.909525 | 0.002845 | 0.002759 | 0.002336 |
| misc2.test | RUN | 1.903443 | 11.040625 | 8.626266 | 0.002265 | 0.002636 | 0.002083 |
| test_format.test | RUN | 2.008626 | 13.589696 | 9.910351 | 0.002240 | 0.002462 | 0.001944 |
| test_cycles.test | RUN | 0.836600 | 4.042428 | 3.147953 | 0.001966 | 0.002202 | 0.001928 |
| test_non_char.test | RUN | 1.646920 | 9.524781 | 7.335417 | 0.002056 | 0.002260 | 0.001968 |
| test_static.test | RUN | 0.787602 | 3.675073 | 2.762599 | 0.002123 | 0.002281 | 0.001886 |
| test_actions.test | RUN | 2.021641 | 11.268926 | 8.947331 | 0.002415 | 0.002936 | 0.002135 |
| test_assert.test | RUN | 1.104633 | 4.808839 | 4.119678 | 0.002376 | 0.002285 | 0.001976 |
| test_assert_with_placeholder.test | RUN | 1.034479 | 4.307426 | 3.709098 | 0.002195 | 0.001984 | 0.001774 |
| test_symbols.test | RUN | 2.072394 | 10.985028 | 9.930378 | 0.002671 | 0.002704 | 0.002311 |
| test_dynamic.test | RUN | 1.297047 | 7.530673 | 6.047714 | 0.002073 | 0.002298 | 0.001997 |
| test_dynamic_grammar.test | RUN | 1.354742 | 8.022125 | 5.982106 | 0.002263 | 0.002366 | 0.001992 |
| test_skip.test | RUN | 1.596131 | 8.033160 | 7.063673 | 0.001990 | 0.002357 | 0.001943 |
| multiple_defs.test | LINK | 2.553563 | 14.511601 | 11.925564 | — | — | — |
| test_basic_regex.test | COMPILE | 0.520889 | 1.121862 | 1.441417 | — | — | — |
| test_match_results.test | COMPILE | 0.342235 | 0.760289 | 1.018164 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.346460 | 0.770045 | 1.014450 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.526248 | 1.233254 | 1.496736 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026092 | 0.050030 | 0.052254 | — | — | — |
| test_regex_error.test | COMPILE | 0.184941 | 0.412293 | 0.533725 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.335606 | 0.763049 | 0.962451 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.516754 | 1.228126 | 1.362341 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.314832 | 0.769104 | 0.867714 | — | — | — |
| test_regex_traits.test | COMPILE | 0.190770 | 0.415649 | 0.495051 | — | — | — |
| test_sub_match.test | COMPILE | 0.162784 | 0.332481 | 0.393007 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.087× | 1.089×, 1.084× | 1.006× |
| clang | 0.964× | 0.966×, 0.962× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004838s | 0.006344s | 0.004750s | byte equality observed |
| c_traits_u.test | 3 | 0.005180s | 0.006767s | 0.005155s | byte equality observed |
| misc1.test | 10 | 0.001519s | 0.001478s | 0.001443s | byte equality observed |
| misc2.test | 10 | 0.001384s | 0.001380s | 0.001330s | byte equality observed |
| regress.test | 3 | 0.005809s | 0.007204s | 0.005388s | byte equality observed |
| regress_u.test | 3 | 0.006095s | 0.007553s | 0.005741s | byte equality observed |
| test1.test | 10 | 0.001269s | 0.001286s | 0.001202s | byte equality observed |
| test10.test | 10 | 0.001246s | 0.001272s | 0.001250s | byte equality observed |
| test10u.test | 10 | 0.001266s | 0.001297s | 0.001203s | byte equality observed |
| test11.test | 10 | 0.001247s | 0.001286s | 0.001216s | byte equality observed |
| test11u.test | 10 | 0.001275s | 0.001264s | 0.001221s | byte equality observed |
| test1u.test | 10 | 0.001294s | 0.001298s | 0.001242s | byte equality observed |
| test2.test | 10 | 0.001299s | 0.001298s | 0.001253s | byte equality observed |
| test2u.test | 9 | 0.001335s | 0.001302s | 0.001268s | byte equality observed |
| test3.test | 10 | 0.001309s | 0.001329s | 0.001279s | byte equality observed |
| test3u.test | 10 | 0.001312s | 0.001307s | 0.001262s | byte equality observed |
| test4.test | 10 | 0.001269s | 0.001295s | 0.001242s | byte equality observed |
| test4u.test | 10 | 0.001294s | 0.001276s | 0.001250s | byte equality observed |
| test5.test | 10 | 0.001277s | 0.001322s | 0.001251s | byte equality observed |
| test5u.test | 10 | 0.001291s | 0.001329s | 0.001244s | byte equality observed |
| test6.test | 10 | 0.001274s | 0.001277s | 0.001233s | byte equality observed |
| test6u.test | 10 | 0.001285s | 0.001294s | 0.001234s | byte equality observed |
| test7.test | 10 | 0.001280s | 0.001288s | 0.001207s | byte equality observed |
| test7u.test | 10 | 0.001293s | 0.001291s | 0.001243s | byte equality observed |
| test8.test | 10 | 0.001292s | 0.001258s | 0.001209s | byte equality observed |
| test8u.test | 10 | 0.001297s | 0.001256s | 0.001237s | byte equality observed |
| test9.test | 10 | 0.001282s | 0.001283s | 0.001225s | byte equality observed |
| test9u.test | 10 | 0.001288s | 0.001279s | 0.001260s | byte equality observed |
| test_actions.test | 10 | 0.001474s | 0.001481s | 0.001407s | byte equality observed |
| test_assert.test | 10 | 0.001345s | 0.001355s | 0.001325s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001270s | 0.001236s | 0.001238s | byte equality observed |
| test_cycles.test | 10 | 0.001294s | 0.001259s | 0.001246s | byte equality observed |
| test_dynamic.test | 10 | 0.001302s | 0.001281s | 0.001263s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001322s | 0.001331s | 0.001289s | byte equality observed |
| test_format.test | 10 | 0.001315s | 0.001327s | 0.001299s | byte equality observed |
| test_non_char.test | 10 | 0.001276s | 0.001299s | 0.001269s | byte equality observed |
| test_skip.test | 10 | 0.001278s | 0.001273s | 0.001218s | byte equality observed |
| test_static.test | 10 | 0.001229s | 0.001251s | 0.001224s | byte equality observed |
| test_symbols.test | 10 | 0.001424s | 0.001429s | 0.001391s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
