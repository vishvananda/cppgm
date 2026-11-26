# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.197740 | 0.561970 | 0.579214 | 0.001631 | 0.001654 | 0.001480 |
| mat_traits_array_test.test | RUN | 0.154361 | 0.561043 | 0.459173 | 0.001383 | 0.001167 | 0.001054 |
| mat_traits_std_array_test.test | RUN | 0.154326 | 0.422121 | 0.457300 | 0.001216 | 0.001374 | 0.001000 |
| vec_traits_array_test.test | RUN | 0.131349 | 0.425222 | 0.392339 | 0.001193 | 0.001512 | 0.001181 |
| vec_traits_gnuc_test.test | RUN | 0.249821 | 0.515108 | 0.750881 | 0.001284 | 0.001362 | 0.001258 |
| vec_traits_std_array_test.test | RUN | 0.133879 | 0.331258 | 0.399125 | 0.001276 | 0.001242 | 0.001256 |
| quat_traits_array_test.test | RUN | 0.133473 | 0.447030 | 0.379875 | 0.001163 | 0.001186 | 0.001050 |
| quat_traits_std_array_test.test | RUN | 0.129223 | 0.337705 | 0.381231 | 0.001335 | 0.001336 | 0.001058 |
| access_m_test.test | RUN | 0.208940 | 0.800643 | 0.863930 | 0.001360 | 0.001349 | 0.001120 |
| access_m_fail1.test | COMPILE_FAIL | 0.020288 | 0.032861 | 0.056383 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020035 | 0.031768 | 0.060357 | — | — | — |
| access_q_test.test | RUN | 0.177233 | 0.412101 | 0.521255 | 0.001324 | 0.001369 | 0.001166 |
| access_q_fail.test | COMPILE_FAIL | 0.015166 | 0.026932 | 0.047021 | — | — | — |
| access_v_test.test | RUN | 0.180801 | 0.421079 | 0.520920 | 0.001171 | 0.001338 | 0.001142 |
| access_v_fail1.test | COMPILE_FAIL | 0.014065 | 0.023569 | 0.041992 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014678 | 0.025255 | 0.044162 | — | — | — |
| assign_test.test | RUN | 0.264088 | 0.679157 | 0.908437 | 0.001203 | 0.001244 | 0.001146 |
| to_string_test.test | RUN | 0.313529 | 1.155185 | 5.537408 | 0.001177 | 0.001434 | 0.001216 |
| cmp_vv_test.test | RUN | 0.212069 | 0.549502 | 0.628629 | 0.001214 | 0.001272 | 0.001153 |
| cross_test.test | RUN | 0.211123 | 0.504685 | 0.617545 | 0.001003 | 0.001339 | 0.001160 |
| div_eq_vs_test.test | RUN | 0.200580 | 0.461018 | 0.609061 | 0.001378 | 0.001460 | 0.001271 |
| div_vs_test.test | RUN | 0.210538 | 0.576437 | 0.654288 | 0.001295 | 0.001342 | 0.001192 |
| dot_vv_test.test | RUN | 0.201938 | 0.511485 | 0.597857 | 0.001194 | 0.001203 | 0.001211 |
| eq_vv_test.test | RUN | 0.225582 | 0.575647 | 0.672747 | 0.001257 | 0.001125 | 0.001341 |
| mag_v_test.test | RUN | 0.204527 | 0.470291 | 0.562107 | 0.001410 | 0.001081 | 0.001137 |
| mag_sqr_v_test.test | RUN | 0.197832 | 0.473702 | 0.583703 | 0.001401 | 0.001200 | 0.001174 |
| minus_v_test.test | RUN | 0.204240 | 0.543702 | 0.634776 | 0.001362 | 0.001338 | 0.001180 |
| minus_eq_vv_test.test | RUN | 0.202557 | 0.540614 | 0.608095 | 0.001305 | 0.001416 | 0.001175 |
| minus_vv_test.test | RUN | 0.210622 | 0.576588 | 0.656261 | 0.001426 | 0.001071 | 0.001079 |
| mul_eq_vs_test.test | RUN | 0.196237 | 0.459663 | 0.615436 | 0.001306 | 0.001177 | 0.001229 |
| mul_vs_test.test | RUN | 0.205478 | 0.574302 | 0.638509 | 0.001263 | 0.001263 | 0.001099 |
| mul_sv_test.test | RUN | 0.207828 | 0.576179 | 0.660900 | 0.001140 | 0.001340 | 0.001135 |
| mul_vm_test.test | RUN | 0.297260 | 1.032438 | 0.981150 | 0.001191 | 0.001378 | 0.001164 |
| normalize_v_test.test | RUN | 0.217946 | 0.707889 | 0.674451 | 0.001354 | 0.001384 | 0.001182 |
| plus_eq_vv_test.test | RUN | 0.202888 | 0.536037 | 0.621669 | 0.001506 | 0.001273 | 0.001192 |
| plus_vv_test.test | RUN | 0.217397 | 0.578516 | 0.657878 | 0.001236 | 0.001368 | 0.001096 |
| scalar_cast_v_test.test | RUN | 0.193179 | 0.432652 | 0.564601 | 0.001256 | 0.001136 | 0.001071 |
| vec_index_test.test | RUN | 0.171503 | 0.443175 | 0.497793 | 0.001164 | 0.000979 | 0.001126 |
| vec_register_test.test | RUN | 0.111210 | 0.400123 | 0.369656 | 0.001268 | 0.001129 | 0.001270 |
| cmp_mm_test.test | RUN | 0.356303 | 1.277288 | 1.346481 | 0.001336 | 0.001333 | 0.001131 |
| determinant_test.test | RUN | 0.240041 | 0.647317 | 0.721161 | 0.001282 | 0.001370 | 0.001336 |
| div_eq_ms_test.test | RUN | 0.235383 | 0.589407 | 0.814356 | 0.001554 | 0.001331 | 0.001303 |
| div_ms_test.test | RUN | 0.279549 | 0.966691 | 0.998436 | 0.001244 | 0.001392 | 0.001154 |
| eq_mm_test.test | RUN | 0.344032 | 1.188515 | 1.280955 | 0.001362 | 0.001243 | 0.001242 |
| minus_m_test.test | RUN | 0.278789 | 0.940384 | 0.971008 | 0.001310 | 0.001210 | 0.001217 |
| minus_eq_mm_test.test | RUN | 0.270606 | 0.864413 | 0.892008 | 0.001257 | 0.001327 | 0.001206 |
| minus_mm_test.test | RUN | 0.298477 | 1.097460 | 1.058247 | 0.001251 | 0.001325 | 0.001236 |
| mul_eq_mm_test.test | RUN | 0.245297 | 0.805831 | 0.805012 | 0.001224 | 0.001173 | 0.001250 |
| mul_eq_ms_test.test | RUN | 0.242323 | 0.574201 | 0.829478 | 0.001191 | 0.001338 | 0.001166 |
| mul_mm_test.test | RUN | 0.339348 | 1.820179 | 1.335058 | 0.001476 | 0.001441 | 0.001195 |
| mul_ms_test.test | RUN | 0.279610 | 0.965123 | 1.023496 | 0.001406 | 0.001248 | 0.001197 |
| mul_sm_test.test | RUN | 0.293577 | 0.949061 | 1.031727 | 0.001202 | 0.001166 | 0.001214 |
| mul_mv_test.test | RUN | 0.293324 | 1.036635 | 1.037984 | 0.001248 | 0.001258 | 0.001119 |
| inverse_m_test.test | RUN | 0.395561 | 1.905308 | 1.459782 | 0.001503 | 0.001293 | 0.001362 |
| plus_eq_mm_test.test | RUN | 0.267667 | 0.867173 | 0.901131 | 0.001296 | 0.001237 | 0.001302 |
| plus_mm_test.test | RUN | 0.305300 | 1.108042 | 1.063403 | 0.001353 | 0.001190 | 0.001131 |
| scalar_cast_m_test.test | RUN | 0.228720 | 0.493964 | 0.648639 | 0.001309 | 0.001050 | 0.001292 |
| mat_index_test.test | RUN | 0.185589 | 0.467945 | 0.574421 | 0.001204 | 0.001191 | 0.001311 |
| cmp_qq_test.test | RUN | 0.204285 | 0.431886 | 0.540178 | 0.001564 | 0.001299 | 0.001288 |
| conjugate_test.test | RUN | 0.204242 | 0.451665 | 0.573691 | 0.001335 | 0.001368 | 0.001151 |
| normalize_q_test.test | RUN | 0.201146 | 0.499341 | 0.591261 | 0.001327 | 0.001265 | 0.001094 |
| div_eq_qs_test.test | RUN | 0.198259 | 0.423718 | 0.551382 | 0.001209 | 0.001206 | 0.001285 |
| div_qs_test.test | RUN | 0.199737 | 0.455045 | 0.563093 | 0.001558 | 0.001107 | 0.001332 |
| dot_qq_test.test | RUN | 0.203547 | 0.433804 | 0.577088 | 0.001357 | 0.001399 | 0.001053 |
| eq_qq_test.test | RUN | 0.214387 | 0.463650 | 0.575469 | 0.001244 | 0.001346 | 0.001084 |
| inverse_q_test.test | RUN | 0.238781 | 0.614339 | 0.720314 | 0.001357 | 0.001113 | 0.001133 |
| mag_q_test.test | RUN | 0.195673 | 0.440561 | 0.558457 | 0.001244 | 0.001475 | 0.001106 |
| mag_sqr_q_test.test | RUN | 0.200167 | 0.447656 | 0.563373 | 0.001097 | 0.001309 | 0.001050 |
| minus_q_test.test | RUN | 0.199978 | 0.450830 | 0.563742 | 0.001224 | 0.001364 | 0.001102 |
| minus_eq_qq_test.test | RUN | 0.200265 | 0.446329 | 0.558376 | 0.001349 | 0.001269 | 0.001279 |
| minus_qq_test.test | RUN | 0.193518 | 0.460040 | 0.569375 | 0.001206 | 0.001227 | 0.001203 |
| mul_eq_qs_test.test | RUN | 0.192215 | 0.421110 | 0.562429 | 0.001282 | 0.001333 | 0.001129 |
| mul_qs_test.test | RUN | 0.192952 | 0.452145 | 0.568342 | 0.000958 | 0.001334 | 0.001225 |
| mul_qv_test.test | RUN | 0.241776 | 0.613331 | 0.725415 | 0.001366 | 0.001491 | 0.001316 |
| mul_qq_test.test | RUN | 0.232676 | 0.630284 | 0.714205 | 0.001302 | 0.001189 | 0.001042 |
| mul_eq_qq_test.test | RUN | 0.229989 | 0.623425 | 0.702370 | 0.001066 | 0.001398 | 0.001110 |
| plus_eq_qq_test.test | RUN | 0.190752 | 0.446217 | 0.561205 | 0.001375 | 0.001353 | 0.001136 |
| plus_qq_test.test | RUN | 0.203786 | 0.459816 | 0.570330 | 0.001383 | 0.001298 | 0.001214 |
| scalar_cast_q_test.test | RUN | 0.205989 | 0.421455 | 0.559668 | 0.001376 | 0.001216 | 0.001062 |
| slerp_test.test | RUN | 0.220923 | 0.896624 | 0.680560 | 0.015382 | 0.013121 | 0.013203 |
| convert_to_test.test | RUN | 0.296520 | 0.806572 | 1.069244 | 0.001208 | 0.001054 | 0.001159 |
| rot_mat_test.test | RUN | 0.490099 | 3.723999 | 3.298960 | 0.032035 | 0.032419 | 0.033748 |
| rot_quat_test.test | RUN | 0.246642 | 0.742230 | 0.729740 | 0.001439 | 0.001294 | 0.001163 |
| rotx_mat_test.test | RUN | 0.279807 | 0.966504 | 0.957434 | 0.001208 | 0.001258 | 0.001168 |
| rotx_quat_test.test | RUN | 0.237020 | 0.617989 | 0.693697 | 0.001136 | 0.001330 | 0.001119 |
| roty_mat_test.test | RUN | 0.281604 | 0.959755 | 0.986757 | 0.001523 | 0.001164 | 0.001195 |
| roty_quat_test.test | RUN | 0.242926 | 0.617921 | 0.691899 | 0.001540 | 0.001210 | 0.001327 |
| rotz_mat_test.test | RUN | 0.302975 | 1.109087 | 0.965980 | 0.001266 | 0.001190 | 0.001198 |
| rotz_quat_test.test | RUN | 0.242131 | 0.608539 | 0.704025 | 0.001327 | 0.001285 | 0.001354 |
| zero_vec_test.test | RUN | 0.207941 | 0.534671 | 0.603674 | 0.001318 | 0.001386 | 0.001140 |
| zero_mat_test.test | RUN | 0.246356 | 0.882945 | 0.838633 | 0.001300 | 0.001223 | 0.001144 |
| zero_quat_test.test | RUN | 0.187795 | 0.443359 | 0.563167 | 0.001252 | 0.001351 | 0.001094 |
| identity_mat_test.test | RUN | 0.225556 | 0.650461 | 0.707979 | 0.001300 | 0.001296 | 0.001300 |
| identity_quat_test.test | RUN | 0.203070 | 0.434381 | 0.562066 | 0.001439 | 0.001238 | 0.001231 |
| col_test.test | RUN | 0.382366 | 1.400792 | 1.609299 | 0.001327 | 0.001227 | 0.001218 |
| col_mat_test.test | RUN | 0.251040 | 0.608271 | 0.757443 | 0.001336 | 0.001200 | 0.001354 |
| neg_col_test.test | RUN | 0.278722 | 0.866182 | 0.975497 | 0.001193 | 0.001265 | 0.001183 |
| neg_row_test.test | RUN | 0.289947 | 0.881446 | 0.978291 | 0.001186 | 0.001065 | 0.001278 |
| del_col_test.test | RUN | 0.285991 | 0.968974 | 1.013234 | 0.001626 | 0.001141 | 0.001168 |
| del_row_test.test | RUN | 0.289296 | 0.953650 | 1.012004 | 0.001208 | 0.001330 | 0.001352 |
| del_row_col_test.test | RUN | 0.412399 | 1.776298 | 1.873441 | 0.001394 | 0.001177 | 0.001135 |
| swap_cols_test.test | RUN | 0.516601 | 2.400989 | 2.294774 | 0.001358 | 0.001216 | 0.001206 |
| swap_rows_test.test | RUN | 0.582327 | 2.511657 | 2.283761 | 0.001502 | 0.001356 | 0.001112 |
| diag_test.test | RUN | 0.265323 | 0.650992 | 0.856367 | 0.001373 | 0.001173 | 0.001300 |
| diag_mat_test.test | RUN | 0.250453 | 0.631774 | 0.760014 | 0.001407 | 0.001147 | 0.001125 |
| row_test.test | RUN | 0.382172 | 1.378889 | 1.596941 | 0.001235 | 0.001278 | 0.001303 |
| row_mat_test.test | RUN | 0.247605 | 0.596013 | 0.742059 | 0.001584 | 0.001250 | 0.001177 |
| transpose_test.test | RUN | 0.293486 | 0.927184 | 1.027661 | 0.001153 | 0.001134 | 0.001119 |
| translation_test.test | RUN | 0.233955 | 0.587862 | 0.756539 | 0.001259 | 0.001230 | 0.001171 |
| translation_mat_test.test | RUN | 0.255270 | 0.601364 | 0.819422 | 0.001460 | 0.001219 | 0.001232 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.085398 | 0.163475 | 0.219586 | — | — | — |
| swizzle2_test2.test | RUN | 0.103198 | 0.253978 | 0.314242 | 0.001236 | 0.001279 | 0.000895 |
| swizzle2_test3.test | RUN | 0.100743 | 0.259140 | 0.312975 | 0.001067 | 0.001156 | 0.001156 |
| swizzle2_test4.test | RUN | 0.103532 | 0.248410 | 0.310496 | 0.001056 | 0.001168 | 0.001164 |
| swizzle2_test.test | RUN | 0.338906 | 0.696924 | 0.979277 | 0.001440 | 0.001278 | 0.001062 |
| swizzle3_test2.test | RUN | 0.117002 | 0.271855 | 0.346083 | 0.001298 | 0.001163 | 0.001158 |
| swizzle3_test3.test | RUN | 0.114278 | 0.273180 | 0.338385 | 0.001235 | 0.001212 | 0.001079 |
| swizzle3_test4.test | RUN | 0.114406 | 0.272821 | 0.349145 | 0.001205 | 0.001341 | 0.001185 |
| swizzle3_test.test | RUN | 0.337733 | 0.713943 | 0.976824 | 0.001196 | 0.001282 | 0.001181 |
| swizzle4_test2.test | RUN | 0.194194 | 0.396562 | 0.542940 | 0.001230 | 0.001253 | 0.001056 |
| swizzle4_test3.test | RUN | 0.198655 | 0.380743 | 0.547473 | 0.001289 | 0.000933 | 0.001124 |
| swizzle4_test4.test | RUN | 0.198776 | 0.393758 | 0.538318 | 0.001090 | 0.001178 | 0.001210 |
| swizzle4_test.test | RUN | 0.332168 | 0.774366 | 1.019783 | 0.001266 | 0.001236 | 0.001225 |
| deduce_scalar_test.test | COMPILE | 0.017017 | 0.035973 | 0.055377 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.127173 | 0.296148 | 0.379004 | 0.001589 | 0.001144 | 0.001172 |
| deduce_scalar_mv_test.test | RUN | 0.148496 | 0.343388 | 0.434891 | 0.001265 | 0.001170 | 0.001182 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013464 | 0.022737 | 0.043395 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015629 | 0.032347 | 0.048289 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015980 | 0.031868 | 0.047876 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.016083 | 0.031615 | 0.047665 | — | — | — |
| interop_test.test | RUN | 0.157338 | 0.426786 | 0.626640 | 0.000443 | 0.000367 | 0.001174 |
| transform_test.test | RUN | 0.290840 | 0.622338 | 0.781101 | 0.000895 | 0.000896 | 0.000867 |
| projection_test.test | RUN | 0.181985 | 0.471318 | 0.576854 | 0.000951 | 0.000940 | 0.000889 |
| scalar_traits_test.test | COMPILE | 0.015905 | 0.032934 | 0.050315 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.972× | 0.974×, 0.971× | 1.006× |
| clang | 1.013× | 1.009×, 1.018× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000814s | 0.000823s | 0.000805s | byte equality observed |
| access_q_test.test | 10 | 0.000793s | 0.000802s | 0.000800s | byte equality observed |
| access_v_test.test | 10 | 0.000806s | 0.000850s | 0.000805s | byte equality observed |
| assign_test.test | 10 | 0.000815s | 0.000821s | 0.000829s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000816s | 0.000838s | 0.000830s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000814s | 0.000825s | 0.000825s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000816s | 0.000821s | 0.000791s | byte equality observed |
| col_mat_test.test | 10 | 0.000805s | 0.000796s | 0.000794s | byte equality observed |
| col_test.test | 10 | 0.000824s | 0.000791s | 0.000818s | byte equality observed |
| conjugate_test.test | 10 | 0.000837s | 0.000834s | 0.000786s | byte equality observed |
| convert_to_test.test | 10 | 0.000820s | 0.000824s | 0.000803s | byte equality observed |
| cross_test.test | 10 | 0.000808s | 0.000826s | 0.000821s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000827s | 0.000819s | 0.000804s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000840s | 0.000813s | 0.000810s | byte equality observed |
| del_col_test.test | 10 | 0.000823s | 0.000813s | 0.000854s | byte equality observed |
| del_row_col_test.test | 10 | 0.000827s | 0.000803s | 0.000847s | byte equality observed |
| del_row_test.test | 10 | 0.000828s | 0.000772s | 0.000852s | byte equality observed |
| determinant_test.test | 10 | 0.000817s | 0.000815s | 0.000823s | byte equality observed |
| diag_mat_test.test | 10 | 0.000817s | 0.000797s | 0.000822s | byte equality observed |
| diag_test.test | 10 | 0.000814s | 0.000818s | 0.000830s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000824s | 0.000799s | 0.000783s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000822s | 0.000794s | 0.000814s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000798s | 0.000789s | 0.000823s | byte equality observed |
| div_ms_test.test | 10 | 0.000791s | 0.000808s | 0.000820s | byte equality observed |
| div_qs_test.test | 10 | 0.000831s | 0.000771s | 0.000817s | byte equality observed |
| div_vs_test.test | 10 | 0.000822s | 0.000785s | 0.000813s | byte equality observed |
| dot_qq_test.test | 10 | 0.000811s | 0.000821s | 0.000821s | byte equality observed |
| dot_vv_test.test | 10 | 0.000835s | 0.000815s | 0.000817s | byte equality observed |
| eq_mm_test.test | 10 | 0.000839s | 0.000843s | 0.000827s | byte equality observed |
| eq_qq_test.test | 10 | 0.000823s | 0.000836s | 0.000820s | byte equality observed |
| eq_vv_test.test | 10 | 0.000820s | 0.000819s | 0.000812s | byte equality observed |
| identity_mat_test.test | 10 | 0.000811s | 0.000832s | 0.000826s | byte equality observed |
| identity_quat_test.test | 10 | 0.000794s | 0.000824s | 0.000822s | byte equality observed |
| interop_test.test | 10 | 0.000364s | 0.000370s | 0.000826s | byte equality observed |
| inverse_m_test.test | 10 | 0.000843s | 0.000845s | 0.000831s | byte equality observed |
| inverse_q_test.test | 10 | 0.000820s | 0.000830s | 0.000783s | byte equality observed |
| mag_q_test.test | 10 | 0.000812s | 0.000782s | 0.000800s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000817s | 0.000813s | 0.000815s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000837s | 0.000826s | 0.000798s | byte equality observed |
| mag_v_test.test | 10 | 0.000804s | 0.000827s | 0.000804s | byte equality observed |
| mat_index_test.test | 10 | 0.000823s | 0.000804s | 0.000785s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000841s | 0.000831s | 0.000821s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000801s | 0.000802s | 0.000797s | byte equality observed |
| math_test.test | 10 | 0.001221s | 0.001181s | 0.001065s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000814s | 0.000799s | 0.000832s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000810s | 0.000792s | 0.000826s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000798s | 0.000804s | 0.000811s | byte equality observed |
| minus_m_test.test | 10 | 0.000818s | 0.000803s | 0.000804s | byte equality observed |
| minus_mm_test.test | 10 | 0.000806s | 0.000800s | 0.000808s | byte equality observed |
| minus_q_test.test | 10 | 0.000806s | 0.000806s | 0.000824s | byte equality observed |
| minus_qq_test.test | 10 | 0.000834s | 0.000794s | 0.000814s | byte equality observed |
| minus_v_test.test | 10 | 0.000835s | 0.000823s | 0.000817s | byte equality observed |
| minus_vv_test.test | 10 | 0.000841s | 0.000805s | 0.000818s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000799s | 0.000806s | 0.000806s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000821s | 0.000799s | 0.000834s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000830s | 0.000813s | 0.000796s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000833s | 0.000782s | 0.000831s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000850s | 0.000818s | 0.000858s | byte equality observed |
| mul_mm_test.test | 10 | 0.000844s | 0.000796s | 0.000801s | byte equality observed |
| mul_ms_test.test | 10 | 0.000806s | 0.000803s | 0.000818s | byte equality observed |
| mul_mv_test.test | 10 | 0.000818s | 0.000830s | 0.000821s | byte equality observed |
| mul_qq_test.test | 10 | 0.000812s | 0.000828s | 0.000858s | byte equality observed |
| mul_qs_test.test | 10 | 0.000823s | 0.000831s | 0.000845s | byte equality observed |
| mul_qv_test.test | 10 | 0.000837s | 0.000822s | 0.000867s | byte equality observed |
| mul_sm_test.test | 10 | 0.000833s | 0.000823s | 0.000806s | byte equality observed |
| mul_sv_test.test | 10 | 0.000831s | 0.000774s | 0.000800s | byte equality observed |
| mul_vm_test.test | 10 | 0.000802s | 0.000787s | 0.000797s | byte equality observed |
| mul_vs_test.test | 10 | 0.000828s | 0.000784s | 0.000771s | byte equality observed |
| neg_col_test.test | 10 | 0.000831s | 0.000808s | 0.000809s | byte equality observed |
| neg_row_test.test | 10 | 0.000822s | 0.000806s | 0.000821s | byte equality observed |
| normalize_q_test.test | 10 | 0.000839s | 0.000809s | 0.000795s | byte equality observed |
| normalize_v_test.test | 10 | 0.000790s | 0.000833s | 0.000814s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000795s | 0.000807s | 0.000813s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000815s | 0.000807s | 0.000773s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000849s | 0.000825s | 0.000845s | byte equality observed |
| plus_mm_test.test | 10 | 0.000835s | 0.000829s | 0.000854s | byte equality observed |
| plus_qq_test.test | 10 | 0.000842s | 0.000853s | 0.000854s | byte equality observed |
| plus_vv_test.test | 10 | 0.000828s | 0.000805s | 0.000803s | byte equality observed |
| projection_test.test | 10 | 0.000826s | 0.000839s | 0.000803s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000822s | 0.000819s | 0.000812s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000781s | 0.000792s | 0.000763s | byte equality observed |
| rot_mat_test.test | 1 | 0.023741s | 0.021930s | 0.026729s | byte equality observed |
| rot_quat_test.test | 10 | 0.000745s | 0.000759s | 0.000746s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000768s | 0.000762s | 0.000773s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000803s | 0.000798s | 0.000844s | byte equality observed |
| roty_mat_test.test | 10 | 0.000819s | 0.000801s | 0.000869s | byte equality observed |
| roty_quat_test.test | 10 | 0.000805s | 0.000799s | 0.000831s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000824s | 0.000813s | 0.000844s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000818s | 0.000810s | 0.000847s | byte equality observed |
| row_mat_test.test | 10 | 0.000834s | 0.000837s | 0.000833s | byte equality observed |
| row_test.test | 10 | 0.000827s | 0.000830s | 0.000810s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000796s | 0.000820s | 0.000813s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000843s | 0.000793s | 0.000796s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000827s | 0.000788s | 0.000810s | byte equality observed |
| slerp_test.test | 2 | 0.010961s | 0.009405s | 0.009940s | byte equality observed |
| swap_cols_test.test | 10 | 0.000755s | 0.000743s | 0.000742s | byte equality observed |
| swap_rows_test.test | 10 | 0.000756s | 0.000775s | 0.000739s | byte equality observed |
| swizzle2_test.test | 10 | 0.000851s | 0.000812s | 0.000827s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000826s | 0.000807s | 0.000841s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000835s | 0.000805s | 0.000849s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000818s | 0.000807s | 0.000847s | byte equality observed |
| swizzle3_test.test | 10 | 0.000830s | 0.000817s | 0.000794s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000830s | 0.000799s | 0.000808s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000813s | 0.000794s | 0.000857s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000820s | 0.000811s | 0.000852s | byte equality observed |
| swizzle4_test.test | 10 | 0.000800s | 0.000809s | 0.000817s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000822s | 0.000826s | 0.000817s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000833s | 0.000820s | 0.000820s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000831s | 0.000815s | 0.000810s | byte equality observed |
| to_string_test.test | 10 | 0.000860s | 0.000845s | 0.000855s | byte equality observed |
| transform_test.test | 10 | 0.000853s | 0.000815s | 0.000807s | byte equality observed |
| translation_mat_test.test | 10 | 0.000848s | 0.000810s | 0.000812s | byte equality observed |
| translation_test.test | 10 | 0.000818s | 0.000812s | 0.000811s | byte equality observed |
| transpose_test.test | 10 | 0.000809s | 0.000807s | 0.000815s | byte equality observed |
| vec_index_test.test | 10 | 0.000814s | 0.000827s | 0.000845s | byte equality observed |
| vec_register_test.test | 10 | 0.000802s | 0.000812s | 0.000837s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000829s | 0.000810s | 0.000814s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000820s | 0.000804s | 0.000808s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000813s | 0.000806s | 0.000825s | byte equality observed |
| zero_mat_test.test | 10 | 0.000829s | 0.000816s | 0.000818s | byte equality observed |
| zero_quat_test.test | 10 | 0.000840s | 0.000825s | 0.000814s | byte equality observed |
| zero_vec_test.test | 10 | 0.000824s | 0.000826s | 0.000816s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
