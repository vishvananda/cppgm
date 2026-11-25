# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.196398 | 0.560132 | 0.594708 | 0.001667 | 0.001670 | 0.001717 |
| mat_traits_array_test.test | RUN | 0.150331 | 0.554379 | 0.461810 | 0.001438 | 0.001175 | 0.001388 |
| mat_traits_std_array_test.test | RUN | 0.151158 | 0.418706 | 0.466753 | 0.001450 | 0.001167 | 0.001176 |
| vec_traits_array_test.test | RUN | 0.132705 | 0.425253 | 0.399187 | 0.001297 | 0.001440 | 0.001174 |
| vec_traits_gnuc_test.test | RUN | 0.236791 | 0.524528 | 0.766013 | 0.001070 | 0.001128 | 0.001283 |
| vec_traits_std_array_test.test | RUN | 0.133390 | 0.334936 | 0.395448 | 0.001312 | 0.001268 | 0.001519 |
| quat_traits_array_test.test | RUN | 0.126476 | 0.453746 | 0.390270 | 0.001339 | 0.001325 | 0.001210 |
| quat_traits_std_array_test.test | RUN | 0.130132 | 0.338926 | 0.396913 | 0.001092 | 0.001332 | 0.001418 |
| access_m_test.test | RUN | 0.211674 | 0.803212 | 0.881509 | 0.001362 | 0.001392 | 0.001201 |
| access_m_fail1.test | COMPILE_FAIL | 0.019642 | 0.034634 | 0.059760 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019403 | 0.035163 | 0.059881 | — | — | — |
| access_q_test.test | RUN | 0.173803 | 0.408907 | 0.536254 | 0.001134 | 0.001403 | 0.001372 |
| access_q_fail.test | COMPILE_FAIL | 0.015455 | 0.027232 | 0.051021 | — | — | — |
| access_v_test.test | RUN | 0.172308 | 0.428077 | 0.538411 | 0.001128 | 0.001203 | 0.001238 |
| access_v_fail1.test | COMPILE_FAIL | 0.014026 | 0.025057 | 0.043958 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014117 | 0.025697 | 0.044618 | — | — | — |
| assign_test.test | RUN | 0.259959 | 0.684510 | 0.932777 | 0.001498 | 0.001333 | 0.001346 |
| to_string_test.test | RUN | 0.316792 | 1.161854 | 5.708816 | 0.001260 | 0.001260 | 0.001247 |
| cmp_vv_test.test | RUN | 0.211847 | 0.555674 | 0.633527 | 0.001342 | 0.001290 | 0.001462 |
| cross_test.test | RUN | 0.208371 | 0.506806 | 0.642326 | 0.001336 | 0.001315 | 0.001315 |
| div_eq_vs_test.test | RUN | 0.199089 | 0.465889 | 0.623374 | 0.001532 | 0.001283 | 0.001229 |
| div_vs_test.test | RUN | 0.207253 | 0.579176 | 0.666224 | 0.001184 | 0.001307 | 0.001132 |
| dot_vv_test.test | RUN | 0.201847 | 0.511049 | 0.609976 | 0.001144 | 0.001340 | 0.001131 |
| eq_vv_test.test | RUN | 0.225324 | 0.577633 | 0.681872 | 0.001143 | 0.001217 | 0.001218 |
| mag_v_test.test | RUN | 0.198231 | 0.473567 | 0.593748 | 0.001179 | 0.001230 | 0.001339 |
| mag_sqr_v_test.test | RUN | 0.197081 | 0.468911 | 0.595836 | 0.001190 | 0.001374 | 0.001219 |
| minus_v_test.test | RUN | 0.203693 | 0.551997 | 0.654391 | 0.001325 | 0.001214 | 0.001252 |
| minus_eq_vv_test.test | RUN | 0.204128 | 0.543621 | 0.630675 | 0.001152 | 0.001230 | 0.001262 |
| minus_vv_test.test | RUN | 0.208915 | 0.573328 | 0.656640 | 0.001307 | 0.001201 | 0.001187 |
| mul_eq_vs_test.test | RUN | 0.194516 | 0.467234 | 0.629629 | 0.001174 | 0.001374 | 0.001155 |
| mul_vs_test.test | RUN | 0.209704 | 0.575552 | 0.674473 | 0.001238 | 0.001231 | 0.001213 |
| mul_sv_test.test | RUN | 0.210746 | 0.575450 | 0.658862 | 0.001106 | 0.001415 | 0.001178 |
| mul_vm_test.test | RUN | 0.289024 | 1.032846 | 1.043674 | 0.001178 | 0.001267 | 0.001356 |
| normalize_v_test.test | RUN | 0.217901 | 0.717569 | 0.683502 | 0.001286 | 0.001297 | 0.001285 |
| plus_eq_vv_test.test | RUN | 0.201226 | 0.527774 | 0.587597 | 0.001191 | 0.001216 | 0.001376 |
| plus_vv_test.test | RUN | 0.213360 | 0.582192 | 0.654023 | 0.001035 | 0.001497 | 0.001369 |
| scalar_cast_v_test.test | RUN | 0.196441 | 0.431557 | 0.561192 | 0.001175 | 0.001235 | 0.001178 |
| vec_index_test.test | RUN | 0.171612 | 0.443819 | 0.521206 | 0.001041 | 0.001272 | 0.001347 |
| vec_register_test.test | RUN | 0.110612 | 0.391686 | 0.375153 | 0.001294 | 0.001338 | 0.001461 |
| cmp_mm_test.test | RUN | 0.360060 | 1.275824 | 1.383692 | 0.001367 | 0.001125 | 0.001224 |
| determinant_test.test | RUN | 0.225396 | 0.646748 | 0.738507 | 0.001467 | 0.001368 | 0.001378 |
| div_eq_ms_test.test | RUN | 0.230280 | 0.598230 | 0.825523 | 0.001194 | 0.001247 | 0.001412 |
| div_ms_test.test | RUN | 0.279891 | 0.959977 | 1.017800 | 0.001044 | 0.001144 | 0.001195 |
| eq_mm_test.test | RUN | 0.335353 | 1.187266 | 1.304876 | 0.001338 | 0.001059 | 0.001248 |
| minus_m_test.test | RUN | 0.271762 | 0.958981 | 0.979544 | 0.001206 | 0.001235 | 0.001342 |
| minus_eq_mm_test.test | RUN | 0.263658 | 0.871040 | 0.916517 | 0.001123 | 0.001293 | 0.001367 |
| minus_mm_test.test | RUN | 0.281366 | 1.120550 | 1.076990 | 0.001106 | 0.001284 | 0.001450 |
| mul_eq_mm_test.test | RUN | 0.241765 | 0.815002 | 0.798713 | 0.001380 | 0.001219 | 0.001295 |
| mul_eq_ms_test.test | RUN | 0.233008 | 0.596913 | 0.837685 | 0.001210 | 0.001316 | 0.001394 |
| mul_mm_test.test | RUN | 0.335345 | 1.855813 | 1.348310 | 0.001204 | 0.001426 | 0.001530 |
| mul_ms_test.test | RUN | 0.289732 | 0.960271 | 1.013138 | 0.001241 | 0.001342 | 0.001474 |
| mul_sm_test.test | RUN | 0.286838 | 0.973365 | 1.047230 | 0.001372 | 0.001579 | 0.001270 |
| mul_mv_test.test | RUN | 0.288888 | 1.031114 | 1.061543 | 0.001151 | 0.001393 | 0.001469 |
| inverse_m_test.test | RUN | 0.393284 | 1.899750 | 1.482059 | 0.001280 | 0.001354 | 0.001280 |
| plus_eq_mm_test.test | RUN | 0.270805 | 0.879115 | 0.919410 | 0.001211 | 0.001217 | 0.001336 |
| plus_mm_test.test | RUN | 0.293532 | 1.113722 | 1.085412 | 0.001119 | 0.001249 | 0.001263 |
| scalar_cast_m_test.test | RUN | 0.218033 | 0.501273 | 0.676297 | 0.001285 | 0.001187 | 0.001345 |
| mat_index_test.test | RUN | 0.180786 | 0.479532 | 0.573857 | 0.001122 | 0.001348 | 0.001296 |
| cmp_qq_test.test | RUN | 0.198460 | 0.451393 | 0.558196 | 0.001376 | 0.001220 | 0.001364 |
| conjugate_test.test | RUN | 0.198670 | 0.452002 | 0.565885 | 0.000962 | 0.001434 | 0.001204 |
| normalize_q_test.test | RUN | 0.201811 | 0.509219 | 0.602091 | 0.001293 | 0.001333 | 0.001362 |
| div_eq_qs_test.test | RUN | 0.194425 | 0.425052 | 0.562273 | 0.001086 | 0.001226 | 0.001358 |
| div_qs_test.test | RUN | 0.193181 | 0.467470 | 0.576227 | 0.001192 | 0.001207 | 0.001335 |
| dot_qq_test.test | RUN | 0.193406 | 0.443942 | 0.578429 | 0.001230 | 0.001354 | 0.001269 |
| eq_qq_test.test | RUN | 0.199385 | 0.468254 | 0.590098 | 0.001182 | 0.001222 | 0.000988 |
| inverse_q_test.test | RUN | 0.236424 | 0.613554 | 0.740864 | 0.001429 | 0.001194 | 0.001274 |
| mag_q_test.test | RUN | 0.189112 | 0.462222 | 0.558548 | 0.001217 | 0.001283 | 0.001438 |
| mag_sqr_q_test.test | RUN | 0.194647 | 0.452781 | 0.566901 | 0.001203 | 0.001255 | 0.001274 |
| minus_q_test.test | RUN | 0.190716 | 0.458926 | 0.566970 | 0.001235 | 0.001243 | 0.001322 |
| minus_eq_qq_test.test | RUN | 0.197537 | 0.458306 | 0.573627 | 0.001392 | 0.001235 | 0.001232 |
| minus_qq_test.test | RUN | 0.195392 | 0.456994 | 0.564649 | 0.001188 | 0.001192 | 0.001235 |
| mul_eq_qs_test.test | RUN | 0.193078 | 0.435608 | 0.573871 | 0.001320 | 0.001142 | 0.001314 |
| mul_qs_test.test | RUN | 0.195982 | 0.456739 | 0.587328 | 0.001127 | 0.001176 | 0.001466 |
| mul_qv_test.test | RUN | 0.238951 | 0.628415 | 0.742436 | 0.001276 | 0.001250 | 0.001574 |
| mul_qq_test.test | RUN | 0.234603 | 0.634087 | 0.717312 | 0.001330 | 0.001324 | 0.001198 |
| mul_eq_qq_test.test | RUN | 0.229172 | 0.627164 | 0.714058 | 0.001266 | 0.001374 | 0.001162 |
| plus_eq_qq_test.test | RUN | 0.191477 | 0.450952 | 0.571650 | 0.001277 | 0.001276 | 0.001241 |
| plus_qq_test.test | RUN | 0.194130 | 0.469966 | 0.585900 | 0.001515 | 0.001259 | 0.001250 |
| scalar_cast_q_test.test | RUN | 0.190255 | 0.426488 | 0.561584 | 0.001302 | 0.001272 | 0.001190 |
| slerp_test.test | RUN | 0.209668 | 0.890927 | 0.694852 | 0.014844 | 0.013145 | 0.013174 |
| convert_to_test.test | RUN | 0.287242 | 0.810982 | 1.070164 | 0.001124 | 0.001366 | 0.001428 |
| rot_mat_test.test | RUN | 0.470873 | 3.753293 | 3.394239 | 0.031982 | 0.032993 | 0.034213 |
| rot_quat_test.test | RUN | 0.234944 | 0.734213 | 0.766670 | 0.001189 | 0.001420 | 0.001430 |
| rotx_mat_test.test | RUN | 0.268696 | 0.959978 | 0.984921 | 0.001526 | 0.001209 | 0.001290 |
| rotx_quat_test.test | RUN | 0.230902 | 0.633324 | 0.712297 | 0.001257 | 0.001209 | 0.001248 |
| roty_mat_test.test | RUN | 0.266815 | 0.989885 | 0.963133 | 0.001366 | 0.001246 | 0.001310 |
| roty_quat_test.test | RUN | 0.232120 | 0.625452 | 0.713199 | 0.001159 | 0.001238 | 0.001332 |
| rotz_mat_test.test | RUN | 0.284500 | 1.077128 | 1.051353 | 0.001222 | 0.001269 | 0.001379 |
| rotz_quat_test.test | RUN | 0.226911 | 0.629064 | 0.675221 | 0.001131 | 0.001420 | 0.001418 |
| zero_vec_test.test | RUN | 0.203712 | 0.552052 | 0.597512 | 0.001160 | 0.001214 | 0.001281 |
| zero_mat_test.test | RUN | 0.244542 | 0.906230 | 0.869732 | 0.001145 | 0.001347 | 0.001312 |
| zero_quat_test.test | RUN | 0.186571 | 0.440310 | 0.551615 | 0.001094 | 0.001297 | 0.001454 |
| identity_mat_test.test | RUN | 0.229422 | 0.675306 | 0.735322 | 0.001087 | 0.001324 | 0.001354 |
| identity_quat_test.test | RUN | 0.193528 | 0.427858 | 0.569425 | 0.001207 | 0.001379 | 0.001291 |
| col_test.test | RUN | 0.369185 | 1.409162 | 1.655582 | 0.001210 | 0.001207 | 0.001295 |
| col_mat_test.test | RUN | 0.239708 | 0.628075 | 0.762429 | 0.001313 | 0.001347 | 0.001449 |
| neg_col_test.test | RUN | 0.274043 | 0.875336 | 0.978960 | 0.001130 | 0.001453 | 0.001345 |
| neg_row_test.test | RUN | 0.279385 | 0.901310 | 0.995474 | 0.001224 | 0.001334 | 0.001545 |
| del_col_test.test | RUN | 0.286560 | 0.973799 | 1.021404 | 0.001076 | 0.001448 | 0.001293 |
| del_row_test.test | RUN | 0.284947 | 0.966767 | 1.010258 | 0.001298 | 0.001506 | 0.001396 |
| del_row_col_test.test | RUN | 0.396162 | 1.839534 | 1.880509 | 0.001281 | 0.001422 | 0.001440 |
| swap_cols_test.test | RUN | 0.504511 | 2.428279 | 2.345659 | 0.001335 | 0.001376 | 0.001370 |
| swap_rows_test.test | RUN | 0.572975 | 2.558562 | 2.340941 | 0.001294 | 0.001343 | 0.001257 |
| diag_test.test | RUN | 0.252675 | 0.653793 | 0.882157 | 0.001185 | 0.001488 | 0.001243 |
| diag_mat_test.test | RUN | 0.245481 | 0.647559 | 0.781973 | 0.001360 | 0.001454 | 0.001183 |
| row_test.test | RUN | 0.383638 | 1.421851 | 1.621456 | 0.001283 | 0.001488 | 0.001350 |
| row_mat_test.test | RUN | 0.237744 | 0.634488 | 0.767262 | 0.001081 | 0.001284 | 0.001367 |
| transpose_test.test | RUN | 0.291813 | 0.947491 | 1.038419 | 0.001256 | 0.001327 | 0.001120 |
| translation_test.test | RUN | 0.233415 | 0.604590 | 0.762947 | 0.001152 | 0.001262 | 0.001293 |
| translation_mat_test.test | RUN | 0.253012 | 0.606313 | 0.846790 | 0.001479 | 0.001153 | 0.001057 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.087029 | 0.173757 | 0.216935 | — | — | — |
| swizzle2_test2.test | RUN | 0.101198 | 0.258794 | 0.320502 | 0.001159 | 0.001394 | 0.001069 |
| swizzle2_test3.test | RUN | 0.102176 | 0.258660 | 0.318055 | 0.001196 | 0.001310 | 0.001475 |
| swizzle2_test4.test | RUN | 0.103838 | 0.258160 | 0.316591 | 0.000987 | 0.001319 | 0.001242 |
| swizzle2_test.test | RUN | 0.325882 | 0.701663 | 0.987536 | 0.001187 | 0.001355 | 0.001360 |
| swizzle3_test2.test | RUN | 0.110694 | 0.273038 | 0.354653 | 0.001285 | 0.001252 | 0.001122 |
| swizzle3_test3.test | RUN | 0.111821 | 0.270672 | 0.344906 | 0.001305 | 0.001256 | 0.001334 |
| swizzle3_test4.test | RUN | 0.114545 | 0.275834 | 0.343313 | 0.001237 | 0.001460 | 0.001264 |
| swizzle3_test.test | RUN | 0.318978 | 0.721245 | 0.997465 | 0.001116 | 0.001300 | 0.001319 |
| swizzle4_test2.test | RUN | 0.193561 | 0.386012 | 0.553401 | 0.001271 | 0.001431 | 0.001477 |
| swizzle4_test3.test | RUN | 0.188867 | 0.384353 | 0.557064 | 0.001095 | 0.001358 | 0.001164 |
| swizzle4_test4.test | RUN | 0.193758 | 0.399441 | 0.566744 | 0.001105 | 0.001431 | 0.001344 |
| swizzle4_test.test | RUN | 0.330033 | 0.789191 | 1.041257 | 0.001133 | 0.001267 | 0.001254 |
| deduce_scalar_test.test | COMPILE | 0.016821 | 0.039627 | 0.055578 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.119180 | 0.303197 | 0.373416 | 0.001171 | 0.001217 | 0.001283 |
| deduce_scalar_mv_test.test | RUN | 0.144374 | 0.350033 | 0.440745 | 0.000942 | 0.001206 | 0.001262 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013049 | 0.024190 | 0.042423 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.013905 | 0.033982 | 0.049698 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014910 | 0.032476 | 0.048724 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014411 | 0.034924 | 0.047496 | — | — | — |
| interop_test.test | RUN | 0.153862 | 0.445550 | 0.646356 | 0.000376 | 0.000619 | 0.001403 |
| transform_test.test | RUN | 0.301621 | 0.611609 | 0.811146 | 0.000848 | 0.000897 | 0.000931 |
| projection_test.test | RUN | 0.214875 | 0.449212 | 0.663537 | 0.000883 | 0.000950 | 0.000937 |
| scalar_traits_test.test | COMPILE | 0.015753 | 0.033433 | 0.050964 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.978× | 0.974×, 0.981× | 0.993× |
| clang | 1.017× | 1.025×, 1.010× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000806s | 0.000808s | 0.000804s | byte equality observed |
| access_q_test.test | 10 | 0.000802s | 0.000805s | 0.000809s | byte equality observed |
| access_v_test.test | 10 | 0.000798s | 0.000821s | 0.000795s | byte equality observed |
| assign_test.test | 10 | 0.000792s | 0.000794s | 0.000813s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000824s | 0.000803s | 0.000807s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000830s | 0.000796s | 0.000771s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000827s | 0.000798s | 0.000815s | byte equality observed |
| col_mat_test.test | 10 | 0.000807s | 0.000819s | 0.000807s | byte equality observed |
| col_test.test | 10 | 0.000818s | 0.000800s | 0.000838s | byte equality observed |
| conjugate_test.test | 10 | 0.000804s | 0.000801s | 0.000821s | byte equality observed |
| convert_to_test.test | 10 | 0.000813s | 0.000798s | 0.000800s | byte equality observed |
| cross_test.test | 10 | 0.000826s | 0.000777s | 0.000829s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000819s | 0.000817s | 0.000828s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000833s | 0.000829s | 0.000820s | byte equality observed |
| del_col_test.test | 10 | 0.000820s | 0.000810s | 0.000824s | byte equality observed |
| del_row_col_test.test | 10 | 0.000844s | 0.000819s | 0.000822s | byte equality observed |
| del_row_test.test | 10 | 0.000828s | 0.000825s | 0.000803s | byte equality observed |
| determinant_test.test | 10 | 0.000835s | 0.000798s | 0.000818s | byte equality observed |
| diag_mat_test.test | 10 | 0.000825s | 0.000797s | 0.000793s | byte equality observed |
| diag_test.test | 10 | 0.000815s | 0.000775s | 0.000799s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000811s | 0.000785s | 0.000808s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000835s | 0.000804s | 0.000811s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000814s | 0.000785s | 0.000837s | byte equality observed |
| div_ms_test.test | 10 | 0.000803s | 0.000781s | 0.000801s | byte equality observed |
| div_qs_test.test | 10 | 0.000819s | 0.000791s | 0.000800s | byte equality observed |
| div_vs_test.test | 10 | 0.000781s | 0.000810s | 0.000800s | byte equality observed |
| dot_qq_test.test | 10 | 0.000815s | 0.000799s | 0.000838s | byte equality observed |
| dot_vv_test.test | 10 | 0.000804s | 0.000768s | 0.000797s | byte equality observed |
| eq_mm_test.test | 10 | 0.000816s | 0.000813s | 0.000810s | byte equality observed |
| eq_qq_test.test | 10 | 0.000825s | 0.000813s | 0.000814s | byte equality observed |
| eq_vv_test.test | 10 | 0.000828s | 0.000795s | 0.000835s | byte equality observed |
| identity_mat_test.test | 10 | 0.000818s | 0.000810s | 0.000834s | byte equality observed |
| identity_quat_test.test | 10 | 0.000808s | 0.000802s | 0.000819s | byte equality observed |
| interop_test.test | 10 | 0.000357s | 0.000356s | 0.000807s | byte equality observed |
| inverse_m_test.test | 10 | 0.000859s | 0.000814s | 0.000843s | byte equality observed |
| inverse_q_test.test | 10 | 0.000822s | 0.000814s | 0.000810s | byte equality observed |
| mag_q_test.test | 10 | 0.000812s | 0.000775s | 0.000805s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000792s | 0.000790s | 0.000807s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000796s | 0.000811s | 0.000812s | byte equality observed |
| mag_v_test.test | 10 | 0.000789s | 0.000811s | 0.000821s | byte equality observed |
| mat_index_test.test | 10 | 0.000819s | 0.000818s | 0.000813s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000798s | 0.000764s | 0.000817s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000791s | 0.000771s | 0.000794s | byte equality observed |
| math_test.test | 10 | 0.001197s | 0.001146s | 0.001050s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000793s | 0.000791s | 0.000815s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000791s | 0.000825s | 0.000804s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000824s | 0.000803s | 0.000839s | byte equality observed |
| minus_m_test.test | 10 | 0.000818s | 0.000800s | 0.000804s | byte equality observed |
| minus_mm_test.test | 10 | 0.000816s | 0.000790s | 0.000793s | byte equality observed |
| minus_q_test.test | 10 | 0.000819s | 0.000788s | 0.000820s | byte equality observed |
| minus_qq_test.test | 10 | 0.000797s | 0.000818s | 0.000829s | byte equality observed |
| minus_v_test.test | 10 | 0.000809s | 0.000818s | 0.000838s | byte equality observed |
| minus_vv_test.test | 10 | 0.000799s | 0.000822s | 0.000814s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000811s | 0.000786s | 0.000844s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000820s | 0.000799s | 0.000836s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000825s | 0.000808s | 0.000840s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000821s | 0.000788s | 0.000831s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000807s | 0.000807s | 0.000837s | byte equality observed |
| mul_mm_test.test | 10 | 0.000808s | 0.000790s | 0.000829s | byte equality observed |
| mul_ms_test.test | 10 | 0.000820s | 0.000799s | 0.000836s | byte equality observed |
| mul_mv_test.test | 10 | 0.000808s | 0.000815s | 0.000824s | byte equality observed |
| mul_qq_test.test | 10 | 0.000842s | 0.000801s | 0.000803s | byte equality observed |
| mul_qs_test.test | 10 | 0.000831s | 0.000801s | 0.000826s | byte equality observed |
| mul_qv_test.test | 10 | 0.000831s | 0.000798s | 0.000828s | byte equality observed |
| mul_sm_test.test | 10 | 0.000823s | 0.000812s | 0.000808s | byte equality observed |
| mul_sv_test.test | 10 | 0.000798s | 0.000783s | 0.000828s | byte equality observed |
| mul_vm_test.test | 10 | 0.000799s | 0.000798s | 0.000800s | byte equality observed |
| mul_vs_test.test | 10 | 0.000786s | 0.000795s | 0.000817s | byte equality observed |
| neg_col_test.test | 10 | 0.000789s | 0.000832s | 0.000778s | byte equality observed |
| neg_row_test.test | 10 | 0.000799s | 0.000801s | 0.000796s | byte equality observed |
| normalize_q_test.test | 10 | 0.000809s | 0.000814s | 0.000823s | byte equality observed |
| normalize_v_test.test | 10 | 0.000802s | 0.000813s | 0.000825s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000823s | 0.000813s | 0.000829s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000797s | 0.000795s | 0.000833s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000788s | 0.000810s | 0.000806s | byte equality observed |
| plus_mm_test.test | 10 | 0.000817s | 0.000797s | 0.000840s | byte equality observed |
| plus_qq_test.test | 10 | 0.000804s | 0.000788s | 0.000804s | byte equality observed |
| plus_vv_test.test | 10 | 0.000788s | 0.000795s | 0.000789s | byte equality observed |
| projection_test.test | 10 | 0.000799s | 0.000820s | 0.000817s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000791s | 0.000809s | 0.000800s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000773s | 0.000776s | 0.000757s | byte equality observed |
| rot_mat_test.test | 1 | 0.023029s | 0.022582s | 0.026380s | byte equality observed |
| rot_quat_test.test | 10 | 0.000736s | 0.000728s | 0.000755s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000755s | 0.000747s | 0.000776s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000785s | 0.000814s | 0.000839s | byte equality observed |
| roty_mat_test.test | 10 | 0.000815s | 0.000799s | 0.000853s | byte equality observed |
| roty_quat_test.test | 10 | 0.000807s | 0.000803s | 0.000821s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000835s | 0.000821s | 0.000864s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000811s | 0.000822s | 0.000847s | byte equality observed |
| row_mat_test.test | 10 | 0.000821s | 0.000830s | 0.000839s | byte equality observed |
| row_test.test | 10 | 0.000797s | 0.000807s | 0.000834s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000800s | 0.000814s | 0.000829s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000795s | 0.000794s | 0.000796s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000790s | 0.000782s | 0.000806s | byte equality observed |
| slerp_test.test | 2 | 0.011029s | 0.009351s | 0.009660s | byte equality observed |
| swap_cols_test.test | 10 | 0.000744s | 0.000745s | 0.000753s | byte equality observed |
| swap_rows_test.test | 10 | 0.000750s | 0.000755s | 0.000764s | byte equality observed |
| swizzle2_test.test | 10 | 0.000784s | 0.000787s | 0.000843s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000804s | 0.000802s | 0.000807s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000804s | 0.000811s | 0.000795s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000819s | 0.000808s | 0.000811s | byte equality observed |
| swizzle3_test.test | 10 | 0.000812s | 0.000814s | 0.000846s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000814s | 0.000783s | 0.000816s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000832s | 0.000773s | 0.000781s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000809s | 0.000790s | 0.000803s | byte equality observed |
| swizzle4_test.test | 10 | 0.000818s | 0.000813s | 0.000839s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000835s | 0.000805s | 0.000841s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000813s | 0.000796s | 0.000806s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000786s | 0.000829s | 0.000812s | byte equality observed |
| to_string_test.test | 10 | 0.000824s | 0.000837s | 0.000834s | byte equality observed |
| transform_test.test | 10 | 0.000794s | 0.000809s | 0.000811s | byte equality observed |
| translation_mat_test.test | 10 | 0.000789s | 0.000806s | 0.000786s | byte equality observed |
| translation_test.test | 10 | 0.000791s | 0.000812s | 0.000821s | byte equality observed |
| transpose_test.test | 10 | 0.000793s | 0.000810s | 0.000807s | byte equality observed |
| vec_index_test.test | 10 | 0.000811s | 0.000809s | 0.000806s | byte equality observed |
| vec_register_test.test | 10 | 0.000800s | 0.000825s | 0.000808s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000811s | 0.000789s | 0.000802s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000827s | 0.000804s | 0.000780s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000831s | 0.000814s | 0.000802s | byte equality observed |
| zero_mat_test.test | 10 | 0.000815s | 0.000789s | 0.000801s | byte equality observed |
| zero_quat_test.test | 10 | 0.000836s | 0.000807s | 0.000811s | byte equality observed |
| zero_vec_test.test | 10 | 0.000807s | 0.000795s | 0.000792s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
