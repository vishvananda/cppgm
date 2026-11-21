# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.249254 | 1.458352 | 0.984733 | 0.001741 | 0.001934 | 0.002184 |
| optional_test_assign.test | RUN | 0.138745 | 0.319062 | 0.451050 | 0.001822 | 0.001838 | 0.001945 |
| optional_test_swap.test | RUN | 0.146119 | 0.401173 | 0.514498 | 0.001662 | 0.001712 | 0.001780 |
| optional_test_constexpr.test | COMPILE | 0.099814 | 0.220813 | 0.304764 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.143062 | 0.512407 | 0.446310 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.096101 | 0.219286 | 0.281906 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.157072 | 0.414194 | 0.517694 | 0.001811 | 0.001876 | 0.001883 |
| optional_test_constructors.test | RUN | 0.307956 | 1.502777 | 1.438601 | 0.001722 | 0.001776 | 0.001899 |
| optional_test_convert_from_T.test | RUN | 0.139865 | 0.346979 | 0.508030 | 0.001782 | 0.001817 | 0.001786 |
| optional_test_convert_assign.test | RUN | 0.142380 | 0.331972 | 0.429028 | 0.001444 | 0.001700 | 0.001843 |
| optional_test_empty_braces.test | RUN | 0.142012 | 0.332670 | 0.489833 | 0.001629 | 0.001742 | 0.001954 |
| optional_test_make_optional.test | RUN | 0.186086 | 0.503076 | 0.749292 | 0.001620 | 0.001684 | 0.001760 |
| optional_test_flat_map.test | RUN | 0.206459 | 0.587480 | 0.830810 | 0.001667 | 0.001569 | 0.001958 |
| optional_test_hash.test | RUN | 0.173860 | 0.463718 | 0.588934 | 0.001934 | 0.001587 | 0.001890 |
| optional_test_map.test | RUN | 0.210990 | 0.556550 | 0.830709 | 0.001847 | 0.001210 | 0.001610 |
| optional_test_tie.test | RUN | 0.150845 | 0.363617 | 0.495593 | 0.001660 | 0.001571 | 0.001804 |
| optional_test_ranges_find.test | RUN | 0.137170 | 0.320289 | 0.444062 | 0.001681 | 0.001695 | 0.001715 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.172244 | 0.917158 | 0.625165 | 0.001868 | 0.001515 | 0.001884 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.143121 | 0.388999 | 0.499594 | 0.001779 | 0.001689 | 0.001740 |
| optional_test_ref_assign_const_int.test | RUN | 0.142397 | 0.400657 | 0.459376 | 0.001691 | 0.001542 | 0.001568 |
| optional_test_ref_converting_ctor.test | RUN | 0.159633 | 0.548157 | 0.546413 | 0.001840 | 0.001812 | 0.001899 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.145214 | 0.371858 | 0.467343 | 0.001616 | 0.001666 | 0.001891 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.138386 | 0.344123 | 0.467514 | 0.001886 | 0.001487 | 0.001858 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.134826 | 0.339551 | 0.427348 | 0.001566 | 0.001480 | 0.001876 |
| optional_test_ref_portable_minimum.test | RUN | 0.536188 | 1.826713 | 1.642520 | 0.001832 | 0.001492 | 0.001622 |
| optional_test_ref_move.test | RUN | 0.147348 | 0.356107 | 0.458143 | 0.001922 | 0.001840 | 0.001529 |
| optional_test_ref_to_val.test | RUN | 0.176652 | 0.727017 | 0.655773 | 0.001677 | 0.001644 | 0.001647 |
| optional_test_inplace_factory.test | RUN | 0.180076 | 0.651877 | 0.591232 | 0.001617 | 0.001496 | 0.001480 |
| optional_test_io.test | RUN | 0.173397 | 0.717747 | 0.621559 | 0.001759 | 0.001690 | 0.001784 |
| optional_test_move.test | RUN | 0.155594 | 0.496803 | 0.549083 | 0.001443 | 0.001680 | 0.001884 |
| optional_test_noexcept_move.test | RUN | 0.099756 | 0.217904 | 0.270031 | 0.000696 | 0.000660 | 0.001916 |
| optional_test_cmp_none.test | RUN | 0.138344 | 0.344380 | 0.444901 | 0.001794 | 0.001838 | 0.001916 |
| optional_test_value_access.test | RUN | 0.173042 | 0.578062 | 0.607372 | 0.001772 | 0.001622 | 0.001872 |
| optional_test_emplace.test | RUN | 0.167963 | 0.577495 | 0.635241 | 0.001892 | 0.001841 | 0.002020 |
| optional_test_minimum_requirements.test | RUN | 0.148888 | 0.442758 | 0.516870 | 0.001802 | 0.001775 | 0.001914 |
| optional_test_msvc_bug_workaround.test | RUN | 0.141618 | 0.318889 | 0.434617 | 0.001800 | 0.001735 | 0.001928 |
| optional_test_member_T.test | RUN | 0.140229 | 0.303381 | 0.422402 | 0.001562 | 0.001583 | 0.001626 |
| optional_test_tc_base.test | RUN | 0.140605 | 0.320768 | 0.409337 | 0.001531 | 0.001590 | 0.001996 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.107065 | 0.232655 | 0.297432 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.101480 | 0.217137 | 0.292542 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.086531 | 0.196512 | 0.272459 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.130380 | 0.279382 | 0.402033 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.092874 | 0.204823 | 0.273155 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.093276 | 0.203409 | 0.274702 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.096432 | 0.201705 | 0.283759 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.093489 | 0.203564 | 0.276423 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.093160 | 0.200685 | 0.275307 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.092188 | 0.206014 | 0.270307 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.091334 | 0.193100 | 0.273083 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.148600 | 0.316957 | 0.463927 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.150886 | 0.318490 | 0.468216 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.091203 | 0.204684 | 0.263211 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.096115 | 0.209607 | 0.272901 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.092300 | 0.194871 | 0.269941 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.092938 | 0.197325 | 0.273098 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.094125 | 0.202921 | 0.279453 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.094150 | 0.203112 | 0.283484 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.093470 | 0.198626 | 0.273075 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.092651 | 0.196639 | 0.273406 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.092974 | 0.205344 | 0.279590 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.093523 | 0.205020 | 0.283106 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.127593 | 0.262131 | 0.384275 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.101711 | 0.223964 | 0.337250 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.097045 | 0.204931 | 0.293839 | — | — | — |
| optional_test_static_properties.test | RUN | 0.221451 | 0.448593 | 0.707357 | 0.001709 | 0.001860 | 0.001946 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.093281 | 0.218968 | 0.296574 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.095473 | 0.220360 | 0.322761 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.098655 | 0.214946 | 0.288864 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.115411 | 0.271583 | 0.368660 | 0.001944 | 0.001714 | 0.001939 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.114744 | 0.271956 | 0.378602 | 0.001920 | 0.001258 | 0.001628 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.115402 | 0.262746 | 0.399042 | 0.001966 | 0.001418 | 0.001731 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.114412 | 0.271175 | 0.352670 | 0.001924 | 0.001914 | 0.001486 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.081597 | 0.186745 | 0.287094 | 0.001397 | 0.001257 | 0.001382 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.069801 | 0.176224 | 0.267861 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.959×† | 0.918×, 1.001× | 0.932× |
| clang | 1.083× | 1.078×, 1.087× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001062s | 0.001058s | 0.001146s | byte equality observed |
| optional_test_assign.test | 10 | 0.000982s | 0.000981s | 0.001101s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001016s | 0.000960s | 0.001065s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001034s | 0.000985s | 0.001098s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000979s | 0.000974s | 0.001041s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000995s | 0.000971s | 0.001060s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000996s | 0.000966s | 0.001066s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000998s | 0.001014s | 0.001077s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000975s | 0.000997s | 0.001069s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000980s | 0.001004s | 0.000978s | byte equality observed |
| optional_test_hash.test | 10 | 0.000989s | 0.000983s | 0.000981s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000998s | 0.001004s | 0.001063s | byte equality observed |
| optional_test_io.test | 10 | 0.001023s | 0.001014s | 0.001077s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000985s | 0.000978s | 0.000980s | byte equality observed |
| optional_test_map.test | 10 | 0.001001s | 0.000988s | 0.001018s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001003s | 0.000970s | 0.001070s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001027s | 0.001037s | 0.001126s | byte equality observed |
| optional_test_move.test | 10 | 0.000993s | 0.000988s | 0.001075s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001002s | 0.000995s | 0.001094s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000456s | 0.000464s | 0.001055s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000988s | 0.000980s | 0.001087s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000984s | 0.000977s | 0.001073s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000988s | 0.001001s | 0.001062s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000997s | 0.001005s | 0.001042s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000990s | 0.001011s | 0.001082s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001028s | 0.001010s | 0.001071s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000994s | 0.000991s | 0.001084s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001026s | 0.001000s | 0.001076s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001005s | 0.000982s | 0.001041s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001046s | 0.000995s | 0.001079s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001000s | 0.000978s | 0.000989s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001015s | 0.000965s | 0.000992s | byte equality observed |
| optional_test_swap.test | 10 | 0.000978s | 0.000998s | 0.001092s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001001s | 0.000974s | 0.001075s | byte equality observed |
| optional_test_tie.test | 10 | 0.001010s | 0.001010s | 0.001053s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001036s | 0.001027s | 0.001121s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000971s | 0.001004s | 0.001071s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001002s | 0.001012s | 0.001069s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000972s | 0.001013s | 0.001070s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
