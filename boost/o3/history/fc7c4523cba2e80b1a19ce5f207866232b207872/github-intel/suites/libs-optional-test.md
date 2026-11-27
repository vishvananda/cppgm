# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.211034 | 1.313305 | 0.743262 | 0.001328 | 0.001285 | 0.001269 |
| optional_test_assign.test | RUN | 0.103636 | 0.269526 | 0.339052 | 0.001161 | 0.001341 | 0.001411 |
| optional_test_swap.test | RUN | 0.111796 | 0.334280 | 0.372076 | 0.001151 | 0.001061 | 0.001153 |
| optional_test_constexpr.test | COMPILE | 0.074279 | 0.182057 | 0.215115 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.112929 | 0.450819 | 0.355986 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.075637 | 0.173151 | 0.207908 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.124679 | 0.348706 | 0.416071 | 0.001120 | 0.001205 | 0.001185 |
| optional_test_constructors.test | RUN | 0.251113 | 1.300705 | 1.090359 | 0.001102 | 0.001391 | 0.001327 |
| optional_test_convert_from_T.test | RUN | 0.111679 | 0.290059 | 0.361416 | 0.001276 | 0.001164 | 0.001204 |
| optional_test_convert_assign.test | RUN | 0.113400 | 0.279527 | 0.338765 | 0.001090 | 0.001323 | 0.001128 |
| optional_test_empty_braces.test | RUN | 0.108633 | 0.273659 | 0.352078 | 0.001176 | 0.001371 | 0.001390 |
| optional_test_make_optional.test | RUN | 0.152078 | 0.427738 | 0.550326 | 0.001351 | 0.001103 | 0.001321 |
| optional_test_flat_map.test | RUN | 0.161338 | 0.507843 | 0.623954 | 0.001210 | 0.001151 | 0.001273 |
| optional_test_hash.test | RUN | 0.133137 | 0.407912 | 0.443822 | 0.001327 | 0.001213 | 0.001264 |
| optional_test_map.test | RUN | 0.160426 | 0.479297 | 0.651450 | 0.001016 | 0.001259 | 0.001150 |
| optional_test_tie.test | RUN | 0.115997 | 0.310102 | 0.366140 | 0.001103 | 0.001140 | 0.001268 |
| optional_test_ranges_find.test | RUN | 0.102794 | 0.262986 | 0.321120 | 0.001168 | 0.001168 | 0.001180 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.135564 | 0.805265 | 0.491558 | 0.000913 | 0.001350 | 0.001308 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.103668 | 0.336468 | 0.363534 | 0.001158 | 0.001282 | 0.001280 |
| optional_test_ref_assign_const_int.test | RUN | 0.113735 | 0.344464 | 0.370055 | 0.001040 | 0.001388 | 0.001258 |
| optional_test_ref_converting_ctor.test | RUN | 0.121174 | 0.484411 | 0.401847 | 0.001105 | 0.001363 | 0.001196 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.110261 | 0.319018 | 0.361421 | 0.001282 | 0.001230 | 0.001255 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.106996 | 0.294196 | 0.338800 | 0.001226 | 0.001152 | 0.001262 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.108410 | 0.288097 | 0.333454 | 0.001356 | 0.001081 | 0.001272 |
| optional_test_ref_portable_minimum.test | RUN | 0.456920 | 1.610438 | 1.250372 | 0.000976 | 0.001162 | 0.001172 |
| optional_test_ref_move.test | RUN | 0.113612 | 0.302582 | 0.362149 | 0.001208 | 0.001152 | 0.001229 |
| optional_test_ref_to_val.test | RUN | 0.142771 | 0.624895 | 0.516420 | 0.001308 | 0.001189 | 0.001094 |
| optional_test_inplace_factory.test | RUN | 0.144806 | 0.576794 | 0.469219 | 0.001264 | 0.001193 | 0.001152 |
| optional_test_io.test | RUN | 0.135601 | 0.632860 | 0.471616 | 0.001185 | 0.001317 | 0.001201 |
| optional_test_move.test | RUN | 0.124591 | 0.430550 | 0.429143 | 0.001318 | 0.001292 | 0.001244 |
| optional_test_noexcept_move.test | RUN | 0.073681 | 0.182532 | 0.222153 | 0.000420 | 0.000482 | 0.001355 |
| optional_test_cmp_none.test | RUN | 0.107642 | 0.297538 | 0.347268 | 0.001294 | 0.001221 | 0.001359 |
| optional_test_value_access.test | RUN | 0.127145 | 0.506349 | 0.466350 | 0.001251 | 0.001336 | 0.001174 |
| optional_test_emplace.test | RUN | 0.130898 | 0.498942 | 0.463048 | 0.001318 | 0.001298 | 0.001154 |
| optional_test_minimum_requirements.test | RUN | 0.118513 | 0.393007 | 0.417231 | 0.001149 | 0.001322 | 0.001236 |
| optional_test_msvc_bug_workaround.test | RUN | 0.106826 | 0.273846 | 0.323672 | 0.001076 | 0.001260 | 0.001198 |
| optional_test_member_T.test | RUN | 0.105142 | 0.267059 | 0.327500 | 0.001122 | 0.001194 | 0.001086 |
| optional_test_tc_base.test | RUN | 0.105115 | 0.273714 | 0.325812 | 0.001182 | 0.001433 | 0.001161 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.075586 | 0.186890 | 0.223930 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.071803 | 0.186211 | 0.211220 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.068719 | 0.168471 | 0.188404 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.095210 | 0.233993 | 0.305417 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.066055 | 0.165501 | 0.194809 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.065267 | 0.169620 | 0.199196 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.070414 | 0.158907 | 0.206569 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.069704 | 0.166167 | 0.192970 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.066689 | 0.166471 | 0.197513 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.068601 | 0.163747 | 0.196634 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.071845 | 0.167134 | 0.191581 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.111148 | 0.258468 | 0.343835 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.114397 | 0.266727 | 0.332174 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.067706 | 0.165386 | 0.193608 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.069145 | 0.169176 | 0.197909 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.066607 | 0.161656 | 0.191717 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.067858 | 0.164340 | 0.205175 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.069898 | 0.165913 | 0.199632 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.069279 | 0.165942 | 0.192602 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.065988 | 0.159356 | 0.198955 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.070256 | 0.161061 | 0.193845 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.065214 | 0.161478 | 0.201410 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.067651 | 0.161887 | 0.200046 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.093614 | 0.222861 | 0.288558 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.073958 | 0.180716 | 0.246946 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.070780 | 0.170811 | 0.204544 | — | — | — |
| optional_test_static_properties.test | RUN | 0.159857 | 0.380651 | 0.512166 | 0.001207 | 0.001239 | 0.001166 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.073059 | 0.181132 | 0.216388 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.073899 | 0.183945 | 0.223170 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.070759 | 0.174842 | 0.203135 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.085343 | 0.224542 | 0.277125 | 0.001111 | 0.001432 | 0.001173 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.083510 | 0.229615 | 0.282348 | 0.001144 | 0.001255 | 0.001072 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.082173 | 0.224585 | 0.279465 | 0.001126 | 0.001182 | 0.001210 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.086554 | 0.230117 | 0.283178 | 0.001157 | 0.000922 | 0.000826 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.064431 | 0.176641 | 0.210527 | 0.000878 | 0.000820 | 0.000779 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.051534 | 0.159205 | 0.199239 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.986×, 1.001× | 0.977× |
| clang | 1.008× | 1.009×, 1.007× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000844s | 0.000863s | 0.000849s | byte equality observed |
| optional_test_assign.test | 10 | 0.000800s | 0.000800s | 0.000824s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000824s | 0.000814s | 0.000801s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000826s | 0.000807s | 0.000792s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000820s | 0.000826s | 0.000812s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000805s | 0.000852s | 0.000787s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000819s | 0.000807s | 0.000831s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000845s | 0.000815s | 0.000833s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000812s | 0.000825s | 0.000799s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000808s | 0.000793s | 0.000796s | byte equality observed |
| optional_test_hash.test | 10 | 0.000798s | 0.000816s | 0.000815s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000807s | 0.000798s | 0.000786s | byte equality observed |
| optional_test_io.test | 10 | 0.000806s | 0.000822s | 0.000807s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000816s | 0.000812s | 0.000781s | byte equality observed |
| optional_test_map.test | 10 | 0.000804s | 0.000810s | 0.000798s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000798s | 0.000784s | 0.000803s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000826s | 0.000825s | 0.000816s | byte equality observed |
| optional_test_move.test | 10 | 0.000806s | 0.000794s | 0.000798s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000805s | 0.000800s | 0.000805s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000364s | 0.000363s | 0.000773s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000783s | 0.000797s | 0.000812s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000825s | 0.000802s | 0.000811s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000829s | 0.000794s | 0.000799s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000805s | 0.000779s | 0.000809s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000830s | 0.000803s | 0.000810s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000811s | 0.000788s | 0.000815s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000794s | 0.000800s | 0.000807s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000818s | 0.000793s | 0.000813s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000805s | 0.000831s | 0.000794s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000839s | 0.000859s | 0.000823s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000793s | 0.000806s | 0.000802s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000804s | 0.000800s | 0.000813s | byte equality observed |
| optional_test_swap.test | 10 | 0.000813s | 0.000795s | 0.000826s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000795s | 0.000797s | 0.000783s | byte equality observed |
| optional_test_tie.test | 5 | 0.000811s | 0.000811s | 0.000806s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000842s | 0.000819s | 0.000821s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000814s | 0.000776s | 0.000781s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000783s | 0.000785s | 0.000791s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000787s | 0.000777s | 0.000810s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
