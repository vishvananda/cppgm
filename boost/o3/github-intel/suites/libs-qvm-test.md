# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.197266 | 0.563789 | 0.588255 | 0.001622 | 0.001744 | 0.001469 |
| mat_traits_array_test.test | RUN | 0.152555 | 0.566424 | 0.460748 | 0.001372 | 0.001125 | 0.001222 |
| mat_traits_std_array_test.test | RUN | 0.151364 | 0.430291 | 0.463900 | 0.001402 | 0.001376 | 0.001110 |
| vec_traits_array_test.test | RUN | 0.130844 | 0.434265 | 0.390690 | 0.001246 | 0.001114 | 0.001059 |
| vec_traits_gnuc_test.test | RUN | 0.240903 | 0.522528 | 0.738509 | 0.001154 | 0.001143 | 0.001101 |
| vec_traits_std_array_test.test | RUN | 0.130438 | 0.334406 | 0.388933 | 0.001404 | 0.001259 | 0.001160 |
| quat_traits_array_test.test | RUN | 0.128885 | 0.445017 | 0.381057 | 0.001558 | 0.001156 | 0.001127 |
| quat_traits_std_array_test.test | RUN | 0.124990 | 0.335155 | 0.384777 | 0.001113 | 0.001196 | 0.001154 |
| access_m_test.test | RUN | 0.210827 | 0.802285 | 0.873608 | 0.001278 | 0.001362 | 0.001187 |
| access_m_fail1.test | COMPILE_FAIL | 0.020034 | 0.035086 | 0.055560 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018970 | 0.035121 | 0.056442 | — | — | — |
| access_q_test.test | RUN | 0.175569 | 0.407054 | 0.529068 | 0.001222 | 0.001281 | 0.001211 |
| access_q_fail.test | COMPILE_FAIL | 0.015249 | 0.026683 | 0.046299 | — | — | — |
| access_v_test.test | RUN | 0.181100 | 0.429905 | 0.528439 | 0.001092 | 0.001115 | 0.001158 |
| access_v_fail1.test | COMPILE_FAIL | 0.013869 | 0.024876 | 0.043185 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014261 | 0.025277 | 0.044011 | — | — | — |
| assign_test.test | RUN | 0.265240 | 0.688085 | 0.957615 | 0.001325 | 0.001346 | 0.001221 |
| to_string_test.test | RUN | 0.320376 | 1.177607 | 5.617283 | 0.001223 | 0.001450 | 0.001235 |
| cmp_vv_test.test | RUN | 0.213086 | 0.555708 | 0.626638 | 0.001382 | 0.001379 | 0.001162 |
| cross_test.test | RUN | 0.210443 | 0.503499 | 0.625147 | 0.001231 | 0.001167 | 0.001056 |
| div_eq_vs_test.test | RUN | 0.196327 | 0.471188 | 0.609169 | 0.001168 | 0.001257 | 0.001274 |
| div_vs_test.test | RUN | 0.208587 | 0.585840 | 0.663177 | 0.001227 | 0.001523 | 0.001121 |
| dot_vv_test.test | RUN | 0.203087 | 0.521134 | 0.614125 | 0.001344 | 0.001288 | 0.001429 |
| eq_vv_test.test | RUN | 0.225673 | 0.584160 | 0.662920 | 0.001202 | 0.001410 | 0.001158 |
| mag_v_test.test | RUN | 0.196906 | 0.484844 | 0.593922 | 0.001326 | 0.001179 | 0.001159 |
| mag_sqr_v_test.test | RUN | 0.196187 | 0.473595 | 0.592547 | 0.001209 | 0.001228 | 0.001223 |
| minus_v_test.test | RUN | 0.207295 | 0.554716 | 0.655174 | 0.001183 | 0.001230 | 0.001342 |
| minus_eq_vv_test.test | RUN | 0.202699 | 0.538555 | 0.635428 | 0.001220 | 0.000926 | 0.001334 |
| minus_vv_test.test | RUN | 0.211575 | 0.587346 | 0.641716 | 0.001196 | 0.001157 | 0.001162 |
| mul_eq_vs_test.test | RUN | 0.199339 | 0.467134 | 0.634199 | 0.001163 | 0.001151 | 0.001276 |
| mul_vs_test.test | RUN | 0.212646 | 0.591235 | 0.676759 | 0.001504 | 0.001271 | 0.001222 |
| mul_sv_test.test | RUN | 0.216781 | 0.587147 | 0.654950 | 0.001382 | 0.001352 | 0.001265 |
| mul_vm_test.test | RUN | 0.295304 | 1.050271 | 1.057933 | 0.001242 | 0.001356 | 0.001181 |
| normalize_v_test.test | RUN | 0.216439 | 0.712428 | 0.682732 | 0.001297 | 0.001125 | 0.001368 |
| plus_eq_vv_test.test | RUN | 0.201149 | 0.545573 | 0.586131 | 0.001277 | 0.001178 | 0.001299 |
| plus_vv_test.test | RUN | 0.214547 | 0.579347 | 0.661453 | 0.001155 | 0.001342 | 0.001093 |
| scalar_cast_v_test.test | RUN | 0.191948 | 0.432836 | 0.556933 | 0.001195 | 0.001155 | 0.001266 |
| vec_index_test.test | RUN | 0.168007 | 0.443806 | 0.516767 | 0.001134 | 0.001375 | 0.001175 |
| vec_register_test.test | RUN | 0.112570 | 0.399958 | 0.372956 | 0.001320 | 0.001267 | 0.001095 |
| cmp_mm_test.test | RUN | 0.360306 | 1.293656 | 1.355649 | 0.001270 | 0.001299 | 0.001007 |
| determinant_test.test | RUN | 0.235224 | 0.654398 | 0.713189 | 0.001307 | 0.001436 | 0.001183 |
| div_eq_ms_test.test | RUN | 0.234825 | 0.604975 | 0.813286 | 0.001306 | 0.001242 | 0.001195 |
| div_ms_test.test | RUN | 0.275394 | 0.967494 | 0.991208 | 0.001249 | 0.001255 | 0.001166 |
| eq_mm_test.test | RUN | 0.336618 | 1.204300 | 1.292086 | 0.001531 | 0.001324 | 0.001198 |
| minus_m_test.test | RUN | 0.275324 | 0.960062 | 0.970507 | 0.001342 | 0.001268 | 0.001140 |
| minus_eq_mm_test.test | RUN | 0.262726 | 0.879664 | 0.894749 | 0.001179 | 0.001407 | 0.001127 |
| minus_mm_test.test | RUN | 0.294139 | 1.119516 | 1.047982 | 0.001128 | 0.001489 | 0.001132 |
| mul_eq_mm_test.test | RUN | 0.240298 | 0.833408 | 0.791329 | 0.001317 | 0.001262 | 0.001149 |
| mul_eq_ms_test.test | RUN | 0.238929 | 0.593885 | 0.810068 | 0.001243 | 0.001442 | 0.001017 |
| mul_mm_test.test | RUN | 0.346830 | 1.841735 | 1.311401 | 0.001163 | 0.001251 | 0.001108 |
| mul_ms_test.test | RUN | 0.285121 | 0.980223 | 1.017996 | 0.001112 | 0.001347 | 0.001432 |
| mul_sm_test.test | RUN | 0.286184 | 0.959632 | 1.015949 | 0.001577 | 0.001253 | 0.001234 |
| mul_mv_test.test | RUN | 0.293856 | 1.038010 | 1.021061 | 0.001293 | 0.001297 | 0.001245 |
| inverse_m_test.test | RUN | 0.398881 | 1.915754 | 1.441523 | 0.001397 | 0.001233 | 0.001198 |
| plus_eq_mm_test.test | RUN | 0.264544 | 0.881028 | 0.901723 | 0.001212 | 0.001352 | 0.001188 |
| plus_mm_test.test | RUN | 0.301463 | 1.129486 | 1.054326 | 0.001233 | 0.001356 | 0.001128 |
| scalar_cast_m_test.test | RUN | 0.222583 | 0.502499 | 0.658698 | 0.001214 | 0.001205 | 0.001209 |
| mat_index_test.test | RUN | 0.177052 | 0.477163 | 0.577680 | 0.001225 | 0.001394 | 0.001114 |
| cmp_qq_test.test | RUN | 0.196854 | 0.436603 | 0.541840 | 0.001298 | 0.001292 | 0.001078 |
| conjugate_test.test | RUN | 0.198317 | 0.462332 | 0.556826 | 0.001310 | 0.001286 | 0.001124 |
| normalize_q_test.test | RUN | 0.198535 | 0.513065 | 0.586431 | 0.001224 | 0.001225 | 0.001100 |
| div_eq_qs_test.test | RUN | 0.190391 | 0.429254 | 0.549826 | 0.001240 | 0.001392 | 0.001092 |
| div_qs_test.test | RUN | 0.204093 | 0.457501 | 0.563545 | 0.001283 | 0.001336 | 0.001141 |
| dot_qq_test.test | RUN | 0.193283 | 0.447119 | 0.572946 | 0.001222 | 0.001222 | 0.001311 |
| eq_qq_test.test | RUN | 0.197906 | 0.468603 | 0.571358 | 0.001360 | 0.001304 | 0.001370 |
| inverse_q_test.test | RUN | 0.238649 | 0.627058 | 0.724112 | 0.001144 | 0.001389 | 0.001131 |
| mag_q_test.test | RUN | 0.195316 | 0.456636 | 0.562543 | 0.001310 | 0.001445 | 0.001127 |
| mag_sqr_q_test.test | RUN | 0.196098 | 0.460092 | 0.559664 | 0.001290 | 0.001402 | 0.001141 |
| minus_q_test.test | RUN | 0.192475 | 0.457733 | 0.572842 | 0.001363 | 0.001349 | 0.001283 |
| minus_eq_qq_test.test | RUN | 0.190969 | 0.459231 | 0.560340 | 0.001222 | 0.001186 | 0.001182 |
| minus_qq_test.test | RUN | 0.201428 | 0.475847 | 0.571351 | 0.001357 | 0.001399 | 0.001177 |
| mul_eq_qs_test.test | RUN | 0.199011 | 0.431625 | 0.558356 | 0.001244 | 0.001406 | 0.001153 |
| mul_qs_test.test | RUN | 0.195949 | 0.463598 | 0.572780 | 0.001248 | 0.001486 | 0.001153 |
| mul_qv_test.test | RUN | 0.250036 | 0.631555 | 0.732690 | 0.001341 | 0.001360 | 0.001137 |
| mul_qq_test.test | RUN | 0.247703 | 0.639659 | 0.720129 | 0.001343 | 0.001516 | 0.001166 |
| mul_eq_qq_test.test | RUN | 0.236176 | 0.633697 | 0.704790 | 0.001195 | 0.001364 | 0.001114 |
| plus_eq_qq_test.test | RUN | 0.195400 | 0.462192 | 0.567141 | 0.001209 | 0.001270 | 0.001180 |
| plus_qq_test.test | RUN | 0.202125 | 0.469240 | 0.573828 | 0.001171 | 0.001234 | 0.001128 |
| scalar_cast_q_test.test | RUN | 0.195827 | 0.439373 | 0.562466 | 0.001339 | 0.001283 | 0.001190 |
| slerp_test.test | RUN | 0.217145 | 0.900962 | 0.678744 | 0.015253 | 0.012874 | 0.013303 |
| convert_to_test.test | RUN | 0.283721 | 0.817436 | 1.068103 | 0.001144 | 0.001244 | 0.001264 |
| rot_mat_test.test | RUN | 0.481392 | 3.778094 | 3.313546 | 0.033465 | 0.033417 | 0.033764 |
| rot_quat_test.test | RUN | 0.242137 | 0.751002 | 0.755448 | 0.001316 | 0.001456 | 0.001441 |
| rotx_mat_test.test | RUN | 0.280332 | 1.000531 | 0.968575 | 0.001231 | 0.001272 | 0.001176 |
| rotx_quat_test.test | RUN | 0.235834 | 0.630462 | 0.712474 | 0.001184 | 0.001226 | 0.001167 |
| roty_mat_test.test | RUN | 0.280420 | 0.986773 | 0.983415 | 0.001412 | 0.001470 | 0.001169 |
| roty_quat_test.test | RUN | 0.235142 | 0.622209 | 0.649111 | 0.001420 | 0.001282 | 0.001141 |
| rotz_mat_test.test | RUN | 0.297432 | 1.122404 | 1.023695 | 0.001262 | 0.001228 | 0.001094 |
| rotz_quat_test.test | RUN | 0.239260 | 0.633830 | 0.664860 | 0.001458 | 0.001192 | 0.001060 |
| zero_vec_test.test | RUN | 0.202374 | 0.544473 | 0.589200 | 0.001362 | 0.001392 | 0.001084 |
| zero_mat_test.test | RUN | 0.254776 | 0.902260 | 0.844342 | 0.001329 | 0.001285 | 0.001085 |
| zero_quat_test.test | RUN | 0.191899 | 0.449923 | 0.530756 | 0.001163 | 0.001306 | 0.001086 |
| identity_mat_test.test | RUN | 0.232387 | 0.666212 | 0.725809 | 0.001200 | 0.001418 | 0.001054 |
| identity_quat_test.test | RUN | 0.196941 | 0.438616 | 0.555701 | 0.001296 | 0.001377 | 0.001096 |
| col_test.test | RUN | 0.382330 | 1.414085 | 1.613298 | 0.001274 | 0.001282 | 0.001194 |
| col_mat_test.test | RUN | 0.242105 | 0.617048 | 0.760693 | 0.001215 | 0.001279 | 0.001144 |
| neg_col_test.test | RUN | 0.275322 | 0.875540 | 0.966284 | 0.001268 | 0.001270 | 0.001192 |
| neg_row_test.test | RUN | 0.282763 | 0.895915 | 0.973253 | 0.001268 | 0.001413 | 0.001242 |
| del_col_test.test | RUN | 0.288392 | 0.994200 | 1.011174 | 0.001231 | 0.001377 | 0.001265 |
| del_row_test.test | RUN | 0.294198 | 0.980131 | 1.004848 | 0.001169 | 0.001410 | 0.001241 |
| del_row_col_test.test | RUN | 0.407402 | 1.821671 | 1.835417 | 0.001300 | 0.001505 | 0.001117 |
| swap_cols_test.test | RUN | 0.507608 | 2.450465 | 2.247221 | 0.001172 | 0.001245 | 0.001274 |
| swap_rows_test.test | RUN | 0.579246 | 2.546199 | 2.274349 | 0.001242 | 0.001402 | 0.001184 |
| diag_test.test | RUN | 0.254379 | 0.651646 | 0.874666 | 0.001208 | 0.001379 | 0.001152 |
| diag_mat_test.test | RUN | 0.249811 | 0.653535 | 0.774647 | 0.001280 | 0.001295 | 0.001176 |
| row_test.test | RUN | 0.367901 | 1.427074 | 1.587012 | 0.001182 | 0.001277 | 0.001180 |
| row_mat_test.test | RUN | 0.242781 | 0.633271 | 0.752730 | 0.001366 | 0.001327 | 0.001179 |
| transpose_test.test | RUN | 0.285856 | 0.940656 | 1.012084 | 0.001510 | 0.001296 | 0.001125 |
| translation_test.test | RUN | 0.233367 | 0.603057 | 0.763404 | 0.001260 | 0.001272 | 0.001267 |
| translation_mat_test.test | RUN | 0.252849 | 0.608216 | 0.818004 | 0.001084 | 0.001228 | 0.001216 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.083865 | 0.172297 | 0.225408 | — | — | — |
| swizzle2_test2.test | RUN | 0.103888 | 0.258640 | 0.311184 | 0.001216 | 0.001354 | 0.000994 |
| swizzle2_test3.test | RUN | 0.102476 | 0.259276 | 0.308119 | 0.001188 | 0.001226 | 0.001000 |
| swizzle2_test4.test | RUN | 0.104597 | 0.259623 | 0.301859 | 0.001083 | 0.001268 | 0.001097 |
| swizzle2_test.test | RUN | 0.331595 | 0.704258 | 0.967880 | 0.001311 | 0.001209 | 0.001141 |
| swizzle3_test2.test | RUN | 0.115409 | 0.276588 | 0.314450 | 0.001235 | 0.001412 | 0.001030 |
| swizzle3_test3.test | RUN | 0.115879 | 0.274615 | 0.341508 | 0.001180 | 0.001203 | 0.001086 |
| swizzle3_test4.test | RUN | 0.114029 | 0.282346 | 0.343867 | 0.001121 | 0.001130 | 0.001119 |
| swizzle3_test.test | RUN | 0.329452 | 0.727208 | 0.960070 | 0.001180 | 0.001450 | 0.001191 |
| swizzle4_test2.test | RUN | 0.190795 | 0.394440 | 0.559478 | 0.001205 | 0.001363 | 0.001161 |
| swizzle4_test3.test | RUN | 0.187335 | 0.389050 | 0.561516 | 0.001182 | 0.001346 | 0.001131 |
| swizzle4_test4.test | RUN | 0.198546 | 0.399335 | 0.526454 | 0.001266 | 0.001233 | 0.001158 |
| swizzle4_test.test | RUN | 0.333246 | 0.785704 | 0.995055 | 0.001248 | 0.001265 | 0.001105 |
| deduce_scalar_test.test | COMPILE | 0.015121 | 0.036107 | 0.051712 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125941 | 0.298727 | 0.364802 | 0.001433 | 0.001201 | 0.001089 |
| deduce_scalar_mv_test.test | RUN | 0.153111 | 0.347958 | 0.444650 | 0.001274 | 0.001332 | 0.001192 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013511 | 0.023602 | 0.038445 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.016057 | 0.033859 | 0.046184 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014869 | 0.031707 | 0.043685 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.016370 | 0.030693 | 0.044018 | — | — | — |
| interop_test.test | RUN | 0.143026 | 0.445520 | 0.628900 | 0.000411 | 0.000566 | 0.000824 |
| transform_test.test | RUN | 0.300281 | 0.582254 | 0.880953 | 0.000911 | 0.000902 | 0.000822 |
| projection_test.test | RUN | 0.204585 | 0.498060 | 0.486419 | 0.000939 | 0.000935 | 0.000833 |
| scalar_traits_test.test | COMPILE | 0.015856 | 0.035459 | 0.050333 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.969×, 0.972× | 0.991× |
| clang | 1.025× | 1.020×, 1.031× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000810s | 0.000813s | 0.000832s | byte equality observed |
| access_q_test.test | 10 | 0.000809s | 0.000792s | 0.000831s | byte equality observed |
| access_v_test.test | 10 | 0.000840s | 0.000827s | 0.000817s | byte equality observed |
| assign_test.test | 10 | 0.000825s | 0.000819s | 0.000817s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000824s | 0.000849s | 0.000832s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000840s | 0.000792s | 0.000838s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000829s | 0.000809s | 0.000810s | byte equality observed |
| col_mat_test.test | 10 | 0.000833s | 0.000814s | 0.000822s | byte equality observed |
| col_test.test | 10 | 0.000824s | 0.000804s | 0.000828s | byte equality observed |
| conjugate_test.test | 10 | 0.000831s | 0.000814s | 0.000831s | byte equality observed |
| convert_to_test.test | 10 | 0.000836s | 0.000804s | 0.000816s | byte equality observed |
| cross_test.test | 10 | 0.000829s | 0.000828s | 0.000833s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000840s | 0.000832s | 0.000822s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000838s | 0.000828s | 0.000822s | byte equality observed |
| del_col_test.test | 10 | 0.000840s | 0.000821s | 0.000826s | byte equality observed |
| del_row_col_test.test | 10 | 0.000832s | 0.000815s | 0.000852s | byte equality observed |
| del_row_test.test | 10 | 0.000812s | 0.000808s | 0.000819s | byte equality observed |
| determinant_test.test | 10 | 0.000863s | 0.000815s | 0.000817s | byte equality observed |
| diag_mat_test.test | 10 | 0.000806s | 0.000828s | 0.000817s | byte equality observed |
| diag_test.test | 10 | 0.000820s | 0.000816s | 0.000795s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000818s | 0.000809s | 0.000845s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000815s | 0.000822s | 0.000841s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000829s | 0.000820s | 0.000848s | byte equality observed |
| div_ms_test.test | 10 | 0.000815s | 0.000826s | 0.000842s | byte equality observed |
| div_qs_test.test | 10 | 0.000808s | 0.000809s | 0.000843s | byte equality observed |
| div_vs_test.test | 10 | 0.000819s | 0.000814s | 0.000816s | byte equality observed |
| dot_qq_test.test | 10 | 0.000814s | 0.000779s | 0.000804s | byte equality observed |
| dot_vv_test.test | 10 | 0.000806s | 0.000797s | 0.000820s | byte equality observed |
| eq_mm_test.test | 10 | 0.000838s | 0.000807s | 0.000821s | byte equality observed |
| eq_qq_test.test | 10 | 0.000804s | 0.000799s | 0.000835s | byte equality observed |
| eq_vv_test.test | 10 | 0.000818s | 0.000795s | 0.000831s | byte equality observed |
| identity_mat_test.test | 10 | 0.000823s | 0.000805s | 0.000834s | byte equality observed |
| identity_quat_test.test | 10 | 0.000811s | 0.000796s | 0.000831s | byte equality observed |
| interop_test.test | 10 | 0.000364s | 0.000367s | 0.000808s | byte equality observed |
| inverse_m_test.test | 10 | 0.000869s | 0.000833s | 0.000859s | byte equality observed |
| inverse_q_test.test | 10 | 0.000804s | 0.000808s | 0.000826s | byte equality observed |
| mag_q_test.test | 10 | 0.000830s | 0.000838s | 0.000844s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000820s | 0.000763s | 0.000816s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000811s | 0.000835s | 0.000827s | byte equality observed |
| mag_v_test.test | 10 | 0.000837s | 0.000818s | 0.000822s | byte equality observed |
| mat_index_test.test | 10 | 0.000808s | 0.000844s | 0.000817s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000815s | 0.000836s | 0.000827s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000804s | 0.000801s | 0.000817s | byte equality observed |
| math_test.test | 10 | 0.001223s | 0.001184s | 0.001077s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000804s | 0.000798s | 0.000806s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000801s | 0.000789s | 0.000820s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000801s | 0.000822s | 0.000825s | byte equality observed |
| minus_m_test.test | 10 | 0.000824s | 0.000843s | 0.000836s | byte equality observed |
| minus_mm_test.test | 10 | 0.000823s | 0.000843s | 0.000823s | byte equality observed |
| minus_q_test.test | 10 | 0.000823s | 0.000831s | 0.000818s | byte equality observed |
| minus_qq_test.test | 10 | 0.000823s | 0.000821s | 0.000848s | byte equality observed |
| minus_v_test.test | 10 | 0.000810s | 0.000803s | 0.000831s | byte equality observed |
| minus_vv_test.test | 10 | 0.000826s | 0.000796s | 0.000811s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000834s | 0.000808s | 0.000816s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000829s | 0.000812s | 0.000830s | byte equality observed |
| mul_eq_qq_test.test | 5 | 0.000853s | 0.000805s | 0.000827s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000837s | 0.000808s | 0.000807s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000821s | 0.000842s | 0.000827s | byte equality observed |
| mul_mm_test.test | 10 | 0.000827s | 0.000800s | 0.000808s | byte equality observed |
| mul_ms_test.test | 10 | 0.000803s | 0.000806s | 0.000822s | byte equality observed |
| mul_mv_test.test | 10 | 0.000817s | 0.000808s | 0.000825s | byte equality observed |
| mul_qq_test.test | 10 | 0.000819s | 0.000808s | 0.000829s | byte equality observed |
| mul_qs_test.test | 10 | 0.000819s | 0.000820s | 0.000809s | byte equality observed |
| mul_qv_test.test | 10 | 0.000846s | 0.000829s | 0.000848s | byte equality observed |
| mul_sm_test.test | 10 | 0.000843s | 0.000812s | 0.000818s | byte equality observed |
| mul_sv_test.test | 10 | 0.000841s | 0.000801s | 0.000819s | byte equality observed |
| mul_vm_test.test | 10 | 0.000851s | 0.000827s | 0.000833s | byte equality observed |
| mul_vs_test.test | 10 | 0.000806s | 0.000857s | 0.000867s | byte equality observed |
| neg_col_test.test | 10 | 0.000810s | 0.000828s | 0.000831s | byte equality observed |
| neg_row_test.test | 10 | 0.000807s | 0.000836s | 0.000817s | byte equality observed |
| normalize_q_test.test | 10 | 0.000819s | 0.000838s | 0.000833s | byte equality observed |
| normalize_v_test.test | 10 | 0.000817s | 0.000814s | 0.000825s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000815s | 0.000802s | 0.000828s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000841s | 0.000806s | 0.000818s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000821s | 0.000818s | 0.000827s | byte equality observed |
| plus_mm_test.test | 10 | 0.000838s | 0.000818s | 0.000820s | byte equality observed |
| plus_qq_test.test | 10 | 0.000830s | 0.000803s | 0.000809s | byte equality observed |
| plus_vv_test.test | 10 | 0.000825s | 0.000806s | 0.000820s | byte equality observed |
| projection_test.test | 10 | 0.000833s | 0.000784s | 0.000810s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000833s | 0.000823s | 0.000809s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000756s | 0.000749s | 0.000757s | byte equality observed |
| rot_mat_test.test | 1 | 0.023677s | 0.022315s | 0.027173s | byte equality observed |
| rot_quat_test.test | 10 | 0.000744s | 0.000747s | 0.000750s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000810s | 0.000781s | 0.000743s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000838s | 0.000850s | 0.000834s | byte equality observed |
| roty_mat_test.test | 10 | 0.000849s | 0.000846s | 0.000862s | byte equality observed |
| roty_quat_test.test | 10 | 0.000826s | 0.000830s | 0.000860s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000845s | 0.000833s | 0.000857s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000847s | 0.000820s | 0.000824s | byte equality observed |
| row_mat_test.test | 10 | 0.000817s | 0.000807s | 0.000850s | byte equality observed |
| row_test.test | 10 | 0.000817s | 0.000841s | 0.000857s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000838s | 0.000790s | 0.000856s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000867s | 0.000803s | 0.000858s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000812s | 0.000750s | 0.000797s | byte equality observed |
| slerp_test.test | 2 | 0.010919s | 0.009476s | 0.010057s | byte equality observed |
| swap_cols_test.test | 10 | 0.000763s | 0.000752s | 0.000737s | byte equality observed |
| swap_rows_test.test | 10 | 0.000778s | 0.000787s | 0.000737s | byte equality observed |
| swizzle2_test.test | 10 | 0.000830s | 0.000792s | 0.000820s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000838s | 0.000807s | 0.000843s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000807s | 0.000791s | 0.000817s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000819s | 0.000813s | 0.000798s | byte equality observed |
| swizzle3_test.test | 10 | 0.000817s | 0.000826s | 0.000830s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000806s | 0.000809s | 0.000855s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000810s | 0.000815s | 0.000822s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000811s | 0.000823s | 0.000824s | byte equality observed |
| swizzle4_test.test | 10 | 0.000834s | 0.000799s | 0.000822s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000821s | 0.000858s | 0.000819s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000810s | 0.000839s | 0.000817s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000819s | 0.000822s | 0.000850s | byte equality observed |
| to_string_test.test | 10 | 0.000864s | 0.000837s | 0.000878s | byte equality observed |
| transform_test.test | 10 | 0.000844s | 0.000803s | 0.000822s | byte equality observed |
| translation_mat_test.test | 10 | 0.000824s | 0.000836s | 0.000839s | byte equality observed |
| translation_test.test | 10 | 0.000812s | 0.000826s | 0.000829s | byte equality observed |
| transpose_test.test | 10 | 0.000833s | 0.000839s | 0.000822s | byte equality observed |
| vec_index_test.test | 10 | 0.000803s | 0.000834s | 0.000842s | byte equality observed |
| vec_register_test.test | 10 | 0.000829s | 0.000807s | 0.000853s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000827s | 0.000832s | 0.000842s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000811s | 0.000851s | 0.000842s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000814s | 0.000809s | 0.000815s | byte equality observed |
| zero_mat_test.test | 10 | 0.000817s | 0.000831s | 0.000822s | byte equality observed |
| zero_quat_test.test | 10 | 0.000803s | 0.000812s | 0.000820s | byte equality observed |
| zero_vec_test.test | 10 | 0.000845s | 0.000820s | 0.000850s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
