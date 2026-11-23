# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.205646 | 1.310612 | 0.756311 | 0.001140 | 0.001316 | 0.001062 |
| optional_test_assign.test | RUN | 0.102783 | 0.269641 | 0.340656 | 0.001230 | 0.001399 | 0.001275 |
| optional_test_swap.test | RUN | 0.107904 | 0.335183 | 0.372426 | 0.001207 | 0.001342 | 0.001070 |
| optional_test_constexpr.test | COMPILE | 0.072496 | 0.180526 | 0.213796 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.106167 | 0.454704 | 0.363016 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.072255 | 0.174336 | 0.210450 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.111663 | 0.347412 | 0.403515 | 0.001077 | 0.001187 | 0.001209 |
| optional_test_constructors.test | RUN | 0.240149 | 1.303725 | 1.061100 | 0.001196 | 0.001083 | 0.001166 |
| optional_test_convert_from_T.test | RUN | 0.109271 | 0.285091 | 0.364951 | 0.001471 | 0.001330 | 0.001136 |
| optional_test_convert_assign.test | RUN | 0.102428 | 0.277860 | 0.337689 | 0.001244 | 0.001154 | 0.001046 |
| optional_test_empty_braces.test | RUN | 0.106818 | 0.270730 | 0.337586 | 0.001115 | 0.001169 | 0.001086 |
| optional_test_make_optional.test | RUN | 0.149663 | 0.428116 | 0.540420 | 0.001116 | 0.001073 | 0.001081 |
| optional_test_flat_map.test | RUN | 0.160198 | 0.502093 | 0.615717 | 0.001115 | 0.001158 | 0.001055 |
| optional_test_hash.test | RUN | 0.129848 | 0.405939 | 0.450425 | 0.001189 | 0.001117 | 0.001134 |
| optional_test_map.test | RUN | 0.156977 | 0.473975 | 0.615356 | 0.001113 | 0.001079 | 0.001244 |
| optional_test_tie.test | RUN | 0.112841 | 0.311879 | 0.362915 | 0.001011 | 0.001177 | 0.001238 |
| optional_test_ranges_find.test | RUN | 0.099574 | 0.257423 | 0.329113 | 0.001072 | 0.001177 | 0.001319 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.134379 | 0.791403 | 0.494594 | 0.001114 | 0.001063 | 0.001171 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.107016 | 0.332543 | 0.365650 | 0.001090 | 0.001234 | 0.001294 |
| optional_test_ref_assign_const_int.test | RUN | 0.113137 | 0.339799 | 0.372374 | 0.001147 | 0.001143 | 0.001109 |
| optional_test_ref_converting_ctor.test | RUN | 0.120031 | 0.478845 | 0.409530 | 0.001116 | 0.001323 | 0.001082 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.107799 | 0.321926 | 0.366159 | 0.001137 | 0.001183 | 0.001130 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.108872 | 0.296763 | 0.344842 | 0.001079 | 0.001272 | 0.001136 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.104122 | 0.290093 | 0.341688 | 0.001178 | 0.001063 | 0.001083 |
| optional_test_ref_portable_minimum.test | RUN | 0.462817 | 1.594928 | 1.247261 | 0.001251 | 0.001156 | 0.001101 |
| optional_test_ref_move.test | RUN | 0.111860 | 0.300155 | 0.359266 | 0.001147 | 0.001260 | 0.001177 |
| optional_test_ref_to_val.test | RUN | 0.135717 | 0.617507 | 0.507453 | 0.001149 | 0.001244 | 0.001179 |
| optional_test_inplace_factory.test | RUN | 0.134815 | 0.576639 | 0.453058 | 0.001141 | 0.001154 | 0.001112 |
| optional_test_io.test | RUN | 0.132479 | 0.634739 | 0.485185 | 0.001243 | 0.001293 | 0.001280 |
| optional_test_move.test | RUN | 0.124578 | 0.419258 | 0.425207 | 0.001195 | 0.001202 | 0.001069 |
| optional_test_noexcept_move.test | RUN | 0.071445 | 0.176312 | 0.205551 | 0.000503 | 0.000518 | 0.000965 |
| optional_test_cmp_none.test | RUN | 0.106780 | 0.291679 | 0.345170 | 0.001111 | 0.001543 | 0.001152 |
| optional_test_value_access.test | RUN | 0.128948 | 0.506179 | 0.458740 | 0.001171 | 0.001084 | 0.001161 |
| optional_test_emplace.test | RUN | 0.128708 | 0.496376 | 0.459545 | 0.001282 | 0.001290 | 0.001092 |
| optional_test_minimum_requirements.test | RUN | 0.119890 | 0.394802 | 0.412648 | 0.001045 | 0.001108 | 0.001107 |
| optional_test_msvc_bug_workaround.test | RUN | 0.106014 | 0.268507 | 0.336530 | 0.000825 | 0.001271 | 0.001366 |
| optional_test_member_T.test | RUN | 0.101673 | 0.268437 | 0.331480 | 0.001019 | 0.001254 | 0.001127 |
| optional_test_tc_base.test | RUN | 0.103082 | 0.266162 | 0.333625 | 0.000911 | 0.001297 | 0.001086 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.076175 | 0.183401 | 0.225256 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.073691 | 0.178537 | 0.208241 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.069169 | 0.165774 | 0.194992 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.090231 | 0.228621 | 0.304424 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.066674 | 0.167403 | 0.188958 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.067747 | 0.167834 | 0.194842 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.069849 | 0.167682 | 0.197507 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.068023 | 0.162054 | 0.190863 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.067567 | 0.164893 | 0.190356 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.068642 | 0.159320 | 0.192082 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.063624 | 0.166725 | 0.191169 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.112931 | 0.263959 | 0.336961 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.112893 | 0.266147 | 0.338503 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.063832 | 0.166348 | 0.191559 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.064990 | 0.170293 | 0.195854 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.064791 | 0.162453 | 0.192182 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.068871 | 0.165344 | 0.195353 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.066080 | 0.163472 | 0.196350 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.063269 | 0.162652 | 0.194783 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.064298 | 0.163856 | 0.203927 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.066460 | 0.164400 | 0.196848 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.066745 | 0.164560 | 0.199823 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.066810 | 0.166355 | 0.199270 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.088341 | 0.218955 | 0.290371 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.069943 | 0.182771 | 0.246790 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.067424 | 0.167557 | 0.202404 | — | — | — |
| optional_test_static_properties.test | RUN | 0.161735 | 0.374694 | 0.507106 | 0.001156 | 0.001117 | 0.001145 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.074548 | 0.181241 | 0.217344 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.074783 | 0.183314 | 0.217566 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.072757 | 0.171609 | 0.203645 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.085338 | 0.225187 | 0.284808 | 0.001227 | 0.001226 | 0.001070 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.082531 | 0.226340 | 0.275516 | 0.000927 | 0.001146 | 0.001112 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.084112 | 0.225900 | 0.277205 | 0.001072 | 0.001031 | 0.000943 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.088061 | 0.231007 | 0.279326 | 0.000836 | 0.001218 | 0.000827 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.074980 | 0.132154 | 0.201549 | 0.000809 | 0.000808 | 0.000791 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.038407 | 0.138946 | 0.189760 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.989×, 1.000× | 1.015× |
| clang | 1.015× | 1.021×, 1.009× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000859s | 0.000869s | 0.000862s | byte equality observed |
| optional_test_assign.test | 10 | 0.000809s | 0.000788s | 0.000811s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000798s | 0.000785s | 0.000816s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000832s | 0.000803s | 0.000816s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000827s | 0.000808s | 0.000779s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000808s | 0.000807s | 0.000823s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000822s | 0.000786s | 0.000819s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000837s | 0.000813s | 0.000827s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000809s | 0.000790s | 0.000818s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000819s | 0.000807s | 0.000804s | byte equality observed |
| optional_test_hash.test | 10 | 0.000837s | 0.000814s | 0.000805s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000823s | 0.000816s | 0.000814s | byte equality observed |
| optional_test_io.test | 10 | 0.000840s | 0.000825s | 0.000845s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000794s | 0.000831s | 0.000845s | byte equality observed |
| optional_test_map.test | 10 | 0.000806s | 0.000799s | 0.000788s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000784s | 0.000845s | 0.000840s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000829s | 0.000820s | 0.000861s | byte equality observed |
| optional_test_move.test | 10 | 0.000808s | 0.000820s | 0.000793s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000809s | 0.000794s | 0.000791s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000368s | 0.000373s | 0.000797s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000813s | 0.000799s | 0.000812s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000832s | 0.000785s | 0.000836s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000820s | 0.000799s | 0.000839s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000834s | 0.000797s | 0.000844s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000817s | 0.000791s | 0.000795s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000807s | 0.000807s | 0.000813s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000819s | 0.000811s | 0.000809s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000809s | 0.000805s | 0.000826s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000825s | 0.000787s | 0.000807s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000843s | 0.000822s | 0.000843s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000832s | 0.000812s | 0.000844s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000808s | 0.000806s | 0.000839s | byte equality observed |
| optional_test_swap.test | 10 | 0.000802s | 0.000841s | 0.000835s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000808s | 0.000844s | 0.000803s | byte equality observed |
| optional_test_tie.test | 10 | 0.000820s | 0.000792s | 0.000822s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000851s | 0.000838s | 0.000821s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000790s | 0.000774s | 0.000817s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000784s | 0.000823s | 0.000821s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000805s | 0.000812s | 0.000826s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
