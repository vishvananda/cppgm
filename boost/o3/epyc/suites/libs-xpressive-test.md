# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.669144 | 23.473477 | 20.177487 | 0.014302 | 0.018869 | 0.013605 |
| regress_u.test | RUN | 3.799848 | 23.933750 | 19.830637 | 0.015169 | 0.018122 | 0.013843 |
| c_traits.test | RUN | 3.589561 | 23.023176 | 19.025563 | 0.010848 | 0.015504 | 0.010542 |
| c_traits_u.test | RUN | 3.980577 | 24.012458 | 19.653309 | 0.012449 | 0.017836 | 0.012251 |
| test1.test | RUN | 1.412800 | 6.156661 | 6.311876 | 0.003635 | 0.003922 | 0.003849 |
| test2.test | RUN | 1.914148 | 8.543303 | 8.723309 | 0.003457 | 0.003891 | 0.003204 |
| test3.test | RUN | 1.890088 | 8.554416 | 8.845098 | 0.003508 | 0.003750 | 0.003799 |
| test4.test | RUN | 1.641157 | 7.006969 | 7.440455 | 0.003515 | 0.003759 | 0.003562 |
| test5.test | RUN | 1.725328 | 7.586127 | 7.883731 | 0.003507 | 0.003562 | 0.003485 |
| test6.test | RUN | 1.588672 | 6.536327 | 6.770252 | 0.003269 | 0.003933 | 0.003660 |
| test7.test | RUN | 1.522998 | 6.688540 | 6.815730 | 0.003335 | 0.003738 | 0.003610 |
| test8.test | RUN | 1.496272 | 6.331272 | 6.711127 | 0.003612 | 0.003678 | 0.003664 |
| test9.test | RUN | 1.641989 | 6.927585 | 7.449941 | 0.003633 | 0.003726 | 0.004576 |
| test10.test | RUN | 1.581746 | 6.562641 | 7.052416 | 0.002821 | 0.003988 | 0.003678 |
| test11.test | RUN | 1.536171 | 6.366764 | 6.839104 | 0.003345 | 0.003894 | 0.003644 |
| test1u.test | RUN | 1.423244 | 6.072322 | 6.071081 | 0.003558 | 0.003966 | 0.003703 |
| test2u.test | RUN | 1.899129 | 8.866226 | 9.209608 | 0.003732 | 0.004062 | 0.003821 |
| test3u.test | RUN | 1.892783 | 9.172400 | 9.450653 | 0.003496 | 0.004000 | 0.003887 |
| test4u.test | RUN | 1.640420 | 6.976676 | 7.537259 | 0.003588 | 0.003930 | 0.003858 |
| test5u.test | RUN | 1.753997 | 7.738668 | 8.453769 | 0.003314 | 0.003860 | 0.003905 |
| test6u.test | RUN | 1.650466 | 6.461773 | 7.167019 | 0.003579 | 0.003960 | 0.003716 |
| test7u.test | RUN | 1.581263 | 6.855030 | 7.302565 | 0.004069 | 0.003865 | 0.003825 |
| test8u.test | RUN | 1.527964 | 6.426790 | 6.693167 | 0.003515 | 0.004127 | 0.003778 |
| test9u.test | RUN | 1.639520 | 6.919652 | 7.588179 | 0.003621 | 0.003724 | 0.003863 |
| test10u.test | RUN | 1.640219 | 6.727596 | 6.993465 | 0.003603 | 0.003910 | 0.003547 |
| test11u.test | RUN | 1.585298 | 6.624112 | 7.305237 | 0.003799 | 0.003528 | 0.003786 |
| misc1.test | RUN | 2.827416 | 16.203647 | 14.941067 | 0.004746 | 0.005133 | 0.005077 |
| misc2.test | RUN | 2.837177 | 15.311934 | 14.427971 | 0.004243 | 0.004217 | 0.004405 |
| test_format.test | RUN | 3.018564 | 18.910367 | 16.253338 | 0.003937 | 0.004065 | 0.003953 |
| test_cycles.test | RUN | 1.353398 | 5.902132 | 5.776983 | 0.003676 | 0.003675 | 0.003796 |
| test_non_char.test | RUN | 2.478273 | 13.210252 | 12.775759 | 0.003976 | 0.004034 | 0.003956 |
| test_static.test | RUN | 1.250497 | 5.510158 | 5.105895 | 0.003671 | 0.003448 | 0.003545 |
| test_actions.test | RUN | 2.974355 | 15.741831 | 15.338099 | 0.006054 | 0.005315 | 0.005406 |
| test_assert.test | RUN | 1.735877 | 6.899346 | 7.340430 | 0.003898 | 0.004049 | 0.003741 |
| test_assert_with_placeholder.test | RUN | 1.673468 | 6.280366 | 6.780508 | 0.003762 | 0.003295 | 0.003438 |
| test_symbols.test | RUN | 3.175095 | 15.521049 | 17.544656 | 0.004997 | 0.004913 | 0.005246 |
| test_dynamic.test | RUN | 1.996836 | 10.510188 | 9.920366 | 0.003797 | 0.003960 | 0.003841 |
| test_dynamic_grammar.test | RUN | 2.092751 | 11.129536 | 10.181668 | 0.003989 | 0.003740 | 0.003907 |
| test_skip.test | RUN | 2.454638 | 11.597195 | 11.765209 | 0.003595 | 0.003504 | 0.003765 |
| multiple_defs.test | LINK | 3.923124 | 20.635147 | 19.686104 | — | — | — |
| test_basic_regex.test | COMPILE | 0.906221 | 1.732185 | 2.786707 | — | — | — |
| test_match_results.test | COMPILE | 0.604048 | 1.288850 | 1.969407 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.580692 | 1.297078 | 1.954441 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.906303 | 1.878088 | 2.870777 | — | — | — |
| test_regex_constants.test | COMPILE | 0.051542 | 0.077217 | 0.098147 | — | — | — |
| test_regex_error.test | COMPILE | 0.340363 | 0.619199 | 1.042639 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.593653 | 1.207227 | 1.891826 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.848832 | 1.884096 | 2.452416 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.522666 | 1.206708 | 2.003838 | — | — | — |
| test_regex_traits.test | COMPILE | 0.338642 | 0.634915 | 1.059735 | — | — | — |
| test_sub_match.test | COMPILE | 0.252150 | 0.467189 | 0.789417 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.105× | 1.098×, 1.113× | 1.009× |
| clang | 0.950× | 0.947×, 0.953× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 2 | 0.010165s | 0.014731s | 0.009166s | byte equality observed |
| c_traits_u.test | 2 | 0.011039s | 0.015218s | 0.010132s | byte equality observed |
| misc1.test | 7 | 0.003311s | 0.003213s | 0.003080s | byte equality observed |
| misc2.test | 8 | 0.002925s | 0.002834s | 0.002893s | byte equality observed |
| regress.test | 2 | 0.013404s | 0.016888s | 0.011377s | byte equality observed |
| regress_u.test | 2 | 0.013653s | 0.017645s | 0.012073s | byte equality observed |
| test1.test | 9 | 0.002652s | 0.002585s | 0.002598s | byte equality observed |
| test10.test | 9 | 0.002573s | 0.002542s | 0.002564s | byte equality observed |
| test10u.test | 8 | 0.002594s | 0.002551s | 0.002549s | byte equality observed |
| test11.test | 9 | 0.002591s | 0.002582s | 0.002547s | byte equality observed |
| test11u.test | 9 | 0.002571s | 0.002620s | 0.002535s | byte equality observed |
| test1u.test | 8 | 0.002608s | 0.002595s | 0.002535s | byte equality observed |
| test2.test | 8 | 0.002670s | 0.002654s | 0.002602s | byte equality observed |
| test2u.test | 8 | 0.002675s | 0.002739s | 0.002637s | byte equality observed |
| test3.test | 8 | 0.002628s | 0.002723s | 0.002599s | byte equality observed |
| test3u.test | 8 | 0.002640s | 0.002707s | 0.002665s | byte equality observed |
| test4.test | 9 | 0.002610s | 0.002642s | 0.002569s | byte equality observed |
| test4u.test | 8 | 0.002659s | 0.002627s | 0.002579s | byte equality observed |
| test5.test | 8 | 0.002649s | 0.002671s | 0.002583s | byte equality observed |
| test5u.test | 8 | 0.002696s | 0.002672s | 0.002530s | byte equality observed |
| test6.test | 9 | 0.002640s | 0.002631s | 0.002542s | byte equality observed |
| test6u.test | 8 | 0.002679s | 0.002644s | 0.002581s | byte equality observed |
| test7.test | 9 | 0.002563s | 0.002640s | 0.002540s | byte equality observed |
| test7u.test | 8 | 0.002608s | 0.002556s | 0.002569s | byte equality observed |
| test8.test | 7 | 0.002613s | 0.002582s | 0.002516s | byte equality observed |
| test8u.test | 8 | 0.002601s | 0.002589s | 0.002559s | byte equality observed |
| test9.test | 8 | 0.002617s | 0.002599s | 0.002564s | byte equality observed |
| test9u.test | 8 | 0.002582s | 0.002672s | 0.002553s | byte equality observed |
| test_actions.test | 7 | 0.003336s | 0.003385s | 0.003172s | byte equality observed |
| test_assert.test | 8 | 0.002770s | 0.002757s | 0.002632s | byte equality observed |
| test_assert_with_placeholder.test | 9 | 0.002580s | 0.002567s | 0.002499s | byte equality observed |
| test_cycles.test | 9 | 0.002642s | 0.002618s | 0.002489s | byte equality observed |
| test_dynamic.test | 9 | 0.002624s | 0.002553s | 0.002545s | byte equality observed |
| test_dynamic_grammar.test | 8 | 0.002799s | 0.002809s | 0.002766s | byte equality observed |
| test_format.test | 8 | 0.002758s | 0.002735s | 0.002567s | byte equality observed |
| test_non_char.test | 8 | 0.002728s | 0.002613s | 0.002650s | byte equality observed |
| test_skip.test | 9 | 0.002547s | 0.002483s | 0.002487s | byte equality observed |
| test_static.test | 9 | 0.002400s | 0.002380s | 0.002489s | byte equality observed |
| test_symbols.test | 7 | 0.002971s | 0.003013s | 0.002749s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
