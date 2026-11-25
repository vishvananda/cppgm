# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.553915 | 17.129980 | 12.705206 | 0.008688 | 0.010377 | 0.008489 |
| regress_u.test | RUN | 2.691442 | 17.636724 | 12.768842 | 0.008745 | 0.010919 | 0.008698 |
| c_traits.test | RUN | 2.522108 | 16.888878 | 12.226200 | 0.007120 | 0.008833 | 0.006988 |
| c_traits_u.test | RUN | 2.715971 | 17.392253 | 12.744114 | 0.007570 | 0.009909 | 0.007634 |
| test1.test | RUN | 0.878680 | 4.176270 | 3.578869 | 0.002094 | 0.002200 | 0.002076 |
| test2.test | RUN | 1.202984 | 6.040063 | 5.293759 | 0.002292 | 0.002473 | 0.002251 |
| test3.test | RUN | 1.194117 | 6.099803 | 5.329448 | 0.002079 | 0.002501 | 0.002398 |
| test4.test | RUN | 1.043458 | 4.986642 | 4.374016 | 0.002060 | 0.002155 | 0.002222 |
| test5.test | RUN | 1.100491 | 5.317714 | 4.627156 | 0.002176 | 0.002170 | 0.002251 |
| test6.test | RUN | 0.992849 | 4.445577 | 3.926419 | 0.002158 | 0.002304 | 0.002189 |
| test7.test | RUN | 0.963567 | 4.571098 | 4.064002 | 0.001946 | 0.002276 | 0.002395 |
| test8.test | RUN | 0.948414 | 4.428396 | 3.938596 | 0.002066 | 0.002401 | 0.002336 |
| test9.test | RUN | 1.032537 | 4.808933 | 4.400434 | 0.002108 | 0.002394 | 0.002141 |
| test10.test | RUN | 1.016893 | 4.514880 | 4.031133 | 0.002087 | 0.002418 | 0.001897 |
| test11.test | RUN | 0.967468 | 4.408620 | 3.993362 | 0.002026 | 0.002146 | 0.002244 |
| test1u.test | RUN | 0.878065 | 4.150984 | 3.459538 | 0.001771 | 0.002214 | 0.002020 |
| test2u.test | RUN | 1.212428 | 6.183678 | 5.382969 | 0.002321 | 0.002156 | 0.001738 |
| test3u.test | RUN | 1.238463 | 6.383043 | 5.500080 | 0.002131 | 0.002273 | 0.002212 |
| test4u.test | RUN | 1.070339 | 4.904479 | 4.313931 | 0.002528 | 0.002363 | 0.002086 |
| test5u.test | RUN | 1.117331 | 5.475000 | 4.887321 | 0.002157 | 0.002155 | 0.002308 |
| test6u.test | RUN | 1.041331 | 4.549074 | 4.053080 | 0.002241 | 0.002404 | 0.002246 |
| test7u.test | RUN | 1.002523 | 4.799278 | 4.152920 | 0.002200 | 0.002277 | 0.002146 |
| test8u.test | RUN | 0.954447 | 4.394520 | 3.931761 | 0.002122 | 0.002147 | 0.002502 |
| test9u.test | RUN | 1.045836 | 4.764080 | 4.479882 | 0.002119 | 0.002366 | 0.002256 |
| test10u.test | RUN | 1.033797 | 4.465709 | 4.152741 | 0.002108 | 0.002105 | 0.002091 |
| test11u.test | RUN | 1.029962 | 4.495563 | 4.228571 | 0.002459 | 0.002354 | 0.002057 |
| misc1.test | RUN | 1.919560 | 11.543016 | 9.403645 | 0.002657 | 0.002687 | 0.002561 |
| misc2.test | RUN | 1.931252 | 11.016750 | 9.028257 | 0.002415 | 0.002521 | 0.002549 |
| test_format.test | RUN | 2.072182 | 13.695662 | 10.371852 | 0.002313 | 0.002362 | 0.002103 |
| test_cycles.test | RUN | 0.853262 | 3.999261 | 3.304110 | 0.001995 | 0.002284 | 0.002292 |
| test_non_char.test | RUN | 1.661292 | 9.545619 | 7.641328 | 0.002426 | 0.002475 | 0.002215 |
| test_static.test | RUN | 0.800455 | 3.699846 | 2.928412 | 0.002084 | 0.002226 | 0.002054 |
| test_actions.test | RUN | 2.015521 | 11.411038 | 9.380831 | 0.002696 | 0.002776 | 0.002725 |
| test_assert.test | RUN | 1.102493 | 4.748062 | 4.254568 | 0.002382 | 0.002218 | 0.002154 |
| test_assert_with_placeholder.test | RUN | 1.041914 | 4.369749 | 3.841087 | 0.002019 | 0.002026 | 0.002153 |
| test_symbols.test | RUN | 2.107290 | 10.994505 | 10.517308 | 0.002594 | 0.002844 | 0.002727 |
| test_dynamic.test | RUN | 1.328091 | 7.557796 | 5.935053 | 0.002105 | 0.002376 | 0.002358 |
| test_dynamic_grammar.test | RUN | 1.400734 | 8.022709 | 6.408295 | 0.002878 | 0.002210 | 0.002180 |
| test_skip.test | RUN | 1.581068 | 8.098012 | 7.350102 | 0.002124 | 0.002145 | 0.002132 |
| multiple_defs.test | LINK | 2.628199 | 14.751244 | 12.242036 | — | — | — |
| test_basic_regex.test | COMPILE | 0.516651 | 1.127766 | 1.483475 | — | — | — |
| test_match_results.test | COMPILE | 0.337911 | 0.761249 | 1.048527 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.343817 | 0.770096 | 1.015780 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.519587 | 1.249201 | 1.547491 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027591 | 0.049709 | 0.053397 | — | — | — |
| test_regex_error.test | COMPILE | 0.192467 | 0.416877 | 0.547851 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.343623 | 0.775137 | 0.971878 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.485387 | 1.263706 | 1.395307 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.321615 | 0.774677 | 0.976010 | — | — | — |
| test_regex_traits.test | COMPILE | 0.194264 | 0.419072 | 0.475742 | — | — | — |
| test_sub_match.test | COMPILE | 0.161609 | 0.332048 | 0.345167 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.078× | 1.081×, 1.075× | 0.997× |
| clang | 0.962× | 0.949×, 0.974× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004967s | 0.006460s | 0.004836s | byte equality observed |
| c_traits_u.test | 3 | 0.005341s | 0.006729s | 0.005079s | byte equality observed |
| misc1.test | 10 | 0.001492s | 0.001536s | 0.001484s | byte equality observed |
| misc2.test | 10 | 0.001368s | 0.001408s | 0.001336s | byte equality observed |
| regress.test | 3 | 0.005965s | 0.007225s | 0.005437s | byte equality observed |
| regress_u.test | 3 | 0.006236s | 0.007435s | 0.005777s | byte equality observed |
| test1.test | 10 | 0.001258s | 0.001276s | 0.001250s | byte equality observed |
| test10.test | 10 | 0.001313s | 0.001265s | 0.001251s | byte equality observed |
| test10u.test | 10 | 0.001281s | 0.001256s | 0.001242s | byte equality observed |
| test11.test | 10 | 0.001314s | 0.001259s | 0.001229s | byte equality observed |
| test11u.test | 10 | 0.001282s | 0.001263s | 0.001248s | byte equality observed |
| test1u.test | 10 | 0.001278s | 0.001287s | 0.001255s | byte equality observed |
| test2.test | 10 | 0.001304s | 0.001331s | 0.001290s | byte equality observed |
| test2u.test | 10 | 0.001315s | 0.001364s | 0.001290s | byte equality observed |
| test3.test | 10 | 0.001318s | 0.001307s | 0.001266s | byte equality observed |
| test3u.test | 10 | 0.001304s | 0.001320s | 0.001294s | byte equality observed |
| test4.test | 10 | 0.001300s | 0.001271s | 0.001239s | byte equality observed |
| test4u.test | 10 | 0.001279s | 0.001279s | 0.001258s | byte equality observed |
| test5.test | 10 | 0.001276s | 0.001282s | 0.001252s | byte equality observed |
| test5u.test | 10 | 0.001282s | 0.001292s | 0.001283s | byte equality observed |
| test6.test | 10 | 0.001262s | 0.001280s | 0.001250s | byte equality observed |
| test6u.test | 10 | 0.001267s | 0.001308s | 0.001252s | byte equality observed |
| test7.test | 10 | 0.001275s | 0.001322s | 0.001257s | byte equality observed |
| test7u.test | 10 | 0.001268s | 0.001324s | 0.001274s | byte equality observed |
| test8.test | 10 | 0.001273s | 0.001283s | 0.001283s | byte equality observed |
| test8u.test | 10 | 0.001283s | 0.001274s | 0.001249s | byte equality observed |
| test9.test | 10 | 0.001283s | 0.001292s | 0.001262s | byte equality observed |
| test9u.test | 10 | 0.001302s | 0.001295s | 0.001268s | byte equality observed |
| test_actions.test | 10 | 0.001521s | 0.001493s | 0.001445s | byte equality observed |
| test_assert.test | 10 | 0.001334s | 0.001315s | 0.001325s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001264s | 0.001266s | 0.001231s | byte equality observed |
| test_cycles.test | 10 | 0.001285s | 0.001291s | 0.001294s | byte equality observed |
| test_dynamic.test | 10 | 0.001286s | 0.001272s | 0.001216s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001336s | 0.001328s | 0.001290s | byte equality observed |
| test_format.test | 10 | 0.001346s | 0.001312s | 0.001278s | byte equality observed |
| test_non_char.test | 10 | 0.001278s | 0.001283s | 0.001241s | byte equality observed |
| test_skip.test | 10 | 0.001270s | 0.001259s | 0.001225s | byte equality observed |
| test_static.test | 10 | 0.001246s | 0.001256s | 0.001239s | byte equality observed |
| test_symbols.test | 10 | 0.001467s | 0.001427s | 0.001430s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
