# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.127122 | 0.309274 | 0.378767 | 0.001592 | 0.000708 | 0.001627 |
| variant_size.test | RUN | 0.228152 | 0.741989 | 0.746273 | 0.001664 | 0.001770 | 0.001686 |
| variant_alternative.test | RUN | 0.302173 | 2.430382 | 1.305458 | 0.001730 | 0.001829 | 0.001654 |
| variant_holds_alternative.test | RUN | 0.210652 | 0.555424 | 0.710984 | 0.001540 | 0.001749 | 0.001656 |
| variant_holds_alternative_cx.test | COMPILE | 0.137735 | 0.316788 | 0.401076 | — | — | — |
| variant_get_by_index.test | RUN | 0.344825 | 2.621676 | 1.585327 | 0.001830 | 0.001790 | 0.001802 |
| variant_get_by_index_cx.test | COMPILE | 0.139470 | 0.333169 | 0.421279 | — | — | — |
| variant_get_by_type.test | RUN | 0.360789 | 2.854783 | 1.696798 | 0.001804 | 0.001686 | 0.001538 |
| variant_get_by_type_cx.test | COMPILE | 0.124523 | 0.294709 | 0.359447 | — | — | — |
| variant_default_construct.test | RUN | 0.336089 | 2.084972 | 1.360290 | 0.001620 | 0.001916 | 0.001668 |
| variant_default_construct_cx.test | COMPILE | 0.139596 | 0.296836 | 0.421137 | — | — | — |
| variant_copy_construct.test | RUN | 0.529363 | 3.466660 | 2.530054 | 0.001659 | 0.001590 | 0.001451 |
| variant_copy_construct_cx.test | COMPILE | 0.157295 | 0.352337 | 0.481175 | — | — | — |
| variant_move_construct.test | RUN | 0.478049 | 2.979341 | 2.254271 | 0.001669 | 0.001799 | 0.001669 |
| variant_move_construct_cx.test | COMPILE | 0.123353 | 0.292537 | 0.356816 | — | — | — |
| variant_value_construct.test | RUN | 0.253295 | 0.746789 | 0.932745 | 0.001508 | 0.001698 | 0.001731 |
| variant_value_construct_cx.test | COMPILE | 0.140198 | 0.335066 | 0.441850 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.257687 | 0.753461 | 0.968698 | 0.001484 | 0.001729 | 0.001682 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.142893 | 0.337357 | 0.441265 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.260396 | 0.738766 | 0.916083 | 0.001673 | 0.001703 | 0.001662 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.140316 | 0.335783 | 0.435992 | — | — | — |
| variant_copy_assign.test | RUN | 0.355645 | 2.390545 | 1.508133 | 0.001592 | 0.001544 | 0.001601 |
| variant_copy_assign_cx.test | COMPILE | 0.123150 | 0.285600 | 0.354396 | — | — | — |
| variant_move_assign.test | RUN | 0.353211 | 2.390610 | 1.488472 | 0.001612 | 0.001687 | 0.001530 |
| variant_move_assign_cx.test | COMPILE | 0.122789 | 0.291533 | 0.360489 | — | — | — |
| variant_value_assign.test | RUN | 0.265117 | 0.827737 | 1.032522 | 0.001599 | 0.001856 | 0.001732 |
| variant_value_assign_cx.test | COMPILE | 0.123656 | 0.285242 | 0.352315 | — | — | — |
| variant_emplace_index.test | RUN | 0.297541 | 0.965829 | 1.126463 | 0.001874 | 0.001702 | 0.001673 |
| variant_emplace_index_cx.test | COMPILE | 0.127104 | 0.284168 | 0.348746 | — | — | — |
| variant_emplace_type.test | RUN | 0.273009 | 0.824252 | 0.985333 | 0.001495 | 0.001636 | 0.001521 |
| variant_emplace_type_cx.test | COMPILE | 0.122944 | 0.291056 | 0.360355 | — | — | — |
| variant_swap.test | RUN | 0.283532 | 1.025860 | 1.094560 | 0.001688 | 0.001589 | 0.001446 |
| variant_eq_ne.test | RUN | 0.226056 | 0.609613 | 0.782781 | 0.001426 | 0.001694 | 0.001615 |
| variant_eq_ne_cx.test | COMPILE | 0.123692 | 0.292265 | 0.343840 | — | — | — |
| variant_lt_gt.test | RUN | 0.233337 | 0.701950 | 0.821305 | 0.001608 | 0.001675 | 0.001653 |
| variant_lt_gt_cx.test | COMPILE | 0.124883 | 0.279764 | 0.343193 | — | — | — |
| variant_destroy.test | RUN | 0.243070 | 0.704136 | 0.847353 | 0.001624 | 0.001762 | 0.001674 |
| variant_visit.test | RUN | 1.475018 | 5.263282 | 14.281595 | 0.001656 | 0.001875 | 0.001710 |
| variant_convert_construct.test | RUN | 0.302130 | 0.915501 | 1.173903 | 0.001762 | 0.001787 | 0.001750 |
| variant_subset.test | RUN | 0.308177 | 0.987395 | 1.245958 | 0.001769 | 0.001835 | 0.001598 |
| variant_valueless.test | RUN | 0.225893 | 0.650864 | 0.809995 | 0.001668 | 0.001782 | 0.001599 |
| variant_copy_construct_throw.test | RUN | 0.177525 | 0.471562 | 0.574324 | 0.001733 | 0.001747 | 0.001750 |
| variant_move_construct_throw.test | RUN | 0.176741 | 0.479669 | 0.582791 | 0.001649 | 0.001761 | 0.001860 |
| variant_convert_construct_throw.test | RUN | 0.183010 | 0.505452 | 0.622319 | 0.001621 | 0.001659 | 0.001503 |
| variant_copy_assign_throw.test | RUN | 0.171398 | 0.443333 | 0.590172 | 0.001621 | 0.001820 | 0.001738 |
| variant_move_assign_throw.test | RUN | 0.175985 | 0.452345 | 0.577544 | 0.001612 | 0.001629 | 0.001697 |
| variant_get_by_index_nx.test | RUN | 0.441496 | 2.250720 | 1.530907 | 0.001629 | 0.001466 | 0.001682 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.136690 | 0.320490 | 0.426325 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.444200 | 2.507360 | 1.634987 | 0.001675 | 0.001642 | 0.001792 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.122483 | 0.294154 | 0.348185 | — | — | — |
| variant_subset_nx.test | RUN | 0.318493 | 0.964137 | 1.275388 | 0.001642 | 0.001642 | 0.001668 |
| variant_hash.test | RUN | 0.317327 | 1.129730 | 1.140866 | 0.001730 | 0.001761 | 0.001760 |
| variant_trivial.test | RUN | 1.737884 | 6.015111 | 8.257222 | 0.001678 | 0.001786 | 0.001711 |
| variant_special.test | RUN | 1.635124 | 6.661409 | 8.819041 | 0.001730 | 0.001911 | 0.001728 |
| variant_visit_derived.test | RUN | 0.221596 | 0.585211 | 0.847937 | 0.001814 | 0.001744 | 0.001713 |
| variant_many_types.test | RUN | 1.896540 | 8.256552 | 12.083659 | 0.001609 | 0.001639 | 0.001641 |
| variant_visit_r.test | RUN | 0.830892 | 2.749686 | 4.651452 | 0.001777 | 0.001785 | 0.001684 |
| variant_derived_construct.test | COMPILE | 0.127912 | 0.294029 | 0.355867 | — | — | — |
| variant_visit_by_index.test | RUN | 0.278238 | 0.758791 | 1.105830 | 0.001572 | 0.001589 | 0.001654 |
| variant_ostream_insert.test | RUN | 0.202472 | 0.632395 | 0.752278 | 0.001508 | 0.001807 | 0.001661 |
| is_output_streamable.test | RUN | 0.272750 | 1.305525 | 1.002595 | 0.001611 | 0.001692 | 0.001726 |
| variant_json_value_from.test | RUN | 0.398089 | 0.999469 | 1.275083 | 0.001770 | 0.001732 | 0.001683 |
| variant_json_value_to.test | RUN | 0.496796 | 1.402284 | 1.724935 | 0.001790 | 0.001844 | 0.001771 |
| variant_uses_double_storage.test | COMPILE | 0.133443 | 0.304643 | 0.422830 | — | — | — |
| variant_derived_construct2.test | RUN | 0.181643 | 0.502973 | 0.630922 | 0.001518 | 0.001618 | 0.001417 |
| variant_visit_cx.test | COMPILE | 0.123912 | 0.291549 | 0.344431 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.126781 | 0.289822 | 0.349728 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.124392 | 0.279325 | 0.342231 | — | — | — |
| variant_index_type_126.test | RUN | 1.075576 | 2.685537 | 5.167825 | 0.001722 | 0.001824 | 0.001627 |
| variant_index_type_127.test | RUN | 1.080873 | 2.683410 | 5.221843 | 0.001579 | 0.001780 | 0.001736 |
| variant_index_type_128.test | RUN | 1.107292 | 2.780613 | 5.323352 | 0.001413 | 0.001611 | 0.001688 |
| variant_index_type_129.test | RUN | 1.086170 | 2.734748 | 5.332936 | 0.001715 | 0.001553 | 0.001632 |
| variant_index_type_254.test | RUN | 3.895653 | 10.196515 | 16.529466 | 0.001490 | 0.001714 | 0.001794 |
| variant_index_type_255.test | RUN | 3.762439 | 10.235879 | 16.915547 | 0.001672 | 0.001730 | 0.001650 |
| variant_index_type_256.test | RUN | 3.803281 | 10.458338 | 17.144037 | 0.001631 | 0.001644 | 0.001711 |
| variant_index_type_257.test | RUN | 3.928251 | 10.526708 | 17.258233 | 0.001524 | 0.001545 | 0.001546 |
| variant_default_construct_cx_2.test | COMPILE | 0.122309 | 0.295968 | 0.335867 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.120841 | 0.295834 | 0.353255 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.124078 | 0.281263 | 0.355625 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.121622 | 0.280612 | 0.340540 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.121053 | 0.281680 | 0.339683 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.114744 | 0.274820 | 0.354695 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.093609 | 0.223512 | 0.333663 | — | — | — |
| variant_issue_55.test | RUN | 0.173135 | 0.500953 | 0.519150 | 0.001169 | 0.001230 | 0.001220 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.981×, 0.982× | 1.000× |
| clang | 0.991× | 0.991×, 0.990× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001202s | 0.001214s | 0.001219s | byte equality observed |
| quick.test | 10 | 0.001199s | 0.000520s | 0.001200s | byte equality observed |
| variant_alternative.test | 10 | 0.001219s | 0.001240s | 0.001219s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001217s | 0.001244s | 0.001216s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001253s | 0.001273s | 0.001287s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001226s | 0.001197s | 0.001214s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001255s | 0.001247s | 0.001251s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001223s | 0.001241s | 0.001221s | byte equality observed |
| variant_copy_construct_throw.test | 9 | 0.001246s | 0.001238s | 0.001240s | byte equality observed |
| variant_default_construct.test | 10 | 0.001246s | 0.001201s | 0.001208s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001221s | 0.001218s | 0.001214s | byte equality observed |
| variant_destroy.test | 10 | 0.001219s | 0.001204s | 0.001208s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001244s | 0.001205s | 0.001236s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001215s | 0.001214s | 0.001194s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001210s | 0.001194s | 0.001211s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001292s | 0.001311s | 0.001298s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001238s | 0.001198s | 0.001195s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001304s | 0.001256s | 0.001259s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001241s | 0.001230s | 0.001245s | byte equality observed |
| variant_hash.test | 10 | 0.001231s | 0.001211s | 0.001207s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001209s | 0.001212s | 0.001198s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001228s | 0.001212s | 0.001223s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001229s | 0.001250s | 0.001221s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001250s | 0.001214s | 0.001230s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001226s | 0.001192s | 0.001207s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001229s | 0.001187s | 0.001217s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001211s | 0.001197s | 0.001200s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001232s | 0.001203s | 0.001237s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001255s | 0.001194s | 0.001214s | byte equality observed |
| variant_index_type_256.test | 9 | 0.001207s | 0.001198s | 0.001226s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001221s | 0.001198s | 0.001202s | byte equality observed |
| variant_issue_55.test | 10 | 0.001219s | 0.001204s | 0.001240s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001258s | 0.001260s | 0.001271s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001266s | 0.001275s | 0.001231s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001232s | 0.001196s | 0.001224s | byte equality observed |
| variant_many_types.test | 10 | 0.001263s | 0.001238s | 0.001233s | byte equality observed |
| variant_move_assign.test | 10 | 0.001227s | 0.001225s | 0.001214s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001250s | 0.001244s | 0.001239s | byte equality observed |
| variant_move_construct.test | 10 | 0.001235s | 0.001206s | 0.001235s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001244s | 0.001234s | 0.001261s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001260s | 0.001239s | 0.001264s | byte equality observed |
| variant_size.test | 10 | 0.001209s | 0.001199s | 0.001210s | byte equality observed |
| variant_special.test | 10 | 0.001319s | 0.001282s | 0.001262s | byte equality observed |
| variant_subset.test | 10 | 0.001286s | 0.001224s | 0.001252s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001194s | 0.001223s | 0.001204s | byte equality observed |
| variant_swap.test | 10 | 0.001244s | 0.001225s | 0.001217s | byte equality observed |
| variant_trivial.test | 8 | 0.001262s | 0.001298s | 0.001224s | byte equality observed |
| variant_value_assign.test | 10 | 0.001230s | 0.001217s | 0.001220s | byte equality observed |
| variant_value_construct.test | 10 | 0.001244s | 0.001236s | 0.001232s | byte equality observed |
| variant_valueless.test | 10 | 0.001298s | 0.001301s | 0.001271s | byte equality observed |
| variant_visit.test | 10 | 0.001249s | 0.001234s | 0.001265s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001229s | 0.001218s | 0.001207s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001221s | 0.001210s | 0.001265s | byte equality observed |
| variant_visit_r.test | 10 | 0.001224s | 0.001217s | 0.001209s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
