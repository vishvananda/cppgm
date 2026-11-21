# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.719330 | 18.351767 | 13.991966 | 0.010304 | 0.014243 | 0.009582 |
| regress_u.test | RUN | 2.832263 | 18.959622 | 13.991575 | 0.009644 | 0.013520 | 0.009814 |
| c_traits.test | RUN | 2.669743 | 18.263341 | 13.538047 | 0.008453 | 0.011629 | 0.008019 |
| c_traits_u.test | RUN | 2.902298 | 18.848596 | 13.949630 | 0.008812 | 0.012616 | 0.008802 |
| test1.test | RUN | 1.057076 | 4.695676 | 4.197728 | 0.002711 | 0.003308 | 0.003006 |
| test2.test | RUN | 1.382082 | 6.779073 | 5.971192 | 0.002899 | 0.003092 | 0.003309 |
| test3.test | RUN | 1.375437 | 6.693357 | 6.134110 | 0.003074 | 0.003372 | 0.002981 |
| test4.test | RUN | 1.198924 | 5.535765 | 5.025506 | 0.002714 | 0.003193 | 0.003058 |
| test5.test | RUN | 1.275871 | 5.861950 | 5.506676 | 0.002866 | 0.003190 | 0.003194 |
| test6.test | RUN | 1.142605 | 4.966680 | 4.632662 | 0.002973 | 0.003241 | 0.002923 |
| test7.test | RUN | 1.121965 | 5.093721 | 4.716837 | 0.002631 | 0.003374 | 0.003097 |
| test8.test | RUN | 1.108756 | 4.916958 | 4.589984 | 0.002991 | 0.003322 | 0.003076 |
| test9.test | RUN | 1.202325 | 5.401620 | 5.080591 | 0.003115 | 0.003373 | 0.003167 |
| test10.test | RUN | 1.159709 | 5.099383 | 4.719718 | 0.002933 | 0.003252 | 0.002820 |
| test11.test | RUN | 1.143810 | 5.019480 | 4.681529 | 0.002757 | 0.003320 | 0.003187 |
| test1u.test | RUN | 1.034192 | 4.647054 | 4.154080 | 0.002825 | 0.003258 | 0.003135 |
| test2u.test | RUN | 1.416746 | 7.033130 | 6.329664 | 0.003112 | 0.003082 | 0.002735 |
| test3u.test | RUN | 1.416559 | 7.161998 | 6.497747 | 0.003015 | 0.003355 | 0.003243 |
| test4u.test | RUN | 1.208150 | 5.422669 | 5.101288 | 0.003044 | 0.003312 | 0.003105 |
| test5u.test | RUN | 1.287319 | 6.116521 | 5.751573 | 0.003017 | 0.003397 | 0.003150 |
| test6u.test | RUN | 1.185965 | 5.158160 | 4.802342 | 0.002984 | 0.003288 | 0.003069 |
| test7u.test | RUN | 1.177036 | 5.356484 | 4.884157 | 0.002820 | 0.003356 | 0.003084 |
| test8u.test | RUN | 1.119043 | 5.075147 | 4.583413 | 0.002944 | 0.003443 | 0.003088 |
| test9u.test | RUN | 1.211805 | 5.503825 | 5.126156 | 0.003026 | 0.002993 | 0.002805 |
| test10u.test | RUN | 1.194971 | 5.255840 | 4.761366 | 0.002972 | 0.003329 | 0.003138 |
| test11u.test | RUN | 1.192005 | 5.222551 | 4.884965 | 0.003283 | 0.003179 | 0.003082 |
| misc1.test | RUN | 2.133338 | 13.231833 | 10.505298 | 0.003925 | 0.004266 | 0.004000 |
| misc2.test | RUN | 2.076657 | 12.542752 | 10.206879 | 0.003197 | 0.003542 | 0.003354 |
| test_format.test | RUN | 2.210959 | 15.270802 | 11.503087 | 0.003213 | 0.003501 | 0.003220 |
| test_cycles.test | RUN | 0.994721 | 4.651537 | 3.894621 | 0.003060 | 0.003061 | 0.003118 |
| test_non_char.test | RUN | 1.804095 | 10.753226 | 8.706203 | 0.003365 | 0.003400 | 0.003255 |
| test_static.test | RUN | 0.923245 | 4.243904 | 3.401546 | 0.003046 | 0.003269 | 0.003053 |
| test_actions.test | RUN | 2.272205 | 12.908361 | 10.807476 | 0.004001 | 0.004440 | 0.003531 |
| test_assert.test | RUN | 1.346180 | 5.593374 | 4.985072 | 0.003168 | 0.003531 | 0.003326 |
| test_assert_with_placeholder.test | RUN | 1.240224 | 5.115741 | 4.476133 | 0.003111 | 0.003157 | 0.002786 |
| test_symbols.test | RUN | 2.374354 | 12.543079 | 12.020036 | 0.004012 | 0.004434 | 0.004478 |
| test_dynamic.test | RUN | 1.490322 | 8.464690 | 6.778030 | 0.003164 | 0.003266 | 0.003260 |
| test_dynamic_grammar.test | RUN | 1.527090 | 8.972077 | 7.204517 | 0.003271 | 0.003595 | 0.003351 |
| test_skip.test | RUN | 1.812576 | 9.047538 | 8.305122 | 0.003082 | 0.003006 | 0.003057 |
| multiple_defs.test | LINK | 2.926388 | 16.492795 | 13.737690 | — | — | — |
| test_basic_regex.test | COMPILE | 0.637166 | 1.351680 | 1.887784 | — | — | — |
| test_match_results.test | COMPILE | 0.426136 | 0.986025 | 1.219110 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.428793 | 0.960761 | 1.273975 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.647834 | 1.554021 | 1.920963 | — | — | — |
| test_regex_constants.test | COMPILE | 0.036727 | 0.066915 | 0.071557 | — | — | — |
| test_regex_error.test | COMPILE | 0.241456 | 0.524907 | 0.679946 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.428638 | 0.968163 | 1.243809 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.662742 | 1.490651 | 1.754397 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.406553 | 0.935161 | 1.091783 | — | — | — |
| test_regex_traits.test | COMPILE | 0.254856 | 0.512034 | 0.701988 | — | — | — |
| test_sub_match.test | COMPILE | 0.209914 | 0.409754 | 0.462008 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.113× | 1.117×, 1.108× | 1.006× |
| clang | 0.954× | 0.960×, 0.948× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.006993s | 0.010233s | 0.006570s | byte equality observed |
| c_traits_u.test | 3 | 0.007617s | 0.010569s | 0.006999s | byte equality observed |
| misc1.test | 8 | 0.002597s | 0.002528s | 0.002501s | byte equality observed |
| misc2.test | 9 | 0.002282s | 0.002201s | 0.002215s | byte equality observed |
| regress.test | 3 | 0.009017s | 0.011713s | 0.008033s | byte equality observed |
| regress_u.test | 3 | 0.009149s | 0.011882s | 0.008263s | byte equality observed |
| test1.test | 8 | 0.002019s | 0.002026s | 0.002003s | byte equality observed |
| test10.test | 9 | 0.001993s | 0.001975s | 0.001933s | byte equality observed |
| test10u.test | 9 | 0.002010s | 0.001959s | 0.001977s | byte equality observed |
| test11.test | 10 | 0.002003s | 0.001988s | 0.001972s | byte equality observed |
| test11u.test | 10 | 0.002018s | 0.001959s | 0.001962s | byte equality observed |
| test1u.test | 10 | 0.002017s | 0.002023s | 0.001987s | byte equality observed |
| test2.test | 10 | 0.002040s | 0.002057s | 0.001981s | byte equality observed |
| test2u.test | 10 | 0.002064s | 0.002053s | 0.001994s | byte equality observed |
| test3.test | 10 | 0.002051s | 0.002064s | 0.002004s | byte equality observed |
| test3u.test | 10 | 0.002061s | 0.002105s | 0.002000s | byte equality observed |
| test4.test | 10 | 0.002018s | 0.002002s | 0.001990s | byte equality observed |
| test4u.test | 10 | 0.002055s | 0.002056s | 0.001984s | byte equality observed |
| test5.test | 10 | 0.002057s | 0.002054s | 0.001984s | byte equality observed |
| test5u.test | 10 | 0.002020s | 0.002068s | 0.001990s | byte equality observed |
| test6.test | 9 | 0.001983s | 0.002029s | 0.001961s | byte equality observed |
| test6u.test | 9 | 0.002022s | 0.002027s | 0.001988s | byte equality observed |
| test7.test | 10 | 0.002006s | 0.001998s | 0.001963s | byte equality observed |
| test7u.test | 10 | 0.002023s | 0.002033s | 0.001977s | byte equality observed |
| test8.test | 10 | 0.002026s | 0.002042s | 0.001974s | byte equality observed |
| test8u.test | 10 | 0.001998s | 0.002001s | 0.001950s | byte equality observed |
| test9.test | 10 | 0.002023s | 0.001994s | 0.001973s | byte equality observed |
| test9u.test | 10 | 0.002034s | 0.002038s | 0.001990s | byte equality observed |
| test_actions.test | 8 | 0.002568s | 0.002574s | 0.002489s | byte equality observed |
| test_assert.test | 9 | 0.002129s | 0.002102s | 0.002098s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001983s | 0.001936s | 0.001933s | byte equality observed |
| test_cycles.test | 10 | 0.002025s | 0.001996s | 0.001975s | byte equality observed |
| test_dynamic.test | 6 | 0.002037s | 0.002016s | 0.001979s | byte equality observed |
| test_dynamic_grammar.test | 7 | 0.002169s | 0.002146s | 0.002092s | byte equality observed |
| test_format.test | 9 | 0.002103s | 0.002105s | 0.002040s | byte equality observed |
| test_non_char.test | 9 | 0.002098s | 0.002051s | 0.002027s | byte equality observed |
| test_skip.test | 10 | 0.001949s | 0.001978s | 0.001911s | byte equality observed |
| test_static.test | 10 | 0.001901s | 0.001888s | 0.001907s | byte equality observed |
| test_symbols.test | 9 | 0.002269s | 0.002325s | 0.002239s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
