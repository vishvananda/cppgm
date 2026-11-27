# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.502964 | 16.371311 | 12.026582 | 0.008736 | 0.010158 | 0.007960 |
| regress_u.test | RUN | 2.679255 | 16.723025 | 12.430114 | 0.008752 | 0.010448 | 0.008516 |
| c_traits.test | RUN | 2.532394 | 16.328286 | 11.772317 | 0.007100 | 0.008603 | 0.006719 |
| c_traits_u.test | RUN | 2.672047 | 16.658885 | 12.293934 | 0.007283 | 0.009363 | 0.007213 |
| test1.test | RUN | 0.868761 | 4.047709 | 3.490767 | 0.002397 | 0.002098 | 0.002002 |
| test2.test | RUN | 1.183470 | 5.827706 | 5.091807 | 0.002374 | 0.002183 | 0.002163 |
| test3.test | RUN | 1.163282 | 5.853262 | 5.219234 | 0.002216 | 0.002187 | 0.002179 |
| test4.test | RUN | 1.029127 | 4.813814 | 4.345220 | 0.002138 | 0.002197 | 0.002265 |
| test5.test | RUN | 1.081269 | 5.212791 | 4.587544 | 0.001922 | 0.002120 | 0.002011 |
| test6.test | RUN | 0.974498 | 4.289609 | 3.943818 | 0.001998 | 0.002148 | 0.002010 |
| test7.test | RUN | 0.941086 | 4.495952 | 4.032216 | 0.001847 | 0.002023 | 0.002080 |
| test8.test | RUN | 0.943602 | 4.264412 | 3.769121 | 0.001844 | 0.002160 | 0.002020 |
| test9.test | RUN | 1.025145 | 4.702608 | 4.444087 | 0.001918 | 0.002218 | 0.002046 |
| test10.test | RUN | 0.994189 | 4.356494 | 4.032269 | 0.001864 | 0.002018 | 0.002129 |
| test11.test | RUN | 0.957144 | 4.302234 | 3.940605 | 0.001940 | 0.002089 | 0.002064 |
| test1u.test | RUN | 0.871006 | 4.017517 | 3.491369 | 0.002142 | 0.002030 | 0.002180 |
| test2u.test | RUN | 1.203558 | 6.093427 | 5.378260 | 0.002258 | 0.002189 | 0.002138 |
| test3u.test | RUN | 1.207740 | 6.195874 | 5.614504 | 0.001970 | 0.002010 | 0.002154 |
| test4u.test | RUN | 1.034490 | 4.777471 | 4.385042 | 0.002112 | 0.002228 | 0.002068 |
| test5u.test | RUN | 1.102637 | 5.248057 | 4.809066 | 0.002138 | 0.002132 | 0.002008 |
| test6u.test | RUN | 1.005299 | 4.437626 | 3.988484 | 0.002088 | 0.002387 | 0.002075 |
| test7u.test | RUN | 0.965731 | 4.604496 | 4.129789 | 0.001955 | 0.002244 | 0.002422 |
| test8u.test | RUN | 0.921115 | 4.339252 | 3.836818 | 0.001992 | 0.002222 | 0.002133 |
| test9u.test | RUN | 1.009193 | 4.667880 | 4.313776 | 0.001909 | 0.002196 | 0.002285 |
| test10u.test | RUN | 0.991846 | 4.478107 | 4.020131 | 0.002050 | 0.002246 | 0.001961 |
| test11u.test | RUN | 0.994741 | 4.443400 | 4.215932 | 0.002044 | 0.002132 | 0.002177 |
| misc1.test | RUN | 1.846782 | 11.596177 | 9.256495 | 0.002162 | 0.002788 | 0.002534 |
| misc2.test | RUN | 1.866426 | 10.890859 | 8.748076 | 0.002088 | 0.002366 | 0.002327 |
| test_format.test | RUN | 2.006779 | 13.664072 | 9.966853 | 0.002280 | 0.002213 | 0.002142 |
| test_cycles.test | RUN | 0.818842 | 3.918528 | 3.282317 | 0.002002 | 0.002026 | 0.002122 |
| test_non_char.test | RUN | 1.631259 | 9.282465 | 7.660831 | 0.002350 | 0.002271 | 0.002568 |
| test_static.test | RUN | 0.766753 | 3.680377 | 2.955047 | 0.002108 | 0.002255 | 0.002115 |
| test_actions.test | RUN | 1.931429 | 11.101465 | 9.332622 | 0.002404 | 0.002750 | 0.002510 |
| test_assert.test | RUN | 1.087433 | 4.752439 | 4.380401 | 0.001979 | 0.002206 | 0.002345 |
| test_assert_with_placeholder.test | RUN | 1.005366 | 4.237122 | 3.783737 | 0.002012 | 0.002057 | 0.002083 |
| test_symbols.test | RUN | 1.982769 | 10.852762 | 10.596052 | 0.002524 | 0.002681 | 0.002774 |
| test_dynamic.test | RUN | 1.267209 | 7.516671 | 6.131284 | 0.001951 | 0.002219 | 0.002238 |
| test_dynamic_grammar.test | RUN | 1.359741 | 7.847669 | 6.253759 | 0.002046 | 0.002411 | 0.002457 |
| test_skip.test | RUN | 1.517622 | 7.991930 | 7.284062 | 0.002128 | 0.002193 | 0.002270 |
| multiple_defs.test | LINK | 2.527015 | 14.578348 | 12.215635 | — | — | — |
| test_basic_regex.test | COMPILE | 0.510430 | 1.094781 | 1.548024 | — | — | — |
| test_match_results.test | COMPILE | 0.331446 | 0.741473 | 0.992504 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.336942 | 0.751364 | 1.042879 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.519058 | 1.220861 | 1.498348 | — | — | — |
| test_regex_constants.test | COMPILE | 0.026768 | 0.047949 | 0.054287 | — | — | — |
| test_regex_error.test | COMPILE | 0.177755 | 0.404679 | 0.551250 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.345514 | 0.751322 | 0.947779 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.486914 | 1.219695 | 1.456447 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.301279 | 0.757949 | 0.905884 | — | — | — |
| test_regex_traits.test | COMPILE | 0.195879 | 0.390678 | 0.515342 | — | — | — |
| test_sub_match.test | COMPILE | 0.155428 | 0.301122 | 0.392011 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.091× | 1.091×, 1.091× | 0.982× |
| clang | 0.965× | 0.958×, 0.972× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004889s | 0.006478s | 0.004951s | byte equality observed |
| c_traits_u.test | 3 | 0.005400s | 0.006809s | 0.005211s | byte equality observed |
| misc1.test | 10 | 0.001476s | 0.001513s | 0.001428s | byte equality observed |
| misc2.test | 10 | 0.001361s | 0.001369s | 0.001339s | byte equality observed |
| regress.test | 3 | 0.005919s | 0.007377s | 0.005467s | byte equality observed |
| regress_u.test | 3 | 0.006203s | 0.007638s | 0.005826s | byte equality observed |
| test1.test | 10 | 0.001254s | 0.001297s | 0.001243s | byte equality observed |
| test10.test | 10 | 0.001269s | 0.001259s | 0.001249s | byte equality observed |
| test10u.test | 10 | 0.001261s | 0.001264s | 0.001267s | byte equality observed |
| test11.test | 10 | 0.001282s | 0.001260s | 0.001223s | byte equality observed |
| test11u.test | 10 | 0.001262s | 0.001264s | 0.001239s | byte equality observed |
| test1u.test | 10 | 0.001269s | 0.001285s | 0.001251s | byte equality observed |
| test2.test | 10 | 0.001275s | 0.001297s | 0.001258s | byte equality observed |
| test2u.test | 10 | 0.001305s | 0.001322s | 0.001300s | byte equality observed |
| test3.test | 10 | 0.001298s | 0.001317s | 0.001294s | byte equality observed |
| test3u.test | 10 | 0.001304s | 0.001332s | 0.001264s | byte equality observed |
| test4.test | 10 | 0.001291s | 0.001277s | 0.001265s | byte equality observed |
| test4u.test | 10 | 0.001278s | 0.001270s | 0.001277s | byte equality observed |
| test5.test | 10 | 0.001310s | 0.001306s | 0.001286s | byte equality observed |
| test5u.test | 10 | 0.001302s | 0.001324s | 0.001273s | byte equality observed |
| test6.test | 10 | 0.001275s | 0.001256s | 0.001262s | byte equality observed |
| test6u.test | 10 | 0.001288s | 0.001278s | 0.001251s | byte equality observed |
| test7.test | 10 | 0.001284s | 0.001264s | 0.001252s | byte equality observed |
| test7u.test | 10 | 0.001296s | 0.001257s | 0.001245s | byte equality observed |
| test8.test | 10 | 0.001259s | 0.001254s | 0.001256s | byte equality observed |
| test8u.test | 10 | 0.001277s | 0.001274s | 0.001266s | byte equality observed |
| test9.test | 10 | 0.001309s | 0.001262s | 0.001230s | byte equality observed |
| test9u.test | 10 | 0.001290s | 0.001311s | 0.001237s | byte equality observed |
| test_actions.test | 10 | 0.001495s | 0.001490s | 0.001410s | byte equality observed |
| test_assert.test | 10 | 0.001332s | 0.001337s | 0.001333s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001283s | 0.001298s | 0.001185s | byte equality observed |
| test_cycles.test | 10 | 0.001300s | 0.001311s | 0.001253s | byte equality observed |
| test_dynamic.test | 10 | 0.001286s | 0.001293s | 0.001213s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001334s | 0.001321s | 0.001280s | byte equality observed |
| test_format.test | 10 | 0.001344s | 0.001314s | 0.001288s | byte equality observed |
| test_non_char.test | 10 | 0.001284s | 0.001264s | 0.001268s | byte equality observed |
| test_skip.test | 10 | 0.001264s | 0.001256s | 0.001222s | byte equality observed |
| test_static.test | 10 | 0.001258s | 0.001226s | 0.001209s | byte equality observed |
| test_symbols.test | 10 | 0.001450s | 0.001430s | 0.001415s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
