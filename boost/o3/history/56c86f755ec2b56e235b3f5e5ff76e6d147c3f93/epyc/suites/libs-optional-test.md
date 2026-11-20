# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.325024 | 2.039349 | 1.417961 | 0.002219 | 0.002196 | 0.002227 |
| optional_test_assign.test | RUN | 0.179968 | 0.447025 | 0.708709 | 0.002406 | 0.002197 | 0.001887 |
| optional_test_swap.test | RUN | 0.194421 | 0.548314 | 0.753637 | 0.001930 | 0.002108 | 0.001906 |
| optional_test_constexpr.test | COMPILE | 0.129694 | 0.305568 | 0.444906 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.189638 | 0.729275 | 0.699183 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.127871 | 0.305451 | 0.424671 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.204806 | 0.569258 | 0.781205 | 0.002160 | 0.002114 | 0.002228 |
| optional_test_constructors.test | RUN | 0.420228 | 2.102361 | 2.099238 | 0.001834 | 0.001545 | 0.002038 |
| optional_test_convert_from_T.test | RUN | 0.200172 | 0.459098 | 0.762493 | 0.001922 | 0.002019 | 0.002175 |
| optional_test_convert_assign.test | RUN | 0.181619 | 0.436625 | 0.667753 | 0.002107 | 0.002013 | 0.001939 |
| optional_test_empty_braces.test | RUN | 0.180165 | 0.460425 | 0.663844 | 0.002174 | 0.002010 | 0.002115 |
| optional_test_make_optional.test | RUN | 0.258373 | 0.699629 | 1.044207 | 0.001928 | 0.002120 | 0.002147 |
| optional_test_flat_map.test | RUN | 0.271236 | 0.812742 | 1.185506 | 0.001984 | 0.001566 | 0.002098 |
| optional_test_hash.test | RUN | 0.227884 | 0.632049 | 0.897944 | 0.001855 | 0.002284 | 0.001982 |
| optional_test_map.test | RUN | 0.273074 | 0.781358 | 1.174469 | 0.002071 | 0.001988 | 0.002071 |
| optional_test_tie.test | RUN | 0.202782 | 0.496497 | 0.730579 | 0.001948 | 0.001811 | 0.002327 |
| optional_test_ranges_find.test | RUN | 0.173107 | 0.430362 | 0.658692 | 0.002026 | 0.001906 | 0.002100 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.233479 | 1.271980 | 0.930443 | 0.001722 | 0.001926 | 0.002304 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.191536 | 0.533801 | 0.742281 | 0.002052 | 0.001932 | 0.002045 |
| optional_test_ref_assign_const_int.test | RUN | 0.196676 | 0.564173 | 0.715530 | 0.001876 | 0.002066 | 0.001840 |
| optional_test_ref_converting_ctor.test | RUN | 0.203214 | 0.765782 | 0.794274 | 0.002050 | 0.002312 | 0.001879 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.201351 | 0.527221 | 0.758429 | 0.002074 | 0.001846 | 0.002178 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.186149 | 0.483038 | 0.708448 | 0.002095 | 0.001982 | 0.002068 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.178863 | 0.480009 | 0.637449 | 0.002094 | 0.002052 | 0.002125 |
| optional_test_ref_portable_minimum.test | RUN | 0.754684 | 2.511212 | 2.456749 | 0.001854 | 0.002080 | 0.001871 |
| optional_test_ref_move.test | RUN | 0.197676 | 0.495439 | 0.710280 | 0.001936 | 0.002062 | 0.002292 |
| optional_test_ref_to_val.test | RUN | 0.238551 | 0.993057 | 0.970132 | 0.001958 | 0.002014 | 0.002040 |
| optional_test_inplace_factory.test | RUN | 0.239737 | 0.913676 | 0.899559 | 0.001996 | 0.002000 | 0.002040 |
| optional_test_io.test | RUN | 0.229814 | 0.998881 | 0.911122 | 0.002162 | 0.001967 | 0.001838 |
| optional_test_move.test | RUN | 0.210661 | 0.685246 | 0.808665 | 0.002049 | 0.001918 | 0.002222 |
| optional_test_noexcept_move.test | RUN | 0.132346 | 0.302215 | 0.440797 | 0.000760 | 0.000951 | 0.001898 |
| optional_test_cmp_none.test | RUN | 0.189792 | 0.498820 | 0.673370 | 0.002030 | 0.002320 | 0.002207 |
| optional_test_value_access.test | RUN | 0.219008 | 0.828009 | 0.930927 | 0.002105 | 0.002122 | 0.001907 |
| optional_test_emplace.test | RUN | 0.216417 | 0.800079 | 0.912687 | 0.002106 | 0.001934 | 0.001949 |
| optional_test_minimum_requirements.test | RUN | 0.199798 | 0.623334 | 0.804396 | 0.001836 | 0.002114 | 0.002211 |
| optional_test_msvc_bug_workaround.test | RUN | 0.186739 | 0.459349 | 0.667133 | 0.002000 | 0.001972 | 0.002204 |
| optional_test_member_T.test | RUN | 0.185782 | 0.435427 | 0.695648 | 0.001703 | 0.001981 | 0.001725 |
| optional_test_tc_base.test | RUN | 0.184652 | 0.442190 | 0.707740 | 0.001589 | 0.002000 | 0.001936 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.138775 | 0.319273 | 0.425462 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.132954 | 0.309980 | 0.446510 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.116844 | 0.275732 | 0.416929 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.173173 | 0.386085 | 0.616496 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.123098 | 0.286783 | 0.427336 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.126069 | 0.295371 | 0.419509 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.126473 | 0.282426 | 0.416150 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.126119 | 0.287550 | 0.406113 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.122435 | 0.277181 | 0.409146 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.121007 | 0.286175 | 0.398841 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.120120 | 0.279987 | 0.419089 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.201403 | 0.449305 | 0.702440 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.198546 | 0.442830 | 0.704098 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.119996 | 0.284820 | 0.411203 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.122851 | 0.290775 | 0.411944 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.117736 | 0.272001 | 0.414306 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.123369 | 0.279755 | 0.419434 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.121366 | 0.280238 | 0.405832 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.124204 | 0.284931 | 0.421222 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.124265 | 0.276870 | 0.413620 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.119626 | 0.282380 | 0.414972 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.121928 | 0.278215 | 0.406843 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.123763 | 0.292359 | 0.418540 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.165278 | 0.373484 | 0.600469 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.133942 | 0.300202 | 0.486809 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.127792 | 0.294720 | 0.430062 | — | — | — |
| optional_test_static_properties.test | RUN | 0.293338 | 0.643601 | 1.080548 | 0.002239 | 0.002148 | 0.002144 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.128878 | 0.314515 | 0.447736 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.133100 | 0.284167 | 0.467194 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.125230 | 0.267694 | 0.443448 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.152676 | 0.370508 | 0.527594 | 0.002016 | 0.001976 | 0.001970 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.149663 | 0.378002 | 0.584746 | 0.001838 | 0.001920 | 0.001869 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.141240 | 0.363814 | 0.572266 | 0.001604 | 0.001934 | 0.001502 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.143218 | 0.383990 | 0.494082 | 0.002436 | 0.002334 | 0.001506 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.102010 | 0.242220 | 0.412372 | 0.001512 | 0.001493 | 0.001417 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.083961 | 0.241855 | 0.404194 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.000×, 0.996× | 0.995× |
| clang | 1.021× | 1.015×, 1.028× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001341s | 0.001324s | 0.001355s | byte equality observed |
| optional_test_assign.test | 10 | 0.001215s | 0.001226s | 0.001331s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001250s | 0.001277s | 0.001296s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001285s | 0.001265s | 0.001272s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001255s | 0.001260s | 0.001292s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001280s | 0.001254s | 0.001324s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001297s | 0.001269s | 0.001259s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001284s | 0.001308s | 0.001311s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001283s | 0.001266s | 0.001307s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001254s | 0.001278s | 0.001286s | byte equality observed |
| optional_test_hash.test | 10 | 0.001300s | 0.001310s | 0.001299s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001237s | 0.001280s | 0.001264s | byte equality observed |
| optional_test_io.test | 10 | 0.001278s | 0.001315s | 0.001260s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001245s | 0.001246s | 0.001286s | byte equality observed |
| optional_test_map.test | 10 | 0.001266s | 0.001242s | 0.001266s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001238s | 0.001213s | 0.001251s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001290s | 0.001320s | 0.001306s | byte equality observed |
| optional_test_move.test | 10 | 0.001228s | 0.001237s | 0.001209s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001261s | 0.001278s | 0.001202s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000586s | 0.000572s | 0.001273s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001228s | 0.001222s | 0.001210s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001224s | 0.001227s | 0.001288s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001255s | 0.001264s | 0.001291s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001270s | 0.001312s | 0.001231s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001250s | 0.001245s | 0.001252s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001312s | 0.001271s | 0.001237s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001269s | 0.001277s | 0.001249s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001263s | 0.001266s | 0.001302s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001260s | 0.001304s | 0.001255s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001293s | 0.001261s | 0.001286s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001247s | 0.001272s | 0.001292s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001229s | 0.001266s | 0.001260s | byte equality observed |
| optional_test_swap.test | 10 | 0.001258s | 0.001243s | 0.001261s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001256s | 0.001284s | 0.001244s | byte equality observed |
| optional_test_tie.test | 10 | 0.001291s | 0.001290s | 0.001289s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001314s | 0.001273s | 0.001265s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001259s | 0.001194s | 0.001322s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001211s | 0.001213s | 0.001222s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001226s | 0.001223s | 0.001279s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
