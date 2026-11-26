# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.660969 | 23.612632 | 20.187031 | 0.014478 | 0.019523 | 0.013507 |
| regress_u.test | RUN | 3.775751 | 24.245078 | 20.303580 | 0.014505 | 0.018429 | 0.013522 |
| c_traits.test | RUN | 3.682484 | 23.067567 | 19.334697 | 0.010418 | 0.015895 | 0.010993 |
| c_traits_u.test | RUN | 3.826021 | 24.086206 | 20.141359 | 0.012600 | 0.015207 | 0.012476 |
| test1.test | RUN | 1.379409 | 6.185619 | 6.331755 | 0.003345 | 0.003845 | 0.003820 |
| test2.test | RUN | 1.838342 | 8.636442 | 8.803369 | 0.003337 | 0.003935 | 0.003905 |
| test3.test | RUN | 1.828052 | 8.746008 | 8.999335 | 0.003607 | 0.004084 | 0.003497 |
| test4.test | RUN | 1.597749 | 7.195726 | 7.502098 | 0.003566 | 0.004049 | 0.003788 |
| test5.test | RUN | 1.696613 | 7.792091 | 8.086045 | 0.003641 | 0.003657 | 0.004038 |
| test6.test | RUN | 1.551789 | 6.684839 | 6.909837 | 0.003801 | 0.004098 | 0.003454 |
| test7.test | RUN | 1.493425 | 6.822687 | 6.941737 | 0.003517 | 0.003835 | 0.003804 |
| test8.test | RUN | 1.486462 | 6.529160 | 6.775298 | 0.003559 | 0.003904 | 0.003684 |
| test9.test | RUN | 1.620381 | 7.054073 | 7.559257 | 0.003597 | 0.004244 | 0.003530 |
| test10.test | RUN | 1.564919 | 6.750880 | 7.169320 | 0.003383 | 0.003909 | 0.003900 |
| test11.test | RUN | 1.536680 | 6.399463 | 7.118991 | 0.003322 | 0.004014 | 0.003585 |
| test1u.test | RUN | 1.393072 | 6.139221 | 6.145241 | 0.003556 | 0.003706 | 0.003421 |
| test2u.test | RUN | 1.888248 | 9.074273 | 9.113869 | 0.003633 | 0.003853 | 0.003879 |
| test3u.test | RUN | 1.875722 | 9.179724 | 9.427436 | 0.004053 | 0.004026 | 0.003875 |
| test4u.test | RUN | 1.651480 | 6.943729 | 7.532422 | 0.003519 | 0.003861 | 0.003651 |
| test5u.test | RUN | 1.733684 | 7.903557 | 8.445076 | 0.003441 | 0.003810 | 0.003857 |
| test6u.test | RUN | 1.615476 | 6.596506 | 7.109760 | 0.003470 | 0.004050 | 0.003888 |
| test7u.test | RUN | 1.570099 | 6.997189 | 7.128229 | 0.003675 | 0.003977 | 0.003794 |
| test8u.test | RUN | 1.486889 | 6.564370 | 6.724742 | 0.003518 | 0.004005 | 0.003811 |
| test9u.test | RUN | 1.603556 | 7.017029 | 7.685962 | 0.003256 | 0.003957 | 0.003315 |
| test10u.test | RUN | 1.608630 | 6.722987 | 7.033612 | 0.003665 | 0.003925 | 0.003883 |
| test11u.test | RUN | 1.632069 | 6.647919 | 7.328940 | 0.003818 | 0.004050 | 0.003811 |
| misc1.test | RUN | 2.843370 | 16.599823 | 15.022878 | 0.004558 | 0.004888 | 0.004701 |
| misc2.test | RUN | 2.849861 | 15.673423 | 14.628847 | 0.004482 | 0.004149 | 0.004231 |
| test_format.test | RUN | 2.968678 | 18.968193 | 16.427292 | 0.003747 | 0.004295 | 0.003916 |
| test_cycles.test | RUN | 1.351852 | 6.013211 | 5.826559 | 0.003700 | 0.003619 | 0.003860 |
| test_non_char.test | RUN | 2.471235 | 13.208446 | 12.377478 | 0.003963 | 0.004047 | 0.004017 |
| test_static.test | RUN | 1.272760 | 5.557456 | 5.040177 | 0.003685 | 0.003427 | 0.003740 |
| test_actions.test | RUN | 3.034732 | 15.987024 | 15.374687 | 0.004833 | 0.005213 | 0.004916 |
| test_assert.test | RUN | 1.746177 | 6.948772 | 7.494144 | 0.004304 | 0.003964 | 0.004105 |
| test_assert_with_placeholder.test | RUN | 1.683087 | 6.447492 | 6.747977 | 0.003671 | 0.003781 | 0.003884 |
| test_symbols.test | RUN | 3.180489 | 15.997786 | 17.695807 | 0.004947 | 0.004905 | 0.005316 |
| test_dynamic.test | RUN | 1.995642 | 10.764434 | 10.026508 | 0.003351 | 0.003577 | 0.003837 |
| test_dynamic_grammar.test | RUN | 2.131596 | 11.322717 | 10.433526 | 0.003691 | 0.004295 | 0.004089 |
| test_skip.test | RUN | 2.408875 | 11.512275 | 12.137720 | 0.003790 | 0.003801 | 0.003744 |
| multiple_defs.test | LINK | 3.935425 | 21.201037 | 20.073648 | — | — | — |
| test_basic_regex.test | COMPILE | 0.871563 | 1.833882 | 2.895077 | — | — | — |
| test_match_results.test | COMPILE | 0.598820 | 1.213707 | 2.043805 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.594539 | 1.193577 | 1.956058 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.902764 | 1.918737 | 2.920455 | — | — | — |
| test_regex_constants.test | COMPILE | 0.049742 | 0.077809 | 0.094693 | — | — | — |
| test_regex_error.test | COMPILE | 0.319484 | 0.636669 | 1.052082 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.578922 | 1.250243 | 1.966625 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.891875 | 1.971799 | 2.696730 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.572255 | 1.231954 | 1.828766 | — | — | — |
| test_regex_traits.test | COMPILE | 0.348283 | 0.675705 | 1.065792 | — | — | — |
| test_sub_match.test | COMPILE | 0.268513 | 0.533227 | 0.692274 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.115× | 1.103×, 1.127× | 1.008× |
| clang | 0.937× | 0.954×, 0.921× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010260s | 0.014871s | 0.009534s | byte equality observed |
| c_traits_u.test | 2 | 0.011566s | 0.015626s | 0.010462s | byte equality observed |
| misc1.test | 7 | 0.003217s | 0.003136s | 0.003221s | byte equality observed |
| misc2.test | 7 | 0.002926s | 0.002820s | 0.002903s | byte equality observed |
| regress.test | 2 | 0.013298s | 0.016971s | 0.011216s | byte equality observed |
| regress_u.test | 2 | 0.013992s | 0.017924s | 0.011721s | byte equality observed |
| test1.test | 8 | 0.002654s | 0.002626s | 0.002517s | byte equality observed |
| test10.test | 8 | 0.002569s | 0.002533s | 0.002544s | byte equality observed |
| test10u.test | 9 | 0.002636s | 0.002536s | 0.002600s | byte equality observed |
| test11.test | 8 | 0.002639s | 0.002560s | 0.002532s | byte equality observed |
| test11u.test | 8 | 0.002581s | 0.002590s | 0.002522s | byte equality observed |
| test1u.test | 8 | 0.002637s | 0.002649s | 0.002505s | byte equality observed |
| test2.test | 8 | 0.002663s | 0.002710s | 0.002678s | byte equality observed |
| test2u.test | 8 | 0.002662s | 0.002756s | 0.002579s | byte equality observed |
| test3.test | 8 | 0.002621s | 0.002752s | 0.002627s | byte equality observed |
| test3u.test | 8 | 0.002659s | 0.002715s | 0.002649s | byte equality observed |
| test4.test | 8 | 0.002639s | 0.002594s | 0.002595s | byte equality observed |
| test4u.test | 8 | 0.002621s | 0.002615s | 0.002605s | byte equality observed |
| test5.test | 8 | 0.002644s | 0.002684s | 0.002570s | byte equality observed |
| test5u.test | 7 | 0.002671s | 0.002735s | 0.002556s | byte equality observed |
| test6.test | 8 | 0.002650s | 0.002605s | 0.002509s | byte equality observed |
| test6u.test | 8 | 0.002612s | 0.002638s | 0.002580s | byte equality observed |
| test7.test | 7 | 0.002664s | 0.002643s | 0.002546s | byte equality observed |
| test7u.test | 8 | 0.002642s | 0.002666s | 0.002534s | byte equality observed |
| test8.test | 9 | 0.002612s | 0.002651s | 0.002588s | byte equality observed |
| test8u.test | 8 | 0.002554s | 0.002701s | 0.002551s | byte equality observed |
| test9.test | 8 | 0.002598s | 0.002673s | 0.002542s | byte equality observed |
| test9u.test | 8 | 0.002663s | 0.002598s | 0.002587s | byte equality observed |
| test_actions.test | 7 | 0.003272s | 0.003396s | 0.003239s | byte equality observed |
| test_assert.test | 8 | 0.002730s | 0.002727s | 0.002669s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002603s | 0.002580s | 0.002530s | byte equality observed |
| test_cycles.test | 8 | 0.002662s | 0.002602s | 0.002570s | byte equality observed |
| test_dynamic.test | 8 | 0.002594s | 0.002586s | 0.002583s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002831s | 0.002843s | 0.002671s | byte equality observed |
| test_format.test | 7 | 0.002706s | 0.002673s | 0.002633s | byte equality observed |
| test_non_char.test | 7 | 0.002731s | 0.002719s | 0.002617s | byte equality observed |
| test_skip.test | 8 | 0.002524s | 0.002534s | 0.002464s | byte equality observed |
| test_static.test | 9 | 0.002321s | 0.002446s | 0.002314s | byte equality observed |
| test_symbols.test | 7 | 0.003103s | 0.003011s | 0.002888s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
