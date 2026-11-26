# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 3.368501 | 22.367533 | 16.539240 | 0.012060 | 0.014085 | 0.010990 |
| regress_u.test | RUN | 3.545833 | 23.216574 | 16.379075 | 0.012683 | 0.014271 | 0.012224 |
| c_traits.test | RUN | 3.400434 | 22.183079 | 15.623924 | 0.009788 | 0.011459 | 0.009538 |
| c_traits_u.test | RUN | 3.600733 | 22.975161 | 16.599286 | 0.010529 | 0.012867 | 0.010181 |
| test1.test | RUN | 1.181923 | 5.550848 | 4.749525 | 0.002876 | 0.002997 | 0.002767 |
| test2.test | RUN | 1.639676 | 8.000953 | 7.007944 | 0.002742 | 0.003135 | 0.002630 |
| test3.test | RUN | 1.619012 | 8.078095 | 6.914836 | 0.002848 | 0.003103 | 0.002968 |
| test4.test | RUN | 1.411974 | 6.562760 | 5.703270 | 0.003038 | 0.002972 | 0.002858 |
| test5.test | RUN | 1.492587 | 7.115194 | 6.113852 | 0.002756 | 0.002756 | 0.002474 |
| test6.test | RUN | 1.342702 | 5.956841 | 5.203702 | 0.002814 | 0.003128 | 0.002600 |
| test7.test | RUN | 1.296557 | 6.127573 | 5.178009 | 0.002588 | 0.002953 | 0.002553 |
| test8.test | RUN | 1.268384 | 5.917365 | 4.992491 | 0.002858 | 0.003101 | 0.002739 |
| test9.test | RUN | 1.385303 | 6.474345 | 5.764040 | 0.002749 | 0.003098 | 0.002779 |
| test10.test | RUN | 1.372313 | 6.135551 | 5.284699 | 0.002666 | 0.003081 | 0.002890 |
| test11.test | RUN | 1.303073 | 5.881139 | 5.222175 | 0.002928 | 0.003187 | 0.002836 |
| test1u.test | RUN | 1.191212 | 5.480694 | 4.543937 | 0.002865 | 0.002968 | 0.002710 |
| test2u.test | RUN | 1.641393 | 8.281285 | 7.146960 | 0.002816 | 0.003083 | 0.002719 |
| test3u.test | RUN | 1.634193 | 8.434242 | 7.286769 | 0.002724 | 0.003053 | 0.002810 |
| test4u.test | RUN | 1.398609 | 6.529512 | 5.624283 | 0.002776 | 0.003050 | 0.002787 |
| test5u.test | RUN | 1.502970 | 7.172331 | 6.373441 | 0.002698 | 0.003016 | 0.002768 |
| test6u.test | RUN | 1.381961 | 6.053542 | 5.358756 | 0.002837 | 0.003052 | 0.002893 |
| test7u.test | RUN | 1.350712 | 6.296644 | 5.488361 | 0.002998 | 0.003099 | 0.002708 |
| test8u.test | RUN | 1.283234 | 5.920232 | 5.029492 | 0.002759 | 0.002909 | 0.002811 |
| test9u.test | RUN | 1.408468 | 6.319573 | 5.722462 | 0.002735 | 0.002830 | 0.002674 |
| test10u.test | RUN | 1.370222 | 5.998697 | 5.272297 | 0.002701 | 0.002886 | 0.002944 |
| test11u.test | RUN | 1.366434 | 5.922639 | 5.515997 | 0.003523 | 0.002887 | 0.002734 |
| misc1.test | RUN | 2.601063 | 15.240743 | 12.052013 | 0.003830 | 0.003496 | 0.003294 |
| misc2.test | RUN | 2.581393 | 14.328556 | 11.817511 | 0.002980 | 0.003057 | 0.002981 |
| test_format.test | RUN | 2.720202 | 17.827475 | 13.539207 | 0.002903 | 0.002968 | 0.002921 |
| test_cycles.test | RUN | 1.150337 | 5.270741 | 4.322649 | 0.002772 | 0.002740 | 0.002700 |
| test_non_char.test | RUN | 2.189049 | 12.236893 | 9.822811 | 0.003469 | 0.003027 | 0.002826 |
| test_static.test | RUN | 1.067118 | 4.851066 | 3.840303 | 0.002748 | 0.002894 | 0.002655 |
| test_actions.test | RUN | 2.653196 | 14.576530 | 12.291578 | 0.003261 | 0.003561 | 0.003364 |
| test_assert.test | RUN | 1.507256 | 6.244502 | 5.559380 | 0.002944 | 0.003010 | 0.002619 |
| test_assert_with_placeholder.test | RUN | 1.406354 | 5.752694 | 5.066838 | 0.002764 | 0.002919 | 0.002983 |
| test_symbols.test | RUN | 2.752936 | 14.210362 | 13.519353 | 0.003786 | 0.003584 | 0.003476 |
| test_dynamic.test | RUN | 1.772330 | 9.881128 | 7.974727 | 0.002753 | 0.002962 | 0.002860 |
| test_dynamic_grammar.test | RUN | 1.853690 | 10.394342 | 8.218533 | 0.003097 | 0.003203 | 0.002751 |
| test_skip.test | RUN | 2.118285 | 10.498688 | 9.553416 | 0.002720 | 0.002990 | 0.002755 |
| multiple_defs.test | LINK | 3.485885 | 18.887924 | 15.989352 | — | — | — |
| test_basic_regex.test | COMPILE | 0.715855 | 1.526648 | 2.033302 | — | — | — |
| test_match_results.test | COMPILE | 0.465717 | 1.027441 | 1.309641 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.469107 | 1.010748 | 1.333375 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.730997 | 1.629575 | 1.999353 | — | — | — |
| test_regex_constants.test | COMPILE | 0.037101 | 0.065300 | 0.069217 | — | — | — |
| test_regex_error.test | COMPILE | 0.248653 | 0.548515 | 0.699066 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.458121 | 1.004335 | 1.319219 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.686791 | 1.642137 | 1.898308 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.424793 | 1.031832 | 1.319756 | — | — | — |
| test_regex_traits.test | COMPILE | 0.272843 | 0.516136 | 0.680969 | — | — | — |
| test_sub_match.test | COMPILE | 0.225867 | 0.442432 | 0.373967 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.060× | 1.062×, 1.057× | 1.006× |
| clang | 0.965× | 0.966×, 0.963× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.008597s | 0.010619s | 0.008468s | byte equality observed |
| c_traits_u.test | 3 | 0.009226s | 0.011084s | 0.008914s | byte equality observed |
| misc1.test | 9 | 0.002484s | 0.002452s | 0.002371s | byte equality observed |
| misc2.test | 9 | 0.002216s | 0.002165s | 0.002201s | byte equality observed |
| regress.test | 3 | 0.010735s | 0.012416s | 0.009822s | byte equality observed |
| regress_u.test | 2 | 0.011195s | 0.012891s | 0.010199s | byte equality observed |
| test1.test | 10 | 0.002065s | 0.002032s | 0.002008s | byte equality observed |
| test10.test | 9 | 0.002008s | 0.001989s | 0.001987s | byte equality observed |
| test10u.test | 10 | 0.002034s | 0.001982s | 0.001942s | byte equality observed |
| test11.test | 10 | 0.002025s | 0.001971s | 0.001962s | byte equality observed |
| test11u.test | 10 | 0.002018s | 0.001968s | 0.002000s | byte equality observed |
| test1u.test | 10 | 0.002036s | 0.002041s | 0.001993s | byte equality observed |
| test2.test | 10 | 0.002071s | 0.002092s | 0.002038s | byte equality observed |
| test2u.test | 9 | 0.002059s | 0.002115s | 0.002027s | byte equality observed |
| test3.test | 9 | 0.002052s | 0.002118s | 0.002004s | byte equality observed |
| test3u.test | 10 | 0.002112s | 0.002073s | 0.002017s | byte equality observed |
| test4.test | 10 | 0.002046s | 0.002042s | 0.001998s | byte equality observed |
| test4u.test | 10 | 0.002053s | 0.002001s | 0.002028s | byte equality observed |
| test5.test | 6 | 0.002071s | 0.002075s | 0.002019s | byte equality observed |
| test5u.test | 6 | 0.002060s | 0.002038s | 0.002030s | byte equality observed |
| test6.test | 10 | 0.001996s | 0.002010s | 0.001969s | byte equality observed |
| test6u.test | 9 | 0.002037s | 0.002054s | 0.001947s | byte equality observed |
| test7.test | 10 | 0.002046s | 0.002031s | 0.001928s | byte equality observed |
| test7u.test | 9 | 0.002024s | 0.001988s | 0.001972s | byte equality observed |
| test8.test | 9 | 0.002029s | 0.001958s | 0.001959s | byte equality observed |
| test8u.test | 9 | 0.001998s | 0.002020s | 0.001949s | byte equality observed |
| test9.test | 9 | 0.002031s | 0.002025s | 0.001972s | byte equality observed |
| test9u.test | 9 | 0.002036s | 0.002040s | 0.002010s | byte equality observed |
| test_actions.test | 7 | 0.002422s | 0.002435s | 0.002327s | byte equality observed |
| test_assert.test | 10 | 0.002096s | 0.002093s | 0.002043s | byte equality observed |
| test_assert_with_placeholder.test | 7 | 0.001956s | 0.001987s | 0.001921s | byte equality observed |
| test_cycles.test | 10 | 0.002061s | 0.002039s | 0.001992s | byte equality observed |
| test_dynamic.test | 10 | 0.001995s | 0.001999s | 0.001942s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.002125s | 0.002167s | 0.002121s | byte equality observed |
| test_format.test | 10 | 0.002101s | 0.002064s | 0.002038s | byte equality observed |
| test_non_char.test | 10 | 0.002037s | 0.002052s | 0.001990s | byte equality observed |
| test_skip.test | 10 | 0.001970s | 0.001960s | 0.001920s | byte equality observed |
| test_static.test | 10 | 0.001860s | 0.001901s | 0.001836s | byte equality observed |
| test_symbols.test | 9 | 0.002165s | 0.002188s | 0.002171s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
