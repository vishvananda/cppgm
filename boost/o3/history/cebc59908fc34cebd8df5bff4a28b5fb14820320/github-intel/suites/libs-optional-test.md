# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.216342 | 1.360858 | 0.773040 | 0.001593 | 0.001642 | 0.001479 |
| optional_test_assign.test | RUN | 0.111402 | 0.280571 | 0.354217 | 0.001374 | 0.001436 | 0.001245 |
| optional_test_swap.test | RUN | 0.118414 | 0.347636 | 0.385795 | 0.001408 | 0.001357 | 0.001245 |
| optional_test_constexpr.test | COMPILE | 0.079858 | 0.185184 | 0.220331 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.120735 | 0.461305 | 0.378763 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.079451 | 0.184351 | 0.217753 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.128980 | 0.359901 | 0.431145 | 0.001336 | 0.001402 | 0.001465 |
| optional_test_constructors.test | RUN | 0.271579 | 1.353858 | 1.114798 | 0.001222 | 0.001283 | 0.001566 |
| optional_test_convert_from_T.test | RUN | 0.115884 | 0.296626 | 0.370408 | 0.001317 | 0.001360 | 0.001457 |
| optional_test_convert_assign.test | RUN | 0.114045 | 0.282485 | 0.363699 | 0.001210 | 0.001316 | 0.001312 |
| optional_test_empty_braces.test | RUN | 0.112241 | 0.283816 | 0.343754 | 0.001416 | 0.001441 | 0.001528 |
| optional_test_make_optional.test | RUN | 0.157327 | 0.441580 | 0.571987 | 0.001562 | 0.001548 | 0.001433 |
| optional_test_flat_map.test | RUN | 0.169638 | 0.518168 | 0.638665 | 0.001514 | 0.001256 | 0.001359 |
| optional_test_hash.test | RUN | 0.143569 | 0.413615 | 0.477276 | 0.001237 | 0.001425 | 0.001207 |
| optional_test_map.test | RUN | 0.177984 | 0.505989 | 0.657826 | 0.001324 | 0.001394 | 0.001350 |
| optional_test_tie.test | RUN | 0.120970 | 0.318712 | 0.383719 | 0.001434 | 0.001159 | 0.001235 |
| optional_test_ranges_find.test | RUN | 0.108613 | 0.272603 | 0.332877 | 0.001181 | 0.001208 | 0.001193 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.145874 | 0.819798 | 0.495360 | 0.001274 | 0.001483 | 0.001306 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.117577 | 0.339627 | 0.378701 | 0.001278 | 0.001377 | 0.001410 |
| optional_test_ref_assign_const_int.test | RUN | 0.118289 | 0.346403 | 0.383814 | 0.001646 | 0.000948 | 0.001324 |
| optional_test_ref_converting_ctor.test | RUN | 0.125544 | 0.499519 | 0.406176 | 0.001344 | 0.001412 | 0.001194 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.116343 | 0.325095 | 0.372064 | 0.001193 | 0.001264 | 0.001454 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.112849 | 0.298096 | 0.353062 | 0.001523 | 0.001397 | 0.001267 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.112233 | 0.294170 | 0.350360 | 0.001390 | 0.001246 | 0.001307 |
| optional_test_ref_portable_minimum.test | RUN | 0.481937 | 1.659824 | 1.250701 | 0.001198 | 0.001452 | 0.001579 |
| optional_test_ref_move.test | RUN | 0.119802 | 0.315131 | 0.367773 | 0.001203 | 0.001442 | 0.001384 |
| optional_test_ref_to_val.test | RUN | 0.144957 | 0.649158 | 0.512171 | 0.001663 | 0.001245 | 0.001459 |
| optional_test_inplace_factory.test | RUN | 0.149007 | 0.589003 | 0.471194 | 0.001620 | 0.001343 | 0.001261 |
| optional_test_io.test | RUN | 0.142560 | 0.660485 | 0.501193 | 0.001324 | 0.001278 | 0.001192 |
| optional_test_move.test | RUN | 0.135414 | 0.434356 | 0.431487 | 0.001226 | 0.001207 | 0.001470 |
| optional_test_noexcept_move.test | RUN | 0.077313 | 0.181659 | 0.218086 | 0.000519 | 0.000587 | 0.001416 |
| optional_test_cmp_none.test | RUN | 0.115309 | 0.300197 | 0.350751 | 0.001661 | 0.001282 | 0.001414 |
| optional_test_value_access.test | RUN | 0.142204 | 0.521648 | 0.473343 | 0.001309 | 0.001232 | 0.001455 |
| optional_test_emplace.test | RUN | 0.137228 | 0.512923 | 0.469003 | 0.001377 | 0.001198 | 0.001430 |
| optional_test_minimum_requirements.test | RUN | 0.124010 | 0.398946 | 0.431885 | 0.001134 | 0.001206 | 0.001315 |
| optional_test_msvc_bug_workaround.test | RUN | 0.111644 | 0.282921 | 0.347692 | 0.001409 | 0.000903 | 0.001413 |
| optional_test_member_T.test | RUN | 0.110028 | 0.270525 | 0.340898 | 0.001270 | 0.001197 | 0.001279 |
| optional_test_tc_base.test | RUN | 0.109918 | 0.276535 | 0.350418 | 0.001392 | 0.001268 | 0.001201 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.082231 | 0.185771 | 0.222791 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.079914 | 0.184941 | 0.216736 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.074469 | 0.168373 | 0.195480 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.104406 | 0.239705 | 0.308879 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.073198 | 0.169538 | 0.196427 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.074149 | 0.172681 | 0.198147 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.074419 | 0.176185 | 0.204544 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.074404 | 0.169106 | 0.202733 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.072799 | 0.167208 | 0.192800 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.072920 | 0.166092 | 0.197086 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.071793 | 0.172199 | 0.192334 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.119045 | 0.261625 | 0.342967 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.119339 | 0.260605 | 0.346684 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.071369 | 0.166409 | 0.199584 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.072248 | 0.172676 | 0.201157 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.071599 | 0.161607 | 0.195309 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.072340 | 0.166696 | 0.201171 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.071935 | 0.167540 | 0.196445 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.072872 | 0.170814 | 0.191565 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.073614 | 0.168811 | 0.196014 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.072257 | 0.168453 | 0.196933 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.070381 | 0.167789 | 0.196345 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.069209 | 0.170526 | 0.191731 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.080965 | 0.221086 | 0.289861 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.076481 | 0.188529 | 0.240324 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.072944 | 0.171025 | 0.202551 | — | — | — |
| optional_test_static_properties.test | RUN | 0.166480 | 0.386006 | 0.511113 | 0.001084 | 0.001287 | 0.001422 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.077300 | 0.185019 | 0.219771 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.079546 | 0.188020 | 0.221648 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074625 | 0.177498 | 0.206230 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.088735 | 0.231876 | 0.282236 | 0.001346 | 0.001174 | 0.001295 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.090056 | 0.232956 | 0.288825 | 0.001237 | 0.001249 | 0.001149 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.093796 | 0.228691 | 0.286168 | 0.001292 | 0.001196 | 0.001179 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.095478 | 0.237374 | 0.283278 | 0.000952 | 0.001416 | 0.000866 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.079497 | 0.150822 | 0.214862 | 0.000994 | 0.000892 | 0.000838 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.045120 | 0.140367 | 0.200039 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.998×, 1.004× | 1.000× |
| clang | 1.014× | 1.008×, 1.020× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000857s | 0.000838s | 0.000865s | byte equality observed |
| optional_test_assign.test | 10 | 0.000815s | 0.000815s | 0.000846s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000787s | 0.000811s | 0.000840s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000834s | 0.000852s | 0.000851s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000811s | 0.000796s | 0.000838s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000791s | 0.000836s | 0.000830s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000816s | 0.000863s | 0.000817s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000844s | 0.000846s | 0.000819s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000803s | 0.000827s | 0.000817s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000802s | 0.000801s | 0.000806s | byte equality observed |
| optional_test_hash.test | 10 | 0.000825s | 0.000834s | 0.000809s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000815s | 0.000848s | 0.000832s | byte equality observed |
| optional_test_io.test | 10 | 0.000821s | 0.000856s | 0.000850s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000813s | 0.000839s | 0.000818s | byte equality observed |
| optional_test_map.test | 10 | 0.000789s | 0.000820s | 0.000839s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000794s | 0.000826s | 0.000810s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000847s | 0.000847s | 0.000834s | byte equality observed |
| optional_test_move.test | 10 | 0.000813s | 0.000802s | 0.000808s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000809s | 0.000790s | 0.000823s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000369s | 0.000370s | 0.000796s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000795s | 0.000824s | 0.000797s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000802s | 0.000817s | 0.000837s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000811s | 0.000825s | 0.000830s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000841s | 0.000842s | 0.000816s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000841s | 0.000853s | 0.000793s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000827s | 0.000859s | 0.000802s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000846s | 0.000828s | 0.000814s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000862s | 0.000807s | 0.000814s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000836s | 0.000795s | 0.000830s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000854s | 0.000858s | 0.000829s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000842s | 0.000838s | 0.000788s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000808s | 0.000824s | 0.000794s | byte equality observed |
| optional_test_swap.test | 10 | 0.000834s | 0.000814s | 0.000788s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000828s | 0.000806s | 0.000799s | byte equality observed |
| optional_test_tie.test | 10 | 0.000825s | 0.000856s | 0.000794s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000840s | 0.000863s | 0.000830s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000798s | 0.000815s | 0.000770s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000824s | 0.000811s | 0.000825s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000829s | 0.000809s | 0.000780s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
