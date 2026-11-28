# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.653961 | 17.338735 | 13.264478 | 0.009422 | 0.010890 | 0.008655 |
| regress_u.test | RUN | 2.815780 | 17.611311 | 13.440241 | 0.009841 | 0.010833 | 0.009087 |
| c_traits.test | RUN | 2.652244 | 16.995990 | 12.726143 | 0.007737 | 0.008821 | 0.007221 |
| c_traits_u.test | RUN | 2.865803 | 17.815093 | 13.260952 | 0.008438 | 0.009851 | 0.007824 |
| test1.test | RUN | 0.943209 | 4.231796 | 3.815579 | 0.002301 | 0.002525 | 0.002602 |
| test2.test | RUN | 1.274351 | 6.247050 | 5.617337 | 0.002273 | 0.002455 | 0.002561 |
| test3.test | RUN | 1.266200 | 6.131334 | 5.647232 | 0.002302 | 0.002616 | 0.002586 |
| test4.test | RUN | 1.093869 | 4.990583 | 4.596584 | 0.002263 | 0.002479 | 0.002466 |
| test5.test | RUN | 1.162830 | 5.444478 | 4.992707 | 0.002433 | 0.002356 | 0.002571 |
| test6.test | RUN | 1.048385 | 4.603424 | 4.185541 | 0.002231 | 0.002329 | 0.002394 |
| test7.test | RUN | 1.016093 | 4.698641 | 4.116646 | 0.002268 | 0.002076 | 0.002184 |
| test8.test | RUN | 1.010497 | 4.516458 | 3.898894 | 0.002301 | 0.002312 | 0.002281 |
| test9.test | RUN | 1.095365 | 4.909225 | 4.467294 | 0.002226 | 0.002414 | 0.002299 |
| test10.test | RUN | 1.038731 | 4.602986 | 4.117925 | 0.002221 | 0.002216 | 0.002312 |
| test11.test | RUN | 1.027009 | 4.450794 | 4.004401 | 0.002191 | 0.002393 | 0.002084 |
| test1u.test | RUN | 0.934997 | 4.198118 | 3.518855 | 0.002515 | 0.002349 | 0.002139 |
| test2u.test | RUN | 1.298686 | 6.247967 | 5.405991 | 0.002471 | 0.002279 | 0.002427 |
| test3u.test | RUN | 1.301147 | 6.398908 | 5.544196 | 0.002162 | 0.002490 | 0.002133 |
| test4u.test | RUN | 1.098457 | 4.974858 | 4.370393 | 0.002510 | 0.002491 | 0.002177 |
| test5u.test | RUN | 1.187945 | 5.530934 | 4.873865 | 0.002391 | 0.002511 | 0.002116 |
| test6u.test | RUN | 1.105165 | 4.573517 | 4.062704 | 0.002533 | 0.002409 | 0.002323 |
| test7u.test | RUN | 1.041132 | 4.824370 | 4.150583 | 0.002541 | 0.002315 | 0.002464 |
| test8u.test | RUN | 1.005527 | 4.464040 | 3.890859 | 0.002525 | 0.002450 | 0.002384 |
| test9u.test | RUN | 1.085853 | 4.823252 | 4.506110 | 0.002208 | 0.002352 | 0.002214 |
| test10u.test | RUN | 1.080504 | 4.510253 | 4.114637 | 0.002284 | 0.002502 | 0.002530 |
| test11u.test | RUN | 1.048844 | 4.561687 | 4.272696 | 0.002484 | 0.002287 | 0.002406 |
| misc1.test | RUN | 1.988747 | 11.721298 | 9.605432 | 0.002557 | 0.002850 | 0.002927 |
| misc2.test | RUN | 1.983673 | 11.137453 | 9.143444 | 0.002246 | 0.002636 | 0.002360 |
| test_format.test | RUN | 2.122032 | 13.822804 | 10.549286 | 0.002485 | 0.002380 | 0.002433 |
| test_cycles.test | RUN | 0.902091 | 4.081875 | 3.381998 | 0.002128 | 0.002235 | 0.002408 |
| test_non_char.test | RUN | 1.708980 | 9.617676 | 7.833341 | 0.002884 | 0.002427 | 0.002186 |
| test_static.test | RUN | 0.813406 | 3.684564 | 3.019476 | 0.002295 | 0.002433 | 0.002392 |
| test_actions.test | RUN | 2.092910 | 11.449872 | 9.658022 | 0.002735 | 0.002728 | 0.002819 |
| test_assert.test | RUN | 1.140216 | 4.773932 | 4.403995 | 0.002595 | 0.002372 | 0.002628 |
| test_assert_with_placeholder.test | RUN | 1.086407 | 4.365606 | 4.000335 | 0.002202 | 0.002211 | 0.002341 |
| test_symbols.test | RUN | 2.179034 | 11.128555 | 10.772352 | 0.002996 | 0.002898 | 0.002841 |
| test_dynamic.test | RUN | 1.355652 | 7.585418 | 6.279338 | 0.002489 | 0.002256 | 0.002425 |
| test_dynamic_grammar.test | RUN | 1.431117 | 8.132299 | 6.515041 | 0.002693 | 0.002424 | 0.002676 |
| test_skip.test | RUN | 1.664962 | 8.182184 | 7.595490 | 0.002456 | 0.002291 | 0.002068 |
| multiple_defs.test | LINK | 2.709574 | 14.869414 | 12.579472 | — | — | — |
| test_basic_regex.test | COMPILE | 0.535688 | 1.111884 | 1.536189 | — | — | — |
| test_match_results.test | COMPILE | 0.353318 | 0.759751 | 1.067476 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.362172 | 0.747671 | 1.029014 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.538761 | 1.240553 | 1.586993 | — | — | — |
| test_regex_constants.test | COMPILE | 0.029265 | 0.050333 | 0.055186 | — | — | — |
| test_regex_error.test | COMPILE | 0.200762 | 0.412613 | 0.562995 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.358778 | 0.751748 | 0.987212 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.515914 | 1.247459 | 1.454261 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.342269 | 0.756935 | 1.009319 | — | — | — |
| test_regex_traits.test | COMPILE | 0.205104 | 0.403629 | 0.507671 | — | — | — |
| test_sub_match.test | COMPILE | 0.169576 | 0.326349 | 0.382392 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.071× | 1.075×, 1.066× | 1.000× |
| clang | 0.972× | 0.970×, 0.974× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004840s | 0.006570s | 0.004753s | byte equality observed |
| c_traits_u.test | 3 | 0.005304s | 0.006719s | 0.005234s | byte equality observed |
| misc1.test | 10 | 0.001513s | 0.001516s | 0.001482s | byte equality observed |
| misc2.test | 10 | 0.001360s | 0.001396s | 0.001363s | byte equality observed |
| regress.test | 3 | 0.006034s | 0.007263s | 0.005487s | byte equality observed |
| regress_u.test | 3 | 0.006288s | 0.007571s | 0.005778s | byte equality observed |
| test1.test | 10 | 0.001246s | 0.001276s | 0.001252s | byte equality observed |
| test10.test | 10 | 0.001307s | 0.001255s | 0.001222s | byte equality observed |
| test10u.test | 10 | 0.001278s | 0.001287s | 0.001275s | byte equality observed |
| test11.test | 10 | 0.001290s | 0.001286s | 0.001258s | byte equality observed |
| test11u.test | 10 | 0.001294s | 0.001270s | 0.001275s | byte equality observed |
| test1u.test | 10 | 0.001300s | 0.001292s | 0.001237s | byte equality observed |
| test2.test | 10 | 0.001311s | 0.001324s | 0.001285s | byte equality observed |
| test2u.test | 10 | 0.001318s | 0.001330s | 0.001288s | byte equality observed |
| test3.test | 10 | 0.001305s | 0.001335s | 0.001299s | byte equality observed |
| test3u.test | 10 | 0.001323s | 0.001338s | 0.001301s | byte equality observed |
| test4.test | 10 | 0.001304s | 0.001309s | 0.001263s | byte equality observed |
| test4u.test | 10 | 0.001280s | 0.001297s | 0.001280s | byte equality observed |
| test5.test | 10 | 0.001303s | 0.001316s | 0.001246s | byte equality observed |
| test5u.test | 10 | 0.001311s | 0.001314s | 0.001283s | byte equality observed |
| test6.test | 10 | 0.001284s | 0.001293s | 0.001263s | byte equality observed |
| test6u.test | 10 | 0.001285s | 0.001288s | 0.001245s | byte equality observed |
| test7.test | 10 | 0.001281s | 0.001309s | 0.001234s | byte equality observed |
| test7u.test | 10 | 0.001283s | 0.001319s | 0.001246s | byte equality observed |
| test8.test | 10 | 0.001261s | 0.001278s | 0.001253s | byte equality observed |
| test8u.test | 10 | 0.001276s | 0.001280s | 0.001259s | byte equality observed |
| test9.test | 10 | 0.001274s | 0.001288s | 0.001267s | byte equality observed |
| test9u.test | 10 | 0.001322s | 0.001272s | 0.001256s | byte equality observed |
| test_actions.test | 10 | 0.001479s | 0.001521s | 0.001438s | byte equality observed |
| test_assert.test | 10 | 0.001337s | 0.001337s | 0.001325s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001265s | 0.001234s | 0.001246s | byte equality observed |
| test_cycles.test | 10 | 0.001295s | 0.001298s | 0.001237s | byte equality observed |
| test_dynamic.test | 10 | 0.001290s | 0.001277s | 0.001260s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001351s | 0.001322s | 0.001332s | byte equality observed |
| test_format.test | 10 | 0.001352s | 0.001329s | 0.001343s | byte equality observed |
| test_non_char.test | 10 | 0.001316s | 0.001302s | 0.001255s | byte equality observed |
| test_skip.test | 10 | 0.001296s | 0.001266s | 0.001251s | byte equality observed |
| test_static.test | 10 | 0.001260s | 0.001258s | 0.001247s | byte equality observed |
| test_symbols.test | 10 | 0.001469s | 0.001429s | 0.001412s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
