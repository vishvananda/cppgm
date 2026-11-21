# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.235024 | 1.470057 | 0.936395 | 0.001702 | 0.001886 | 0.001867 |
| optional_test_assign.test | RUN | 0.127502 | 0.317768 | 0.447411 | 0.001749 | 0.001943 | 0.001536 |
| optional_test_swap.test | RUN | 0.136603 | 0.389443 | 0.483871 | 0.001432 | 0.001880 | 0.001373 |
| optional_test_constexpr.test | COMPILE | 0.091859 | 0.213814 | 0.288570 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.136211 | 0.515963 | 0.473505 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.091434 | 0.216246 | 0.280642 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.146363 | 0.408910 | 0.546188 | 0.001670 | 0.001996 | 0.001696 |
| optional_test_constructors.test | RUN | 0.295160 | 1.476750 | 1.310784 | 0.001546 | 0.001668 | 0.001710 |
| optional_test_convert_from_T.test | RUN | 0.133697 | 0.327114 | 0.456859 | 0.001221 | 0.001837 | 0.001690 |
| optional_test_convert_assign.test | RUN | 0.137517 | 0.321746 | 0.455821 | 0.001576 | 0.001860 | 0.001712 |
| optional_test_empty_braces.test | RUN | 0.132461 | 0.323368 | 0.416869 | 0.001468 | 0.001783 | 0.001711 |
| optional_test_make_optional.test | RUN | 0.184164 | 0.503259 | 0.699482 | 0.001656 | 0.001601 | 0.001698 |
| optional_test_flat_map.test | RUN | 0.192428 | 0.577878 | 0.719656 | 0.001606 | 0.001543 | 0.001404 |
| optional_test_hash.test | RUN | 0.165736 | 0.459625 | 0.561243 | 0.001535 | 0.001618 | 0.001620 |
| optional_test_map.test | RUN | 0.199110 | 0.546894 | 0.785029 | 0.001632 | 0.001612 | 0.001414 |
| optional_test_tie.test | RUN | 0.143596 | 0.357934 | 0.449087 | 0.001636 | 0.001357 | 0.001703 |
| optional_test_ranges_find.test | RUN | 0.125275 | 0.312623 | 0.436264 | 0.001719 | 0.001670 | 0.001383 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.164285 | 0.911342 | 0.594345 | 0.001583 | 0.001574 | 0.001694 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.133251 | 0.389581 | 0.444353 | 0.001731 | 0.001733 | 0.001764 |
| optional_test_ref_assign_const_int.test | RUN | 0.137522 | 0.398517 | 0.488391 | 0.001604 | 0.001582 | 0.001620 |
| optional_test_ref_converting_ctor.test | RUN | 0.152110 | 0.549777 | 0.536248 | 0.001422 | 0.001784 | 0.001596 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.136802 | 0.369284 | 0.448584 | 0.001512 | 0.001496 | 0.001720 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.128267 | 0.341174 | 0.434067 | 0.001716 | 0.001613 | 0.001611 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.131029 | 0.329184 | 0.443721 | 0.001547 | 0.001244 | 0.001698 |
| optional_test_ref_portable_minimum.test | RUN | 0.519186 | 1.798897 | 1.539923 | 0.001725 | 0.001802 | 0.001500 |
| optional_test_ref_move.test | RUN | 0.134380 | 0.355595 | 0.442656 | 0.001680 | 0.001804 | 0.001669 |
| optional_test_ref_to_val.test | RUN | 0.164636 | 0.714098 | 0.628524 | 0.001796 | 0.001750 | 0.001757 |
| optional_test_inplace_factory.test | RUN | 0.168427 | 0.652415 | 0.572560 | 0.001662 | 0.001786 | 0.001607 |
| optional_test_io.test | RUN | 0.158629 | 0.715741 | 0.583392 | 0.001446 | 0.001680 | 0.001601 |
| optional_test_move.test | RUN | 0.152331 | 0.485348 | 0.512755 | 0.001568 | 0.001791 | 0.001647 |
| optional_test_noexcept_move.test | RUN | 0.093767 | 0.220847 | 0.263689 | 0.000615 | 0.000644 | 0.001561 |
| optional_test_cmp_none.test | RUN | 0.132333 | 0.339469 | 0.456942 | 0.001566 | 0.001836 | 0.001706 |
| optional_test_value_access.test | RUN | 0.150823 | 0.575498 | 0.582137 | 0.001669 | 0.001646 | 0.001789 |
| optional_test_emplace.test | RUN | 0.156977 | 0.564476 | 0.584944 | 0.001692 | 0.001618 | 0.001616 |
| optional_test_minimum_requirements.test | RUN | 0.140511 | 0.455772 | 0.522529 | 0.001080 | 0.001543 | 0.001756 |
| optional_test_msvc_bug_workaround.test | RUN | 0.130390 | 0.320718 | 0.432680 | 0.001693 | 0.001812 | 0.001670 |
| optional_test_member_T.test | RUN | 0.123424 | 0.316333 | 0.423709 | 0.001271 | 0.001844 | 0.001396 |
| optional_test_tc_base.test | RUN | 0.132629 | 0.319330 | 0.437307 | 0.001482 | 0.001615 | 0.001624 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.091697 | 0.223299 | 0.307262 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.093217 | 0.221528 | 0.261889 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.085743 | 0.197833 | 0.236084 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.117858 | 0.276121 | 0.399717 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.086609 | 0.204662 | 0.268306 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.086321 | 0.199015 | 0.253444 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.088529 | 0.203611 | 0.260760 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.086176 | 0.196151 | 0.260963 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.085650 | 0.190923 | 0.250617 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.086158 | 0.202154 | 0.263664 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.085860 | 0.199856 | 0.256876 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.140318 | 0.310430 | 0.443980 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.138842 | 0.311440 | 0.435804 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.086097 | 0.200655 | 0.265254 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.088117 | 0.207382 | 0.267775 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.085156 | 0.193658 | 0.253489 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.088775 | 0.199037 | 0.258619 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.086784 | 0.200502 | 0.267520 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.087473 | 0.201078 | 0.269627 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.088666 | 0.199088 | 0.253419 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.086282 | 0.199223 | 0.263931 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.085437 | 0.206600 | 0.255451 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.085656 | 0.204975 | 0.262108 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.119252 | 0.264499 | 0.379185 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.094513 | 0.215735 | 0.320422 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.087971 | 0.207602 | 0.274774 | — | — | — |
| optional_test_static_properties.test | RUN | 0.200719 | 0.463914 | 0.674222 | 0.001680 | 0.001760 | 0.001716 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.091002 | 0.221857 | 0.290257 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.093775 | 0.231363 | 0.290117 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.089877 | 0.213490 | 0.281006 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.108193 | 0.265413 | 0.343824 | 0.001746 | 0.001418 | 0.001724 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.106079 | 0.270037 | 0.377303 | 0.001557 | 0.001333 | 0.001453 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.107474 | 0.269131 | 0.376982 | 0.001570 | 0.001636 | 0.001538 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.105561 | 0.280189 | 0.352500 | 0.001337 | 0.001778 | 0.001266 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.088025 | 0.181485 | 0.264744 | 0.001230 | 0.001327 | 0.001198 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.062705 | 0.163670 | 0.248364 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993×† | 0.991×, 0.995× | 1.082× |
| clang | 1.008× | 1.012×, 1.003× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001084s | 0.001060s | 0.001061s | byte equality observed |
| optional_test_assign.test | 10 | 0.000980s | 0.000994s | 0.001012s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001022s | 0.001015s | 0.000976s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001044s | 0.001002s | 0.000986s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001004s | 0.001006s | 0.001002s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001009s | 0.001038s | 0.000990s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000981s | 0.000998s | 0.000998s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001008s | 0.001031s | 0.001008s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000982s | 0.001015s | 0.000992s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001000s | 0.000994s | 0.000978s | byte equality observed |
| optional_test_hash.test | 10 | 0.001014s | 0.000990s | 0.000977s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000996s | 0.001051s | 0.000958s | byte equality observed |
| optional_test_io.test | 10 | 0.001038s | 0.001049s | 0.001000s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000988s | 0.001008s | 0.000979s | byte equality observed |
| optional_test_map.test | 10 | 0.001008s | 0.001021s | 0.000983s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001012s | 0.001006s | 0.001068s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001043s | 0.001079s | 0.001019s | byte equality observed |
| optional_test_move.test | 10 | 0.001056s | 0.000988s | 0.001030s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001003s | 0.000990s | 0.000984s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000465s | 0.000454s | 0.000983s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001009s | 0.000996s | 0.001003s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001025s | 0.001029s | 0.001012s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001009s | 0.001007s | 0.001004s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001028s | 0.001017s | 0.001020s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001014s | 0.001034s | 0.001013s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001026s | 0.001002s | 0.001008s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001016s | 0.000992s | 0.000999s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001004s | 0.001004s | 0.000995s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001028s | 0.000966s | 0.001009s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001029s | 0.001026s | 0.001029s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000999s | 0.000997s | 0.000997s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000989s | 0.001020s | 0.001005s | byte equality observed |
| optional_test_swap.test | 10 | 0.001018s | 0.000979s | 0.000997s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000989s | 0.001008s | 0.000999s | byte equality observed |
| optional_test_tie.test | 10 | 0.001015s | 0.001042s | 0.000989s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001033s | 0.001036s | 0.001047s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000986s | 0.000993s | 0.000980s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000993s | 0.000984s | 0.000984s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000997s | 0.000988s | 0.000975s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
