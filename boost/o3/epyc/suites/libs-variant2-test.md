# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.113357 | 0.260655 | 0.363786 | 0.001694 | 0.000810 | 0.001738 |
| variant_size.test | RUN | 0.207061 | 0.624906 | 0.690123 | 0.001800 | 0.001938 | 0.001826 |
| variant_alternative.test | RUN | 0.259480 | 1.956784 | 1.153181 | 0.001695 | 0.001884 | 0.001492 |
| variant_holds_alternative.test | RUN | 0.195960 | 0.477308 | 0.702023 | 0.001484 | 0.001976 | 0.001691 |
| variant_holds_alternative_cx.test | COMPILE | 0.119706 | 0.282377 | 0.402346 | — | — | — |
| variant_get_by_index.test | RUN | 0.305258 | 2.166735 | 1.399577 | 0.001800 | 0.001923 | 0.001800 |
| variant_get_by_index_cx.test | COMPILE | 0.122085 | 0.306018 | 0.425641 | — | — | — |
| variant_get_by_type.test | RUN | 0.298258 | 2.318430 | 1.510637 | 0.001948 | 0.001872 | 0.001484 |
| variant_get_by_type_cx.test | COMPILE | 0.117103 | 0.254719 | 0.354041 | — | — | — |
| variant_default_construct.test | RUN | 0.278840 | 1.717448 | 1.215605 | 0.001517 | 0.001743 | 0.001443 |
| variant_default_construct_cx.test | COMPILE | 0.123145 | 0.275088 | 0.415739 | — | — | — |
| variant_copy_construct.test | RUN | 0.448517 | 2.812508 | 2.187371 | 0.001378 | 0.001885 | 0.001677 |
| variant_copy_construct_cx.test | COMPILE | 0.135628 | 0.322952 | 0.464055 | — | — | — |
| variant_move_construct.test | RUN | 0.408957 | 2.446075 | 2.024154 | 0.001718 | 0.001884 | 0.001699 |
| variant_move_construct_cx.test | COMPILE | 0.117996 | 0.257863 | 0.355348 | — | — | — |
| variant_value_construct.test | RUN | 0.225964 | 0.652564 | 0.877613 | 0.001779 | 0.001920 | 0.001781 |
| variant_value_construct_cx.test | COMPILE | 0.126105 | 0.305506 | 0.422886 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.227389 | 0.652549 | 0.887597 | 0.001531 | 0.001785 | 0.001682 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.127223 | 0.285886 | 0.414965 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.224409 | 0.643020 | 0.868954 | 0.001724 | 0.001753 | 0.001656 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.125273 | 0.294722 | 0.386449 | — | — | — |
| variant_copy_assign.test | RUN | 0.300704 | 1.962359 | 1.364292 | 0.001547 | 0.001620 | 0.001633 |
| variant_copy_assign_cx.test | COMPILE | 0.113214 | 0.252170 | 0.347753 | — | — | — |
| variant_move_assign.test | RUN | 0.297538 | 1.962694 | 1.371804 | 0.001688 | 0.001895 | 0.001221 |
| variant_move_assign_cx.test | COMPILE | 0.107038 | 0.249373 | 0.352475 | — | — | — |
| variant_value_assign.test | RUN | 0.233652 | 0.714436 | 0.980003 | 0.001366 | 0.001890 | 0.001586 |
| variant_value_assign_cx.test | COMPILE | 0.113625 | 0.246762 | 0.333791 | — | — | — |
| variant_emplace_index.test | RUN | 0.261302 | 0.825564 | 1.065421 | 0.001416 | 0.001845 | 0.001740 |
| variant_emplace_index_cx.test | COMPILE | 0.109650 | 0.244515 | 0.357870 | — | — | — |
| variant_emplace_type.test | RUN | 0.232101 | 0.697884 | 0.958476 | 0.001686 | 0.001990 | 0.001469 |
| variant_emplace_type_cx.test | COMPILE | 0.110498 | 0.261216 | 0.341770 | — | — | — |
| variant_swap.test | RUN | 0.242530 | 0.859307 | 0.999148 | 0.001653 | 0.001761 | 0.001503 |
| variant_eq_ne.test | RUN | 0.199792 | 0.516951 | 0.728630 | 0.001564 | 0.001844 | 0.001531 |
| variant_eq_ne_cx.test | COMPILE | 0.112982 | 0.254964 | 0.337569 | — | — | — |
| variant_lt_gt.test | RUN | 0.207249 | 0.573644 | 0.780061 | 0.001764 | 0.001781 | 0.001709 |
| variant_lt_gt_cx.test | COMPILE | 0.111235 | 0.240952 | 0.344857 | — | — | — |
| variant_destroy.test | RUN | 0.212324 | 0.536063 | 0.804256 | 0.001502 | 0.001859 | 0.001620 |
| variant_visit.test | RUN | 1.291153 | 4.690016 | 12.366788 | 0.001433 | 0.001802 | 0.001786 |
| variant_convert_construct.test | RUN | 0.262510 | 0.790714 | 1.121925 | 0.001693 | 0.001870 | 0.001805 |
| variant_subset.test | RUN | 0.278277 | 0.841490 | 1.147434 | 0.001654 | 0.001924 | 0.001764 |
| variant_valueless.test | RUN | 0.195925 | 0.550420 | 0.773370 | 0.001782 | 0.001949 | 0.001773 |
| variant_copy_construct_throw.test | RUN | 0.157655 | 0.410381 | 0.540049 | 0.001780 | 0.001952 | 0.001801 |
| variant_move_construct_throw.test | RUN | 0.153830 | 0.417629 | 0.570782 | 0.001664 | 0.001861 | 0.001760 |
| variant_convert_construct_throw.test | RUN | 0.159637 | 0.419887 | 0.564001 | 0.001759 | 0.001819 | 0.001783 |
| variant_copy_assign_throw.test | RUN | 0.157998 | 0.395662 | 0.531313 | 0.001802 | 0.001872 | 0.001819 |
| variant_move_assign_throw.test | RUN | 0.157163 | 0.399326 | 0.569887 | 0.001669 | 0.001529 | 0.001708 |
| variant_get_by_index_nx.test | RUN | 0.365210 | 1.844021 | 1.346831 | 0.001642 | 0.001860 | 0.001697 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.126450 | 0.282786 | 0.375330 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.355618 | 2.093110 | 1.436441 | 0.001639 | 0.001700 | 0.001712 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.112124 | 0.259028 | 0.356590 | — | — | — |
| variant_subset_nx.test | RUN | 0.286788 | 0.880482 | 1.177492 | 0.001730 | 0.001968 | 0.001754 |
| variant_hash.test | RUN | 0.275590 | 0.980255 | 1.069902 | 0.001763 | 0.001870 | 0.001773 |
| variant_trivial.test | RUN | 1.525671 | 5.439154 | 8.037916 | 0.001776 | 0.001956 | 0.001713 |
| variant_special.test | RUN | 1.556379 | 5.856215 | 8.397473 | 0.001977 | 0.002118 | 0.001804 |
| variant_visit_derived.test | RUN | 0.185596 | 0.522756 | 0.801106 | 0.001804 | 0.001947 | 0.001667 |
| variant_many_types.test | RUN | 1.609277 | 7.591903 | 11.077252 | 0.001766 | 0.001979 | 0.001764 |
| variant_visit_r.test | RUN | 0.726105 | 2.285371 | 4.234418 | 0.001594 | 0.001861 | 0.001770 |
| variant_derived_construct.test | COMPILE | 0.110538 | 0.267082 | 0.355484 | — | — | — |
| variant_visit_by_index.test | RUN | 0.237983 | 0.640004 | 0.981464 | 0.001455 | 0.001736 | 0.001732 |
| variant_ostream_insert.test | RUN | 0.178858 | 0.528278 | 0.717513 | 0.001720 | 0.001827 | 0.001784 |
| is_output_streamable.test | RUN | 0.216803 | 1.053800 | 0.922717 | 0.001536 | 0.001798 | 0.001759 |
| variant_json_value_from.test | RUN | 0.346608 | 0.905792 | 1.238362 | 0.001812 | 0.002092 | 0.001748 |
| variant_json_value_to.test | RUN | 0.421897 | 1.206503 | 1.603330 | 0.001846 | 0.001976 | 0.001718 |
| variant_uses_double_storage.test | COMPILE | 0.117445 | 0.264338 | 0.421252 | — | — | — |
| variant_derived_construct2.test | RUN | 0.158099 | 0.426198 | 0.583025 | 0.001512 | 0.001871 | 0.001677 |
| variant_visit_cx.test | COMPILE | 0.112199 | 0.257948 | 0.356630 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.110830 | 0.243898 | 0.341864 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.112278 | 0.256030 | 0.340111 | — | — | — |
| variant_index_type_126.test | RUN | 0.980999 | 2.554826 | 5.108015 | 0.001636 | 0.001751 | 0.001672 |
| variant_index_type_127.test | RUN | 1.026540 | 2.482828 | 5.113093 | 0.001580 | 0.001968 | 0.001788 |
| variant_index_type_128.test | RUN | 1.009699 | 2.548080 | 5.186371 | 0.001243 | 0.001844 | 0.001768 |
| variant_index_type_129.test | RUN | 1.026417 | 2.619530 | 5.181166 | 0.001687 | 0.001738 | 0.001762 |
| variant_index_type_254.test | RUN | 3.551752 | 9.259235 | 15.527627 | 0.001517 | 0.001655 | 0.001726 |
| variant_index_type_255.test | RUN | 3.453012 | 9.280143 | 15.591370 | 0.001554 | 0.001622 | 0.001770 |
| variant_index_type_256.test | RUN | 3.493192 | 9.553150 | 15.850732 | 0.001530 | 0.001791 | 0.001521 |
| variant_index_type_257.test | RUN | 3.598155 | 9.508938 | 15.918614 | 0.001697 | 0.001747 | 0.001795 |
| variant_default_construct_cx_2.test | COMPILE | 0.111804 | 0.252076 | 0.380830 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.103934 | 0.241408 | 0.353223 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.114520 | 0.239510 | 0.310469 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.109854 | 0.247790 | 0.310621 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.109437 | 0.245896 | 0.341713 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.107099 | 0.246250 | 0.346300 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.083816 | 0.234838 | 0.315413 | — | — | — |
| variant_issue_55.test | RUN | 0.152987 | 0.449372 | 0.558307 | 0.001299 | 0.001359 | 0.001224 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.989×, 1.002× | 1.004× |
| clang | 0.993× | 0.992×, 0.993× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001133s | 0.001175s | 0.001143s | byte equality observed |
| quick.test | 10 | 0.001131s | 0.000500s | 0.001105s | byte equality observed |
| variant_alternative.test | 10 | 0.001140s | 0.001147s | 0.001144s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001157s | 0.001163s | 0.001129s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001180s | 0.001182s | 0.001193s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001151s | 0.001146s | 0.001126s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001153s | 0.001179s | 0.001144s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001137s | 0.001158s | 0.001140s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001173s | 0.001169s | 0.001170s | byte equality observed |
| variant_default_construct.test | 10 | 0.001130s | 0.001147s | 0.001136s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001133s | 0.001139s | 0.001140s | byte equality observed |
| variant_destroy.test | 10 | 0.001151s | 0.001140s | 0.001147s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001143s | 0.001154s | 0.001135s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001162s | 0.001164s | 0.001159s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001136s | 0.001123s | 0.001131s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001204s | 0.001218s | 0.001236s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001153s | 0.001156s | 0.001132s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001197s | 0.001200s | 0.001164s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001159s | 0.001136s | 0.001128s | byte equality observed |
| variant_hash.test | 10 | 0.001135s | 0.001167s | 0.001141s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001138s | 0.001141s | 0.001145s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001144s | 0.001172s | 0.001145s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001148s | 0.001159s | 0.001121s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001132s | 0.001134s | 0.001137s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001144s | 0.001137s | 0.001120s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001146s | 0.001147s | 0.001124s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001132s | 0.001145s | 0.001144s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001132s | 0.001127s | 0.001129s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001140s | 0.001144s | 0.001144s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001135s | 0.001130s | 0.001134s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001140s | 0.001135s | 0.001139s | byte equality observed |
| variant_issue_55.test | 10 | 0.001148s | 0.001168s | 0.001156s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001182s | 0.001185s | 0.001169s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001181s | 0.001175s | 0.001164s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001131s | 0.001141s | 0.001149s | byte equality observed |
| variant_many_types.test | 10 | 0.001184s | 0.001162s | 0.001163s | byte equality observed |
| variant_move_assign.test | 10 | 0.001164s | 0.001157s | 0.001147s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001184s | 0.001176s | 0.001190s | byte equality observed |
| variant_move_construct.test | 10 | 0.001152s | 0.001190s | 0.001152s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001152s | 0.001193s | 0.001161s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001170s | 0.001181s | 0.001155s | byte equality observed |
| variant_size.test | 10 | 0.001148s | 0.001149s | 0.001120s | byte equality observed |
| variant_special.test | 10 | 0.001226s | 0.001195s | 0.001208s | byte equality observed |
| variant_subset.test | 10 | 0.001188s | 0.001173s | 0.001151s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001157s | 0.001162s | 0.001139s | byte equality observed |
| variant_swap.test | 10 | 0.001144s | 0.001150s | 0.001140s | byte equality observed |
| variant_trivial.test | 10 | 0.001184s | 0.001198s | 0.001128s | byte equality observed |
| variant_value_assign.test | 10 | 0.001142s | 0.001150s | 0.001128s | byte equality observed |
| variant_value_construct.test | 10 | 0.001134s | 0.001135s | 0.001148s | byte equality observed |
| variant_valueless.test | 10 | 0.001194s | 0.001187s | 0.001184s | byte equality observed |
| variant_visit.test | 10 | 0.001152s | 0.001159s | 0.001150s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001136s | 0.001138s | 0.001138s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001140s | 0.001128s | 0.001136s | byte equality observed |
| variant_visit_r.test | 10 | 0.001175s | 0.001120s | 0.001135s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
