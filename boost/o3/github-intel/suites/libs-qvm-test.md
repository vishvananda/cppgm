# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.192639 | 0.560435 | 0.603981 | 0.001724 | 0.001545 | 0.001600 |
| mat_traits_array_test.test | RUN | 0.149760 | 0.553897 | 0.458978 | 0.001277 | 0.001211 | 0.001296 |
| mat_traits_std_array_test.test | RUN | 0.149547 | 0.417962 | 0.470966 | 0.001400 | 0.000924 | 0.001106 |
| vec_traits_array_test.test | RUN | 0.131577 | 0.426943 | 0.389335 | 0.001130 | 0.001380 | 0.001286 |
| vec_traits_gnuc_test.test | RUN | 0.239461 | 0.515257 | 0.748466 | 0.001168 | 0.001440 | 0.001062 |
| vec_traits_std_array_test.test | RUN | 0.130921 | 0.327005 | 0.389454 | 0.001386 | 0.001313 | 0.001144 |
| quat_traits_array_test.test | RUN | 0.129717 | 0.450529 | 0.388938 | 0.001424 | 0.001241 | 0.001206 |
| quat_traits_std_array_test.test | RUN | 0.126022 | 0.332806 | 0.389593 | 0.001212 | 0.001227 | 0.001200 |
| access_m_test.test | RUN | 0.210627 | 0.790130 | 0.887113 | 0.001473 | 0.001374 | 0.001178 |
| access_m_fail1.test | COMPILE_FAIL | 0.019039 | 0.033808 | 0.056428 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019661 | 0.034221 | 0.054603 | — | — | — |
| access_q_test.test | RUN | 0.178243 | 0.413548 | 0.531030 | 0.000935 | 0.001202 | 0.001316 |
| access_q_fail.test | COMPILE_FAIL | 0.015368 | 0.026133 | 0.049831 | — | — | — |
| access_v_test.test | RUN | 0.176725 | 0.428603 | 0.524250 | 0.001148 | 0.001147 | 0.001474 |
| access_v_fail1.test | COMPILE_FAIL | 0.013762 | 0.024420 | 0.042154 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013677 | 0.024069 | 0.044363 | — | — | — |
| assign_test.test | RUN | 0.263161 | 0.683573 | 0.953262 | 0.001165 | 0.001327 | 0.001411 |
| to_string_test.test | RUN | 0.320637 | 1.160883 | 5.641225 | 0.001190 | 0.001722 | 0.001509 |
| cmp_vv_test.test | RUN | 0.214297 | 0.547692 | 0.631859 | 0.001195 | 0.001379 | 0.001166 |
| cross_test.test | RUN | 0.211549 | 0.495930 | 0.627925 | 0.001071 | 0.001304 | 0.001440 |
| div_eq_vs_test.test | RUN | 0.198239 | 0.462582 | 0.617820 | 0.000931 | 0.001288 | 0.001399 |
| div_vs_test.test | RUN | 0.206365 | 0.578861 | 0.661981 | 0.001228 | 0.001245 | 0.001150 |
| dot_vv_test.test | RUN | 0.203255 | 0.506287 | 0.610273 | 0.001107 | 0.001305 | 0.001254 |
| eq_vv_test.test | RUN | 0.221500 | 0.573501 | 0.678543 | 0.001109 | 0.001261 | 0.001075 |
| mag_v_test.test | RUN | 0.198725 | 0.470900 | 0.580280 | 0.001194 | 0.001330 | 0.001240 |
| mag_sqr_v_test.test | RUN | 0.194901 | 0.474357 | 0.593650 | 0.001208 | 0.001240 | 0.001262 |
| minus_v_test.test | RUN | 0.202618 | 0.544118 | 0.642634 | 0.001265 | 0.001316 | 0.001219 |
| minus_eq_vv_test.test | RUN | 0.209435 | 0.525134 | 0.631783 | 0.001143 | 0.001353 | 0.001180 |
| minus_vv_test.test | RUN | 0.211075 | 0.577583 | 0.650322 | 0.001218 | 0.001291 | 0.001150 |
| mul_eq_vs_test.test | RUN | 0.197967 | 0.472384 | 0.608395 | 0.001137 | 0.001214 | 0.001263 |
| mul_vs_test.test | RUN | 0.208243 | 0.568251 | 0.667701 | 0.001191 | 0.001216 | 0.001215 |
| mul_sv_test.test | RUN | 0.208264 | 0.573096 | 0.665369 | 0.001082 | 0.001233 | 0.001318 |
| mul_vm_test.test | RUN | 0.286849 | 1.029693 | 1.000139 | 0.001197 | 0.001420 | 0.001237 |
| normalize_v_test.test | RUN | 0.212123 | 0.703040 | 0.682715 | 0.001318 | 0.001355 | 0.001373 |
| plus_eq_vv_test.test | RUN | 0.197208 | 0.542359 | 0.627793 | 0.001207 | 0.001115 | 0.001193 |
| plus_vv_test.test | RUN | 0.206132 | 0.575310 | 0.677609 | 0.001098 | 0.001331 | 0.001196 |
| scalar_cast_v_test.test | RUN | 0.190799 | 0.428662 | 0.585704 | 0.001154 | 0.001279 | 0.001138 |
| vec_index_test.test | RUN | 0.166620 | 0.436857 | 0.514787 | 0.001094 | 0.001163 | 0.001133 |
| vec_register_test.test | RUN | 0.110487 | 0.394799 | 0.376609 | 0.001353 | 0.001174 | 0.001360 |
| cmp_mm_test.test | RUN | 0.355293 | 1.265257 | 1.372252 | 0.001342 | 0.001336 | 0.001244 |
| determinant_test.test | RUN | 0.230115 | 0.641416 | 0.723148 | 0.001281 | 0.001259 | 0.001271 |
| div_eq_ms_test.test | RUN | 0.232768 | 0.592865 | 0.809323 | 0.001254 | 0.001331 | 0.001480 |
| div_ms_test.test | RUN | 0.280647 | 0.958328 | 1.009976 | 0.001053 | 0.001237 | 0.001019 |
| eq_mm_test.test | RUN | 0.335211 | 1.171321 | 1.282113 | 0.001232 | 0.001229 | 0.001267 |
| minus_m_test.test | RUN | 0.273890 | 0.943877 | 0.979741 | 0.001099 | 0.001288 | 0.001340 |
| minus_eq_mm_test.test | RUN | 0.263005 | 0.864350 | 0.914424 | 0.001281 | 0.001121 | 0.001233 |
| minus_mm_test.test | RUN | 0.292555 | 1.108405 | 1.070745 | 0.001303 | 0.001223 | 0.001349 |
| mul_eq_mm_test.test | RUN | 0.243202 | 0.805226 | 0.791938 | 0.001199 | 0.001151 | 0.001260 |
| mul_eq_ms_test.test | RUN | 0.240210 | 0.581990 | 0.810577 | 0.001133 | 0.001282 | 0.001234 |
| mul_mm_test.test | RUN | 0.341409 | 1.805016 | 1.333286 | 0.001318 | 0.001412 | 0.001381 |
| mul_ms_test.test | RUN | 0.285704 | 0.948168 | 1.027110 | 0.001174 | 0.001268 | 0.001117 |
| mul_sm_test.test | RUN | 0.278908 | 0.951481 | 1.025733 | 0.001257 | 0.001255 | 0.001124 |
| mul_mv_test.test | RUN | 0.287891 | 1.029530 | 1.038432 | 0.001346 | 0.001203 | 0.001346 |
| inverse_m_test.test | RUN | 0.392224 | 1.890949 | 1.464712 | 0.001370 | 0.001355 | 0.001259 |
| plus_eq_mm_test.test | RUN | 0.266617 | 0.873946 | 0.911276 | 0.001143 | 0.001248 | 0.001232 |
| plus_mm_test.test | RUN | 0.286246 | 1.111058 | 1.039805 | 0.001299 | 0.001309 | 0.001325 |
| scalar_cast_m_test.test | RUN | 0.225426 | 0.481981 | 0.659333 | 0.001155 | 0.001280 | 0.001228 |
| mat_index_test.test | RUN | 0.173081 | 0.471311 | 0.579567 | 0.001159 | 0.001228 | 0.001230 |
| cmp_qq_test.test | RUN | 0.196118 | 0.439037 | 0.547572 | 0.001300 | 0.001235 | 0.001260 |
| conjugate_test.test | RUN | 0.196060 | 0.445534 | 0.564976 | 0.001451 | 0.001379 | 0.001325 |
| normalize_q_test.test | RUN | 0.193185 | 0.507660 | 0.576856 | 0.001100 | 0.001142 | 0.001236 |
| div_eq_qs_test.test | RUN | 0.182818 | 0.428886 | 0.567230 | 0.001142 | 0.001223 | 0.001447 |
| div_qs_test.test | RUN | 0.196482 | 0.446892 | 0.567288 | 0.001382 | 0.000937 | 0.001200 |
| dot_qq_test.test | RUN | 0.204866 | 0.442351 | 0.570230 | 0.001523 | 0.001316 | 0.001204 |
| eq_qq_test.test | RUN | 0.200834 | 0.469574 | 0.577653 | 0.001284 | 0.001218 | 0.001132 |
| inverse_q_test.test | RUN | 0.232001 | 0.599555 | 0.739215 | 0.001405 | 0.001185 | 0.001091 |
| mag_q_test.test | RUN | 0.201387 | 0.451385 | 0.558980 | 0.001460 | 0.001241 | 0.001197 |
| mag_sqr_q_test.test | RUN | 0.196187 | 0.447113 | 0.567188 | 0.001366 | 0.001156 | 0.001205 |
| minus_q_test.test | RUN | 0.203504 | 0.448843 | 0.558034 | 0.001285 | 0.001225 | 0.001286 |
| minus_eq_qq_test.test | RUN | 0.193782 | 0.451621 | 0.564858 | 0.001172 | 0.001356 | 0.001257 |
| minus_qq_test.test | RUN | 0.201434 | 0.462939 | 0.579151 | 0.001328 | 0.001148 | 0.001163 |
| mul_eq_qs_test.test | RUN | 0.192370 | 0.421635 | 0.559223 | 0.001453 | 0.001235 | 0.001414 |
| mul_qs_test.test | RUN | 0.197000 | 0.457087 | 0.573141 | 0.001190 | 0.001392 | 0.001224 |
| mul_qv_test.test | RUN | 0.241463 | 0.614249 | 0.736582 | 0.001390 | 0.001403 | 0.001228 |
| mul_qq_test.test | RUN | 0.241137 | 0.626933 | 0.727605 | 0.001235 | 0.001301 | 0.001242 |
| mul_eq_qq_test.test | RUN | 0.231613 | 0.617335 | 0.703711 | 0.001312 | 0.001413 | 0.001235 |
| plus_eq_qq_test.test | RUN | 0.190814 | 0.451478 | 0.569987 | 0.001263 | 0.001178 | 0.001131 |
| plus_qq_test.test | RUN | 0.197036 | 0.460295 | 0.575275 | 0.001066 | 0.001303 | 0.001249 |
| scalar_cast_q_test.test | RUN | 0.189968 | 0.432602 | 0.568679 | 0.001393 | 0.001185 | 0.001137 |
| slerp_test.test | RUN | 0.220538 | 0.882069 | 0.697820 | 0.016567 | 0.013006 | 0.014719 |
| convert_to_test.test | RUN | 0.282385 | 0.797534 | 1.071478 | 0.001227 | 0.001372 | 0.001268 |
| rot_mat_test.test | RUN | 0.476086 | 3.726935 | 3.320965 | 0.033404 | 0.033049 | 0.034433 |
| rot_quat_test.test | RUN | 0.250665 | 0.743391 | 0.755122 | 0.001264 | 0.001216 | 0.001369 |
| rotx_mat_test.test | RUN | 0.280259 | 0.967097 | 0.999802 | 0.001261 | 0.001386 | 0.001500 |
| rotx_quat_test.test | RUN | 0.235956 | 0.632276 | 0.686983 | 0.001204 | 0.001150 | 0.001265 |
| roty_mat_test.test | RUN | 0.272360 | 0.962772 | 0.982668 | 0.001245 | 0.001238 | 0.001205 |
| roty_quat_test.test | RUN | 0.232070 | 0.625911 | 0.703768 | 0.001216 | 0.001291 | 0.001259 |
| rotz_mat_test.test | RUN | 0.294930 | 1.103325 | 0.966044 | 0.001328 | 0.001133 | 0.001308 |
| rotz_quat_test.test | RUN | 0.232137 | 0.617680 | 0.718531 | 0.001209 | 0.001270 | 0.001136 |
| zero_vec_test.test | RUN | 0.198560 | 0.537342 | 0.617599 | 0.001176 | 0.001218 | 0.001090 |
| zero_mat_test.test | RUN | 0.244845 | 0.900580 | 0.811687 | 0.001384 | 0.001185 | 0.001179 |
| zero_quat_test.test | RUN | 0.188772 | 0.441961 | 0.561494 | 0.001122 | 0.001318 | 0.001184 |
| identity_mat_test.test | RUN | 0.228199 | 0.665721 | 0.732507 | 0.001245 | 0.001194 | 0.001236 |
| identity_quat_test.test | RUN | 0.192420 | 0.430592 | 0.557758 | 0.001444 | 0.001378 | 0.001252 |
| col_test.test | RUN | 0.383432 | 1.382666 | 1.605131 | 0.001178 | 0.001222 | 0.001081 |
| col_mat_test.test | RUN | 0.238998 | 0.616212 | 0.755336 | 0.001237 | 0.001427 | 0.001201 |
| neg_col_test.test | RUN | 0.274088 | 0.872448 | 0.983168 | 0.001151 | 0.001314 | 0.001471 |
| neg_row_test.test | RUN | 0.282380 | 0.883250 | 0.968148 | 0.001249 | 0.001296 | 0.001198 |
| del_col_test.test | RUN | 0.292872 | 0.980313 | 1.009599 | 0.001259 | 0.001405 | 0.001210 |
| del_row_test.test | RUN | 0.288610 | 0.943827 | 1.014570 | 0.001258 | 0.001343 | 0.001181 |
| del_row_col_test.test | RUN | 0.401727 | 1.815638 | 1.848618 | 0.001327 | 0.001322 | 0.001217 |
| swap_cols_test.test | RUN | 0.507885 | 2.403483 | 2.261168 | 0.001314 | 0.001364 | 0.001319 |
| swap_rows_test.test | RUN | 0.579289 | 2.540460 | 2.323295 | 0.001410 | 0.001293 | 0.001251 |
| diag_test.test | RUN | 0.255720 | 0.647744 | 0.896055 | 0.001262 | 0.001283 | 0.001249 |
| diag_mat_test.test | RUN | 0.252151 | 0.631198 | 0.764315 | 0.001144 | 0.001135 | 0.001112 |
| row_test.test | RUN | 0.372848 | 1.379782 | 1.619800 | 0.001498 | 0.001337 | 0.001004 |
| row_mat_test.test | RUN | 0.247927 | 0.604202 | 0.748718 | 0.001306 | 0.001190 | 0.001180 |
| transpose_test.test | RUN | 0.286096 | 0.938268 | 1.022181 | 0.001197 | 0.001193 | 0.001188 |
| translation_test.test | RUN | 0.238881 | 0.581380 | 0.778594 | 0.001385 | 0.001220 | 0.001137 |
| translation_mat_test.test | RUN | 0.255452 | 0.590250 | 0.819523 | 0.001075 | 0.001273 | 0.001228 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.084859 | 0.171982 | 0.227218 | — | — | — |
| swizzle2_test2.test | RUN | 0.103484 | 0.254486 | 0.314762 | 0.001294 | 0.001318 | 0.001288 |
| swizzle2_test3.test | RUN | 0.108523 | 0.255010 | 0.307167 | 0.001133 | 0.001239 | 0.001139 |
| swizzle2_test4.test | RUN | 0.107625 | 0.253588 | 0.293108 | 0.001206 | 0.001283 | 0.001316 |
| swizzle2_test.test | RUN | 0.328815 | 0.704818 | 0.990391 | 0.001212 | 0.001210 | 0.001191 |
| swizzle3_test2.test | RUN | 0.119533 | 0.269225 | 0.334482 | 0.001205 | 0.001346 | 0.001358 |
| swizzle3_test3.test | RUN | 0.121136 | 0.274886 | 0.347217 | 0.001122 | 0.001266 | 0.001079 |
| swizzle3_test4.test | RUN | 0.112635 | 0.271313 | 0.336693 | 0.001076 | 0.001180 | 0.001163 |
| swizzle3_test.test | RUN | 0.323740 | 0.713010 | 0.981955 | 0.000862 | 0.001180 | 0.001264 |
| swizzle4_test2.test | RUN | 0.191757 | 0.381742 | 0.562237 | 0.001371 | 0.001501 | 0.001112 |
| swizzle4_test3.test | RUN | 0.194041 | 0.396247 | 0.541507 | 0.001123 | 0.001287 | 0.001210 |
| swizzle4_test4.test | RUN | 0.199153 | 0.384479 | 0.543222 | 0.001222 | 0.001269 | 0.001402 |
| swizzle4_test.test | RUN | 0.343010 | 0.776240 | 1.038541 | 0.001334 | 0.001227 | 0.001341 |
| deduce_scalar_test.test | COMPILE | 0.017209 | 0.038592 | 0.048868 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.128467 | 0.299877 | 0.357621 | 0.001288 | 0.001168 | 0.001233 |
| deduce_scalar_mv_test.test | RUN | 0.155251 | 0.343002 | 0.445118 | 0.001221 | 0.001181 | 0.001245 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013910 | 0.023785 | 0.042031 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015129 | 0.032477 | 0.047334 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015628 | 0.031807 | 0.047313 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015270 | 0.033174 | 0.046051 | — | — | — |
| interop_test.test | RUN | 0.156248 | 0.428913 | 0.628876 | 0.000564 | 0.000532 | 0.001246 |
| transform_test.test | RUN | 0.306008 | 0.595303 | 0.877814 | 0.000952 | 0.000909 | 0.000955 |
| projection_test.test | RUN | 0.199817 | 0.471020 | 0.586657 | 0.000941 | 0.000919 | 0.000934 |
| scalar_traits_test.test | COMPILE | 0.016003 | 0.034478 | 0.051387 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.976×, 0.981× | 0.995× |
| clang | 1.012× | 1.012×, 1.012× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000826s | 0.000813s | 0.000797s | byte equality observed |
| access_q_test.test | 10 | 0.000801s | 0.000822s | 0.000803s | byte equality observed |
| access_v_test.test | 10 | 0.000811s | 0.000790s | 0.000796s | byte equality observed |
| assign_test.test | 10 | 0.000796s | 0.000807s | 0.000797s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000801s | 0.000830s | 0.000813s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000809s | 0.000817s | 0.000818s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000805s | 0.000798s | 0.000822s | byte equality observed |
| col_mat_test.test | 10 | 0.000795s | 0.000823s | 0.000816s | byte equality observed |
| col_test.test | 10 | 0.000814s | 0.000799s | 0.000814s | byte equality observed |
| conjugate_test.test | 10 | 0.000824s | 0.000823s | 0.000788s | byte equality observed |
| convert_to_test.test | 10 | 0.000814s | 0.000813s | 0.000824s | byte equality observed |
| cross_test.test | 10 | 0.000788s | 0.000781s | 0.000822s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000821s | 0.000788s | 0.000840s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000835s | 0.000809s | 0.000838s | byte equality observed |
| del_col_test.test | 10 | 0.000807s | 0.000817s | 0.000811s | byte equality observed |
| del_row_col_test.test | 10 | 0.000854s | 0.000822s | 0.000801s | byte equality observed |
| del_row_test.test | 10 | 0.000809s | 0.000803s | 0.000823s | byte equality observed |
| determinant_test.test | 10 | 0.000829s | 0.000813s | 0.000849s | byte equality observed |
| diag_mat_test.test | 10 | 0.000798s | 0.000811s | 0.000791s | byte equality observed |
| diag_test.test | 10 | 0.000807s | 0.000791s | 0.000804s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000797s | 0.000788s | 0.000824s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000810s | 0.000796s | 0.000822s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000805s | 0.000802s | 0.000816s | byte equality observed |
| div_ms_test.test | 10 | 0.000787s | 0.000830s | 0.000803s | byte equality observed |
| div_qs_test.test | 10 | 0.000830s | 0.000804s | 0.000822s | byte equality observed |
| div_vs_test.test | 10 | 0.000825s | 0.000803s | 0.000792s | byte equality observed |
| dot_qq_test.test | 10 | 0.000805s | 0.000815s | 0.000816s | byte equality observed |
| dot_vv_test.test | 10 | 0.000820s | 0.000827s | 0.000797s | byte equality observed |
| eq_mm_test.test | 10 | 0.000813s | 0.000806s | 0.000798s | byte equality observed |
| eq_qq_test.test | 10 | 0.000831s | 0.000825s | 0.000798s | byte equality observed |
| eq_vv_test.test | 10 | 0.000819s | 0.000820s | 0.000814s | byte equality observed |
| identity_mat_test.test | 10 | 0.000824s | 0.000806s | 0.000799s | byte equality observed |
| identity_quat_test.test | 10 | 0.000813s | 0.000804s | 0.000815s | byte equality observed |
| interop_test.test | 10 | 0.000360s | 0.000360s | 0.000820s | byte equality observed |
| inverse_m_test.test | 10 | 0.000843s | 0.000849s | 0.000813s | byte equality observed |
| inverse_q_test.test | 10 | 0.000809s | 0.000811s | 0.000786s | byte equality observed |
| mag_q_test.test | 10 | 0.000817s | 0.000826s | 0.000829s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000783s | 0.000833s | 0.000841s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000807s | 0.000827s | 0.000800s | byte equality observed |
| mag_v_test.test | 10 | 0.000828s | 0.000819s | 0.000787s | byte equality observed |
| mat_index_test.test | 10 | 0.000813s | 0.000821s | 0.000825s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000812s | 0.000817s | 0.000799s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000800s | 0.000793s | 0.000795s | byte equality observed |
| math_test.test | 10 | 0.001202s | 0.001163s | 0.001058s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000811s | 0.000799s | 0.000814s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000806s | 0.000827s | 0.000790s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000816s | 0.000822s | 0.000793s | byte equality observed |
| minus_m_test.test | 10 | 0.000817s | 0.000805s | 0.000786s | byte equality observed |
| minus_mm_test.test | 10 | 0.000817s | 0.000803s | 0.000804s | byte equality observed |
| minus_q_test.test | 10 | 0.000835s | 0.000827s | 0.000841s | byte equality observed |
| minus_qq_test.test | 10 | 0.000845s | 0.000820s | 0.000773s | byte equality observed |
| minus_v_test.test | 10 | 0.000814s | 0.000803s | 0.000789s | byte equality observed |
| minus_vv_test.test | 10 | 0.000802s | 0.000796s | 0.000791s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000792s | 0.000819s | 0.000792s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000807s | 0.000809s | 0.000779s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000829s | 0.000803s | 0.000821s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000796s | 0.000796s | 0.000821s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000823s | 0.000792s | 0.000822s | byte equality observed |
| mul_mm_test.test | 10 | 0.000820s | 0.000783s | 0.000813s | byte equality observed |
| mul_ms_test.test | 10 | 0.000823s | 0.000794s | 0.000815s | byte equality observed |
| mul_mv_test.test | 10 | 0.000835s | 0.000796s | 0.000807s | byte equality observed |
| mul_qq_test.test | 10 | 0.000820s | 0.000802s | 0.000800s | byte equality observed |
| mul_qs_test.test | 10 | 0.000804s | 0.000777s | 0.000782s | byte equality observed |
| mul_qv_test.test | 10 | 0.000817s | 0.000825s | 0.000783s | byte equality observed |
| mul_sm_test.test | 10 | 0.000809s | 0.000805s | 0.000784s | byte equality observed |
| mul_sv_test.test | 10 | 0.000812s | 0.000775s | 0.000810s | byte equality observed |
| mul_vm_test.test | 10 | 0.000804s | 0.000804s | 0.000810s | byte equality observed |
| mul_vs_test.test | 10 | 0.000817s | 0.000796s | 0.000816s | byte equality observed |
| neg_col_test.test | 10 | 0.000797s | 0.000791s | 0.000822s | byte equality observed |
| neg_row_test.test | 10 | 0.000816s | 0.000800s | 0.000844s | byte equality observed |
| normalize_q_test.test | 10 | 0.000822s | 0.000801s | 0.000806s | byte equality observed |
| normalize_v_test.test | 10 | 0.000848s | 0.000777s | 0.000803s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000805s | 0.000785s | 0.000809s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000814s | 0.000816s | 0.000800s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000805s | 0.000798s | 0.000776s | byte equality observed |
| plus_mm_test.test | 10 | 0.000808s | 0.000818s | 0.000788s | byte equality observed |
| plus_qq_test.test | 10 | 0.000817s | 0.000806s | 0.000823s | byte equality observed |
| plus_vv_test.test | 10 | 0.000805s | 0.000816s | 0.000823s | byte equality observed |
| projection_test.test | 10 | 0.000807s | 0.000817s | 0.000813s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000805s | 0.000806s | 0.000824s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000782s | 0.000751s | 0.000762s | byte equality observed |
| rot_mat_test.test | 1 | 0.023520s | 0.022862s | 0.027124s | byte equality observed |
| rot_quat_test.test | 10 | 0.000752s | 0.000740s | 0.000736s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000748s | 0.000754s | 0.000731s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000824s | 0.000861s | 0.000842s | byte equality observed |
| roty_mat_test.test | 10 | 0.000843s | 0.000840s | 0.000860s | byte equality observed |
| roty_quat_test.test | 10 | 0.000826s | 0.000811s | 0.000829s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000831s | 0.000822s | 0.000816s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000821s | 0.000819s | 0.000845s | byte equality observed |
| row_mat_test.test | 10 | 0.000825s | 0.000817s | 0.000814s | byte equality observed |
| row_test.test | 10 | 0.000818s | 0.000818s | 0.000808s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000806s | 0.000829s | 0.000814s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000806s | 0.000828s | 0.000811s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000806s | 0.000810s | 0.000797s | byte equality observed |
| slerp_test.test | 2 | 0.011058s | 0.009366s | 0.009933s | byte equality observed |
| swap_cols_test.test | 10 | 0.000744s | 0.000747s | 0.000738s | byte equality observed |
| swap_rows_test.test | 10 | 0.000775s | 0.000783s | 0.000738s | byte equality observed |
| swizzle2_test.test | 10 | 0.000798s | 0.000842s | 0.000787s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000812s | 0.000840s | 0.000784s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000804s | 0.000784s | 0.000798s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000822s | 0.000800s | 0.000841s | byte equality observed |
| swizzle3_test.test | 10 | 0.000802s | 0.000784s | 0.000822s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000811s | 0.000808s | 0.000823s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000808s | 0.000797s | 0.000796s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000817s | 0.000803s | 0.000792s | byte equality observed |
| swizzle4_test.test | 10 | 0.000808s | 0.000820s | 0.000814s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000817s | 0.000817s | 0.000830s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000820s | 0.000825s | 0.000813s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000839s | 0.000789s | 0.000797s | byte equality observed |
| to_string_test.test | 10 | 0.000855s | 0.000824s | 0.000822s | byte equality observed |
| transform_test.test | 10 | 0.000826s | 0.000786s | 0.000823s | byte equality observed |
| translation_mat_test.test | 10 | 0.000802s | 0.000781s | 0.000793s | byte equality observed |
| translation_test.test | 10 | 0.000804s | 0.000786s | 0.000810s | byte equality observed |
| transpose_test.test | 10 | 0.000803s | 0.000809s | 0.000803s | byte equality observed |
| vec_index_test.test | 10 | 0.000810s | 0.000808s | 0.000828s | byte equality observed |
| vec_register_test.test | 10 | 0.000801s | 0.000813s | 0.000834s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000791s | 0.000800s | 0.000819s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000827s | 0.000809s | 0.000810s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000832s | 0.000807s | 0.000798s | byte equality observed |
| zero_mat_test.test | 10 | 0.000803s | 0.000774s | 0.000811s | byte equality observed |
| zero_quat_test.test | 10 | 0.000812s | 0.000805s | 0.000816s | byte equality observed |
| zero_vec_test.test | 10 | 0.000827s | 0.000814s | 0.000794s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
