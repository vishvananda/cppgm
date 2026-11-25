# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.198209 | 0.563224 | 0.601993 | 0.001902 | 0.001586 | 0.001569 |
| mat_traits_array_test.test | RUN | 0.144523 | 0.561459 | 0.467803 | 0.001306 | 0.001172 | 0.001246 |
| mat_traits_std_array_test.test | RUN | 0.149699 | 0.431132 | 0.462753 | 0.001507 | 0.001365 | 0.001058 |
| vec_traits_array_test.test | RUN | 0.132710 | 0.434185 | 0.392348 | 0.001400 | 0.001426 | 0.001160 |
| vec_traits_gnuc_test.test | RUN | 0.246874 | 0.521692 | 0.752323 | 0.001259 | 0.001072 | 0.001514 |
| vec_traits_std_array_test.test | RUN | 0.128422 | 0.334464 | 0.389034 | 0.001457 | 0.001356 | 0.001200 |
| quat_traits_array_test.test | RUN | 0.128669 | 0.454005 | 0.390326 | 0.001248 | 0.001271 | 0.001330 |
| quat_traits_std_array_test.test | RUN | 0.127204 | 0.335945 | 0.386218 | 0.001252 | 0.001332 | 0.001185 |
| access_m_test.test | RUN | 0.212008 | 0.808043 | 0.892053 | 0.001237 | 0.001276 | 0.001377 |
| access_m_fail1.test | COMPILE_FAIL | 0.020388 | 0.033412 | 0.057104 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020230 | 0.034519 | 0.056749 | — | — | — |
| access_q_test.test | RUN | 0.176607 | 0.403397 | 0.529942 | 0.001268 | 0.001287 | 0.001189 |
| access_q_fail.test | COMPILE_FAIL | 0.015968 | 0.028358 | 0.050547 | — | — | — |
| access_v_test.test | RUN | 0.176399 | 0.428232 | 0.533779 | 0.001205 | 0.001119 | 0.001207 |
| access_v_fail1.test | COMPILE_FAIL | 0.014680 | 0.025111 | 0.044301 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014484 | 0.025541 | 0.044543 | — | — | — |
| assign_test.test | RUN | 0.264956 | 0.685169 | 0.969335 | 0.001490 | 0.001381 | 0.001410 |
| to_string_test.test | RUN | 0.315921 | 1.170392 | 5.637179 | 0.001304 | 0.001395 | 0.001343 |
| cmp_vv_test.test | RUN | 0.215529 | 0.550849 | 0.643666 | 0.001229 | 0.001220 | 0.001284 |
| cross_test.test | RUN | 0.208413 | 0.506346 | 0.627240 | 0.001031 | 0.001219 | 0.001307 |
| div_eq_vs_test.test | RUN | 0.202990 | 0.469040 | 0.623469 | 0.001128 | 0.001199 | 0.001380 |
| div_vs_test.test | RUN | 0.212385 | 0.581704 | 0.653581 | 0.001326 | 0.001498 | 0.001316 |
| dot_vv_test.test | RUN | 0.202478 | 0.519905 | 0.616860 | 0.001165 | 0.001219 | 0.001235 |
| eq_vv_test.test | RUN | 0.227543 | 0.580888 | 0.695953 | 0.001120 | 0.001402 | 0.001290 |
| mag_v_test.test | RUN | 0.199659 | 0.488379 | 0.600393 | 0.001442 | 0.001296 | 0.001382 |
| mag_sqr_v_test.test | RUN | 0.201046 | 0.471992 | 0.575018 | 0.001253 | 0.001135 | 0.001446 |
| minus_v_test.test | RUN | 0.206241 | 0.551211 | 0.653973 | 0.001273 | 0.001245 | 0.001169 |
| minus_eq_vv_test.test | RUN | 0.202442 | 0.536331 | 0.639638 | 0.001181 | 0.001513 | 0.001348 |
| minus_vv_test.test | RUN | 0.212901 | 0.573973 | 0.646810 | 0.001422 | 0.001275 | 0.001163 |
| mul_eq_vs_test.test | RUN | 0.203121 | 0.468957 | 0.631197 | 0.001264 | 0.001202 | 0.001168 |
| mul_vs_test.test | RUN | 0.209462 | 0.590666 | 0.657202 | 0.001250 | 0.001433 | 0.001276 |
| mul_sv_test.test | RUN | 0.209740 | 0.582268 | 0.679454 | 0.001114 | 0.001327 | 0.001260 |
| mul_vm_test.test | RUN | 0.295704 | 1.032065 | 1.055460 | 0.001048 | 0.001236 | 0.001228 |
| normalize_v_test.test | RUN | 0.219971 | 0.711849 | 0.683322 | 0.001149 | 0.001267 | 0.001369 |
| plus_eq_vv_test.test | RUN | 0.203872 | 0.539416 | 0.610326 | 0.001471 | 0.001287 | 0.001457 |
| plus_vv_test.test | RUN | 0.211983 | 0.578520 | 0.654100 | 0.001246 | 0.001268 | 0.001178 |
| scalar_cast_v_test.test | RUN | 0.195723 | 0.429377 | 0.569926 | 0.001253 | 0.001183 | 0.001210 |
| vec_index_test.test | RUN | 0.169939 | 0.438849 | 0.532440 | 0.001131 | 0.001336 | 0.001280 |
| vec_register_test.test | RUN | 0.112981 | 0.399568 | 0.376387 | 0.001296 | 0.001321 | 0.001312 |
| cmp_mm_test.test | RUN | 0.359110 | 1.293778 | 1.384185 | 0.001378 | 0.001282 | 0.001500 |
| determinant_test.test | RUN | 0.230221 | 0.650312 | 0.724891 | 0.001375 | 0.001434 | 0.001350 |
| div_eq_ms_test.test | RUN | 0.240876 | 0.605848 | 0.823811 | 0.001394 | 0.001193 | 0.001357 |
| div_ms_test.test | RUN | 0.277098 | 0.964056 | 1.016678 | 0.001289 | 0.001280 | 0.001270 |
| eq_mm_test.test | RUN | 0.337755 | 1.191429 | 1.312353 | 0.001278 | 0.001239 | 0.001234 |
| minus_m_test.test | RUN | 0.279665 | 0.962077 | 0.994864 | 0.001283 | 0.001349 | 0.001327 |
| minus_eq_mm_test.test | RUN | 0.263448 | 0.884504 | 0.910572 | 0.001300 | 0.001353 | 0.001207 |
| minus_mm_test.test | RUN | 0.294989 | 1.113314 | 1.077351 | 0.001185 | 0.001300 | 0.001316 |
| mul_eq_mm_test.test | RUN | 0.246612 | 0.822136 | 0.804492 | 0.001274 | 0.001332 | 0.001254 |
| mul_eq_ms_test.test | RUN | 0.241433 | 0.590886 | 0.836881 | 0.001276 | 0.001332 | 0.001142 |
| mul_mm_test.test | RUN | 0.342816 | 1.834608 | 1.341169 | 0.001236 | 0.001218 | 0.001272 |
| mul_ms_test.test | RUN | 0.283780 | 0.967543 | 1.041423 | 0.001295 | 0.001355 | 0.001170 |
| mul_sm_test.test | RUN | 0.289785 | 0.963261 | 1.032632 | 0.001334 | 0.001207 | 0.001254 |
| mul_mv_test.test | RUN | 0.291435 | 1.046137 | 1.032920 | 0.001371 | 0.001161 | 0.001186 |
| inverse_m_test.test | RUN | 0.395096 | 1.910406 | 1.483683 | 0.001368 | 0.001222 | 0.001402 |
| plus_eq_mm_test.test | RUN | 0.267565 | 0.877778 | 0.904644 | 0.001307 | 0.001359 | 0.001216 |
| plus_mm_test.test | RUN | 0.296153 | 1.129273 | 1.070423 | 0.001204 | 0.001115 | 0.001146 |
| scalar_cast_m_test.test | RUN | 0.221797 | 0.487608 | 0.659728 | 0.001226 | 0.001367 | 0.001234 |
| mat_index_test.test | RUN | 0.179985 | 0.483600 | 0.579017 | 0.001201 | 0.001265 | 0.001219 |
| cmp_qq_test.test | RUN | 0.192997 | 0.440983 | 0.552205 | 0.001293 | 0.001332 | 0.001288 |
| conjugate_test.test | RUN | 0.197403 | 0.457531 | 0.572156 | 0.001273 | 0.001338 | 0.001239 |
| normalize_q_test.test | RUN | 0.198277 | 0.520344 | 0.590103 | 0.001408 | 0.001371 | 0.001183 |
| div_eq_qs_test.test | RUN | 0.193538 | 0.427758 | 0.566974 | 0.001147 | 0.001198 | 0.001338 |
| div_qs_test.test | RUN | 0.197077 | 0.460432 | 0.576896 | 0.001315 | 0.001141 | 0.001240 |
| dot_qq_test.test | RUN | 0.195371 | 0.442961 | 0.577118 | 0.001183 | 0.001278 | 0.001222 |
| eq_qq_test.test | RUN | 0.197013 | 0.465849 | 0.576906 | 0.001270 | 0.001409 | 0.001261 |
| inverse_q_test.test | RUN | 0.240968 | 0.619425 | 0.729681 | 0.001206 | 0.001330 | 0.001325 |
| mag_q_test.test | RUN | 0.201518 | 0.453013 | 0.565850 | 0.001236 | 0.001244 | 0.001197 |
| mag_sqr_q_test.test | RUN | 0.192629 | 0.450513 | 0.566483 | 0.001330 | 0.001412 | 0.001160 |
| minus_q_test.test | RUN | 0.188740 | 0.454545 | 0.568149 | 0.001281 | 0.001259 | 0.001258 |
| minus_eq_qq_test.test | RUN | 0.196568 | 0.456373 | 0.570495 | 0.001272 | 0.001045 | 0.001200 |
| minus_qq_test.test | RUN | 0.197200 | 0.470033 | 0.574085 | 0.001200 | 0.001198 | 0.001293 |
| mul_eq_qs_test.test | RUN | 0.187043 | 0.424390 | 0.554786 | 0.001312 | 0.001415 | 0.001261 |
| mul_qs_test.test | RUN | 0.194840 | 0.457411 | 0.575720 | 0.001129 | 0.001287 | 0.001250 |
| mul_qv_test.test | RUN | 0.239682 | 0.623047 | 0.729770 | 0.001236 | 0.001279 | 0.001262 |
| mul_qq_test.test | RUN | 0.229265 | 0.632129 | 0.719214 | 0.001168 | 0.001312 | 0.001171 |
| mul_eq_qq_test.test | RUN | 0.235165 | 0.624483 | 0.720313 | 0.001328 | 0.001585 | 0.001202 |
| plus_eq_qq_test.test | RUN | 0.191952 | 0.452478 | 0.562803 | 0.001318 | 0.001379 | 0.001122 |
| plus_qq_test.test | RUN | 0.198981 | 0.460289 | 0.576801 | 0.001333 | 0.001368 | 0.001204 |
| scalar_cast_q_test.test | RUN | 0.198286 | 0.431501 | 0.559789 | 0.001271 | 0.001344 | 0.001169 |
| slerp_test.test | RUN | 0.215264 | 0.891865 | 0.684430 | 0.015427 | 0.013016 | 0.013190 |
| convert_to_test.test | RUN | 0.290651 | 0.824564 | 1.063724 | 0.001395 | 0.001363 | 0.001265 |
| rot_mat_test.test | RUN | 0.477407 | 3.768535 | 3.335880 | 0.032709 | 0.031040 | 0.034285 |
| rot_quat_test.test | RUN | 0.244773 | 0.748560 | 0.749880 | 0.001491 | 0.001415 | 0.001343 |
| rotx_mat_test.test | RUN | 0.275025 | 0.977264 | 0.960423 | 0.001634 | 0.001395 | 0.001287 |
| rotx_quat_test.test | RUN | 0.244322 | 0.634092 | 0.703803 | 0.001251 | 0.001279 | 0.001358 |
| roty_mat_test.test | RUN | 0.274982 | 0.998617 | 0.984829 | 0.001273 | 0.001331 | 0.001328 |
| roty_quat_test.test | RUN | 0.236607 | 0.628490 | 0.653817 | 0.001302 | 0.001305 | 0.001208 |
| rotz_mat_test.test | RUN | 0.289622 | 1.096595 | 1.041121 | 0.001239 | 0.001208 | 0.001386 |
| rotz_quat_test.test | RUN | 0.236830 | 0.632839 | 0.705624 | 0.001361 | 0.001225 | 0.001261 |
| zero_vec_test.test | RUN | 0.204226 | 0.552671 | 0.581343 | 0.001377 | 0.001266 | 0.001183 |
| zero_mat_test.test | RUN | 0.242914 | 0.910932 | 0.857497 | 0.001240 | 0.001326 | 0.001275 |
| zero_quat_test.test | RUN | 0.190251 | 0.456300 | 0.545020 | 0.001096 | 0.001418 | 0.001147 |
| identity_mat_test.test | RUN | 0.228283 | 0.653845 | 0.740439 | 0.001211 | 0.001463 | 0.001196 |
| identity_quat_test.test | RUN | 0.195631 | 0.447821 | 0.560253 | 0.001334 | 0.001431 | 0.001179 |
| col_test.test | RUN | 0.380605 | 1.397515 | 1.621906 | 0.001134 | 0.001398 | 0.001315 |
| col_mat_test.test | RUN | 0.238672 | 0.624538 | 0.762390 | 0.001409 | 0.001367 | 0.001300 |
| neg_col_test.test | RUN | 0.272516 | 0.891783 | 0.981752 | 0.001386 | 0.001429 | 0.001151 |
| neg_row_test.test | RUN | 0.284196 | 0.901469 | 0.971423 | 0.001261 | 0.001387 | 0.001167 |
| del_col_test.test | RUN | 0.291902 | 0.992720 | 1.016370 | 0.001341 | 0.001325 | 0.001327 |
| del_row_test.test | RUN | 0.294404 | 0.974442 | 1.019315 | 0.001175 | 0.001432 | 0.001172 |
| del_row_col_test.test | RUN | 0.411412 | 1.835535 | 1.856706 | 0.001445 | 0.001249 | 0.001274 |
| swap_cols_test.test | RUN | 0.513714 | 2.446591 | 2.283170 | 0.001352 | 0.001369 | 0.001259 |
| swap_rows_test.test | RUN | 0.576201 | 2.575136 | 2.300407 | 0.001292 | 0.001330 | 0.001375 |
| diag_test.test | RUN | 0.259382 | 0.657134 | 0.877782 | 0.001267 | 0.001415 | 0.001269 |
| diag_mat_test.test | RUN | 0.250310 | 0.641881 | 0.776629 | 0.001197 | 0.001340 | 0.001204 |
| row_test.test | RUN | 0.378122 | 1.382653 | 1.618221 | 0.001260 | 0.001279 | 0.001245 |
| row_mat_test.test | RUN | 0.246367 | 0.613458 | 0.765692 | 0.001295 | 0.001140 | 0.001356 |
| transpose_test.test | RUN | 0.289048 | 0.954364 | 1.016661 | 0.001301 | 0.001441 | 0.001135 |
| translation_test.test | RUN | 0.233938 | 0.596594 | 0.771729 | 0.001167 | 0.001434 | 0.001272 |
| translation_mat_test.test | RUN | 0.258063 | 0.603438 | 0.831095 | 0.001215 | 0.001227 | 0.001016 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.087331 | 0.173161 | 0.216218 | — | — | — |
| swizzle2_test2.test | RUN | 0.102944 | 0.254119 | 0.316990 | 0.001115 | 0.001143 | 0.001218 |
| swizzle2_test3.test | RUN | 0.102413 | 0.254647 | 0.314716 | 0.001168 | 0.001087 | 0.001111 |
| swizzle2_test4.test | RUN | 0.102623 | 0.256411 | 0.319998 | 0.001114 | 0.001312 | 0.001296 |
| swizzle2_test.test | RUN | 0.327515 | 0.700591 | 0.993438 | 0.001280 | 0.001160 | 0.001267 |
| swizzle3_test2.test | RUN | 0.116413 | 0.268733 | 0.348266 | 0.001155 | 0.001339 | 0.001276 |
| swizzle3_test3.test | RUN | 0.115893 | 0.268972 | 0.344383 | 0.001249 | 0.001254 | 0.001185 |
| swizzle3_test4.test | RUN | 0.114276 | 0.278488 | 0.347049 | 0.000829 | 0.001290 | 0.001240 |
| swizzle3_test.test | RUN | 0.327442 | 0.723869 | 0.987678 | 0.001230 | 0.001309 | 0.001255 |
| swizzle4_test2.test | RUN | 0.193342 | 0.392221 | 0.556721 | 0.001384 | 0.001334 | 0.001258 |
| swizzle4_test3.test | RUN | 0.191851 | 0.393253 | 0.549380 | 0.001115 | 0.001298 | 0.001177 |
| swizzle4_test4.test | RUN | 0.196780 | 0.394637 | 0.549996 | 0.001130 | 0.001370 | 0.001139 |
| swizzle4_test.test | RUN | 0.329540 | 0.799097 | 1.035941 | 0.001150 | 0.001171 | 0.001354 |
| deduce_scalar_test.test | COMPILE | 0.018760 | 0.038628 | 0.054039 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.127766 | 0.309373 | 0.375598 | 0.001295 | 0.001296 | 0.001185 |
| deduce_scalar_mv_test.test | RUN | 0.146710 | 0.339976 | 0.454924 | 0.001006 | 0.001326 | 0.001177 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013606 | 0.024695 | 0.042485 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015041 | 0.034420 | 0.048778 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015647 | 0.032923 | 0.046129 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015320 | 0.034408 | 0.049767 | — | — | — |
| interop_test.test | RUN | 0.150056 | 0.441951 | 0.639019 | 0.000390 | 0.000565 | 0.001292 |
| transform_test.test | RUN | 0.301756 | 0.560059 | 0.866354 | 0.000868 | 0.000885 | 0.000871 |
| projection_test.test | RUN | 0.213308 | 0.514007 | 0.525115 | 0.000917 | 0.000933 | 0.000929 |
| scalar_traits_test.test | COMPILE | 0.015985 | 0.034061 | 0.052156 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.975×, 0.984× | 0.996× |
| clang | 1.018× | 1.019×, 1.017× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000804s | 0.000812s | 0.000839s | byte equality observed |
| access_q_test.test | 10 | 0.000820s | 0.000843s | 0.000819s | byte equality observed |
| access_v_test.test | 10 | 0.000804s | 0.000816s | 0.000830s | byte equality observed |
| assign_test.test | 10 | 0.000817s | 0.000806s | 0.000827s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000846s | 0.000844s | 0.000850s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000811s | 0.000807s | 0.000825s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000817s | 0.000836s | 0.000809s | byte equality observed |
| col_mat_test.test | 10 | 0.000823s | 0.000823s | 0.000805s | byte equality observed |
| col_test.test | 10 | 0.000804s | 0.000820s | 0.000811s | byte equality observed |
| conjugate_test.test | 10 | 0.000818s | 0.000826s | 0.000826s | byte equality observed |
| convert_to_test.test | 10 | 0.000820s | 0.000862s | 0.000807s | byte equality observed |
| cross_test.test | 10 | 0.000819s | 0.000806s | 0.000805s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000825s | 0.000801s | 0.000801s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000811s | 0.000820s | 0.000817s | byte equality observed |
| del_col_test.test | 10 | 0.000805s | 0.000824s | 0.000814s | byte equality observed |
| del_row_col_test.test | 10 | 0.000822s | 0.000838s | 0.000816s | byte equality observed |
| del_row_test.test | 10 | 0.000824s | 0.000821s | 0.000845s | byte equality observed |
| determinant_test.test | 10 | 0.000835s | 0.000835s | 0.000849s | byte equality observed |
| diag_mat_test.test | 10 | 0.000815s | 0.000792s | 0.000796s | byte equality observed |
| diag_test.test | 10 | 0.000822s | 0.000819s | 0.000815s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000804s | 0.000794s | 0.000820s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000806s | 0.000800s | 0.000853s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000821s | 0.000797s | 0.000855s | byte equality observed |
| div_ms_test.test | 10 | 0.000818s | 0.000789s | 0.000847s | byte equality observed |
| div_qs_test.test | 10 | 0.000836s | 0.000804s | 0.000830s | byte equality observed |
| div_vs_test.test | 10 | 0.000830s | 0.000818s | 0.000819s | byte equality observed |
| dot_qq_test.test | 10 | 0.000845s | 0.000796s | 0.000814s | byte equality observed |
| dot_vv_test.test | 10 | 0.000855s | 0.000812s | 0.000841s | byte equality observed |
| eq_mm_test.test | 10 | 0.000856s | 0.000819s | 0.000851s | byte equality observed |
| eq_qq_test.test | 10 | 0.000827s | 0.000809s | 0.000848s | byte equality observed |
| eq_vv_test.test | 10 | 0.000817s | 0.000806s | 0.000805s | byte equality observed |
| identity_mat_test.test | 10 | 0.000829s | 0.000798s | 0.000802s | byte equality observed |
| identity_quat_test.test | 10 | 0.000808s | 0.000812s | 0.000792s | byte equality observed |
| interop_test.test | 10 | 0.000368s | 0.000360s | 0.000767s | byte equality observed |
| inverse_m_test.test | 10 | 0.000863s | 0.000829s | 0.000841s | byte equality observed |
| inverse_q_test.test | 10 | 0.000796s | 0.000818s | 0.000807s | byte equality observed |
| mag_q_test.test | 10 | 0.000795s | 0.000797s | 0.000819s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000804s | 0.000816s | 0.000800s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000827s | 0.000810s | 0.000812s | byte equality observed |
| mag_v_test.test | 10 | 0.000839s | 0.000829s | 0.000851s | byte equality observed |
| mat_index_test.test | 10 | 0.000838s | 0.000793s | 0.000846s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000805s | 0.000807s | 0.000845s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000800s | 0.000822s | 0.000823s | byte equality observed |
| math_test.test | 10 | 0.001209s | 0.001178s | 0.001076s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000808s | 0.000804s | 0.000822s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000795s | 0.000780s | 0.000839s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000814s | 0.000813s | 0.000842s | byte equality observed |
| minus_m_test.test | 10 | 0.000830s | 0.000811s | 0.000834s | byte equality observed |
| minus_mm_test.test | 10 | 0.000823s | 0.000788s | 0.000806s | byte equality observed |
| minus_q_test.test | 10 | 0.000819s | 0.000805s | 0.000803s | byte equality observed |
| minus_qq_test.test | 10 | 0.000802s | 0.000806s | 0.000834s | byte equality observed |
| minus_v_test.test | 10 | 0.000800s | 0.000813s | 0.000804s | byte equality observed |
| minus_vv_test.test | 10 | 0.000803s | 0.000810s | 0.000795s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000826s | 0.000808s | 0.000828s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000820s | 0.000823s | 0.000819s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000826s | 0.000839s | 0.000846s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000810s | 0.000818s | 0.000866s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000816s | 0.000793s | 0.000853s | byte equality observed |
| mul_mm_test.test | 10 | 0.000840s | 0.000808s | 0.000845s | byte equality observed |
| mul_ms_test.test | 10 | 0.000807s | 0.000814s | 0.000814s | byte equality observed |
| mul_mv_test.test | 10 | 0.000790s | 0.000794s | 0.000820s | byte equality observed |
| mul_qq_test.test | 10 | 0.000808s | 0.000822s | 0.000844s | byte equality observed |
| mul_qs_test.test | 10 | 0.000789s | 0.000817s | 0.000816s | byte equality observed |
| mul_qv_test.test | 10 | 0.000815s | 0.000793s | 0.000811s | byte equality observed |
| mul_sm_test.test | 10 | 0.000809s | 0.000827s | 0.000821s | byte equality observed |
| mul_sv_test.test | 10 | 0.000796s | 0.000807s | 0.000789s | byte equality observed |
| mul_vm_test.test | 10 | 0.000823s | 0.000819s | 0.000844s | byte equality observed |
| mul_vs_test.test | 10 | 0.000803s | 0.000820s | 0.000853s | byte equality observed |
| neg_col_test.test | 10 | 0.000827s | 0.000823s | 0.000783s | byte equality observed |
| neg_row_test.test | 10 | 0.000822s | 0.000796s | 0.000797s | byte equality observed |
| normalize_q_test.test | 10 | 0.000840s | 0.000828s | 0.000809s | byte equality observed |
| normalize_v_test.test | 10 | 0.000851s | 0.000810s | 0.000792s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000832s | 0.000826s | 0.000814s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000801s | 0.000818s | 0.000832s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000810s | 0.000819s | 0.000828s | byte equality observed |
| plus_mm_test.test | 10 | 0.000855s | 0.000788s | 0.000828s | byte equality observed |
| plus_qq_test.test | 10 | 0.000837s | 0.000798s | 0.000843s | byte equality observed |
| plus_vv_test.test | 10 | 0.000829s | 0.000806s | 0.000817s | byte equality observed |
| projection_test.test | 10 | 0.000826s | 0.000814s | 0.000831s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000833s | 0.000794s | 0.000796s | byte equality observed |
| quat_traits_std_array_test.test | 8 | 0.000821s | 0.000780s | 0.000772s | byte equality observed |
| rot_mat_test.test | 1 | 0.023369s | 0.022752s | 0.026552s | byte equality observed |
| rot_quat_test.test | 10 | 0.000750s | 0.000731s | 0.000758s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000765s | 0.000741s | 0.000765s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000808s | 0.000824s | 0.000832s | byte equality observed |
| roty_mat_test.test | 10 | 0.000834s | 0.000842s | 0.000859s | byte equality observed |
| roty_quat_test.test | 10 | 0.000869s | 0.000833s | 0.000845s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000849s | 0.000833s | 0.000832s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000846s | 0.000845s | 0.000830s | byte equality observed |
| row_mat_test.test | 10 | 0.000829s | 0.000836s | 0.000840s | byte equality observed |
| row_test.test | 10 | 0.000804s | 0.000836s | 0.000819s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000813s | 0.000842s | 0.000810s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000802s | 0.000845s | 0.000824s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000796s | 0.000802s | 0.000822s | byte equality observed |
| slerp_test.test | 2 | 0.011160s | 0.009453s | 0.009840s | byte equality observed |
| swap_cols_test.test | 10 | 0.000749s | 0.000765s | 0.000733s | byte equality observed |
| swap_rows_test.test | 10 | 0.000771s | 0.000752s | 0.000766s | byte equality observed |
| swizzle2_test.test | 10 | 0.000822s | 0.000794s | 0.000825s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000825s | 0.000799s | 0.000831s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000828s | 0.000792s | 0.000847s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000824s | 0.000828s | 0.000862s | byte equality observed |
| swizzle3_test.test | 10 | 0.000813s | 0.000836s | 0.000849s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000804s | 0.000797s | 0.000856s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000838s | 0.000799s | 0.000844s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000828s | 0.000773s | 0.000841s | byte equality observed |
| swizzle4_test.test | 10 | 0.000838s | 0.000834s | 0.000869s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000838s | 0.000857s | 0.000851s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000802s | 0.000812s | 0.000850s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000801s | 0.000811s | 0.000825s | byte equality observed |
| to_string_test.test | 10 | 0.000832s | 0.000872s | 0.000839s | byte equality observed |
| transform_test.test | 10 | 0.000811s | 0.000855s | 0.000803s | byte equality observed |
| translation_mat_test.test | 10 | 0.000782s | 0.000827s | 0.000801s | byte equality observed |
| translation_test.test | 10 | 0.000804s | 0.000857s | 0.000823s | byte equality observed |
| transpose_test.test | 10 | 0.000812s | 0.000839s | 0.000848s | byte equality observed |
| vec_index_test.test | 10 | 0.000809s | 0.000814s | 0.000866s | byte equality observed |
| vec_register_test.test | 10 | 0.000806s | 0.000809s | 0.000850s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000802s | 0.000850s | 0.000837s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000832s | 0.000831s | 0.000844s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000845s | 0.000839s | 0.000806s | byte equality observed |
| zero_mat_test.test | 10 | 0.000819s | 0.000820s | 0.000826s | byte equality observed |
| zero_quat_test.test | 10 | 0.000812s | 0.000825s | 0.000838s | byte equality observed |
| zero_vec_test.test | 10 | 0.000813s | 0.000784s | 0.000838s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
