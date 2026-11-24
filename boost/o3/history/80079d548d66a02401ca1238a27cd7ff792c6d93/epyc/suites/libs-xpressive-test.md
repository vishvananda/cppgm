# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.732116 | 17.886909 | 14.071570 | 0.010532 | 0.013687 | 0.009676 |
| regress_u.test | RUN | 2.883134 | 18.328312 | 14.133887 | 0.010421 | 0.013423 | 0.008812 |
| c_traits.test | RUN | 2.694891 | 17.493754 | 13.449069 | 0.008141 | 0.011806 | 0.008028 |
| c_traits_u.test | RUN | 3.008728 | 18.157950 | 14.008513 | 0.009022 | 0.012518 | 0.008340 |
| test1.test | RUN | 1.027080 | 4.607851 | 4.256607 | 0.002731 | 0.003255 | 0.003055 |
| test2.test | RUN | 1.423115 | 6.471708 | 6.001961 | 0.003180 | 0.003019 | 0.003302 |
| test3.test | RUN | 1.415976 | 6.523715 | 6.123399 | 0.003113 | 0.003286 | 0.003044 |
| test4.test | RUN | 1.188320 | 5.435551 | 5.075857 | 0.003012 | 0.003260 | 0.003143 |
| test5.test | RUN | 1.266391 | 5.788786 | 5.421735 | 0.002751 | 0.003274 | 0.003134 |
| test6.test | RUN | 1.145754 | 4.853608 | 4.642119 | 0.003086 | 0.002852 | 0.003157 |
| test7.test | RUN | 1.137282 | 4.999228 | 4.685925 | 0.002907 | 0.003173 | 0.002871 |
| test8.test | RUN | 1.116966 | 4.804797 | 4.495723 | 0.002947 | 0.003272 | 0.003201 |
| test9.test | RUN | 1.205819 | 5.204444 | 5.122932 | 0.003006 | 0.002822 | 0.003072 |
| test10.test | RUN | 1.197192 | 4.988410 | 4.731448 | 0.002788 | 0.002830 | 0.003018 |
| test11.test | RUN | 1.127980 | 4.813831 | 4.748888 | 0.002993 | 0.003129 | 0.003033 |
| test1u.test | RUN | 1.054884 | 4.550468 | 4.091911 | 0.002754 | 0.003189 | 0.003165 |
| test2u.test | RUN | 1.415701 | 6.541718 | 6.376218 | 0.003209 | 0.003172 | 0.003189 |
| test3u.test | RUN | 1.443527 | 6.696401 | 6.475042 | 0.003221 | 0.003192 | 0.003158 |
| test4u.test | RUN | 1.230078 | 5.303110 | 5.077203 | 0.003157 | 0.003218 | 0.003233 |
| test5u.test | RUN | 1.307854 | 5.914454 | 5.746501 | 0.002944 | 0.003268 | 0.003146 |
| test6u.test | RUN | 1.219135 | 4.885939 | 4.826142 | 0.003149 | 0.003222 | 0.003196 |
| test7u.test | RUN | 1.184108 | 5.098225 | 4.922234 | 0.003207 | 0.003154 | 0.003062 |
| test8u.test | RUN | 1.130770 | 4.818107 | 4.566670 | 0.002706 | 0.003212 | 0.003117 |
| test9u.test | RUN | 1.233172 | 5.208971 | 5.152329 | 0.003154 | 0.003300 | 0.003181 |
| test10u.test | RUN | 1.217577 | 4.896581 | 4.770462 | 0.003141 | 0.003238 | 0.003196 |
| test11u.test | RUN | 1.187343 | 4.917490 | 4.957312 | 0.003257 | 0.003370 | 0.003132 |
| misc1.test | RUN | 2.118319 | 12.290639 | 10.601937 | 0.004245 | 0.004207 | 0.003946 |
| misc2.test | RUN | 2.166903 | 11.682893 | 10.223075 | 0.003438 | 0.003774 | 0.003653 |
| test_format.test | RUN | 2.227745 | 14.254276 | 11.557458 | 0.003327 | 0.002966 | 0.003288 |
| test_cycles.test | RUN | 0.992754 | 4.434281 | 3.864335 | 0.002950 | 0.003226 | 0.003291 |
| test_non_char.test | RUN | 1.823995 | 9.947185 | 8.722564 | 0.003232 | 0.003404 | 0.003250 |
| test_static.test | RUN | 0.940493 | 4.043161 | 3.417901 | 0.003180 | 0.003061 | 0.002750 |
| test_actions.test | RUN | 2.273454 | 12.058747 | 10.820116 | 0.004093 | 0.004431 | 0.004249 |
| test_assert.test | RUN | 1.320519 | 5.232766 | 4.994165 | 0.003387 | 0.003396 | 0.003333 |
| test_assert_with_placeholder.test | RUN | 1.246869 | 4.735862 | 4.569531 | 0.003188 | 0.003097 | 0.002924 |
| test_symbols.test | RUN | 2.385952 | 11.870891 | 12.092956 | 0.004061 | 0.004356 | 0.004469 |
| test_dynamic.test | RUN | 1.527506 | 7.999537 | 6.964966 | 0.003211 | 0.003450 | 0.003126 |
| test_dynamic_grammar.test | RUN | 1.563241 | 8.442295 | 7.127853 | 0.003386 | 0.003421 | 0.002897 |
| test_skip.test | RUN | 1.813663 | 8.822148 | 8.405791 | 0.003048 | 0.003036 | 0.003132 |
| multiple_defs.test | LINK | 2.970598 | 15.797546 | 13.914856 | — | — | — |
| test_basic_regex.test | COMPILE | 0.647350 | 1.311009 | 1.907845 | — | — | — |
| test_match_results.test | COMPILE | 0.437455 | 0.933759 | 1.210983 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.428671 | 0.904137 | 1.274534 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.661154 | 1.449973 | 1.910137 | — | — | — |
| test_regex_constants.test | COMPILE | 0.035380 | 0.064415 | 0.069533 | — | — | — |
| test_regex_error.test | COMPILE | 0.252405 | 0.494913 | 0.697292 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.441015 | 0.887387 | 1.264108 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.666155 | 1.464823 | 1.636331 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.428528 | 0.909910 | 1.239723 | — | — | — |
| test_regex_traits.test | COMPILE | 0.260127 | 0.493544 | 0.668795 | — | — | — |
| test_sub_match.test | COMPILE | 0.210010 | 0.399910 | 0.366570 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.108× | 1.105×, 1.110× | 1.003× |
| clang | 0.950× | 0.960×, 0.940× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.007002s | 0.010222s | 0.006622s | byte equality observed |
| c_traits_u.test | 3 | 0.007756s | 0.010678s | 0.007026s | byte equality observed |
| misc1.test | 8 | 0.002656s | 0.002551s | 0.002532s | byte equality observed |
| misc2.test | 8 | 0.002369s | 0.002232s | 0.002263s | byte equality observed |
| regress.test | 3 | 0.008885s | 0.011778s | 0.007615s | byte equality observed |
| regress_u.test | 3 | 0.009078s | 0.011690s | 0.008080s | byte equality observed |
| test1.test | 10 | 0.002063s | 0.002005s | 0.001990s | byte equality observed |
| test10.test | 10 | 0.002051s | 0.002012s | 0.001972s | byte equality observed |
| test10u.test | 10 | 0.002062s | 0.002004s | 0.002020s | byte equality observed |
| test11.test | 10 | 0.002010s | 0.001991s | 0.001982s | byte equality observed |
| test11u.test | 10 | 0.002020s | 0.002021s | 0.001986s | byte equality observed |
| test1u.test | 10 | 0.002054s | 0.002043s | 0.002034s | byte equality observed |
| test2.test | 10 | 0.002067s | 0.002058s | 0.002007s | byte equality observed |
| test2u.test | 10 | 0.002093s | 0.002101s | 0.002049s | byte equality observed |
| test3.test | 10 | 0.002055s | 0.002135s | 0.002036s | byte equality observed |
| test3u.test | 10 | 0.002086s | 0.002087s | 0.002054s | byte equality observed |
| test4.test | 10 | 0.002050s | 0.002028s | 0.002012s | byte equality observed |
| test4u.test | 10 | 0.002055s | 0.002050s | 0.002010s | byte equality observed |
| test5.test | 8 | 0.002068s | 0.002089s | 0.002020s | byte equality observed |
| test5u.test | 8 | 0.002089s | 0.002068s | 0.002043s | byte equality observed |
| test6.test | 10 | 0.002040s | 0.002046s | 0.002010s | byte equality observed |
| test6u.test | 10 | 0.002021s | 0.002046s | 0.001977s | byte equality observed |
| test7.test | 10 | 0.002034s | 0.002032s | 0.001979s | byte equality observed |
| test7u.test | 10 | 0.002044s | 0.002037s | 0.002020s | byte equality observed |
| test8.test | 6 | 0.002031s | 0.002018s | 0.001995s | byte equality observed |
| test8u.test | 7 | 0.002038s | 0.002030s | 0.002036s | byte equality observed |
| test9.test | 10 | 0.002016s | 0.002060s | 0.001993s | byte equality observed |
| test9u.test | 7 | 0.002043s | 0.002045s | 0.002024s | byte equality observed |
| test_actions.test | 6 | 0.002562s | 0.002556s | 0.002506s | byte equality observed |
| test_assert.test | 8 | 0.002147s | 0.002141s | 0.002090s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001996s | 0.001984s | 0.001937s | byte equality observed |
| test_cycles.test | 10 | 0.002066s | 0.002035s | 0.002016s | byte equality observed |
| test_dynamic.test | 10 | 0.002035s | 0.001999s | 0.002006s | byte equality observed |
| test_dynamic_grammar.test | 9 | 0.002171s | 0.002150s | 0.002141s | byte equality observed |
| test_format.test | 10 | 0.002134s | 0.002118s | 0.002064s | byte equality observed |
| test_non_char.test | 8 | 0.002136s | 0.002090s | 0.002039s | byte equality observed |
| test_skip.test | 10 | 0.002015s | 0.001968s | 0.001965s | byte equality observed |
| test_static.test | 8 | 0.001933s | 0.001926s | 0.001892s | byte equality observed |
| test_symbols.test | 9 | 0.002272s | 0.002259s | 0.002280s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
