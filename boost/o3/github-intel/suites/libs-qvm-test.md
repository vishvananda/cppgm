# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.189873 | 0.549529 | 0.576688 | 0.001634 | 0.001716 | 0.001490 |
| mat_traits_array_test.test | RUN | 0.147222 | 0.548839 | 0.459105 | 0.001386 | 0.001123 | 0.001034 |
| mat_traits_std_array_test.test | RUN | 0.147906 | 0.420866 | 0.457191 | 0.001370 | 0.001204 | 0.001127 |
| vec_traits_array_test.test | RUN | 0.127323 | 0.423016 | 0.382658 | 0.001131 | 0.001243 | 0.000889 |
| vec_traits_gnuc_test.test | RUN | 0.237354 | 0.508119 | 0.727831 | 0.001103 | 0.001196 | 0.001041 |
| vec_traits_std_array_test.test | RUN | 0.128001 | 0.327715 | 0.381014 | 0.001316 | 0.001236 | 0.001077 |
| quat_traits_array_test.test | RUN | 0.126326 | 0.444277 | 0.386645 | 0.001133 | 0.001264 | 0.001101 |
| quat_traits_std_array_test.test | RUN | 0.127396 | 0.325598 | 0.372117 | 0.001301 | 0.001166 | 0.000967 |
| access_m_test.test | RUN | 0.203703 | 0.780080 | 0.862413 | 0.001074 | 0.001181 | 0.000978 |
| access_m_fail1.test | COMPILE_FAIL | 0.018592 | 0.033457 | 0.055747 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019504 | 0.031566 | 0.054753 | — | — | — |
| access_q_test.test | RUN | 0.166894 | 0.410851 | 0.508349 | 0.001138 | 0.001125 | 0.001067 |
| access_q_fail.test | COMPILE_FAIL | 0.014623 | 0.026595 | 0.045329 | — | — | — |
| access_v_test.test | RUN | 0.168128 | 0.412507 | 0.496255 | 0.001044 | 0.001116 | 0.001078 |
| access_v_fail1.test | COMPILE_FAIL | 0.012940 | 0.023134 | 0.043053 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013806 | 0.023735 | 0.040566 | — | — | — |
| assign_test.test | RUN | 0.254904 | 0.661952 | 0.945956 | 0.001400 | 0.001314 | 0.001147 |
| to_string_test.test | RUN | 0.309948 | 1.143230 | 5.545824 | 0.001074 | 0.001187 | 0.001280 |
| cmp_vv_test.test | RUN | 0.207387 | 0.550934 | 0.625048 | 0.001267 | 0.001150 | 0.001078 |
| cross_test.test | RUN | 0.201259 | 0.476356 | 0.618651 | 0.001264 | 0.001146 | 0.000959 |
| div_eq_vs_test.test | RUN | 0.191608 | 0.450622 | 0.605153 | 0.001491 | 0.001225 | 0.001084 |
| div_vs_test.test | RUN | 0.202164 | 0.566508 | 0.660394 | 0.001159 | 0.001168 | 0.000991 |
| dot_vv_test.test | RUN | 0.192063 | 0.496013 | 0.609747 | 0.001234 | 0.001147 | 0.001162 |
| eq_vv_test.test | RUN | 0.219523 | 0.569073 | 0.659469 | 0.001277 | 0.001213 | 0.001133 |
| mag_v_test.test | RUN | 0.195095 | 0.461791 | 0.582944 | 0.001240 | 0.001298 | 0.001069 |
| mag_sqr_v_test.test | RUN | 0.192894 | 0.468447 | 0.582697 | 0.001163 | 0.001168 | 0.001091 |
| minus_v_test.test | RUN | 0.197904 | 0.540549 | 0.625394 | 0.001320 | 0.001280 | 0.001186 |
| minus_eq_vv_test.test | RUN | 0.210250 | 0.521835 | 0.614417 | 0.001080 | 0.001205 | 0.001041 |
| minus_vv_test.test | RUN | 0.207839 | 0.569065 | 0.626938 | 0.001227 | 0.001230 | 0.001291 |
| mul_eq_vs_test.test | RUN | 0.193465 | 0.455180 | 0.615511 | 0.001160 | 0.001059 | 0.001071 |
| mul_vs_test.test | RUN | 0.200827 | 0.561812 | 0.640634 | 0.001063 | 0.001200 | 0.001105 |
| mul_sv_test.test | RUN | 0.213223 | 0.567041 | 0.651520 | 0.001020 | 0.001237 | 0.001046 |
| mul_vm_test.test | RUN | 0.283391 | 1.012458 | 0.964353 | 0.001116 | 0.001157 | 0.001269 |
| normalize_v_test.test | RUN | 0.210197 | 0.696294 | 0.661008 | 0.001160 | 0.001270 | 0.001092 |
| plus_eq_vv_test.test | RUN | 0.193046 | 0.533249 | 0.617980 | 0.001124 | 0.001180 | 0.000934 |
| plus_vv_test.test | RUN | 0.205674 | 0.570970 | 0.642815 | 0.001038 | 0.001156 | 0.001067 |
| scalar_cast_v_test.test | RUN | 0.187335 | 0.421049 | 0.557688 | 0.001012 | 0.001292 | 0.001139 |
| vec_index_test.test | RUN | 0.165738 | 0.435794 | 0.510280 | 0.001199 | 0.001236 | 0.001121 |
| vec_register_test.test | RUN | 0.111019 | 0.393273 | 0.368049 | 0.001407 | 0.001103 | 0.001223 |
| cmp_mm_test.test | RUN | 0.359357 | 1.270136 | 1.352957 | 0.001148 | 0.001141 | 0.001103 |
| determinant_test.test | RUN | 0.224293 | 0.642653 | 0.720413 | 0.001204 | 0.001272 | 0.001474 |
| div_eq_ms_test.test | RUN | 0.238752 | 0.585574 | 0.810587 | 0.001171 | 0.001297 | 0.001254 |
| div_ms_test.test | RUN | 0.276098 | 0.942611 | 0.996404 | 0.001090 | 0.001317 | 0.001125 |
| eq_mm_test.test | RUN | 0.332507 | 1.165351 | 1.287546 | 0.001363 | 0.001283 | 0.001063 |
| minus_m_test.test | RUN | 0.274391 | 0.933061 | 0.955259 | 0.001195 | 0.001197 | 0.001221 |
| minus_eq_mm_test.test | RUN | 0.259368 | 0.866756 | 0.887127 | 0.000830 | 0.001158 | 0.001289 |
| minus_mm_test.test | RUN | 0.298582 | 1.092589 | 1.044217 | 0.001219 | 0.001291 | 0.001123 |
| mul_eq_mm_test.test | RUN | 0.243411 | 0.794274 | 0.798153 | 0.001372 | 0.001281 | 0.001053 |
| mul_eq_ms_test.test | RUN | 0.240346 | 0.584806 | 0.812034 | 0.001142 | 0.001258 | 0.001090 |
| mul_mm_test.test | RUN | 0.350194 | 1.806895 | 1.316215 | 0.001152 | 0.001225 | 0.001257 |
| mul_ms_test.test | RUN | 0.288792 | 0.945520 | 1.022349 | 0.001104 | 0.001240 | 0.001036 |
| mul_sm_test.test | RUN | 0.290245 | 0.935903 | 1.015814 | 0.001374 | 0.001428 | 0.001110 |
| mul_mv_test.test | RUN | 0.290204 | 1.011881 | 1.025876 | 0.001158 | 0.001229 | 0.001124 |
| inverse_m_test.test | RUN | 0.408588 | 1.864943 | 1.435167 | 0.001286 | 0.001185 | 0.001385 |
| plus_eq_mm_test.test | RUN | 0.269338 | 0.864441 | 0.903631 | 0.001198 | 0.001102 | 0.001256 |
| plus_mm_test.test | RUN | 0.305382 | 1.092839 | 1.052826 | 0.001170 | 0.001353 | 0.001086 |
| scalar_cast_m_test.test | RUN | 0.214603 | 0.493089 | 0.652052 | 0.001150 | 0.001176 | 0.001033 |
| mat_index_test.test | RUN | 0.176825 | 0.467665 | 0.570705 | 0.001083 | 0.001264 | 0.001125 |
| cmp_qq_test.test | RUN | 0.192321 | 0.431984 | 0.536591 | 0.001260 | 0.001255 | 0.001059 |
| conjugate_test.test | RUN | 0.190576 | 0.447664 | 0.557755 | 0.001469 | 0.001198 | 0.001079 |
| normalize_q_test.test | RUN | 0.198962 | 0.491774 | 0.571031 | 0.001378 | 0.001294 | 0.001094 |
| div_eq_qs_test.test | RUN | 0.185342 | 0.419291 | 0.537749 | 0.001140 | 0.001370 | 0.001171 |
| div_qs_test.test | RUN | 0.197871 | 0.445220 | 0.563371 | 0.001198 | 0.001137 | 0.001096 |
| dot_qq_test.test | RUN | 0.188399 | 0.439661 | 0.563567 | 0.001230 | 0.001192 | 0.001135 |
| eq_qq_test.test | RUN | 0.202007 | 0.459699 | 0.567589 | 0.001289 | 0.001332 | 0.001020 |
| inverse_q_test.test | RUN | 0.226974 | 0.605846 | 0.725568 | 0.001094 | 0.001344 | 0.001089 |
| mag_q_test.test | RUN | 0.186462 | 0.441858 | 0.550635 | 0.001130 | 0.001114 | 0.001082 |
| mag_sqr_q_test.test | RUN | 0.191534 | 0.436588 | 0.550945 | 0.001189 | 0.001299 | 0.001128 |
| minus_q_test.test | RUN | 0.183340 | 0.436219 | 0.554930 | 0.001174 | 0.001174 | 0.001075 |
| minus_eq_qq_test.test | RUN | 0.191922 | 0.441827 | 0.558318 | 0.001072 | 0.001289 | 0.001064 |
| minus_qq_test.test | RUN | 0.192182 | 0.457437 | 0.553124 | 0.001194 | 0.001275 | 0.001231 |
| mul_eq_qs_test.test | RUN | 0.190060 | 0.419643 | 0.552626 | 0.001106 | 0.001287 | 0.001144 |
| mul_qs_test.test | RUN | 0.186308 | 0.445168 | 0.563090 | 0.001156 | 0.001319 | 0.001060 |
| mul_qv_test.test | RUN | 0.238357 | 0.602223 | 0.735902 | 0.001111 | 0.001322 | 0.001229 |
| mul_qq_test.test | RUN | 0.227103 | 0.615907 | 0.698098 | 0.001099 | 0.001292 | 0.001079 |
| mul_eq_qq_test.test | RUN | 0.221362 | 0.615760 | 0.692650 | 0.000844 | 0.001278 | 0.001050 |
| plus_eq_qq_test.test | RUN | 0.188794 | 0.437864 | 0.546005 | 0.001280 | 0.001206 | 0.001040 |
| plus_qq_test.test | RUN | 0.191764 | 0.450472 | 0.559486 | 0.001171 | 0.001308 | 0.001181 |
| scalar_cast_q_test.test | RUN | 0.187893 | 0.414333 | 0.544544 | 0.001139 | 0.001202 | 0.001075 |
| slerp_test.test | RUN | 0.211821 | 0.888937 | 0.669416 | 0.015137 | 0.012774 | 0.013474 |
| convert_to_test.test | RUN | 0.277294 | 0.790119 | 1.053141 | 0.001137 | 0.001267 | 0.001107 |
| rot_mat_test.test | RUN | 0.474106 | 3.716073 | 3.280815 | 0.029430 | 0.032339 | 0.033950 |
| rot_quat_test.test | RUN | 0.232472 | 0.736821 | 0.724715 | 0.001165 | 0.001297 | 0.001111 |
| rotx_mat_test.test | RUN | 0.275938 | 0.971937 | 0.971041 | 0.001298 | 0.001276 | 0.001237 |
| rotx_quat_test.test | RUN | 0.228489 | 0.610471 | 0.677235 | 0.001111 | 0.001209 | 0.001103 |
| roty_mat_test.test | RUN | 0.277428 | 0.969763 | 0.973250 | 0.001320 | 0.001342 | 0.001248 |
| roty_quat_test.test | RUN | 0.227090 | 0.611980 | 0.696506 | 0.001199 | 0.001228 | 0.001168 |
| rotz_mat_test.test | RUN | 0.281396 | 1.096696 | 0.958438 | 0.001145 | 0.001210 | 0.001119 |
| rotz_quat_test.test | RUN | 0.232203 | 0.608332 | 0.689581 | 0.001164 | 0.001169 | 0.001072 |
| zero_vec_test.test | RUN | 0.197069 | 0.530941 | 0.597265 | 0.001145 | 0.000795 | 0.001157 |
| zero_mat_test.test | RUN | 0.235295 | 0.880615 | 0.801755 | 0.001205 | 0.001220 | 0.001118 |
| zero_quat_test.test | RUN | 0.189146 | 0.442049 | 0.546905 | 0.001163 | 0.001212 | 0.001184 |
| identity_mat_test.test | RUN | 0.233149 | 0.637569 | 0.721268 | 0.001150 | 0.001314 | 0.001019 |
| identity_quat_test.test | RUN | 0.193125 | 0.420489 | 0.539977 | 0.001233 | 0.001359 | 0.001065 |
| col_test.test | RUN | 0.379975 | 1.363284 | 1.595414 | 0.001063 | 0.001124 | 0.001153 |
| col_mat_test.test | RUN | 0.236390 | 0.613351 | 0.751659 | 0.001110 | 0.001101 | 0.001070 |
| neg_col_test.test | RUN | 0.286680 | 0.868322 | 0.960755 | 0.001016 | 0.001272 | 0.001176 |
| neg_row_test.test | RUN | 0.291932 | 0.888077 | 0.954985 | 0.001129 | 0.001206 | 0.001151 |
| del_col_test.test | RUN | 0.300304 | 0.972438 | 1.021207 | 0.001228 | 0.001191 | 0.001160 |
| del_row_test.test | RUN | 0.297525 | 0.941013 | 0.991684 | 0.001303 | 0.001291 | 0.001137 |
| del_row_col_test.test | RUN | 0.406059 | 1.767757 | 1.827560 | 0.001223 | 0.001134 | 0.001217 |
| swap_cols_test.test | RUN | 0.571451 | 2.406794 | 2.196471 | 0.001366 | 0.001309 | 0.001086 |
| swap_rows_test.test | RUN | 0.623604 | 2.525238 | 2.248119 | 0.001297 | 0.001454 | 0.001306 |
| diag_test.test | RUN | 0.252123 | 0.641270 | 0.876757 | 0.001106 | 0.001393 | 0.001089 |
| diag_mat_test.test | RUN | 0.246947 | 0.627508 | 0.777225 | 0.001227 | 0.001189 | 0.001036 |
| row_test.test | RUN | 0.373214 | 1.361966 | 1.614452 | 0.001079 | 0.001183 | 0.001106 |
| row_mat_test.test | RUN | 0.236796 | 0.591207 | 0.716974 | 0.001457 | 0.001250 | 0.001081 |
| transpose_test.test | RUN | 0.290493 | 0.920356 | 1.006859 | 0.001098 | 0.001219 | 0.001068 |
| translation_test.test | RUN | 0.234185 | 0.578076 | 0.756448 | 0.001080 | 0.001113 | 0.000951 |
| translation_mat_test.test | RUN | 0.249340 | 0.594004 | 0.814279 | 0.001139 | 0.001311 | 0.001013 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.083298 | 0.160021 | 0.222499 | — | — | — |
| swizzle2_test2.test | RUN | 0.099019 | 0.248224 | 0.307132 | 0.001291 | 0.001169 | 0.001065 |
| swizzle2_test3.test | RUN | 0.097328 | 0.252851 | 0.298173 | 0.001236 | 0.001085 | 0.001067 |
| swizzle2_test4.test | RUN | 0.103431 | 0.250349 | 0.297307 | 0.001056 | 0.001266 | 0.001121 |
| swizzle2_test.test | RUN | 0.331224 | 0.702292 | 0.947635 | 0.001153 | 0.001314 | 0.001125 |
| swizzle3_test2.test | RUN | 0.113701 | 0.270766 | 0.335933 | 0.001220 | 0.001116 | 0.001082 |
| swizzle3_test3.test | RUN | 0.111124 | 0.266481 | 0.331912 | 0.001192 | 0.001165 | 0.001139 |
| swizzle3_test4.test | RUN | 0.117601 | 0.268159 | 0.337320 | 0.001169 | 0.001240 | 0.001035 |
| swizzle3_test.test | RUN | 0.318687 | 0.706799 | 0.957062 | 0.001109 | 0.001334 | 0.001050 |
| swizzle4_test2.test | RUN | 0.190429 | 0.381773 | 0.533566 | 0.001357 | 0.001212 | 0.001093 |
| swizzle4_test3.test | RUN | 0.188730 | 0.385672 | 0.549182 | 0.001048 | 0.001191 | 0.001154 |
| swizzle4_test4.test | RUN | 0.191350 | 0.374406 | 0.530604 | 0.001074 | 0.001200 | 0.001090 |
| swizzle4_test.test | RUN | 0.320292 | 0.771910 | 0.986413 | 0.001102 | 0.001114 | 0.001121 |
| deduce_scalar_test.test | COMPILE | 0.016338 | 0.034920 | 0.051222 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125446 | 0.285615 | 0.366686 | 0.001351 | 0.001086 | 0.001098 |
| deduce_scalar_mv_test.test | RUN | 0.142337 | 0.340835 | 0.440511 | 0.001234 | 0.001171 | 0.001044 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.012744 | 0.023836 | 0.040267 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014607 | 0.032767 | 0.043388 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014502 | 0.029409 | 0.042879 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015230 | 0.031838 | 0.044611 | — | — | — |
| interop_test.test | RUN | 0.146855 | 0.432905 | 0.571368 | 0.000385 | 0.000372 | 0.000912 |
| transform_test.test | RUN | 0.291294 | 0.641727 | 0.872933 | 0.000901 | 0.000875 | 0.000863 |
| projection_test.test | RUN | 0.202999 | 0.435349 | 0.640228 | 0.000892 | 0.000845 | 0.000837 |
| scalar_traits_test.test | COMPILE | 0.015553 | 0.033928 | 0.050907 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.995×, 1.007× | 1.000× |
| clang | 1.042× | 1.052×, 1.032× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000825s | 0.000804s | 0.000823s | byte equality observed |
| access_q_test.test | 10 | 0.000799s | 0.000783s | 0.000809s | byte equality observed |
| access_v_test.test | 10 | 0.000799s | 0.000790s | 0.000848s | byte equality observed |
| assign_test.test | 10 | 0.000813s | 0.000829s | 0.000857s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000814s | 0.000817s | 0.000848s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000803s | 0.000792s | 0.000837s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000823s | 0.000790s | 0.000796s | byte equality observed |
| col_mat_test.test | 10 | 0.000795s | 0.000792s | 0.000788s | byte equality observed |
| col_test.test | 10 | 0.000813s | 0.000819s | 0.000826s | byte equality observed |
| conjugate_test.test | 10 | 0.000807s | 0.000797s | 0.000797s | byte equality observed |
| convert_to_test.test | 10 | 0.000820s | 0.000820s | 0.000828s | byte equality observed |
| cross_test.test | 10 | 0.000800s | 0.000830s | 0.000835s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000803s | 0.000847s | 0.000812s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000814s | 0.000815s | 0.000856s | byte equality observed |
| del_col_test.test | 10 | 0.000829s | 0.000803s | 0.000822s | byte equality observed |
| del_row_col_test.test | 10 | 0.000834s | 0.000814s | 0.000812s | byte equality observed |
| del_row_test.test | 10 | 0.000799s | 0.000806s | 0.000794s | byte equality observed |
| determinant_test.test | 10 | 0.000823s | 0.000841s | 0.000836s | byte equality observed |
| diag_mat_test.test | 10 | 0.000816s | 0.000814s | 0.000829s | byte equality observed |
| diag_test.test | 10 | 0.000799s | 0.000806s | 0.000803s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000784s | 0.000830s | 0.000807s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000807s | 0.000807s | 0.000816s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000807s | 0.000811s | 0.000798s | byte equality observed |
| div_ms_test.test | 10 | 0.000830s | 0.000830s | 0.000790s | byte equality observed |
| div_qs_test.test | 10 | 0.000839s | 0.000826s | 0.000812s | byte equality observed |
| div_vs_test.test | 10 | 0.000812s | 0.000787s | 0.000839s | byte equality observed |
| dot_qq_test.test | 10 | 0.000790s | 0.000796s | 0.000812s | byte equality observed |
| dot_vv_test.test | 10 | 0.000807s | 0.000790s | 0.000871s | byte equality observed |
| eq_mm_test.test | 10 | 0.000840s | 0.000804s | 0.000809s | byte equality observed |
| eq_qq_test.test | 10 | 0.000796s | 0.000780s | 0.000814s | byte equality observed |
| eq_vv_test.test | 10 | 0.000817s | 0.000819s | 0.000807s | byte equality observed |
| identity_mat_test.test | 10 | 0.000820s | 0.000811s | 0.000795s | byte equality observed |
| identity_quat_test.test | 10 | 0.000820s | 0.000799s | 0.000786s | byte equality observed |
| interop_test.test | 10 | 0.000368s | 0.000361s | 0.000780s | byte equality observed |
| inverse_m_test.test | 10 | 0.000849s | 0.000841s | 0.000851s | byte equality observed |
| inverse_q_test.test | 10 | 0.000831s | 0.000816s | 0.000816s | byte equality observed |
| mag_q_test.test | 10 | 0.000812s | 0.000811s | 0.000815s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000815s | 0.000827s | 0.000810s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000800s | 0.000788s | 0.000798s | byte equality observed |
| mag_v_test.test | 10 | 0.000795s | 0.000823s | 0.000799s | byte equality observed |
| mat_index_test.test | 10 | 0.000822s | 0.000833s | 0.000820s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000818s | 0.000831s | 0.000830s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000793s | 0.000801s | 0.000822s | byte equality observed |
| math_test.test | 10 | 0.001209s | 0.001166s | 0.001072s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000798s | 0.000802s | 0.000800s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000807s | 0.000786s | 0.000809s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000826s | 0.000807s | 0.000814s | byte equality observed |
| minus_m_test.test | 10 | 0.000850s | 0.000816s | 0.000811s | byte equality observed |
| minus_mm_test.test | 10 | 0.000832s | 0.000815s | 0.000827s | byte equality observed |
| minus_q_test.test | 10 | 0.000815s | 0.000844s | 0.000820s | byte equality observed |
| minus_qq_test.test | 10 | 0.000808s | 0.000844s | 0.000849s | byte equality observed |
| minus_v_test.test | 10 | 0.000827s | 0.000806s | 0.000850s | byte equality observed |
| minus_vv_test.test | 10 | 0.000819s | 0.000828s | 0.000840s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000822s | 0.000817s | 0.000842s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000836s | 0.000805s | 0.000812s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000855s | 0.000814s | 0.000819s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000836s | 0.000788s | 0.000814s | byte equality observed |
| mul_eq_vs_test.test | 9 | 0.000829s | 0.000801s | 0.000829s | byte equality observed |
| mul_mm_test.test | 10 | 0.000821s | 0.000828s | 0.000813s | byte equality observed |
| mul_ms_test.test | 10 | 0.000811s | 0.000843s | 0.000831s | byte equality observed |
| mul_mv_test.test | 10 | 0.000811s | 0.000836s | 0.000820s | byte equality observed |
| mul_qq_test.test | 10 | 0.000812s | 0.000856s | 0.000848s | byte equality observed |
| mul_qs_test.test | 10 | 0.000828s | 0.000811s | 0.000830s | byte equality observed |
| mul_qv_test.test | 10 | 0.000829s | 0.000812s | 0.000826s | byte equality observed |
| mul_sm_test.test | 10 | 0.000812s | 0.000803s | 0.000825s | byte equality observed |
| mul_sv_test.test | 10 | 0.000825s | 0.000809s | 0.000830s | byte equality observed |
| mul_vm_test.test | 10 | 0.000809s | 0.000838s | 0.000836s | byte equality observed |
| mul_vs_test.test | 10 | 0.000803s | 0.000822s | 0.000797s | byte equality observed |
| neg_col_test.test | 10 | 0.000806s | 0.000838s | 0.000812s | byte equality observed |
| neg_row_test.test | 10 | 0.000821s | 0.000808s | 0.000801s | byte equality observed |
| normalize_q_test.test | 10 | 0.000822s | 0.000846s | 0.000802s | byte equality observed |
| normalize_v_test.test | 10 | 0.000809s | 0.000835s | 0.000796s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000808s | 0.000809s | 0.000802s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000805s | 0.000834s | 0.000801s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000801s | 0.000829s | 0.000834s | byte equality observed |
| plus_mm_test.test | 10 | 0.000821s | 0.000813s | 0.000832s | byte equality observed |
| plus_qq_test.test | 10 | 0.000833s | 0.000816s | 0.000799s | byte equality observed |
| plus_vv_test.test | 10 | 0.000815s | 0.000820s | 0.000801s | byte equality observed |
| projection_test.test | 10 | 0.000827s | 0.000802s | 0.000821s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000819s | 0.000821s | 0.000773s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000778s | 0.000782s | 0.000766s | byte equality observed |
| rot_mat_test.test | 1 | 0.020010s | 0.022749s | 0.026246s | byte equality observed |
| rot_quat_test.test | 10 | 0.000750s | 0.000731s | 0.000770s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000796s | 0.000730s | 0.000776s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000810s | 0.000832s | 0.000845s | byte equality observed |
| roty_mat_test.test | 10 | 0.000831s | 0.000833s | 0.000846s | byte equality observed |
| roty_quat_test.test | 10 | 0.000819s | 0.000839s | 0.000829s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000837s | 0.000821s | 0.000865s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000820s | 0.000814s | 0.000852s | byte equality observed |
| row_mat_test.test | 10 | 0.000819s | 0.000781s | 0.000807s | byte equality observed |
| row_test.test | 10 | 0.000829s | 0.000787s | 0.000804s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000842s | 0.000792s | 0.000832s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000824s | 0.000780s | 0.000804s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000779s | 0.000803s | 0.000802s | byte equality observed |
| slerp_test.test | 2 | 0.011131s | 0.009298s | 0.009921s | byte equality observed |
| swap_cols_test.test | 10 | 0.000765s | 0.000746s | 0.000766s | byte equality observed |
| swap_rows_test.test | 9 | 0.000778s | 0.000758s | 0.000746s | byte equality observed |
| swizzle2_test.test | 10 | 0.000797s | 0.000847s | 0.000825s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000793s | 0.000807s | 0.000834s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000816s | 0.000797s | 0.000865s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000808s | 0.000792s | 0.000871s | byte equality observed |
| swizzle3_test.test | 10 | 0.000800s | 0.000800s | 0.000855s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000830s | 0.000801s | 0.000844s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000815s | 0.000831s | 0.000827s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000840s | 0.000805s | 0.000842s | byte equality observed |
| swizzle4_test.test | 10 | 0.000816s | 0.000832s | 0.000862s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000823s | 0.000827s | 0.000857s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000827s | 0.000804s | 0.000826s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000818s | 0.000829s | 0.000818s | byte equality observed |
| to_string_test.test | 10 | 0.000855s | 0.000815s | 0.000848s | byte equality observed |
| transform_test.test | 10 | 0.000843s | 0.000810s | 0.000853s | byte equality observed |
| translation_mat_test.test | 10 | 0.000805s | 0.000816s | 0.000822s | byte equality observed |
| translation_test.test | 10 | 0.000817s | 0.000831s | 0.000863s | byte equality observed |
| transpose_test.test | 10 | 0.000807s | 0.000810s | 0.000816s | byte equality observed |
| vec_index_test.test | 10 | 0.000810s | 0.000805s | 0.000806s | byte equality observed |
| vec_register_test.test | 10 | 0.000806s | 0.000800s | 0.000840s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000826s | 0.000804s | 0.000840s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000825s | 0.000810s | 0.000832s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000815s | 0.000821s | 0.000841s | byte equality observed |
| zero_mat_test.test | 10 | 0.000837s | 0.000821s | 0.000794s | byte equality observed |
| zero_quat_test.test | 10 | 0.000841s | 0.000790s | 0.000810s | byte equality observed |
| zero_vec_test.test | 10 | 0.000812s | 0.000788s | 0.000844s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
