# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.200802 | 1.228408 | 0.641585 | 0.001896 | 0.002058 | 0.001708 |
| optional_test_assign.test | RUN | 0.109520 | 0.259322 | 0.302382 | 0.001668 | 0.001862 | 0.001675 |
| optional_test_swap.test | RUN | 0.117270 | 0.335934 | 0.317235 | 0.001590 | 0.001637 | 0.001459 |
| optional_test_constexpr.test | COMPILE | 0.077462 | 0.173047 | 0.185061 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.122932 | 0.428707 | 0.305752 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.083052 | 0.181515 | 0.193452 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.131449 | 0.355648 | 0.357798 | 0.001755 | 0.001703 | 0.001636 |
| optional_test_constructors.test | RUN | 0.255354 | 1.235273 | 0.952421 | 0.001473 | 0.001856 | 0.001552 |
| optional_test_convert_from_T.test | RUN | 0.121311 | 0.292576 | 0.321673 | 0.001852 | 0.001595 | 0.001579 |
| optional_test_convert_assign.test | RUN | 0.118174 | 0.286335 | 0.299381 | 0.001618 | 0.001768 | 0.001521 |
| optional_test_empty_braces.test | RUN | 0.120282 | 0.267479 | 0.301697 | 0.001672 | 0.001784 | 0.001562 |
| optional_test_make_optional.test | RUN | 0.159574 | 0.416429 | 0.444959 | 0.001886 | 0.001766 | 0.001528 |
| optional_test_flat_map.test | RUN | 0.169534 | 0.480895 | 0.535432 | 0.001578 | 0.001841 | 0.001532 |
| optional_test_hash.test | RUN | 0.142144 | 0.383451 | 0.398745 | 0.001534 | 0.001688 | 0.001560 |
| optional_test_map.test | RUN | 0.178969 | 0.470717 | 0.562481 | 0.001594 | 0.001902 | 0.001333 |
| optional_test_tie.test | RUN | 0.126115 | 0.306114 | 0.348923 | 0.001855 | 0.001615 | 0.001323 |
| optional_test_ranges_find.test | RUN | 0.115904 | 0.261457 | 0.334063 | 0.001655 | 0.001411 | 0.001302 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.147095 | 0.755885 | 0.472002 | 0.001322 | 0.001812 | 0.001594 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.130654 | 0.323920 | 0.324892 | 0.001760 | 0.001824 | 0.001388 |
| optional_test_ref_assign_const_int.test | RUN | 0.126155 | 0.337018 | 0.312360 | 0.001644 | 0.001534 | 0.001405 |
| optional_test_ref_converting_ctor.test | RUN | 0.132120 | 0.467582 | 0.361492 | 0.001376 | 0.001855 | 0.001646 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.124477 | 0.330258 | 0.320416 | 0.001533 | 0.001805 | 0.001652 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.119998 | 0.308808 | 0.286932 | 0.001563 | 0.001606 | 0.001434 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.121700 | 0.299273 | 0.290406 | 0.001579 | 0.001527 | 0.001238 |
| optional_test_ref_portable_minimum.test | RUN | 0.414867 | 1.622671 | 1.087823 | 0.001806 | 0.001842 | 0.001384 |
| optional_test_ref_move.test | RUN | 0.129454 | 0.318890 | 0.322910 | 0.001830 | 0.001914 | 0.001572 |
| optional_test_ref_to_val.test | RUN | 0.148829 | 0.630451 | 0.441222 | 0.001511 | 0.001684 | 0.001488 |
| optional_test_inplace_factory.test | RUN | 0.150414 | 0.581013 | 0.414802 | 0.001792 | 0.001799 | 0.001471 |
| optional_test_io.test | RUN | 0.147212 | 0.676334 | 0.421242 | 0.001852 | 0.001984 | 0.001400 |
| optional_test_move.test | RUN | 0.131063 | 0.431142 | 0.379420 | 0.001816 | 0.001487 | 0.001782 |
| optional_test_noexcept_move.test | RUN | 0.082701 | 0.191380 | 0.194110 | 0.000754 | 0.000744 | 0.001383 |
| optional_test_cmp_none.test | RUN | 0.118216 | 0.302826 | 0.357729 | 0.001561 | 0.001999 | 0.001598 |
| optional_test_value_access.test | RUN | 0.138798 | 0.516529 | 0.416792 | 0.001883 | 0.001708 | 0.001764 |
| optional_test_emplace.test | RUN | 0.141459 | 0.509229 | 0.439512 | 0.001888 | 0.001564 | 0.001569 |
| optional_test_minimum_requirements.test | RUN | 0.127900 | 0.391689 | 0.386579 | 0.001684 | 0.001651 | 0.001676 |
| optional_test_msvc_bug_workaround.test | RUN | 0.118542 | 0.284733 | 0.317455 | 0.001642 | 0.001925 | 0.001654 |
| optional_test_member_T.test | RUN | 0.113721 | 0.270458 | 0.298747 | 0.001803 | 0.001608 | 0.001648 |
| optional_test_tc_base.test | RUN | 0.118158 | 0.277938 | 0.311579 | 0.001828 | 0.001948 | 0.001666 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.087434 | 0.194090 | 0.213426 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.083405 | 0.186444 | 0.191938 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.076726 | 0.171546 | 0.173473 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.103290 | 0.234097 | 0.272219 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.075198 | 0.174273 | 0.181261 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.076030 | 0.178562 | 0.181139 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.076073 | 0.170081 | 0.186282 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.078624 | 0.173592 | 0.182695 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.076919 | 0.174034 | 0.178822 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.074230 | 0.169154 | 0.176577 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.076056 | 0.174125 | 0.179643 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.121076 | 0.268910 | 0.310787 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.121270 | 0.273646 | 0.314935 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.073948 | 0.170588 | 0.181942 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.076174 | 0.174304 | 0.191174 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.073766 | 0.174593 | 0.171950 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.075973 | 0.172153 | 0.175682 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.074510 | 0.181030 | 0.184482 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.073127 | 0.180095 | 0.182672 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.074739 | 0.166579 | 0.183743 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.073991 | 0.167658 | 0.183916 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.072171 | 0.172274 | 0.184141 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.073202 | 0.173074 | 0.184766 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.102094 | 0.224131 | 0.275604 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.079421 | 0.190047 | 0.222957 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.075416 | 0.175508 | 0.185912 | — | — | — |
| optional_test_static_properties.test | RUN | 0.179557 | 0.398307 | 0.462504 | 0.001267 | 0.001896 | 0.001662 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.078098 | 0.189847 | 0.205271 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.081443 | 0.196137 | 0.205831 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.075891 | 0.182022 | 0.193873 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.091593 | 0.233347 | 0.255650 | 0.001756 | 0.001702 | 0.001280 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.093164 | 0.235389 | 0.248115 | 0.001690 | 0.001475 | 0.001400 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.091373 | 0.232577 | 0.259069 | 0.001237 | 0.001497 | 0.001337 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.098436 | 0.280251 | 0.258947 | 0.001434 | 0.001680 | 0.001725 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.065995 | 0.158125 | 0.172807 | 0.001404 | 0.001448 | 0.001160 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.041129 | 0.144792 | 0.160577 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967×† | 0.979×, 0.955× | 0.938× |
| clang | 1.026× | 1.024×, 1.028× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000966s | 0.000924s | 0.000988s | byte equality observed |
| optional_test_assign.test | 10 | 0.000895s | 0.000884s | 0.000934s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000923s | 0.000878s | 0.000921s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000917s | 0.000878s | 0.000935s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000891s | 0.000873s | 0.000923s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000908s | 0.000867s | 0.000930s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000897s | 0.000862s | 0.000943s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000930s | 0.000892s | 0.000953s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000895s | 0.000914s | 0.000903s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000918s | 0.000892s | 0.000961s | byte equality observed |
| optional_test_hash.test | 10 | 0.000911s | 0.000876s | 0.000925s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000921s | 0.000886s | 0.000932s | byte equality observed |
| optional_test_io.test | 10 | 0.000924s | 0.000884s | 0.000945s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000927s | 0.000891s | 0.000911s | byte equality observed |
| optional_test_map.test | 10 | 0.000908s | 0.000864s | 0.000920s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000901s | 0.000872s | 0.000916s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000928s | 0.000906s | 0.000959s | byte equality observed |
| optional_test_move.test | 10 | 0.000903s | 0.000882s | 0.000909s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000910s | 0.000879s | 0.000921s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000416s | 0.000401s | 0.000908s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000901s | 0.000856s | 0.000922s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000919s | 0.000871s | 0.000914s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000904s | 0.000869s | 0.000911s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000912s | 0.000901s | 0.000932s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000907s | 0.000863s | 0.000917s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000901s | 0.000863s | 0.000932s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000916s | 0.000868s | 0.000903s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000926s | 0.000875s | 0.000923s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000915s | 0.000876s | 0.000924s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000945s | 0.000910s | 0.000961s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000909s | 0.000876s | 0.000924s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000893s | 0.000878s | 0.000941s | byte equality observed |
| optional_test_swap.test | 10 | 0.000901s | 0.000868s | 0.000935s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000918s | 0.000894s | 0.000909s | byte equality observed |
| optional_test_tie.test | 10 | 0.000910s | 0.000862s | 0.000900s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000958s | 0.000910s | 0.000953s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000896s | 0.000855s | 0.000897s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000913s | 0.000865s | 0.000915s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000916s | 0.000865s | 0.000931s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
