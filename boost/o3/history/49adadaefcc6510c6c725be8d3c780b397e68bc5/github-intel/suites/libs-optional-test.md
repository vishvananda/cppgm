# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.208786 | 1.320770 | 0.743162 | 0.001153 | 0.001210 | 0.001243 |
| optional_test_assign.test | RUN | 0.103603 | 0.269672 | 0.333666 | 0.001200 | 0.001224 | 0.000993 |
| optional_test_swap.test | RUN | 0.108771 | 0.340327 | 0.363155 | 0.001185 | 0.001168 | 0.001040 |
| optional_test_constexpr.test | COMPILE | 0.073963 | 0.181018 | 0.211467 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.105722 | 0.451384 | 0.358170 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.071111 | 0.175973 | 0.205063 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.116944 | 0.348096 | 0.409813 | 0.001056 | 0.001233 | 0.001057 |
| optional_test_constructors.test | RUN | 0.244894 | 1.311880 | 1.065778 | 0.000853 | 0.001181 | 0.001122 |
| optional_test_convert_from_T.test | RUN | 0.109608 | 0.289256 | 0.346962 | 0.001153 | 0.001249 | 0.001060 |
| optional_test_convert_assign.test | RUN | 0.104996 | 0.271866 | 0.348421 | 0.001058 | 0.001211 | 0.001176 |
| optional_test_empty_braces.test | RUN | 0.104907 | 0.275310 | 0.332324 | 0.001269 | 0.001326 | 0.001125 |
| optional_test_make_optional.test | RUN | 0.143502 | 0.432229 | 0.527618 | 0.001377 | 0.001147 | 0.001067 |
| optional_test_flat_map.test | RUN | 0.159604 | 0.502612 | 0.612335 | 0.001328 | 0.001236 | 0.001017 |
| optional_test_hash.test | RUN | 0.127755 | 0.402550 | 0.440360 | 0.001228 | 0.001205 | 0.001030 |
| optional_test_map.test | RUN | 0.162821 | 0.484920 | 0.625364 | 0.001320 | 0.001238 | 0.001080 |
| optional_test_tie.test | RUN | 0.118126 | 0.309444 | 0.354364 | 0.001145 | 0.001211 | 0.001119 |
| optional_test_ranges_find.test | RUN | 0.103467 | 0.265491 | 0.326696 | 0.001234 | 0.001374 | 0.000985 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.136518 | 0.793593 | 0.472487 | 0.001218 | 0.001278 | 0.001084 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.107334 | 0.335379 | 0.354656 | 0.001229 | 0.001290 | 0.001041 |
| optional_test_ref_assign_const_int.test | RUN | 0.113589 | 0.350600 | 0.369971 | 0.001207 | 0.001150 | 0.001147 |
| optional_test_ref_converting_ctor.test | RUN | 0.125361 | 0.482146 | 0.402317 | 0.001236 | 0.001286 | 0.001057 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.109205 | 0.319655 | 0.358113 | 0.001159 | 0.001045 | 0.001007 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.106180 | 0.293125 | 0.335339 | 0.001368 | 0.001081 | 0.001055 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.104209 | 0.288292 | 0.337012 | 0.001320 | 0.001185 | 0.001043 |
| optional_test_ref_portable_minimum.test | RUN | 0.464875 | 1.613692 | 1.216676 | 0.001234 | 0.001335 | 0.001224 |
| optional_test_ref_move.test | RUN | 0.114376 | 0.311138 | 0.352221 | 0.001126 | 0.001244 | 0.001170 |
| optional_test_ref_to_val.test | RUN | 0.137351 | 0.630668 | 0.497977 | 0.001153 | 0.001162 | 0.001139 |
| optional_test_inplace_factory.test | RUN | 0.138403 | 0.573840 | 0.452303 | 0.001372 | 0.001235 | 0.001109 |
| optional_test_io.test | RUN | 0.135711 | 0.641594 | 0.486362 | 0.001251 | 0.001262 | 0.001250 |
| optional_test_move.test | RUN | 0.123975 | 0.419900 | 0.416625 | 0.001117 | 0.001196 | 0.001059 |
| optional_test_noexcept_move.test | RUN | 0.072597 | 0.179542 | 0.206261 | 0.000471 | 0.000509 | 0.001096 |
| optional_test_cmp_none.test | RUN | 0.103867 | 0.291910 | 0.338773 | 0.001090 | 0.001265 | 0.001095 |
| optional_test_value_access.test | RUN | 0.131876 | 0.511212 | 0.459424 | 0.001162 | 0.001453 | 0.001138 |
| optional_test_emplace.test | RUN | 0.131409 | 0.497934 | 0.453312 | 0.001226 | 0.001182 | 0.001101 |
| optional_test_minimum_requirements.test | RUN | 0.118542 | 0.389400 | 0.408502 | 0.001242 | 0.001105 | 0.001100 |
| optional_test_msvc_bug_workaround.test | RUN | 0.104164 | 0.273454 | 0.329977 | 0.001056 | 0.001238 | 0.001196 |
| optional_test_member_T.test | RUN | 0.105525 | 0.265542 | 0.332057 | 0.001109 | 0.001216 | 0.001024 |
| optional_test_tc_base.test | RUN | 0.104140 | 0.271337 | 0.337413 | 0.001153 | 0.001248 | 0.001054 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.075648 | 0.185251 | 0.209049 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.074484 | 0.177379 | 0.210322 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.069506 | 0.167388 | 0.191883 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.098290 | 0.232794 | 0.297717 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.068959 | 0.169514 | 0.190813 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.069994 | 0.166527 | 0.192888 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.072247 | 0.170655 | 0.195257 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070012 | 0.163938 | 0.198986 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.069402 | 0.165696 | 0.189525 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.071491 | 0.161671 | 0.193974 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070010 | 0.167119 | 0.188422 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.114076 | 0.258855 | 0.332439 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.112973 | 0.263986 | 0.329707 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.068557 | 0.164906 | 0.190906 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.070416 | 0.168890 | 0.195364 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.067486 | 0.163876 | 0.191803 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.069001 | 0.165703 | 0.194259 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.069769 | 0.166189 | 0.193326 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.069752 | 0.164952 | 0.191492 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.068071 | 0.164719 | 0.196360 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.068181 | 0.164798 | 0.191020 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.067144 | 0.166322 | 0.192570 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.067538 | 0.170112 | 0.191674 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.093018 | 0.221857 | 0.281703 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.073640 | 0.182683 | 0.233280 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.070594 | 0.168942 | 0.204150 | — | — | — |
| optional_test_static_properties.test | RUN | 0.161189 | 0.382454 | 0.507249 | 0.001101 | 0.001282 | 0.001118 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.070886 | 0.181530 | 0.214135 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.073577 | 0.185698 | 0.215969 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.069344 | 0.175284 | 0.203354 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.084272 | 0.229314 | 0.282230 | 0.001122 | 0.001194 | 0.000994 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.083778 | 0.232735 | 0.278524 | 0.001168 | 0.001124 | 0.000967 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.083546 | 0.221930 | 0.272584 | 0.001056 | 0.001328 | 0.001093 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.089100 | 0.234355 | 0.265225 | 0.000868 | 0.000949 | 0.000801 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.072213 | 0.166233 | 0.227933 | 0.000863 | 0.000887 | 0.000738 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.052154 | 0.159976 | 0.200233 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.996×, 1.005× | 0.995× |
| clang | 1.011× | 1.023×, 0.998× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000860s | 0.000856s | 0.000830s | byte equality observed |
| optional_test_assign.test | 10 | 0.000793s | 0.000770s | 0.000804s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000794s | 0.000787s | 0.000807s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000795s | 0.000794s | 0.000823s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000787s | 0.000794s | 0.000835s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000805s | 0.000804s | 0.000811s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000812s | 0.000814s | 0.000792s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000814s | 0.000831s | 0.000797s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000798s | 0.000794s | 0.000809s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000800s | 0.000817s | 0.000807s | byte equality observed |
| optional_test_hash.test | 10 | 0.000806s | 0.000785s | 0.000817s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000808s | 0.000784s | 0.000824s | byte equality observed |
| optional_test_io.test | 10 | 0.000819s | 0.000830s | 0.000820s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000786s | 0.000838s | 0.000787s | byte equality observed |
| optional_test_map.test | 10 | 0.000809s | 0.000825s | 0.000781s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000806s | 0.000820s | 0.000815s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000826s | 0.000811s | 0.000829s | byte equality observed |
| optional_test_move.test | 10 | 0.000821s | 0.000767s | 0.000777s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000795s | 0.000770s | 0.000796s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000359s | 0.000353s | 0.000795s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000800s | 0.000797s | 0.000776s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000805s | 0.000784s | 0.000811s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000802s | 0.000802s | 0.000815s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000808s | 0.000814s | 0.000824s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000819s | 0.000807s | 0.000796s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000818s | 0.000802s | 0.000833s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000805s | 0.000827s | 0.000830s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000813s | 0.000793s | 0.000794s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000794s | 0.000789s | 0.000781s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000817s | 0.000822s | 0.000809s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000807s | 0.000812s | 0.000797s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000793s | 0.000792s | 0.000798s | byte equality observed |
| optional_test_swap.test | 10 | 0.000796s | 0.000812s | 0.000816s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000819s | 0.000814s | 0.000811s | byte equality observed |
| optional_test_tie.test | 10 | 0.000807s | 0.000835s | 0.000809s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000835s | 0.000842s | 0.000836s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000797s | 0.000769s | 0.000777s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000775s | 0.000788s | 0.000819s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000788s | 0.000776s | 0.000800s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
