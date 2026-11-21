# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.446810 | 22.847504 | 17.199774 | 0.013750 | 0.016827 | 0.011471 |
| regress_u.test | RUN | 3.639126 | 23.347260 | 17.232083 | 0.013860 | 0.017403 | 0.012532 |
| c_traits.test | RUN | 3.365196 | 22.373271 | 16.787308 | 0.010436 | 0.013667 | 0.010092 |
| c_traits_u.test | RUN | 3.627111 | 23.303627 | 17.040105 | 0.010897 | 0.014952 | 0.010655 |
| test1.test | RUN | 1.261441 | 5.830439 | 5.223848 | 0.002666 | 0.002848 | 0.002885 |
| test2.test | RUN | 1.695073 | 8.421225 | 7.519128 | 0.002876 | 0.002984 | 0.002868 |
| test3.test | RUN | 1.680984 | 8.268604 | 7.680000 | 0.002782 | 0.003056 | 0.002663 |
| test4.test | RUN | 1.442024 | 6.737559 | 6.192109 | 0.002829 | 0.002993 | 0.002782 |
| test5.test | RUN | 1.540053 | 7.397249 | 6.756087 | 0.003131 | 0.003064 | 0.002839 |
| test6.test | RUN | 1.390434 | 6.275568 | 5.684706 | 0.002807 | 0.002807 | 0.002767 |
| test7.test | RUN | 1.376088 | 6.302882 | 5.747117 | 0.002808 | 0.002954 | 0.002779 |
| test8.test | RUN | 1.341922 | 6.143235 | 5.551476 | 0.002578 | 0.002707 | 0.002849 |
| test9.test | RUN | 1.468986 | 6.659846 | 6.286070 | 0.002801 | 0.002798 | 0.002477 |
| test10.test | RUN | 1.452566 | 6.382016 | 5.845659 | 0.003513 | 0.002741 | 0.002772 |
| test11.test | RUN | 1.389274 | 6.017054 | 5.762725 | 0.002698 | 0.002822 | 0.002842 |
| test1u.test | RUN | 1.254685 | 5.728891 | 5.018044 | 0.002779 | 0.002906 | 0.002840 |
| test2u.test | RUN | 1.717703 | 8.467891 | 7.704797 | 0.002954 | 0.003052 | 0.002858 |
| test3u.test | RUN | 1.729313 | 8.732956 | 7.927073 | 0.002913 | 0.002996 | 0.002785 |
| test4u.test | RUN | 1.465631 | 6.650459 | 6.101622 | 0.002777 | 0.002926 | 0.003084 |
| test5u.test | RUN | 1.575227 | 7.489406 | 6.912071 | 0.002947 | 0.002965 | 0.002847 |
| test6u.test | RUN | 1.447452 | 6.303024 | 5.841512 | 0.002843 | 0.002939 | 0.002855 |
| test7u.test | RUN | 1.413944 | 6.478204 | 5.943581 | 0.002655 | 0.002842 | 0.002818 |
| test8u.test | RUN | 1.355992 | 6.150749 | 5.562094 | 0.002922 | 0.002893 | 0.002835 |
| test9u.test | RUN | 1.465983 | 6.565628 | 6.341952 | 0.002825 | 0.002996 | 0.002480 |
| test10u.test | RUN | 1.437162 | 6.284430 | 5.785493 | 0.002746 | 0.002970 | 0.002795 |
| test11u.test | RUN | 1.420499 | 6.228003 | 5.919167 | 0.002875 | 0.002907 | 0.002816 |
| misc1.test | RUN | 2.571733 | 15.864464 | 12.916008 | 0.003519 | 0.003559 | 0.003593 |
| misc2.test | RUN | 2.607513 | 14.888859 | 12.307815 | 0.002888 | 0.003193 | 0.003148 |
| test_format.test | RUN | 2.740702 | 18.433134 | 14.250275 | 0.002901 | 0.003121 | 0.002914 |
| test_cycles.test | RUN | 1.203959 | 5.522482 | 4.637694 | 0.002691 | 0.002869 | 0.002884 |
| test_non_char.test | RUN | 2.263739 | 12.858290 | 10.637859 | 0.002848 | 0.002846 | 0.002869 |
| test_static.test | RUN | 1.138476 | 5.154848 | 4.216733 | 0.002834 | 0.002756 | 0.002810 |
| test_actions.test | RUN | 2.769929 | 15.349680 | 13.071323 | 0.003492 | 0.003628 | 0.003536 |
| test_assert.test | RUN | 1.560567 | 6.704684 | 6.075989 | 0.002917 | 0.003058 | 0.002937 |
| test_assert_with_placeholder.test | RUN | 1.479470 | 6.168676 | 5.574116 | 0.002812 | 0.002852 | 0.002409 |
| test_symbols.test | RUN | 2.873845 | 14.933141 | 14.753398 | 0.003594 | 0.003636 | 0.003632 |
| test_dynamic.test | RUN | 1.809792 | 10.227875 | 8.347071 | 0.002817 | 0.002783 | 0.002797 |
| test_dynamic_grammar.test | RUN | 1.884620 | 10.891000 | 8.878293 | 0.003067 | 0.003125 | 0.003148 |
| test_skip.test | RUN | 2.194936 | 11.065275 | 10.273746 | 0.002895 | 0.002777 | 0.002728 |
| multiple_defs.test | LINK | 3.610860 | 19.687856 | 16.755845 | — | — | — |
| test_basic_regex.test | COMPILE | 0.759143 | 1.662571 | 2.310394 | — | — | — |
| test_match_results.test | COMPILE | 0.498970 | 1.143357 | 1.503292 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.508219 | 1.156439 | 1.517583 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.767151 | 1.818309 | 2.303241 | — | — | — |
| test_regex_constants.test | COMPILE | 0.042027 | 0.073675 | 0.075088 | — | — | — |
| test_regex_error.test | COMPILE | 0.281558 | 0.610560 | 0.816256 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.500838 | 1.143275 | 1.498393 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.753111 | 1.811340 | 2.134498 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.504683 | 1.135608 | 1.391032 | — | — | — |
| test_regex_traits.test | COMPILE | 0.294229 | 0.618606 | 0.788716 | — | — | — |
| test_sub_match.test | COMPILE | 0.224608 | 0.497725 | 0.379150 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.098× | 1.112×, 1.085× | 1.002× |
| clang | 0.932× | 0.939×, 0.925× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.009404s | 0.012650s | 0.008659s | byte equality observed |
| c_traits_u.test | 2 | 0.010474s | 0.013416s | 0.009757s | byte equality observed |
| misc1.test | 9 | 0.002554s | 0.002422s | 0.002431s | byte equality observed |
| misc2.test | 10 | 0.002222s | 0.002153s | 0.002182s | byte equality observed |
| regress.test | 2 | 0.012458s | 0.015172s | 0.010296s | byte equality observed |
| regress_u.test | 2 | 0.012775s | 0.015578s | 0.011058s | byte equality observed |
| test1.test | 10 | 0.002059s | 0.002040s | 0.001988s | byte equality observed |
| test10.test | 10 | 0.002026s | 0.001980s | 0.001942s | byte equality observed |
| test10u.test | 10 | 0.002037s | 0.001944s | 0.001985s | byte equality observed |
| test11.test | 7 | 0.002006s | 0.002048s | 0.001905s | byte equality observed |
| test11u.test | 9 | 0.002031s | 0.001974s | 0.001944s | byte equality observed |
| test1u.test | 10 | 0.002048s | 0.002026s | 0.001979s | byte equality observed |
| test2.test | 10 | 0.002062s | 0.002108s | 0.002003s | byte equality observed |
| test2u.test | 10 | 0.002096s | 0.002118s | 0.002049s | byte equality observed |
| test3.test | 10 | 0.002041s | 0.002079s | 0.001975s | byte equality observed |
| test3u.test | 9 | 0.002096s | 0.002157s | 0.002036s | byte equality observed |
| test4.test | 10 | 0.002052s | 0.002064s | 0.001983s | byte equality observed |
| test4u.test | 10 | 0.002100s | 0.002090s | 0.002001s | byte equality observed |
| test5.test | 10 | 0.002056s | 0.002036s | 0.001974s | byte equality observed |
| test5u.test | 10 | 0.002085s | 0.002118s | 0.001974s | byte equality observed |
| test6.test | 10 | 0.002037s | 0.002057s | 0.001964s | byte equality observed |
| test6u.test | 9 | 0.002086s | 0.002027s | 0.001892s | byte equality observed |
| test7.test | 10 | 0.002035s | 0.002045s | 0.001976s | byte equality observed |
| test7u.test | 10 | 0.002051s | 0.002053s | 0.001965s | byte equality observed |
| test8.test | 10 | 0.001999s | 0.002024s | 0.002003s | byte equality observed |
| test8u.test | 10 | 0.002042s | 0.002018s | 0.001961s | byte equality observed |
| test9.test | 10 | 0.002045s | 0.001992s | 0.001924s | byte equality observed |
| test9u.test | 10 | 0.002067s | 0.002014s | 0.001955s | byte equality observed |
| test_actions.test | 9 | 0.002446s | 0.002426s | 0.002374s | byte equality observed |
| test_assert.test | 10 | 0.002095s | 0.002106s | 0.002051s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001999s | 0.001989s | 0.001922s | byte equality observed |
| test_cycles.test | 10 | 0.002023s | 0.002025s | 0.001938s | byte equality observed |
| test_dynamic.test | 10 | 0.002024s | 0.001988s | 0.001949s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002152s | 0.002135s | 0.002053s | byte equality observed |
| test_format.test | 10 | 0.002140s | 0.002093s | 0.002007s | byte equality observed |
| test_non_char.test | 10 | 0.002074s | 0.002023s | 0.001970s | byte equality observed |
| test_skip.test | 10 | 0.002038s | 0.001943s | 0.001916s | byte equality observed |
| test_static.test | 10 | 0.001917s | 0.001827s | 0.001871s | byte equality observed |
| test_symbols.test | 9 | 0.002024s | 0.002163s | 0.001894s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
