# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.311319 | 0.858217 | 0.836885 | — | — | — |
| largest_int.test | COMPILE | 0.100626 | 0.239619 | 0.287651 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011683 | 0.029223 | 0.034693 | — | — | — |
| template_arity.test | COMPILE | 0.101306 | 0.233070 | 0.288476 | — | — | — |
| is_seq.test | COMPILE | 0.003846 | 0.010594 | 0.022118 | — | — | — |
| token_equal.test | COMPILE | 0.004200 | 0.010686 | 0.022727 | — | — | — |
| advance.test | COMPILE | 0.108710 | 0.268358 | 0.330065 | — | — | — |
| always.test | COMPILE | 0.113260 | 0.267997 | 0.334565 | — | — | — |
| apply.test | COMPILE | 0.121073 | 0.290970 | 0.346682 | — | — | — |
| apply_wrap.test | COMPILE | 0.102882 | 0.244980 | 0.303929 | — | — | — |
| arithmetic.test | COMPILE | 0.114223 | 0.274840 | 0.329400 | — | — | — |
| as_sequence.test | COMPILE | 0.121916 | 0.304147 | 0.355285 | — | — | — |
| assert.test | COMPILE | 0.027779 | 0.056099 | 0.067380 | — | — | — |
| at.test | COMPILE | 0.120911 | 0.294323 | 0.355475 | — | — | — |
| back.test | COMPILE | 0.114162 | 0.280451 | 0.336248 | — | — | — |
| bind.test | COMPILE | 0.111290 | 0.269307 | 0.329512 | — | — | — |
| bitwise.test | COMPILE | 0.113662 | 0.277174 | 0.333204 | — | — | — |
| bool.test | RUN | 0.101602 | 0.243521 | 0.296679 | 0.001193 | 0.001203 | 0.001433 |
| comparison.test | COMPILE | 0.111895 | 0.271329 | 0.327132 | — | — | — |
| contains.test | COMPILE | 0.132303 | 0.336013 | 0.392538 | — | — | — |
| copy.test | COMPILE | 0.164119 | 0.399274 | 0.477051 | — | — | — |
| copy_if.test | COMPILE | 0.144533 | 0.356834 | 0.421711 | — | — | — |
| count.test | COMPILE | 0.135378 | 0.326135 | 0.401375 | — | — | — |
| count_if.test | COMPILE | 0.145478 | 0.348372 | 0.418552 | — | — | — |
| deque.test | COMPILE | 0.137113 | 0.338397 | 0.399378 | — | — | — |
| distance.test | COMPILE | 0.128449 | 0.301871 | 0.366450 | — | — | — |
| empty.test | COMPILE | 0.111074 | 0.271151 | 0.322782 | — | — | — |
| equal.test | COMPILE | 0.132423 | 0.319558 | 0.375007 | — | — | — |
| erase.test | COMPILE | 0.149248 | 0.367283 | 0.441081 | — | — | — |
| erase_range.test | COMPILE | 0.143188 | 0.348243 | 0.421261 | — | — | — |
| eval_if.test | COMPILE | 0.105620 | 0.250582 | 0.298640 | — | — | — |
| filter_view.test | COMPILE | 0.141336 | 0.353098 | 0.409215 | — | — | — |
| find.test | COMPILE | 0.138872 | 0.331104 | 0.397596 | — | — | — |
| find_if.test | COMPILE | 0.142350 | 0.348016 | 0.411089 | — | — | — |
| fold.test | COMPILE | 0.147084 | 0.356001 | 0.440681 | — | — | — |
| for_each.test | RUN | 0.215998 | 0.525667 | 0.678818 | 0.001306 | 0.001256 | 0.001308 |
| front.test | COMPILE | 0.116782 | 0.279644 | 0.339979 | — | — | — |
| get_tag_def.test | COMPILE | 0.101047 | 0.243441 | 0.304061 | — | — | — |
| has_xxx.test | COMPILE | 0.110034 | 0.261471 | 0.337634 | — | — | — |
| identity.test | COMPILE | 0.119212 | 0.283195 | 0.333144 | — | — | — |
| if.test | COMPILE | 0.105555 | 0.247845 | 0.294128 | — | — | — |
| index_of.test | COMPILE | 0.131799 | 0.324103 | 0.374185 | — | — | — |
| inherit.test | COMPILE | 0.109181 | 0.254259 | 0.312233 | — | — | — |
| insert.test | COMPILE | 0.151822 | 0.375759 | 0.461164 | — | — | — |
| insert_range.test | COMPILE | 0.207800 | 0.510610 | 0.651813 | — | — | — |
| int.test | RUN | 0.110290 | 0.273934 | 0.333863 | 0.001127 | 0.001283 | 0.001163 |
| char.test | RUN | 0.113208 | 0.277234 | 0.334178 | 0.001224 | 0.001130 | 0.001284 |
| char_unsigned.test | RUN | 0.109411 | 0.275239 | 0.323948 | 0.001496 | 0.001263 | 0.001416 |
| integral_c.test | RUN | 0.122906 | 0.357865 | 0.410528 | 0.001107 | 0.001486 | 0.001212 |
| integral_c_unsigned.test | RUN | 0.125048 | 0.358080 | 0.404336 | 0.001221 | 0.001191 | 0.001179 |
| is_placeholder.test | COMPILE | 0.105307 | 0.245071 | 0.304919 | — | — | — |
| is_sequence.test | COMPILE | 0.124405 | 0.300181 | 0.370781 | — | — | — |
| iterator_tags.test | COMPILE | 0.108674 | 0.256196 | 0.313903 | — | — | — |
| joint_view.test | COMPILE | 0.139216 | 0.346297 | 0.413514 | — | — | — |
| lambda.test | COMPILE | 0.131297 | 0.319025 | 0.384883 | — | — | — |
| lambda_args.test | COMPILE | 0.120783 | 0.297137 | 0.383771 | — | — | — |
| list.test | COMPILE | 0.131138 | 0.318130 | 0.383309 | — | — | — |
| list_c.test | COMPILE | 0.126308 | 0.313811 | 0.382981 | — | — | — |
| logical.test | COMPILE | 0.104019 | 0.251797 | 0.294432 | — | — | — |
| lower_bound.test | COMPILE | 0.135981 | 0.317600 | 0.386571 | — | — | — |
| map.test | COMPILE | 0.158664 | 0.396405 | 0.478795 | — | — | — |
| max_element.test | COMPILE | 0.125234 | 0.296705 | 0.368903 | — | — | — |
| min_max.test | COMPILE | 0.109187 | 0.257964 | 0.320717 | — | — | — |
| multiset.test | COMPILE | 0.134186 | 0.343226 | 0.405977 | — | — | — |
| next.test | COMPILE | 0.103100 | 0.247141 | 0.302322 | — | — | — |
| no_has_xxx.test | COMPILE | 0.111352 | 0.263893 | 0.334238 | — | — | — |
| numeric_ops.test | COMPILE | 0.124036 | 0.303168 | 0.367995 | — | — | — |
| pair_view.test | COMPILE | 0.144356 | 0.341517 | 0.410481 | — | — | — |
| partition.test | COMPILE | 0.152744 | 0.374292 | 0.451251 | — | — | — |
| pop_front.test | COMPILE | 0.125695 | 0.304376 | 0.368979 | — | — | — |
| push_back.test | COMPILE | 0.105338 | 0.255552 | 0.316458 | — | — | — |
| push_front.test | COMPILE | 0.127996 | 0.302998 | 0.372116 | — | — | — |
| quote.test | COMPILE | 0.103032 | 0.242912 | 0.305606 | — | — | — |
| range_c.test | COMPILE | 0.133449 | 0.323966 | 0.387584 | — | — | — |
| remove.test | COMPILE | 0.137899 | 0.339279 | 0.408503 | — | — | — |
| remove_if.test | COMPILE | 0.145126 | 0.350051 | 0.426117 | — | — | — |
| replace.test | COMPILE | 0.155944 | 0.383283 | 0.450172 | — | — | — |
| replace_if.test | COMPILE | 0.155392 | 0.392597 | 0.460058 | — | — | — |
| reverse.test | COMPILE | 0.145875 | 0.361740 | 0.431238 | — | — | — |
| same_as.test | COMPILE | 0.113764 | 0.269574 | 0.324612 | — | — | — |
| set.test | COMPILE | 0.189307 | 0.502601 | 0.639853 | — | — | — |
| set_c.test | COMPILE | 0.141041 | 0.341752 | 0.433476 | — | — | — |
| single_view.test | COMPILE | 0.127560 | 0.320367 | 0.376930 | — | — | — |
| size.test | COMPILE | 0.125325 | 0.304459 | 0.364159 | — | — | — |
| size_t.test | RUN | 0.108108 | 0.282817 | 0.338702 | 0.001371 | 0.001302 | 0.001336 |
| sizeof.test | COMPILE | 0.101678 | 0.247050 | 0.290700 | — | — | — |
| sort.test | COMPILE | 0.164104 | 0.398978 | 0.481931 | — | — | — |
| stable_partition.test | COMPILE | 0.154301 | 0.383596 | 0.451687 | — | — | — |
| transform.test | COMPILE | 0.165982 | 0.408665 | 0.492273 | — | — | — |
| transform_view.test | COMPILE | 0.134055 | 0.332457 | 0.389265 | — | — | — |
| unique.test | COMPILE | 0.140410 | 0.339781 | 0.407521 | — | — | — |
| unpack_args.test | COMPILE | 0.130706 | 0.321349 | 0.371774 | — | — | — |
| upper_bound.test | COMPILE | 0.133505 | 0.319901 | 0.376838 | — | — | — |
| vector.test | COMPILE | 0.151337 | 0.390035 | 0.461499 | — | — | — |
| vector_c.test | COMPILE | 0.134595 | 0.315475 | 0.400142 | — | — | — |
| zip_view.test | COMPILE | 0.187191 | 0.486027 | 0.566940 | — | — | — |
| string.test | RUN | 0.307836 | 0.955228 | 0.876111 | 0.001010 | 0.000985 | 0.000957 |
| issue_69.test | RUN | 0.012928 | 0.035945 | 0.038190 | 0.000503 | 0.000548 | 0.001131 |
| issue_84.test | RUN | 0.029928 | 0.072386 | 0.074995 | 0.000399 | 0.000377 | 0.000892 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.996×, 1.000× | 1.025× |
| clang | 1.105× | 1.102×, 1.107× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000829s | 0.000810s | 0.000813s | byte equality observed |
| char.test | 10 | 0.000821s | 0.000820s | 0.000820s | byte equality observed |
| char_unsigned.test | 10 | 0.000801s | 0.000797s | 0.000835s | byte equality observed |
| for_each.test | 10 | 0.000818s | 0.000817s | 0.000824s | byte equality observed |
| int.test | 10 | 0.000835s | 0.000835s | 0.000821s | byte equality observed |
| integral_c.test | 10 | 0.000841s | 0.000857s | 0.000793s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000813s | 0.000836s | 0.000784s | byte equality observed |
| issue_69.test | 10 | 0.000364s | 0.000378s | 0.000773s | byte equality observed |
| issue_84.test | 10 | 0.000360s | 0.000361s | 0.000801s | byte equality observed |
| size_t.test | 10 | 0.000800s | 0.000813s | 0.000810s | byte equality observed |
| string.test | 10 | 0.000826s | 0.000815s | 0.000805s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
