# libs/xpressive/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| regress.test | RUN | 2.547371 | 16.742564 | 12.723643 | 0.008970 | 0.010175 | 0.007985 |
| regress_u.test | RUN | 2.720213 | 17.296722 | 12.968608 | 0.009510 | 0.010959 | 0.008705 |
| c_traits.test | RUN | 2.550454 | 16.628189 | 12.211766 | 0.006565 | 0.008777 | 0.006900 |
| c_traits_u.test | RUN | 2.734712 | 17.183318 | 12.633920 | 0.007764 | 0.009624 | 0.007404 |
| test1.test | RUN | 0.909755 | 4.101110 | 3.626155 | 0.002111 | 0.002240 | 0.002186 |
| test2.test | RUN | 1.245454 | 5.937086 | 5.350082 | 0.002306 | 0.002206 | 0.002131 |
| test3.test | RUN | 1.237928 | 5.975664 | 5.425884 | 0.002148 | 0.002366 | 0.002248 |
| test4.test | RUN | 1.052155 | 4.824388 | 4.410308 | 0.002316 | 0.002302 | 0.002138 |
| test5.test | RUN | 1.130198 | 5.209968 | 4.821522 | 0.002155 | 0.002177 | 0.002287 |
| test6.test | RUN | 1.010571 | 4.388329 | 4.017467 | 0.002306 | 0.002307 | 0.002333 |
| test7.test | RUN | 0.994340 | 4.532780 | 4.037603 | 0.002234 | 0.002385 | 0.002475 |
| test8.test | RUN | 0.982350 | 4.382098 | 3.923672 | 0.002125 | 0.002234 | 0.002115 |
| test9.test | RUN | 1.067115 | 4.849314 | 4.449768 | 0.002300 | 0.002250 | 0.002264 |
| test10.test | RUN | 1.036941 | 4.503119 | 4.168683 | 0.002076 | 0.002162 | 0.002204 |
| test11.test | RUN | 0.996529 | 4.392825 | 4.054182 | 0.002209 | 0.002128 | 0.002235 |
| test1u.test | RUN | 0.901038 | 4.116714 | 3.567004 | 0.002497 | 0.002150 | 0.002331 |
| test2u.test | RUN | 1.257676 | 6.212848 | 5.541709 | 0.002395 | 0.002244 | 0.002295 |
| test3u.test | RUN | 1.253378 | 6.342917 | 5.730868 | 0.002422 | 0.002287 | 0.002331 |
| test4u.test | RUN | 1.073986 | 4.857965 | 4.474136 | 0.002448 | 0.002323 | 0.002434 |
| test5u.test | RUN | 1.156080 | 5.365752 | 4.988676 | 0.002144 | 0.002158 | 0.002168 |
| test6u.test | RUN | 1.058282 | 4.416860 | 4.154311 | 0.002229 | 0.002149 | 0.002294 |
| test7u.test | RUN | 1.018807 | 4.663852 | 4.201535 | 0.002048 | 0.002328 | 0.002383 |
| test8u.test | RUN | 0.979027 | 4.326068 | 3.947199 | 0.002156 | 0.002202 | 0.002227 |
| test9u.test | RUN | 1.057632 | 4.716250 | 4.450873 | 0.002277 | 0.002097 | 0.002186 |
| test10u.test | RUN | 1.044556 | 4.397681 | 4.106469 | 0.002379 | 0.002095 | 0.002142 |
| test11u.test | RUN | 1.053916 | 4.439972 | 4.193609 | 0.002403 | 0.002382 | 0.002322 |
| misc1.test | RUN | 1.923485 | 11.478282 | 9.441770 | 0.002737 | 0.002424 | 0.002759 |
| misc2.test | RUN | 1.939161 | 10.950540 | 9.048984 | 0.002384 | 0.002409 | 0.002390 |
| test_format.test | RUN | 2.060376 | 13.382550 | 10.302437 | 0.002459 | 0.002264 | 0.002456 |
| test_cycles.test | RUN | 0.865464 | 3.977559 | 3.360269 | 0.002032 | 0.002057 | 0.002353 |
| test_non_char.test | RUN | 1.671467 | 9.301868 | 7.732337 | 0.002408 | 0.002229 | 0.002355 |
| test_static.test | RUN | 0.812347 | 3.591482 | 2.974769 | 0.002122 | 0.002049 | 0.002291 |
| test_actions.test | RUN | 2.076952 | 11.081510 | 9.424729 | 0.002851 | 0.002593 | 0.002782 |
| test_assert.test | RUN | 1.133226 | 4.751593 | 4.381884 | 0.002603 | 0.002290 | 0.002156 |
| test_assert_with_placeholder.test | RUN | 1.085374 | 4.287704 | 3.799511 | 0.002174 | 0.002197 | 0.002267 |
| test_symbols.test | RUN | 2.151774 | 10.791659 | 10.572693 | 0.002788 | 0.002556 | 0.002590 |
| test_dynamic.test | RUN | 1.348319 | 7.399361 | 6.098120 | 0.002431 | 0.002087 | 0.002282 |
| test_dynamic_grammar.test | RUN | 1.413023 | 7.899327 | 6.371596 | 0.002348 | 0.002448 | 0.002213 |
| test_skip.test | RUN | 1.639374 | 7.845045 | 7.353896 | 0.001988 | 0.002107 | 0.002026 |
| multiple_defs.test | LINK | 2.630815 | 14.372117 | 12.234911 | — | — | — |
| test_basic_regex.test | COMPILE | 0.531810 | 1.100466 | 1.550891 | — | — | — |
| test_match_results.test | COMPILE | 0.359706 | 0.740840 | 0.999256 | — | — | — |
| test_regex_algorithms.test | COMPILE | 0.358702 | 0.750254 | 1.031234 | — | — | — |
| test_regex_compiler.test | COMPILE | 0.541354 | 1.202307 | 1.521524 | — | — | — |
| test_regex_constants.test | COMPILE | 0.027814 | 0.043750 | 0.053282 | — | — | — |
| test_regex_error.test | COMPILE | 0.192529 | 0.401182 | 0.552672 | — | — | — |
| test_regex_iterator.test | COMPILE | 0.343904 | 0.750349 | 0.950310 | — | — | — |
| test_regex_primitives.test | COMPILE | 0.532846 | 1.221113 | 1.399874 | — | — | — |
| test_regex_token_iterator.test | COMPILE | 0.343146 | 0.760311 | 0.884027 | — | — | — |
| test_regex_traits.test | COMPILE | 0.202306 | 0.403618 | 0.510083 | — | — | — |
| test_sub_match.test | COMPILE | 0.161817 | 0.327210 | 0.401206 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.078× | 1.076×, 1.079× | 0.995× |
| clang | 0.959× | 0.957×, 0.962× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| c_traits.test | 3 | 0.004882s | 0.006581s | 0.004812s | byte equality observed |
| c_traits_u.test | 3 | 0.005297s | 0.006730s | 0.005110s | byte equality observed |
| misc1.test | 10 | 0.001526s | 0.001502s | 0.001463s | byte equality observed |
| misc2.test | 10 | 0.001387s | 0.001360s | 0.001355s | byte equality observed |
| regress.test | 3 | 0.005949s | 0.007237s | 0.005363s | byte equality observed |
| regress_u.test | 3 | 0.006200s | 0.007552s | 0.005797s | byte equality observed |
| test1.test | 10 | 0.001298s | 0.001285s | 0.001217s | byte equality observed |
| test10.test | 10 | 0.001281s | 0.001304s | 0.001242s | byte equality observed |
| test10u.test | 10 | 0.001284s | 0.001265s | 0.001242s | byte equality observed |
| test11.test | 10 | 0.001285s | 0.001277s | 0.001223s | byte equality observed |
| test11u.test | 10 | 0.001286s | 0.001270s | 0.001237s | byte equality observed |
| test1u.test | 10 | 0.001291s | 0.001311s | 0.001234s | byte equality observed |
| test2.test | 10 | 0.001357s | 0.001342s | 0.001302s | byte equality observed |
| test2u.test | 10 | 0.001336s | 0.001327s | 0.001291s | byte equality observed |
| test3.test | 10 | 0.001349s | 0.001324s | 0.001280s | byte equality observed |
| test3u.test | 10 | 0.001347s | 0.001328s | 0.001281s | byte equality observed |
| test4.test | 10 | 0.001291s | 0.001316s | 0.001254s | byte equality observed |
| test4u.test | 10 | 0.001320s | 0.001314s | 0.001243s | byte equality observed |
| test5.test | 10 | 0.001306s | 0.001331s | 0.001269s | byte equality observed |
| test5u.test | 10 | 0.001309s | 0.001318s | 0.001255s | byte equality observed |
| test6.test | 10 | 0.001288s | 0.001316s | 0.001223s | byte equality observed |
| test6u.test | 10 | 0.001299s | 0.001305s | 0.001253s | byte equality observed |
| test7.test | 10 | 0.001290s | 0.001316s | 0.001227s | byte equality observed |
| test7u.test | 10 | 0.001299s | 0.001312s | 0.001239s | byte equality observed |
| test8.test | 10 | 0.001287s | 0.001294s | 0.001242s | byte equality observed |
| test8u.test | 10 | 0.001289s | 0.001283s | 0.001254s | byte equality observed |
| test9.test | 10 | 0.001283s | 0.001280s | 0.001271s | byte equality observed |
| test9u.test | 10 | 0.001290s | 0.001289s | 0.001278s | byte equality observed |
| test_actions.test | 10 | 0.001509s | 0.001536s | 0.001426s | byte equality observed |
| test_assert.test | 10 | 0.001342s | 0.001334s | 0.001340s | byte equality observed |
| test_assert_with_placeholder.test | 10 | 0.001284s | 0.001296s | 0.001240s | byte equality observed |
| test_cycles.test | 10 | 0.001299s | 0.001306s | 0.001305s | byte equality observed |
| test_dynamic.test | 10 | 0.001320s | 0.001272s | 0.001241s | byte equality observed |
| test_dynamic_grammar.test | 10 | 0.001369s | 0.001396s | 0.001320s | byte equality observed |
| test_format.test | 10 | 0.001368s | 0.001360s | 0.001273s | byte equality observed |
| test_non_char.test | 10 | 0.001316s | 0.001325s | 0.001283s | byte equality observed |
| test_skip.test | 10 | 0.001300s | 0.001306s | 0.001243s | byte equality observed |
| test_static.test | 10 | 0.001266s | 0.001270s | 0.001241s | byte equality observed |
| test_symbols.test | 10 | 0.001455s | 0.001428s | 0.001394s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
