# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.116430 | 0.264124 | 0.382946 | 0.001896 | 0.000847 | 0.001864 |
| variant_size.test | RUN | 0.209449 | 0.654256 | 0.733017 | 0.002354 | 0.002054 | 0.001940 |
| variant_alternative.test | RUN | 0.263012 | 2.035129 | 1.178356 | 0.001841 | 0.001908 | 0.001552 |
| variant_holds_alternative.test | RUN | 0.189453 | 0.515001 | 0.720547 | 0.001856 | 0.001981 | 0.001767 |
| variant_holds_alternative_cx.test | COMPILE | 0.125005 | 0.287558 | 0.409024 | — | — | — |
| variant_get_by_index.test | RUN | 0.296892 | 2.214239 | 1.431079 | 0.001986 | 0.001930 | 0.001898 |
| variant_get_by_index_cx.test | COMPILE | 0.129848 | 0.302343 | 0.432961 | — | — | — |
| variant_get_by_type.test | RUN | 0.310879 | 2.362640 | 1.529497 | 0.001623 | 0.002242 | 0.001676 |
| variant_get_by_type_cx.test | COMPILE | 0.119321 | 0.268412 | 0.362246 | — | — | — |
| variant_default_construct.test | RUN | 0.273141 | 1.725445 | 1.235497 | 0.001473 | 0.002116 | 0.001791 |
| variant_default_construct_cx.test | COMPILE | 0.121300 | 0.286283 | 0.416174 | — | — | — |
| variant_copy_construct.test | RUN | 0.446908 | 2.915460 | 2.257302 | 0.001693 | 0.001762 | 0.001812 |
| variant_copy_construct_cx.test | COMPILE | 0.134037 | 0.322965 | 0.493336 | — | — | — |
| variant_move_construct.test | RUN | 0.417537 | 2.512963 | 2.041007 | 0.001608 | 0.001438 | 0.001830 |
| variant_move_construct_cx.test | COMPILE | 0.119118 | 0.254222 | 0.341640 | — | — | — |
| variant_value_construct.test | RUN | 0.224631 | 0.633424 | 0.866520 | 0.001890 | 0.002041 | 0.001684 |
| variant_value_construct_cx.test | COMPILE | 0.128941 | 0.305297 | 0.414641 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.236592 | 0.660813 | 0.890576 | 0.001756 | 0.001720 | 0.001797 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.126863 | 0.294002 | 0.415170 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.233882 | 0.631354 | 0.887271 | 0.001841 | 0.001653 | 0.001807 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.130354 | 0.300323 | 0.401896 | — | — | — |
| variant_copy_assign.test | RUN | 0.311877 | 2.008899 | 1.401529 | 0.001563 | 0.001954 | 0.001579 |
| variant_copy_assign_cx.test | COMPILE | 0.118092 | 0.253294 | 0.357866 | — | — | — |
| variant_move_assign.test | RUN | 0.316568 | 1.979780 | 1.337587 | 0.001620 | 0.002058 | 0.001576 |
| variant_move_assign_cx.test | COMPILE | 0.108687 | 0.264368 | 0.360764 | — | — | — |
| variant_value_assign.test | RUN | 0.242174 | 0.737422 | 0.945527 | 0.001608 | 0.001706 | 0.001606 |
| variant_value_assign_cx.test | COMPILE | 0.113349 | 0.257984 | 0.356903 | — | — | — |
| variant_emplace_index.test | RUN | 0.269261 | 0.833620 | 1.021932 | 0.001810 | 0.001780 | 0.001741 |
| variant_emplace_index_cx.test | COMPILE | 0.115215 | 0.244170 | 0.314139 | — | — | — |
| variant_emplace_type.test | RUN | 0.242777 | 0.643685 | 0.965754 | 0.001876 | 0.001778 | 0.001498 |
| variant_emplace_type_cx.test | COMPILE | 0.114334 | 0.245741 | 0.360951 | — | — | — |
| variant_swap.test | RUN | 0.246624 | 0.843602 | 1.023332 | 0.001686 | 0.001668 | 0.001669 |
| variant_eq_ne.test | RUN | 0.207384 | 0.546830 | 0.718781 | 0.001489 | 0.001765 | 0.001842 |
| variant_eq_ne_cx.test | COMPILE | 0.112962 | 0.244360 | 0.354296 | — | — | — |
| variant_lt_gt.test | RUN | 0.220360 | 0.616539 | 0.777167 | 0.001764 | 0.001960 | 0.002480 |
| variant_lt_gt_cx.test | COMPILE | 0.119205 | 0.266075 | 0.355682 | — | — | — |
| variant_destroy.test | RUN | 0.217389 | 0.594573 | 0.810051 | 0.001768 | 0.001800 | 0.001767 |
| variant_visit.test | RUN | 1.314370 | 4.705168 | 12.486429 | 0.001730 | 0.001910 | 0.001796 |
| variant_convert_construct.test | RUN | 0.268933 | 0.774866 | 1.131819 | 0.001893 | 0.001920 | 0.001781 |
| variant_subset.test | RUN | 0.278062 | 0.846737 | 1.169666 | 0.001849 | 0.001802 | 0.001824 |
| variant_valueless.test | RUN | 0.224414 | 0.572664 | 0.800457 | 0.001689 | 0.001888 | 0.001880 |
| variant_copy_construct_throw.test | RUN | 0.162711 | 0.383647 | 0.542114 | 0.002106 | 0.001743 | 0.001864 |
| variant_move_construct_throw.test | RUN | 0.165487 | 0.424331 | 0.580272 | 0.001887 | 0.001694 | 0.001800 |
| variant_convert_construct_throw.test | RUN | 0.175721 | 0.462613 | 0.569802 | 0.001590 | 0.001691 | 0.001912 |
| variant_copy_assign_throw.test | RUN | 0.167944 | 0.378749 | 0.537678 | 0.001892 | 0.001803 | 0.001764 |
| variant_move_assign_throw.test | RUN | 0.162698 | 0.387218 | 0.539499 | 0.001761 | 0.002010 | 0.001884 |
| variant_get_by_index_nx.test | RUN | 0.365537 | 1.854079 | 1.407838 | 0.001808 | 0.001818 | 0.001784 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.124880 | 0.289553 | 0.409388 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.365545 | 2.020172 | 1.511276 | 0.001782 | 0.001739 | 0.001855 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.110998 | 0.252875 | 0.359838 | — | — | — |
| variant_subset_nx.test | RUN | 0.293501 | 0.840998 | 1.171579 | 0.001972 | 0.001684 | 0.001862 |
| variant_hash.test | RUN | 0.285050 | 0.941417 | 1.079150 | 0.001899 | 0.001926 | 0.001888 |
| variant_trivial.test | RUN | 1.621322 | 5.188597 | 7.854079 | 0.001785 | 0.002044 | 0.001668 |
| variant_special.test | RUN | 1.630219 | 5.627962 | 8.580525 | 0.001843 | 0.001950 | 0.001418 |
| variant_visit_derived.test | RUN | 0.207813 | 0.485453 | 0.830521 | 0.001904 | 0.001866 | 0.001720 |
| variant_many_types.test | RUN | 1.692866 | 7.610016 | 11.124391 | 0.001952 | 0.001902 | 0.001770 |
| variant_visit_r.test | RUN | 0.755377 | 2.357349 | 4.166381 | 0.001796 | 0.001791 | 0.001426 |
| variant_derived_construct.test | COMPILE | 0.124993 | 0.242209 | 0.381392 | — | — | — |
| variant_visit_by_index.test | RUN | 0.257451 | 0.637667 | 1.012185 | 0.001770 | 0.001833 | 0.001766 |
| variant_ostream_insert.test | RUN | 0.190704 | 0.500874 | 0.700865 | 0.001642 | 0.002106 | 0.001836 |
| is_output_streamable.test | RUN | 0.227737 | 1.072226 | 0.911610 | 0.001542 | 0.002021 | 0.001698 |
| variant_json_value_from.test | RUN | 0.353624 | 0.948296 | 1.233284 | 0.001843 | 0.001954 | 0.001849 |
| variant_json_value_to.test | RUN | 0.436638 | 1.208238 | 1.579835 | 0.001855 | 0.001968 | 0.001760 |
| variant_uses_double_storage.test | COMPILE | 0.123859 | 0.266606 | 0.398888 | — | — | — |
| variant_derived_construct2.test | RUN | 0.158904 | 0.423386 | 0.604401 | 0.001487 | 0.001918 | 0.001752 |
| variant_visit_cx.test | COMPILE | 0.115980 | 0.260658 | 0.329851 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.112074 | 0.261801 | 0.355434 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.110257 | 0.266082 | 0.295101 | — | — | — |
| variant_index_type_126.test | RUN | 1.011123 | 2.547867 | 5.101647 | 0.001771 | 0.002042 | 0.001529 |
| variant_index_type_127.test | RUN | 1.020913 | 2.574794 | 5.153982 | 0.001431 | 0.001916 | 0.001379 |
| variant_index_type_128.test | RUN | 1.038030 | 2.609760 | 5.189316 | 0.001700 | 0.001798 | 0.001549 |
| variant_index_type_129.test | RUN | 1.024283 | 2.627471 | 5.113473 | 0.001859 | 0.001744 | 0.001716 |
| variant_index_type_254.test | RUN | 3.734892 | 9.345541 | 15.603917 | 0.001742 | 0.001998 | 0.001753 |
| variant_index_type_255.test | RUN | 3.754932 | 9.407736 | 15.786756 | 0.001706 | 0.001932 | 0.001858 |
| variant_index_type_256.test | RUN | 3.702056 | 9.506576 | 15.913453 | 0.001545 | 0.001936 | 0.001634 |
| variant_index_type_257.test | RUN | 3.839860 | 9.634624 | 15.934915 | 0.001696 | 0.001426 | 0.001750 |
| variant_default_construct_cx_2.test | COMPILE | 0.114486 | 0.276355 | 0.321317 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.112759 | 0.252177 | 0.342153 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.109719 | 0.245569 | 0.292679 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.116381 | 0.252314 | 0.345211 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.116962 | 0.251829 | 0.346324 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.111689 | 0.257069 | 0.335674 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.104869 | 0.250381 | 0.342863 | — | — | — |
| variant_issue_55.test | RUN | 0.175111 | 0.439444 | 0.543762 | 0.001380 | 0.001413 | 0.001240 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.986×, 0.985× | 1.008× |
| clang | 0.996× | 0.991×, 1.000× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001170s | 0.001150s | 0.001132s | byte equality observed |
| quick.test | 10 | 0.001135s | 0.000496s | 0.001137s | byte equality observed |
| variant_alternative.test | 10 | 0.001137s | 0.001171s | 0.001153s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001149s | 0.001143s | 0.001164s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001175s | 0.001160s | 0.001201s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001150s | 0.001151s | 0.001171s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001177s | 0.001165s | 0.001130s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001149s | 0.001182s | 0.001164s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001172s | 0.001181s | 0.001187s | byte equality observed |
| variant_default_construct.test | 10 | 0.001154s | 0.001148s | 0.001153s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001137s | 0.001140s | 0.001138s | byte equality observed |
| variant_destroy.test | 10 | 0.001148s | 0.001147s | 0.001152s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001169s | 0.001152s | 0.001149s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001158s | 0.001137s | 0.001152s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001143s | 0.001070s | 0.001159s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001208s | 0.001209s | 0.001194s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001148s | 0.001194s | 0.001140s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001198s | 0.001210s | 0.001215s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001154s | 0.001156s | 0.001170s | byte equality observed |
| variant_hash.test | 10 | 0.001136s | 0.001130s | 0.001141s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001166s | 0.001083s | 0.001164s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001155s | 0.001153s | 0.001141s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001156s | 0.001156s | 0.001141s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001130s | 0.001138s | 0.001125s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001161s | 0.001110s | 0.001149s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001159s | 0.001145s | 0.001165s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001145s | 0.001143s | 0.001144s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001161s | 0.001143s | 0.001146s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001155s | 0.001125s | 0.001121s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001162s | 0.001141s | 0.001165s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001157s | 0.001133s | 0.001155s | byte equality observed |
| variant_issue_55.test | 10 | 0.001150s | 0.001166s | 0.001125s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001180s | 0.001170s | 0.001167s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001202s | 0.001198s | 0.001190s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001139s | 0.001132s | 0.001145s | byte equality observed |
| variant_many_types.test | 10 | 0.001195s | 0.001172s | 0.001180s | byte equality observed |
| variant_move_assign.test | 10 | 0.001163s | 0.001185s | 0.001157s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001166s | 0.001176s | 0.001165s | byte equality observed |
| variant_move_construct.test | 10 | 0.001155s | 0.001151s | 0.001153s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001173s | 0.001175s | 0.001125s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001178s | 0.001162s | 0.001143s | byte equality observed |
| variant_size.test | 10 | 0.001157s | 0.001144s | 0.001118s | byte equality observed |
| variant_special.test | 10 | 0.001235s | 0.001204s | 0.001187s | byte equality observed |
| variant_subset.test | 10 | 0.001206s | 0.001173s | 0.001167s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001155s | 0.001132s | 0.001141s | byte equality observed |
| variant_swap.test | 10 | 0.001146s | 0.001160s | 0.001134s | byte equality observed |
| variant_trivial.test | 10 | 0.001206s | 0.001177s | 0.001154s | byte equality observed |
| variant_value_assign.test | 10 | 0.001156s | 0.001147s | 0.001180s | byte equality observed |
| variant_value_construct.test | 10 | 0.001132s | 0.001165s | 0.001138s | byte equality observed |
| variant_valueless.test | 10 | 0.001199s | 0.001178s | 0.001197s | byte equality observed |
| variant_visit.test | 10 | 0.001157s | 0.001147s | 0.001159s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001128s | 0.001138s | 0.001155s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001160s | 0.001130s | 0.001172s | byte equality observed |
| variant_visit_r.test | 10 | 0.001132s | 0.001119s | 0.001150s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
