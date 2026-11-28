# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.300424 | 0.859169 | 0.836019 | — | — | — |
| largest_int.test | COMPILE | 0.098382 | 0.243397 | 0.279323 | — | — | — |
| msvc_is_class.test | COMPILE | 0.012224 | 0.030299 | 0.033373 | — | — | — |
| template_arity.test | COMPILE | 0.099803 | 0.238098 | 0.279523 | — | — | — |
| is_seq.test | COMPILE | 0.004230 | 0.010845 | 0.022987 | — | — | — |
| token_equal.test | COMPILE | 0.004366 | 0.011427 | 0.022661 | — | — | — |
| advance.test | COMPILE | 0.109937 | 0.275671 | 0.320288 | — | — | — |
| always.test | COMPILE | 0.115226 | 0.279773 | 0.339287 | — | — | — |
| apply.test | COMPILE | 0.120045 | 0.286353 | 0.351768 | — | — | — |
| apply_wrap.test | COMPILE | 0.109025 | 0.246850 | 0.304583 | — | — | — |
| arithmetic.test | COMPILE | 0.116002 | 0.279977 | 0.338945 | — | — | — |
| as_sequence.test | COMPILE | 0.123190 | 0.299392 | 0.345105 | — | — | — |
| assert.test | COMPILE | 0.028685 | 0.056112 | 0.066854 | — | — | — |
| at.test | COMPILE | 0.123825 | 0.298489 | 0.359353 | — | — | — |
| back.test | COMPILE | 0.118377 | 0.285788 | 0.335164 | — | — | — |
| bind.test | COMPILE | 0.115161 | 0.269717 | 0.326634 | — | — | — |
| bitwise.test | COMPILE | 0.117032 | 0.277385 | 0.339151 | — | — | — |
| bool.test | RUN | 0.106887 | 0.245541 | 0.298249 | 0.001250 | 0.001270 | 0.001389 |
| comparison.test | COMPILE | 0.115728 | 0.281119 | 0.327863 | — | — | — |
| contains.test | COMPILE | 0.136943 | 0.333932 | 0.397841 | — | — | — |
| copy.test | COMPILE | 0.167285 | 0.408461 | 0.480130 | — | — | — |
| copy_if.test | COMPILE | 0.147917 | 0.362948 | 0.430253 | — | — | — |
| count.test | COMPILE | 0.138579 | 0.330123 | 0.405731 | — | — | — |
| count_if.test | COMPILE | 0.145528 | 0.343226 | 0.425060 | — | — | — |
| deque.test | COMPILE | 0.138865 | 0.340212 | 0.402358 | — | — | — |
| distance.test | COMPILE | 0.129660 | 0.312306 | 0.372089 | — | — | — |
| empty.test | COMPILE | 0.114060 | 0.274681 | 0.322628 | — | — | — |
| equal.test | COMPILE | 0.133663 | 0.322415 | 0.384127 | — | — | — |
| erase.test | COMPILE | 0.151399 | 0.368455 | 0.451113 | — | — | — |
| erase_range.test | COMPILE | 0.145322 | 0.355441 | 0.419832 | — | — | — |
| eval_if.test | COMPILE | 0.105603 | 0.255503 | 0.311570 | — | — | — |
| filter_view.test | COMPILE | 0.143666 | 0.355197 | 0.422014 | — | — | — |
| find.test | COMPILE | 0.139798 | 0.334942 | 0.404466 | — | — | — |
| find_if.test | COMPILE | 0.143096 | 0.352462 | 0.418889 | — | — | — |
| fold.test | COMPILE | 0.150754 | 0.359144 | 0.439558 | — | — | — |
| for_each.test | RUN | 0.219641 | 0.530622 | 0.694320 | 0.001207 | 0.001375 | 0.001358 |
| front.test | COMPILE | 0.119119 | 0.283872 | 0.337980 | — | — | — |
| get_tag_def.test | COMPILE | 0.105631 | 0.248161 | 0.300084 | — | — | — |
| has_xxx.test | COMPILE | 0.114600 | 0.269020 | 0.344267 | — | — | — |
| identity.test | COMPILE | 0.117359 | 0.279476 | 0.341167 | — | — | — |
| if.test | COMPILE | 0.106123 | 0.251503 | 0.309718 | — | — | — |
| index_of.test | COMPILE | 0.133840 | 0.319863 | 0.387244 | — | — | — |
| inherit.test | COMPILE | 0.111309 | 0.257699 | 0.314836 | — | — | — |
| insert.test | COMPILE | 0.154029 | 0.379272 | 0.453165 | — | — | — |
| insert_range.test | COMPILE | 0.209221 | 0.515819 | 0.659313 | — | — | — |
| int.test | RUN | 0.108680 | 0.275149 | 0.330956 | 0.001271 | 0.001288 | 0.001403 |
| char.test | RUN | 0.109506 | 0.270605 | 0.335531 | 0.001481 | 0.001387 | 0.001321 |
| char_unsigned.test | RUN | 0.109273 | 0.277027 | 0.329223 | 0.001109 | 0.001395 | 0.001283 |
| integral_c.test | RUN | 0.125645 | 0.361065 | 0.404940 | 0.001251 | 0.001269 | 0.001302 |
| integral_c_unsigned.test | RUN | 0.128686 | 0.353224 | 0.409713 | 0.001256 | 0.001203 | 0.001201 |
| is_placeholder.test | COMPILE | 0.103210 | 0.249656 | 0.308816 | — | — | — |
| is_sequence.test | COMPILE | 0.125744 | 0.306596 | 0.361290 | — | — | — |
| iterator_tags.test | COMPILE | 0.108032 | 0.259254 | 0.312940 | — | — | — |
| joint_view.test | COMPILE | 0.140827 | 0.343842 | 0.417752 | — | — | — |
| lambda.test | COMPILE | 0.129537 | 0.321835 | 0.383189 | — | — | — |
| lambda_args.test | COMPILE | 0.124783 | 0.303932 | 0.388973 | — | — | — |
| list.test | COMPILE | 0.131646 | 0.322794 | 0.368036 | — | — | — |
| list_c.test | COMPILE | 0.131124 | 0.304138 | 0.382129 | — | — | — |
| logical.test | COMPILE | 0.108848 | 0.247672 | 0.306544 | — | — | — |
| lower_bound.test | COMPILE | 0.136146 | 0.330735 | 0.382449 | — | — | — |
| map.test | COMPILE | 0.162546 | 0.406598 | 0.488786 | — | — | — |
| max_element.test | COMPILE | 0.130106 | 0.308107 | 0.368119 | — | — | — |
| min_max.test | COMPILE | 0.112569 | 0.265746 | 0.316386 | — | — | — |
| multiset.test | COMPILE | 0.141102 | 0.345962 | 0.404979 | — | — | — |
| next.test | COMPILE | 0.105635 | 0.256455 | 0.304395 | — | — | — |
| no_has_xxx.test | COMPILE | 0.115000 | 0.268610 | 0.329020 | — | — | — |
| numeric_ops.test | COMPILE | 0.126810 | 0.305566 | 0.361331 | — | — | — |
| pair_view.test | COMPILE | 0.146391 | 0.351194 | 0.406321 | — | — | — |
| partition.test | COMPILE | 0.155408 | 0.377893 | 0.463064 | — | — | — |
| pop_front.test | COMPILE | 0.128951 | 0.308472 | 0.366680 | — | — | — |
| push_back.test | COMPILE | 0.111101 | 0.259177 | 0.320793 | — | — | — |
| push_front.test | COMPILE | 0.128818 | 0.317945 | 0.374292 | — | — | — |
| quote.test | COMPILE | 0.105434 | 0.255598 | 0.305286 | — | — | — |
| range_c.test | COMPILE | 0.133529 | 0.332003 | 0.394942 | — | — | — |
| remove.test | COMPILE | 0.143965 | 0.348101 | 0.407971 | — | — | — |
| remove_if.test | COMPILE | 0.139948 | 0.367975 | 0.429004 | — | — | — |
| replace.test | COMPILE | 0.156840 | 0.393190 | 0.461607 | — | — | — |
| replace_if.test | COMPILE | 0.157266 | 0.397929 | 0.473249 | — | — | — |
| reverse.test | COMPILE | 0.152222 | 0.369533 | 0.441132 | — | — | — |
| same_as.test | COMPILE | 0.113545 | 0.272683 | 0.323689 | — | — | — |
| set.test | COMPILE | 0.201784 | 0.520251 | 0.658651 | — | — | — |
| set_c.test | COMPILE | 0.146996 | 0.355825 | 0.433683 | — | — | — |
| single_view.test | COMPILE | 0.133276 | 0.332676 | 0.385993 | — | — | — |
| size.test | COMPILE | 0.129662 | 0.311724 | 0.367505 | — | — | — |
| size_t.test | RUN | 0.115410 | 0.285359 | 0.342952 | 0.001333 | 0.001442 | 0.001352 |
| sizeof.test | COMPILE | 0.107057 | 0.249294 | 0.305035 | — | — | — |
| sort.test | COMPILE | 0.165391 | 0.410931 | 0.486744 | — | — | — |
| stable_partition.test | COMPILE | 0.157909 | 0.389630 | 0.461229 | — | — | — |
| transform.test | COMPILE | 0.167923 | 0.414672 | 0.496047 | — | — | — |
| transform_view.test | COMPILE | 0.136514 | 0.334288 | 0.399468 | — | — | — |
| unique.test | COMPILE | 0.141549 | 0.347719 | 0.412922 | — | — | — |
| unpack_args.test | COMPILE | 0.131364 | 0.325055 | 0.385756 | — | — | — |
| upper_bound.test | COMPILE | 0.134529 | 0.322474 | 0.387597 | — | — | — |
| vector.test | COMPILE | 0.147806 | 0.395889 | 0.471213 | — | — | — |
| vector_c.test | COMPILE | 0.131863 | 0.318836 | 0.396196 | — | — | — |
| zip_view.test | COMPILE | 0.189596 | 0.496080 | 0.572161 | — | — | — |
| string.test | RUN | 0.296052 | 0.966966 | 0.885928 | 0.000958 | 0.000926 | 0.001076 |
| issue_69.test | RUN | 0.012943 | 0.038152 | 0.040391 | 0.000409 | 0.000528 | 0.001130 |
| issue_84.test | RUN | 0.030710 | 0.070880 | 0.075088 | 0.000413 | 0.000442 | 0.000899 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.994×, 1.014× | 1.016× |
| clang | 1.121× | 1.119×, 1.123× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000816s | 0.000826s | 0.000828s | byte equality observed |
| char.test | 10 | 0.000806s | 0.000838s | 0.000851s | byte equality observed |
| char_unsigned.test | 10 | 0.000790s | 0.000824s | 0.000820s | byte equality observed |
| for_each.test | 10 | 0.000839s | 0.000834s | 0.000812s | byte equality observed |
| int.test | 10 | 0.000826s | 0.000851s | 0.000811s | byte equality observed |
| integral_c.test | 10 | 0.000810s | 0.000843s | 0.000835s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000811s | 0.000819s | 0.000792s | byte equality observed |
| issue_69.test | 10 | 0.000364s | 0.000370s | 0.000797s | byte equality observed |
| issue_84.test | 10 | 0.000362s | 0.000368s | 0.000773s | byte equality observed |
| size_t.test | 10 | 0.000790s | 0.000813s | 0.000794s | byte equality observed |
| string.test | 10 | 0.000831s | 0.000805s | 0.000821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
