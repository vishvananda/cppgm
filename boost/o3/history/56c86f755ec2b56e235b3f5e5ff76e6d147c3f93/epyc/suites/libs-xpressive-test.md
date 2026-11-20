# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.666723 | 24.160844 | 20.830286 | 0.014703 | 0.018979 | 0.014124 |
| regress_u.test | RUN | 3.955527 | 24.667524 | 20.906888 | 0.012686 | 0.019074 | 0.014021 |
| c_traits.test | RUN | 3.599030 | 23.572592 | 19.757304 | 0.011001 | 0.015356 | 0.011126 |
| c_traits_u.test | RUN | 3.875694 | 24.532127 | 20.069150 | 0.012347 | 0.018232 | 0.010972 |
| test1.test | RUN | 1.408084 | 6.294327 | 6.480203 | 0.003454 | 0.003797 | 0.003873 |
| test2.test | RUN | 1.908574 | 8.849366 | 8.983239 | 0.003570 | 0.004005 | 0.003444 |
| test3.test | RUN | 1.886715 | 8.914549 | 9.334410 | 0.003858 | 0.003866 | 0.003494 |
| test4.test | RUN | 1.680543 | 7.317456 | 7.759261 | 0.003393 | 0.003793 | 0.003389 |
| test5.test | RUN | 1.739321 | 7.805831 | 8.188064 | 0.003746 | 0.003802 | 0.003956 |
| test6.test | RUN | 1.575212 | 6.678800 | 7.065121 | 0.003296 | 0.003355 | 0.003641 |
| test7.test | RUN | 1.551101 | 6.751585 | 7.072623 | 0.003645 | 0.003756 | 0.003537 |
| test8.test | RUN | 1.535360 | 6.421116 | 7.034984 | 0.003491 | 0.003681 | 0.004132 |
| test9.test | RUN | 1.668467 | 7.088640 | 7.604395 | 0.003662 | 0.003665 | 0.003923 |
| test10.test | RUN | 1.615861 | 6.834030 | 7.289293 | 0.003564 | 0.003624 | 0.003741 |
| test11.test | RUN | 1.565352 | 6.502791 | 7.014243 | 0.003437 | 0.003904 | 0.003963 |
| test1u.test | RUN | 1.425521 | 6.081276 | 6.189223 | 0.003640 | 0.003876 | 0.003906 |
| test2u.test | RUN | 1.969932 | 9.102779 | 9.371856 | 0.003870 | 0.003754 | 0.004054 |
| test3u.test | RUN | 1.968728 | 9.244210 | 9.732848 | 0.003513 | 0.004200 | 0.004162 |
| test4u.test | RUN | 1.662401 | 7.250509 | 7.785449 | 0.003681 | 0.004122 | 0.003831 |
| test5u.test | RUN | 1.807936 | 8.069254 | 8.516326 | 0.003765 | 0.004133 | 0.004182 |
| test6u.test | RUN | 1.654155 | 6.653199 | 7.219674 | 0.003695 | 0.003866 | 0.003895 |
| test7u.test | RUN | 1.603380 | 7.017015 | 7.353154 | 0.003554 | 0.003784 | 0.003835 |
| test8u.test | RUN | 1.526115 | 6.426200 | 6.967156 | 0.003822 | 0.003863 | 0.004052 |
| test9u.test | RUN | 1.676865 | 7.031493 | 7.728527 | 0.003641 | 0.003538 | 0.003911 |
| test10u.test | RUN | 1.658914 | 6.700841 | 7.219205 | 0.003755 | 0.003729 | 0.003772 |
| test11u.test | RUN | 1.607615 | 6.519510 | 7.369951 | 0.003889 | 0.003963 | 0.003692 |
| misc1.test | RUN | 2.858874 | 16.620606 | 15.422966 | 0.004860 | 0.004660 | 0.004992 |
| misc2.test | RUN | 2.862402 | 15.789217 | 14.908183 | 0.004305 | 0.004388 | 0.004231 |
| test_format.test | RUN | 2.993261 | 19.034502 | 16.809189 | 0.004165 | 0.004136 | 0.003455 |
| test_cycles.test | RUN | 1.395113 | 5.995251 | 5.882228 | 0.003882 | 0.003952 | 0.003969 |
| test_non_char.test | RUN | 2.494563 | 13.370460 | 12.961219 | 0.003780 | 0.003759 | 0.004091 |
| test_static.test | RUN | 1.306783 | 5.462446 | 5.164437 | 0.003769 | 0.003682 | 0.003676 |
| test_actions.test | RUN | 3.137822 | 16.221065 | 15.813773 | 0.004920 | 0.005536 | 0.005626 |
| test_assert.test | RUN | 1.848882 | 7.092071 | 7.460607 | 0.004161 | 0.004069 | 0.004406 |
| test_assert_with_placeholder.test | RUN | 1.726667 | 6.386641 | 7.006016 | 0.003870 | 0.003932 | 0.003646 |
| test_symbols.test | RUN | 3.235063 | 15.934600 | 17.743817 | 0.005505 | 0.005208 | 0.004742 |
| test_dynamic.test | RUN | 2.048986 | 10.784584 | 10.413114 | 0.004084 | 0.003667 | 0.003734 |
| test_dynamic_grammar.test | RUN | 2.091412 | 11.189711 | 10.304062 | 0.004113 | 0.003704 | 0.004169 |
| test_skip.test | RUN | 2.462136 | 11.734176 | 12.528364 | 0.003612 | 0.003597 | 0.003943 |
| multiple_defs.test | LINK | 3.947602 | 21.239670 | 20.090624 | — | — | — |
| test_basic_regex.test | COMPILE | 0.900349 | 1.845000 | 3.027838 | — | — | — |
| test_match_results.test | COMPILE | 0.610272 | 1.323717 | 1.957589 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.605892 | 1.271736 | 2.015694 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.899416 | 1.995968 | 3.063915 | — | — | — |
| test_regex_constants.test | COMPILE | 0.047630 | 0.086768 | 0.101437 | — | — | — |
| test_regex_error.test | COMPILE | 0.325528 | 0.684863 | 1.094464 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.590383 | 1.271499 | 1.912312 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.884373 | 1.964019 | 2.688333 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.558203 | 1.240102 | 1.933385 | — | — | — |
| test_regex_traits.test | COMPILE | 0.348733 | 0.597554 | 0.999933 | — | — | — |
| test_sub_match.test | COMPILE | 0.221131 | 0.464779 | 0.727580 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.119× | 1.120×, 1.119× | 0.987× |
| clang | 0.952× | 0.950×, 0.954× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010233s | 0.014404s | 0.009588s | byte equality observed |
| c_traits_u.test | 2 | 0.011272s | 0.015674s | 0.010064s | byte equality observed |
| misc1.test | 6 | 0.003406s | 0.003285s | 0.003327s | byte equality observed |
| misc2.test | 8 | 0.003023s | 0.002862s | 0.002945s | byte equality observed |
| regress.test | 2 | 0.012943s | 0.017382s | 0.011729s | byte equality observed |
| regress_u.test | 2 | 0.013778s | 0.017558s | 0.012256s | byte equality observed |
| test1.test | 8 | 0.002703s | 0.002681s | 0.002703s | byte equality observed |
| test10.test | 8 | 0.002662s | 0.002536s | 0.002631s | byte equality observed |
| test10u.test | 8 | 0.002666s | 0.002588s | 0.002572s | byte equality observed |
| test11.test | 8 | 0.002629s | 0.002637s | 0.002651s | byte equality observed |
| test11u.test | 8 | 0.002655s | 0.002662s | 0.002605s | byte equality observed |
| test1u.test | 8 | 0.002670s | 0.002642s | 0.002587s | byte equality observed |
| test2.test | 8 | 0.002709s | 0.002750s | 0.002602s | byte equality observed |
| test2u.test | 8 | 0.002717s | 0.002787s | 0.002714s | byte equality observed |
| test3.test | 8 | 0.002742s | 0.002724s | 0.002643s | byte equality observed |
| test3u.test | 8 | 0.002725s | 0.002766s | 0.002695s | byte equality observed |
| test4.test | 8 | 0.002615s | 0.002665s | 0.002569s | byte equality observed |
| test4u.test | 8 | 0.002672s | 0.002648s | 0.002614s | byte equality observed |
| test5.test | 9 | 0.002691s | 0.002725s | 0.002637s | byte equality observed |
| test5u.test | 8 | 0.002683s | 0.002752s | 0.002644s | byte equality observed |
| test6.test | 8 | 0.002611s | 0.002670s | 0.002632s | byte equality observed |
| test6u.test | 8 | 0.002663s | 0.002684s | 0.002650s | byte equality observed |
| test7.test | 8 | 0.002661s | 0.002691s | 0.002596s | byte equality observed |
| test7u.test | 6 | 0.002685s | 0.002595s | 0.002626s | byte equality observed |
| test8.test | 8 | 0.002688s | 0.002687s | 0.002570s | byte equality observed |
| test8u.test | 7 | 0.002665s | 0.002671s | 0.002631s | byte equality observed |
| test9.test | 8 | 0.002623s | 0.002639s | 0.002582s | byte equality observed |
| test9u.test | 8 | 0.002689s | 0.002658s | 0.002605s | byte equality observed |
| test_actions.test | 7 | 0.003366s | 0.003384s | 0.003299s | byte equality observed |
| test_assert.test | 8 | 0.002822s | 0.002750s | 0.002745s | byte equality observed |
| test_assert_with_placeholder.test | 8 | 0.002602s | 0.002540s | 0.002534s | byte equality observed |
| test_cycles.test | 8 | 0.002632s | 0.002612s | 0.002514s | byte equality observed |
| test_dynamic.test | 8 | 0.002674s | 0.002605s | 0.002588s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002814s | 0.002785s | 0.002738s | byte equality observed |
| test_format.test | 8 | 0.002720s | 0.002826s | 0.002686s | byte equality observed |
| test_non_char.test | 8 | 0.002756s | 0.002790s | 0.002676s | byte equality observed |
| test_skip.test | 8 | 0.002627s | 0.002613s | 0.002619s | byte equality observed |
| test_static.test | 8 | 0.002401s | 0.002393s | 0.002399s | byte equality observed |
| test_symbols.test | 7 | 0.002942s | 0.002954s | 0.002914s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
