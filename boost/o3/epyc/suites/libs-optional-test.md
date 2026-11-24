# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.239156 | 1.451419 | 0.939667 | 0.001832 | 0.001632 | 0.001848 |
| optional_test_assign.test | RUN | 0.131664 | 0.317322 | 0.447543 | 0.001667 | 0.001873 | 0.001466 |
| optional_test_swap.test | RUN | 0.138595 | 0.389051 | 0.486371 | 0.001422 | 0.001764 | 0.001339 |
| optional_test_constexpr.test | COMPILE | 0.092049 | 0.216920 | 0.286648 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.136624 | 0.510550 | 0.477347 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.090454 | 0.217853 | 0.286029 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.146716 | 0.408135 | 0.550585 | 0.001495 | 0.001852 | 0.001771 |
| optional_test_constructors.test | RUN | 0.301557 | 1.486271 | 1.317992 | 0.001318 | 0.001564 | 0.001646 |
| optional_test_convert_from_T.test | RUN | 0.135227 | 0.331639 | 0.451530 | 0.001620 | 0.001766 | 0.001623 |
| optional_test_convert_assign.test | RUN | 0.138984 | 0.326610 | 0.468485 | 0.001683 | 0.001742 | 0.001698 |
| optional_test_empty_braces.test | RUN | 0.132944 | 0.326649 | 0.427503 | 0.001792 | 0.001720 | 0.001810 |
| optional_test_make_optional.test | RUN | 0.179379 | 0.497267 | 0.678378 | 0.001780 | 0.001800 | 0.001737 |
| optional_test_flat_map.test | RUN | 0.193482 | 0.586876 | 0.751743 | 0.001516 | 0.001648 | 0.001565 |
| optional_test_hash.test | RUN | 0.160317 | 0.455974 | 0.564119 | 0.001656 | 0.001932 | 0.001671 |
| optional_test_map.test | RUN | 0.198265 | 0.552088 | 0.782874 | 0.001680 | 0.001571 | 0.001587 |
| optional_test_tie.test | RUN | 0.142110 | 0.354990 | 0.450590 | 0.001725 | 0.001802 | 0.001732 |
| optional_test_ranges_find.test | RUN | 0.127855 | 0.322865 | 0.439215 | 0.001574 | 0.001609 | 0.001502 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.162814 | 0.905600 | 0.569013 | 0.001714 | 0.001568 | 0.001827 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.137790 | 0.389355 | 0.455902 | 0.001550 | 0.001687 | 0.001669 |
| optional_test_ref_assign_const_int.test | RUN | 0.139687 | 0.401385 | 0.461310 | 0.001740 | 0.001530 | 0.001728 |
| optional_test_ref_converting_ctor.test | RUN | 0.150485 | 0.548993 | 0.510430 | 0.001581 | 0.001683 | 0.001641 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.136270 | 0.378155 | 0.465856 | 0.001481 | 0.001372 | 0.001652 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.133767 | 0.351579 | 0.402463 | 0.001766 | 0.001823 | 0.001738 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.132435 | 0.335173 | 0.448980 | 0.001742 | 0.001608 | 0.001768 |
| optional_test_ref_portable_minimum.test | RUN | 0.528581 | 1.797627 | 1.549710 | 0.001684 | 0.001419 | 0.001648 |
| optional_test_ref_move.test | RUN | 0.140510 | 0.358135 | 0.453181 | 0.001788 | 0.001810 | 0.001407 |
| optional_test_ref_to_val.test | RUN | 0.164478 | 0.720951 | 0.631672 | 0.001809 | 0.001660 | 0.001741 |
| optional_test_inplace_factory.test | RUN | 0.173360 | 0.657219 | 0.567309 | 0.001692 | 0.001604 | 0.001702 |
| optional_test_io.test | RUN | 0.164269 | 0.718967 | 0.610122 | 0.001567 | 0.001702 | 0.001791 |
| optional_test_move.test | RUN | 0.153683 | 0.497031 | 0.523854 | 0.001597 | 0.001838 | 0.001661 |
| optional_test_noexcept_move.test | RUN | 0.094680 | 0.213775 | 0.258757 | 0.000655 | 0.000738 | 0.001765 |
| optional_test_cmp_none.test | RUN | 0.134005 | 0.344394 | 0.426445 | 0.002811 | 0.001846 | 0.001706 |
| optional_test_value_access.test | RUN | 0.158898 | 0.577053 | 0.588576 | 0.001716 | 0.001493 | 0.001496 |
| optional_test_emplace.test | RUN | 0.157257 | 0.582538 | 0.597006 | 0.001713 | 0.001602 | 0.001576 |
| optional_test_minimum_requirements.test | RUN | 0.149123 | 0.440669 | 0.500603 | 0.001554 | 0.001844 | 0.001678 |
| optional_test_msvc_bug_workaround.test | RUN | 0.132942 | 0.315690 | 0.422348 | 0.001770 | 0.001642 | 0.001733 |
| optional_test_member_T.test | RUN | 0.131448 | 0.313877 | 0.426650 | 0.001702 | 0.001660 | 0.001777 |
| optional_test_tc_base.test | RUN | 0.155836 | 0.320187 | 0.456433 | 0.001619 | 0.001426 | 0.001528 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.112364 | 0.228202 | 0.272344 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.093487 | 0.223903 | 0.273042 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.087545 | 0.200023 | 0.231058 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.121243 | 0.277860 | 0.403431 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.085603 | 0.199783 | 0.269446 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.087487 | 0.200860 | 0.264103 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.088739 | 0.201446 | 0.274305 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.087195 | 0.198962 | 0.267844 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.085357 | 0.200525 | 0.264663 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.087354 | 0.196145 | 0.264459 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.084708 | 0.195321 | 0.264650 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.141593 | 0.315068 | 0.451049 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.145980 | 0.318888 | 0.444101 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.084748 | 0.191491 | 0.264635 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.089372 | 0.207044 | 0.267486 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.086429 | 0.195443 | 0.246164 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.088180 | 0.197305 | 0.248831 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.087175 | 0.194539 | 0.263389 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.085676 | 0.203608 | 0.247318 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.088045 | 0.196589 | 0.255444 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.087332 | 0.199773 | 0.254671 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.085605 | 0.198239 | 0.256242 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.085293 | 0.208506 | 0.253974 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.119772 | 0.266037 | 0.382227 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.093768 | 0.221018 | 0.314273 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.088817 | 0.209193 | 0.261130 | — | — | — |
| optional_test_static_properties.test | RUN | 0.205088 | 0.460868 | 0.658597 | 0.001579 | 0.001840 | 0.001763 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.092620 | 0.216230 | 0.290538 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.094284 | 0.229582 | 0.286613 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.089173 | 0.215772 | 0.276903 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.106785 | 0.268094 | 0.368598 | 0.001578 | 0.001295 | 0.001452 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.106781 | 0.268876 | 0.338665 | 0.001640 | 0.001739 | 0.001725 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.107301 | 0.270652 | 0.373401 | 0.001248 | 0.001461 | 0.001452 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.108715 | 0.273542 | 0.343463 | 0.001804 | 0.001838 | 0.001382 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.090040 | 0.193319 | 0.286566 | 0.001260 | 0.001316 | 0.001189 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.050622 | 0.181713 | 0.270019 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.973×† | 0.948×, 0.998× | 1.009× |
| clang | 1.053×† | 1.019×, 1.087× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001071s | 0.001079s | 0.001095s | byte equality observed |
| optional_test_assign.test | 10 | 0.000971s | 0.000959s | 0.001020s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000979s | 0.000985s | 0.001046s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001026s | 0.000974s | 0.001059s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001025s | 0.000997s | 0.001047s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000993s | 0.000983s | 0.001015s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001000s | 0.000994s | 0.001060s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001060s | 0.001025s | 0.001090s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001003s | 0.001006s | 0.001020s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001005s | 0.000996s | 0.001014s | byte equality observed |
| optional_test_hash.test | 10 | 0.001000s | 0.001006s | 0.001004s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001010s | 0.001066s | 0.000980s | byte equality observed |
| optional_test_io.test | 10 | 0.001036s | 0.001050s | 0.001053s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001005s | 0.001007s | 0.001009s | byte equality observed |
| optional_test_map.test | 10 | 0.000999s | 0.001000s | 0.001020s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000996s | 0.001026s | 0.000990s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001036s | 0.001033s | 0.001044s | byte equality observed |
| optional_test_move.test | 10 | 0.000987s | 0.001086s | 0.000995s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001002s | 0.001019s | 0.001001s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000467s | 0.000466s | 0.000985s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001001s | 0.000998s | 0.001006s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000984s | 0.000985s | 0.001004s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001005s | 0.001043s | 0.000996s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001010s | 0.001026s | 0.001031s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001027s | 0.001002s | 0.001023s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001037s | 0.000979s | 0.001011s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001002s | 0.000990s | 0.001008s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001007s | 0.000983s | 0.001021s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001001s | 0.001005s | 0.001000s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001048s | 0.001009s | 0.001060s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000994s | 0.001014s | 0.001018s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001010s | 0.000998s | 0.000988s | byte equality observed |
| optional_test_swap.test | 10 | 0.001002s | 0.001026s | 0.000974s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001000s | 0.000987s | 0.000984s | byte equality observed |
| optional_test_tie.test | 10 | 0.001008s | 0.001028s | 0.001031s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001039s | 0.001036s | 0.001070s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000988s | 0.000968s | 0.001002s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001011s | 0.000999s | 0.001000s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001000s | 0.001001s | 0.001007s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
