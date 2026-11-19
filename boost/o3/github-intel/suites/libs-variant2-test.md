# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.131837 | 0.285338 | 0.364096 | 0.001622 | 0.000803 | 0.001612 |
| variant_size.test | RUN | 0.216656 | 0.718786 | 0.703155 | 0.001764 | 0.001749 | 0.001663 |
| variant_alternative.test | RUN | 0.298520 | 2.375706 | 1.248958 | 0.001669 | 0.001752 | 0.001551 |
| variant_holds_alternative.test | RUN | 0.207655 | 0.546271 | 0.722609 | 0.001483 | 0.001810 | 0.001685 |
| variant_holds_alternative_cx.test | COMPILE | 0.130201 | 0.308683 | 0.392248 | — | — | — |
| variant_get_by_index.test | RUN | 0.344925 | 2.617923 | 1.551074 | 0.001746 | 0.001930 | 0.001779 |
| variant_get_by_index_cx.test | COMPILE | 0.135484 | 0.326887 | 0.408733 | — | — | — |
| variant_get_by_type.test | RUN | 0.354455 | 2.758891 | 1.663589 | 0.001808 | 0.001800 | 0.001738 |
| variant_get_by_type_cx.test | COMPILE | 0.123441 | 0.282502 | 0.345841 | — | — | — |
| variant_default_construct.test | RUN | 0.324336 | 2.049298 | 1.330522 | 0.001512 | 0.001754 | 0.001654 |
| variant_default_construct_cx.test | COMPILE | 0.132044 | 0.315709 | 0.408027 | — | — | — |
| variant_copy_construct.test | RUN | 0.516491 | 3.428083 | 2.410836 | 0.001655 | 0.001760 | 0.001650 |
| variant_copy_construct_cx.test | COMPILE | 0.150611 | 0.353828 | 0.484668 | — | — | — |
| variant_move_construct.test | RUN | 0.482355 | 2.909728 | 2.222725 | 0.001548 | 0.001676 | 0.001732 |
| variant_move_construct_cx.test | COMPILE | 0.119903 | 0.283240 | 0.359367 | — | — | — |
| variant_value_construct.test | RUN | 0.254012 | 0.729813 | 0.924385 | 0.001668 | 0.001822 | 0.001739 |
| variant_value_construct_cx.test | COMPILE | 0.137567 | 0.328647 | 0.429384 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.258534 | 0.735983 | 0.921130 | 0.001591 | 0.001711 | 0.001636 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.135866 | 0.330619 | 0.408503 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.252814 | 0.730676 | 0.915597 | 0.001767 | 0.001733 | 0.001662 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.137084 | 0.325896 | 0.422150 | — | — | — |
| variant_copy_assign.test | RUN | 0.347364 | 2.355695 | 1.470143 | 0.001516 | 0.001678 | 0.001715 |
| variant_copy_assign_cx.test | COMPILE | 0.123343 | 0.280957 | 0.338886 | — | — | — |
| variant_move_assign.test | RUN | 0.347237 | 2.348153 | 1.455051 | 0.001636 | 0.001776 | 0.001640 |
| variant_move_assign_cx.test | COMPILE | 0.120521 | 0.283016 | 0.346812 | — | — | — |
| variant_value_assign.test | RUN | 0.264446 | 0.812916 | 1.010592 | 0.001620 | 0.002508 | 0.001531 |
| variant_value_assign_cx.test | COMPILE | 0.124810 | 0.278736 | 0.354275 | — | — | — |
| variant_emplace_index.test | RUN | 0.293270 | 0.940805 | 1.106606 | 0.001631 | 0.001790 | 0.001651 |
| variant_emplace_index_cx.test | COMPILE | 0.121177 | 0.287299 | 0.353699 | — | — | — |
| variant_emplace_type.test | RUN | 0.266291 | 0.803876 | 0.985519 | 0.001744 | 0.001694 | 0.001699 |
| variant_emplace_type_cx.test | COMPILE | 0.120794 | 0.283052 | 0.349915 | — | — | — |
| variant_swap.test | RUN | 0.279141 | 1.005825 | 1.062005 | 0.001818 | 0.001684 | 0.001677 |
| variant_eq_ne.test | RUN | 0.223383 | 0.598828 | 0.746485 | 0.001569 | 0.001770 | 0.001615 |
| variant_eq_ne_cx.test | COMPILE | 0.123053 | 0.276493 | 0.355337 | — | — | — |
| variant_lt_gt.test | RUN | 0.228747 | 0.695903 | 0.794067 | 0.001741 | 0.001758 | 0.001650 |
| variant_lt_gt_cx.test | COMPILE | 0.119998 | 0.284009 | 0.330866 | — | — | — |
| variant_destroy.test | RUN | 0.235778 | 0.682410 | 0.814131 | 0.001618 | 0.001790 | 0.001710 |
| variant_visit.test | RUN | 1.479485 | 5.182915 | 14.051173 | 0.001545 | 0.001738 | 0.001782 |
| variant_convert_construct.test | RUN | 0.304063 | 0.926115 | 1.160960 | 0.001667 | 0.001806 | 0.001714 |
| variant_subset.test | RUN | 0.307561 | 0.967891 | 1.222209 | 0.001577 | 0.001752 | 0.001612 |
| variant_valueless.test | RUN | 0.218281 | 0.629355 | 0.822852 | 0.001696 | 0.001724 | 0.001759 |
| variant_copy_construct_throw.test | RUN | 0.172555 | 0.472760 | 0.568840 | 0.001642 | 0.001845 | 0.001668 |
| variant_move_construct_throw.test | RUN | 0.196116 | 0.467897 | 0.570709 | 0.001616 | 0.001554 | 0.001693 |
| variant_convert_construct_throw.test | RUN | 0.192052 | 0.514173 | 0.599612 | 0.001592 | 0.001736 | 0.001531 |
| variant_copy_assign_throw.test | RUN | 0.176472 | 0.437721 | 0.565747 | 0.001510 | 0.001765 | 0.001727 |
| variant_move_assign_throw.test | RUN | 0.171783 | 0.443999 | 0.581595 | 0.001713 | 0.001830 | 0.001709 |
| variant_get_by_index_nx.test | RUN | 0.437557 | 2.209075 | 1.502018 | 0.001725 | 0.001749 | 0.001678 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.134928 | 0.331141 | 0.414522 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.428152 | 2.473765 | 1.606072 | 0.001574 | 0.001704 | 0.001667 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.123024 | 0.288948 | 0.349589 | — | — | — |
| variant_subset_nx.test | RUN | 0.317931 | 0.932991 | 1.252399 | 0.001476 | 0.001692 | 0.001741 |
| variant_hash.test | RUN | 0.305943 | 1.092514 | 1.109863 | 0.001769 | 0.001805 | 0.001640 |
| variant_trivial.test | RUN | 1.644139 | 5.941136 | 8.086896 | 0.001703 | 0.001846 | 0.001626 |
| variant_special.test | RUN | 1.611444 | 6.471517 | 8.616326 | 0.001842 | 0.001859 | 0.001720 |
| variant_visit_derived.test | RUN | 0.207530 | 0.566055 | 0.824600 | 0.001735 | 0.001780 | 0.001632 |
| variant_many_types.test | RUN | 1.883455 | 8.318010 | 11.821206 | 0.001600 | 0.001762 | 0.001667 |
| variant_visit_r.test | RUN | 0.806762 | 2.676143 | 4.519108 | 0.001603 | 0.001636 | 0.001661 |
| variant_derived_construct.test | COMPILE | 0.127631 | 0.269528 | 0.348701 | — | — | — |
| variant_visit_by_index.test | RUN | 0.275262 | 0.719695 | 1.077350 | 0.001583 | 0.001750 | 0.001676 |
| variant_ostream_insert.test | RUN | 0.206561 | 0.626753 | 0.721417 | 0.001485 | 0.001755 | 0.001714 |
| is_output_streamable.test | RUN | 0.261543 | 1.255957 | 0.976778 | 0.001525 | 0.001796 | 0.001546 |
| variant_json_value_from.test | RUN | 0.395532 | 1.021323 | 1.244390 | 0.001762 | 0.001885 | 0.001714 |
| variant_json_value_to.test | RUN | 0.476403 | 1.375731 | 1.692213 | 0.001875 | 0.001837 | 0.001570 |
| variant_uses_double_storage.test | COMPILE | 0.132456 | 0.296475 | 0.412171 | — | — | — |
| variant_derived_construct2.test | RUN | 0.182487 | 0.489049 | 0.615921 | 0.001492 | 0.001686 | 0.001599 |
| variant_visit_cx.test | COMPILE | 0.120555 | 0.286706 | 0.337921 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.125036 | 0.276538 | 0.316985 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.123025 | 0.277765 | 0.331050 | — | — | — |
| variant_index_type_126.test | RUN | 1.113028 | 2.651448 | 5.122185 | 0.001533 | 0.001825 | 0.001458 |
| variant_index_type_127.test | RUN | 1.140604 | 2.670579 | 5.112047 | 0.001485 | 0.001743 | 0.001756 |
| variant_index_type_128.test | RUN | 1.066096 | 2.706182 | 5.211208 | 0.001790 | 0.001774 | 0.001517 |
| variant_index_type_129.test | RUN | 1.108282 | 2.701278 | 5.240243 | 0.001628 | 0.001726 | 0.001580 |
| variant_index_type_254.test | RUN | 3.712315 | 10.198564 | 16.287740 | 0.001653 | 0.001574 | 0.001698 |
| variant_index_type_255.test | RUN | 3.730907 | 10.037438 | 16.617681 | 0.001828 | 0.001793 | 0.001276 |
| variant_index_type_256.test | RUN | 3.770978 | 10.356907 | 16.650192 | 0.001587 | 0.001746 | 0.001626 |
| variant_index_type_257.test | RUN | 3.816677 | 10.442953 | 16.811751 | 0.001565 | 0.001752 | 0.001502 |
| variant_default_construct_cx_2.test | COMPILE | 0.118602 | 0.293866 | 0.350571 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.121782 | 0.284097 | 0.336070 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.120679 | 0.296624 | 0.344381 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.119732 | 0.274312 | 0.346567 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.128018 | 0.278614 | 0.347113 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.121663 | 0.279490 | 0.350203 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.118119 | 0.257031 | 0.344192 | — | — | — |
| variant_issue_55.test | RUN | 0.180761 | 0.477902 | 0.603696 | 0.001216 | 0.001275 | 0.001209 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.980×, 0.995× | 1.000× |
| clang | 0.991× | 0.991×, 0.990× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001202s | 0.001187s | 0.001179s | byte equality observed |
| quick.test | 10 | 0.001134s | 0.000521s | 0.001153s | byte equality observed |
| variant_alternative.test | 10 | 0.001175s | 0.001229s | 0.001164s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001180s | 0.001199s | 0.001181s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001223s | 0.001217s | 0.001223s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001202s | 0.001191s | 0.001204s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001218s | 0.001210s | 0.001216s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001191s | 0.001191s | 0.001201s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001215s | 0.001243s | 0.001205s | byte equality observed |
| variant_default_construct.test | 10 | 0.001188s | 0.001191s | 0.001162s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001182s | 0.001168s | 0.001182s | byte equality observed |
| variant_destroy.test | 10 | 0.001207s | 0.001194s | 0.001180s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001226s | 0.001237s | 0.001174s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001212s | 0.001188s | 0.001182s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001176s | 0.001171s | 0.001195s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001257s | 0.001299s | 0.001256s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001200s | 0.001209s | 0.001199s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001265s | 0.001280s | 0.001256s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001185s | 0.001208s | 0.001189s | byte equality observed |
| variant_hash.test | 10 | 0.001201s | 0.001190s | 0.001174s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001177s | 0.001194s | 0.001171s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001190s | 0.001195s | 0.001169s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001189s | 0.001201s | 0.001179s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001191s | 0.001201s | 0.001176s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001197s | 0.001189s | 0.001190s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001189s | 0.001193s | 0.001169s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001190s | 0.001187s | 0.001173s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001197s | 0.001199s | 0.001154s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001184s | 0.001187s | 0.001163s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001182s | 0.001158s | 0.001183s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001186s | 0.001175s | 0.001170s | byte equality observed |
| variant_issue_55.test | 10 | 0.001193s | 0.001200s | 0.001212s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001236s | 0.001251s | 0.001194s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001243s | 0.001240s | 0.001196s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001183s | 0.001178s | 0.001179s | byte equality observed |
| variant_many_types.test | 10 | 0.001239s | 0.001177s | 0.001221s | byte equality observed |
| variant_move_assign.test | 10 | 0.001202s | 0.001191s | 0.001184s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001229s | 0.001204s | 0.001211s | byte equality observed |
| variant_move_construct.test | 10 | 0.001196s | 0.001195s | 0.001180s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001219s | 0.001231s | 0.001213s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001219s | 0.001240s | 0.001220s | byte equality observed |
| variant_size.test | 10 | 0.001180s | 0.001193s | 0.001175s | byte equality observed |
| variant_special.test | 10 | 0.001278s | 0.001248s | 0.001235s | byte equality observed |
| variant_subset.test | 10 | 0.001232s | 0.001213s | 0.001221s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001197s | 0.001176s | 0.001187s | byte equality observed |
| variant_swap.test | 10 | 0.001201s | 0.001184s | 0.001180s | byte equality observed |
| variant_trivial.test | 10 | 0.001260s | 0.001233s | 0.001193s | byte equality observed |
| variant_value_assign.test | 10 | 0.001197s | 0.001217s | 0.001219s | byte equality observed |
| variant_value_construct.test | 10 | 0.001177s | 0.001218s | 0.001169s | byte equality observed |
| variant_valueless.test | 10 | 0.001247s | 0.001232s | 0.001242s | byte equality observed |
| variant_visit.test | 10 | 0.001197s | 0.001207s | 0.001213s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001187s | 0.001204s | 0.001161s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001194s | 0.001173s | 0.001153s | byte equality observed |
| variant_visit_r.test | 10 | 0.001200s | 0.001173s | 0.001229s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
