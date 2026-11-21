# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.752160 | 18.528730 | 14.363169 | 0.010696 | 0.014075 | 0.009673 |
| regress_u.test | RUN | 2.938795 | 18.739741 | 14.225681 | 0.010767 | 0.013574 | 0.009145 |
| c_traits.test | RUN | 2.756239 | 18.102913 | 13.595212 | 0.008323 | 0.011349 | 0.007876 |
| c_traits_u.test | RUN | 2.997293 | 18.681447 | 14.187860 | 0.009065 | 0.012643 | 0.008662 |
| test1.test | RUN | 1.086561 | 4.707761 | 4.237076 | 0.003194 | 0.003209 | 0.003131 |
| test2.test | RUN | 1.435151 | 6.566608 | 6.081977 | 0.003492 | 0.003511 | 0.003282 |
| test3.test | RUN | 1.406566 | 6.719643 | 6.284363 | 0.003311 | 0.003371 | 0.003165 |
| test4.test | RUN | 1.226862 | 5.391704 | 5.190700 | 0.003133 | 0.003347 | 0.002999 |
| test5.test | RUN | 1.306365 | 5.921254 | 5.641454 | 0.003185 | 0.003389 | 0.002850 |
| test6.test | RUN | 1.194880 | 4.964803 | 4.698115 | 0.003123 | 0.003268 | 0.002760 |
| test7.test | RUN | 1.183337 | 5.106638 | 4.747677 | 0.003233 | 0.003493 | 0.003204 |
| test8.test | RUN | 1.191804 | 4.891708 | 4.588789 | 0.003170 | 0.003364 | 0.003098 |
| test9.test | RUN | 1.288412 | 5.328118 | 5.107447 | 0.003196 | 0.003524 | 0.003247 |
| test10.test | RUN | 1.238968 | 5.023753 | 4.773760 | 0.003069 | 0.003307 | 0.002639 |
| test11.test | RUN | 1.198891 | 4.915976 | 4.786752 | 0.003082 | 0.003344 | 0.003186 |
| test1u.test | RUN | 1.134642 | 4.656002 | 4.168245 | 0.003091 | 0.003232 | 0.003237 |
| test2u.test | RUN | 1.518350 | 6.887713 | 6.336797 | 0.003277 | 0.003431 | 0.003457 |
| test3u.test | RUN | 1.449812 | 7.068282 | 6.572126 | 0.003005 | 0.003409 | 0.003258 |
| test4u.test | RUN | 1.248998 | 5.355770 | 5.157661 | 0.003187 | 0.003411 | 0.003443 |
| test5u.test | RUN | 1.323983 | 6.006442 | 5.798214 | 0.003185 | 0.003423 | 0.003247 |
| test6u.test | RUN | 1.225893 | 5.029348 | 4.945466 | 0.003241 | 0.003271 | 0.003376 |
| test7u.test | RUN | 1.195968 | 5.269989 | 4.986687 | 0.002965 | 0.003503 | 0.003383 |
| test8u.test | RUN | 1.143281 | 4.971835 | 4.741298 | 0.003066 | 0.003218 | 0.003271 |
| test9u.test | RUN | 1.248882 | 5.328426 | 5.349882 | 0.003198 | 0.003323 | 0.003254 |
| test10u.test | RUN | 1.240762 | 5.171294 | 4.911028 | 0.003110 | 0.003481 | 0.003286 |
| test11u.test | RUN | 1.205985 | 5.103096 | 5.028825 | 0.003133 | 0.003155 | 0.003370 |
| misc1.test | RUN | 2.195105 | 12.751691 | 10.833584 | 0.004043 | 0.004338 | 0.004021 |
| misc2.test | RUN | 2.169466 | 12.210580 | 10.624897 | 0.003726 | 0.003738 | 0.003351 |
| test_format.test | RUN | 2.267146 | 14.750224 | 11.932874 | 0.003323 | 0.003609 | 0.003259 |
| test_cycles.test | RUN | 1.036638 | 4.447977 | 3.954809 | 0.003213 | 0.003232 | 0.003314 |
| test_non_char.test | RUN | 1.901234 | 10.420195 | 9.016226 | 0.002702 | 0.003504 | 0.003268 |
| test_static.test | RUN | 0.950298 | 4.230109 | 3.485810 | 0.003339 | 0.003005 | 0.003212 |
| test_actions.test | RUN | 2.397228 | 12.630132 | 11.139353 | 0.004298 | 0.004453 | 0.004359 |
| test_assert.test | RUN | 1.375202 | 5.593948 | 5.145069 | 0.003543 | 0.003714 | 0.003430 |
| test_assert_with_placeholder.test | RUN | 1.269356 | 5.152185 | 4.746737 | 0.003350 | 0.003192 | 0.003176 |
| test_symbols.test | RUN | 2.468287 | 12.209822 | 12.536641 | 0.004175 | 0.004481 | 0.004621 |
| test_dynamic.test | RUN | 1.532792 | 8.242534 | 7.045201 | 0.003209 | 0.003454 | 0.003238 |
| test_dynamic_grammar.test | RUN | 1.617650 | 8.833272 | 7.473849 | 0.003218 | 0.003479 | 0.003451 |
| test_skip.test | RUN | 1.887921 | 8.906020 | 8.710427 | 0.003251 | 0.003282 | 0.003189 |
| multiple_defs.test | LINK | 3.028447 | 16.424534 | 14.506301 | — | — | — |
| test_basic_regex.test | COMPILE | 0.663482 | 1.337349 | 1.979834 | — | — | — |
| test_match_results.test | COMPILE | 0.441972 | 0.927406 | 1.284561 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.456839 | 0.944749 | 1.365758 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.665218 | 1.505595 | 1.954837 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037479 | 0.064929 | 0.067537 | — | — | — |
| test_regex_error.test | COMPILE | 0.242760 | 0.504146 | 0.709163 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.445057 | 0.932221 | 1.259238 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.689327 | 1.496985 | 1.841247 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.430267 | 0.923637 | 1.146046 | — | — | — |
| test_regex_traits.test | COMPILE | 0.261601 | 0.512262 | 0.683569 | — | — | — |
| test_sub_match.test | COMPILE | 0.209011 | 0.401456 | 0.554514 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.119× | 1.121×, 1.117× | 0.991× |
| clang | 0.962× | 0.960×, 0.964× | 1.039× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.006972s | 0.010110s | 0.006557s | byte equality observed |
| c_traits_u.test | 3 | 0.007511s | 0.010690s | 0.007079s | byte equality observed |
| misc1.test | 9 | 0.002627s | 0.002499s | 0.002548s | byte equality observed |
| misc2.test | 9 | 0.002314s | 0.002183s | 0.002266s | byte equality observed |
| regress.test | 3 | 0.008946s | 0.011828s | 0.007907s | byte equality observed |
| regress_u.test | 3 | 0.008940s | 0.011835s | 0.008118s | byte equality observed |
| test1.test | 7 | 0.002070s | 0.001991s | 0.002022s | byte equality observed |
| test10.test | 10 | 0.002010s | 0.001931s | 0.001964s | byte equality observed |
| test10u.test | 8 | 0.002016s | 0.001940s | 0.001951s | byte equality observed |
| test11.test | 9 | 0.002004s | 0.001945s | 0.001967s | byte equality observed |
| test11u.test | 10 | 0.002004s | 0.001974s | 0.001963s | byte equality observed |
| test1u.test | 10 | 0.002001s | 0.001969s | 0.001947s | byte equality observed |
| test2.test | 8 | 0.002037s | 0.002105s | 0.002075s | byte equality observed |
| test2u.test | 9 | 0.002021s | 0.002116s | 0.002064s | byte equality observed |
| test3.test | 8 | 0.002051s | 0.002108s | 0.002037s | byte equality observed |
| test3u.test | 8 | 0.002034s | 0.002102s | 0.002044s | byte equality observed |
| test4.test | 9 | 0.002018s | 0.001969s | 0.001994s | byte equality observed |
| test4u.test | 9 | 0.002001s | 0.002027s | 0.002010s | byte equality observed |
| test5.test | 10 | 0.002025s | 0.002048s | 0.002039s | byte equality observed |
| test5u.test | 10 | 0.001983s | 0.002054s | 0.002029s | byte equality observed |
| test6.test | 10 | 0.002014s | 0.002009s | 0.002005s | byte equality observed |
| test6u.test | 10 | 0.002035s | 0.002041s | 0.001962s | byte equality observed |
| test7.test | 10 | 0.001998s | 0.002041s | 0.001972s | byte equality observed |
| test7u.test | 10 | 0.002021s | 0.002050s | 0.001990s | byte equality observed |
| test8.test | 10 | 0.001976s | 0.002005s | 0.001957s | byte equality observed |
| test8u.test | 10 | 0.001991s | 0.001999s | 0.001969s | byte equality observed |
| test9.test | 10 | 0.002026s | 0.002027s | 0.001973s | byte equality observed |
| test9u.test | 10 | 0.002032s | 0.002002s | 0.001996s | byte equality observed |
| test_actions.test | 9 | 0.002555s | 0.002548s | 0.002539s | byte equality observed |
| test_assert.test | 9 | 0.002113s | 0.002110s | 0.002113s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002000s | 0.001958s | 0.001966s | byte equality observed |
| test_cycles.test | 10 | 0.002001s | 0.001967s | 0.001968s | byte equality observed |
| test_dynamic.test | 10 | 0.001978s | 0.001975s | 0.001983s | byte equality observed |
| test_dynamic_grammar.test | 9 | 0.002129s | 0.002075s | 0.002098s | byte equality observed |
| test_format.test | 10 | 0.002037s | 0.002020s | 0.002023s | byte equality observed |
| test_non_char.test | 10 | 0.002084s | 0.002029s | 0.002020s | byte equality observed |
| test_skip.test | 10 | 0.001967s | 0.001945s | 0.001931s | byte equality observed |
| test_static.test | 9 | 0.001910s | 0.001782s | 0.001875s | byte equality observed |
| test_symbols.test | 8 | 0.002367s | 0.002228s | 0.002287s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
