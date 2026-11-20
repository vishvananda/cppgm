# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.196744 | 0.549701 | 0.592752 | 0.001719 | 0.001766 | 0.001628 |
| mat_traits_array_test.test | RUN | 0.152313 | 0.555385 | 0.457235 | 0.001654 | 0.001229 | 0.001266 |
| mat_traits_std_array_test.test | RUN | 0.151092 | 0.426670 | 0.468593 | 0.001419 | 0.001131 | 0.001036 |
| vec_traits_array_test.test | RUN | 0.130241 | 0.430906 | 0.388971 | 0.001370 | 0.001367 | 0.001156 |
| vec_traits_gnuc_test.test | RUN | 0.235735 | 0.521350 | 0.757316 | 0.001215 | 0.001255 | 0.001238 |
| vec_traits_std_array_test.test | RUN | 0.130385 | 0.331319 | 0.388925 | 0.001387 | 0.001384 | 0.001260 |
| quat_traits_array_test.test | RUN | 0.128761 | 0.449756 | 0.389520 | 0.001258 | 0.001242 | 0.000969 |
| quat_traits_std_array_test.test | RUN | 0.129290 | 0.334572 | 0.394277 | 0.001268 | 0.001168 | 0.001245 |
| access_m_test.test | RUN | 0.211455 | 0.803514 | 0.876838 | 0.001235 | 0.001324 | 0.000874 |
| access_m_fail1.test | COMPILE_FAIL | 0.020566 | 0.034605 | 0.058954 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.021219 | 0.032810 | 0.060224 | — | — | — |
| access_q_test.test | RUN | 0.176125 | 0.411583 | 0.525877 | 0.001349 | 0.001259 | 0.001283 |
| access_q_fail.test | COMPILE_FAIL | 0.015777 | 0.027110 | 0.049539 | — | — | — |
| access_v_test.test | RUN | 0.179246 | 0.421674 | 0.515087 | 0.001292 | 0.001357 | 0.001197 |
| access_v_fail1.test | COMPILE_FAIL | 0.013397 | 0.023762 | 0.042873 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014142 | 0.025319 | 0.044196 | — | — | — |
| assign_test.test | RUN | 0.265316 | 0.686192 | 0.965022 | 0.001131 | 0.001328 | 0.001278 |
| to_string_test.test | RUN | 0.313581 | 1.153256 | 5.663506 | 0.001200 | 0.001323 | 0.001250 |
| cmp_vv_test.test | RUN | 0.219130 | 0.545322 | 0.633722 | 0.001328 | 0.001323 | 0.001195 |
| cross_test.test | RUN | 0.211905 | 0.500564 | 0.634974 | 0.001107 | 0.001335 | 0.001276 |
| div_eq_vs_test.test | RUN | 0.199682 | 0.464584 | 0.621509 | 0.001381 | 0.001313 | 0.001319 |
| div_vs_test.test | RUN | 0.210598 | 0.581695 | 0.663794 | 0.001440 | 0.001310 | 0.001238 |
| dot_vv_test.test | RUN | 0.201744 | 0.511542 | 0.620832 | 0.001039 | 0.001289 | 0.001378 |
| eq_vv_test.test | RUN | 0.224843 | 0.578576 | 0.674460 | 0.001217 | 0.001342 | 0.001172 |
| mag_v_test.test | RUN | 0.181968 | 0.472785 | 0.610214 | 0.001315 | 0.001194 | 0.001176 |
| mag_sqr_v_test.test | RUN | 0.198093 | 0.467747 | 0.607507 | 0.001270 | 0.001460 | 0.001177 |
| minus_v_test.test | RUN | 0.200894 | 0.547332 | 0.654932 | 0.001359 | 0.001286 | 0.001382 |
| minus_eq_vv_test.test | RUN | 0.206172 | 0.535554 | 0.634877 | 0.001247 | 0.001243 | 0.001264 |
| minus_vv_test.test | RUN | 0.215680 | 0.577402 | 0.648906 | 0.001286 | 0.001271 | 0.001201 |
| mul_eq_vs_test.test | RUN | 0.202281 | 0.470704 | 0.632850 | 0.001270 | 0.001186 | 0.000899 |
| mul_vs_test.test | RUN | 0.216338 | 0.574567 | 0.674497 | 0.001246 | 0.001388 | 0.001206 |
| mul_sv_test.test | RUN | 0.212146 | 0.585970 | 0.648047 | 0.001086 | 0.001250 | 0.001240 |
| mul_vm_test.test | RUN | 0.299929 | 1.033264 | 1.049475 | 0.001165 | 0.001370 | 0.001308 |
| normalize_v_test.test | RUN | 0.216407 | 0.697765 | 0.637480 | 0.001195 | 0.001369 | 0.001352 |
| plus_eq_vv_test.test | RUN | 0.202489 | 0.536057 | 0.631400 | 0.001282 | 0.001286 | 0.001193 |
| plus_vv_test.test | RUN | 0.217456 | 0.575934 | 0.656524 | 0.001157 | 0.001359 | 0.001262 |
| scalar_cast_v_test.test | RUN | 0.196208 | 0.427963 | 0.575629 | 0.001212 | 0.001224 | 0.001260 |
| vec_index_test.test | RUN | 0.171958 | 0.439944 | 0.526790 | 0.001338 | 0.001292 | 0.001340 |
| vec_register_test.test | RUN | 0.113017 | 0.397598 | 0.372808 | 0.001648 | 0.001238 | 0.001393 |
| cmp_mm_test.test | RUN | 0.347354 | 1.282336 | 1.381967 | 0.001428 | 0.001394 | 0.001546 |
| determinant_test.test | RUN | 0.242534 | 0.643163 | 0.723482 | 0.001424 | 0.001413 | 0.001465 |
| div_eq_ms_test.test | RUN | 0.239613 | 0.591914 | 0.831820 | 0.001242 | 0.001173 | 0.001370 |
| div_ms_test.test | RUN | 0.282894 | 0.965728 | 1.018396 | 0.001301 | 0.001225 | 0.001213 |
| eq_mm_test.test | RUN | 0.334217 | 1.179138 | 1.305449 | 0.001268 | 0.001283 | 0.001171 |
| minus_m_test.test | RUN | 0.279280 | 0.944072 | 0.982963 | 0.001480 | 0.001275 | 0.001215 |
| minus_eq_mm_test.test | RUN | 0.270641 | 0.877941 | 0.934590 | 0.001288 | 0.001198 | 0.001376 |
| minus_mm_test.test | RUN | 0.297621 | 1.117044 | 1.095018 | 0.001219 | 0.001289 | 0.001328 |
| mul_eq_mm_test.test | RUN | 0.250786 | 0.801430 | 0.809306 | 0.001424 | 0.001381 | 0.001250 |
| mul_eq_ms_test.test | RUN | 0.239684 | 0.600382 | 0.825216 | 0.001183 | 0.001189 | 0.001211 |
| mul_mm_test.test | RUN | 0.349543 | 1.825087 | 1.347924 | 0.001291 | 0.001290 | 0.001246 |
| mul_ms_test.test | RUN | 0.295477 | 0.960943 | 1.037792 | 0.001285 | 0.001255 | 0.001251 |
| mul_sm_test.test | RUN | 0.292028 | 0.954921 | 1.033897 | 0.001177 | 0.001266 | 0.001177 |
| mul_mv_test.test | RUN | 0.297938 | 1.025627 | 1.039981 | 0.001287 | 0.001242 | 0.001178 |
| inverse_m_test.test | RUN | 0.407840 | 1.894272 | 1.487741 | 0.001560 | 0.001320 | 0.001502 |
| plus_eq_mm_test.test | RUN | 0.265685 | 0.873420 | 0.918209 | 0.001226 | 0.001197 | 0.001406 |
| plus_mm_test.test | RUN | 0.302107 | 1.109815 | 1.068031 | 0.001472 | 0.001185 | 0.001266 |
| scalar_cast_m_test.test | RUN | 0.225388 | 0.490953 | 0.668031 | 0.001315 | 0.001488 | 0.001423 |
| mat_index_test.test | RUN | 0.184406 | 0.476097 | 0.581040 | 0.001344 | 0.001244 | 0.001366 |
| cmp_qq_test.test | RUN | 0.203582 | 0.442554 | 0.554442 | 0.001328 | 0.001212 | 0.001220 |
| conjugate_test.test | RUN | 0.192505 | 0.446820 | 0.570554 | 0.001278 | 0.001292 | 0.001244 |
| normalize_q_test.test | RUN | 0.198271 | 0.503585 | 0.594479 | 0.001338 | 0.001124 | 0.001265 |
| div_eq_qs_test.test | RUN | 0.195123 | 0.426293 | 0.560928 | 0.001192 | 0.001253 | 0.001221 |
| div_qs_test.test | RUN | 0.201155 | 0.447694 | 0.575229 | 0.001306 | 0.001151 | 0.001330 |
| dot_qq_test.test | RUN | 0.200025 | 0.446137 | 0.577375 | 0.001204 | 0.001369 | 0.001255 |
| eq_qq_test.test | RUN | 0.198491 | 0.466109 | 0.579473 | 0.001320 | 0.001239 | 0.001250 |
| inverse_q_test.test | RUN | 0.237798 | 0.614729 | 0.737060 | 0.001192 | 0.001287 | 0.001312 |
| mag_q_test.test | RUN | 0.198586 | 0.442978 | 0.572205 | 0.001376 | 0.001243 | 0.001265 |
| mag_sqr_q_test.test | RUN | 0.198673 | 0.455659 | 0.559573 | 0.001107 | 0.001317 | 0.001345 |
| minus_q_test.test | RUN | 0.195008 | 0.454307 | 0.561493 | 0.001353 | 0.001147 | 0.001341 |
| minus_eq_qq_test.test | RUN | 0.195932 | 0.456571 | 0.575091 | 0.001112 | 0.001163 | 0.001070 |
| minus_qq_test.test | RUN | 0.204289 | 0.463536 | 0.585711 | 0.001451 | 0.001282 | 0.001114 |
| mul_eq_qs_test.test | RUN | 0.197974 | 0.434842 | 0.563272 | 0.001196 | 0.001202 | 0.001179 |
| mul_qs_test.test | RUN | 0.195492 | 0.453977 | 0.566761 | 0.001072 | 0.001231 | 0.001137 |
| mul_qv_test.test | RUN | 0.246735 | 0.622901 | 0.748988 | 0.001390 | 0.001391 | 0.001352 |
| mul_qq_test.test | RUN | 0.237314 | 0.628249 | 0.729033 | 0.001294 | 0.001218 | 0.001350 |
| mul_eq_qq_test.test | RUN | 0.232285 | 0.633782 | 0.712080 | 0.001248 | 0.001242 | 0.001326 |
| plus_eq_qq_test.test | RUN | 0.192711 | 0.446429 | 0.565189 | 0.001469 | 0.001371 | 0.001294 |
| plus_qq_test.test | RUN | 0.201004 | 0.452845 | 0.584990 | 0.001332 | 0.001363 | 0.001471 |
| scalar_cast_q_test.test | RUN | 0.201099 | 0.426311 | 0.568272 | 0.001282 | 0.001350 | 0.001261 |
| slerp_test.test | RUN | 0.214560 | 0.901026 | 0.687786 | 0.015277 | 0.013367 | 0.013370 |
| convert_to_test.test | RUN | 0.291564 | 0.818954 | 1.062626 | 0.001226 | 0.001260 | 0.001274 |
| rot_mat_test.test | RUN | 0.473426 | 3.750775 | 3.374542 | 0.029919 | 0.030878 | 0.034346 |
| rot_quat_test.test | RUN | 0.243521 | 0.744818 | 0.750177 | 0.001487 | 0.001428 | 0.001248 |
| rotx_mat_test.test | RUN | 0.282172 | 0.986127 | 0.976495 | 0.001673 | 0.001219 | 0.000898 |
| rotx_quat_test.test | RUN | 0.234016 | 0.626165 | 0.707754 | 0.001349 | 0.001215 | 0.001297 |
| roty_mat_test.test | RUN | 0.279311 | 0.977400 | 0.952103 | 0.001404 | 0.001223 | 0.001201 |
| roty_quat_test.test | RUN | 0.243897 | 0.622009 | 0.714440 | 0.001202 | 0.001330 | 0.001192 |
| rotz_mat_test.test | RUN | 0.289534 | 1.109407 | 1.044726 | 0.001348 | 0.001140 | 0.001385 |
| rotz_quat_test.test | RUN | 0.237099 | 0.627213 | 0.670174 | 0.001403 | 0.001259 | 0.001414 |
| zero_vec_test.test | RUN | 0.208356 | 0.536227 | 0.606581 | 0.001289 | 0.001261 | 0.001224 |
| zero_mat_test.test | RUN | 0.242820 | 0.890528 | 0.850108 | 0.001325 | 0.001220 | 0.001268 |
| zero_quat_test.test | RUN | 0.193252 | 0.442730 | 0.557134 | 0.001264 | 0.001276 | 0.001210 |
| identity_mat_test.test | RUN | 0.235634 | 0.658192 | 0.721273 | 0.000989 | 0.001235 | 0.001274 |
| identity_quat_test.test | RUN | 0.203443 | 0.419736 | 0.554984 | 0.001436 | 0.001248 | 0.001242 |
| col_test.test | RUN | 0.394395 | 1.402376 | 1.634456 | 0.001297 | 0.001231 | 0.001254 |
| col_mat_test.test | RUN | 0.247762 | 0.621696 | 0.763780 | 0.001219 | 0.001379 | 0.001286 |
| neg_col_test.test | RUN | 0.287427 | 0.865132 | 0.977759 | 0.001231 | 0.001381 | 0.001262 |
| neg_row_test.test | RUN | 0.298148 | 0.887466 | 0.973024 | 0.001431 | 0.001162 | 0.001184 |
| del_col_test.test | RUN | 0.306941 | 0.981664 | 1.021753 | 0.001352 | 0.001291 | 0.001636 |
| del_row_test.test | RUN | 0.306738 | 0.946138 | 1.018316 | 0.001308 | 0.001346 | 0.001391 |
| del_row_col_test.test | RUN | 0.437124 | 1.797920 | 1.864516 | 0.001551 | 0.001238 | 0.001248 |
| swap_cols_test.test | RUN | 0.580917 | 2.426778 | 2.332507 | 0.001406 | 0.001162 | 0.001264 |
| swap_rows_test.test | RUN | 0.642991 | 2.543658 | 2.286072 | 0.001520 | 0.001248 | 0.001135 |
| diag_test.test | RUN | 0.262831 | 0.652364 | 0.857435 | 0.001317 | 0.001315 | 0.001129 |
| diag_mat_test.test | RUN | 0.261457 | 0.638718 | 0.792569 | 0.001334 | 0.001308 | 0.001165 |
| row_test.test | RUN | 0.391394 | 1.389586 | 1.633762 | 0.001412 | 0.001193 | 0.001173 |
| row_mat_test.test | RUN | 0.257079 | 0.620622 | 0.730432 | 0.001372 | 0.001101 | 0.001354 |
| transpose_test.test | RUN | 0.307228 | 0.941681 | 1.036666 | 0.001393 | 0.001343 | 0.001284 |
| translation_test.test | RUN | 0.242697 | 0.590157 | 0.763057 | 0.001238 | 0.001252 | 0.001192 |
| translation_mat_test.test | RUN | 0.259684 | 0.595474 | 0.841777 | 0.001722 | 0.001234 | 0.001237 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.090207 | 0.169804 | 0.223033 | — | — | — |
| swizzle2_test2.test | RUN | 0.106874 | 0.257514 | 0.311901 | 0.001252 | 0.001241 | 0.001114 |
| swizzle2_test3.test | RUN | 0.104563 | 0.256741 | 0.303775 | 0.001287 | 0.001366 | 0.001169 |
| swizzle2_test4.test | RUN | 0.108723 | 0.256504 | 0.300857 | 0.001277 | 0.001170 | 0.001189 |
| swizzle2_test.test | RUN | 0.335129 | 0.709118 | 0.994330 | 0.001242 | 0.001225 | 0.001275 |
| swizzle3_test2.test | RUN | 0.117177 | 0.273826 | 0.336154 | 0.001163 | 0.001272 | 0.001376 |
| swizzle3_test3.test | RUN | 0.115487 | 0.276200 | 0.340770 | 0.001174 | 0.001310 | 0.001275 |
| swizzle3_test4.test | RUN | 0.116325 | 0.268365 | 0.342297 | 0.001161 | 0.001329 | 0.001202 |
| swizzle3_test.test | RUN | 0.334721 | 0.709643 | 0.995116 | 0.001252 | 0.001513 | 0.001099 |
| swizzle4_test2.test | RUN | 0.193488 | 0.382816 | 0.560568 | 0.001290 | 0.001253 | 0.001124 |
| swizzle4_test3.test | RUN | 0.194199 | 0.389264 | 0.555537 | 0.001175 | 0.001296 | 0.001131 |
| swizzle4_test4.test | RUN | 0.196785 | 0.385965 | 0.550654 | 0.001427 | 0.001202 | 0.001278 |
| swizzle4_test.test | RUN | 0.336497 | 0.779798 | 1.030905 | 0.001225 | 0.001246 | 0.001402 |
| deduce_scalar_test.test | COMPILE | 0.017857 | 0.035295 | 0.053828 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.126782 | 0.297916 | 0.370920 | 0.001426 | 0.001308 | 0.001247 |
| deduce_scalar_mv_test.test | RUN | 0.150930 | 0.347556 | 0.442259 | 0.001266 | 0.001092 | 0.001185 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013649 | 0.023175 | 0.043540 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014912 | 0.033483 | 0.048220 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.016412 | 0.031763 | 0.049009 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015685 | 0.030388 | 0.046119 | — | — | — |
| interop_test.test | RUN | 0.159088 | 0.411411 | 0.583866 | 0.000458 | 0.000398 | 0.000906 |
| transform_test.test | RUN | 0.304843 | 0.633148 | 0.907349 | 0.001040 | 0.000882 | 0.000873 |
| projection_test.test | RUN | 0.176338 | 0.494663 | 0.649854 | 0.000996 | 0.000910 | 0.000976 |
| scalar_traits_test.test | COMPILE | 0.016030 | 0.034681 | 0.052518 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.992×, 0.992× | 0.997× |
| clang | 1.044× | 1.032×, 1.056× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000817s | 0.000835s | 0.000817s | byte equality observed |
| access_q_test.test | 10 | 0.000817s | 0.000797s | 0.000839s | byte equality observed |
| access_v_test.test | 10 | 0.000813s | 0.000797s | 0.000789s | byte equality observed |
| assign_test.test | 10 | 0.000818s | 0.000790s | 0.000793s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000836s | 0.000798s | 0.000826s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000838s | 0.000808s | 0.000819s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000836s | 0.000801s | 0.000827s | byte equality observed |
| col_mat_test.test | 10 | 0.000830s | 0.000839s | 0.000834s | byte equality observed |
| col_test.test | 10 | 0.000839s | 0.000835s | 0.000823s | byte equality observed |
| conjugate_test.test | 10 | 0.000831s | 0.000820s | 0.000833s | byte equality observed |
| convert_to_test.test | 10 | 0.000840s | 0.000811s | 0.000797s | byte equality observed |
| cross_test.test | 10 | 0.000809s | 0.000815s | 0.000835s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000824s | 0.000784s | 0.000819s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000837s | 0.000823s | 0.000813s | byte equality observed |
| del_col_test.test | 10 | 0.000810s | 0.000827s | 0.000830s | byte equality observed |
| del_row_col_test.test | 10 | 0.000816s | 0.000811s | 0.000841s | byte equality observed |
| del_row_test.test | 10 | 0.000830s | 0.000806s | 0.000809s | byte equality observed |
| determinant_test.test | 10 | 0.000829s | 0.000810s | 0.000830s | byte equality observed |
| diag_mat_test.test | 10 | 0.000830s | 0.000809s | 0.000828s | byte equality observed |
| diag_test.test | 10 | 0.000816s | 0.000788s | 0.000812s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000830s | 0.000819s | 0.000805s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000822s | 0.000801s | 0.000790s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000818s | 0.000809s | 0.000789s | byte equality observed |
| div_ms_test.test | 10 | 0.000820s | 0.000820s | 0.000793s | byte equality observed |
| div_qs_test.test | 10 | 0.000789s | 0.000808s | 0.000834s | byte equality observed |
| div_vs_test.test | 10 | 0.000799s | 0.000802s | 0.000847s | byte equality observed |
| dot_qq_test.test | 10 | 0.000800s | 0.000812s | 0.000806s | byte equality observed |
| dot_vv_test.test | 10 | 0.000828s | 0.000828s | 0.000819s | byte equality observed |
| eq_mm_test.test | 10 | 0.000818s | 0.000855s | 0.000807s | byte equality observed |
| eq_qq_test.test | 10 | 0.000825s | 0.000834s | 0.000825s | byte equality observed |
| eq_vv_test.test | 10 | 0.000819s | 0.000807s | 0.000814s | byte equality observed |
| identity_mat_test.test | 10 | 0.000810s | 0.000843s | 0.000801s | byte equality observed |
| identity_quat_test.test | 10 | 0.000804s | 0.000806s | 0.000789s | byte equality observed |
| interop_test.test | 10 | 0.000375s | 0.000375s | 0.000788s | byte equality observed |
| inverse_m_test.test | 10 | 0.000859s | 0.000844s | 0.000831s | byte equality observed |
| inverse_q_test.test | 10 | 0.000815s | 0.000801s | 0.000797s | byte equality observed |
| mag_q_test.test | 10 | 0.000822s | 0.000808s | 0.000805s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000797s | 0.000812s | 0.000813s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000824s | 0.000828s | 0.000785s | byte equality observed |
| mag_v_test.test | 10 | 0.000810s | 0.000830s | 0.000800s | byte equality observed |
| mat_index_test.test | 10 | 0.000826s | 0.000823s | 0.000796s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000844s | 0.000842s | 0.000795s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000803s | 0.000793s | 0.000813s | byte equality observed |
| math_test.test | 10 | 0.001217s | 0.001186s | 0.001067s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000805s | 0.000809s | 0.000815s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000785s | 0.000832s | 0.000812s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000807s | 0.000837s | 0.000832s | byte equality observed |
| minus_m_test.test | 10 | 0.000831s | 0.000825s | 0.000855s | byte equality observed |
| minus_mm_test.test | 10 | 0.000822s | 0.000786s | 0.000794s | byte equality observed |
| minus_q_test.test | 10 | 0.000798s | 0.000794s | 0.000820s | byte equality observed |
| minus_qq_test.test | 10 | 0.000814s | 0.000805s | 0.000842s | byte equality observed |
| minus_v_test.test | 10 | 0.000821s | 0.000816s | 0.000820s | byte equality observed |
| minus_vv_test.test | 10 | 0.000804s | 0.000818s | 0.000810s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000802s | 0.000812s | 0.000808s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000825s | 0.000813s | 0.000826s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000842s | 0.000848s | 0.000816s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000802s | 0.000822s | 0.000821s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000791s | 0.000806s | 0.000840s | byte equality observed |
| mul_mm_test.test | 10 | 0.000811s | 0.000858s | 0.000784s | byte equality observed |
| mul_ms_test.test | 10 | 0.000791s | 0.000827s | 0.000803s | byte equality observed |
| mul_mv_test.test | 10 | 0.000835s | 0.000823s | 0.000783s | byte equality observed |
| mul_qq_test.test | 10 | 0.000821s | 0.000846s | 0.000817s | byte equality observed |
| mul_qs_test.test | 10 | 0.000822s | 0.000832s | 0.000794s | byte equality observed |
| mul_qv_test.test | 10 | 0.000843s | 0.000833s | 0.000830s | byte equality observed |
| mul_sm_test.test | 10 | 0.000809s | 0.000820s | 0.000834s | byte equality observed |
| mul_sv_test.test | 10 | 0.000831s | 0.000815s | 0.000824s | byte equality observed |
| mul_vm_test.test | 10 | 0.000821s | 0.000854s | 0.000813s | byte equality observed |
| mul_vs_test.test | 10 | 0.000825s | 0.000835s | 0.000820s | byte equality observed |
| neg_col_test.test | 10 | 0.000837s | 0.000816s | 0.000811s | byte equality observed |
| neg_row_test.test | 10 | 0.000824s | 0.000800s | 0.000832s | byte equality observed |
| normalize_q_test.test | 10 | 0.000824s | 0.000815s | 0.000801s | byte equality observed |
| normalize_v_test.test | 10 | 0.000833s | 0.000812s | 0.000826s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000831s | 0.000805s | 0.000805s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000816s | 0.000830s | 0.000800s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000821s | 0.000824s | 0.000829s | byte equality observed |
| plus_mm_test.test | 10 | 0.000820s | 0.000842s | 0.000829s | byte equality observed |
| plus_qq_test.test | 10 | 0.000837s | 0.000814s | 0.000827s | byte equality observed |
| plus_vv_test.test | 10 | 0.000817s | 0.000837s | 0.000838s | byte equality observed |
| projection_test.test | 10 | 0.000825s | 0.000853s | 0.000833s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000841s | 0.000824s | 0.000818s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000800s | 0.000793s | 0.000786s | byte equality observed |
| rot_mat_test.test | 1 | 0.020243s | 0.021812s | 0.026399s | byte equality observed |
| rot_quat_test.test | 10 | 0.000757s | 0.000759s | 0.000758s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000802s | 0.000794s | 0.000762s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000823s | 0.000844s | 0.000814s | byte equality observed |
| roty_mat_test.test | 10 | 0.000839s | 0.000867s | 0.000849s | byte equality observed |
| roty_quat_test.test | 10 | 0.000820s | 0.000846s | 0.000839s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000828s | 0.000850s | 0.000822s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000812s | 0.000840s | 0.000826s | byte equality observed |
| row_mat_test.test | 10 | 0.000807s | 0.000853s | 0.000837s | byte equality observed |
| row_test.test | 10 | 0.000827s | 0.000828s | 0.000818s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000797s | 0.000857s | 0.000843s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000811s | 0.000819s | 0.000803s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000771s | 0.000789s | 0.000812s | byte equality observed |
| slerp_test.test | 2 | 0.011144s | 0.009467s | 0.009840s | byte equality observed |
| swap_cols_test.test | 10 | 0.000745s | 0.000738s | 0.000738s | byte equality observed |
| swap_rows_test.test | 10 | 0.000763s | 0.000774s | 0.000752s | byte equality observed |
| swizzle2_test.test | 10 | 0.000833s | 0.000791s | 0.000826s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000822s | 0.000830s | 0.000803s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000801s | 0.000844s | 0.000831s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000801s | 0.000837s | 0.000809s | byte equality observed |
| swizzle3_test.test | 10 | 0.000803s | 0.000823s | 0.000821s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000813s | 0.000807s | 0.000833s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000803s | 0.000854s | 0.000849s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000813s | 0.000842s | 0.000838s | byte equality observed |
| swizzle4_test.test | 10 | 0.000797s | 0.000834s | 0.000845s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000828s | 0.000814s | 0.000832s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000842s | 0.000821s | 0.000837s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000800s | 0.000814s | 0.000823s | byte equality observed |
| to_string_test.test | 10 | 0.000861s | 0.000852s | 0.000841s | byte equality observed |
| transform_test.test | 10 | 0.000849s | 0.000818s | 0.000811s | byte equality observed |
| translation_mat_test.test | 10 | 0.000796s | 0.000816s | 0.000817s | byte equality observed |
| translation_test.test | 10 | 0.000813s | 0.000798s | 0.000816s | byte equality observed |
| transpose_test.test | 10 | 0.000811s | 0.000801s | 0.000806s | byte equality observed |
| vec_index_test.test | 10 | 0.000812s | 0.000807s | 0.000812s | byte equality observed |
| vec_register_test.test | 10 | 0.000842s | 0.000834s | 0.000806s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000839s | 0.000826s | 0.000827s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000837s | 0.000843s | 0.000843s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000840s | 0.000852s | 0.000829s | byte equality observed |
| zero_mat_test.test | 10 | 0.000835s | 0.000843s | 0.000820s | byte equality observed |
| zero_quat_test.test | 10 | 0.000826s | 0.000851s | 0.000791s | byte equality observed |
| zero_vec_test.test | 10 | 0.000807s | 0.000857s | 0.000815s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
