# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.231021 | 15.579109 | 11.050823 | 0.008510 | 0.011571 | 0.008078 |
| regress_u.test | RUN | 2.427760 | 15.854136 | 11.252808 | 0.008642 | 0.011221 | 0.007978 |
| c_traits.test | RUN | 2.278876 | 15.216577 | 10.805673 | 0.006937 | 0.009330 | 0.006842 |
| c_traits_u.test | RUN | 2.433141 | 15.806412 | 11.180969 | 0.007450 | 0.010541 | 0.007343 |
| test1.test | RUN | 0.911468 | 3.866426 | 3.275777 | 0.002633 | 0.002995 | 0.002859 |
| test2.test | RUN | 1.123641 | 5.541471 | 4.729230 | 0.002738 | 0.003088 | 0.002875 |
| test3.test | RUN | 1.101285 | 5.746807 | 4.721133 | 0.002584 | 0.003190 | 0.002639 |
| test4.test | RUN | 0.970554 | 4.739682 | 3.867461 | 0.002710 | 0.003212 | 0.002889 |
| test5.test | RUN | 1.067772 | 5.083625 | 4.142724 | 0.002957 | 0.003112 | 0.002829 |
| test6.test | RUN | 0.984502 | 4.313498 | 3.444248 | 0.002499 | 0.003067 | 0.002755 |
| test7.test | RUN | 0.966828 | 4.317101 | 3.420183 | 0.002748 | 0.003085 | 0.002841 |
| test8.test | RUN | 0.947020 | 4.205469 | 3.292391 | 0.002426 | 0.006104 | 0.002805 |
| test9.test | RUN | 1.020892 | 4.666228 | 3.704309 | 0.003205 | 0.002694 | 0.002649 |
| test10.test | RUN | 0.948318 | 4.395460 | 3.423150 | 0.002248 | 0.002975 | 0.002560 |
| test11.test | RUN | 0.912553 | 4.233531 | 3.383830 | 0.002620 | 0.003203 | 0.002487 |
| test1u.test | RUN | 0.844976 | 3.971621 | 2.928412 | 0.002818 | 0.003182 | 0.002860 |
| test2u.test | RUN | 1.132819 | 5.949687 | 4.556294 | 0.002854 | 0.002941 | 0.002736 |
| test3u.test | RUN | 1.158846 | 6.142072 | 4.689815 | 0.002729 | 0.003224 | 0.002663 |
| test4u.test | RUN | 0.980198 | 4.696178 | 3.630690 | 0.002788 | 0.003138 | 0.002693 |
| test5u.test | RUN | 1.054292 | 5.240185 | 4.069529 | 0.002788 | 0.003249 | 0.002727 |
| test6u.test | RUN | 0.978000 | 4.324499 | 3.410874 | 0.002697 | 0.003140 | 0.002934 |
| test7u.test | RUN | 0.925099 | 4.532425 | 3.549940 | 0.002791 | 0.003108 | 0.002486 |
| test8u.test | RUN | 0.881911 | 4.193421 | 3.276895 | 0.002680 | 0.003163 | 0.002789 |
| test9u.test | RUN | 0.977344 | 4.591054 | 3.733509 | 0.002856 | 0.003169 | 0.002834 |
| test10u.test | RUN | 0.979401 | 4.231984 | 3.426379 | 0.002910 | 0.002872 | 0.002933 |
| test11u.test | RUN | 0.944026 | 4.311199 | 3.575515 | 0.003181 | 0.003105 | 0.002750 |
| misc1.test | RUN | 1.763972 | 10.702699 | 7.872894 | 0.003549 | 0.003896 | 0.003510 |
| misc2.test | RUN | 1.733404 | 10.156061 | 7.714075 | 0.003186 | 0.003257 | 0.003192 |
| test_format.test | RUN | 1.857645 | 12.279845 | 8.985788 | 0.002849 | 0.002999 | 0.004857 |
| test_cycles.test | RUN | 0.802337 | 3.779900 | 2.774381 | 0.002760 | 0.003077 | 0.002710 |
| test_non_char.test | RUN | 1.515455 | 8.576356 | 6.794570 | 0.002572 | 0.003141 | 0.002747 |
| test_static.test | RUN | 0.758713 | 3.382187 | 2.524316 | 0.002933 | 0.002649 | 0.003906 |
| test_actions.test | RUN | 1.819945 | 10.351777 | 8.086716 | 0.003736 | 0.003848 | 0.003730 |
| test_assert.test | RUN | 1.094967 | 4.299478 | 3.690788 | 0.002930 | 0.003219 | 0.002931 |
| test_assert_with_placeholder.test | RUN | 0.977742 | 3.905312 | 3.261220 | 0.002900 | 0.003128 | 0.002595 |
| test_symbols.test | RUN | 1.959747 | 10.228420 | 9.059357 | 0.003935 | 0.004063 | 0.003669 |
| test_dynamic.test | RUN | 1.223653 | 6.891175 | 5.357746 | 0.003016 | 0.003163 | 0.002714 |
| test_dynamic_grammar.test | RUN | 1.266210 | 7.407274 | 5.417654 | 0.004751 | 0.003316 | 0.002812 |
| test_skip.test | RUN | 1.463486 | 7.623284 | 6.372117 | 0.002682 | 0.002978 | 0.002713 |
| multiple_defs.test | LINK | 2.432292 | 13.719903 | 10.522635 | — | — | — |
| test_basic_regex.test | COMPILE | 0.504123 | 1.097403 | 1.279284 | — | — | — |
| test_match_results.test | COMPILE | 0.347340 | 0.720916 | 0.896716 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.357826 | 0.723258 | 0.894043 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.514016 | 1.226089 | 1.349779 | — | — | — |
| test_regex_constants.test | COMPILE | 0.029576 | 0.052819 | 0.054293 | — | — | — |
| test_regex_error.test | COMPILE | 0.189749 | 0.396919 | 0.512953 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.352350 | 0.736947 | 0.827693 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.516938 | 1.209763 | 1.267203 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.344663 | 0.740900 | 0.776279 | — | — | — |
| test_regex_traits.test | COMPILE | 0.211525 | 0.405220 | 0.462636 | — | — | — |
| test_sub_match.test | COMPILE | 0.147713 | 0.303099 | 0.366910 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.047×† | 1.090×, 1.004× | 1.000× |
| clang | 0.997× | 1.017×, 0.978× | 1.023× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.005627s | 0.007550s | 0.005856s | byte equality observed |
| c_traits_u.test | 3 | 0.006152s | 0.007598s | 0.006144s | byte equality observed |
| misc1.test | 9 | 0.002273s | 0.002128s | 0.002222s | byte equality observed |
| misc2.test | 10 | 0.001956s | 0.001871s | 0.001981s | byte equality observed |
| regress.test | 3 | 0.006784s | 0.008168s | 0.006709s | byte equality observed |
| regress_u.test | 3 | 0.007360s | 0.008343s | 0.006846s | byte equality observed |
| test1.test | 10 | 0.001759s | 0.001706s | 0.001767s | byte equality observed |
| test10.test | 10 | 0.001740s | 0.001638s | 0.001751s | byte equality observed |
| test10u.test | 10 | 0.001737s | 0.001623s | 0.001751s | byte equality observed |
| test11.test | 10 | 0.001754s | 0.001674s | 0.001722s | byte equality observed |
| test11u.test | 10 | 0.001748s | 0.001764s | 0.001771s | byte equality observed |
| test1u.test | 10 | 0.001776s | 0.001651s | 0.001757s | byte equality observed |
| test2.test | 10 | 0.001812s | 0.001725s | 0.001793s | byte equality observed |
| test2u.test | 10 | 0.001801s | 0.001783s | 0.001803s | byte equality observed |
| test3.test | 10 | 0.001797s | 0.001746s | 0.001788s | byte equality observed |
| test3u.test | 10 | 0.001790s | 0.001786s | 0.001827s | byte equality observed |
| test4.test | 10 | 0.001778s | 0.001737s | 0.001765s | byte equality observed |
| test4u.test | 8 | 0.001780s | 0.001680s | 0.001767s | byte equality observed |
| test5.test | 10 | 0.001803s | 0.001761s | 0.001796s | byte equality observed |
| test5u.test | 10 | 0.001776s | 0.001763s | 0.001816s | byte equality observed |
| test6.test | 10 | 0.001776s | 0.001746s | 0.001754s | byte equality observed |
| test6u.test | 10 | 0.001765s | 0.001735s | 0.001753s | byte equality observed |
| test7.test | 10 | 0.001768s | 0.001745s | 0.001766s | byte equality observed |
| test7u.test | 10 | 0.001765s | 0.001748s | 0.001778s | byte equality observed |
| test8.test | 10 | 0.001753s | 0.001739s | 0.001776s | byte equality observed |
| test8u.test | 10 | 0.001786s | 0.001732s | 0.001768s | byte equality observed |
| test9.test | 10 | 0.001790s | 0.001737s | 0.001763s | byte equality observed |
| test9u.test | 10 | 0.001789s | 0.001713s | 0.001799s | byte equality observed |
| test_actions.test | 9 | 0.002183s | 0.002213s | 0.002236s | byte equality observed |
| test_assert.test | 10 | 0.001852s | 0.001816s | 0.001852s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001737s | 0.001710s | 0.001750s | byte equality observed |
| test_cycles.test | 9 | 0.001813s | 0.001784s | 0.001803s | byte equality observed |
| test_dynamic.test | 10 | 0.001746s | 0.001766s | 0.001794s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001880s | 0.001862s | 0.001891s | byte equality observed |
| test_format.test | 10 | 0.001850s | 0.001828s | 0.001839s | byte equality observed |
| test_non_char.test | 10 | 0.001826s | 0.001813s | 0.001814s | byte equality observed |
| test_skip.test | 6 | 0.001757s | 0.001723s | 0.001761s | byte equality observed |
| test_static.test | 10 | 0.001639s | 0.001635s | 0.001672s | byte equality observed |
| test_symbols.test | 9 | 0.001984s | 0.002054s | 0.002025s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
