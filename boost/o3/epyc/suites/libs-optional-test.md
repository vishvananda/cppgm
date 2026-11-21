# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.245206 | 1.460155 | 0.925347 | 0.001842 | 0.001703 | 0.001842 |
| optional_test_assign.test | RUN | 0.126406 | 0.313687 | 0.450923 | 0.001621 | 0.001823 | 0.001654 |
| optional_test_swap.test | RUN | 0.134131 | 0.398005 | 0.470246 | 0.001369 | 0.001762 | 0.001482 |
| optional_test_constexpr.test | COMPILE | 0.094561 | 0.216609 | 0.283613 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.143206 | 0.499874 | 0.437695 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.094063 | 0.219081 | 0.272208 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.142002 | 0.408275 | 0.511639 | 0.001512 | 0.001893 | 0.001682 |
| optional_test_constructors.test | RUN | 0.300200 | 1.482259 | 1.311714 | 0.001334 | 0.001739 | 0.001812 |
| optional_test_convert_from_T.test | RUN | 0.132334 | 0.332354 | 0.442532 | 0.001736 | 0.001743 | 0.001662 |
| optional_test_convert_assign.test | RUN | 0.140866 | 0.318703 | 0.461101 | 0.001580 | 0.001661 | 0.001616 |
| optional_test_empty_braces.test | RUN | 0.133234 | 0.334345 | 0.426001 | 0.001787 | 0.001492 | 0.001726 |
| optional_test_make_optional.test | RUN | 0.178578 | 0.492642 | 0.673849 | 0.001817 | 0.001814 | 0.001736 |
| optional_test_flat_map.test | RUN | 0.192537 | 0.570666 | 0.747920 | 0.001626 | 0.001660 | 0.001692 |
| optional_test_hash.test | RUN | 0.161773 | 0.459103 | 0.561684 | 0.001491 | 0.001717 | 0.001740 |
| optional_test_map.test | RUN | 0.199513 | 0.560374 | 0.788851 | 0.001717 | 0.001535 | 0.001680 |
| optional_test_tie.test | RUN | 0.141649 | 0.359412 | 0.450935 | 0.001542 | 0.001666 | 0.001645 |
| optional_test_ranges_find.test | RUN | 0.126577 | 0.322730 | 0.437612 | 0.001550 | 0.001686 | 0.001489 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.161641 | 0.901133 | 0.576061 | 0.001324 | 0.001337 | 0.001713 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.132530 | 0.386405 | 0.457033 | 0.001714 | 0.001622 | 0.001712 |
| optional_test_ref_assign_const_int.test | RUN | 0.134907 | 0.398606 | 0.455322 | 0.001725 | 0.001486 | 0.001582 |
| optional_test_ref_converting_ctor.test | RUN | 0.147962 | 0.555178 | 0.508117 | 0.001597 | 0.001842 | 0.001564 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.136831 | 0.369291 | 0.456586 | 0.001368 | 0.001505 | 0.001718 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.127858 | 0.345606 | 0.425477 | 0.001793 | 0.001336 | 0.001616 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.129548 | 0.329206 | 0.415314 | 0.001714 | 0.001743 | 0.001732 |
| optional_test_ref_portable_minimum.test | RUN | 0.525279 | 1.804168 | 1.562052 | 0.001724 | 0.001720 | 0.001871 |
| optional_test_ref_move.test | RUN | 0.140250 | 0.352453 | 0.428286 | 0.001624 | 0.001732 | 0.001721 |
| optional_test_ref_to_val.test | RUN | 0.169673 | 0.704508 | 0.650330 | 0.001771 | 0.001614 | 0.001796 |
| optional_test_inplace_factory.test | RUN | 0.171757 | 0.652202 | 0.573102 | 0.001618 | 0.001755 | 0.001675 |
| optional_test_io.test | RUN | 0.163384 | 0.717297 | 0.605384 | 0.001430 | 0.001790 | 0.001559 |
| optional_test_move.test | RUN | 0.151907 | 0.482163 | 0.497369 | 0.001615 | 0.001783 | 0.001692 |
| optional_test_noexcept_move.test | RUN | 0.095639 | 0.222893 | 0.265748 | 0.000725 | 0.000658 | 0.001542 |
| optional_test_cmp_none.test | RUN | 0.131081 | 0.340297 | 0.426824 | 0.001794 | 0.001825 | 0.001707 |
| optional_test_value_access.test | RUN | 0.155654 | 0.573887 | 0.554777 | 0.001650 | 0.001647 | 0.001584 |
| optional_test_emplace.test | RUN | 0.155627 | 0.581968 | 0.602894 | 0.001834 | 0.001691 | 0.001447 |
| optional_test_minimum_requirements.test | RUN | 0.146467 | 0.440941 | 0.534731 | 0.001626 | 0.001628 | 0.001576 |
| optional_test_msvc_bug_workaround.test | RUN | 0.131225 | 0.318824 | 0.402703 | 0.001700 | 0.001592 | 0.001623 |
| optional_test_member_T.test | RUN | 0.126297 | 0.305974 | 0.432549 | 0.001502 | 0.001586 | 0.001536 |
| optional_test_tc_base.test | RUN | 0.132539 | 0.319748 | 0.444032 | 0.001585 | 0.001588 | 0.001745 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.099070 | 0.227229 | 0.278219 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.093446 | 0.225456 | 0.268065 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.086729 | 0.196904 | 0.238106 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.118868 | 0.276059 | 0.401055 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.086356 | 0.204384 | 0.269838 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.087082 | 0.198549 | 0.256265 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.088482 | 0.205799 | 0.264271 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.086824 | 0.197021 | 0.262398 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.085642 | 0.193052 | 0.257596 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.087066 | 0.192284 | 0.257770 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.085839 | 0.204032 | 0.263812 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.144976 | 0.309234 | 0.438390 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.140112 | 0.312695 | 0.442109 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.085167 | 0.195239 | 0.253877 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.089113 | 0.200334 | 0.263530 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.086964 | 0.198542 | 0.259824 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.086703 | 0.197152 | 0.263930 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.087359 | 0.199802 | 0.254425 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.087108 | 0.201016 | 0.261227 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.087096 | 0.195447 | 0.261748 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.084236 | 0.199657 | 0.255311 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.084967 | 0.198656 | 0.254088 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.084077 | 0.204900 | 0.259740 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.117022 | 0.260686 | 0.385334 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.094506 | 0.213737 | 0.329316 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.087708 | 0.206389 | 0.260030 | — | — | — |
| optional_test_static_properties.test | RUN | 0.203996 | 0.455359 | 0.671239 | 0.001435 | 0.001845 | 0.001702 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.091501 | 0.218650 | 0.284810 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.093068 | 0.222936 | 0.301678 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.088589 | 0.212206 | 0.271021 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.109868 | 0.269767 | 0.374063 | 0.001441 | 0.001635 | 0.001591 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.110557 | 0.269196 | 0.341712 | 0.001506 | 0.001590 | 0.001539 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.105130 | 0.274323 | 0.371755 | 0.001559 | 0.001506 | 0.001395 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.106558 | 0.273385 | 0.337515 | 0.001381 | 0.001894 | 0.001681 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.078091 | 0.194594 | 0.256661 | 0.001256 | 0.001251 | 0.001175 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.049016 | 0.161574 | 0.234560 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.005×, 0.991× | 0.994× |
| clang | 1.017× | 1.012×, 1.023× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001081s | 0.001077s | 0.001101s | byte equality observed |
| optional_test_assign.test | 10 | 0.001008s | 0.001013s | 0.001012s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000993s | 0.001035s | 0.001026s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001024s | 0.001024s | 0.001065s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001013s | 0.001010s | 0.001046s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001022s | 0.001024s | 0.001040s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001003s | 0.001019s | 0.001042s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001044s | 0.001002s | 0.001049s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001027s | 0.000968s | 0.001029s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001023s | 0.000983s | 0.001069s | byte equality observed |
| optional_test_hash.test | 10 | 0.001052s | 0.001032s | 0.001034s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001027s | 0.000995s | 0.001032s | byte equality observed |
| optional_test_io.test | 10 | 0.001026s | 0.001007s | 0.001036s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001000s | 0.001014s | 0.001025s | byte equality observed |
| optional_test_map.test | 10 | 0.001016s | 0.000993s | 0.001055s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000999s | 0.000999s | 0.001059s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001046s | 0.001027s | 0.001058s | byte equality observed |
| optional_test_move.test | 10 | 0.001004s | 0.001007s | 0.001061s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001028s | 0.001021s | 0.001039s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000466s | 0.000448s | 0.001033s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001012s | 0.000986s | 0.001016s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001007s | 0.000974s | 0.001044s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001027s | 0.000972s | 0.001065s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001034s | 0.001003s | 0.001032s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000995s | 0.001001s | 0.001006s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001013s | 0.001035s | 0.001000s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001021s | 0.001033s | 0.000996s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001017s | 0.001025s | 0.001017s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001027s | 0.001005s | 0.001055s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001061s | 0.001037s | 0.001038s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001037s | 0.000999s | 0.001075s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001032s | 0.000973s | 0.001027s | byte equality observed |
| optional_test_swap.test | 10 | 0.001019s | 0.000983s | 0.001046s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000996s | 0.001047s | 0.001069s | byte equality observed |
| optional_test_tie.test | 10 | 0.001006s | 0.000981s | 0.001008s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001052s | 0.001026s | 0.001049s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000996s | 0.000977s | 0.001008s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001002s | 0.000983s | 0.001053s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001005s | 0.000985s | 0.001010s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
