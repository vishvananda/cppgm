# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.238623 | 1.477767 | 0.942368 | 0.001697 | 0.001756 | 0.001889 |
| optional_test_assign.test | RUN | 0.128439 | 0.314375 | 0.453595 | 0.001684 | 0.001859 | 0.001499 |
| optional_test_swap.test | RUN | 0.138474 | 0.394815 | 0.490800 | 0.001432 | 0.001749 | 0.001441 |
| optional_test_constexpr.test | COMPILE | 0.090479 | 0.216404 | 0.284947 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.138391 | 0.506903 | 0.481354 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.094672 | 0.212474 | 0.283525 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.146709 | 0.401884 | 0.553351 | 0.001539 | 0.001785 | 0.001594 |
| optional_test_constructors.test | RUN | 0.298157 | 1.476926 | 1.297835 | 0.001700 | 0.001569 | 0.001726 |
| optional_test_convert_from_T.test | RUN | 0.133760 | 0.325630 | 0.472971 | 0.001668 | 0.001812 | 0.001538 |
| optional_test_convert_assign.test | RUN | 0.138177 | 0.314960 | 0.442549 | 0.001557 | 0.001734 | 0.001750 |
| optional_test_empty_braces.test | RUN | 0.133051 | 0.318079 | 0.467487 | 0.001777 | 0.001818 | 0.001690 |
| optional_test_make_optional.test | RUN | 0.182079 | 0.489715 | 0.696813 | 0.001825 | 0.001767 | 0.001745 |
| optional_test_flat_map.test | RUN | 0.196126 | 0.577566 | 0.799497 | 0.001643 | 0.001678 | 0.001862 |
| optional_test_hash.test | RUN | 0.167182 | 0.474285 | 0.531028 | 0.001453 | 0.001764 | 0.001675 |
| optional_test_map.test | RUN | 0.196971 | 0.553545 | 0.759130 | 0.001720 | 0.001592 | 0.001474 |
| optional_test_tie.test | RUN | 0.143850 | 0.370804 | 0.450642 | 0.001596 | 0.001581 | 0.001465 |
| optional_test_ranges_find.test | RUN | 0.125800 | 0.311936 | 0.430832 | 0.001511 | 0.001499 | 0.001760 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.161359 | 0.920273 | 0.585284 | 0.001225 | 0.001715 | 0.001620 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.136368 | 0.394031 | 0.428154 | 0.001724 | 0.001640 | 0.001858 |
| optional_test_ref_assign_const_int.test | RUN | 0.134475 | 0.403893 | 0.488208 | 0.001596 | 0.001575 | 0.001718 |
| optional_test_ref_converting_ctor.test | RUN | 0.150307 | 0.559032 | 0.527444 | 0.001565 | 0.001866 | 0.001738 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.136795 | 0.371397 | 0.462190 | 0.001416 | 0.001507 | 0.001720 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.131272 | 0.337800 | 0.438246 | 0.001619 | 0.001346 | 0.001717 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.136839 | 0.349879 | 0.426573 | 0.001540 | 0.001684 | 0.001716 |
| optional_test_ref_portable_minimum.test | RUN | 0.520811 | 1.784842 | 1.545799 | 0.001721 | 0.001650 | 0.001896 |
| optional_test_ref_move.test | RUN | 0.139894 | 0.347707 | 0.456535 | 0.001559 | 0.001767 | 0.001766 |
| optional_test_ref_to_val.test | RUN | 0.168256 | 0.709152 | 0.633158 | 0.001685 | 0.001703 | 0.001632 |
| optional_test_inplace_factory.test | RUN | 0.167122 | 0.650634 | 0.593082 | 0.001683 | 0.001574 | 0.001790 |
| optional_test_io.test | RUN | 0.161104 | 0.704774 | 0.558231 | 0.001572 | 0.001642 | 0.001631 |
| optional_test_move.test | RUN | 0.154654 | 0.483384 | 0.543444 | 0.001691 | 0.001582 | 0.001611 |
| optional_test_noexcept_move.test | RUN | 0.094677 | 0.218536 | 0.306090 | 0.000577 | 0.000738 | 0.002830 |
| optional_test_cmp_none.test | RUN | 0.132954 | 0.336726 | 0.455376 | 0.001718 | 0.001760 | 0.001754 |
| optional_test_value_access.test | RUN | 0.156001 | 0.566771 | 0.587681 | 0.001648 | 0.001736 | 0.001536 |
| optional_test_emplace.test | RUN | 0.156287 | 0.560917 | 0.582172 | 0.001333 | 0.001747 | 0.001764 |
| optional_test_minimum_requirements.test | RUN | 0.143417 | 0.458784 | 0.529598 | 0.001590 | 0.001658 | 0.001668 |
| optional_test_msvc_bug_workaround.test | RUN | 0.130220 | 0.313604 | 0.423150 | 0.001677 | 0.001658 | 0.001702 |
| optional_test_member_T.test | RUN | 0.126688 | 0.307156 | 0.433733 | 0.001614 | 0.001530 | 0.001476 |
| optional_test_tc_base.test | RUN | 0.129989 | 0.312830 | 0.447385 | 0.001478 | 0.001593 | 0.001500 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.095837 | 0.224217 | 0.262837 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.093526 | 0.220800 | 0.278141 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.085184 | 0.195504 | 0.263804 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.119440 | 0.267316 | 0.403574 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.086366 | 0.198616 | 0.259735 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.086599 | 0.204483 | 0.265930 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.086892 | 0.198339 | 0.281561 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.086489 | 0.197481 | 0.256538 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.086953 | 0.195618 | 0.260957 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.089606 | 0.200603 | 0.267893 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.085371 | 0.195215 | 0.254690 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.149346 | 0.312699 | 0.453110 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.140438 | 0.312748 | 0.450579 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.088070 | 0.200395 | 0.268143 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.086709 | 0.204859 | 0.268562 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.085873 | 0.197092 | 0.267101 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.087023 | 0.195602 | 0.268570 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.087106 | 0.199258 | 0.260990 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.085405 | 0.202608 | 0.261606 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.088076 | 0.196319 | 0.264810 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.086365 | 0.193487 | 0.261972 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.086028 | 0.201868 | 0.260959 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.083803 | 0.202333 | 0.262750 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.117838 | 0.262757 | 0.374664 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.093481 | 0.210698 | 0.319527 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.088375 | 0.204686 | 0.267996 | — | — | — |
| optional_test_static_properties.test | RUN | 0.203384 | 0.457093 | 0.669664 | 0.001419 | 0.001728 | 0.001726 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.092227 | 0.218611 | 0.286132 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.094089 | 0.221331 | 0.301852 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.088682 | 0.212862 | 0.282943 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.107928 | 0.268241 | 0.378746 | 0.001622 | 0.001674 | 0.001522 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.105152 | 0.273348 | 0.378866 | 0.001471 | 0.001569 | 0.001467 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.104073 | 0.261947 | 0.342282 | 0.001532 | 0.001343 | 0.001473 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.107327 | 0.275661 | 0.355039 | 0.001413 | 0.001842 | 0.001275 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.081421 | 0.171477 | 0.280128 | 0.001202 | 0.001246 | 0.001158 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.050959 | 0.180754 | 0.273944 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.031×† | 1.070×, 0.992× | 0.955× |
| clang | 1.014× | 1.007×, 1.021× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001040s | 0.001077s | 0.001051s | byte equality observed |
| optional_test_assign.test | 10 | 0.000974s | 0.000990s | 0.000987s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000997s | 0.001002s | 0.000992s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000990s | 0.001019s | 0.001008s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000988s | 0.001022s | 0.000994s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000972s | 0.000969s | 0.000977s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000986s | 0.000998s | 0.001027s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001026s | 0.001024s | 0.001019s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001035s | 0.000994s | 0.001001s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001011s | 0.000988s | 0.000994s | byte equality observed |
| optional_test_hash.test | 10 | 0.001018s | 0.001064s | 0.000993s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001023s | 0.000992s | 0.001017s | byte equality observed |
| optional_test_io.test | 10 | 0.001010s | 0.001030s | 0.001026s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000984s | 0.000985s | 0.001000s | byte equality observed |
| optional_test_map.test | 10 | 0.000968s | 0.001013s | 0.000985s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000984s | 0.000980s | 0.000992s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001015s | 0.001063s | 0.001014s | byte equality observed |
| optional_test_move.test | 10 | 0.000975s | 0.000967s | 0.000959s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001000s | 0.001011s | 0.000978s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000450s | 0.000467s | 0.000952s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000998s | 0.000991s | 0.000979s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001003s | 0.000994s | 0.000966s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000990s | 0.001048s | 0.000987s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000990s | 0.000993s | 0.000987s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000985s | 0.001007s | 0.000999s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000982s | 0.001045s | 0.001015s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000983s | 0.000995s | 0.000980s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001012s | 0.001020s | 0.001014s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001018s | 0.000996s | 0.001003s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001016s | 0.001037s | 0.001022s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000987s | 0.000999s | 0.001000s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000970s | 0.001011s | 0.000974s | byte equality observed |
| optional_test_swap.test | 10 | 0.000992s | 0.001006s | 0.000988s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000993s | 0.000998s | 0.000975s | byte equality observed |
| optional_test_tie.test | 10 | 0.000982s | 0.000972s | 0.001006s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001010s | 0.001033s | 0.001006s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000943s | 0.000974s | 0.000980s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000976s | 0.000982s | 0.000990s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000974s | 0.000994s | 0.001006s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
