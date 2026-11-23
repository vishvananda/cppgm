# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.481699 | 16.633379 | 12.196099 | 0.008545 | 0.010257 | 0.007531 |
| regress_u.test | RUN | 2.617203 | 16.887826 | 12.494099 | 0.008624 | 0.010467 | 0.008446 |
| c_traits.test | RUN | 2.460051 | 16.281062 | 11.971933 | 0.006779 | 0.008862 | 0.006886 |
| c_traits_u.test | RUN | 2.669173 | 17.027388 | 12.319304 | 0.007388 | 0.009364 | 0.007189 |
| test1.test | RUN | 0.853742 | 4.012502 | 3.544396 | 0.002229 | 0.002055 | 0.002044 |
| test2.test | RUN | 1.165717 | 5.776700 | 5.126022 | 0.001878 | 0.002205 | 0.001815 |
| test3.test | RUN | 1.160402 | 5.880320 | 5.263768 | 0.002056 | 0.002061 | 0.002066 |
| test4.test | RUN | 1.005670 | 4.796115 | 4.279548 | 0.002156 | 0.002190 | 0.001932 |
| test5.test | RUN | 1.082456 | 5.200645 | 4.499242 | 0.001925 | 0.002095 | 0.001903 |
| test6.test | RUN | 0.961277 | 4.338263 | 3.820872 | 0.001862 | 0.002134 | 0.002055 |
| test7.test | RUN | 0.935898 | 4.465166 | 3.932723 | 0.001962 | 0.002160 | 0.002024 |
| test8.test | RUN | 0.931676 | 4.277816 | 3.828512 | 0.001797 | 0.002124 | 0.001930 |
| test9.test | RUN | 1.009703 | 4.690968 | 4.184073 | 0.001993 | 0.002035 | 0.001830 |
| test10.test | RUN | 0.999616 | 4.408434 | 3.875180 | 0.001757 | 0.001994 | 0.001603 |
| test11.test | RUN | 0.959121 | 4.295237 | 3.898687 | 0.001869 | 0.002177 | 0.001948 |
| test1u.test | RUN | 0.868004 | 4.017241 | 3.405601 | 0.002224 | 0.002396 | 0.001997 |
| test2u.test | RUN | 1.197654 | 6.014729 | 5.201572 | 0.002269 | 0.002241 | 0.002130 |
| test3u.test | RUN | 1.214360 | 6.204376 | 5.353990 | 0.001967 | 0.002219 | 0.002149 |
| test4u.test | RUN | 1.023707 | 4.713587 | 4.188391 | 0.001980 | 0.002143 | 0.001957 |
| test5u.test | RUN | 1.105862 | 5.218836 | 4.715304 | 0.001906 | 0.002387 | 0.002093 |
| test6u.test | RUN | 1.006157 | 4.415451 | 3.918290 | 0.001987 | 0.002076 | 0.002100 |
| test7u.test | RUN | 0.966401 | 4.618476 | 4.006785 | 0.002584 | 0.002032 | 0.001928 |
| test8u.test | RUN | 0.937995 | 4.279898 | 3.763071 | 0.001925 | 0.002084 | 0.001972 |
| test9u.test | RUN | 1.007252 | 4.573574 | 4.298506 | 0.001852 | 0.002006 | 0.001954 |
| test10u.test | RUN | 1.001968 | 4.356856 | 3.887284 | 0.001930 | 0.002194 | 0.001869 |
| test11u.test | RUN | 0.985429 | 4.426956 | 4.037724 | 0.002119 | 0.002080 | 0.001946 |
| misc1.test | RUN | 1.862657 | 11.464802 | 9.012335 | 0.002502 | 0.002540 | 0.002488 |
| misc2.test | RUN | 1.843533 | 10.674904 | 8.760716 | 0.002265 | 0.002283 | 0.002266 |
| test_format.test | RUN | 1.992890 | 13.268960 | 10.083311 | 0.002090 | 0.002189 | 0.002015 |
| test_cycles.test | RUN | 0.818508 | 3.932926 | 3.165374 | 0.001843 | 0.002042 | 0.001910 |
| test_non_char.test | RUN | 1.621998 | 9.279275 | 7.511704 | 0.002108 | 0.002116 | 0.002071 |
| test_static.test | RUN | 0.756645 | 3.583215 | 2.809342 | 0.002103 | 0.002074 | 0.002068 |
| test_actions.test | RUN | 1.971219 | 10.850007 | 9.167069 | 0.002431 | 0.002575 | 0.002581 |
| test_assert.test | RUN | 1.087027 | 4.654642 | 4.142993 | 0.002035 | 0.002129 | 0.002307 |
| test_assert_with_placeholder.test | RUN | 0.995629 | 4.185839 | 3.777207 | 0.002198 | 0.001983 | 0.001951 |
| test_symbols.test | RUN | 2.032211 | 10.649722 | 10.289386 | 0.002330 | 0.002552 | 0.002536 |
| test_dynamic.test | RUN | 1.290955 | 7.330884 | 5.836812 | 0.002376 | 0.002030 | 0.001953 |
| test_dynamic_grammar.test | RUN | 1.330602 | 7.731406 | 6.221619 | 0.002137 | 0.002142 | 0.002224 |
| test_skip.test | RUN | 1.550826 | 7.761637 | 7.137754 | 0.002041 | 0.001997 | 0.002133 |
| multiple_defs.test | LINK | 2.525447 | 14.210639 | 11.825388 | — | — | — |
| test_basic_regex.test | COMPILE | 0.506288 | 1.073114 | 1.497911 | — | — | — |
| test_match_results.test | COMPILE | 0.344264 | 0.737416 | 0.964825 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.341274 | 0.719550 | 0.991479 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.517665 | 1.213019 | 1.459233 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026544 | 0.047101 | 0.051661 | — | — | — |
| test_regex_error.test | COMPILE | 0.172003 | 0.397776 | 0.516787 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.333755 | 0.717473 | 0.965504 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.464338 | 1.194402 | 1.423649 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.324994 | 0.749900 | 0.957583 | — | — | — |
| test_regex_traits.test | COMPILE | 0.185559 | 0.398272 | 0.367507 | — | — | — |
| test_sub_match.test | COMPILE | 0.155922 | 0.322163 | 0.348640 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.087× | 1.086×, 1.089× | 1.003× |
| clang | 0.966× | 0.970×, 0.962× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004848s | 0.006441s | 0.004796s | byte equality observed |
| c_traits_u.test | 3 | 0.005236s | 0.006811s | 0.005034s | byte equality observed |
| misc1.test | 10 | 0.001512s | 0.001518s | 0.001512s | byte equality observed |
| misc2.test | 10 | 0.001412s | 0.001378s | 0.001313s | byte equality observed |
| regress.test | 3 | 0.005914s | 0.007232s | 0.005390s | byte equality observed |
| regress_u.test | 3 | 0.005983s | 0.007337s | 0.005636s | byte equality observed |
| test1.test | 10 | 0.001300s | 0.001317s | 0.001284s | byte equality observed |
| test10.test | 10 | 0.001288s | 0.001308s | 0.001246s | byte equality observed |
| test10u.test | 10 | 0.001272s | 0.001246s | 0.001266s | byte equality observed |
| test11.test | 10 | 0.001288s | 0.001281s | 0.001239s | byte equality observed |
| test11u.test | 10 | 0.001302s | 0.001278s | 0.001217s | byte equality observed |
| test1u.test | 10 | 0.001299s | 0.001308s | 0.001259s | byte equality observed |
| test2.test | 10 | 0.001340s | 0.001337s | 0.001284s | byte equality observed |
| test2u.test | 10 | 0.001326s | 0.001331s | 0.001281s | byte equality observed |
| test3.test | 10 | 0.001305s | 0.001310s | 0.001287s | byte equality observed |
| test3u.test | 10 | 0.001306s | 0.001314s | 0.001304s | byte equality observed |
| test4.test | 10 | 0.001278s | 0.001296s | 0.001243s | byte equality observed |
| test4u.test | 10 | 0.001286s | 0.001287s | 0.001260s | byte equality observed |
| test5.test | 10 | 0.001281s | 0.001297s | 0.001269s | byte equality observed |
| test5u.test | 10 | 0.001310s | 0.001318s | 0.001270s | byte equality observed |
| test6.test | 10 | 0.001321s | 0.001291s | 0.001257s | byte equality observed |
| test6u.test | 10 | 0.001309s | 0.001302s | 0.001241s | byte equality observed |
| test7.test | 10 | 0.001303s | 0.001308s | 0.001240s | byte equality observed |
| test7u.test | 10 | 0.001302s | 0.001316s | 0.001229s | byte equality observed |
| test8.test | 10 | 0.001275s | 0.001302s | 0.001233s | byte equality observed |
| test8u.test | 9 | 0.001272s | 0.001281s | 0.001217s | byte equality observed |
| test9.test | 10 | 0.001283s | 0.001306s | 0.001261s | byte equality observed |
| test9u.test | 10 | 0.001304s | 0.001285s | 0.001258s | byte equality observed |
| test_actions.test | 10 | 0.001474s | 0.001489s | 0.001440s | byte equality observed |
| test_assert.test | 10 | 0.001362s | 0.001328s | 0.001285s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001281s | 0.001300s | 0.001252s | byte equality observed |
| test_cycles.test | 10 | 0.001285s | 0.001270s | 0.001254s | byte equality observed |
| test_dynamic.test | 10 | 0.001255s | 0.001313s | 0.001249s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001348s | 0.001350s | 0.001320s | byte equality observed |
| test_format.test | 10 | 0.001332s | 0.001341s | 0.001302s | byte equality observed |
| test_non_char.test | 10 | 0.001304s | 0.001317s | 0.001263s | byte equality observed |
| test_skip.test | 10 | 0.001275s | 0.001261s | 0.001252s | byte equality observed |
| test_static.test | 10 | 0.001251s | 0.001308s | 0.001213s | byte equality observed |
| test_symbols.test | 10 | 0.001426s | 0.001417s | 0.001384s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
