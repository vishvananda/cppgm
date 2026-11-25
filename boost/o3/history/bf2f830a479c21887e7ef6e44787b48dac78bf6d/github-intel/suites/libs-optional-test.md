# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.214024 | 1.335539 | 0.751550 | 0.001292 | 0.001361 | 0.001416 |
| optional_test_assign.test | RUN | 0.105900 | 0.274827 | 0.341472 | 0.001260 | 0.001339 | 0.001145 |
| optional_test_swap.test | RUN | 0.114704 | 0.345428 | 0.371744 | 0.001168 | 0.001420 | 0.001152 |
| optional_test_constexpr.test | COMPILE | 0.076006 | 0.184962 | 0.213333 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.113601 | 0.450379 | 0.349648 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.073625 | 0.180982 | 0.205468 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.122503 | 0.357534 | 0.420072 | 0.001293 | 0.001400 | 0.001323 |
| optional_test_constructors.test | RUN | 0.257401 | 1.324792 | 1.090706 | 0.001212 | 0.001203 | 0.001298 |
| optional_test_convert_from_T.test | RUN | 0.112173 | 0.289311 | 0.358876 | 0.001233 | 0.001382 | 0.001315 |
| optional_test_convert_assign.test | RUN | 0.109029 | 0.270634 | 0.341471 | 0.001171 | 0.001244 | 0.001168 |
| optional_test_empty_braces.test | RUN | 0.107467 | 0.277118 | 0.349244 | 0.001470 | 0.001436 | 0.001212 |
| optional_test_make_optional.test | RUN | 0.153881 | 0.431348 | 0.536324 | 0.001261 | 0.001290 | 0.001214 |
| optional_test_flat_map.test | RUN | 0.171583 | 0.511337 | 0.638767 | 0.001120 | 0.001188 | 0.001230 |
| optional_test_hash.test | RUN | 0.135441 | 0.405175 | 0.464158 | 0.001267 | 0.001184 | 0.001152 |
| optional_test_map.test | RUN | 0.173193 | 0.485217 | 0.644871 | 0.001199 | 0.001155 | 0.001188 |
| optional_test_tie.test | RUN | 0.116308 | 0.309928 | 0.362244 | 0.001170 | 0.001274 | 0.001340 |
| optional_test_ranges_find.test | RUN | 0.106772 | 0.272524 | 0.323698 | 0.001214 | 0.001125 | 0.001128 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.135894 | 0.799159 | 0.489365 | 0.001187 | 0.001132 | 0.001183 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.114482 | 0.339145 | 0.364869 | 0.001273 | 0.001239 | 0.001297 |
| optional_test_ref_assign_const_int.test | RUN | 0.116560 | 0.348625 | 0.370619 | 0.001202 | 0.001076 | 0.001191 |
| optional_test_ref_converting_ctor.test | RUN | 0.128336 | 0.485445 | 0.401524 | 0.001180 | 0.001389 | 0.001111 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.113199 | 0.322696 | 0.359272 | 0.001191 | 0.001068 | 0.001304 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.109531 | 0.298144 | 0.337633 | 0.001280 | 0.001179 | 0.001230 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.110604 | 0.287955 | 0.340680 | 0.001163 | 0.001165 | 0.001180 |
| optional_test_ref_portable_minimum.test | RUN | 0.466514 | 1.646891 | 1.242843 | 0.001291 | 0.001344 | 0.001332 |
| optional_test_ref_move.test | RUN | 0.114763 | 0.315084 | 0.370707 | 0.001136 | 0.001400 | 0.001430 |
| optional_test_ref_to_val.test | RUN | 0.141566 | 0.629657 | 0.519584 | 0.000966 | 0.001171 | 0.001344 |
| optional_test_inplace_factory.test | RUN | 0.146554 | 0.578570 | 0.457296 | 0.001205 | 0.001472 | 0.001262 |
| optional_test_io.test | RUN | 0.139070 | 0.647961 | 0.484393 | 0.001360 | 0.001219 | 0.001164 |
| optional_test_move.test | RUN | 0.129513 | 0.424593 | 0.410715 | 0.001280 | 0.001238 | 0.001167 |
| optional_test_noexcept_move.test | RUN | 0.077007 | 0.184877 | 0.219678 | 0.000514 | 0.000530 | 0.001169 |
| optional_test_cmp_none.test | RUN | 0.107919 | 0.295857 | 0.343758 | 0.001313 | 0.001206 | 0.001229 |
| optional_test_value_access.test | RUN | 0.131490 | 0.518063 | 0.475424 | 0.001159 | 0.001239 | 0.001316 |
| optional_test_emplace.test | RUN | 0.130729 | 0.497197 | 0.461372 | 0.000954 | 0.001311 | 0.001349 |
| optional_test_minimum_requirements.test | RUN | 0.119017 | 0.400063 | 0.421103 | 0.001314 | 0.001195 | 0.001186 |
| optional_test_msvc_bug_workaround.test | RUN | 0.106680 | 0.271911 | 0.342004 | 0.001102 | 0.001216 | 0.001323 |
| optional_test_member_T.test | RUN | 0.105263 | 0.265071 | 0.331696 | 0.001279 | 0.001241 | 0.001243 |
| optional_test_tc_base.test | RUN | 0.108241 | 0.276613 | 0.337935 | 0.001209 | 0.001156 | 0.001204 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.080046 | 0.188210 | 0.222341 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.071692 | 0.182703 | 0.214955 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.070358 | 0.163894 | 0.198953 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.100166 | 0.235841 | 0.303649 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.068087 | 0.171632 | 0.197922 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.070742 | 0.167591 | 0.201904 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.071801 | 0.168080 | 0.199595 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070947 | 0.164494 | 0.202153 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.069280 | 0.166162 | 0.195235 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.071211 | 0.168970 | 0.193201 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.069884 | 0.168644 | 0.195872 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.117674 | 0.266696 | 0.348098 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.116037 | 0.262383 | 0.343879 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.068928 | 0.166929 | 0.191372 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.071037 | 0.171202 | 0.197704 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.067587 | 0.163292 | 0.188146 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.068386 | 0.164502 | 0.193926 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.069419 | 0.162056 | 0.197055 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.070886 | 0.165113 | 0.190813 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.070523 | 0.168271 | 0.197372 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.070488 | 0.166970 | 0.189674 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.068859 | 0.168204 | 0.197759 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.068484 | 0.167842 | 0.196059 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.094955 | 0.223441 | 0.287133 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.076099 | 0.185913 | 0.239338 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.069944 | 0.169578 | 0.202359 | — | — | — |
| optional_test_static_properties.test | RUN | 0.162757 | 0.384430 | 0.505632 | 0.001112 | 0.001186 | 0.001305 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.071110 | 0.183679 | 0.211908 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.075760 | 0.184620 | 0.223172 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.070704 | 0.175355 | 0.201743 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.088929 | 0.231890 | 0.282840 | 0.001270 | 0.001251 | 0.001267 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.086053 | 0.233653 | 0.282071 | 0.001123 | 0.001212 | 0.001269 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.085807 | 0.226363 | 0.284024 | 0.001229 | 0.001114 | 0.001110 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.090464 | 0.238018 | 0.278253 | 0.000916 | 0.001179 | 0.000916 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.077371 | 0.151300 | 0.232010 | 0.000872 | 0.000938 | 0.000944 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.053650 | 0.131076 | 0.212922 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.997×, 1.000× | 1.005× |
| clang | 1.014× | 1.012×, 1.015× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000842s | 0.000874s | 0.000864s | byte equality observed |
| optional_test_assign.test | 10 | 0.000805s | 0.000800s | 0.000789s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000803s | 0.000771s | 0.000813s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000811s | 0.000825s | 0.000820s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000819s | 0.000806s | 0.000812s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000816s | 0.000793s | 0.000802s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000806s | 0.000830s | 0.000816s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000816s | 0.000839s | 0.000807s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000801s | 0.000814s | 0.000801s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000798s | 0.000809s | 0.000833s | byte equality observed |
| optional_test_hash.test | 10 | 0.000834s | 0.000835s | 0.000826s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000813s | 0.000843s | 0.000816s | byte equality observed |
| optional_test_io.test | 10 | 0.000835s | 0.000844s | 0.000815s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000781s | 0.000768s | 0.000800s | byte equality observed |
| optional_test_map.test | 10 | 0.000792s | 0.000784s | 0.000778s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000790s | 0.000787s | 0.000804s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000830s | 0.000817s | 0.000806s | byte equality observed |
| optional_test_move.test | 10 | 0.000805s | 0.000813s | 0.000821s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000793s | 0.000805s | 0.000823s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000357s | 0.000355s | 0.000797s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000801s | 0.000793s | 0.000820s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000814s | 0.000804s | 0.000807s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000812s | 0.000825s | 0.000813s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000818s | 0.000809s | 0.000839s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000806s | 0.000810s | 0.000838s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000812s | 0.000768s | 0.000798s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000834s | 0.000790s | 0.000793s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000819s | 0.000788s | 0.000821s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000805s | 0.000778s | 0.000821s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000840s | 0.000848s | 0.000838s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000818s | 0.000799s | 0.000806s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000809s | 0.000801s | 0.000817s | byte equality observed |
| optional_test_swap.test | 10 | 0.000821s | 0.000799s | 0.000808s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000818s | 0.000817s | 0.000827s | byte equality observed |
| optional_test_tie.test | 10 | 0.000826s | 0.000795s | 0.000815s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000840s | 0.000839s | 0.000827s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000791s | 0.000768s | 0.000779s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000785s | 0.000783s | 0.000834s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000792s | 0.000776s | 0.000845s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
