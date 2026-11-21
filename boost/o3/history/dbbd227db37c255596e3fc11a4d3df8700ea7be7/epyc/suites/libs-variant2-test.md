# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.112566 | 0.268758 | 0.388257 | 0.001764 | 0.000758 | 0.001770 |
| variant_size.test | RUN | 0.208384 | 0.616330 | 0.710772 | 0.001824 | 0.001823 | 0.001754 |
| variant_alternative.test | RUN | 0.259347 | 1.929529 | 1.184191 | 0.001824 | 0.001883 | 0.001669 |
| variant_holds_alternative.test | RUN | 0.194761 | 0.461919 | 0.702417 | 0.001497 | 0.001820 | 0.001682 |
| variant_holds_alternative_cx.test | COMPILE | 0.120693 | 0.283338 | 0.401175 | — | — | — |
| variant_get_by_index.test | RUN | 0.299980 | 2.085632 | 1.436154 | 0.001857 | 0.001895 | 0.001832 |
| variant_get_by_index_cx.test | COMPILE | 0.122148 | 0.288511 | 0.417096 | — | — | — |
| variant_get_by_type.test | RUN | 0.300924 | 2.206804 | 1.546962 | 0.001887 | 0.001687 | 0.001652 |
| variant_get_by_type_cx.test | COMPILE | 0.116117 | 0.244767 | 0.359628 | — | — | — |
| variant_default_construct.test | RUN | 0.281211 | 1.641935 | 1.232440 | 0.001516 | 0.001699 | 0.001696 |
| variant_default_construct_cx.test | COMPILE | 0.130704 | 0.262542 | 0.417065 | — | — | — |
| variant_copy_construct.test | RUN | 0.441758 | 2.745745 | 2.205226 | 0.001700 | 0.001603 | 0.001778 |
| variant_copy_construct_cx.test | COMPILE | 0.144006 | 0.310865 | 0.481384 | — | — | — |
| variant_move_construct.test | RUN | 0.404426 | 2.412285 | 2.064500 | 0.001429 | 0.001670 | 0.001747 |
| variant_move_construct_cx.test | COMPILE | 0.109925 | 0.256939 | 0.357603 | — | — | — |
| variant_value_construct.test | RUN | 0.223988 | 0.610368 | 0.890947 | 0.001643 | 0.001736 | 0.001780 |
| variant_value_construct_cx.test | COMPILE | 0.131597 | 0.280667 | 0.444437 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.226841 | 0.614276 | 0.855973 | 0.001688 | 0.001569 | 0.001818 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.125663 | 0.279770 | 0.399546 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.228436 | 0.626471 | 0.890863 | 0.001606 | 0.001788 | 0.001674 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.123789 | 0.284377 | 0.441358 | — | — | — |
| variant_copy_assign.test | RUN | 0.297893 | 1.905405 | 1.346337 | 0.001558 | 0.001836 | 0.001739 |
| variant_copy_assign_cx.test | COMPILE | 0.112601 | 0.252580 | 0.359885 | — | — | — |
| variant_move_assign.test | RUN | 0.305941 | 1.886861 | 1.342034 | 0.001561 | 0.001835 | 0.001693 |
| variant_move_assign_cx.test | COMPILE | 0.114197 | 0.244684 | 0.353661 | — | — | — |
| variant_value_assign.test | RUN | 0.234540 | 0.679405 | 0.963397 | 0.001676 | 0.001696 | 0.001587 |
| variant_value_assign_cx.test | COMPILE | 0.111536 | 0.236509 | 0.336394 | — | — | — |
| variant_emplace_index.test | RUN | 0.260870 | 0.806072 | 1.021915 | 0.001810 | 0.001718 | 0.001706 |
| variant_emplace_index_cx.test | COMPILE | 0.113441 | 0.256427 | 0.306230 | — | — | — |
| variant_emplace_type.test | RUN | 0.235705 | 0.675798 | 0.972545 | 0.001841 | 0.001845 | 0.001824 |
| variant_emplace_type_cx.test | COMPILE | 0.114142 | 0.243854 | 0.357762 | — | — | — |
| variant_swap.test | RUN | 0.243358 | 0.846312 | 0.996037 | 0.001706 | 0.001687 | 0.001476 |
| variant_eq_ne.test | RUN | 0.205990 | 0.515375 | 0.715648 | 0.001372 | 0.001740 | 0.001686 |
| variant_eq_ne_cx.test | COMPILE | 0.107122 | 0.246756 | 0.334552 | — | — | — |
| variant_lt_gt.test | RUN | 0.201885 | 0.580500 | 0.781986 | 0.001649 | 0.001800 | 0.001584 |
| variant_lt_gt_cx.test | COMPILE | 0.110183 | 0.251415 | 0.339003 | — | — | — |
| variant_destroy.test | RUN | 0.207232 | 0.577360 | 0.782941 | 0.001722 | 0.001881 | 0.001693 |
| variant_visit.test | RUN | 1.309698 | 4.501879 | 12.410649 | 0.001734 | 0.001778 | 0.001760 |
| variant_convert_construct.test | RUN | 0.267213 | 0.776685 | 1.098625 | 0.001864 | 0.001816 | 0.001716 |
| variant_subset.test | RUN | 0.265673 | 0.822858 | 1.145222 | 0.001628 | 0.001913 | 0.001822 |
| variant_valueless.test | RUN | 0.208168 | 0.556902 | 0.777802 | 0.001762 | 0.001855 | 0.001940 |
| variant_copy_construct_throw.test | RUN | 0.155407 | 0.381111 | 0.555024 | 0.001650 | 0.001890 | 0.001834 |
| variant_move_construct_throw.test | RUN | 0.154435 | 0.392750 | 0.582448 | 0.001766 | 0.001764 | 0.001739 |
| variant_convert_construct_throw.test | RUN | 0.169455 | 0.404063 | 0.559808 | 0.001786 | 0.001895 | 0.001494 |
| variant_copy_assign_throw.test | RUN | 0.151356 | 0.378437 | 0.557721 | 0.001688 | 0.001896 | 0.001788 |
| variant_move_assign_throw.test | RUN | 0.160989 | 0.395770 | 0.539217 | 0.001710 | 0.001874 | 0.001805 |
| variant_get_by_index_nx.test | RUN | 0.366559 | 1.792735 | 1.334518 | 0.001459 | 0.001645 | 0.001813 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.127265 | 0.293483 | 0.405469 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.360542 | 1.990389 | 1.485109 | 0.001621 | 0.001732 | 0.001698 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.112093 | 0.246790 | 0.346061 | — | — | — |
| variant_subset_nx.test | RUN | 0.279988 | 0.806970 | 1.131974 | 0.001612 | 0.001812 | 0.001750 |
| variant_hash.test | RUN | 0.292629 | 0.924366 | 1.064464 | 0.002034 | 0.001857 | 0.001564 |
| variant_trivial.test | RUN | 1.584302 | 5.149341 | 7.983708 | 0.001601 | 0.001828 | 0.001710 |
| variant_special.test | RUN | 1.515414 | 5.575579 | 8.187151 | 0.001590 | 0.001962 | 0.001598 |
| variant_visit_derived.test | RUN | 0.192097 | 0.489699 | 0.766368 | 0.001846 | 0.001860 | 0.001718 |
| variant_many_types.test | RUN | 1.648342 | 7.167691 | 11.116587 | 0.001633 | 0.001920 | 0.001560 |
| variant_visit_r.test | RUN | 0.717339 | 2.206399 | 4.218107 | 0.001814 | 0.001653 | 0.001498 |
| variant_derived_construct.test | COMPILE | 0.114096 | 0.265319 | 0.373637 | — | — | — |
| variant_visit_by_index.test | RUN | 0.259712 | 0.658706 | 1.049458 | 0.001458 | 0.001818 | 0.001804 |
| variant_ostream_insert.test | RUN | 0.174960 | 0.507992 | 0.661711 | 0.001572 | 0.001531 | 0.001942 |
| is_output_streamable.test | RUN | 0.221615 | 1.066392 | 0.939951 | 0.001596 | 0.001554 | 0.001712 |
| variant_json_value_from.test | RUN | 0.340803 | 0.825168 | 1.286503 | 0.001760 | 0.001854 | 0.001758 |
| variant_json_value_to.test | RUN | 0.416858 | 1.154126 | 1.574761 | 0.001800 | 0.001682 | 0.001747 |
| variant_uses_double_storage.test | COMPILE | 0.119005 | 0.255844 | 0.414294 | — | — | — |
| variant_derived_construct2.test | RUN | 0.162037 | 0.427284 | 0.595511 | 0.001614 | 0.001772 | 0.001704 |
| variant_visit_cx.test | COMPILE | 0.115250 | 0.255415 | 0.357793 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.109933 | 0.252519 | 0.324641 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.107581 | 0.241951 | 0.341633 | — | — | — |
| variant_index_type_126.test | RUN | 0.995098 | 2.444445 | 5.057483 | 0.001625 | 0.001867 | 0.001775 |
| variant_index_type_127.test | RUN | 1.008575 | 2.429854 | 5.207713 | 0.001596 | 0.001911 | 0.001598 |
| variant_index_type_128.test | RUN | 1.019011 | 2.495149 | 5.213503 | 0.001522 | 0.001897 | 0.001490 |
| variant_index_type_129.test | RUN | 1.017607 | 2.466168 | 5.185304 | 0.001776 | 0.001852 | 0.001738 |
| variant_index_type_254.test | RUN | 3.677417 | 8.951400 | 15.517903 | 0.001779 | 0.001875 | 0.001838 |
| variant_index_type_255.test | RUN | 3.627167 | 9.066845 | 15.903423 | 0.001336 | 0.001895 | 0.001619 |
| variant_index_type_256.test | RUN | 3.607104 | 9.245523 | 15.853494 | 0.001712 | 0.001558 | 0.001407 |
| variant_index_type_257.test | RUN | 3.643221 | 9.135550 | 15.879488 | 0.001825 | 0.001775 | 0.001639 |
| variant_default_construct_cx_2.test | COMPILE | 0.109901 | 0.243695 | 0.375660 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.110928 | 0.237770 | 0.308082 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.108636 | 0.237616 | 0.330857 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.111900 | 0.235557 | 0.342222 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.111828 | 0.239192 | 0.337390 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.108880 | 0.235099 | 0.305555 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.109477 | 0.234113 | 0.315221 | — | — | — |
| variant_issue_55.test | RUN | 0.147519 | 0.420703 | 0.547580 | 0.001358 | 0.001290 | 0.001197 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.983×, 0.975× | 1.001× |
| clang | 0.995× | 0.996×, 0.994× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001171s | 0.001168s | 0.001166s | byte equality observed |
| quick.test | 10 | 0.001138s | 0.000502s | 0.001130s | byte equality observed |
| variant_alternative.test | 10 | 0.001151s | 0.001176s | 0.001186s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001181s | 0.001173s | 0.001188s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001214s | 0.001182s | 0.001221s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001168s | 0.001140s | 0.001175s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001193s | 0.001174s | 0.001217s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001168s | 0.001142s | 0.001187s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001194s | 0.001170s | 0.001225s | byte equality observed |
| variant_default_construct.test | 10 | 0.001184s | 0.001169s | 0.001177s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001167s | 0.001134s | 0.001172s | byte equality observed |
| variant_destroy.test | 10 | 0.001174s | 0.001167s | 0.001173s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001173s | 0.001152s | 0.001181s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001191s | 0.001144s | 0.001163s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001150s | 0.001155s | 0.001183s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001247s | 0.001253s | 0.001247s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001187s | 0.001154s | 0.001171s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001238s | 0.001224s | 0.001232s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001180s | 0.001164s | 0.001190s | byte equality observed |
| variant_hash.test | 10 | 0.001168s | 0.001161s | 0.001180s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001178s | 0.001140s | 0.001200s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001191s | 0.001132s | 0.001179s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001147s | 0.001151s | 0.001168s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001168s | 0.001169s | 0.001196s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001155s | 0.001153s | 0.001174s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001171s | 0.001124s | 0.001153s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001174s | 0.001125s | 0.001173s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001167s | 0.001137s | 0.001199s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001171s | 0.001170s | 0.001164s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001176s | 0.001113s | 0.001185s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001162s | 0.001111s | 0.001178s | byte equality observed |
| variant_issue_55.test | 10 | 0.001168s | 0.001162s | 0.001180s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001190s | 0.001169s | 0.001189s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001211s | 0.001193s | 0.001208s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001168s | 0.001146s | 0.001170s | byte equality observed |
| variant_many_types.test | 10 | 0.001204s | 0.001182s | 0.001227s | byte equality observed |
| variant_move_assign.test | 10 | 0.001162s | 0.001178s | 0.001194s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001196s | 0.001189s | 0.001203s | byte equality observed |
| variant_move_construct.test | 10 | 0.001163s | 0.001165s | 0.001170s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001200s | 0.001188s | 0.001209s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001170s | 0.001178s | 0.001219s | byte equality observed |
| variant_size.test | 10 | 0.001165s | 0.001148s | 0.001167s | byte equality observed |
| variant_special.test | 10 | 0.001237s | 0.001181s | 0.001210s | byte equality observed |
| variant_subset.test | 10 | 0.001213s | 0.001182s | 0.001195s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001165s | 0.001127s | 0.001172s | byte equality observed |
| variant_swap.test | 10 | 0.001186s | 0.001167s | 0.001180s | byte equality observed |
| variant_trivial.test | 10 | 0.001205s | 0.001181s | 0.001211s | byte equality observed |
| variant_value_assign.test | 10 | 0.001187s | 0.001164s | 0.001191s | byte equality observed |
| variant_value_construct.test | 10 | 0.001162s | 0.001122s | 0.001181s | byte equality observed |
| variant_valueless.test | 10 | 0.001216s | 0.001184s | 0.001205s | byte equality observed |
| variant_visit.test | 10 | 0.001192s | 0.001147s | 0.001164s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001171s | 0.001153s | 0.001159s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001170s | 0.001143s | 0.001148s | byte equality observed |
| variant_visit_r.test | 10 | 0.001150s | 0.001122s | 0.001168s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
