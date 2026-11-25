# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.214537 | 1.343626 | 0.756622 | 0.001361 | 0.001361 | 0.001370 |
| optional_test_assign.test | RUN | 0.107103 | 0.276472 | 0.337625 | 0.001428 | 0.001504 | 0.001324 |
| optional_test_swap.test | RUN | 0.115455 | 0.344070 | 0.370656 | 0.001283 | 0.001232 | 0.001109 |
| optional_test_constexpr.test | COMPILE | 0.077366 | 0.184726 | 0.215079 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.115313 | 0.451024 | 0.349409 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.075463 | 0.178251 | 0.213232 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.123506 | 0.355030 | 0.417982 | 0.001554 | 0.001440 | 0.001182 |
| optional_test_constructors.test | RUN | 0.258779 | 1.344997 | 1.078657 | 0.001217 | 0.001314 | 0.001260 |
| optional_test_convert_from_T.test | RUN | 0.116984 | 0.292984 | 0.364379 | 0.001473 | 0.001449 | 0.001160 |
| optional_test_convert_assign.test | RUN | 0.113834 | 0.284876 | 0.343478 | 0.001275 | 0.001273 | 0.001148 |
| optional_test_empty_braces.test | RUN | 0.111466 | 0.279512 | 0.352423 | 0.001351 | 0.001392 | 0.001193 |
| optional_test_make_optional.test | RUN | 0.158899 | 0.434291 | 0.554965 | 0.001391 | 0.001125 | 0.001235 |
| optional_test_flat_map.test | RUN | 0.165102 | 0.512460 | 0.629284 | 0.001281 | 0.001393 | 0.001169 |
| optional_test_hash.test | RUN | 0.135671 | 0.404408 | 0.452930 | 0.001249 | 0.001181 | 0.001171 |
| optional_test_map.test | RUN | 0.171569 | 0.484566 | 0.649341 | 0.001301 | 0.001174 | 0.001363 |
| optional_test_tie.test | RUN | 0.117982 | 0.320640 | 0.370777 | 0.001396 | 0.001057 | 0.001220 |
| optional_test_ranges_find.test | RUN | 0.105632 | 0.268584 | 0.327312 | 0.001013 | 0.001213 | 0.001166 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.138801 | 0.805575 | 0.495657 | 0.001277 | 0.001065 | 0.001422 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.101944 | 0.337219 | 0.365476 | 0.001337 | 0.001300 | 0.001302 |
| optional_test_ref_assign_const_int.test | RUN | 0.114956 | 0.344152 | 0.379232 | 0.001324 | 0.001163 | 0.001205 |
| optional_test_ref_converting_ctor.test | RUN | 0.125460 | 0.491849 | 0.420732 | 0.001382 | 0.001378 | 0.001168 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.115685 | 0.321003 | 0.368637 | 0.001133 | 0.001177 | 0.001183 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.111573 | 0.300197 | 0.344605 | 0.001316 | 0.001338 | 0.001223 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.107064 | 0.292540 | 0.345194 | 0.001272 | 0.001157 | 0.001184 |
| optional_test_ref_portable_minimum.test | RUN | 0.476012 | 1.628071 | 1.250731 | 0.001279 | 0.001374 | 0.001167 |
| optional_test_ref_move.test | RUN | 0.118971 | 0.311728 | 0.362538 | 0.001387 | 0.001312 | 0.001248 |
| optional_test_ref_to_val.test | RUN | 0.145343 | 0.633013 | 0.503831 | 0.001392 | 0.001288 | 0.001185 |
| optional_test_inplace_factory.test | RUN | 0.141310 | 0.575214 | 0.470375 | 0.001234 | 0.001445 | 0.001170 |
| optional_test_io.test | RUN | 0.143069 | 0.652252 | 0.488820 | 0.001137 | 0.001469 | 0.001186 |
| optional_test_move.test | RUN | 0.126086 | 0.425421 | 0.419083 | 0.001314 | 0.001187 | 0.001320 |
| optional_test_noexcept_move.test | RUN | 0.078396 | 0.183909 | 0.214357 | 0.000535 | 0.000518 | 0.001127 |
| optional_test_cmp_none.test | RUN | 0.114026 | 0.298416 | 0.342981 | 0.001303 | 0.001382 | 0.001370 |
| optional_test_value_access.test | RUN | 0.136546 | 0.511948 | 0.475476 | 0.001234 | 0.001371 | 0.001234 |
| optional_test_emplace.test | RUN | 0.136892 | 0.498678 | 0.485679 | 0.001253 | 0.001288 | 0.001414 |
| optional_test_minimum_requirements.test | RUN | 0.121796 | 0.392801 | 0.407942 | 0.001342 | 0.001183 | 0.001358 |
| optional_test_msvc_bug_workaround.test | RUN | 0.109751 | 0.270358 | 0.341343 | 0.001382 | 0.001118 | 0.001250 |
| optional_test_member_T.test | RUN | 0.110642 | 0.269966 | 0.337197 | 0.001147 | 0.001322 | 0.001209 |
| optional_test_tc_base.test | RUN | 0.111720 | 0.273959 | 0.336658 | 0.001332 | 0.001186 | 0.001202 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.085016 | 0.186241 | 0.225184 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.077341 | 0.180987 | 0.217403 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.073140 | 0.167627 | 0.197048 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.098588 | 0.238550 | 0.309294 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.070629 | 0.170049 | 0.198029 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.071316 | 0.174760 | 0.201032 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.071746 | 0.170420 | 0.203533 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.071437 | 0.164886 | 0.199322 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.069696 | 0.165022 | 0.196548 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.069791 | 0.168461 | 0.198222 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070630 | 0.167876 | 0.194344 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.116687 | 0.266433 | 0.342728 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.116107 | 0.266382 | 0.338176 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.068649 | 0.171227 | 0.197389 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.072513 | 0.173148 | 0.202023 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.070771 | 0.165167 | 0.193542 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.072695 | 0.165926 | 0.196700 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.070604 | 0.167342 | 0.195118 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.071809 | 0.165913 | 0.197690 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.071852 | 0.164750 | 0.199275 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.069749 | 0.163112 | 0.193617 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.070613 | 0.168436 | 0.194848 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.071381 | 0.170585 | 0.193997 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.098428 | 0.224208 | 0.292082 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.076387 | 0.187932 | 0.240783 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.072328 | 0.168290 | 0.201312 | — | — | — |
| optional_test_static_properties.test | RUN | 0.169112 | 0.382744 | 0.510970 | 0.001286 | 0.001175 | 0.001237 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.076960 | 0.186340 | 0.217872 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.078037 | 0.189157 | 0.220907 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074814 | 0.175327 | 0.208611 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.088746 | 0.230744 | 0.287320 | 0.001409 | 0.001340 | 0.001250 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.089785 | 0.236040 | 0.284666 | 0.001154 | 0.001251 | 0.000919 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.090625 | 0.226623 | 0.279420 | 0.001287 | 0.001145 | 0.001150 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.091459 | 0.238405 | 0.285140 | 0.000965 | 0.001410 | 0.001127 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.070274 | 0.154306 | 0.229163 | 0.000963 | 0.000887 | 0.000859 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.049708 | 0.147949 | 0.187363 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.984×, 1.005× | 0.993× |
| clang | 1.010× | 1.007×, 1.012× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000897s | 0.000872s | 0.000866s | byte equality observed |
| optional_test_assign.test | 10 | 0.000810s | 0.000802s | 0.000803s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000808s | 0.000787s | 0.000802s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000827s | 0.000801s | 0.000808s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000826s | 0.000811s | 0.000834s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000847s | 0.000830s | 0.000819s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000820s | 0.000832s | 0.000850s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000831s | 0.000836s | 0.000845s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000805s | 0.000817s | 0.000817s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000802s | 0.000810s | 0.000811s | byte equality observed |
| optional_test_hash.test | 10 | 0.000841s | 0.000808s | 0.000825s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000815s | 0.000821s | 0.000827s | byte equality observed |
| optional_test_io.test | 10 | 0.000861s | 0.000840s | 0.000835s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000831s | 0.000801s | 0.000823s | byte equality observed |
| optional_test_map.test | 10 | 0.000825s | 0.000816s | 0.000786s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000834s | 0.000836s | 0.000817s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000862s | 0.000868s | 0.000840s | byte equality observed |
| optional_test_move.test | 10 | 0.000819s | 0.000826s | 0.000822s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000803s | 0.000798s | 0.000817s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000366s | 0.000362s | 0.000811s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000822s | 0.000826s | 0.000781s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000837s | 0.000822s | 0.000822s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000834s | 0.000840s | 0.000824s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000824s | 0.000845s | 0.000844s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000822s | 0.000783s | 0.000860s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000819s | 0.000800s | 0.000843s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000820s | 0.000812s | 0.000859s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000832s | 0.000815s | 0.000820s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000811s | 0.000798s | 0.000811s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000857s | 0.000822s | 0.000842s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000814s | 0.000809s | 0.000836s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000802s | 0.000796s | 0.000805s | byte equality observed |
| optional_test_swap.test | 10 | 0.000817s | 0.000797s | 0.000831s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000816s | 0.000860s | 0.000800s | byte equality observed |
| optional_test_tie.test | 10 | 0.000803s | 0.000803s | 0.000830s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000854s | 0.000842s | 0.000850s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000813s | 0.000781s | 0.000799s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000796s | 0.000790s | 0.000808s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000808s | 0.000809s | 0.000790s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
