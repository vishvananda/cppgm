# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.203959 | 0.571282 | 0.600244 | 0.001722 | 0.001719 | 0.001645 |
| mat_traits_array_test.test | RUN | 0.158372 | 0.561562 | 0.462954 | 0.001687 | 0.001210 | 0.001146 |
| mat_traits_std_array_test.test | RUN | 0.157733 | 0.425359 | 0.473593 | 0.001666 | 0.001534 | 0.001160 |
| vec_traits_array_test.test | RUN | 0.139016 | 0.430603 | 0.394615 | 0.001191 | 0.001484 | 0.001057 |
| vec_traits_gnuc_test.test | RUN | 0.242815 | 0.522326 | 0.749437 | 0.001375 | 0.001466 | 0.001141 |
| vec_traits_std_array_test.test | RUN | 0.134591 | 0.333271 | 0.393740 | 0.001565 | 0.001390 | 0.001234 |
| quat_traits_array_test.test | RUN | 0.132485 | 0.457974 | 0.384887 | 0.001338 | 0.001300 | 0.001087 |
| quat_traits_std_array_test.test | RUN | 0.136215 | 0.339484 | 0.386038 | 0.001311 | 0.001382 | 0.001266 |
| access_m_test.test | RUN | 0.219467 | 0.812711 | 0.878874 | 0.001384 | 0.001250 | 0.001154 |
| access_m_fail1.test | COMPILE_FAIL | 0.021375 | 0.034382 | 0.057233 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020665 | 0.034103 | 0.056666 | — | — | — |
| access_q_test.test | RUN | 0.180688 | 0.418461 | 0.530104 | 0.001362 | 0.001533 | 0.001230 |
| access_q_fail.test | COMPILE_FAIL | 0.016083 | 0.028108 | 0.048812 | — | — | — |
| access_v_test.test | RUN | 0.188069 | 0.436703 | 0.531883 | 0.001132 | 0.001034 | 0.001255 |
| access_v_fail1.test | COMPILE_FAIL | 0.014045 | 0.025460 | 0.042162 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013629 | 0.025383 | 0.044106 | — | — | — |
| assign_test.test | RUN | 0.274150 | 0.686875 | 0.965486 | 0.001180 | 0.001452 | 0.001269 |
| to_string_test.test | RUN | 0.324764 | 1.192034 | 5.577793 | 0.001267 | 0.001443 | 0.001296 |
| cmp_vv_test.test | RUN | 0.220338 | 0.555279 | 0.636214 | 0.001509 | 0.001361 | 0.001199 |
| cross_test.test | RUN | 0.218476 | 0.517810 | 0.630489 | 0.001267 | 0.001475 | 0.001198 |
| div_eq_vs_test.test | RUN | 0.210645 | 0.477193 | 0.619071 | 0.001292 | 0.001119 | 0.001187 |
| div_vs_test.test | RUN | 0.215173 | 0.589988 | 0.649623 | 0.001309 | 0.001376 | 0.001139 |
| dot_vv_test.test | RUN | 0.213837 | 0.523402 | 0.613765 | 0.001196 | 0.001311 | 0.001302 |
| eq_vv_test.test | RUN | 0.235872 | 0.591057 | 0.683078 | 0.001298 | 0.001473 | 0.001191 |
| mag_v_test.test | RUN | 0.207649 | 0.488448 | 0.565774 | 0.001400 | 0.001274 | 0.001309 |
| mag_sqr_v_test.test | RUN | 0.204675 | 0.477428 | 0.588476 | 0.001491 | 0.001422 | 0.001308 |
| minus_v_test.test | RUN | 0.210585 | 0.558260 | 0.647183 | 0.000963 | 0.001558 | 0.001152 |
| minus_eq_vv_test.test | RUN | 0.210496 | 0.542164 | 0.606014 | 0.001230 | 0.001466 | 0.001229 |
| minus_vv_test.test | RUN | 0.217131 | 0.596508 | 0.667298 | 0.001119 | 0.001302 | 0.001143 |
| mul_eq_vs_test.test | RUN | 0.203125 | 0.478579 | 0.621994 | 0.001322 | 0.001375 | 0.001250 |
| mul_vs_test.test | RUN | 0.218454 | 0.582160 | 0.644822 | 0.001374 | 0.001537 | 0.001273 |
| mul_sv_test.test | RUN | 0.220229 | 0.595472 | 0.669845 | 0.001241 | 0.001218 | 0.001218 |
| mul_vm_test.test | RUN | 0.296076 | 1.043928 | 1.037492 | 0.001222 | 0.001406 | 0.001303 |
| normalize_v_test.test | RUN | 0.219067 | 0.723308 | 0.631936 | 0.001582 | 0.001408 | 0.001314 |
| plus_eq_vv_test.test | RUN | 0.203290 | 0.541984 | 0.627966 | 0.001300 | 0.001341 | 0.001274 |
| plus_vv_test.test | RUN | 0.216653 | 0.595304 | 0.666252 | 0.001163 | 0.001313 | 0.001426 |
| scalar_cast_v_test.test | RUN | 0.199832 | 0.436250 | 0.560573 | 0.001243 | 0.001233 | 0.001312 |
| vec_index_test.test | RUN | 0.176556 | 0.449479 | 0.526686 | 0.001270 | 0.001233 | 0.001270 |
| vec_register_test.test | RUN | 0.113388 | 0.404183 | 0.378578 | 0.001503 | 0.001318 | 0.001240 |
| cmp_mm_test.test | RUN | 0.373928 | 1.308358 | 1.358430 | 0.001652 | 0.001380 | 0.001191 |
| determinant_test.test | RUN | 0.242121 | 0.658360 | 0.714461 | 0.001357 | 0.001290 | 0.001239 |
| div_eq_ms_test.test | RUN | 0.254195 | 0.606744 | 0.833669 | 0.001361 | 0.001317 | 0.001173 |
| div_ms_test.test | RUN | 0.286197 | 0.978442 | 1.007992 | 0.001352 | 0.001320 | 0.001128 |
| eq_mm_test.test | RUN | 0.356299 | 1.203135 | 1.305882 | 0.001319 | 0.001326 | 0.001295 |
| minus_m_test.test | RUN | 0.287054 | 0.960036 | 0.961448 | 0.001253 | 0.001338 | 0.001288 |
| minus_eq_mm_test.test | RUN | 0.273001 | 0.886150 | 0.899890 | 0.001258 | 0.001335 | 0.001410 |
| minus_mm_test.test | RUN | 0.305967 | 1.129655 | 1.068513 | 0.001289 | 0.001484 | 0.001266 |
| mul_eq_mm_test.test | RUN | 0.256511 | 0.834248 | 0.799212 | 0.001435 | 0.001343 | 0.001244 |
| mul_eq_ms_test.test | RUN | 0.247513 | 0.593987 | 0.819783 | 0.001282 | 0.001464 | 0.001253 |
| mul_mm_test.test | RUN | 0.351322 | 1.855128 | 1.328362 | 0.001259 | 0.001473 | 0.001218 |
| mul_ms_test.test | RUN | 0.295811 | 0.976348 | 1.036002 | 0.001311 | 0.001316 | 0.001246 |
| mul_sm_test.test | RUN | 0.295168 | 0.961975 | 1.027581 | 0.001358 | 0.001186 | 0.001262 |
| mul_mv_test.test | RUN | 0.296843 | 1.042003 | 1.040898 | 0.001335 | 0.001331 | 0.001275 |
| inverse_m_test.test | RUN | 0.409179 | 1.932493 | 1.464253 | 0.001565 | 0.001327 | 0.001268 |
| plus_eq_mm_test.test | RUN | 0.277945 | 0.895752 | 0.909039 | 0.001232 | 0.001402 | 0.001222 |
| plus_mm_test.test | RUN | 0.308235 | 1.124712 | 1.071717 | 0.001181 | 0.001381 | 0.001236 |
| scalar_cast_m_test.test | RUN | 0.227610 | 0.493575 | 0.668733 | 0.001423 | 0.001201 | 0.001324 |
| mat_index_test.test | RUN | 0.190334 | 0.482661 | 0.582429 | 0.001297 | 0.001295 | 0.001386 |
| cmp_qq_test.test | RUN | 0.208024 | 0.446386 | 0.558817 | 0.001515 | 0.001153 | 0.001121 |
| conjugate_test.test | RUN | 0.198646 | 0.465107 | 0.572659 | 0.001245 | 0.001432 | 0.001262 |
| normalize_q_test.test | RUN | 0.212693 | 0.516314 | 0.588431 | 0.001321 | 0.001394 | 0.001177 |
| div_eq_qs_test.test | RUN | 0.204573 | 0.436861 | 0.563098 | 0.001156 | 0.001233 | 0.001197 |
| div_qs_test.test | RUN | 0.210162 | 0.458399 | 0.570455 | 0.001576 | 0.001287 | 0.001328 |
| dot_qq_test.test | RUN | 0.210639 | 0.448497 | 0.574687 | 0.001316 | 0.001553 | 0.001186 |
| eq_qq_test.test | RUN | 0.206193 | 0.473602 | 0.583380 | 0.001377 | 0.001204 | 0.001379 |
| inverse_q_test.test | RUN | 0.250417 | 0.621708 | 0.741457 | 0.001402 | 0.001383 | 0.001246 |
| mag_q_test.test | RUN | 0.209444 | 0.452816 | 0.550900 | 0.001543 | 0.001228 | 0.001179 |
| mag_sqr_q_test.test | RUN | 0.209048 | 0.452511 | 0.566201 | 0.001324 | 0.001475 | 0.001197 |
| minus_q_test.test | RUN | 0.205363 | 0.459974 | 0.571797 | 0.001264 | 0.001442 | 0.001260 |
| minus_eq_qq_test.test | RUN | 0.207061 | 0.455749 | 0.567429 | 0.001427 | 0.001251 | 0.001239 |
| minus_qq_test.test | RUN | 0.208389 | 0.469694 | 0.574137 | 0.001620 | 0.001225 | 0.001189 |
| mul_eq_qs_test.test | RUN | 0.211650 | 0.432821 | 0.566771 | 0.001214 | 0.001533 | 0.001310 |
| mul_qs_test.test | RUN | 0.204671 | 0.463811 | 0.575114 | 0.001497 | 0.001353 | 0.001260 |
| mul_qv_test.test | RUN | 0.260193 | 0.626322 | 0.750099 | 0.001451 | 0.001225 | 0.001293 |
| mul_qq_test.test | RUN | 0.248722 | 0.634411 | 0.729472 | 0.001600 | 0.001330 | 0.001163 |
| mul_eq_qq_test.test | RUN | 0.247873 | 0.639118 | 0.728131 | 0.001276 | 0.001508 | 0.001270 |
| plus_eq_qq_test.test | RUN | 0.208379 | 0.458943 | 0.564657 | 0.001653 | 0.001298 | 0.001145 |
| plus_qq_test.test | RUN | 0.203914 | 0.471238 | 0.583699 | 0.001402 | 0.001428 | 0.001177 |
| scalar_cast_q_test.test | RUN | 0.204145 | 0.429776 | 0.571416 | 0.001365 | 0.001432 | 0.001127 |
| slerp_test.test | RUN | 0.213821 | 0.912119 | 0.694107 | 0.015632 | 0.012970 | 0.013721 |
| convert_to_test.test | RUN | 0.296659 | 0.822326 | 1.069245 | 0.001518 | 0.001278 | 0.001256 |
| rot_mat_test.test | RUN | 0.485304 | 3.800661 | 3.368670 | 0.032877 | 0.033086 | 0.033973 |
| rot_quat_test.test | RUN | 0.248711 | 0.754130 | 0.755122 | 0.001367 | 0.001387 | 0.001371 |
| rotx_mat_test.test | RUN | 0.279484 | 1.002398 | 0.997621 | 0.001515 | 0.001333 | 0.001293 |
| rotx_quat_test.test | RUN | 0.237344 | 0.630435 | 0.711909 | 0.001554 | 0.001341 | 0.001329 |
| roty_mat_test.test | RUN | 0.283096 | 0.990562 | 0.957257 | 0.001385 | 0.001344 | 0.001242 |
| roty_quat_test.test | RUN | 0.245576 | 0.623544 | 0.709477 | 0.001385 | 0.001293 | 0.001290 |
| rotz_mat_test.test | RUN | 0.307230 | 1.129322 | 1.058472 | 0.001404 | 0.001598 | 0.001394 |
| rotz_quat_test.test | RUN | 0.247591 | 0.638415 | 0.679775 | 0.001342 | 0.001294 | 0.001203 |
| zero_vec_test.test | RUN | 0.209377 | 0.542916 | 0.599957 | 0.001290 | 0.001218 | 0.001338 |
| zero_mat_test.test | RUN | 0.248749 | 0.920745 | 0.860898 | 0.001359 | 0.001335 | 0.001232 |
| zero_quat_test.test | RUN | 0.197759 | 0.447771 | 0.547583 | 0.001186 | 0.001278 | 0.001276 |
| identity_mat_test.test | RUN | 0.234561 | 0.682639 | 0.734783 | 0.001125 | 0.001200 | 0.001435 |
| identity_quat_test.test | RUN | 0.198079 | 0.441747 | 0.547955 | 0.001290 | 0.001400 | 0.001236 |
| col_test.test | RUN | 0.376854 | 1.441328 | 1.647058 | 0.001088 | 0.001269 | 0.001235 |
| col_mat_test.test | RUN | 0.247968 | 0.626279 | 0.760318 | 0.001436 | 0.001377 | 0.001276 |
| neg_col_test.test | RUN | 0.281039 | 0.881422 | 0.987501 | 0.001429 | 0.001352 | 0.001175 |
| neg_row_test.test | RUN | 0.295799 | 0.898786 | 0.977583 | 0.001358 | 0.001361 | 0.001159 |
| del_col_test.test | RUN | 0.299904 | 0.992697 | 1.027844 | 0.001304 | 0.001459 | 0.001382 |
| del_row_test.test | RUN | 0.302823 | 0.969263 | 1.024285 | 0.001519 | 0.001313 | 0.001261 |
| del_row_col_test.test | RUN | 0.430374 | 1.813839 | 1.893955 | 0.001489 | 0.001368 | 0.001176 |
| swap_cols_test.test | RUN | 0.527569 | 2.436622 | 2.301227 | 0.001430 | 0.001412 | 0.001248 |
| swap_rows_test.test | RUN | 0.600123 | 2.588346 | 2.272105 | 0.001398 | 0.001342 | 0.001247 |
| diag_test.test | RUN | 0.274274 | 0.660882 | 0.872210 | 0.001224 | 0.001370 | 0.001298 |
| diag_mat_test.test | RUN | 0.261397 | 0.649829 | 0.779443 | 0.001254 | 0.001095 | 0.001242 |
| row_test.test | RUN | 0.383879 | 1.392257 | 1.610246 | 0.001339 | 0.001504 | 0.001321 |
| row_mat_test.test | RUN | 0.252849 | 0.626877 | 0.756659 | 0.001453 | 0.001237 | 0.001242 |
| transpose_test.test | RUN | 0.294983 | 0.965081 | 1.040318 | 0.001582 | 0.001304 | 0.001153 |
| translation_test.test | RUN | 0.241495 | 0.609681 | 0.775401 | 0.001222 | 0.001185 | 0.001420 |
| translation_mat_test.test | RUN | 0.267300 | 0.598136 | 0.833686 | 0.001218 | 0.001195 | 0.001169 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.091072 | 0.172380 | 0.219011 | — | — | — |
| swizzle2_test2.test | RUN | 0.107487 | 0.262074 | 0.313277 | 0.001439 | 0.001272 | 0.001074 |
| swizzle2_test3.test | RUN | 0.107018 | 0.262130 | 0.309342 | 0.001272 | 0.001319 | 0.001158 |
| swizzle2_test4.test | RUN | 0.107816 | 0.261066 | 0.302872 | 0.001244 | 0.001298 | 0.001171 |
| swizzle2_test.test | RUN | 0.350539 | 0.714078 | 0.967577 | 0.001510 | 0.001381 | 0.001345 |
| swizzle3_test2.test | RUN | 0.122476 | 0.278535 | 0.341138 | 0.001032 | 0.001356 | 0.001141 |
| swizzle3_test3.test | RUN | 0.119987 | 0.280335 | 0.341118 | 0.001489 | 0.001309 | 0.001070 |
| swizzle3_test4.test | RUN | 0.123738 | 0.276426 | 0.341001 | 0.001323 | 0.001200 | 0.001048 |
| swizzle3_test.test | RUN | 0.336111 | 0.729630 | 0.981899 | 0.001282 | 0.001175 | 0.001220 |
| swizzle4_test2.test | RUN | 0.203641 | 0.391543 | 0.548108 | 0.001271 | 0.001367 | 0.001224 |
| swizzle4_test3.test | RUN | 0.198336 | 0.389113 | 0.535675 | 0.001284 | 0.001257 | 0.001333 |
| swizzle4_test4.test | RUN | 0.207130 | 0.399043 | 0.539348 | 0.001258 | 0.001184 | 0.001214 |
| swizzle4_test.test | RUN | 0.339666 | 0.798665 | 1.012522 | 0.001209 | 0.001328 | 0.001274 |
| deduce_scalar_test.test | COMPILE | 0.017866 | 0.038466 | 0.054394 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125506 | 0.303749 | 0.364076 | 0.001254 | 0.001642 | 0.001341 |
| deduce_scalar_mv_test.test | RUN | 0.156772 | 0.352277 | 0.446480 | 0.001263 | 0.001365 | 0.001167 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013845 | 0.024987 | 0.043283 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015257 | 0.034546 | 0.048870 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.016557 | 0.032587 | 0.047103 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015848 | 0.033014 | 0.046745 | — | — | — |
| interop_test.test | RUN | 0.142279 | 0.449690 | 0.632342 | 0.000482 | 0.000596 | 0.001215 |
| transform_test.test | RUN | 0.326110 | 0.584535 | 0.840787 | 0.001154 | 0.000984 | 0.000917 |
| projection_test.test | RUN | 0.218905 | 0.518687 | 0.572494 | 0.001018 | 0.000935 | 0.000894 |
| scalar_traits_test.test | COMPILE | 0.016362 | 0.035352 | 0.051884 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.977× | 0.985×, 0.970× | 1.007× |
| clang | 1.017× | 1.017×, 1.016× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000800s | 0.000824s | 0.000806s | byte equality observed |
| access_q_test.test | 10 | 0.000823s | 0.000819s | 0.000810s | byte equality observed |
| access_v_test.test | 10 | 0.000797s | 0.000795s | 0.000827s | byte equality observed |
| assign_test.test | 10 | 0.000805s | 0.000819s | 0.000801s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000828s | 0.000816s | 0.000816s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000824s | 0.000832s | 0.000813s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000810s | 0.000836s | 0.000839s | byte equality observed |
| col_mat_test.test | 10 | 0.000809s | 0.000823s | 0.000828s | byte equality observed |
| col_test.test | 10 | 0.000842s | 0.000850s | 0.000812s | byte equality observed |
| conjugate_test.test | 10 | 0.000790s | 0.000845s | 0.000806s | byte equality observed |
| convert_to_test.test | 10 | 0.000811s | 0.000815s | 0.000822s | byte equality observed |
| cross_test.test | 10 | 0.000828s | 0.000809s | 0.000814s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000822s | 0.000851s | 0.000836s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000813s | 0.000822s | 0.000823s | byte equality observed |
| del_col_test.test | 10 | 0.000827s | 0.000809s | 0.000817s | byte equality observed |
| del_row_col_test.test | 10 | 0.000835s | 0.000802s | 0.000810s | byte equality observed |
| del_row_test.test | 10 | 0.000818s | 0.000804s | 0.000825s | byte equality observed |
| determinant_test.test | 10 | 0.000840s | 0.000821s | 0.000835s | byte equality observed |
| diag_mat_test.test | 10 | 0.000819s | 0.000803s | 0.000830s | byte equality observed |
| diag_test.test | 10 | 0.000796s | 0.000814s | 0.000829s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000815s | 0.000790s | 0.000809s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000839s | 0.000812s | 0.000822s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000813s | 0.000814s | 0.000806s | byte equality observed |
| div_ms_test.test | 10 | 0.000809s | 0.000837s | 0.000831s | byte equality observed |
| div_qs_test.test | 10 | 0.000825s | 0.000817s | 0.000822s | byte equality observed |
| div_vs_test.test | 10 | 0.000820s | 0.000800s | 0.000837s | byte equality observed |
| dot_qq_test.test | 10 | 0.000822s | 0.000802s | 0.000825s | byte equality observed |
| dot_vv_test.test | 10 | 0.000799s | 0.000809s | 0.000815s | byte equality observed |
| eq_mm_test.test | 10 | 0.000814s | 0.000834s | 0.000816s | byte equality observed |
| eq_qq_test.test | 10 | 0.000799s | 0.000848s | 0.000818s | byte equality observed |
| eq_vv_test.test | 10 | 0.000812s | 0.000827s | 0.000805s | byte equality observed |
| identity_mat_test.test | 10 | 0.000811s | 0.000822s | 0.000787s | byte equality observed |
| identity_quat_test.test | 10 | 0.000807s | 0.000824s | 0.000805s | byte equality observed |
| interop_test.test | 10 | 0.000373s | 0.000368s | 0.000804s | byte equality observed |
| inverse_m_test.test | 10 | 0.000861s | 0.000837s | 0.000835s | byte equality observed |
| inverse_q_test.test | 10 | 0.000819s | 0.000839s | 0.000806s | byte equality observed |
| mag_q_test.test | 10 | 0.000818s | 0.000797s | 0.000810s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000829s | 0.000815s | 0.000802s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000836s | 0.000808s | 0.000806s | byte equality observed |
| mag_v_test.test | 10 | 0.000847s | 0.000838s | 0.000808s | byte equality observed |
| mat_index_test.test | 10 | 0.000814s | 0.000807s | 0.000807s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000829s | 0.000813s | 0.000824s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000796s | 0.000794s | 0.000799s | byte equality observed |
| math_test.test | 10 | 0.001214s | 0.001169s | 0.001071s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000820s | 0.000795s | 0.000837s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000823s | 0.000787s | 0.000803s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000805s | 0.000797s | 0.000809s | byte equality observed |
| minus_m_test.test | 10 | 0.000804s | 0.000831s | 0.000821s | byte equality observed |
| minus_mm_test.test | 10 | 0.000802s | 0.000824s | 0.000839s | byte equality observed |
| minus_q_test.test | 10 | 0.000799s | 0.000856s | 0.000837s | byte equality observed |
| minus_qq_test.test | 10 | 0.000822s | 0.000844s | 0.000806s | byte equality observed |
| minus_v_test.test | 10 | 0.000826s | 0.000830s | 0.000824s | byte equality observed |
| minus_vv_test.test | 10 | 0.000820s | 0.000810s | 0.000833s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000816s | 0.000816s | 0.000840s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000827s | 0.000806s | 0.000827s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000836s | 0.000850s | 0.000837s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000809s | 0.000825s | 0.000815s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000799s | 0.000818s | 0.000799s | byte equality observed |
| mul_mm_test.test | 10 | 0.000847s | 0.000819s | 0.000779s | byte equality observed |
| mul_ms_test.test | 10 | 0.000847s | 0.000792s | 0.000837s | byte equality observed |
| mul_mv_test.test | 10 | 0.000811s | 0.000823s | 0.000804s | byte equality observed |
| mul_qq_test.test | 10 | 0.000844s | 0.000812s | 0.000812s | byte equality observed |
| mul_qs_test.test | 10 | 0.000830s | 0.000815s | 0.000792s | byte equality observed |
| mul_qv_test.test | 10 | 0.000815s | 0.000833s | 0.000791s | byte equality observed |
| mul_sm_test.test | 10 | 0.000807s | 0.000842s | 0.000815s | byte equality observed |
| mul_sv_test.test | 10 | 0.000814s | 0.000830s | 0.000814s | byte equality observed |
| mul_vm_test.test | 10 | 0.000811s | 0.000835s | 0.000807s | byte equality observed |
| mul_vs_test.test | 10 | 0.000817s | 0.000819s | 0.000803s | byte equality observed |
| neg_col_test.test | 10 | 0.000790s | 0.000824s | 0.000815s | byte equality observed |
| neg_row_test.test | 10 | 0.000821s | 0.000800s | 0.000810s | byte equality observed |
| normalize_q_test.test | 10 | 0.000823s | 0.000817s | 0.000788s | byte equality observed |
| normalize_v_test.test | 10 | 0.000826s | 0.000796s | 0.000811s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000806s | 0.000811s | 0.000824s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000825s | 0.000798s | 0.000800s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000840s | 0.000807s | 0.000829s | byte equality observed |
| plus_mm_test.test | 10 | 0.000828s | 0.000811s | 0.000808s | byte equality observed |
| plus_qq_test.test | 10 | 0.000801s | 0.000812s | 0.000813s | byte equality observed |
| plus_vv_test.test | 10 | 0.000827s | 0.000809s | 0.000833s | byte equality observed |
| projection_test.test | 10 | 0.000812s | 0.000843s | 0.000833s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000819s | 0.000817s | 0.000844s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000801s | 0.000787s | 0.000781s | byte equality observed |
| rot_mat_test.test | 1 | 0.023445s | 0.021885s | 0.026440s | byte equality observed |
| rot_quat_test.test | 10 | 0.000764s | 0.000751s | 0.000775s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000785s | 0.000784s | 0.000794s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000848s | 0.000833s | 0.000823s | byte equality observed |
| roty_mat_test.test | 10 | 0.000847s | 0.000848s | 0.000837s | byte equality observed |
| roty_quat_test.test | 10 | 0.000817s | 0.000829s | 0.000820s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000837s | 0.000845s | 0.000829s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000826s | 0.000834s | 0.000858s | byte equality observed |
| row_mat_test.test | 10 | 0.000816s | 0.000839s | 0.000846s | byte equality observed |
| row_test.test | 10 | 0.000833s | 0.000820s | 0.000834s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000834s | 0.000826s | 0.000851s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000819s | 0.000817s | 0.000810s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000834s | 0.000800s | 0.000809s | byte equality observed |
| slerp_test.test | 2 | 0.010986s | 0.009687s | 0.009832s | byte equality observed |
| swap_cols_test.test | 10 | 0.000762s | 0.000744s | 0.000739s | byte equality observed |
| swap_rows_test.test | 10 | 0.000772s | 0.000770s | 0.000764s | byte equality observed |
| swizzle2_test.test | 10 | 0.000817s | 0.000804s | 0.000812s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000797s | 0.000833s | 0.000785s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000822s | 0.000799s | 0.000796s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000816s | 0.000822s | 0.000792s | byte equality observed |
| swizzle3_test.test | 10 | 0.000801s | 0.000829s | 0.000822s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000810s | 0.000838s | 0.000821s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000823s | 0.000837s | 0.000828s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000800s | 0.000805s | 0.000810s | byte equality observed |
| swizzle4_test.test | 10 | 0.000832s | 0.000812s | 0.000817s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000819s | 0.000819s | 0.000802s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000806s | 0.000826s | 0.000814s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000826s | 0.000843s | 0.000801s | byte equality observed |
| to_string_test.test | 10 | 0.000866s | 0.000872s | 0.000874s | byte equality observed |
| transform_test.test | 10 | 0.000848s | 0.000826s | 0.000832s | byte equality observed |
| translation_mat_test.test | 10 | 0.000837s | 0.000810s | 0.000836s | byte equality observed |
| translation_test.test | 10 | 0.000843s | 0.000821s | 0.000819s | byte equality observed |
| transpose_test.test | 10 | 0.000834s | 0.000824s | 0.000844s | byte equality observed |
| vec_index_test.test | 10 | 0.000834s | 0.000813s | 0.000825s | byte equality observed |
| vec_register_test.test | 10 | 0.000819s | 0.000815s | 0.000833s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000813s | 0.000860s | 0.000823s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000828s | 0.000839s | 0.000808s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000803s | 0.000845s | 0.000821s | byte equality observed |
| zero_mat_test.test | 10 | 0.000804s | 0.000844s | 0.000820s | byte equality observed |
| zero_quat_test.test | 10 | 0.000807s | 0.000838s | 0.000824s | byte equality observed |
| zero_vec_test.test | 10 | 0.000812s | 0.000802s | 0.000793s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
