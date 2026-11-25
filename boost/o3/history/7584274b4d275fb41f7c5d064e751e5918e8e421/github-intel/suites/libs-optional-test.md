# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.212491 | 1.339630 | 0.750043 | 0.001250 | 0.001463 | 0.001215 |
| optional_test_assign.test | RUN | 0.104473 | 0.271236 | 0.341489 | 0.001204 | 0.001475 | 0.001211 |
| optional_test_swap.test | RUN | 0.112332 | 0.343924 | 0.368182 | 0.001064 | 0.001339 | 0.001166 |
| optional_test_constexpr.test | COMPILE | 0.075689 | 0.182565 | 0.213295 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.112193 | 0.457546 | 0.348150 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.073601 | 0.175891 | 0.209146 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.126830 | 0.353408 | 0.416632 | 0.001235 | 0.001356 | 0.001258 |
| optional_test_constructors.test | RUN | 0.256915 | 1.338404 | 1.080720 | 0.001091 | 0.001256 | 0.001231 |
| optional_test_convert_from_T.test | RUN | 0.108579 | 0.290237 | 0.358106 | 0.001231 | 0.001293 | 0.001138 |
| optional_test_convert_assign.test | RUN | 0.108579 | 0.276049 | 0.341573 | 0.001186 | 0.001124 | 0.001169 |
| optional_test_empty_braces.test | RUN | 0.107944 | 0.278228 | 0.351143 | 0.001298 | 0.001296 | 0.001128 |
| optional_test_make_optional.test | RUN | 0.153557 | 0.430536 | 0.549023 | 0.001462 | 0.001124 | 0.001199 |
| optional_test_flat_map.test | RUN | 0.165252 | 0.511392 | 0.623737 | 0.001280 | 0.001120 | 0.001098 |
| optional_test_hash.test | RUN | 0.134320 | 0.405228 | 0.445205 | 0.001329 | 0.001217 | 0.001112 |
| optional_test_map.test | RUN | 0.170732 | 0.487477 | 0.648483 | 0.001197 | 0.001312 | 0.001240 |
| optional_test_tie.test | RUN | 0.114310 | 0.315367 | 0.366508 | 0.001239 | 0.001216 | 0.001074 |
| optional_test_ranges_find.test | RUN | 0.111533 | 0.272453 | 0.319424 | 0.001284 | 0.001286 | 0.001172 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.139459 | 0.813810 | 0.489050 | 0.001027 | 0.001365 | 0.001186 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.111488 | 0.339814 | 0.359186 | 0.000981 | 0.001267 | 0.001067 |
| optional_test_ref_assign_const_int.test | RUN | 0.114733 | 0.350182 | 0.370420 | 0.001205 | 0.001198 | 0.001035 |
| optional_test_ref_converting_ctor.test | RUN | 0.128177 | 0.499950 | 0.406777 | 0.001286 | 0.001290 | 0.001045 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.115297 | 0.322897 | 0.355359 | 0.001034 | 0.001276 | 0.001085 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.107417 | 0.296836 | 0.336870 | 0.001341 | 0.001348 | 0.001130 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.105681 | 0.290728 | 0.332740 | 0.001157 | 0.001183 | 0.000905 |
| optional_test_ref_portable_minimum.test | RUN | 0.473681 | 1.614494 | 1.246709 | 0.001324 | 0.001298 | 0.001156 |
| optional_test_ref_move.test | RUN | 0.118507 | 0.309598 | 0.351921 | 0.001204 | 0.001229 | 0.001151 |
| optional_test_ref_to_val.test | RUN | 0.139648 | 0.638850 | 0.500118 | 0.001367 | 0.001201 | 0.001249 |
| optional_test_inplace_factory.test | RUN | 0.142080 | 0.582108 | 0.459501 | 0.001296 | 0.001342 | 0.001165 |
| optional_test_io.test | RUN | 0.143309 | 0.647644 | 0.487259 | 0.001164 | 0.001336 | 0.001217 |
| optional_test_move.test | RUN | 0.131356 | 0.433421 | 0.416418 | 0.001163 | 0.001376 | 0.001129 |
| optional_test_noexcept_move.test | RUN | 0.079277 | 0.183230 | 0.212303 | 0.000492 | 0.000491 | 0.001127 |
| optional_test_cmp_none.test | RUN | 0.112684 | 0.301895 | 0.347033 | 0.001136 | 0.001181 | 0.001159 |
| optional_test_value_access.test | RUN | 0.132842 | 0.512970 | 0.463811 | 0.001303 | 0.001343 | 0.001269 |
| optional_test_emplace.test | RUN | 0.137152 | 0.501556 | 0.465283 | 0.001368 | 0.001282 | 0.001220 |
| optional_test_minimum_requirements.test | RUN | 0.123389 | 0.395883 | 0.418588 | 0.001346 | 0.001119 | 0.001177 |
| optional_test_msvc_bug_workaround.test | RUN | 0.109562 | 0.272194 | 0.332904 | 0.001199 | 0.001122 | 0.001123 |
| optional_test_member_T.test | RUN | 0.106853 | 0.265665 | 0.330095 | 0.001143 | 0.001267 | 0.001204 |
| optional_test_tc_base.test | RUN | 0.106478 | 0.274904 | 0.341091 | 0.001163 | 0.001217 | 0.001094 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.079786 | 0.186865 | 0.226697 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.075760 | 0.179937 | 0.210559 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.068289 | 0.167088 | 0.191746 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.097891 | 0.235890 | 0.303542 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.070458 | 0.166918 | 0.192356 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.069499 | 0.167363 | 0.197459 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.070750 | 0.169159 | 0.198941 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.070898 | 0.166010 | 0.198447 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.069522 | 0.164173 | 0.196247 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.070178 | 0.161800 | 0.195505 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.070311 | 0.166378 | 0.196121 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.116949 | 0.268073 | 0.341295 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.116094 | 0.262738 | 0.337934 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.069508 | 0.166971 | 0.192338 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.070234 | 0.172368 | 0.199465 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.069330 | 0.163709 | 0.189644 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.069983 | 0.168142 | 0.193758 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.070131 | 0.165530 | 0.199080 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.070985 | 0.167189 | 0.195814 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.071618 | 0.166900 | 0.193753 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.069460 | 0.166815 | 0.193353 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069707 | 0.168143 | 0.194478 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.069814 | 0.168841 | 0.194271 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.096300 | 0.223997 | 0.286188 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.074103 | 0.187903 | 0.239919 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.070286 | 0.167039 | 0.201727 | — | — | — |
| optional_test_static_properties.test | RUN | 0.163090 | 0.386257 | 0.505024 | 0.001217 | 0.001311 | 0.001160 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.073462 | 0.183682 | 0.217137 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.075007 | 0.185776 | 0.219690 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.072099 | 0.174861 | 0.207294 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.087302 | 0.230193 | 0.280842 | 0.001251 | 0.001336 | 0.001140 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.082995 | 0.224238 | 0.287716 | 0.001220 | 0.001167 | 0.001088 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.088084 | 0.220825 | 0.286959 | 0.001100 | 0.001191 | 0.000988 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.089672 | 0.236232 | 0.280919 | 0.000964 | 0.001376 | 0.001179 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.075093 | 0.141840 | 0.194656 | 0.000948 | 0.000831 | 0.000836 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.054000 | 0.144529 | 0.175569 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.987×, 1.005× | 0.988× |
| clang | 1.014× | 1.015×, 1.013× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000873s | 0.000894s | 0.000859s | byte equality observed |
| optional_test_assign.test | 10 | 0.000835s | 0.000815s | 0.000785s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000820s | 0.000813s | 0.000811s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000807s | 0.000867s | 0.000803s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000827s | 0.000817s | 0.000816s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000834s | 0.000808s | 0.000809s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000813s | 0.000842s | 0.000820s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000852s | 0.000859s | 0.000843s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000838s | 0.000821s | 0.000850s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000809s | 0.000826s | 0.000841s | byte equality observed |
| optional_test_hash.test | 10 | 0.000809s | 0.000834s | 0.000867s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000821s | 0.000826s | 0.000844s | byte equality observed |
| optional_test_io.test | 10 | 0.000838s | 0.000861s | 0.000833s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000820s | 0.000813s | 0.000829s | byte equality observed |
| optional_test_map.test | 10 | 0.000818s | 0.000785s | 0.000809s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000812s | 0.000808s | 0.000801s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000857s | 0.000817s | 0.000830s | byte equality observed |
| optional_test_move.test | 10 | 0.000796s | 0.000825s | 0.000804s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000810s | 0.000791s | 0.000838s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000373s | 0.000370s | 0.000797s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000821s | 0.000807s | 0.000796s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000803s | 0.000834s | 0.000798s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000818s | 0.000813s | 0.000833s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000827s | 0.000830s | 0.000856s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000837s | 0.000818s | 0.000875s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000821s | 0.000808s | 0.000827s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000853s | 0.000815s | 0.000841s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000850s | 0.000814s | 0.000868s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000842s | 0.000803s | 0.000813s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000860s | 0.000824s | 0.000856s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000818s | 0.000833s | 0.000835s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000842s | 0.000833s | 0.000816s | byte equality observed |
| optional_test_swap.test | 10 | 0.000832s | 0.000825s | 0.000823s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000825s | 0.000848s | 0.000834s | byte equality observed |
| optional_test_tie.test | 10 | 0.000818s | 0.000791s | 0.000823s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000852s | 0.000853s | 0.000836s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000782s | 0.000791s | 0.000780s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000821s | 0.000791s | 0.000824s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000816s | 0.000800s | 0.000835s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
