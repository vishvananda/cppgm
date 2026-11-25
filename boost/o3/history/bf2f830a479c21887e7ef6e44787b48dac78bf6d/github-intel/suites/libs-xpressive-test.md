# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.546472 | 16.663880 | 11.803695 | 0.008979 | 0.010330 | 0.007905 |
| regress_u.test | RUN | 2.716157 | 16.808207 | 11.987728 | 0.009486 | 0.010574 | 0.008202 |
| c_traits.test | RUN | 2.575830 | 16.276603 | 11.468649 | 0.007318 | 0.008832 | 0.006712 |
| c_traits_u.test | RUN | 2.742583 | 16.849693 | 11.899665 | 0.007840 | 0.009336 | 0.007273 |
| test1.test | RUN | 0.905500 | 4.024688 | 3.380088 | 0.002324 | 0.002042 | 0.001852 |
| test2.test | RUN | 1.211719 | 5.838062 | 4.986331 | 0.002205 | 0.002181 | 0.001857 |
| test3.test | RUN | 1.213010 | 5.927274 | 5.131162 | 0.002054 | 0.002126 | 0.001883 |
| test4.test | RUN | 1.051399 | 4.810968 | 4.194305 | 0.002446 | 0.002104 | 0.001969 |
| test5.test | RUN | 1.122774 | 5.161336 | 4.447201 | 0.002085 | 0.002196 | 0.001950 |
| test6.test | RUN | 0.991059 | 4.306351 | 3.826940 | 0.002184 | 0.002079 | 0.001827 |
| test7.test | RUN | 0.966551 | 4.401073 | 3.861761 | 0.002268 | 0.002132 | 0.001891 |
| test8.test | RUN | 0.957076 | 4.286229 | 3.736027 | 0.002127 | 0.002156 | 0.001755 |
| test9.test | RUN | 1.036519 | 4.694997 | 4.110153 | 0.002270 | 0.001834 | 0.001815 |
| test10.test | RUN | 1.041990 | 4.414757 | 3.820125 | 0.002204 | 0.002029 | 0.001936 |
| test11.test | RUN | 1.002492 | 4.221547 | 3.825012 | 0.002457 | 0.002161 | 0.001813 |
| test1u.test | RUN | 0.892625 | 4.016001 | 3.333169 | 0.002183 | 0.002040 | 0.001995 |
| test2u.test | RUN | 1.233753 | 5.944758 | 5.078323 | 0.002085 | 0.002199 | 0.002002 |
| test3u.test | RUN | 1.243293 | 6.179113 | 5.213378 | 0.002159 | 0.002187 | 0.002053 |
| test4u.test | RUN | 1.064802 | 4.726464 | 4.116927 | 0.002250 | 0.002179 | 0.001886 |
| test5u.test | RUN | 1.144013 | 5.309982 | 4.631288 | 0.002007 | 0.002228 | 0.001947 |
| test6u.test | RUN | 1.024829 | 4.397419 | 3.800315 | 0.002055 | 0.002258 | 0.001880 |
| test7u.test | RUN | 1.004288 | 4.685647 | 3.912424 | 0.002404 | 0.002088 | 0.001969 |
| test8u.test | RUN | 0.966530 | 4.340463 | 3.689141 | 0.002191 | 0.002194 | 0.002017 |
| test9u.test | RUN | 1.037683 | 4.642949 | 4.238619 | 0.001998 | 0.002229 | 0.001832 |
| test10u.test | RUN | 1.015095 | 4.439710 | 3.776695 | 0.002065 | 0.002437 | 0.001980 |
| test11u.test | RUN | 1.043009 | 4.367934 | 3.966219 | 0.002200 | 0.002241 | 0.001867 |
| misc1.test | RUN | 1.921542 | 11.435540 | 8.802752 | 0.002814 | 0.002495 | 0.002371 |
| misc2.test | RUN | 1.909656 | 10.690845 | 8.509620 | 0.002169 | 0.002218 | 0.002028 |
| test_format.test | RUN | 2.035988 | 13.456244 | 9.790292 | 0.002520 | 0.002298 | 0.001890 |
| test_cycles.test | RUN | 0.850522 | 3.943174 | 3.146665 | 0.001969 | 0.002259 | 0.001879 |
| test_non_char.test | RUN | 1.682230 | 9.293656 | 7.177557 | 0.002328 | 0.002218 | 0.001795 |
| test_static.test | RUN | 0.798052 | 3.528788 | 2.788887 | 0.002174 | 0.001990 | 0.001840 |
| test_actions.test | RUN | 2.021773 | 10.950921 | 8.794496 | 0.002434 | 0.002521 | 0.002078 |
| test_assert.test | RUN | 1.139948 | 4.639958 | 4.036093 | 0.002549 | 0.002281 | 0.001899 |
| test_assert_with_placeholder.test | RUN | 1.055220 | 4.248970 | 3.644440 | 0.002106 | 0.002275 | 0.001840 |
| test_symbols.test | RUN | 2.084817 | 10.796709 | 9.922062 | 0.002459 | 0.002707 | 0.002234 |
| test_dynamic.test | RUN | 1.321500 | 7.353558 | 5.783892 | 0.002206 | 0.002042 | 0.001840 |
| test_dynamic_grammar.test | RUN | 1.376059 | 7.881951 | 5.997880 | 0.002218 | 0.002395 | 0.001979 |
| test_skip.test | RUN | 1.575445 | 7.864184 | 6.807115 | 0.002251 | 0.002022 | 0.001772 |
| multiple_defs.test | LINK | 2.613614 | 14.364921 | 11.647829 | — | — | — |
| test_basic_regex.test | COMPILE | 0.524279 | 1.096083 | 1.442103 | — | — | — |
| test_match_results.test | COMPILE | 0.343453 | 0.758185 | 0.934584 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.353136 | 0.754512 | 0.943294 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.524724 | 1.220179 | 1.426700 | — | — | — |
| test_regex_constants.test | COMPILE | 0.028018 | 0.048429 | 0.049848 | — | — | — |
| test_regex_error.test | COMPILE | 0.192706 | 0.402239 | 0.491867 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.336335 | 0.762730 | 0.941383 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.481777 | 1.234049 | 1.288803 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.311383 | 0.762502 | 0.923324 | — | — | — |
| test_regex_traits.test | COMPILE | 0.191003 | 0.410749 | 0.497398 | — | — | — |
| test_sub_match.test | COMPILE | 0.160497 | 0.328688 | 0.376513 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.084× | 1.077×, 1.091× | 0.995× |
| clang | 0.970× | 0.968×, 0.972× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 4 | 0.004874s | 0.006370s | 0.004893s | byte equality observed |
| c_traits_u.test | 3 | 0.005122s | 0.006802s | 0.005022s | byte equality observed |
| misc1.test | 10 | 0.001498s | 0.001504s | 0.001460s | byte equality observed |
| misc2.test | 10 | 0.001376s | 0.001362s | 0.001349s | byte equality observed |
| regress.test | 3 | 0.005876s | 0.007293s | 0.005393s | byte equality observed |
| regress_u.test | 3 | 0.006091s | 0.007374s | 0.005703s | byte equality observed |
| test1.test | 10 | 0.001266s | 0.001281s | 0.001260s | byte equality observed |
| test10.test | 10 | 0.001273s | 0.001275s | 0.001230s | byte equality observed |
| test10u.test | 10 | 0.001266s | 0.001255s | 0.001254s | byte equality observed |
| test11.test | 10 | 0.001251s | 0.001242s | 0.001229s | byte equality observed |
| test11u.test | 10 | 0.001280s | 0.001267s | 0.001285s | byte equality observed |
| test1u.test | 10 | 0.001260s | 0.001287s | 0.001260s | byte equality observed |
| test2.test | 10 | 0.001304s | 0.001301s | 0.001276s | byte equality observed |
| test2u.test | 10 | 0.001296s | 0.001323s | 0.001273s | byte equality observed |
| test3.test | 10 | 0.001296s | 0.001289s | 0.001282s | byte equality observed |
| test3u.test | 10 | 0.001311s | 0.001325s | 0.001281s | byte equality observed |
| test4.test | 10 | 0.001274s | 0.001249s | 0.001253s | byte equality observed |
| test4u.test | 10 | 0.001292s | 0.001284s | 0.001259s | byte equality observed |
| test5.test | 10 | 0.001299s | 0.001262s | 0.001292s | byte equality observed |
| test5u.test | 10 | 0.001299s | 0.001300s | 0.001276s | byte equality observed |
| test6.test | 10 | 0.001272s | 0.001253s | 0.001239s | byte equality observed |
| test6u.test | 10 | 0.001266s | 0.001278s | 0.001219s | byte equality observed |
| test7.test | 7 | 0.001304s | 0.001239s | 0.001252s | byte equality observed |
| test7u.test | 7 | 0.001286s | 0.001284s | 0.001256s | byte equality observed |
| test8.test | 10 | 0.001249s | 0.001227s | 0.001234s | byte equality observed |
| test8u.test | 10 | 0.001254s | 0.001259s | 0.001239s | byte equality observed |
| test9.test | 10 | 0.001273s | 0.001267s | 0.001236s | byte equality observed |
| test9u.test | 10 | 0.001260s | 0.001272s | 0.001266s | byte equality observed |
| test_actions.test | 10 | 0.001488s | 0.001497s | 0.001419s | byte equality observed |
| test_assert.test | 10 | 0.001319s | 0.001323s | 0.001321s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001241s | 0.001236s | 0.001235s | byte equality observed |
| test_cycles.test | 10 | 0.001271s | 0.001288s | 0.001279s | byte equality observed |
| test_dynamic.test | 10 | 0.001242s | 0.001265s | 0.001239s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001337s | 0.001341s | 0.001319s | byte equality observed |
| test_format.test | 10 | 0.001328s | 0.001310s | 0.001291s | byte equality observed |
| test_non_char.test | 10 | 0.001310s | 0.001287s | 0.001279s | byte equality observed |
| test_skip.test | 10 | 0.001280s | 0.001261s | 0.001248s | byte equality observed |
| test_static.test | 10 | 0.001250s | 0.001239s | 0.001252s | byte equality observed |
| test_symbols.test | 10 | 0.001436s | 0.001385s | 0.001390s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
