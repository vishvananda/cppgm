# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.216055 | 1.343018 | 0.754175 | 0.001323 | 0.001308 | 0.001357 |
| optional_test_assign.test | RUN | 0.106263 | 0.272764 | 0.340626 | 0.001281 | 0.001310 | 0.001253 |
| optional_test_swap.test | RUN | 0.114641 | 0.336937 | 0.372959 | 0.001204 | 0.001243 | 0.001212 |
| optional_test_constexpr.test | COMPILE | 0.077052 | 0.183637 | 0.213019 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.115400 | 0.449178 | 0.355448 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.074428 | 0.178065 | 0.212914 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.122565 | 0.347690 | 0.421594 | 0.001144 | 0.001331 | 0.001200 |
| optional_test_constructors.test | RUN | 0.258172 | 1.333771 | 1.096915 | 0.001338 | 0.001139 | 0.001232 |
| optional_test_convert_from_T.test | RUN | 0.115348 | 0.283234 | 0.363092 | 0.001280 | 0.001358 | 0.001125 |
| optional_test_convert_assign.test | RUN | 0.110489 | 0.269993 | 0.344679 | 0.001292 | 0.001304 | 0.001142 |
| optional_test_empty_braces.test | RUN | 0.113345 | 0.274398 | 0.355498 | 0.001312 | 0.001419 | 0.001313 |
| optional_test_make_optional.test | RUN | 0.159915 | 0.436405 | 0.550417 | 0.001318 | 0.001305 | 0.001194 |
| optional_test_flat_map.test | RUN | 0.166317 | 0.504544 | 0.626470 | 0.001265 | 0.001175 | 0.001227 |
| optional_test_hash.test | RUN | 0.135255 | 0.411832 | 0.449900 | 0.001314 | 0.001388 | 0.001164 |
| optional_test_map.test | RUN | 0.174685 | 0.491138 | 0.652531 | 0.001198 | 0.001275 | 0.001139 |
| optional_test_tie.test | RUN | 0.120911 | 0.304347 | 0.364922 | 0.001274 | 0.001177 | 0.001175 |
| optional_test_ranges_find.test | RUN | 0.107833 | 0.267851 | 0.322389 | 0.001387 | 0.001221 | 0.001192 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.137579 | 0.807010 | 0.494330 | 0.001268 | 0.001302 | 0.001210 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.116822 | 0.337016 | 0.370347 | 0.001278 | 0.001342 | 0.001350 |
| optional_test_ref_assign_const_int.test | RUN | 0.116569 | 0.350179 | 0.374202 | 0.000998 | 0.001404 | 0.001095 |
| optional_test_ref_converting_ctor.test | RUN | 0.125836 | 0.482774 | 0.400129 | 0.001292 | 0.001219 | 0.001190 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.113314 | 0.323371 | 0.369015 | 0.001200 | 0.001222 | 0.001198 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.111096 | 0.294298 | 0.348484 | 0.001202 | 0.001044 | 0.001213 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.108919 | 0.293796 | 0.341416 | 0.001234 | 0.001286 | 0.001241 |
| optional_test_ref_portable_minimum.test | RUN | 0.472346 | 1.611548 | 1.242436 | 0.001246 | 0.001104 | 0.001216 |
| optional_test_ref_move.test | RUN | 0.120847 | 0.306052 | 0.346572 | 0.001294 | 0.001328 | 0.001342 |
| optional_test_ref_to_val.test | RUN | 0.143638 | 0.638638 | 0.504507 | 0.001224 | 0.001271 | 0.001278 |
| optional_test_inplace_factory.test | RUN | 0.145528 | 0.582316 | 0.470070 | 0.001298 | 0.001350 | 0.001255 |
| optional_test_io.test | RUN | 0.137811 | 0.651817 | 0.491179 | 0.001351 | 0.001347 | 0.001252 |
| optional_test_move.test | RUN | 0.129227 | 0.432121 | 0.414674 | 0.001191 | 0.001227 | 0.001264 |
| optional_test_noexcept_move.test | RUN | 0.077378 | 0.184079 | 0.219192 | 0.000524 | 0.000458 | 0.001115 |
| optional_test_cmp_none.test | RUN | 0.109542 | 0.296508 | 0.351068 | 0.001355 | 0.001199 | 0.001185 |
| optional_test_value_access.test | RUN | 0.135558 | 0.516793 | 0.463996 | 0.001261 | 0.001222 | 0.001410 |
| optional_test_emplace.test | RUN | 0.131908 | 0.501306 | 0.473277 | 0.001071 | 0.001318 | 0.001315 |
| optional_test_minimum_requirements.test | RUN | 0.121116 | 0.397765 | 0.417805 | 0.001397 | 0.000983 | 0.001198 |
| optional_test_msvc_bug_workaround.test | RUN | 0.108587 | 0.263787 | 0.341508 | 0.001359 | 0.001029 | 0.001232 |
| optional_test_member_T.test | RUN | 0.107777 | 0.266888 | 0.333532 | 0.001306 | 0.001212 | 0.001233 |
| optional_test_tc_base.test | RUN | 0.108379 | 0.266922 | 0.340109 | 0.001192 | 0.001262 | 0.001136 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.079071 | 0.182796 | 0.224347 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.079431 | 0.178822 | 0.217548 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.071421 | 0.168238 | 0.189698 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.097882 | 0.231586 | 0.305961 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.071176 | 0.166415 | 0.200036 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.071554 | 0.170528 | 0.196950 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.073558 | 0.167490 | 0.205966 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.072796 | 0.165680 | 0.201376 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.070598 | 0.163381 | 0.194897 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.071782 | 0.167065 | 0.197997 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.069656 | 0.168395 | 0.198148 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.118555 | 0.260807 | 0.341146 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.117062 | 0.264009 | 0.340497 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.071269 | 0.166919 | 0.192874 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.072896 | 0.167685 | 0.199809 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.071538 | 0.164025 | 0.191780 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.071880 | 0.164327 | 0.195755 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.072789 | 0.165730 | 0.198173 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.072670 | 0.163195 | 0.197143 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.073381 | 0.165575 | 0.190581 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.070969 | 0.165298 | 0.192566 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.070926 | 0.167998 | 0.193179 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.071352 | 0.167106 | 0.189649 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.099181 | 0.222907 | 0.287637 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.077488 | 0.186424 | 0.243743 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.073371 | 0.168763 | 0.203903 | — | — | — |
| optional_test_static_properties.test | RUN | 0.168713 | 0.382320 | 0.516821 | 0.001305 | 0.001222 | 0.001393 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.076121 | 0.184773 | 0.218116 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.076356 | 0.179598 | 0.221139 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.074580 | 0.176111 | 0.208294 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.088495 | 0.228387 | 0.290348 | 0.001260 | 0.001105 | 0.001103 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.086416 | 0.227773 | 0.277931 | 0.001138 | 0.001206 | 0.001212 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.088922 | 0.220364 | 0.283652 | 0.001085 | 0.001180 | 0.001093 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.092883 | 0.232954 | 0.270777 | 0.000927 | 0.000887 | 0.001454 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.073550 | 0.161332 | 0.176984 | 0.000888 | 0.000854 | 0.000836 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.054270 | 0.154267 | 0.202058 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.994×, 0.984× | 1.018× |
| clang | 1.002× | 1.006×, 0.997× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000900s | 0.000855s | 0.000883s | byte equality observed |
| optional_test_assign.test | 10 | 0.000841s | 0.000801s | 0.000808s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000823s | 0.000829s | 0.000795s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000831s | 0.000813s | 0.000810s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000803s | 0.000839s | 0.000816s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000804s | 0.000841s | 0.000834s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000800s | 0.000808s | 0.000823s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000837s | 0.000868s | 0.000827s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000838s | 0.000807s | 0.000815s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000837s | 0.000805s | 0.000804s | byte equality observed |
| optional_test_hash.test | 10 | 0.000835s | 0.000808s | 0.000820s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000830s | 0.000810s | 0.000798s | byte equality observed |
| optional_test_io.test | 10 | 0.000846s | 0.000839s | 0.000829s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000822s | 0.000805s | 0.000797s | byte equality observed |
| optional_test_map.test | 10 | 0.000829s | 0.000805s | 0.000802s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000828s | 0.000809s | 0.000777s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000863s | 0.000837s | 0.000841s | byte equality observed |
| optional_test_move.test | 10 | 0.000830s | 0.000799s | 0.000814s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000812s | 0.000810s | 0.000802s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000371s | 0.000365s | 0.000786s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000793s | 0.000826s | 0.000785s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000824s | 0.000818s | 0.000826s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000811s | 0.000819s | 0.000810s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000830s | 0.000835s | 0.000842s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000837s | 0.000809s | 0.000820s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000818s | 0.000804s | 0.000819s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000829s | 0.000799s | 0.000807s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000842s | 0.000814s | 0.000828s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000838s | 0.000831s | 0.000819s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000869s | 0.000835s | 0.000868s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000811s | 0.000818s | 0.000813s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000813s | 0.000813s | 0.000794s | byte equality observed |
| optional_test_swap.test | 10 | 0.000834s | 0.000786s | 0.000811s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000833s | 0.000796s | 0.000781s | byte equality observed |
| optional_test_tie.test | 10 | 0.000825s | 0.000822s | 0.000826s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000869s | 0.000845s | 0.000820s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000793s | 0.000786s | 0.000817s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000803s | 0.000788s | 0.000815s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000806s | 0.000805s | 0.000804s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
