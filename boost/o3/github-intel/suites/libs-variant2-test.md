# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.135865 | 0.316147 | 0.437281 | 0.001629 | 0.000712 | 0.001531 |
| variant_size.test | RUN | 0.233817 | 0.777737 | 0.829021 | 0.001708 | 0.001735 | 0.001658 |
| variant_alternative.test | RUN | 0.311154 | 2.461511 | 1.402092 | 0.001655 | 0.001743 | 0.001638 |
| variant_holds_alternative.test | RUN | 0.217500 | 0.581868 | 0.823552 | 0.001513 | 0.001620 | 0.001605 |
| variant_holds_alternative_cx.test | COMPILE | 0.144024 | 0.339536 | 0.463989 | — | — | — |
| variant_get_by_index.test | RUN | 0.355450 | 2.734488 | 1.720960 | 0.001696 | 0.001756 | 0.001868 |
| variant_get_by_index_cx.test | COMPILE | 0.147155 | 0.360954 | 0.489813 | — | — | — |
| variant_get_by_type.test | RUN | 0.379593 | 2.870868 | 1.846792 | 0.001685 | 0.001539 | 0.001580 |
| variant_get_by_type_cx.test | COMPILE | 0.123297 | 0.310941 | 0.394753 | — | — | — |
| variant_default_construct.test | RUN | 0.338951 | 2.184445 | 1.546551 | 0.001640 | 0.001609 | 0.001530 |
| variant_default_construct_cx.test | COMPILE | 0.143283 | 0.343920 | 0.454397 | — | — | — |
| variant_copy_construct.test | RUN | 0.532151 | 3.578210 | 2.657892 | 0.001640 | 0.001765 | 0.001586 |
| variant_copy_construct_cx.test | COMPILE | 0.165228 | 0.393018 | 0.566133 | — | — | — |
| variant_move_construct.test | RUN | 0.497798 | 3.107758 | 2.498379 | 0.001469 | 0.001672 | 0.001662 |
| variant_move_construct_cx.test | COMPILE | 0.133103 | 0.316418 | 0.402063 | — | — | — |
| variant_value_construct.test | RUN | 0.267690 | 0.785787 | 1.052118 | 0.001614 | 0.001638 | 0.001590 |
| variant_value_construct_cx.test | COMPILE | 0.148816 | 0.359786 | 0.482721 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.277166 | 0.799425 | 1.061307 | 0.001614 | 0.001636 | 0.001361 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.145052 | 0.360173 | 0.494390 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.272073 | 0.794026 | 1.050606 | 0.001554 | 0.001556 | 0.001357 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.148746 | 0.352356 | 0.488726 | — | — | — |
| variant_copy_assign.test | RUN | 0.365168 | 2.490356 | 1.625195 | 0.001671 | 0.001677 | 0.001549 |
| variant_copy_assign_cx.test | COMPILE | 0.130637 | 0.311905 | 0.401750 | — | — | — |
| variant_move_assign.test | RUN | 0.362129 | 2.500613 | 1.609112 | 0.001624 | 0.001453 | 0.001410 |
| variant_move_assign_cx.test | COMPILE | 0.129158 | 0.311411 | 0.402628 | — | — | — |
| variant_value_assign.test | RUN | 0.280878 | 0.884130 | 1.143512 | 0.001635 | 0.001711 | 0.001415 |
| variant_value_assign_cx.test | COMPILE | 0.131740 | 0.297546 | 0.406784 | — | — | — |
| variant_emplace_index.test | RUN | 0.312804 | 1.030259 | 1.274724 | 0.001650 | 0.001610 | 0.001632 |
| variant_emplace_index_cx.test | COMPILE | 0.131002 | 0.313209 | 0.404551 | — | — | — |
| variant_emplace_type.test | RUN | 0.287122 | 0.888497 | 1.117705 | 0.001676 | 0.001454 | 0.001589 |
| variant_emplace_type_cx.test | COMPILE | 0.132849 | 0.302519 | 0.402856 | — | — | — |
| variant_swap.test | RUN | 0.293076 | 1.096993 | 1.216273 | 0.001722 | 0.001678 | 0.001572 |
| variant_eq_ne.test | RUN | 0.236343 | 0.657770 | 0.865909 | 0.001439 | 0.001520 | 0.001540 |
| variant_eq_ne_cx.test | COMPILE | 0.131653 | 0.302291 | 0.418549 | — | — | — |
| variant_lt_gt.test | RUN | 0.246034 | 0.760183 | 0.906792 | 0.001696 | 0.001641 | 0.001577 |
| variant_lt_gt_cx.test | COMPILE | 0.132249 | 0.302069 | 0.404712 | — | — | — |
| variant_destroy.test | RUN | 0.251064 | 0.750455 | 0.932831 | 0.001681 | 0.001678 | 0.001613 |
| variant_visit.test | RUN | 1.606063 | 5.661708 | 15.311057 | 0.001560 | 0.001720 | 0.001593 |
| variant_convert_construct.test | RUN | 0.317523 | 0.981665 | 1.327265 | 0.001678 | 0.001749 | 0.001686 |
| variant_subset.test | RUN | 0.321192 | 1.052458 | 1.342647 | 0.001666 | 0.001651 | 0.001657 |
| variant_valueless.test | RUN | 0.237847 | 0.697431 | 0.939874 | 0.001610 | 0.001620 | 0.001658 |
| variant_copy_construct_throw.test | RUN | 0.186958 | 0.499721 | 0.646918 | 0.001670 | 0.001700 | 0.001650 |
| variant_move_construct_throw.test | RUN | 0.187723 | 0.510216 | 0.646551 | 0.001483 | 0.001711 | 0.001584 |
| variant_convert_construct_throw.test | RUN | 0.196461 | 0.521424 | 0.689698 | 0.001584 | 0.001577 | 0.001597 |
| variant_copy_assign_throw.test | RUN | 0.183637 | 0.471128 | 0.644780 | 0.001583 | 0.001716 | 0.001672 |
| variant_move_assign_throw.test | RUN | 0.184181 | 0.484581 | 0.647864 | 0.002666 | 0.001710 | 0.001710 |
| variant_get_by_index_nx.test | RUN | 0.458819 | 2.351449 | 1.637426 | 0.001677 | 0.001485 | 0.001481 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.149068 | 0.362607 | 0.477603 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.434460 | 2.622871 | 1.814132 | 0.001660 | 0.001432 | 0.001688 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.130006 | 0.320267 | 0.411971 | — | — | — |
| variant_subset_nx.test | RUN | 0.336571 | 1.005970 | 1.403563 | 0.001490 | 0.001623 | 0.001326 |
| variant_hash.test | RUN | 0.319907 | 1.176380 | 1.270548 | 0.001601 | 0.001684 | 0.001515 |
| variant_trivial.test | RUN | 1.879855 | 6.204553 | 9.531687 | 0.001512 | 0.001718 | 0.001662 |
| variant_special.test | RUN | 1.821333 | 6.981522 | 9.893821 | 0.001734 | 0.001699 | 0.001752 |
| variant_visit_derived.test | RUN | 0.228695 | 0.618223 | 0.937871 | 0.001648 | 0.001752 | 0.001668 |
| variant_many_types.test | RUN | 2.010592 | 8.793240 | 13.365713 | 0.001698 | 0.001398 | 0.001700 |
| variant_visit_r.test | RUN | 0.858727 | 2.852858 | 5.088764 | 0.001687 | 0.001704 | 0.001471 |
| variant_derived_construct.test | COMPILE | 0.134284 | 0.323694 | 0.431620 | — | — | — |
| variant_visit_by_index.test | RUN | 0.292535 | 0.819218 | 1.222444 | 0.001480 | 0.001683 | 0.001667 |
| variant_ostream_insert.test | RUN | 0.213747 | 0.680672 | 0.821625 | 0.001748 | 0.001649 | 0.001678 |
| is_output_streamable.test | RUN | 0.266382 | 1.354860 | 1.114905 | 0.001638 | 0.001655 | 0.001674 |
| variant_json_value_from.test | RUN | 0.419476 | 1.064816 | 1.444376 | 0.001669 | 0.001716 | 0.001623 |
| variant_json_value_to.test | RUN | 0.509753 | 1.503195 | 1.918671 | 0.001645 | 0.001610 | 0.001683 |
| variant_uses_double_storage.test | COMPILE | 0.143487 | 0.326440 | 0.477653 | — | — | — |
| variant_derived_construct2.test | RUN | 0.191340 | 0.524183 | 0.700671 | 0.001413 | 0.001632 | 0.001581 |
| variant_visit_cx.test | COMPILE | 0.130192 | 0.313510 | 0.401719 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.132452 | 0.306607 | 0.406624 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.129603 | 0.307962 | 0.386141 | — | — | — |
| variant_index_type_126.test | RUN | 1.190677 | 2.996123 | 6.121159 | 0.001571 | 0.001617 | 0.001685 |
| variant_index_type_127.test | RUN | 1.203199 | 3.040498 | 6.177564 | 0.001624 | 0.001718 | 0.001678 |
| variant_index_type_128.test | RUN | 1.190470 | 3.084363 | 6.228949 | 0.001598 | 0.001467 | 0.001679 |
| variant_index_type_129.test | RUN | 1.182086 | 3.064496 | 6.160297 | 0.001634 | 0.001665 | 0.001446 |
| variant_index_type_254.test | RUN | 4.199882 | 11.199930 | 19.123707 | 0.001569 | 0.001676 | 0.001646 |
| variant_index_type_255.test | RUN | 4.109289 | 11.195411 | 19.461266 | 0.001425 | 0.001502 | 0.001416 |
| variant_index_type_256.test | RUN | 4.183930 | 11.317458 | 19.410398 | 0.001580 | 0.001539 | 0.001719 |
| variant_index_type_257.test | RUN | 4.174913 | 11.589778 | 19.661842 | 0.001604 | 0.001526 | 0.001674 |
| variant_default_construct_cx_2.test | COMPILE | 0.114882 | 0.302075 | 0.429359 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.129583 | 0.308362 | 0.369248 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.130444 | 0.310420 | 0.393608 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.128628 | 0.307771 | 0.406721 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.126349 | 0.302338 | 0.391428 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.111193 | 0.306449 | 0.399738 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.109267 | 0.256799 | 0.355080 | — | — | — |
| variant_issue_55.test | RUN | 0.182727 | 0.496345 | 0.675358 | 0.001341 | 0.001076 | 0.001127 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.982×, 0.984× | 1.007× |
| clang | 0.990× | 0.994×, 0.986× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001172s | 0.001169s | 0.001183s | byte equality observed |
| quick.test | 10 | 0.001140s | 0.000492s | 0.001165s | byte equality observed |
| variant_alternative.test | 10 | 0.001175s | 0.001177s | 0.001140s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001160s | 0.001158s | 0.001163s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001195s | 0.001175s | 0.001201s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001187s | 0.001189s | 0.001167s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001200s | 0.001181s | 0.001206s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001180s | 0.001173s | 0.001159s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001188s | 0.001154s | 0.001211s | byte equality observed |
| variant_default_construct.test | 10 | 0.001191s | 0.001192s | 0.001164s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001162s | 0.001154s | 0.001142s | byte equality observed |
| variant_destroy.test | 10 | 0.001171s | 0.001175s | 0.001167s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001183s | 0.001192s | 0.001164s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001182s | 0.001186s | 0.001181s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001178s | 0.001148s | 0.001139s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001267s | 0.001274s | 0.001245s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001178s | 0.001197s | 0.001185s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001243s | 0.001266s | 0.001222s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001163s | 0.001172s | 0.001177s | byte equality observed |
| variant_hash.test | 10 | 0.001163s | 0.001178s | 0.001154s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001183s | 0.001163s | 0.001175s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001194s | 0.001157s | 0.001151s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001182s | 0.001177s | 0.001160s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001189s | 0.001151s | 0.001165s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001177s | 0.001157s | 0.001176s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001193s | 0.001150s | 0.001138s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001173s | 0.001168s | 0.001184s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001169s | 0.001167s | 0.001161s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001166s | 0.001153s | 0.001148s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001172s | 0.001141s | 0.001148s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001197s | 0.001177s | 0.001154s | byte equality observed |
| variant_issue_55.test | 10 | 0.001180s | 0.001171s | 0.001195s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001221s | 0.001167s | 0.001196s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001201s | 0.001215s | 0.001190s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001156s | 0.001168s | 0.001143s | byte equality observed |
| variant_many_types.test | 10 | 0.001223s | 0.001199s | 0.001186s | byte equality observed |
| variant_move_assign.test | 10 | 0.001165s | 0.001175s | 0.001152s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001197s | 0.001208s | 0.001186s | byte equality observed |
| variant_move_construct.test | 10 | 0.001172s | 0.001182s | 0.001149s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001206s | 0.001212s | 0.001187s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001203s | 0.001178s | 0.001171s | byte equality observed |
| variant_size.test | 10 | 0.001139s | 0.001163s | 0.001151s | byte equality observed |
| variant_special.test | 10 | 0.001235s | 0.001216s | 0.001197s | byte equality observed |
| variant_subset.test | 10 | 0.001202s | 0.001195s | 0.001185s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001171s | 0.001189s | 0.001155s | byte equality observed |
| variant_swap.test | 10 | 0.001178s | 0.001157s | 0.001170s | byte equality observed |
| variant_trivial.test | 10 | 0.001197s | 0.001196s | 0.001179s | byte equality observed |
| variant_value_assign.test | 10 | 0.001175s | 0.001173s | 0.001149s | byte equality observed |
| variant_value_construct.test | 10 | 0.001172s | 0.001159s | 0.001179s | byte equality observed |
| variant_valueless.test | 10 | 0.001225s | 0.001247s | 0.001234s | byte equality observed |
| variant_visit.test | 10 | 0.001178s | 0.001186s | 0.001168s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001178s | 0.001144s | 0.001154s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001170s | 0.001155s | 0.001143s | byte equality observed |
| variant_visit_r.test | 10 | 0.001182s | 0.001162s | 0.001166s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
