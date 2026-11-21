# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.301264 | 1.938435 | 1.167255 | 0.001617 | 0.001607 | 0.001783 |
| optional_test_assign.test | RUN | 0.161708 | 0.401365 | 0.521865 | 0.001542 | 0.001536 | 0.001595 |
| optional_test_swap.test | RUN | 0.172296 | 0.497926 | 0.569855 | 0.001562 | 0.001453 | 0.001316 |
| optional_test_constexpr.test | COMPILE | 0.113794 | 0.275347 | 0.339489 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.162461 | 0.679262 | 0.571556 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.108897 | 0.267759 | 0.326118 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.183118 | 0.520660 | 0.653178 | 0.001478 | 0.001622 | 0.001635 |
| optional_test_constructors.test | RUN | 0.364022 | 1.944088 | 1.668895 | 0.001482 | 0.001406 | 0.001670 |
| optional_test_convert_from_T.test | RUN | 0.162542 | 0.424528 | 0.545320 | 0.001483 | 0.001610 | 0.001660 |
| optional_test_convert_assign.test | RUN | 0.159528 | 0.416305 | 0.527435 | 0.001510 | 0.001518 | 0.001607 |
| optional_test_empty_braces.test | RUN | 0.157121 | 0.406971 | 0.549268 | 0.001592 | 0.001600 | 0.001656 |
| optional_test_make_optional.test | RUN | 0.218497 | 0.628865 | 0.825724 | 0.001624 | 0.001494 | 0.001632 |
| optional_test_flat_map.test | RUN | 0.238606 | 0.725536 | 0.937485 | 0.001529 | 0.001559 | 0.001591 |
| optional_test_hash.test | RUN | 0.191573 | 0.599322 | 0.694262 | 0.001488 | 0.001492 | 0.001630 |
| optional_test_map.test | RUN | 0.237097 | 0.703381 | 0.981041 | 0.001413 | 0.001600 | 0.001549 |
| optional_test_tie.test | RUN | 0.171682 | 0.463656 | 0.559168 | 0.001447 | 0.001578 | 0.001592 |
| optional_test_ranges_find.test | RUN | 0.151947 | 0.389546 | 0.498344 | 0.001559 | 0.001646 | 0.001661 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.193407 | 1.167630 | 0.758148 | 0.001405 | 0.001586 | 0.001648 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.161962 | 0.496575 | 0.553810 | 0.001403 | 0.001529 | 0.001634 |
| optional_test_ref_assign_const_int.test | RUN | 0.164381 | 0.513312 | 0.576776 | 0.001552 | 0.001867 | 0.001514 |
| optional_test_ref_converting_ctor.test | RUN | 0.178914 | 0.719310 | 0.625153 | 0.001461 | 0.001646 | 0.001637 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.160024 | 0.471630 | 0.560237 | 0.001516 | 0.001589 | 0.001511 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.155067 | 0.436600 | 0.532118 | 0.001519 | 0.001570 | 0.001602 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.154112 | 0.431173 | 0.517603 | 0.001668 | 0.001521 | 0.001642 |
| optional_test_ref_portable_minimum.test | RUN | 0.671601 | 2.376974 | 2.013784 | 0.001457 | 0.001595 | 0.001366 |
| optional_test_ref_move.test | RUN | 0.163105 | 0.449792 | 0.550829 | 0.001474 | 0.001670 | 0.001576 |
| optional_test_ref_to_val.test | RUN | 0.192545 | 0.933694 | 0.793718 | 0.001514 | 0.001545 | 0.001645 |
| optional_test_inplace_factory.test | RUN | 0.204081 | 0.847271 | 0.710944 | 0.001640 | 0.001593 | 0.001586 |
| optional_test_io.test | RUN | 0.192990 | 0.932238 | 0.748864 | 0.001622 | 0.001694 | 0.001610 |
| optional_test_move.test | RUN | 0.180260 | 0.633714 | 0.649083 | 0.001489 | 0.001586 | 0.001626 |
| optional_test_noexcept_move.test | RUN | 0.111489 | 0.268729 | 0.327378 | 0.000601 | 0.000618 | 0.001546 |
| optional_test_cmp_none.test | RUN | 0.156106 | 0.440368 | 0.536882 | 0.001536 | 0.001628 | 0.001622 |
| optional_test_value_access.test | RUN | 0.185517 | 0.730990 | 0.704475 | 0.001675 | 0.001673 | 0.001652 |
| optional_test_emplace.test | RUN | 0.184102 | 0.734524 | 0.712362 | 0.001670 | 0.001639 | 0.001362 |
| optional_test_minimum_requirements.test | RUN | 0.166225 | 0.567800 | 0.631906 | 0.001561 | 0.001543 | 0.001546 |
| optional_test_msvc_bug_workaround.test | RUN | 0.153638 | 0.404704 | 0.526288 | 0.001666 | 0.001453 | 0.001671 |
| optional_test_member_T.test | RUN | 0.153019 | 0.393317 | 0.528908 | 0.001642 | 0.001565 | 0.001580 |
| optional_test_tc_base.test | RUN | 0.149408 | 0.404161 | 0.534290 | 0.001541 | 0.001674 | 0.001310 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.119360 | 0.280232 | 0.355670 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.108620 | 0.276817 | 0.333871 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.100230 | 0.252424 | 0.309772 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.140235 | 0.353744 | 0.475668 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.100344 | 0.254984 | 0.306097 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.104093 | 0.254363 | 0.312255 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.105823 | 0.255575 | 0.319416 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.103178 | 0.251168 | 0.304598 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.100909 | 0.252129 | 0.305273 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.103547 | 0.252971 | 0.311257 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.101508 | 0.247450 | 0.305655 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.167401 | 0.407945 | 0.531752 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.169088 | 0.399805 | 0.538367 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.099420 | 0.251637 | 0.306337 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.103500 | 0.257948 | 0.321228 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.098728 | 0.248569 | 0.300768 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.105791 | 0.244093 | 0.307193 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.101300 | 0.244877 | 0.306225 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.103567 | 0.253556 | 0.305203 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.102709 | 0.249276 | 0.304514 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.098439 | 0.244364 | 0.306945 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.100586 | 0.245836 | 0.303638 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.101416 | 0.256470 | 0.310010 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.138284 | 0.336083 | 0.452090 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.112469 | 0.283929 | 0.376087 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.103452 | 0.258452 | 0.320801 | — | — | — |
| optional_test_static_properties.test | RUN | 0.241197 | 0.578892 | 0.805993 | 0.001598 | 0.001600 | 0.001606 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.108258 | 0.278997 | 0.333923 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.110072 | 0.281378 | 0.347415 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.105177 | 0.266037 | 0.318977 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.126995 | 0.331373 | 0.425815 | 0.001381 | 0.001656 | 0.001530 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.125776 | 0.337063 | 0.450289 | 0.001496 | 0.001574 | 0.001483 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.125998 | 0.337909 | 0.450536 | 0.001416 | 0.001334 | 0.001381 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.127614 | 0.349803 | 0.415829 | 0.001613 | 0.001700 | 0.001681 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.096620 | 0.234969 | 0.310225 | 0.001041 | 0.001093 | 0.001157 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.053400 | 0.187350 | 0.284515 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.992×, 1.012× | 1.004× |
| clang | 1.027× | 1.040×, 1.014× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001054s | 0.001017s | 0.001025s | byte equality observed |
| optional_test_assign.test | 10 | 0.000941s | 0.000918s | 0.000967s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000975s | 0.000974s | 0.000979s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000970s | 0.000946s | 0.000971s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000957s | 0.000955s | 0.000955s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000961s | 0.001019s | 0.000971s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000947s | 0.000952s | 0.000946s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001010s | 0.001004s | 0.000993s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000960s | 0.000953s | 0.000953s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000957s | 0.000987s | 0.000963s | byte equality observed |
| optional_test_hash.test | 10 | 0.000965s | 0.000951s | 0.000943s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000987s | 0.000963s | 0.000955s | byte equality observed |
| optional_test_io.test | 10 | 0.000994s | 0.000987s | 0.000984s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000947s | 0.000973s | 0.001036s | byte equality observed |
| optional_test_map.test | 10 | 0.000995s | 0.000978s | 0.001005s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000951s | 0.000953s | 0.000985s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000981s | 0.000971s | 0.000993s | byte equality observed |
| optional_test_move.test | 10 | 0.000952s | 0.001015s | 0.000990s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000977s | 0.000969s | 0.000983s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000426s | 0.000429s | 0.000940s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000982s | 0.000950s | 0.000956s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000974s | 0.000975s | 0.000987s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000960s | 0.000980s | 0.000987s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000955s | 0.000960s | 0.000982s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000960s | 0.000982s | 0.001003s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000992s | 0.001005s | 0.000960s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000963s | 0.000925s | 0.000985s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000978s | 0.000963s | 0.000947s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000976s | 0.000973s | 0.001005s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000974s | 0.001010s | 0.001012s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000966s | 0.001009s | 0.000961s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000959s | 0.000969s | 0.000972s | byte equality observed |
| optional_test_swap.test | 10 | 0.000986s | 0.000984s | 0.000988s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000960s | 0.000973s | 0.000950s | byte equality observed |
| optional_test_tie.test | 10 | 0.001007s | 0.000999s | 0.000986s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000991s | 0.001010s | 0.000965s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000976s | 0.000986s | 0.001006s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000945s | 0.000951s | 0.000993s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000941s | 0.000940s | 0.000939s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
