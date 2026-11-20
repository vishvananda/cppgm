# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.203293 | 1.357561 | 0.757031 | 0.001079 | 0.001410 | 0.001227 |
| optional_test_assign.test | RUN | 0.101566 | 0.275731 | 0.332977 | 0.001267 | 0.001381 | 0.001176 |
| optional_test_swap.test | RUN | 0.110130 | 0.345033 | 0.373090 | 0.001164 | 0.001304 | 0.001235 |
| optional_test_constexpr.test | COMPILE | 0.073370 | 0.183160 | 0.214166 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.107278 | 0.460302 | 0.348682 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.071191 | 0.182327 | 0.207639 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.118394 | 0.359410 | 0.400440 | 0.001166 | 0.001198 | 0.001170 |
| optional_test_constructors.test | RUN | 0.246923 | 1.364048 | 1.077425 | 0.001019 | 0.001215 | 0.001078 |
| optional_test_convert_from_T.test | RUN | 0.101010 | 0.291161 | 0.365288 | 0.001160 | 0.001320 | 0.001077 |
| optional_test_convert_assign.test | RUN | 0.107934 | 0.278763 | 0.335265 | 0.001172 | 0.001161 | 0.001098 |
| optional_test_empty_braces.test | RUN | 0.100940 | 0.280179 | 0.337512 | 0.001248 | 0.001450 | 0.001090 |
| optional_test_make_optional.test | RUN | 0.153476 | 0.436037 | 0.548441 | 0.001143 | 0.001310 | 0.001120 |
| optional_test_flat_map.test | RUN | 0.157834 | 0.503442 | 0.614267 | 0.001020 | 0.001264 | 0.001217 |
| optional_test_hash.test | RUN | 0.130550 | 0.412796 | 0.457452 | 0.001231 | 0.001308 | 0.001107 |
| optional_test_map.test | RUN | 0.158518 | 0.496379 | 0.635587 | 0.001165 | 0.001366 | 0.001076 |
| optional_test_tie.test | RUN | 0.108341 | 0.314801 | 0.373086 | 0.001339 | 0.001238 | 0.001096 |
| optional_test_ranges_find.test | RUN | 0.102458 | 0.269547 | 0.327201 | 0.001071 | 0.001258 | 0.001085 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.132113 | 0.819994 | 0.481635 | 0.001036 | 0.001170 | 0.001118 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.105970 | 0.343530 | 0.368337 | 0.001244 | 0.001322 | 0.001117 |
| optional_test_ref_assign_const_int.test | RUN | 0.109537 | 0.358126 | 0.370629 | 0.001247 | 0.001172 | 0.001133 |
| optional_test_ref_converting_ctor.test | RUN | 0.120401 | 0.490824 | 0.410573 | 0.001137 | 0.001506 | 0.001045 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.109650 | 0.327145 | 0.364790 | 0.001107 | 0.001290 | 0.001277 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.105551 | 0.301430 | 0.351567 | 0.001191 | 0.001275 | 0.001125 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.100755 | 0.291357 | 0.341734 | 0.001210 | 0.001215 | 0.001054 |
| optional_test_ref_portable_minimum.test | RUN | 0.458975 | 1.658378 | 1.237052 | 0.001190 | 0.001310 | 0.001080 |
| optional_test_ref_move.test | RUN | 0.113745 | 0.307795 | 0.366264 | 0.001132 | 0.001446 | 0.001218 |
| optional_test_ref_to_val.test | RUN | 0.133891 | 0.647185 | 0.503413 | 0.001400 | 0.001278 | 0.001223 |
| optional_test_inplace_factory.test | RUN | 0.141202 | 0.594433 | 0.467356 | 0.001182 | 0.001605 | 0.001116 |
| optional_test_io.test | RUN | 0.133622 | 0.660268 | 0.466585 | 0.001092 | 0.001345 | 0.001052 |
| optional_test_move.test | RUN | 0.119386 | 0.430791 | 0.411411 | 0.001265 | 0.001304 | 0.001089 |
| optional_test_noexcept_move.test | RUN | 0.073504 | 0.187906 | 0.208278 | 0.000483 | 0.000499 | 0.001050 |
| optional_test_cmp_none.test | RUN | 0.106237 | 0.303234 | 0.345512 | 0.001185 | 0.001409 | 0.001125 |
| optional_test_value_access.test | RUN | 0.129779 | 0.521098 | 0.465071 | 0.001230 | 0.001273 | 0.001153 |
| optional_test_emplace.test | RUN | 0.126915 | 0.513447 | 0.465227 | 0.001272 | 0.001666 | 0.001162 |
| optional_test_minimum_requirements.test | RUN | 0.116744 | 0.401592 | 0.414157 | 0.001237 | 0.001382 | 0.001093 |
| optional_test_msvc_bug_workaround.test | RUN | 0.103515 | 0.275627 | 0.337583 | 0.001081 | 0.001177 | 0.001100 |
| optional_test_member_T.test | RUN | 0.103339 | 0.274862 | 0.327123 | 0.000920 | 0.001080 | 0.001093 |
| optional_test_tc_base.test | RUN | 0.104279 | 0.275205 | 0.333291 | 0.001147 | 0.001262 | 0.001111 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.082226 | 0.190471 | 0.221364 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.071809 | 0.182526 | 0.205313 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.069117 | 0.169333 | 0.187854 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.090077 | 0.238469 | 0.301792 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.065603 | 0.167601 | 0.194143 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.066930 | 0.172756 | 0.199567 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.068457 | 0.170849 | 0.201204 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.066176 | 0.168673 | 0.199561 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.064707 | 0.170015 | 0.192499 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.067069 | 0.171293 | 0.193172 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.066161 | 0.167341 | 0.193360 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.108223 | 0.270410 | 0.335358 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.111703 | 0.267236 | 0.337465 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.064953 | 0.171819 | 0.190694 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.069045 | 0.174066 | 0.195708 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.061757 | 0.170866 | 0.188429 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.067292 | 0.168546 | 0.196653 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.067043 | 0.169363 | 0.189901 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.067316 | 0.172822 | 0.193997 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.066309 | 0.169809 | 0.193222 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.063859 | 0.169710 | 0.195162 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.063429 | 0.170550 | 0.190002 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.064468 | 0.171555 | 0.191633 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.088118 | 0.225078 | 0.284411 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.071620 | 0.190569 | 0.237310 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.067346 | 0.171617 | 0.202132 | — | — | — |
| optional_test_static_properties.test | RUN | 0.157073 | 0.390245 | 0.498979 | 0.001077 | 0.001493 | 0.001149 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.069955 | 0.187577 | 0.211986 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.072706 | 0.190074 | 0.217474 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.068428 | 0.178210 | 0.201247 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.081259 | 0.237046 | 0.274981 | 0.001131 | 0.001383 | 0.001036 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.080775 | 0.237455 | 0.280605 | 0.001014 | 0.001248 | 0.001099 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.081072 | 0.234444 | 0.280606 | 0.000998 | 0.001122 | 0.001055 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.083350 | 0.240372 | 0.277240 | 0.000818 | 0.001590 | 0.001168 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.062158 | 0.148490 | 0.176455 | 0.000796 | 0.001136 | 0.000823 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.053013 | 0.166308 | 0.190406 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.004×, 1.005× | 0.992× |
| clang | 1.007× | 1.006×, 1.008× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000871s | 0.000866s | 0.000868s | byte equality observed |
| optional_test_assign.test | 10 | 0.000841s | 0.000807s | 0.000793s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000803s | 0.000822s | 0.000814s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000817s | 0.000834s | 0.000817s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000807s | 0.000837s | 0.000837s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000807s | 0.000831s | 0.000838s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000806s | 0.000826s | 0.000776s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000827s | 0.000828s | 0.000808s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000816s | 0.000832s | 0.000820s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000816s | 0.000834s | 0.000834s | byte equality observed |
| optional_test_hash.test | 10 | 0.000837s | 0.000794s | 0.000832s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000831s | 0.000805s | 0.000834s | byte equality observed |
| optional_test_io.test | 10 | 0.000826s | 0.000810s | 0.000859s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000803s | 0.000832s | 0.000841s | byte equality observed |
| optional_test_map.test | 10 | 0.000810s | 0.000824s | 0.000821s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000817s | 0.000831s | 0.000824s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000852s | 0.000869s | 0.000850s | byte equality observed |
| optional_test_move.test | 10 | 0.000822s | 0.000829s | 0.000802s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000823s | 0.000804s | 0.000790s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000362s | 0.000361s | 0.000795s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000836s | 0.000815s | 0.000798s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000790s | 0.000818s | 0.000813s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000815s | 0.000813s | 0.000803s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000822s | 0.000809s | 0.000818s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000805s | 0.000831s | 0.000811s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000817s | 0.000824s | 0.000811s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000816s | 0.000815s | 0.000822s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000822s | 0.000819s | 0.000810s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000846s | 0.000816s | 0.000812s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000850s | 0.000830s | 0.000823s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000844s | 0.000797s | 0.000840s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000815s | 0.000804s | 0.000795s | byte equality observed |
| optional_test_swap.test | 10 | 0.000840s | 0.000806s | 0.000831s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000834s | 0.000835s | 0.000810s | byte equality observed |
| optional_test_tie.test | 10 | 0.000808s | 0.000826s | 0.000831s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000826s | 0.000848s | 0.000837s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000783s | 0.000807s | 0.000801s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000807s | 0.000785s | 0.000802s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000806s | 0.000820s | 0.000814s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
