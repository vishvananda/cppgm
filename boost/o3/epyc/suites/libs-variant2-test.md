# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.098522 | 0.209073 | 0.248792 | 0.001730 | 0.000765 | 0.002004 |
| variant_size.test | RUN | 0.167753 | 0.517995 | 0.503903 | 0.001744 | 0.001793 | 0.001534 |
| variant_alternative.test | RUN | 0.206517 | 1.669479 | 0.830399 | 0.001559 | 0.001752 | 0.001634 |
| variant_holds_alternative.test | RUN | 0.152145 | 0.422739 | 0.451564 | 0.001756 | 0.001808 | 0.001659 |
| variant_holds_alternative_cx.test | COMPILE | 0.104040 | 0.216686 | 0.257597 | — | — | — |
| variant_get_by_index.test | RUN | 0.236084 | 1.782555 | 1.006744 | 0.001920 | 0.001980 | 0.001691 |
| variant_get_by_index_cx.test | COMPILE | 0.103929 | 0.231019 | 0.265466 | — | — | — |
| variant_get_by_type.test | RUN | 0.253718 | 1.919031 | 1.073272 | 0.001854 | 0.001935 | 0.001726 |
| variant_get_by_type_cx.test | COMPILE | 0.095721 | 0.205794 | 0.220606 | — | — | — |
| variant_default_construct.test | RUN | 0.251128 | 1.391803 | 0.889714 | 0.001818 | 0.001826 | 0.001702 |
| variant_default_construct_cx.test | COMPILE | 0.106541 | 0.228442 | 0.254997 | — | — | — |
| variant_copy_construct.test | RUN | 0.358797 | 2.409182 | 1.579622 | 0.001633 | 0.001870 | 0.001677 |
| variant_copy_construct_cx.test | COMPILE | 0.116121 | 0.264927 | 0.330163 | — | — | — |
| variant_move_construct.test | RUN | 0.339573 | 2.071300 | 1.399435 | 0.001734 | 0.001766 | 0.001659 |
| variant_move_construct_cx.test | COMPILE | 0.096780 | 0.213003 | 0.221161 | — | — | — |
| variant_value_construct.test | RUN | 0.195716 | 0.530163 | 0.578533 | 0.001809 | 0.001901 | 0.001603 |
| variant_value_construct_cx.test | COMPILE | 0.102633 | 0.248504 | 0.271666 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.192972 | 0.547449 | 0.604766 | 0.001813 | 0.001746 | 0.001328 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.107283 | 0.229706 | 0.274298 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.189814 | 0.556855 | 0.590780 | 0.001570 | 0.001750 | 0.001585 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.105551 | 0.258506 | 0.282212 | — | — | — |
| variant_copy_assign.test | RUN | 0.250346 | 1.661482 | 0.960590 | 0.001748 | 0.001569 | 0.001063 |
| variant_copy_assign_cx.test | COMPILE | 0.093369 | 0.202606 | 0.226983 | — | — | — |
| variant_move_assign.test | RUN | 0.253536 | 1.629075 | 0.936780 | 0.001772 | 0.002088 | 0.000904 |
| variant_move_assign_cx.test | COMPILE | 0.096137 | 0.199949 | 0.227102 | — | — | — |
| variant_value_assign.test | RUN | 0.195295 | 0.590706 | 0.662388 | 0.001429 | 0.001843 | 0.001490 |
| variant_value_assign_cx.test | COMPILE | 0.090981 | 0.205682 | 0.237663 | — | — | — |
| variant_emplace_index.test | RUN | 0.212443 | 0.720951 | 0.673728 | 0.001449 | 0.001519 | 0.001560 |
| variant_emplace_index_cx.test | COMPILE | 0.096204 | 0.199852 | 0.212112 | — | — | — |
| variant_emplace_type.test | RUN | 0.196616 | 0.628787 | 0.612546 | 0.001549 | 0.001761 | 0.001545 |
| variant_emplace_type_cx.test | COMPILE | 0.091092 | 0.240788 | 0.212898 | — | — | — |
| variant_swap.test | RUN | 0.194187 | 0.754977 | 0.645655 | 0.001792 | 0.001828 | 0.001531 |
| variant_eq_ne.test | RUN | 0.163085 | 0.458833 | 0.460671 | 0.001636 | 0.001608 | 0.001419 |
| variant_eq_ne_cx.test | COMPILE | 0.091847 | 0.199987 | 0.233712 | — | — | — |
| variant_lt_gt.test | RUN | 0.174099 | 0.505849 | 0.506966 | 0.001483 | 0.001906 | 0.001531 |
| variant_lt_gt_cx.test | COMPILE | 0.093580 | 0.200701 | 0.202991 | — | — | — |
| variant_destroy.test | RUN | 0.172907 | 0.497416 | 0.513277 | 0.001796 | 0.001869 | 0.001518 |
| variant_visit.test | RUN | 1.010919 | 3.823823 | 8.694111 | 0.001606 | 0.001722 | 0.001415 |
| variant_convert_construct.test | RUN | 0.218360 | 0.647263 | 0.710081 | 0.001845 | 0.001879 | 0.001515 |
| variant_subset.test | RUN | 0.225473 | 0.709455 | 0.740424 | 0.001738 | 0.001903 | 0.001472 |
| variant_valueless.test | RUN | 0.169541 | 0.465011 | 0.512386 | 0.001748 | 0.001758 | 0.001482 |
| variant_copy_construct_throw.test | RUN | 0.131626 | 0.337249 | 0.356316 | 0.001724 | 0.002022 | 0.001648 |
| variant_move_construct_throw.test | RUN | 0.131472 | 0.341608 | 0.359570 | 0.001612 | 0.001966 | 0.001428 |
| variant_convert_construct_throw.test | RUN | 0.137279 | 0.348201 | 0.381395 | 0.001856 | 0.001812 | 0.001578 |
| variant_copy_assign_throw.test | RUN | 0.136704 | 0.321165 | 0.367957 | 0.001622 | 0.001892 | 0.001546 |
| variant_move_assign_throw.test | RUN | 0.134535 | 0.330503 | 0.363133 | 0.001723 | 0.001964 | 0.001605 |
| variant_get_by_index_nx.test | RUN | 0.293395 | 1.562767 | 0.956905 | 0.001620 | 0.001882 | 0.001518 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.101675 | 0.243203 | 0.254274 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.293084 | 1.718756 | 1.020862 | 0.001604 | 0.001891 | 0.001531 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.088419 | 0.209037 | 0.229562 | — | — | — |
| variant_subset_nx.test | RUN | 0.232662 | 0.680467 | 0.752276 | 0.001678 | 0.001954 | 0.001643 |
| variant_hash.test | RUN | 0.229912 | 0.842145 | 0.681378 | 0.001798 | 0.001926 | 0.001470 |
| variant_trivial.test | RUN | 1.290056 | 4.522443 | 5.267555 | 0.001723 | 0.001923 | 0.001409 |
| variant_special.test | RUN | 1.184765 | 4.996304 | 5.617535 | 0.001689 | 0.002070 | 0.001634 |
| variant_visit_derived.test | RUN | 0.156637 | 0.459294 | 0.519217 | 0.001871 | 0.001857 | 0.001642 |
| variant_many_types.test | RUN | 1.343954 | 6.050734 | 7.587152 | 0.001588 | 0.001647 | 0.001484 |
| variant_visit_r.test | RUN | 0.564258 | 1.817738 | 2.989111 | 0.001718 | 0.001739 | 0.003160 |
| variant_derived_construct.test | COMPILE | 0.096231 | 0.209852 | 0.225057 | — | — | — |
| variant_visit_by_index.test | RUN | 0.223346 | 0.537660 | 0.639297 | 0.001614 | 0.001908 | 0.002636 |
| variant_ostream_insert.test | RUN | 0.155577 | 0.463781 | 0.481970 | 0.001923 | 0.001643 | 0.001701 |
| is_output_streamable.test | RUN | 0.193332 | 0.928888 | 0.642880 | 0.001441 | 0.001524 | 0.001590 |
| variant_json_value_from.test | RUN | 0.305506 | 0.716525 | 0.821721 | 0.001161 | 0.001820 | 0.001672 |
| variant_json_value_to.test | RUN | 0.371572 | 0.997655 | 1.157780 | 0.001764 | 0.001777 | 0.001598 |
| variant_uses_double_storage.test | COMPILE | 0.101254 | 0.227808 | 0.257710 | — | — | — |
| variant_derived_construct2.test | RUN | 0.137575 | 0.354225 | 0.414321 | 0.001457 | 0.001906 | 0.001564 |
| variant_visit_cx.test | COMPILE | 0.091143 | 0.216042 | 0.241240 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.092252 | 0.205237 | 0.218353 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.093656 | 0.207837 | 0.202876 | — | — | — |
| variant_index_type_126.test | RUN | 0.852425 | 1.965611 | 3.478227 | 0.001607 | 0.001841 | 0.001598 |
| variant_index_type_127.test | RUN | 0.864822 | 1.988572 | 3.543845 | 0.001690 | 0.001802 | 0.001253 |
| variant_index_type_128.test | RUN | 0.886324 | 2.011275 | 3.461098 | 0.001872 | 0.001582 | 0.001302 |
| variant_index_type_129.test | RUN | 0.880202 | 1.979308 | 3.539119 | 0.001712 | 0.001840 | 0.001230 |
| variant_index_type_254.test | RUN | 2.900985 | 7.266569 | 10.709060 | 0.001601 | 0.001988 | 0.001641 |
| variant_index_type_255.test | RUN | 3.033407 | 7.348411 | 10.754462 | 0.001492 | 0.001837 | 0.001625 |
| variant_index_type_256.test | RUN | 3.046039 | 7.502910 | 10.905844 | 0.001253 | 0.001514 | 0.001382 |
| variant_index_type_257.test | RUN | 3.088668 | 7.560205 | 10.953659 | 0.001405 | 0.001616 | 0.001282 |
| variant_default_construct_cx_2.test | COMPILE | 0.083735 | 0.219852 | 0.237946 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.089021 | 0.190056 | 0.222040 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.089307 | 0.196584 | 0.221528 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.086616 | 0.194285 | 0.233275 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.084859 | 0.186633 | 0.219784 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.077138 | 0.139493 | 0.216961 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.077711 | 0.177687 | 0.214270 | — | — | — |
| variant_issue_55.test | RUN | 0.137671 | 0.369429 | 0.320629 | 0.001203 | 0.001305 | 0.001098 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964×† | 0.993×, 0.935× | 0.969× |
| clang | 1.067×† | 1.110×, 1.023× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000892s | 0.000895s | 0.001030s | byte equality observed |
| quick.test | 10 | 0.000875s | 0.000408s | 0.001020s | byte equality observed |
| variant_alternative.test | 10 | 0.000910s | 0.000909s | 0.001016s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000898s | 0.000891s | 0.001050s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000929s | 0.000918s | 0.001066s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000919s | 0.000919s | 0.001060s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000949s | 0.000934s | 0.001081s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000919s | 0.000917s | 0.001046s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000930s | 0.000915s | 0.001063s | byte equality observed |
| variant_default_construct.test | 10 | 0.000930s | 0.000902s | 0.001024s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000917s | 0.000908s | 0.001034s | byte equality observed |
| variant_destroy.test | 10 | 0.000954s | 0.000884s | 0.001037s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000912s | 0.000910s | 0.001033s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000914s | 0.000897s | 0.001034s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000934s | 0.000909s | 0.001018s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000972s | 0.000976s | 0.001063s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000927s | 0.000915s | 0.001028s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000994s | 0.000952s | 0.001067s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000956s | 0.000934s | 0.001040s | byte equality observed |
| variant_hash.test | 10 | 0.000943s | 0.000916s | 0.001061s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000956s | 0.000890s | 0.001039s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000953s | 0.000897s | 0.001044s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000986s | 0.000909s | 0.001029s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000965s | 0.000890s | 0.001041s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000935s | 0.000894s | 0.001057s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000966s | 0.000898s | 0.001054s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000948s | 0.000887s | 0.001076s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000957s | 0.000893s | 0.001024s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000967s | 0.000879s | 0.001037s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000952s | 0.000891s | 0.001031s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000981s | 0.000896s | 0.001041s | byte equality observed |
| variant_issue_55.test | 10 | 0.000959s | 0.000907s | 0.001062s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001017s | 0.000931s | 0.001068s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001013s | 0.000945s | 0.001060s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000971s | 0.000933s | 0.001028s | byte equality observed |
| variant_many_types.test | 10 | 0.001020s | 0.000940s | 0.001075s | byte equality observed |
| variant_move_assign.test | 10 | 0.001009s | 0.000939s | 0.001055s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001042s | 0.000948s | 0.001067s | byte equality observed |
| variant_move_construct.test | 10 | 0.001015s | 0.000945s | 0.001040s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001039s | 0.000949s | 0.001061s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001033s | 0.000957s | 0.001033s | byte equality observed |
| variant_size.test | 10 | 0.001020s | 0.000926s | 0.001006s | byte equality observed |
| variant_special.test | 10 | 0.001102s | 0.001023s | 0.001130s | byte equality observed |
| variant_subset.test | 10 | 0.001036s | 0.000970s | 0.001067s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001009s | 0.000942s | 0.001044s | byte equality observed |
| variant_swap.test | 10 | 0.001013s | 0.000926s | 0.001042s | byte equality observed |
| variant_trivial.test | 10 | 0.001060s | 0.000998s | 0.001059s | byte equality observed |
| variant_value_assign.test | 10 | 0.001000s | 0.000957s | 0.001024s | byte equality observed |
| variant_value_construct.test | 10 | 0.000986s | 0.000935s | 0.001051s | byte equality observed |
| variant_valueless.test | 10 | 0.001043s | 0.000998s | 0.001081s | byte equality observed |
| variant_visit.test | 10 | 0.001007s | 0.000957s | 0.001038s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000984s | 0.000950s | 0.001045s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000989s | 0.000970s | 0.001025s | byte equality observed |
| variant_visit_r.test | 10 | 0.000994s | 0.000988s | 0.001033s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
