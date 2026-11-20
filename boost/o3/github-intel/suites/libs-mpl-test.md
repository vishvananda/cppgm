# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.419050 | 1.222993 | 1.157058 | — | — | — |
| largest_int.test | COMPILE | 0.134854 | 0.333462 | 0.382811 | — | — | — |
| msvc_is_class.test | COMPILE | 0.016104 | 0.041925 | 0.041972 | — | — | — |
| template_arity.test | COMPILE | 0.139955 | 0.334769 | 0.381065 | — | — | — |
| is_seq.test | COMPILE | 0.005522 | 0.013961 | 0.027311 | — | — | — |
| token_equal.test | COMPILE | 0.005223 | 0.015261 | 0.027849 | — | — | — |
| advance.test | COMPILE | 0.152069 | 0.373510 | 0.441411 | — | — | — |
| always.test | COMPILE | 0.159600 | 0.370497 | 0.453381 | — | — | — |
| apply.test | COMPILE | 0.166332 | 0.407377 | 0.470316 | — | — | — |
| apply_wrap.test | COMPILE | 0.141086 | 0.338074 | 0.402961 | — | — | — |
| arithmetic.test | COMPILE | 0.151664 | 0.393144 | 0.456277 | — | — | — |
| as_sequence.test | COMPILE | 0.167421 | 0.425926 | 0.467849 | — | — | — |
| assert.test | COMPILE | 0.037896 | 0.081476 | 0.086982 | — | — | — |
| at.test | COMPILE | 0.167337 | 0.414876 | 0.482499 | — | — | — |
| back.test | COMPILE | 0.156156 | 0.394168 | 0.455984 | — | — | — |
| bind.test | COMPILE | 0.153838 | 0.376707 | 0.447619 | — | — | — |
| bitwise.test | COMPILE | 0.153530 | 0.387828 | 0.458933 | — | — | — |
| bool.test | RUN | 0.140110 | 0.341698 | 0.408572 | 0.001480 | 0.001215 | 0.001682 |
| comparison.test | COMPILE | 0.151557 | 0.387661 | 0.441890 | — | — | — |
| contains.test | COMPILE | 0.186061 | 0.461148 | 0.534443 | — | — | — |
| copy.test | COMPILE | 0.222964 | 0.566390 | 0.651222 | — | — | — |
| copy_if.test | COMPILE | 0.198654 | 0.506521 | 0.580881 | — | — | — |
| count.test | COMPILE | 0.190211 | 0.461938 | 0.547024 | — | — | — |
| count_if.test | COMPILE | 0.197530 | 0.474413 | 0.577211 | — | — | — |
| deque.test | COMPILE | 0.186552 | 0.472239 | 0.550725 | — | — | — |
| distance.test | COMPILE | 0.173401 | 0.431875 | 0.503188 | — | — | — |
| empty.test | COMPILE | 0.151474 | 0.375961 | 0.435490 | — | — | — |
| equal.test | COMPILE | 0.178848 | 0.447287 | 0.515409 | — | — | — |
| erase.test | COMPILE | 0.204054 | 0.514135 | 0.615660 | — | — | — |
| erase_range.test | COMPILE | 0.193111 | 0.493203 | 0.563870 | — | — | — |
| eval_if.test | COMPILE | 0.143030 | 0.351179 | 0.418136 | — | — | — |
| filter_view.test | COMPILE | 0.194210 | 0.485086 | 0.568031 | — | — | — |
| find.test | COMPILE | 0.188591 | 0.478136 | 0.553785 | — | — | — |
| find_if.test | COMPILE | 0.195244 | 0.494834 | 0.566257 | — | — | — |
| fold.test | COMPILE | 0.202364 | 0.495159 | 0.601522 | — | — | — |
| for_each.test | RUN | 0.295991 | 0.721247 | 0.933627 | 0.001607 | 0.001395 | 0.001661 |
| front.test | COMPILE | 0.160458 | 0.405596 | 0.463322 | — | — | — |
| get_tag_def.test | COMPILE | 0.140948 | 0.329821 | 0.403412 | — | — | — |
| has_xxx.test | COMPILE | 0.155183 | 0.366713 | 0.463494 | — | — | — |
| identity.test | COMPILE | 0.160667 | 0.388348 | 0.459123 | — | — | — |
| if.test | COMPILE | 0.141425 | 0.342940 | 0.409860 | — | — | — |
| index_of.test | COMPILE | 0.179956 | 0.456135 | 0.520469 | — | — | — |
| inherit.test | COMPILE | 0.145575 | 0.357069 | 0.425112 | — | — | — |
| insert.test | COMPILE | 0.209952 | 0.526558 | 0.617250 | — | — | — |
| insert_range.test | COMPILE | 0.280027 | 0.711951 | 0.892328 | — | — | — |
| int.test | RUN | 0.147179 | 0.376970 | 0.447057 | 0.001746 | 0.001614 | 0.001478 |
| char.test | RUN | 0.149576 | 0.390036 | 0.450098 | 0.001575 | 0.001528 | 0.001517 |
| char_unsigned.test | RUN | 0.149449 | 0.373918 | 0.444855 | 0.001535 | 0.001820 | 0.001690 |
| integral_c.test | RUN | 0.166213 | 0.491950 | 0.552858 | 0.001620 | 0.001688 | 0.001575 |
| integral_c_unsigned.test | RUN | 0.168182 | 0.490055 | 0.537795 | 0.001730 | 0.001586 | 0.001593 |
| is_placeholder.test | COMPILE | 0.139032 | 0.348596 | 0.414983 | — | — | — |
| is_sequence.test | COMPILE | 0.171597 | 0.418647 | 0.482785 | — | — | — |
| iterator_tags.test | COMPILE | 0.148925 | 0.350295 | 0.410939 | — | — | — |
| joint_view.test | COMPILE | 0.196277 | 0.477707 | 0.560654 | — | — | — |
| lambda.test | COMPILE | 0.179637 | 0.443233 | 0.525514 | — | — | — |
| lambda_args.test | COMPILE | 0.165315 | 0.421128 | 0.521330 | — | — | — |
| list.test | COMPILE | 0.181742 | 0.446246 | 0.519728 | — | — | — |
| list_c.test | COMPILE | 0.174188 | 0.434241 | 0.525847 | — | — | — |
| logical.test | COMPILE | 0.142765 | 0.341239 | 0.412159 | — | — | — |
| lower_bound.test | COMPILE | 0.191200 | 0.448778 | 0.523460 | — | — | — |
| map.test | COMPILE | 0.220445 | 0.563852 | 0.661676 | — | — | — |
| max_element.test | COMPILE | 0.175040 | 0.432234 | 0.505353 | — | — | — |
| min_max.test | COMPILE | 0.137355 | 0.358426 | 0.424072 | — | — | — |
| multiset.test | COMPILE | 0.189035 | 0.488735 | 0.547443 | — | — | — |
| next.test | COMPILE | 0.142380 | 0.344966 | 0.410964 | — | — | — |
| no_has_xxx.test | COMPILE | 0.152179 | 0.366123 | 0.455148 | — | — | — |
| numeric_ops.test | COMPILE | 0.167798 | 0.422934 | 0.481066 | — | — | — |
| pair_view.test | COMPILE | 0.194594 | 0.474491 | 0.557834 | — | — | — |
| partition.test | COMPILE | 0.210698 | 0.526782 | 0.615021 | — | — | — |
| pop_front.test | COMPILE | 0.171180 | 0.424740 | 0.499915 | — | — | — |
| push_back.test | COMPILE | 0.143424 | 0.354698 | 0.417891 | — | — | — |
| push_front.test | COMPILE | 0.174308 | 0.432454 | 0.498542 | — | — | — |
| quote.test | COMPILE | 0.141511 | 0.341814 | 0.403900 | — | — | — |
| range_c.test | COMPILE | 0.179017 | 0.457506 | 0.538049 | — | — | — |
| remove.test | COMPILE | 0.189154 | 0.480697 | 0.554535 | — | — | — |
| remove_if.test | COMPILE | 0.195849 | 0.496264 | 0.574229 | — | — | — |
| replace.test | COMPILE | 0.213308 | 0.540132 | 0.623101 | — | — | — |
| replace_if.test | COMPILE | 0.212108 | 0.558338 | 0.628885 | — | — | — |
| reverse.test | COMPILE | 0.200939 | 0.514539 | 0.586455 | — | — | — |
| same_as.test | COMPILE | 0.152794 | 0.369664 | 0.429054 | — | — | — |
| set.test | COMPILE | 0.266901 | 0.708703 | 0.884131 | — | — | — |
| set_c.test | COMPILE | 0.193998 | 0.490580 | 0.585192 | — | — | — |
| single_view.test | COMPILE | 0.178320 | 0.459060 | 0.521157 | — | — | — |
| size.test | COMPILE | 0.170260 | 0.416519 | 0.493605 | — | — | — |
| size_t.test | RUN | 0.151741 | 0.392818 | 0.462551 | 0.001470 | 0.001746 | 0.001648 |
| sizeof.test | COMPILE | 0.139665 | 0.333354 | 0.411783 | — | — | — |
| sort.test | COMPILE | 0.227995 | 0.567705 | 0.658696 | — | — | — |
| stable_partition.test | COMPILE | 0.213100 | 0.527279 | 0.614043 | — | — | — |
| transform.test | COMPILE | 0.224916 | 0.574001 | 0.670594 | — | — | — |
| transform_view.test | COMPILE | 0.183114 | 0.456991 | 0.538836 | — | — | — |
| unique.test | COMPILE | 0.194466 | 0.491027 | 0.552581 | — | — | — |
| unpack_args.test | COMPILE | 0.179250 | 0.442165 | 0.517186 | — | — | — |
| upper_bound.test | COMPILE | 0.185367 | 0.458649 | 0.519211 | — | — | — |
| vector.test | COMPILE | 0.208331 | 0.541502 | 0.627595 | — | — | — |
| vector_c.test | COMPILE | 0.185763 | 0.439627 | 0.529252 | — | — | — |
| zip_view.test | COMPILE | 0.254406 | 0.667729 | 0.772623 | — | — | — |
| string.test | RUN | 0.424183 | 1.273200 | 1.122371 | 0.001170 | 0.001232 | 0.001204 |
| issue_69.test | RUN | 0.018131 | 0.050037 | 0.050649 | 0.000551 | 0.000688 | 0.001468 |
| issue_84.test | RUN | 0.037249 | 0.104573 | 0.097010 | 0.000557 | 0.000546 | 0.001172 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.014×, 0.981× | 1.010× |
| clang | 1.095× | 1.087×, 1.103× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001048s | 0.001044s | 0.001045s | byte equality observed |
| char.test | 10 | 0.001047s | 0.001052s | 0.001049s | byte equality observed |
| char_unsigned.test | 10 | 0.001046s | 0.001044s | 0.001042s | byte equality observed |
| for_each.test | 10 | 0.001088s | 0.001078s | 0.001057s | byte equality observed |
| int.test | 10 | 0.001047s | 0.001040s | 0.001059s | byte equality observed |
| integral_c.test | 10 | 0.001050s | 0.001056s | 0.001085s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001057s | 0.001028s | 0.001011s | byte equality observed |
| issue_69.test | 10 | 0.000479s | 0.000477s | 0.001023s | byte equality observed |
| issue_84.test | 10 | 0.000463s | 0.000458s | 0.001044s | byte equality observed |
| size_t.test | 10 | 0.001056s | 0.001082s | 0.001059s | byte equality observed |
| string.test | 10 | 0.001102s | 0.001074s | 0.001054s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
