# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.532262 | 16.610474 | 12.159451 | 0.008820 | 0.009532 | 0.007907 |
| regress_u.test | RUN | 2.705946 | 17.016420 | 12.276044 | 0.008834 | 0.010473 | 0.008279 |
| c_traits.test | RUN | 2.549381 | 16.213697 | 11.776957 | 0.007035 | 0.008793 | 0.006749 |
| c_traits_u.test | RUN | 2.736635 | 16.927219 | 12.197498 | 0.007798 | 0.009597 | 0.007305 |
| test1.test | RUN | 0.885468 | 4.041080 | 3.525845 | 0.002363 | 0.002154 | 0.002017 |
| test2.test | RUN | 1.204518 | 5.842900 | 5.103749 | 0.002322 | 0.002106 | 0.002101 |
| test3.test | RUN | 1.195021 | 5.799328 | 5.254201 | 0.002010 | 0.002089 | 0.002200 |
| test4.test | RUN | 1.043114 | 4.748036 | 4.288998 | 0.002058 | 0.002144 | 0.002055 |
| test5.test | RUN | 1.105240 | 5.106842 | 4.636929 | 0.002174 | 0.002273 | 0.001938 |
| test6.test | RUN | 1.004946 | 4.293268 | 3.932671 | 0.001932 | 0.002103 | 0.002003 |
| test7.test | RUN | 0.970166 | 4.429792 | 3.947553 | 0.002240 | 0.002087 | 0.002019 |
| test8.test | RUN | 0.947452 | 4.294567 | 3.763587 | 0.001966 | 0.002196 | 0.002131 |
| test9.test | RUN | 1.043158 | 4.638295 | 4.371297 | 0.002144 | 0.002168 | 0.002048 |
| test10.test | RUN | 1.028838 | 4.400065 | 3.981691 | 0.002124 | 0.001886 | 0.002061 |
| test11.test | RUN | 0.986079 | 4.261741 | 3.970220 | 0.001857 | 0.002120 | 0.001952 |
| test1u.test | RUN | 0.883730 | 4.017718 | 3.404982 | 0.002377 | 0.001972 | 0.002018 |
| test2u.test | RUN | 1.238147 | 5.903735 | 5.352218 | 0.002305 | 0.002119 | 0.002115 |
| test3u.test | RUN | 1.238137 | 6.071785 | 5.540871 | 0.002153 | 0.002151 | 0.002168 |
| test4u.test | RUN | 1.051874 | 4.696180 | 4.288178 | 0.002289 | 0.002053 | 0.001959 |
| test5u.test | RUN | 1.133073 | 5.265833 | 4.813523 | 0.002029 | 0.002068 | 0.002067 |
| test6u.test | RUN | 1.030854 | 4.380220 | 4.016828 | 0.002222 | 0.001982 | 0.002027 |
| test7u.test | RUN | 0.992427 | 4.581038 | 4.121924 | 0.002263 | 0.002115 | 0.002047 |
| test8u.test | RUN | 0.951832 | 4.265250 | 3.845862 | 0.002155 | 0.002301 | 0.002144 |
| test9u.test | RUN | 1.047028 | 4.612528 | 4.339106 | 0.002131 | 0.002154 | 0.002133 |
| test10u.test | RUN | 1.030516 | 4.356364 | 3.918377 | 0.002202 | 0.002072 | 0.001884 |
| test11u.test | RUN | 1.018211 | 4.386222 | 4.056880 | 0.002105 | 0.002058 | 0.001940 |
| misc1.test | RUN | 1.915009 | 11.310496 | 9.010670 | 0.002622 | 0.002453 | 0.002408 |
| misc2.test | RUN | 1.896263 | 10.817617 | 8.721971 | 0.002397 | 0.002346 | 0.002081 |
| test_format.test | RUN | 2.023930 | 13.358106 | 10.123980 | 0.002458 | 0.002234 | 0.002175 |
| test_cycles.test | RUN | 0.844508 | 3.992157 | 3.125043 | 0.002119 | 0.002072 | 0.002016 |
| test_non_char.test | RUN | 1.655778 | 9.178660 | 7.473636 | 0.002255 | 0.002040 | 0.002057 |
| test_static.test | RUN | 0.782402 | 3.557825 | 2.799075 | 0.002246 | 0.001985 | 0.002145 |
| test_actions.test | RUN | 2.000143 | 10.887484 | 9.174256 | 0.002663 | 0.002500 | 0.002470 |
| test_assert.test | RUN | 1.104058 | 4.618551 | 4.157831 | 0.001960 | 0.001972 | 0.002356 |
| test_assert_with_placeholder.test | RUN | 1.026000 | 4.161553 | 3.805570 | 0.001886 | 0.002160 | 0.002013 |
| test_symbols.test | RUN | 2.041988 | 10.536804 | 10.357941 | 0.002335 | 0.002400 | 0.002585 |
| test_dynamic.test | RUN | 1.310520 | 7.280387 | 6.057912 | 0.002194 | 0.002056 | 0.002172 |
| test_dynamic_grammar.test | RUN | 1.363114 | 7.696174 | 6.229473 | 0.002431 | 0.002189 | 0.002234 |
| test_skip.test | RUN | 1.562225 | 7.715629 | 7.115211 | 0.002151 | 0.001996 | 0.002363 |
| multiple_defs.test | LINK | 2.600682 | 14.073583 | 12.061227 | — | — | — |
| test_basic_regex.test | COMPILE | 0.518163 | 1.089760 | 1.539464 | — | — | — |
| test_match_results.test | COMPILE | 0.343441 | 0.735220 | 0.978010 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.343643 | 0.739692 | 0.976023 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.526066 | 1.186109 | 1.497345 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026405 | 0.046774 | 0.052691 | — | — | — |
| test_regex_error.test | COMPILE | 0.182467 | 0.394376 | 0.528386 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.352456 | 0.736542 | 0.960071 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.499102 | 1.184422 | 1.461279 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.343442 | 0.740982 | 0.923117 | — | — | — |
| test_regex_traits.test | COMPILE | 0.200990 | 0.399704 | 0.505645 | — | — | — |
| test_sub_match.test | COMPILE | 0.164051 | 0.323877 | 0.370124 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.089× | 1.088×, 1.091× | 1.005× |
| clang | 0.968× | 0.972×, 0.964× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004780s | 0.006363s | 0.004748s | byte equality observed |
| c_traits_u.test | 3 | 0.005183s | 0.006760s | 0.005134s | byte equality observed |
| misc1.test | 10 | 0.001485s | 0.001467s | 0.001414s | byte equality observed |
| misc2.test | 10 | 0.001355s | 0.001365s | 0.001333s | byte equality observed |
| regress.test | 3 | 0.005822s | 0.007135s | 0.005447s | byte equality observed |
| regress_u.test | 3 | 0.006026s | 0.007515s | 0.005693s | byte equality observed |
| test1.test | 10 | 0.001257s | 0.001262s | 0.001190s | byte equality observed |
| test10.test | 10 | 0.001256s | 0.001268s | 0.001210s | byte equality observed |
| test10u.test | 10 | 0.001250s | 0.001263s | 0.001224s | byte equality observed |
| test11.test | 10 | 0.001256s | 0.001257s | 0.001229s | byte equality observed |
| test11u.test | 10 | 0.001235s | 0.001247s | 0.001208s | byte equality observed |
| test1u.test | 10 | 0.001242s | 0.001248s | 0.001207s | byte equality observed |
| test2.test | 10 | 0.001271s | 0.001302s | 0.001240s | byte equality observed |
| test2u.test | 10 | 0.001276s | 0.001298s | 0.001254s | byte equality observed |
| test3.test | 8 | 0.001297s | 0.001344s | 0.001268s | byte equality observed |
| test3u.test | 8 | 0.001303s | 0.001305s | 0.001255s | byte equality observed |
| test4.test | 10 | 0.001270s | 0.001277s | 0.001223s | byte equality observed |
| test4u.test | 10 | 0.001278s | 0.001276s | 0.001234s | byte equality observed |
| test5.test | 10 | 0.001289s | 0.001262s | 0.001235s | byte equality observed |
| test5u.test | 10 | 0.001298s | 0.001279s | 0.001249s | byte equality observed |
| test6.test | 10 | 0.001249s | 0.001238s | 0.001200s | byte equality observed |
| test6u.test | 10 | 0.001252s | 0.001247s | 0.001227s | byte equality observed |
| test7.test | 10 | 0.001243s | 0.001253s | 0.001236s | byte equality observed |
| test7u.test | 10 | 0.001256s | 0.001242s | 0.001259s | byte equality observed |
| test8.test | 10 | 0.001257s | 0.001234s | 0.001251s | byte equality observed |
| test8u.test | 10 | 0.001258s | 0.001243s | 0.001229s | byte equality observed |
| test9.test | 10 | 0.001257s | 0.001244s | 0.001232s | byte equality observed |
| test9u.test | 10 | 0.001256s | 0.001254s | 0.001220s | byte equality observed |
| test_actions.test | 10 | 0.001479s | 0.001506s | 0.001395s | byte equality observed |
| test_assert.test | 10 | 0.001323s | 0.001323s | 0.001301s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001241s | 0.001248s | 0.001190s | byte equality observed |
| test_cycles.test | 10 | 0.001268s | 0.001254s | 0.001210s | byte equality observed |
| test_dynamic.test | 10 | 0.001237s | 0.001248s | 0.001220s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001305s | 0.001297s | 0.001268s | byte equality observed |
| test_format.test | 10 | 0.001301s | 0.001299s | 0.001274s | byte equality observed |
| test_non_char.test | 10 | 0.001271s | 0.001245s | 0.001240s | byte equality observed |
| test_skip.test | 10 | 0.001234s | 0.001234s | 0.001217s | byte equality observed |
| test_static.test | 10 | 0.001238s | 0.001218s | 0.001224s | byte equality observed |
| test_symbols.test | 10 | 0.001413s | 0.001393s | 0.001379s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
