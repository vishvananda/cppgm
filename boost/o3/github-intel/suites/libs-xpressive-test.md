# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.557574 | 17.260032 | 12.632222 | 0.008907 | 0.010741 | 0.008004 |
| regress_u.test | RUN | 2.736475 | 17.840158 | 12.651023 | 0.009190 | 0.010754 | 0.008382 |
| c_traits.test | RUN | 2.578741 | 17.117062 | 12.274710 | 0.007514 | 0.009010 | 0.006940 |
| c_traits_u.test | RUN | 2.763308 | 17.626002 | 12.454647 | 0.007697 | 0.009793 | 0.007127 |
| test1.test | RUN | 0.905379 | 4.237814 | 3.581705 | 0.002395 | 0.002213 | 0.002147 |
| test2.test | RUN | 1.230389 | 6.126671 | 5.279348 | 0.002365 | 0.002372 | 0.002112 |
| test3.test | RUN | 1.225668 | 6.160154 | 5.351951 | 0.002205 | 0.002443 | 0.002060 |
| test4.test | RUN | 1.057353 | 4.964374 | 4.346687 | 0.002278 | 0.002441 | 0.002003 |
| test5.test | RUN | 1.127699 | 5.416190 | 4.727226 | 0.002349 | 0.002212 | 0.002164 |
| test6.test | RUN | 1.011198 | 4.520291 | 3.962161 | 0.002418 | 0.002649 | 0.002135 |
| test7.test | RUN | 0.981858 | 4.705669 | 4.028208 | 0.002342 | 0.002319 | 0.002093 |
| test8.test | RUN | 0.965971 | 4.573257 | 3.856353 | 0.002014 | 0.002328 | 0.002019 |
| test9.test | RUN | 1.056111 | 4.904819 | 4.411268 | 0.002166 | 0.002476 | 0.002116 |
| test10.test | RUN | 1.056724 | 4.630038 | 4.055691 | 0.002176 | 0.002296 | 0.002056 |
| test11.test | RUN | 0.990172 | 4.495452 | 4.033324 | 0.002300 | 0.002189 | 0.002164 |
| test1u.test | RUN | 0.897079 | 4.210210 | 3.478755 | 0.002280 | 0.002294 | 0.002085 |
| test2u.test | RUN | 1.249530 | 6.314878 | 5.450206 | 0.002324 | 0.002295 | 0.002105 |
| test3u.test | RUN | 1.248323 | 6.527839 | 5.575942 | 0.002140 | 0.002396 | 0.002305 |
| test4u.test | RUN | 1.065396 | 4.984631 | 4.324330 | 0.002268 | 0.002280 | 0.002256 |
| test5u.test | RUN | 1.145090 | 5.568610 | 4.865578 | 0.002199 | 0.002503 | 0.002173 |
| test6u.test | RUN | 1.049573 | 4.615586 | 4.015182 | 0.002158 | 0.002428 | 0.002482 |
| test7u.test | RUN | 1.011861 | 4.857617 | 4.125216 | 0.002201 | 0.002343 | 0.002192 |
| test8u.test | RUN | 0.963307 | 4.513113 | 3.863738 | 0.002434 | 0.002376 | 0.002142 |
| test9u.test | RUN | 1.062600 | 4.834641 | 4.413786 | 0.002334 | 0.002455 | 0.002093 |
| test10u.test | RUN | 1.052031 | 4.564088 | 3.987252 | 0.002208 | 0.002319 | 0.002183 |
| test11u.test | RUN | 1.046839 | 4.581099 | 4.182313 | 0.002570 | 0.002413 | 0.002236 |
| misc1.test | RUN | 1.952330 | 11.849827 | 9.243130 | 0.003373 | 0.002713 | 0.002951 |
| misc2.test | RUN | 1.931667 | 11.178444 | 8.979333 | 0.002357 | 0.002417 | 0.002356 |
| test_format.test | RUN | 2.070650 | 13.844428 | 10.372122 | 0.002268 | 0.002552 | 0.002247 |
| test_cycles.test | RUN | 0.868516 | 4.072618 | 3.236022 | 0.002234 | 0.002326 | 0.002184 |
| test_non_char.test | RUN | 1.683460 | 9.655864 | 7.780626 | 0.002275 | 0.002375 | 0.001912 |
| test_static.test | RUN | 0.794509 | 3.700014 | 2.875934 | 0.002251 | 0.002242 | 0.002192 |
| test_actions.test | RUN | 2.031841 | 11.499942 | 9.447759 | 0.002453 | 0.002691 | 0.002796 |
| test_assert.test | RUN | 1.139146 | 4.882917 | 4.223421 | 0.002266 | 0.002479 | 0.002356 |
| test_assert_with_placeholder.test | RUN | 1.061251 | 4.365690 | 3.888284 | 0.001922 | 0.002197 | 0.002249 |
| test_symbols.test | RUN | 2.107888 | 11.152536 | 10.589004 | 0.002699 | 0.002806 | 0.002862 |
| test_dynamic.test | RUN | 1.332680 | 7.598082 | 6.226989 | 0.002132 | 0.002454 | 0.002063 |
| test_dynamic_grammar.test | RUN | 1.389145 | 8.122195 | 6.232391 | 0.002295 | 0.002629 | 0.002278 |
| test_skip.test | RUN | 1.604916 | 8.182901 | 7.426546 | 0.002132 | 0.002238 | 0.002168 |
| multiple_defs.test | LINK | 2.631103 | 14.885994 | 12.172518 | — | — | — |
| test_basic_regex.test | COMPILE | 0.526200 | 1.113898 | 1.562484 | — | — | — |
| test_match_results.test | COMPILE | 0.347526 | 0.773102 | 0.995187 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.354109 | 0.765538 | 0.991897 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.532377 | 1.251553 | 1.501385 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027766 | 0.050003 | 0.053163 | — | — | — |
| test_regex_error.test | COMPILE | 0.189794 | 0.414815 | 0.532552 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.346211 | 0.773197 | 0.989940 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.498643 | 1.254324 | 1.332537 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.321286 | 0.785313 | 1.006251 | — | — | — |
| test_regex_traits.test | COMPILE | 0.196579 | 0.415755 | 0.521830 | — | — | — |
| test_sub_match.test | COMPILE | 0.162641 | 0.338592 | 0.274230 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.076× | 1.074×, 1.078× | 0.999× |
| clang | 0.964× | 0.965×, 0.963× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004882s | 0.006372s | 0.004893s | byte equality observed |
| c_traits_u.test | 3 | 0.005230s | 0.006765s | 0.005092s | byte equality observed |
| misc1.test | 10 | 0.001521s | 0.001532s | 0.001476s | byte equality observed |
| misc2.test | 10 | 0.001378s | 0.001385s | 0.001306s | byte equality observed |
| regress.test | 3 | 0.005996s | 0.007166s | 0.005510s | byte equality observed |
| regress_u.test | 3 | 0.006026s | 0.007511s | 0.005668s | byte equality observed |
| test1.test | 10 | 0.001301s | 0.001293s | 0.001261s | byte equality observed |
| test10.test | 10 | 0.001302s | 0.001278s | 0.001255s | byte equality observed |
| test10u.test | 10 | 0.001288s | 0.001281s | 0.001254s | byte equality observed |
| test11.test | 10 | 0.001281s | 0.001279s | 0.001231s | byte equality observed |
| test11u.test | 10 | 0.001297s | 0.001278s | 0.001245s | byte equality observed |
| test1u.test | 10 | 0.001287s | 0.001281s | 0.001265s | byte equality observed |
| test2.test | 10 | 0.001327s | 0.001314s | 0.001289s | byte equality observed |
| test2u.test | 10 | 0.001327s | 0.001313s | 0.001295s | byte equality observed |
| test3.test | 10 | 0.001320s | 0.001317s | 0.001285s | byte equality observed |
| test3u.test | 10 | 0.001301s | 0.001317s | 0.001270s | byte equality observed |
| test4.test | 10 | 0.001290s | 0.001303s | 0.001262s | byte equality observed |
| test4u.test | 8 | 0.001282s | 0.001290s | 0.001251s | byte equality observed |
| test5.test | 7 | 0.001311s | 0.001292s | 0.001271s | byte equality observed |
| test5u.test | 9 | 0.001314s | 0.001316s | 0.001288s | byte equality observed |
| test6.test | 10 | 0.001309s | 0.001271s | 0.001246s | byte equality observed |
| test6u.test | 10 | 0.001316s | 0.001291s | 0.001255s | byte equality observed |
| test7.test | 10 | 0.001303s | 0.001275s | 0.001288s | byte equality observed |
| test7u.test | 10 | 0.001302s | 0.001292s | 0.001262s | byte equality observed |
| test8.test | 10 | 0.001282s | 0.001262s | 0.001259s | byte equality observed |
| test8u.test | 10 | 0.001288s | 0.001296s | 0.001262s | byte equality observed |
| test9.test | 10 | 0.001294s | 0.001267s | 0.001270s | byte equality observed |
| test9u.test | 10 | 0.001311s | 0.001304s | 0.001248s | byte equality observed |
| test_actions.test | 10 | 0.001506s | 0.001494s | 0.001439s | byte equality observed |
| test_assert.test | 10 | 0.001355s | 0.001331s | 0.001338s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001302s | 0.001258s | 0.001228s | byte equality observed |
| test_cycles.test | 10 | 0.001307s | 0.001270s | 0.001255s | byte equality observed |
| test_dynamic.test | 10 | 0.001300s | 0.001299s | 0.001249s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001353s | 0.001328s | 0.001311s | byte equality observed |
| test_format.test | 10 | 0.001355s | 0.001321s | 0.001305s | byte equality observed |
| test_non_char.test | 10 | 0.001306s | 0.001276s | 0.001266s | byte equality observed |
| test_skip.test | 10 | 0.001288s | 0.001257s | 0.001271s | byte equality observed |
| test_static.test | 10 | 0.001247s | 0.001250s | 0.001229s | byte equality observed |
| test_symbols.test | 10 | 0.001465s | 0.001448s | 0.001430s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
