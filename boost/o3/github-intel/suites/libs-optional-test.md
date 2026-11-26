# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.218246 | 1.325483 | 0.752764 | 0.001286 | 0.001287 | 0.001328 |
| optional_test_assign.test | RUN | 0.107207 | 0.268863 | 0.337325 | 0.001296 | 0.001237 | 0.001269 |
| optional_test_swap.test | RUN | 0.117308 | 0.338940 | 0.373362 | 0.001337 | 0.001251 | 0.001208 |
| optional_test_constexpr.test | COMPILE | 0.077613 | 0.181399 | 0.210399 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.117793 | 0.447139 | 0.349981 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.076083 | 0.176576 | 0.210591 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.120469 | 0.348068 | 0.416283 | 0.001443 | 0.001340 | 0.001208 |
| optional_test_constructors.test | RUN | 0.254125 | 1.316983 | 1.089426 | 0.001330 | 0.001143 | 0.001243 |
| optional_test_convert_from_T.test | RUN | 0.114090 | 0.284478 | 0.363065 | 0.001660 | 0.001302 | 0.001147 |
| optional_test_convert_assign.test | RUN | 0.113062 | 0.268858 | 0.347484 | 0.001102 | 0.001256 | 0.001171 |
| optional_test_empty_braces.test | RUN | 0.110890 | 0.273618 | 0.354248 | 0.001486 | 0.001324 | 0.001246 |
| optional_test_make_optional.test | RUN | 0.153183 | 0.430823 | 0.545506 | 0.001283 | 0.001397 | 0.001091 |
| optional_test_flat_map.test | RUN | 0.170621 | 0.500741 | 0.620590 | 0.001249 | 0.001145 | 0.001111 |
| optional_test_hash.test | RUN | 0.134514 | 0.402466 | 0.445587 | 0.001295 | 0.001176 | 0.001116 |
| optional_test_map.test | RUN | 0.175621 | 0.492455 | 0.646870 | 0.001301 | 0.001236 | 0.001226 |
| optional_test_tie.test | RUN | 0.118275 | 0.308019 | 0.360785 | 0.001301 | 0.001140 | 0.001196 |
| optional_test_ranges_find.test | RUN | 0.113460 | 0.264593 | 0.322329 | 0.001153 | 0.001382 | 0.001121 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.139792 | 0.803962 | 0.487402 | 0.001304 | 0.001320 | 0.001264 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.112902 | 0.334289 | 0.361983 | 0.001090 | 0.001336 | 0.001323 |
| optional_test_ref_assign_const_int.test | RUN | 0.115991 | 0.346651 | 0.360563 | 0.001268 | 0.001239 | 0.001270 |
| optional_test_ref_converting_ctor.test | RUN | 0.125320 | 0.482164 | 0.413683 | 0.001416 | 0.001250 | 0.001238 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.119189 | 0.316460 | 0.365447 | 0.001259 | 0.001194 | 0.001196 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.111147 | 0.294807 | 0.323114 | 0.001246 | 0.001037 | 0.001193 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.112687 | 0.283128 | 0.343555 | 0.001397 | 0.001175 | 0.001180 |
| optional_test_ref_portable_minimum.test | RUN | 0.470241 | 1.611621 | 1.240079 | 0.001598 | 0.001346 | 0.001169 |
| optional_test_ref_move.test | RUN | 0.116539 | 0.300531 | 0.363904 | 0.001501 | 0.001313 | 0.001288 |
| optional_test_ref_to_val.test | RUN | 0.144855 | 0.612709 | 0.508798 | 0.001544 | 0.001253 | 0.001157 |
| optional_test_inplace_factory.test | RUN | 0.147488 | 0.582638 | 0.455142 | 0.001248 | 0.001233 | 0.001192 |
| optional_test_io.test | RUN | 0.145367 | 0.646442 | 0.483025 | 0.001085 | 0.001291 | 0.001216 |
| optional_test_move.test | RUN | 0.131550 | 0.426710 | 0.426127 | 0.001304 | 0.001124 | 0.001066 |
| optional_test_noexcept_move.test | RUN | 0.079494 | 0.182039 | 0.211381 | 0.000499 | 0.000498 | 0.001045 |
| optional_test_cmp_none.test | RUN | 0.114482 | 0.293849 | 0.350671 | 0.001507 | 0.001198 | 0.001253 |
| optional_test_value_access.test | RUN | 0.131707 | 0.509883 | 0.463179 | 0.001280 | 0.001157 | 0.001222 |
| optional_test_emplace.test | RUN | 0.129195 | 0.496969 | 0.472749 | 0.001267 | 0.001113 | 0.001080 |
| optional_test_minimum_requirements.test | RUN | 0.121548 | 0.394091 | 0.417726 | 0.001098 | 0.001226 | 0.001132 |
| optional_test_msvc_bug_workaround.test | RUN | 0.109637 | 0.269078 | 0.344601 | 0.001320 | 0.001189 | 0.001059 |
| optional_test_member_T.test | RUN | 0.102836 | 0.264735 | 0.329293 | 0.001364 | 0.001223 | 0.001215 |
| optional_test_tc_base.test | RUN | 0.109112 | 0.271846 | 0.340008 | 0.001033 | 0.001232 | 0.001112 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.083115 | 0.187041 | 0.225809 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.082204 | 0.182105 | 0.199194 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.071626 | 0.167723 | 0.188476 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.097078 | 0.231003 | 0.304460 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.072197 | 0.162149 | 0.197369 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.071787 | 0.170984 | 0.199857 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.072109 | 0.167415 | 0.204743 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070694 | 0.163074 | 0.201881 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.070942 | 0.162715 | 0.197156 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.072435 | 0.168113 | 0.194031 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.072142 | 0.165432 | 0.194132 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.118974 | 0.263934 | 0.342555 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.119656 | 0.262342 | 0.337692 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.074195 | 0.169871 | 0.193597 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.072992 | 0.169935 | 0.198307 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.068839 | 0.163173 | 0.190086 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.072979 | 0.161785 | 0.192098 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.070387 | 0.160349 | 0.196955 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.072811 | 0.166321 | 0.192737 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.069294 | 0.164858 | 0.197441 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.071207 | 0.166642 | 0.191382 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069277 | 0.167936 | 0.195109 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.072550 | 0.165033 | 0.191389 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.096751 | 0.219854 | 0.291353 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.069756 | 0.182493 | 0.238899 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.068595 | 0.170086 | 0.203385 | — | — | — |
| optional_test_static_properties.test | RUN | 0.157667 | 0.379747 | 0.503446 | 0.001447 | 0.001096 | 0.001250 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.071792 | 0.181466 | 0.221629 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.075810 | 0.183927 | 0.223848 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.070391 | 0.174976 | 0.207418 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.088091 | 0.228858 | 0.276192 | 0.001674 | 0.001272 | 0.001224 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.088840 | 0.229286 | 0.285966 | 0.000954 | 0.001111 | 0.001219 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.086106 | 0.224181 | 0.282284 | 0.001270 | 0.001075 | 0.001181 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.093068 | 0.232720 | 0.278662 | 0.000933 | 0.001236 | 0.000909 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.071970 | 0.137421 | 0.225905 | 0.000912 | 0.000868 | 0.000896 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.044974 | 0.140136 | 0.207183 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.995×, 0.995× | 1.019× |
| clang | 1.007× | 1.001×, 1.014× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000873s | 0.000903s | 0.000848s | byte equality observed |
| optional_test_assign.test | 10 | 0.000815s | 0.000828s | 0.000799s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000810s | 0.000822s | 0.000814s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000841s | 0.000810s | 0.000810s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000825s | 0.000798s | 0.000825s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000838s | 0.000799s | 0.000806s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000816s | 0.000794s | 0.000834s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000840s | 0.000844s | 0.000829s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000833s | 0.000832s | 0.000827s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000827s | 0.000829s | 0.000783s | byte equality observed |
| optional_test_hash.test | 10 | 0.000828s | 0.000794s | 0.000822s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000856s | 0.000808s | 0.000827s | byte equality observed |
| optional_test_io.test | 10 | 0.000849s | 0.000811s | 0.000840s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000831s | 0.000810s | 0.000841s | byte equality observed |
| optional_test_map.test | 10 | 0.000815s | 0.000802s | 0.000840s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000797s | 0.000810s | 0.000836s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000833s | 0.000841s | 0.000831s | byte equality observed |
| optional_test_move.test | 10 | 0.000817s | 0.000787s | 0.000813s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000803s | 0.000790s | 0.000810s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000365s | 0.000362s | 0.000790s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000800s | 0.000856s | 0.000785s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000803s | 0.000825s | 0.000794s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000831s | 0.000853s | 0.000811s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000833s | 0.000850s | 0.000809s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000801s | 0.000832s | 0.000805s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000804s | 0.000805s | 0.000780s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000821s | 0.000834s | 0.000808s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000840s | 0.000803s | 0.000800s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000833s | 0.000816s | 0.000808s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000847s | 0.000841s | 0.000823s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000828s | 0.000831s | 0.000803s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000824s | 0.000825s | 0.000817s | byte equality observed |
| optional_test_swap.test | 10 | 0.000825s | 0.000813s | 0.000814s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000819s | 0.000815s | 0.000835s | byte equality observed |
| optional_test_tie.test | 10 | 0.000799s | 0.000806s | 0.000829s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000846s | 0.000855s | 0.000838s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000776s | 0.000788s | 0.000814s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000789s | 0.000778s | 0.000802s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000804s | 0.000792s | 0.000794s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
