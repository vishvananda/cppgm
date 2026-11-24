# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.118094 | 0.254244 | 0.361433 | 0.001639 | 0.000782 | 0.001727 |
| variant_size.test | RUN | 0.204998 | 0.627921 | 0.668744 | 0.001888 | 0.001887 | 0.001773 |
| variant_alternative.test | RUN | 0.259775 | 1.931858 | 1.144962 | 0.001842 | 0.001856 | 0.001427 |
| variant_holds_alternative.test | RUN | 0.194705 | 0.480578 | 0.698267 | 0.001628 | 0.001824 | 0.001540 |
| variant_holds_alternative_cx.test | COMPILE | 0.123192 | 0.273367 | 0.402195 | — | — | — |
| variant_get_by_index.test | RUN | 0.305253 | 2.124104 | 1.439168 | 0.001651 | 0.001877 | 0.001930 |
| variant_get_by_index_cx.test | COMPILE | 0.125496 | 0.276566 | 0.414851 | — | — | — |
| variant_get_by_type.test | RUN | 0.306703 | 2.229296 | 1.539353 | 0.002007 | 0.001441 | 0.001809 |
| variant_get_by_type_cx.test | COMPILE | 0.116677 | 0.253532 | 0.361930 | — | — | — |
| variant_default_construct.test | RUN | 0.291669 | 1.657740 | 1.222837 | 0.001660 | 0.001749 | 0.001670 |
| variant_default_construct_cx.test | COMPILE | 0.127238 | 0.255628 | 0.412117 | — | — | — |
| variant_copy_construct.test | RUN | 0.444350 | 2.807150 | 2.215863 | 0.001571 | 0.001758 | 0.001772 |
| variant_copy_construct_cx.test | COMPILE | 0.144329 | 0.319039 | 0.461954 | — | — | — |
| variant_move_construct.test | RUN | 0.411019 | 2.404822 | 2.047169 | 0.001332 | 0.001807 | 0.001818 |
| variant_move_construct_cx.test | COMPILE | 0.113442 | 0.252801 | 0.344539 | — | — | — |
| variant_value_construct.test | RUN | 0.219804 | 0.627213 | 0.890802 | 0.001773 | 0.001846 | 0.001822 |
| variant_value_construct_cx.test | COMPILE | 0.130016 | 0.278839 | 0.434529 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.235158 | 0.612667 | 0.850496 | 0.001631 | 0.001384 | 0.001780 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.127956 | 0.278771 | 0.394483 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.229028 | 0.619620 | 0.868261 | 0.001593 | 0.001911 | 0.001788 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.128681 | 0.285693 | 0.404344 | — | — | — |
| variant_copy_assign.test | RUN | 0.302470 | 1.915198 | 1.372175 | 0.001526 | 0.001873 | 0.001751 |
| variant_copy_assign_cx.test | COMPILE | 0.112907 | 0.245946 | 0.352606 | — | — | — |
| variant_move_assign.test | RUN | 0.301769 | 1.905053 | 1.346137 | 0.001856 | 0.001880 | 0.001484 |
| variant_move_assign_cx.test | COMPILE | 0.112656 | 0.245802 | 0.349268 | — | — | — |
| variant_value_assign.test | RUN | 0.236468 | 0.688047 | 0.975038 | 0.002096 | 0.001612 | 0.001449 |
| variant_value_assign_cx.test | COMPILE | 0.113962 | 0.247540 | 0.351711 | — | — | — |
| variant_emplace_index.test | RUN | 0.267396 | 0.808260 | 1.031465 | 0.001576 | 0.001770 | 0.001735 |
| variant_emplace_index_cx.test | COMPILE | 0.111616 | 0.240440 | 0.359373 | — | — | — |
| variant_emplace_type.test | RUN | 0.237363 | 0.701686 | 0.956358 | 0.001587 | 0.001915 | 0.001768 |
| variant_emplace_type_cx.test | COMPILE | 0.108521 | 0.240384 | 0.360176 | — | — | — |
| variant_swap.test | RUN | 0.244287 | 0.798414 | 0.976929 | 0.001760 | 0.001674 | 0.001713 |
| variant_eq_ne.test | RUN | 0.198761 | 0.538098 | 0.743111 | 0.001288 | 0.001736 | 0.001663 |
| variant_eq_ne_cx.test | COMPILE | 0.110091 | 0.238536 | 0.347460 | — | — | — |
| variant_lt_gt.test | RUN | 0.205466 | 0.560112 | 0.778881 | 0.001570 | 0.001773 | 0.001818 |
| variant_lt_gt_cx.test | COMPILE | 0.112920 | 0.255241 | 0.352875 | — | — | — |
| variant_destroy.test | RUN | 0.209856 | 0.582193 | 0.797079 | 0.001604 | 0.001878 | 0.001734 |
| variant_visit.test | RUN | 1.274368 | 4.488652 | 12.592588 | 0.001636 | 0.001630 | 0.001721 |
| variant_convert_construct.test | RUN | 0.258617 | 0.763805 | 1.071452 | 0.001833 | 0.001876 | 0.001627 |
| variant_subset.test | RUN | 0.266650 | 0.846859 | 1.121909 | 0.001860 | 0.001907 | 0.001813 |
| variant_valueless.test | RUN | 0.199993 | 0.533822 | 0.768999 | 0.001718 | 0.001958 | 0.001716 |
| variant_copy_construct_throw.test | RUN | 0.164138 | 0.396148 | 0.527378 | 0.001656 | 0.001892 | 0.001880 |
| variant_move_construct_throw.test | RUN | 0.158512 | 0.379673 | 0.522944 | 0.001758 | 0.001889 | 0.001694 |
| variant_convert_construct_throw.test | RUN | 0.170458 | 0.420557 | 0.603818 | 0.001728 | 0.001974 | 0.001768 |
| variant_copy_assign_throw.test | RUN | 0.158818 | 0.381240 | 0.518608 | 0.001666 | 0.001862 | 0.001742 |
| variant_move_assign_throw.test | RUN | 0.156301 | 0.375883 | 0.518339 | 0.001892 | 0.001688 | 0.001852 |
| variant_get_by_index_nx.test | RUN | 0.358756 | 1.786228 | 1.412409 | 0.001766 | 0.001836 | 0.001755 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.123601 | 0.293804 | 0.371706 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.369629 | 2.006619 | 1.465633 | 0.001743 | 0.001792 | 0.001895 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.113538 | 0.234179 | 0.355878 | — | — | — |
| variant_subset_nx.test | RUN | 0.285478 | 0.808078 | 1.155888 | 0.001541 | 0.001794 | 0.001785 |
| variant_hash.test | RUN | 0.272261 | 0.914546 | 1.093263 | 0.001828 | 0.001720 | 0.001770 |
| variant_trivial.test | RUN | 1.514750 | 4.970513 | 8.298626 | 0.001905 | 0.001904 | 0.001770 |
| variant_special.test | RUN | 1.505562 | 5.353609 | 8.641094 | 0.002114 | 0.002026 | 0.001816 |
| variant_visit_derived.test | RUN | 0.186819 | 0.480409 | 0.806871 | 0.001860 | 0.001808 | 0.001836 |
| variant_many_types.test | RUN | 1.640906 | 7.333360 | 11.098637 | 0.001490 | 0.001938 | 0.001756 |
| variant_visit_r.test | RUN | 0.714109 | 2.293360 | 4.263901 | 0.001754 | 0.001837 | 0.001625 |
| variant_derived_construct.test | COMPILE | 0.109843 | 0.237657 | 0.371331 | — | — | — |
| variant_visit_by_index.test | RUN | 0.264044 | 0.613501 | 1.067714 | 0.001496 | 0.001627 | 0.001639 |
| variant_ostream_insert.test | RUN | 0.178668 | 0.503734 | 0.606296 | 0.001751 | 0.001795 | 0.001808 |
| is_output_streamable.test | RUN | 0.225279 | 1.080001 | 0.969503 | 0.001552 | 0.001822 | 0.001775 |
| variant_json_value_from.test | RUN | 0.352573 | 0.830269 | 1.247584 | 0.001824 | 0.001998 | 0.001823 |
| variant_json_value_to.test | RUN | 0.424991 | 1.205464 | 1.649661 | 0.001793 | 0.001877 | 0.001837 |
| variant_uses_double_storage.test | COMPILE | 0.119400 | 0.271954 | 0.391726 | — | — | — |
| variant_derived_construct2.test | RUN | 0.162132 | 0.453450 | 0.558352 | 0.001543 | 0.001812 | 0.001531 |
| variant_visit_cx.test | COMPILE | 0.113662 | 0.237967 | 0.354605 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.111200 | 0.260184 | 0.341668 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.110248 | 0.252396 | 0.342994 | — | — | — |
| variant_index_type_126.test | RUN | 1.032898 | 2.505594 | 5.112071 | 0.001748 | 0.001788 | 0.001701 |
| variant_index_type_127.test | RUN | 0.994121 | 2.429200 | 5.215852 | 0.001638 | 0.001541 | 0.001523 |
| variant_index_type_128.test | RUN | 1.075106 | 2.516369 | 5.259987 | 0.001730 | 0.001853 | 0.001688 |
| variant_index_type_129.test | RUN | 1.015289 | 2.527810 | 5.260450 | 0.001590 | 0.001717 | 0.001702 |
| variant_index_type_254.test | RUN | 3.598809 | 9.048507 | 15.533138 | 0.001378 | 0.001753 | 0.001828 |
| variant_index_type_255.test | RUN | 3.510149 | 9.065155 | 15.771324 | 0.001628 | 0.001591 | 0.001788 |
| variant_index_type_256.test | RUN | 3.524660 | 9.173714 | 15.992856 | 0.001670 | 0.001538 | 0.001646 |
| variant_index_type_257.test | RUN | 3.611408 | 9.342398 | 15.897297 | 0.001545 | 0.001356 | 0.001707 |
| variant_default_construct_cx_2.test | COMPILE | 0.105573 | 0.268727 | 0.383015 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.112384 | 0.228374 | 0.303774 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.111707 | 0.238278 | 0.344597 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.109018 | 0.235823 | 0.348840 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.113383 | 0.264261 | 0.322473 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.089609 | 0.235676 | 0.327231 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.096097 | 0.232649 | 0.268548 | — | — | — |
| variant_issue_55.test | RUN | 0.149759 | 0.480078 | 0.554525 | 0.001336 | 0.001430 | 0.001334 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.984×, 0.987× | 1.002× |
| clang | 1.002× | 1.011×, 0.994× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001152s | 0.001167s | 0.001165s | byte equality observed |
| quick.test | 10 | 0.001140s | 0.000505s | 0.001152s | byte equality observed |
| variant_alternative.test | 10 | 0.001143s | 0.001164s | 0.001151s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001181s | 0.001181s | 0.001138s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001191s | 0.001206s | 0.001204s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001161s | 0.001173s | 0.001149s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001192s | 0.001175s | 0.001206s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001152s | 0.001161s | 0.001168s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001177s | 0.001183s | 0.001203s | byte equality observed |
| variant_default_construct.test | 10 | 0.001145s | 0.001176s | 0.001158s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001163s | 0.001158s | 0.001163s | byte equality observed |
| variant_destroy.test | 10 | 0.001157s | 0.001162s | 0.001163s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001159s | 0.001180s | 0.001163s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001166s | 0.001174s | 0.001172s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001149s | 0.001160s | 0.001167s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001235s | 0.001249s | 0.001236s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001172s | 0.001181s | 0.001149s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001231s | 0.001226s | 0.001232s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001184s | 0.001163s | 0.001149s | byte equality observed |
| variant_hash.test | 10 | 0.001156s | 0.001165s | 0.001147s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001142s | 0.001184s | 0.001168s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001164s | 0.001171s | 0.001165s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001158s | 0.001157s | 0.001150s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001167s | 0.001161s | 0.001175s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001158s | 0.001167s | 0.001182s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001159s | 0.001149s | 0.001144s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001168s | 0.001150s | 0.001172s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001176s | 0.001143s | 0.001142s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001160s | 0.001152s | 0.001180s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001155s | 0.001143s | 0.001161s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001186s | 0.001136s | 0.001148s | byte equality observed |
| variant_issue_55.test | 10 | 0.001173s | 0.001151s | 0.001181s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001194s | 0.001191s | 0.001173s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001195s | 0.001196s | 0.001190s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001156s | 0.001155s | 0.001165s | byte equality observed |
| variant_many_types.test | 10 | 0.001197s | 0.001199s | 0.001203s | byte equality observed |
| variant_move_assign.test | 10 | 0.001168s | 0.001153s | 0.001168s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001177s | 0.001189s | 0.001203s | byte equality observed |
| variant_move_construct.test | 10 | 0.001157s | 0.001163s | 0.001163s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001197s | 0.001185s | 0.001188s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001186s | 0.001193s | 0.001204s | byte equality observed |
| variant_size.test | 10 | 0.001151s | 0.001162s | 0.001166s | byte equality observed |
| variant_special.test | 10 | 0.001245s | 0.001216s | 0.001212s | byte equality observed |
| variant_subset.test | 10 | 0.001187s | 0.001197s | 0.001204s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001175s | 0.001142s | 0.001172s | byte equality observed |
| variant_swap.test | 10 | 0.001172s | 0.001152s | 0.001158s | byte equality observed |
| variant_trivial.test | 10 | 0.001202s | 0.001194s | 0.001180s | byte equality observed |
| variant_value_assign.test | 10 | 0.001159s | 0.001161s | 0.001149s | byte equality observed |
| variant_value_construct.test | 10 | 0.001171s | 0.001172s | 0.001152s | byte equality observed |
| variant_valueless.test | 10 | 0.001218s | 0.001199s | 0.001215s | byte equality observed |
| variant_visit.test | 10 | 0.001169s | 0.001163s | 0.001171s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001161s | 0.001148s | 0.001153s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001147s | 0.001128s | 0.001180s | byte equality observed |
| variant_visit_r.test | 10 | 0.001169s | 0.001131s | 0.001170s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
