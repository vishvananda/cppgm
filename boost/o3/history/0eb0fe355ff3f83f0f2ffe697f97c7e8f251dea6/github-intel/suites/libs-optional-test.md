# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.211367 | 1.324102 | 0.763274 | 0.001223 | 0.001484 | 0.001202 |
| optional_test_assign.test | RUN | 0.103710 | 0.275739 | 0.337664 | 0.001309 | 0.001203 | 0.001263 |
| optional_test_swap.test | RUN | 0.114043 | 0.342047 | 0.371769 | 0.000899 | 0.001333 | 0.001065 |
| optional_test_constexpr.test | COMPILE | 0.075282 | 0.184195 | 0.215447 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.113124 | 0.454443 | 0.366718 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.072847 | 0.180576 | 0.208145 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.120326 | 0.352586 | 0.411377 | 0.001162 | 0.001414 | 0.001039 |
| optional_test_constructors.test | RUN | 0.255095 | 1.337779 | 1.067281 | 0.001228 | 0.001274 | 0.001139 |
| optional_test_convert_from_T.test | RUN | 0.108299 | 0.293312 | 0.351116 | 0.001405 | 0.001259 | 0.001145 |
| optional_test_convert_assign.test | RUN | 0.110025 | 0.277536 | 0.355046 | 0.001205 | 0.001270 | 0.001109 |
| optional_test_empty_braces.test | RUN | 0.109365 | 0.280038 | 0.331937 | 0.001346 | 0.001299 | 0.001055 |
| optional_test_make_optional.test | RUN | 0.151415 | 0.430264 | 0.541397 | 0.001368 | 0.001167 | 0.001133 |
| optional_test_flat_map.test | RUN | 0.165483 | 0.507789 | 0.616278 | 0.001142 | 0.001119 | 0.001133 |
| optional_test_hash.test | RUN | 0.135032 | 0.401107 | 0.443620 | 0.001202 | 0.001254 | 0.001104 |
| optional_test_map.test | RUN | 0.166491 | 0.484899 | 0.647036 | 0.001239 | 0.001230 | 0.001108 |
| optional_test_tie.test | RUN | 0.113157 | 0.312828 | 0.354971 | 0.001109 | 0.001181 | 0.001250 |
| optional_test_ranges_find.test | RUN | 0.104430 | 0.264995 | 0.319326 | 0.001174 | 0.001222 | 0.001103 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.136334 | 0.801256 | 0.491018 | 0.001117 | 0.001196 | 0.001200 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.107778 | 0.340302 | 0.360231 | 0.001254 | 0.001402 | 0.001122 |
| optional_test_ref_assign_const_int.test | RUN | 0.111880 | 0.343615 | 0.366714 | 0.001391 | 0.001451 | 0.001126 |
| optional_test_ref_converting_ctor.test | RUN | 0.120450 | 0.493906 | 0.407086 | 0.001180 | 0.001366 | 0.001054 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.112034 | 0.322885 | 0.367625 | 0.001167 | 0.001246 | 0.001205 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.105418 | 0.297838 | 0.338246 | 0.001139 | 0.001185 | 0.001320 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.107251 | 0.290518 | 0.335986 | 0.001246 | 0.001230 | 0.001071 |
| optional_test_ref_portable_minimum.test | RUN | 0.467723 | 1.614942 | 1.244333 | 0.001224 | 0.001279 | 0.001244 |
| optional_test_ref_move.test | RUN | 0.116986 | 0.308448 | 0.365472 | 0.001259 | 0.001373 | 0.001150 |
| optional_test_ref_to_val.test | RUN | 0.136724 | 0.633407 | 0.501968 | 0.001065 | 0.001223 | 0.001122 |
| optional_test_inplace_factory.test | RUN | 0.141909 | 0.578190 | 0.458706 | 0.001320 | 0.001230 | 0.001099 |
| optional_test_io.test | RUN | 0.136719 | 0.652476 | 0.470217 | 0.001215 | 0.001254 | 0.001305 |
| optional_test_move.test | RUN | 0.126876 | 0.432772 | 0.419152 | 0.001274 | 0.001228 | 0.001099 |
| optional_test_noexcept_move.test | RUN | 0.074411 | 0.184681 | 0.221105 | 0.000499 | 0.000514 | 0.001138 |
| optional_test_cmp_none.test | RUN | 0.111489 | 0.298947 | 0.342937 | 0.001274 | 0.001341 | 0.001229 |
| optional_test_value_access.test | RUN | 0.136024 | 0.519519 | 0.470132 | 0.001230 | 0.001364 | 0.001114 |
| optional_test_emplace.test | RUN | 0.136512 | 0.497100 | 0.469546 | 0.001154 | 0.001326 | 0.001154 |
| optional_test_minimum_requirements.test | RUN | 0.124218 | 0.398817 | 0.396782 | 0.001111 | 0.001199 | 0.001054 |
| optional_test_msvc_bug_workaround.test | RUN | 0.109945 | 0.270802 | 0.330028 | 0.001144 | 0.001037 | 0.001070 |
| optional_test_member_T.test | RUN | 0.108606 | 0.264632 | 0.331938 | 0.001118 | 0.001171 | 0.001068 |
| optional_test_tc_base.test | RUN | 0.106611 | 0.276487 | 0.326866 | 0.001155 | 0.001259 | 0.001044 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.081762 | 0.185085 | 0.221480 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.075784 | 0.180055 | 0.208426 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.072101 | 0.169520 | 0.185409 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.095878 | 0.234803 | 0.304098 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.069308 | 0.171101 | 0.191121 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.069691 | 0.168540 | 0.195825 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.071693 | 0.172670 | 0.201675 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070771 | 0.165266 | 0.197171 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.069437 | 0.170088 | 0.191902 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070463 | 0.164851 | 0.195347 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070325 | 0.170345 | 0.195928 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.116070 | 0.264025 | 0.335440 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.114173 | 0.270456 | 0.332988 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.069049 | 0.164716 | 0.193376 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.071445 | 0.172889 | 0.200124 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.068775 | 0.162806 | 0.192964 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.071772 | 0.166344 | 0.196718 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.069912 | 0.168197 | 0.193934 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.070862 | 0.170554 | 0.193148 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.069915 | 0.159658 | 0.195222 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.070117 | 0.166554 | 0.194653 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.068672 | 0.166261 | 0.192630 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.070471 | 0.166661 | 0.192281 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.096236 | 0.220154 | 0.288487 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.074909 | 0.186814 | 0.238027 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.071873 | 0.169251 | 0.203023 | — | — | — |
| optional_test_static_properties.test | RUN | 0.166646 | 0.383328 | 0.501846 | 0.001234 | 0.001395 | 0.001150 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.074577 | 0.184425 | 0.213552 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.075755 | 0.187584 | 0.217143 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.071697 | 0.175942 | 0.201979 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.086981 | 0.228472 | 0.283664 | 0.001208 | 0.001293 | 0.001108 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.083118 | 0.231992 | 0.282233 | 0.001154 | 0.001208 | 0.001173 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.084590 | 0.229239 | 0.267734 | 0.001050 | 0.001219 | 0.001116 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.088928 | 0.233913 | 0.280201 | 0.000852 | 0.000924 | 0.001096 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.072289 | 0.166347 | 0.185898 | 0.000854 | 0.000914 | 0.000740 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.045744 | 0.157505 | 0.180412 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.996×, 0.991× | 1.002× |
| clang | 1.013× | 1.007×, 1.020× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000851s | 0.000850s | 0.000854s | byte equality observed |
| optional_test_assign.test | 10 | 0.000799s | 0.000800s | 0.000800s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000799s | 0.000802s | 0.000775s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000826s | 0.000819s | 0.000824s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000809s | 0.000819s | 0.000808s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000798s | 0.000806s | 0.000813s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000805s | 0.000817s | 0.000802s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000851s | 0.000807s | 0.000833s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000828s | 0.000812s | 0.000843s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000829s | 0.000805s | 0.000807s | byte equality observed |
| optional_test_hash.test | 10 | 0.000801s | 0.000806s | 0.000813s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000818s | 0.000808s | 0.000820s | byte equality observed |
| optional_test_io.test | 10 | 0.000826s | 0.000837s | 0.000825s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000821s | 0.000821s | 0.000813s | byte equality observed |
| optional_test_map.test | 10 | 0.000805s | 0.000792s | 0.000779s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000806s | 0.000805s | 0.000797s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000846s | 0.000847s | 0.000835s | byte equality observed |
| optional_test_move.test | 10 | 0.000836s | 0.000791s | 0.000809s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000796s | 0.000788s | 0.000837s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000365s | 0.000366s | 0.000786s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000814s | 0.000811s | 0.000802s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000804s | 0.000797s | 0.000819s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000814s | 0.000791s | 0.000846s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000812s | 0.000805s | 0.000822s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000798s | 0.000820s | 0.000816s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000795s | 0.000822s | 0.000817s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000830s | 0.000812s | 0.000815s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000824s | 0.000795s | 0.000819s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000814s | 0.000804s | 0.000799s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000831s | 0.000816s | 0.000821s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000819s | 0.000808s | 0.000816s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000804s | 0.000806s | 0.000808s | byte equality observed |
| optional_test_swap.test | 10 | 0.000803s | 0.000825s | 0.000808s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000833s | 0.000810s | 0.000832s | byte equality observed |
| optional_test_tie.test | 10 | 0.000810s | 0.000792s | 0.000824s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000835s | 0.000843s | 0.000837s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000777s | 0.000763s | 0.000816s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000789s | 0.000793s | 0.000820s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000822s | 0.000785s | 0.000835s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
