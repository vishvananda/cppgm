# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.295930 | 0.844969 | 0.812408 | — | — | — |
| largest_int.test | COMPILE | 0.092755 | 0.236517 | 0.279321 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011317 | 0.028964 | 0.033672 | — | — | — |
| template_arity.test | COMPILE | 0.097955 | 0.234975 | 0.277345 | — | — | — |
| is_seq.test | COMPILE | 0.003786 | 0.010336 | 0.020607 | — | — | — |
| token_equal.test | COMPILE | 0.003838 | 0.010685 | 0.020387 | — | — | — |
| advance.test | COMPILE | 0.104406 | 0.272010 | 0.318711 | — | — | — |
| always.test | COMPILE | 0.107843 | 0.264338 | 0.324993 | — | — | — |
| apply.test | COMPILE | 0.113044 | 0.286831 | 0.341395 | — | — | — |
| apply_wrap.test | COMPILE | 0.096409 | 0.241937 | 0.289396 | — | — | — |
| arithmetic.test | COMPILE | 0.108748 | 0.270528 | 0.324649 | — | — | — |
| as_sequence.test | COMPILE | 0.117697 | 0.297979 | 0.343302 | — | — | — |
| assert.test | COMPILE | 0.026343 | 0.055562 | 0.063774 | — | — | — |
| at.test | COMPILE | 0.112627 | 0.293214 | 0.344931 | — | — | — |
| back.test | COMPILE | 0.110535 | 0.276643 | 0.332356 | — | — | — |
| bind.test | COMPILE | 0.108773 | 0.264078 | 0.324315 | — | — | — |
| bitwise.test | COMPILE | 0.107564 | 0.269073 | 0.327290 | — | — | — |
| bool.test | RUN | 0.098018 | 0.243279 | 0.288665 | 0.001209 | 0.001104 | 0.001234 |
| comparison.test | COMPILE | 0.106382 | 0.265623 | 0.318702 | — | — | — |
| contains.test | COMPILE | 0.131984 | 0.331426 | 0.391744 | — | — | — |
| copy.test | COMPILE | 0.154371 | 0.393725 | 0.463597 | — | — | — |
| copy_if.test | COMPILE | 0.137188 | 0.349058 | 0.417218 | — | — | — |
| count.test | COMPILE | 0.126960 | 0.326009 | 0.386326 | — | — | — |
| count_if.test | COMPILE | 0.137404 | 0.343760 | 0.421200 | — | — | — |
| deque.test | COMPILE | 0.134601 | 0.324403 | 0.384716 | — | — | — |
| distance.test | COMPILE | 0.121945 | 0.298955 | 0.363434 | — | — | — |
| empty.test | COMPILE | 0.106483 | 0.266569 | 0.318286 | — | — | — |
| equal.test | COMPILE | 0.124165 | 0.315196 | 0.374364 | — | — | — |
| erase.test | COMPILE | 0.143119 | 0.356061 | 0.428387 | — | — | — |
| erase_range.test | COMPILE | 0.136532 | 0.343182 | 0.416131 | — | — | — |
| eval_if.test | COMPILE | 0.100203 | 0.243878 | 0.310636 | — | — | — |
| filter_view.test | COMPILE | 0.136561 | 0.349202 | 0.396478 | — | — | — |
| find.test | COMPILE | 0.134207 | 0.324929 | 0.394500 | — | — | — |
| find_if.test | COMPILE | 0.138072 | 0.341161 | 0.411114 | — | — | — |
| fold.test | COMPILE | 0.145085 | 0.350351 | 0.427327 | — | — | — |
| for_each.test | RUN | 0.207888 | 0.523242 | 0.656285 | 0.001270 | 0.001335 | 0.001220 |
| front.test | COMPILE | 0.112638 | 0.277489 | 0.336128 | — | — | — |
| get_tag_def.test | COMPILE | 0.098426 | 0.239102 | 0.298150 | — | — | — |
| has_xxx.test | COMPILE | 0.109502 | 0.263332 | 0.329323 | — | — | — |
| identity.test | COMPILE | 0.113227 | 0.271116 | 0.327969 | — | — | — |
| if.test | COMPILE | 0.100386 | 0.240271 | 0.300412 | — | — | — |
| index_of.test | COMPILE | 0.127813 | 0.312808 | 0.378216 | — | — | — |
| inherit.test | COMPILE | 0.098882 | 0.251913 | 0.298821 | — | — | — |
| insert.test | COMPILE | 0.147411 | 0.370400 | 0.447136 | — | — | — |
| insert_range.test | COMPILE | 0.197499 | 0.498171 | 0.639828 | — | — | — |
| int.test | RUN | 0.103942 | 0.269988 | 0.328532 | 0.001178 | 0.001298 | 0.001146 |
| char.test | RUN | 0.105059 | 0.271447 | 0.321760 | 0.001059 | 0.000871 | 0.001139 |
| char_unsigned.test | RUN | 0.106670 | 0.268646 | 0.322387 | 0.001148 | 0.001209 | 0.001332 |
| integral_c.test | RUN | 0.118691 | 0.343828 | 0.403531 | 0.001141 | 0.001136 | 0.001246 |
| integral_c_unsigned.test | RUN | 0.120030 | 0.354683 | 0.390673 | 0.001164 | 0.001080 | 0.001113 |
| is_placeholder.test | COMPILE | 0.100744 | 0.244895 | 0.301746 | — | — | — |
| is_sequence.test | COMPILE | 0.123055 | 0.302896 | 0.353092 | — | — | — |
| iterator_tags.test | COMPILE | 0.100544 | 0.253980 | 0.300152 | — | — | — |
| joint_view.test | COMPILE | 0.134008 | 0.336435 | 0.407166 | — | — | — |
| lambda.test | COMPILE | 0.124195 | 0.315411 | 0.375899 | — | — | — |
| lambda_args.test | COMPILE | 0.119559 | 0.290987 | 0.373741 | — | — | — |
| list.test | COMPILE | 0.121024 | 0.314068 | 0.366312 | — | — | — |
| list_c.test | COMPILE | 0.124715 | 0.302552 | 0.378240 | — | — | — |
| logical.test | COMPILE | 0.098088 | 0.240857 | 0.299657 | — | — | — |
| lower_bound.test | COMPILE | 0.129689 | 0.316779 | 0.374300 | — | — | — |
| map.test | COMPILE | 0.151107 | 0.400168 | 0.472516 | — | — | — |
| max_element.test | COMPILE | 0.123189 | 0.290650 | 0.364623 | — | — | — |
| min_max.test | COMPILE | 0.103169 | 0.259667 | 0.309550 | — | — | — |
| multiset.test | COMPILE | 0.132297 | 0.339409 | 0.398599 | — | — | — |
| next.test | COMPILE | 0.099591 | 0.245290 | 0.294349 | — | — | — |
| no_has_xxx.test | COMPILE | 0.104032 | 0.262101 | 0.328896 | — | — | — |
| numeric_ops.test | COMPILE | 0.117403 | 0.289103 | 0.351280 | — | — | — |
| pair_view.test | COMPILE | 0.132817 | 0.342027 | 0.400637 | — | — | — |
| partition.test | COMPILE | 0.149264 | 0.368311 | 0.443191 | — | — | — |
| pop_front.test | COMPILE | 0.119283 | 0.296431 | 0.359580 | — | — | — |
| push_back.test | COMPILE | 0.100166 | 0.250694 | 0.303476 | — | — | — |
| push_front.test | COMPILE | 0.121212 | 0.309127 | 0.368195 | — | — | — |
| quote.test | COMPILE | 0.097761 | 0.245992 | 0.298544 | — | — | — |
| range_c.test | COMPILE | 0.127674 | 0.318536 | 0.376257 | — | — | — |
| remove.test | COMPILE | 0.132464 | 0.336998 | 0.395712 | — | — | — |
| remove_if.test | COMPILE | 0.137515 | 0.358054 | 0.419972 | — | — | — |
| replace.test | COMPILE | 0.145932 | 0.387981 | 0.446559 | — | — | — |
| replace_if.test | COMPILE | 0.150947 | 0.385065 | 0.454351 | — | — | — |
| reverse.test | COMPILE | 0.140786 | 0.357034 | 0.425702 | — | — | — |
| same_as.test | COMPILE | 0.104101 | 0.262227 | 0.314979 | — | — | — |
| set.test | COMPILE | 0.188482 | 0.507276 | 0.633721 | — | — | — |
| set_c.test | COMPILE | 0.136649 | 0.342988 | 0.415743 | — | — | — |
| single_view.test | COMPILE | 0.122892 | 0.321105 | 0.372793 | — | — | — |
| size.test | COMPILE | 0.119089 | 0.303445 | 0.360543 | — | — | — |
| size_t.test | RUN | 0.104791 | 0.277024 | 0.332515 | 0.001079 | 0.001193 | 0.001186 |
| sizeof.test | COMPILE | 0.096391 | 0.242911 | 0.294085 | — | — | — |
| sort.test | COMPILE | 0.155146 | 0.396495 | 0.480465 | — | — | — |
| stable_partition.test | COMPILE | 0.148364 | 0.379034 | 0.457611 | — | — | — |
| transform.test | COMPILE | 0.156566 | 0.402370 | 0.479791 | — | — | — |
| transform_view.test | COMPILE | 0.127243 | 0.321871 | 0.385575 | — | — | — |
| unique.test | COMPILE | 0.134567 | 0.336986 | 0.400225 | — | — | — |
| unpack_args.test | COMPILE | 0.122917 | 0.316100 | 0.374689 | — | — | — |
| upper_bound.test | COMPILE | 0.126714 | 0.312921 | 0.374562 | — | — | — |
| vector.test | COMPILE | 0.146197 | 0.384734 | 0.454966 | — | — | — |
| vector_c.test | COMPILE | 0.128494 | 0.313684 | 0.386516 | — | — | — |
| zip_view.test | COMPILE | 0.179317 | 0.465437 | 0.545174 | — | — | — |
| string.test | RUN | 0.299793 | 0.949905 | 0.854720 | 0.001082 | 0.000854 | 0.000830 |
| issue_69.test | RUN | 0.012467 | 0.034755 | 0.037731 | 0.000367 | 0.000496 | 0.001166 |
| issue_84.test | RUN | 0.028680 | 0.071129 | 0.069098 | 0.000384 | 0.000371 | 0.000839 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.990×, 0.984× | 1.007× |
| clang | 1.089× | 1.064×, 1.114× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000828s | 0.000791s | 0.000809s | byte equality observed |
| char.test | 10 | 0.000836s | 0.000804s | 0.000835s | byte equality observed |
| char_unsigned.test | 10 | 0.000811s | 0.000805s | 0.000804s | byte equality observed |
| for_each.test | 10 | 0.000822s | 0.000801s | 0.000814s | byte equality observed |
| int.test | 10 | 0.000820s | 0.000799s | 0.000815s | byte equality observed |
| integral_c.test | 10 | 0.000806s | 0.000807s | 0.000798s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000805s | 0.000802s | 0.000782s | byte equality observed |
| issue_69.test | 10 | 0.000366s | 0.000368s | 0.000771s | byte equality observed |
| issue_84.test | 10 | 0.000360s | 0.000359s | 0.000788s | byte equality observed |
| size_t.test | 10 | 0.000780s | 0.000772s | 0.000779s | byte equality observed |
| string.test | 10 | 0.000810s | 0.000813s | 0.000793s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
