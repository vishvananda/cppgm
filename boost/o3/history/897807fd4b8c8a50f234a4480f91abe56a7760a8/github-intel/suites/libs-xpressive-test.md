# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.454484 | 16.580814 | 12.284809 | 0.008523 | 0.010132 | 0.008005 |
| regress_u.test | RUN | 2.610304 | 16.906311 | 12.297670 | 0.008635 | 0.010703 | 0.008494 |
| c_traits.test | RUN | 2.442129 | 16.129407 | 11.795541 | 0.006963 | 0.008832 | 0.006801 |
| c_traits_u.test | RUN | 2.647745 | 16.965171 | 12.368651 | 0.007277 | 0.009463 | 0.007292 |
| test1.test | RUN | 0.857803 | 4.016236 | 3.504613 | 0.002200 | 0.002161 | 0.002204 |
| test2.test | RUN | 1.166270 | 5.867574 | 5.167092 | 0.002075 | 0.002266 | 0.002022 |
| test3.test | RUN | 1.163130 | 5.842532 | 5.215391 | 0.001904 | 0.002124 | 0.002178 |
| test4.test | RUN | 1.001319 | 4.777711 | 4.256109 | 0.002114 | 0.002175 | 0.002144 |
| test5.test | RUN | 1.074420 | 5.206109 | 4.510690 | 0.001791 | 0.002003 | 0.001501 |
| test6.test | RUN | 0.958775 | 4.379628 | 3.839286 | 0.002352 | 0.002022 | 0.002110 |
| test7.test | RUN | 0.936908 | 4.512140 | 3.915533 | 0.001891 | 0.002060 | 0.002006 |
| test8.test | RUN | 0.921735 | 4.330328 | 3.834252 | 0.001766 | 0.002094 | 0.002017 |
| test9.test | RUN | 1.005613 | 4.712171 | 4.240153 | 0.001842 | 0.002551 | 0.002032 |
| test10.test | RUN | 0.973630 | 4.455343 | 3.887439 | 0.001877 | 0.002061 | 0.002061 |
| test11.test | RUN | 0.951835 | 4.296379 | 3.919216 | 0.001814 | 0.002094 | 0.001951 |
| test1u.test | RUN | 0.862073 | 4.051575 | 3.411906 | 0.002240 | 0.002089 | 0.002032 |
| test2u.test | RUN | 1.193675 | 6.044455 | 5.384029 | 0.002035 | 0.002095 | 0.002065 |
| test3u.test | RUN | 1.200287 | 6.204073 | 5.520700 | 0.001884 | 0.002192 | 0.002197 |
| test4u.test | RUN | 1.011194 | 4.797418 | 4.327818 | 0.002040 | 0.002079 | 0.002113 |
| test5u.test | RUN | 1.092800 | 5.315054 | 4.853484 | 0.002168 | 0.002213 | 0.002308 |
| test6u.test | RUN | 0.995679 | 4.458357 | 4.078549 | 0.002058 | 0.002282 | 0.002133 |
| test7u.test | RUN | 0.970345 | 4.678471 | 4.092053 | 0.002249 | 0.002288 | 0.002135 |
| test8u.test | RUN | 0.917974 | 4.327881 | 3.839446 | 0.001949 | 0.002294 | 0.001736 |
| test9u.test | RUN | 1.005921 | 4.693467 | 4.371704 | 0.001874 | 0.002205 | 0.002206 |
| test10u.test | RUN | 0.993139 | 4.418912 | 4.036220 | 0.002083 | 0.002097 | 0.002137 |
| test11u.test | RUN | 0.982901 | 4.468980 | 4.129549 | 0.001982 | 0.002291 | 0.002070 |
| misc1.test | RUN | 1.818614 | 11.565137 | 9.181391 | 0.002499 | 0.002469 | 0.002464 |
| misc2.test | RUN | 1.835308 | 10.945741 | 8.844327 | 0.002463 | 0.002472 | 0.002372 |
| test_format.test | RUN | 1.966100 | 13.506967 | 10.139954 | 0.002353 | 0.002040 | 0.002194 |
| test_cycles.test | RUN | 0.810016 | 3.997344 | 3.281167 | 0.001913 | 0.002210 | 0.002044 |
| test_non_char.test | RUN | 1.616467 | 9.342057 | 7.404581 | 0.001956 | 0.002110 | 0.002098 |
| test_static.test | RUN | 0.764958 | 3.576486 | 2.892928 | 0.001901 | 0.002022 | 0.002091 |
| test_actions.test | RUN | 1.960952 | 10.861296 | 9.122369 | 0.002297 | 0.002588 | 0.002630 |
| test_assert.test | RUN | 1.068505 | 4.633605 | 4.195473 | 0.001962 | 0.002186 | 0.002235 |
| test_assert_with_placeholder.test | RUN | 0.997985 | 4.187637 | 3.760899 | 0.001819 | 0.002080 | 0.002348 |
| test_symbols.test | RUN | 2.004643 | 10.602699 | 10.302225 | 0.002452 | 0.002542 | 0.002670 |
| test_dynamic.test | RUN | 1.273617 | 7.331132 | 5.878861 | 0.001917 | 0.001954 | 0.002014 |
| test_dynamic_grammar.test | RUN | 1.346147 | 7.792617 | 6.187930 | 0.001881 | 0.002356 | 0.002335 |
| test_skip.test | RUN | 1.522985 | 7.744683 | 7.203980 | 0.001831 | 0.001958 | 0.001898 |
| multiple_defs.test | LINK | 2.506464 | 14.393833 | 12.102661 | — | — | — |
| test_basic_regex.test | COMPILE | 0.504436 | 1.095049 | 1.496867 | — | — | — |
| test_match_results.test | COMPILE | 0.336093 | 0.747947 | 1.024829 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.342817 | 0.745316 | 1.035727 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.510898 | 1.207780 | 1.501600 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026351 | 0.047929 | 0.054496 | — | — | — |
| test_regex_error.test | COMPILE | 0.180616 | 0.397724 | 0.541056 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.336375 | 0.749178 | 0.985158 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.465483 | 1.237993 | 1.319635 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.317725 | 0.760687 | 0.960106 | — | — | — |
| test_regex_traits.test | COMPILE | 0.187665 | 0.410734 | 0.500157 | — | — | — |
| test_sub_match.test | COMPILE | 0.153897 | 0.330635 | 0.340223 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.091× | 1.093×, 1.088× | 1.008× |
| clang | 0.972× | 0.977×, 0.967× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004764s | 0.006489s | 0.004818s | byte equality observed |
| c_traits_u.test | 3 | 0.005186s | 0.006724s | 0.005088s | byte equality observed |
| misc1.test | 10 | 0.001492s | 0.001472s | 0.001421s | byte equality observed |
| misc2.test | 10 | 0.001366s | 0.001354s | 0.001347s | byte equality observed |
| regress.test | 3 | 0.005819s | 0.007194s | 0.005349s | byte equality observed |
| regress_u.test | 3 | 0.006105s | 0.007539s | 0.005812s | byte equality observed |
| test1.test | 10 | 0.001267s | 0.001245s | 0.001203s | byte equality observed |
| test10.test | 10 | 0.001225s | 0.001258s | 0.001236s | byte equality observed |
| test10u.test | 10 | 0.001248s | 0.001235s | 0.001261s | byte equality observed |
| test11.test | 10 | 0.001242s | 0.001268s | 0.001245s | byte equality observed |
| test11u.test | 8 | 0.001260s | 0.001284s | 0.001243s | byte equality observed |
| test1u.test | 9 | 0.001269s | 0.001266s | 0.001263s | byte equality observed |
| test2.test | 10 | 0.001294s | 0.001295s | 0.001259s | byte equality observed |
| test2u.test | 10 | 0.001282s | 0.001306s | 0.001251s | byte equality observed |
| test3.test | 10 | 0.001294s | 0.001323s | 0.001265s | byte equality observed |
| test3u.test | 10 | 0.001307s | 0.001322s | 0.001280s | byte equality observed |
| test4.test | 10 | 0.001287s | 0.001251s | 0.001248s | byte equality observed |
| test4u.test | 10 | 0.001277s | 0.001306s | 0.001257s | byte equality observed |
| test5.test | 10 | 0.001293s | 0.001274s | 0.001238s | byte equality observed |
| test5u.test | 10 | 0.001281s | 0.001301s | 0.001278s | byte equality observed |
| test6.test | 10 | 0.001265s | 0.001266s | 0.001249s | byte equality observed |
| test6u.test | 10 | 0.001274s | 0.001278s | 0.001234s | byte equality observed |
| test7.test | 10 | 0.001261s | 0.001281s | 0.001259s | byte equality observed |
| test7u.test | 10 | 0.001271s | 0.001275s | 0.001227s | byte equality observed |
| test8.test | 10 | 0.001272s | 0.001233s | 0.001241s | byte equality observed |
| test8u.test | 10 | 0.001265s | 0.001248s | 0.001209s | byte equality observed |
| test9.test | 10 | 0.001246s | 0.001268s | 0.001226s | byte equality observed |
| test9u.test | 10 | 0.001270s | 0.001288s | 0.001231s | byte equality observed |
| test_actions.test | 10 | 0.001474s | 0.001495s | 0.001471s | byte equality observed |
| test_assert.test | 10 | 0.001299s | 0.001312s | 0.001309s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001257s | 0.001221s | 0.001241s | byte equality observed |
| test_cycles.test | 10 | 0.001256s | 0.001273s | 0.001259s | byte equality observed |
| test_dynamic.test | 10 | 0.001279s | 0.001255s | 0.001282s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001312s | 0.001344s | 0.001280s | byte equality observed |
| test_format.test | 10 | 0.001344s | 0.001343s | 0.001270s | byte equality observed |
| test_non_char.test | 10 | 0.001296s | 0.001296s | 0.001262s | byte equality observed |
| test_skip.test | 10 | 0.001254s | 0.001234s | 0.001226s | byte equality observed |
| test_static.test | 10 | 0.001219s | 0.001251s | 0.001209s | byte equality observed |
| test_symbols.test | 10 | 0.001430s | 0.001404s | 0.001386s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
