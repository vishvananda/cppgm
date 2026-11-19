# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.358813 | 22.545535 | 16.353869 | 0.012140 | 0.014128 | 0.011163 |
| regress_u.test | RUN | 3.598120 | 22.907476 | 16.321230 | 0.012266 | 0.014430 | 0.011480 |
| c_traits.test | RUN | 3.364423 | 21.835187 | 15.920909 | 0.009591 | 0.011858 | 0.009581 |
| c_traits_u.test | RUN | 3.633864 | 22.635410 | 16.189070 | 0.010710 | 0.012944 | 0.009912 |
| test1.test | RUN | 1.191523 | 5.502347 | 4.754722 | 0.002731 | 0.002993 | 0.002893 |
| test2.test | RUN | 1.605017 | 7.994435 | 6.911137 | 0.002833 | 0.003072 | 0.002849 |
| test3.test | RUN | 1.600137 | 8.017047 | 7.031763 | 0.002668 | 0.002979 | 0.002843 |
| test4.test | RUN | 1.385698 | 6.552650 | 5.705967 | 0.002934 | 0.003080 | 0.002852 |
| test5.test | RUN | 1.485511 | 7.052264 | 6.187720 | 0.002870 | 0.003057 | 0.002853 |
| test6.test | RUN | 1.346537 | 5.980860 | 5.216507 | 0.002603 | 0.002979 | 0.002824 |
| test7.test | RUN | 1.290898 | 6.144154 | 5.264505 | 0.002554 | 0.003103 | 0.002870 |
| test8.test | RUN | 1.282981 | 5.969003 | 5.080529 | 0.002549 | 0.002868 | 0.002877 |
| test9.test | RUN | 1.404506 | 6.417502 | 5.827262 | 0.002930 | 0.002978 | 0.002647 |
| test10.test | RUN | 1.383379 | 6.072154 | 5.406766 | 0.002702 | 0.002877 | 0.002512 |
| test11.test | RUN | 1.307350 | 5.816577 | 5.272666 | 0.002908 | 0.002943 | 0.002404 |
| test1u.test | RUN | 1.192320 | 5.560039 | 4.621420 | 0.003062 | 0.002954 | 0.002828 |
| test2u.test | RUN | 1.656168 | 8.247829 | 7.105892 | 0.002921 | 0.003059 | 0.002691 |
| test3u.test | RUN | 1.661445 | 8.405052 | 7.251094 | 0.002872 | 0.003001 | 0.002968 |
| test4u.test | RUN | 1.412745 | 6.538692 | 5.647229 | 0.002803 | 0.003036 | 0.002714 |
| test5u.test | RUN | 1.515435 | 7.291243 | 6.314394 | 0.002699 | 0.002922 | 0.002809 |
| test6u.test | RUN | 1.383649 | 6.104283 | 5.303734 | 0.002797 | 0.003048 | 0.002849 |
| test7u.test | RUN | 1.334282 | 6.322847 | 5.419255 | 0.002987 | 0.002946 | 0.002785 |
| test8u.test | RUN | 1.290893 | 5.934811 | 5.057758 | 0.002977 | 0.003017 | 0.002906 |
| test9u.test | RUN | 1.393268 | 6.437792 | 5.774668 | 0.002758 | 0.003030 | 0.003186 |
| test10u.test | RUN | 1.363906 | 6.061591 | 5.284186 | 0.002859 | 0.002979 | 0.002916 |
| test11u.test | RUN | 1.384152 | 6.045947 | 5.513317 | 0.002890 | 0.003012 | 0.002896 |
| misc1.test | RUN | 2.537155 | 15.328394 | 12.061489 | 0.003350 | 0.003649 | 0.003268 |
| misc2.test | RUN | 2.521513 | 14.464562 | 11.769639 | 0.003030 | 0.003184 | 0.003118 |
| test_format.test | RUN | 2.671824 | 17.962071 | 13.495590 | 0.002949 | 0.003149 | 0.002860 |
| test_cycles.test | RUN | 1.144766 | 5.335458 | 4.343292 | 0.002686 | 0.002931 | 0.003075 |
| test_non_char.test | RUN | 2.200080 | 12.503208 | 10.001112 | 0.002702 | 0.003097 | 0.002874 |
| test_static.test | RUN | 1.058356 | 4.899479 | 3.856041 | 0.002880 | 0.002820 | 0.002806 |
| test_actions.test | RUN | 2.697891 | 14.650669 | 12.113327 | 0.003608 | 0.003629 | 0.003345 |
| test_assert.test | RUN | 1.480786 | 6.276279 | 5.569247 | 0.003049 | 0.003084 | 0.002922 |
| test_assert_with_placeholder.test | RUN | 1.388376 | 5.731228 | 5.016851 | 0.002821 | 0.002780 | 0.002745 |
| test_symbols.test | RUN | 2.735689 | 14.203920 | 13.619085 | 0.003725 | 0.003480 | 0.003475 |
| test_dynamic.test | RUN | 1.765804 | 9.825644 | 7.920857 | 0.002789 | 0.002765 | 0.002790 |
| test_dynamic_grammar.test | RUN | 1.817766 | 10.475074 | 8.356500 | 0.002910 | 0.003194 | 0.003038 |
| test_skip.test | RUN | 2.124471 | 10.570582 | 9.518688 | 0.002821 | 0.002836 | 0.002673 |
| multiple_defs.test | LINK | 3.459626 | 18.918441 | 15.918189 | — | — | — |
| test_basic_regex.test | COMPILE | 0.702438 | 1.527136 | 1.988900 | — | — | — |
| test_match_results.test | COMPILE | 0.461626 | 1.041563 | 1.280465 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.466062 | 1.014316 | 1.320074 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.708166 | 1.648588 | 2.018680 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037016 | 0.067491 | 0.068944 | — | — | — |
| test_regex_error.test | COMPILE | 0.256052 | 0.558604 | 0.702878 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.464061 | 1.008905 | 1.323798 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.706754 | 1.628640 | 1.743036 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.451049 | 1.040638 | 1.325942 | — | — | — |
| test_regex_traits.test | COMPILE | 0.268429 | 0.552410 | 0.666615 | — | — | — |
| test_sub_match.test | COMPILE | 0.222446 | 0.378345 | 0.530045 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.064× | 1.072×, 1.057× | 1.016× |
| clang | 0.963× | 0.948×, 0.978× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.008626s | 0.010786s | 0.008390s | byte equality observed |
| c_traits_u.test | 2 | 0.009215s | 0.011482s | 0.008830s | byte equality observed |
| misc1.test | 8 | 0.002486s | 0.002382s | 0.002425s | byte equality observed |
| misc2.test | 9 | 0.002248s | 0.002176s | 0.002158s | byte equality observed |
| regress.test | 2 | 0.011155s | 0.012771s | 0.010364s | byte equality observed |
| regress_u.test | 2 | 0.011317s | 0.013036s | 0.010834s | byte equality observed |
| test1.test | 10 | 0.002028s | 0.002041s | 0.002000s | byte equality observed |
| test10.test | 10 | 0.002033s | 0.002026s | 0.001954s | byte equality observed |
| test10u.test | 10 | 0.002041s | 0.001966s | 0.001933s | byte equality observed |
| test11.test | 10 | 0.002016s | 0.001999s | 0.001960s | byte equality observed |
| test11u.test | 10 | 0.002018s | 0.002021s | 0.001940s | byte equality observed |
| test1u.test | 10 | 0.002027s | 0.002032s | 0.001980s | byte equality observed |
| test2.test | 6 | 0.002066s | 0.002129s | 0.002058s | byte equality observed |
| test2u.test | 7 | 0.002113s | 0.002084s | 0.002067s | byte equality observed |
| test3.test | 10 | 0.002082s | 0.002117s | 0.002007s | byte equality observed |
| test3u.test | 9 | 0.002080s | 0.002083s | 0.002067s | byte equality observed |
| test4.test | 9 | 0.002064s | 0.002063s | 0.002006s | byte equality observed |
| test4u.test | 10 | 0.002046s | 0.002031s | 0.002005s | byte equality observed |
| test5.test | 10 | 0.002075s | 0.002051s | 0.002010s | byte equality observed |
| test5u.test | 10 | 0.002065s | 0.002106s | 0.002046s | byte equality observed |
| test6.test | 10 | 0.002024s | 0.002016s | 0.002022s | byte equality observed |
| test6u.test | 10 | 0.002062s | 0.002039s | 0.001939s | byte equality observed |
| test7.test | 10 | 0.002026s | 0.002053s | 0.002005s | byte equality observed |
| test7u.test | 10 | 0.002030s | 0.002056s | 0.001995s | byte equality observed |
| test8.test | 10 | 0.001997s | 0.001984s | 0.001980s | byte equality observed |
| test8u.test | 10 | 0.002038s | 0.001977s | 0.001972s | byte equality observed |
| test9.test | 10 | 0.002028s | 0.002061s | 0.001959s | byte equality observed |
| test9u.test | 10 | 0.002045s | 0.002057s | 0.001957s | byte equality observed |
| test_actions.test | 9 | 0.002395s | 0.002400s | 0.002356s | byte equality observed |
| test_assert.test | 10 | 0.002109s | 0.002063s | 0.002048s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.002025s | 0.002004s | 0.001953s | byte equality observed |
| test_cycles.test | 10 | 0.002052s | 0.002052s | 0.001979s | byte equality observed |
| test_dynamic.test | 10 | 0.002034s | 0.001986s | 0.001980s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002149s | 0.002139s | 0.002083s | byte equality observed |
| test_format.test | 8 | 0.002108s | 0.002115s | 0.002077s | byte equality observed |
| test_non_char.test | 10 | 0.002069s | 0.002047s | 0.002016s | byte equality observed |
| test_skip.test | 10 | 0.002024s | 0.002006s | 0.001959s | byte equality observed |
| test_static.test | 10 | 0.001896s | 0.001892s | 0.001888s | byte equality observed |
| test_symbols.test | 9 | 0.002146s | 0.002106s | 0.002019s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
