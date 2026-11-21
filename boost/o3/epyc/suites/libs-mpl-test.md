# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.350445 | 1.008937 | 1.031882 | — | — | — |
| largest_int.test | COMPILE | 0.120487 | 0.286345 | 0.352875 | — | — | — |
| msvc_is_class.test | COMPILE | 0.014970 | 0.037216 | 0.041013 | — | — | — |
| template_arity.test | COMPILE | 0.121680 | 0.276662 | 0.347210 | — | — | — |
| is_seq.test | COMPILE | 0.005228 | 0.012988 | 0.025856 | — | — | — |
| token_equal.test | COMPILE | 0.005113 | 0.014049 | 0.026123 | — | — | — |
| advance.test | COMPILE | 0.133410 | 0.306104 | 0.412516 | — | — | — |
| always.test | COMPILE | 0.134537 | 0.324290 | 0.423340 | — | — | — |
| apply.test | COMPILE | 0.145704 | 0.341055 | 0.430051 | — | — | — |
| apply_wrap.test | COMPILE | 0.126406 | 0.293777 | 0.375708 | — | — | — |
| arithmetic.test | COMPILE | 0.135167 | 0.321882 | 0.402188 | — | — | — |
| as_sequence.test | COMPILE | 0.146067 | 0.356075 | 0.449963 | — | — | — |
| assert.test | COMPILE | 0.036692 | 0.070088 | 0.085126 | — | — | — |
| at.test | COMPILE | 0.142682 | 0.346958 | 0.444487 | — | — | — |
| back.test | COMPILE | 0.137885 | 0.332927 | 0.420987 | — | — | — |
| bind.test | COMPILE | 0.132112 | 0.325226 | 0.415808 | — | — | — |
| bitwise.test | COMPILE | 0.136111 | 0.325144 | 0.424934 | — | — | — |
| bool.test | RUN | 0.123085 | 0.283440 | 0.367542 | 0.001389 | 0.001478 | 0.001663 |
| comparison.test | COMPILE | 0.131689 | 0.314680 | 0.403822 | — | — | — |
| contains.test | COMPILE | 0.160764 | 0.400847 | 0.482437 | — | — | — |
| copy.test | COMPILE | 0.195268 | 0.452504 | 0.613514 | — | — | — |
| copy_if.test | COMPILE | 0.172249 | 0.462764 | 0.535618 | — | — | — |
| count.test | COMPILE | 0.164887 | 0.425939 | 0.507450 | — | — | — |
| count_if.test | COMPILE | 0.174383 | 0.441430 | 0.537936 | — | — | — |
| deque.test | COMPILE | 0.165227 | 0.435371 | 0.504612 | — | — | — |
| distance.test | COMPILE | 0.153365 | 0.355949 | 0.470351 | — | — | — |
| empty.test | COMPILE | 0.134147 | 0.319071 | 0.402139 | — | — | — |
| equal.test | COMPILE | 0.157510 | 0.367492 | 0.489337 | — | — | — |
| erase.test | COMPILE | 0.178228 | 0.435041 | 0.557106 | — | — | — |
| erase_range.test | COMPILE | 0.169807 | 0.406088 | 0.533149 | — | — | — |
| eval_if.test | COMPILE | 0.128187 | 0.295305 | 0.373183 | — | — | — |
| filter_view.test | COMPILE | 0.170419 | 0.401867 | 0.523048 | — | — | — |
| find.test | COMPILE | 0.164981 | 0.398937 | 0.506287 | — | — | — |
| find_if.test | COMPILE | 0.169805 | 0.402550 | 0.512161 | — | — | — |
| fold.test | COMPILE | 0.176616 | 0.423303 | 0.563995 | — | — | — |
| for_each.test | RUN | 0.251077 | 0.603261 | 0.855705 | 0.001533 | 0.001593 | 0.001622 |
| front.test | COMPILE | 0.140483 | 0.338790 | 0.446531 | — | — | — |
| get_tag_def.test | COMPILE | 0.125108 | 0.278784 | 0.374202 | — | — | — |
| has_xxx.test | COMPILE | 0.135019 | 0.270788 | 0.420222 | — | — | — |
| identity.test | COMPILE | 0.142287 | 0.277293 | 0.414062 | — | — | — |
| if.test | COMPILE | 0.124262 | 0.286018 | 0.366534 | — | — | — |
| index_of.test | COMPILE | 0.154857 | 0.375309 | 0.476551 | — | — | — |
| inherit.test | COMPILE | 0.132843 | 0.304201 | 0.388790 | — | — | — |
| insert.test | COMPILE | 0.181864 | 0.442381 | 0.571884 | — | — | — |
| insert_range.test | COMPILE | 0.250018 | 0.600686 | 0.826464 | — | — | — |
| int.test | RUN | 0.129901 | 0.321082 | 0.433983 | 0.001610 | 0.001619 | 0.001456 |
| char.test | RUN | 0.131987 | 0.324401 | 0.417689 | 0.001716 | 0.001529 | 0.001662 |
| char_unsigned.test | RUN | 0.131616 | 0.327932 | 0.414843 | 0.001563 | 0.001882 | 0.001695 |
| integral_c.test | RUN | 0.149177 | 0.410982 | 0.499193 | 0.001724 | 0.001586 | 0.001286 |
| integral_c_unsigned.test | RUN | 0.147960 | 0.409493 | 0.534004 | 0.001397 | 0.001519 | 0.001680 |
| is_placeholder.test | COMPILE | 0.126576 | 0.294323 | 0.379771 | — | — | — |
| is_sequence.test | COMPILE | 0.151725 | 0.366807 | 0.448441 | — | — | — |
| iterator_tags.test | COMPILE | 0.129259 | 0.305248 | 0.386630 | — | — | — |
| joint_view.test | COMPILE | 0.166796 | 0.403628 | 0.523960 | — | — | — |
| lambda.test | COMPILE | 0.154719 | 0.365943 | 0.499005 | — | — | — |
| lambda_args.test | COMPILE | 0.150272 | 0.355468 | 0.460941 | — | — | — |
| list.test | COMPILE | 0.154248 | 0.376440 | 0.479368 | — | — | — |
| list_c.test | COMPILE | 0.153093 | 0.354864 | 0.482550 | — | — | — |
| logical.test | COMPILE | 0.125541 | 0.288984 | 0.398110 | — | — | — |
| lower_bound.test | COMPILE | 0.163508 | 0.379387 | 0.467021 | — | — | — |
| map.test | COMPILE | 0.187830 | 0.469744 | 0.612674 | — | — | — |
| max_element.test | COMPILE | 0.150813 | 0.363740 | 0.456670 | — | — | — |
| min_max.test | COMPILE | 0.128479 | 0.298492 | 0.414415 | — | — | — |
| multiset.test | COMPILE | 0.164859 | 0.403512 | 0.507140 | — | — | — |
| next.test | COMPILE | 0.122605 | 0.281551 | 0.394648 | — | — | — |
| no_has_xxx.test | COMPILE | 0.134210 | 0.313968 | 0.425190 | — | — | — |
| numeric_ops.test | COMPILE | 0.146668 | 0.351442 | 0.449187 | — | — | — |
| pair_view.test | COMPILE | 0.168887 | 0.405011 | 0.519857 | — | — | — |
| partition.test | COMPILE | 0.183408 | 0.437490 | 0.574202 | — | — | — |
| pop_front.test | COMPILE | 0.150098 | 0.358504 | 0.470082 | — | — | — |
| push_back.test | COMPILE | 0.126639 | 0.307476 | 0.382077 | — | — | — |
| push_front.test | COMPILE | 0.153868 | 0.371095 | 0.473895 | — | — | — |
| quote.test | COMPILE | 0.126458 | 0.299364 | 0.382024 | — | — | — |
| range_c.test | COMPILE | 0.155751 | 0.379359 | 0.485786 | — | — | — |
| remove.test | COMPILE | 0.166115 | 0.399836 | 0.515527 | — | — | — |
| remove_if.test | COMPILE | 0.173034 | 0.422361 | 0.527577 | — | — | — |
| replace.test | COMPILE | 0.188456 | 0.461112 | 0.573252 | — | — | — |
| replace_if.test | COMPILE | 0.185380 | 0.459572 | 0.575100 | — | — | — |
| reverse.test | COMPILE | 0.175337 | 0.423172 | 0.546752 | — | — | — |
| same_as.test | COMPILE | 0.137918 | 0.323328 | 0.401836 | — | — | — |
| set.test | COMPILE | 0.234982 | 0.599002 | 0.825446 | — | — | — |
| set_c.test | COMPILE | 0.172176 | 0.410085 | 0.545212 | — | — | — |
| single_view.test | COMPILE | 0.154057 | 0.386992 | 0.489513 | — | — | — |
| size.test | COMPILE | 0.152167 | 0.362684 | 0.474425 | — | — | — |
| size_t.test | RUN | 0.130727 | 0.320606 | 0.431203 | 0.001520 | 0.001850 | 0.001578 |
| sizeof.test | COMPILE | 0.123408 | 0.282725 | 0.388656 | — | — | — |
| sort.test | COMPILE | 0.196437 | 0.474291 | 0.605644 | — | — | — |
| stable_partition.test | COMPILE | 0.182578 | 0.439582 | 0.573790 | — | — | — |
| transform.test | COMPILE | 0.195249 | 0.481444 | 0.605051 | — | — | — |
| transform_view.test | COMPILE | 0.160564 | 0.378676 | 0.502026 | — | — | — |
| unique.test | COMPILE | 0.164675 | 0.404603 | 0.514828 | — | — | — |
| unpack_args.test | COMPILE | 0.154849 | 0.377470 | 0.487339 | — | — | — |
| upper_bound.test | COMPILE | 0.159816 | 0.370500 | 0.486550 | — | — | — |
| vector.test | COMPILE | 0.183679 | 0.448573 | 0.592057 | — | — | — |
| vector_c.test | COMPILE | 0.159383 | 0.375569 | 0.488216 | — | — | — |
| zip_view.test | COMPILE | 0.222992 | 0.574528 | 0.716401 | — | — | — |
| string.test | RUN | 0.358416 | 1.111244 | 1.031055 | 0.001290 | 0.001292 | 0.001195 |
| issue_69.test | RUN | 0.012300 | 0.045928 | 0.050249 | 0.000629 | 0.000657 | 0.001453 |
| issue_84.test | RUN | 0.036939 | 0.092231 | 0.095057 | 0.000509 | 0.000618 | 0.001207 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998×† | 1.005×, 0.990× | 1.085× |
| clang | 1.077× | 1.071×, 1.084× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000996s | 0.001043s | 0.000985s | byte equality observed |
| char.test | 10 | 0.001027s | 0.001042s | 0.000993s | byte equality observed |
| char_unsigned.test | 10 | 0.001024s | 0.001015s | 0.000978s | byte equality observed |
| for_each.test | 10 | 0.001053s | 0.001034s | 0.000981s | byte equality observed |
| int.test | 10 | 0.001021s | 0.001019s | 0.000977s | byte equality observed |
| integral_c.test | 10 | 0.000996s | 0.001002s | 0.000989s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001030s | 0.001009s | 0.000993s | byte equality observed |
| issue_69.test | 10 | 0.000474s | 0.000467s | 0.001021s | byte equality observed |
| issue_84.test | 10 | 0.000473s | 0.000462s | 0.000974s | byte equality observed |
| size_t.test | 10 | 0.001020s | 0.001025s | 0.000982s | byte equality observed |
| string.test | 10 | 0.001046s | 0.001039s | 0.001012s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
