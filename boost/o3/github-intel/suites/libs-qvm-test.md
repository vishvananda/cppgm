# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.192604 | 0.564192 | 0.584302 | 0.001572 | 0.001673 | 0.001422 |
| mat_traits_array_test.test | RUN | 0.150525 | 0.562932 | 0.456680 | 0.001099 | 0.000903 | 0.001118 |
| mat_traits_std_array_test.test | RUN | 0.149221 | 0.422734 | 0.459155 | 0.001406 | 0.001436 | 0.001086 |
| vec_traits_array_test.test | RUN | 0.126045 | 0.424284 | 0.386583 | 0.001107 | 0.001464 | 0.000864 |
| vec_traits_gnuc_test.test | RUN | 0.239774 | 0.520234 | 0.726931 | 0.001062 | 0.001162 | 0.001163 |
| vec_traits_std_array_test.test | RUN | 0.126785 | 0.329395 | 0.382503 | 0.001184 | 0.001194 | 0.000999 |
| quat_traits_array_test.test | RUN | 0.125788 | 0.456740 | 0.384894 | 0.001145 | 0.001270 | 0.001068 |
| quat_traits_std_array_test.test | RUN | 0.126380 | 0.341765 | 0.382048 | 0.001103 | 0.001342 | 0.001106 |
| access_m_test.test | RUN | 0.208504 | 0.803806 | 0.878273 | 0.001074 | 0.001432 | 0.001115 |
| access_m_fail1.test | COMPILE_FAIL | 0.020590 | 0.034865 | 0.059635 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019317 | 0.033450 | 0.053736 | — | — | — |
| access_q_test.test | RUN | 0.174448 | 0.415253 | 0.535767 | 0.001243 | 0.001213 | 0.001078 |
| access_q_fail.test | COMPILE_FAIL | 0.015724 | 0.028081 | 0.046328 | — | — | — |
| access_v_test.test | RUN | 0.177726 | 0.432409 | 0.516517 | 0.001013 | 0.001243 | 0.001218 |
| access_v_fail1.test | COMPILE_FAIL | 0.013517 | 0.025048 | 0.040142 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.012903 | 0.024899 | 0.040649 | — | — | — |
| assign_test.test | RUN | 0.262777 | 0.689131 | 0.958697 | 0.001138 | 0.001255 | 0.001280 |
| to_string_test.test | RUN | 0.308380 | 1.175866 | 5.552279 | 0.001060 | 0.001368 | 0.001213 |
| cmp_vv_test.test | RUN | 0.213707 | 0.549433 | 0.619581 | 0.001174 | 0.001386 | 0.001166 |
| cross_test.test | RUN | 0.202487 | 0.506902 | 0.614533 | 0.001082 | 0.001329 | 0.001088 |
| div_eq_vs_test.test | RUN | 0.199622 | 0.467039 | 0.607055 | 0.001183 | 0.001392 | 0.001242 |
| div_vs_test.test | RUN | 0.207552 | 0.579238 | 0.650487 | 0.001238 | 0.001240 | 0.001079 |
| dot_vv_test.test | RUN | 0.198174 | 0.518037 | 0.591638 | 0.001059 | 0.001252 | 0.001067 |
| eq_vv_test.test | RUN | 0.229391 | 0.581364 | 0.670623 | 0.001150 | 0.001321 | 0.001109 |
| mag_v_test.test | RUN | 0.196701 | 0.474826 | 0.578154 | 0.001065 | 0.001248 | 0.001119 |
| mag_sqr_v_test.test | RUN | 0.195327 | 0.477009 | 0.556721 | 0.001170 | 0.001446 | 0.001104 |
| minus_v_test.test | RUN | 0.201574 | 0.547264 | 0.634777 | 0.001100 | 0.001397 | 0.001094 |
| minus_eq_vv_test.test | RUN | 0.196349 | 0.537400 | 0.604630 | 0.001126 | 0.001318 | 0.001160 |
| minus_vv_test.test | RUN | 0.209706 | 0.586968 | 0.647530 | 0.001176 | 0.001412 | 0.001136 |
| mul_eq_vs_test.test | RUN | 0.195144 | 0.464125 | 0.596658 | 0.001269 | 0.001159 | 0.001198 |
| mul_vs_test.test | RUN | 0.202901 | 0.588012 | 0.656223 | 0.001152 | 0.001422 | 0.001294 |
| mul_sv_test.test | RUN | 0.211853 | 0.576253 | 0.658986 | 0.001189 | 0.001444 | 0.001146 |
| mul_vm_test.test | RUN | 0.294823 | 1.035950 | 0.970077 | 0.001060 | 0.001445 | 0.001095 |
| normalize_v_test.test | RUN | 0.213006 | 0.722740 | 0.665166 | 0.001300 | 0.001396 | 0.001245 |
| plus_eq_vv_test.test | RUN | 0.195533 | 0.532766 | 0.619382 | 0.001292 | 0.001368 | 0.001172 |
| plus_vv_test.test | RUN | 0.214005 | 0.579450 | 0.648435 | 0.000980 | 0.001343 | 0.001247 |
| scalar_cast_v_test.test | RUN | 0.186739 | 0.435271 | 0.560506 | 0.001146 | 0.001176 | 0.001072 |
| vec_index_test.test | RUN | 0.162516 | 0.448874 | 0.498242 | 0.001150 | 0.001275 | 0.001040 |
| vec_register_test.test | RUN | 0.113093 | 0.403768 | 0.374886 | 0.001385 | 0.001319 | 0.001132 |
| cmp_mm_test.test | RUN | 0.341141 | 1.294522 | 1.341275 | 0.001399 | 0.001270 | 0.001106 |
| determinant_test.test | RUN | 0.229236 | 0.650984 | 0.706670 | 0.001323 | 0.001408 | 0.001246 |
| div_eq_ms_test.test | RUN | 0.243044 | 0.605506 | 0.812904 | 0.001400 | 0.001251 | 0.001213 |
| div_ms_test.test | RUN | 0.279180 | 0.962088 | 0.987316 | 0.001223 | 0.001267 | 0.001082 |
| eq_mm_test.test | RUN | 0.320987 | 1.199701 | 1.258653 | 0.001359 | 0.001228 | 0.001229 |
| minus_m_test.test | RUN | 0.268937 | 0.942691 | 0.966101 | 0.001095 | 0.001265 | 0.001135 |
| minus_eq_mm_test.test | RUN | 0.257627 | 0.878806 | 0.885740 | 0.001129 | 0.001231 | 0.001247 |
| minus_mm_test.test | RUN | 0.301620 | 1.118345 | 1.057449 | 0.001195 | 0.001182 | 0.001200 |
| mul_eq_mm_test.test | RUN | 0.240003 | 0.806327 | 0.786018 | 0.001318 | 0.001395 | 0.001280 |
| mul_eq_ms_test.test | RUN | 0.236334 | 0.599927 | 0.828731 | 0.001301 | 0.001269 | 0.001158 |
| mul_mm_test.test | RUN | 0.344116 | 1.848598 | 1.317971 | 0.001234 | 0.001456 | 0.001164 |
| mul_ms_test.test | RUN | 0.285877 | 0.965700 | 1.038284 | 0.001161 | 0.001331 | 0.001224 |
| mul_sm_test.test | RUN | 0.285931 | 0.958260 | 1.009066 | 0.001307 | 0.001342 | 0.001119 |
| mul_mv_test.test | RUN | 0.291035 | 1.032559 | 1.034779 | 0.001377 | 0.001452 | 0.001110 |
| inverse_m_test.test | RUN | 0.413814 | 1.894567 | 1.460432 | 0.001182 | 0.001396 | 0.001270 |
| plus_eq_mm_test.test | RUN | 0.265517 | 0.879236 | 0.881904 | 0.001250 | 0.001244 | 0.001247 |
| plus_mm_test.test | RUN | 0.292067 | 1.104019 | 1.057544 | 0.001013 | 0.001317 | 0.001103 |
| scalar_cast_m_test.test | RUN | 0.217489 | 0.496274 | 0.665563 | 0.001151 | 0.001207 | 0.001150 |
| mat_index_test.test | RUN | 0.175387 | 0.483542 | 0.574895 | 0.001119 | 0.001544 | 0.001187 |
| cmp_qq_test.test | RUN | 0.187033 | 0.442641 | 0.541311 | 0.001206 | 0.001290 | 0.001164 |
| conjugate_test.test | RUN | 0.197933 | 0.448651 | 0.569644 | 0.001197 | 0.001272 | 0.001141 |
| normalize_q_test.test | RUN | 0.195698 | 0.509031 | 0.584531 | 0.001248 | 0.001221 | 0.001067 |
| div_eq_qs_test.test | RUN | 0.195749 | 0.430086 | 0.534790 | 0.001180 | 0.001279 | 0.001086 |
| div_qs_test.test | RUN | 0.194614 | 0.445448 | 0.562519 | 0.001175 | 0.001208 | 0.001115 |
| dot_qq_test.test | RUN | 0.190263 | 0.439118 | 0.562415 | 0.001222 | 0.001357 | 0.001194 |
| eq_qq_test.test | RUN | 0.192577 | 0.465128 | 0.561443 | 0.001099 | 0.001315 | 0.001070 |
| inverse_q_test.test | RUN | 0.239951 | 0.622093 | 0.712800 | 0.001271 | 0.001261 | 0.001121 |
| mag_q_test.test | RUN | 0.198207 | 0.442175 | 0.558070 | 0.001241 | 0.001360 | 0.001173 |
| mag_sqr_q_test.test | RUN | 0.190584 | 0.448686 | 0.552017 | 0.001295 | 0.001395 | 0.001084 |
| minus_q_test.test | RUN | 0.192432 | 0.459372 | 0.558647 | 0.001184 | 0.001276 | 0.001089 |
| minus_eq_qq_test.test | RUN | 0.198420 | 0.450391 | 0.553496 | 0.001189 | 0.001150 | 0.001135 |
| minus_qq_test.test | RUN | 0.200783 | 0.472197 | 0.564145 | 0.001194 | 0.001235 | 0.001160 |
| mul_eq_qs_test.test | RUN | 0.187814 | 0.432867 | 0.555079 | 0.001247 | 0.001286 | 0.001101 |
| mul_qs_test.test | RUN | 0.187226 | 0.454242 | 0.555831 | 0.001219 | 0.001223 | 0.001043 |
| mul_qv_test.test | RUN | 0.240160 | 0.625708 | 0.730379 | 0.001296 | 0.001280 | 0.001192 |
| mul_qq_test.test | RUN | 0.232591 | 0.633730 | 0.718152 | 0.001132 | 0.001266 | 0.001219 |
| mul_eq_qq_test.test | RUN | 0.224019 | 0.629522 | 0.696825 | 0.001166 | 0.001107 | 0.001112 |
| plus_eq_qq_test.test | RUN | 0.183629 | 0.452183 | 0.554925 | 0.001263 | 0.001139 | 0.001062 |
| plus_qq_test.test | RUN | 0.194869 | 0.465380 | 0.562137 | 0.001380 | 0.001250 | 0.001144 |
| scalar_cast_q_test.test | RUN | 0.193944 | 0.436699 | 0.563787 | 0.001302 | 0.001298 | 0.001049 |
| slerp_test.test | RUN | 0.210694 | 0.889162 | 0.687680 | 0.015419 | 0.013011 | 0.013049 |
| convert_to_test.test | RUN | 0.286959 | 0.830025 | 1.047670 | 0.001246 | 0.001351 | 0.001119 |
| rot_mat_test.test | RUN | 0.469867 | 3.760563 | 3.303320 | 0.030722 | 0.032315 | 0.033976 |
| rot_quat_test.test | RUN | 0.237719 | 0.735772 | 0.726153 | 0.001171 | 0.001399 | 0.001174 |
| rotx_mat_test.test | RUN | 0.270513 | 0.985865 | 0.966962 | 0.001193 | 0.001231 | 0.001148 |
| rotx_quat_test.test | RUN | 0.227439 | 0.626787 | 0.685174 | 0.001220 | 0.001248 | 0.001123 |
| roty_mat_test.test | RUN | 0.274286 | 0.983594 | 0.964739 | 0.001355 | 0.001429 | 0.001172 |
| roty_quat_test.test | RUN | 0.227471 | 0.625390 | 0.640496 | 0.001480 | 0.001133 | 0.001054 |
| rotz_mat_test.test | RUN | 0.282694 | 1.116921 | 1.003635 | 0.001250 | 0.001217 | 0.001237 |
| rotz_quat_test.test | RUN | 0.237919 | 0.630591 | 0.661299 | 0.001075 | 0.001217 | 0.001237 |
| zero_vec_test.test | RUN | 0.203555 | 0.540610 | 0.573583 | 0.001391 | 0.001300 | 0.001099 |
| zero_mat_test.test | RUN | 0.247843 | 0.905182 | 0.844236 | 0.001286 | 0.001264 | 0.001009 |
| zero_quat_test.test | RUN | 0.194329 | 0.445258 | 0.563316 | 0.001093 | 0.001092 | 0.001190 |
| identity_mat_test.test | RUN | 0.228990 | 0.671691 | 0.700904 | 0.001068 | 0.001296 | 0.001066 |
| identity_quat_test.test | RUN | 0.190869 | 0.433721 | 0.549271 | 0.001251 | 0.001346 | 0.001149 |
| col_test.test | RUN | 0.375734 | 1.405051 | 1.605589 | 0.001162 | 0.001324 | 0.001213 |
| col_mat_test.test | RUN | 0.238861 | 0.629482 | 0.753356 | 0.001133 | 0.001541 | 0.001161 |
| neg_col_test.test | RUN | 0.284288 | 0.885927 | 0.977537 | 0.001231 | 0.001217 | 0.001179 |
| neg_row_test.test | RUN | 0.293014 | 0.891262 | 0.978053 | 0.001214 | 0.001233 | 0.001199 |
| del_col_test.test | RUN | 0.298641 | 0.971353 | 1.018199 | 0.001145 | 0.001402 | 0.001282 |
| del_row_test.test | RUN | 0.303363 | 0.967134 | 0.992753 | 0.001290 | 0.001308 | 0.001148 |
| del_row_col_test.test | RUN | 0.416697 | 1.826673 | 1.839552 | 0.001358 | 0.001298 | 0.001068 |
| swap_cols_test.test | RUN | 0.565653 | 2.411362 | 2.290934 | 0.001264 | 0.001241 | 0.001121 |
| swap_rows_test.test | RUN | 0.627544 | 2.538699 | 2.213801 | 0.001322 | 0.001241 | 0.001144 |
| diag_test.test | RUN | 0.253478 | 0.647670 | 0.861032 | 0.001244 | 0.001242 | 0.001193 |
| diag_mat_test.test | RUN | 0.251561 | 0.643244 | 0.751293 | 0.001558 | 0.001246 | 0.001105 |
| row_test.test | RUN | 0.376694 | 1.422225 | 1.558372 | 0.001288 | 0.001317 | 0.001110 |
| row_mat_test.test | RUN | 0.239603 | 0.632639 | 0.739265 | 0.001217 | 0.001211 | 0.001156 |
| transpose_test.test | RUN | 0.298688 | 0.926876 | 1.008847 | 0.001089 | 0.001238 | 0.001119 |
| translation_test.test | RUN | 0.234520 | 0.595716 | 0.752112 | 0.001156 | 0.001291 | 0.001178 |
| translation_mat_test.test | RUN | 0.251147 | 0.594880 | 0.823529 | 0.001185 | 0.001390 | 0.000970 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.084536 | 0.170093 | 0.212132 | — | — | — |
| swizzle2_test2.test | RUN | 0.101239 | 0.255092 | 0.304430 | 0.001265 | 0.001286 | 0.001176 |
| swizzle2_test3.test | RUN | 0.106068 | 0.257523 | 0.302836 | 0.001260 | 0.001292 | 0.000981 |
| swizzle2_test4.test | RUN | 0.103147 | 0.255385 | 0.311864 | 0.001073 | 0.001286 | 0.001025 |
| swizzle2_test.test | RUN | 0.328906 | 0.701017 | 0.948646 | 0.001109 | 0.001194 | 0.001270 |
| swizzle3_test2.test | RUN | 0.115429 | 0.268800 | 0.342007 | 0.001235 | 0.001247 | 0.001119 |
| swizzle3_test3.test | RUN | 0.115237 | 0.273070 | 0.343070 | 0.001304 | 0.001212 | 0.001056 |
| swizzle3_test4.test | RUN | 0.118928 | 0.268987 | 0.339206 | 0.001099 | 0.001303 | 0.001055 |
| swizzle3_test.test | RUN | 0.318055 | 0.716550 | 0.954728 | 0.001299 | 0.001371 | 0.001186 |
| swizzle4_test2.test | RUN | 0.188427 | 0.383003 | 0.542133 | 0.001374 | 0.001276 | 0.001054 |
| swizzle4_test3.test | RUN | 0.189198 | 0.387041 | 0.523086 | 0.001389 | 0.001469 | 0.001121 |
| swizzle4_test4.test | RUN | 0.188656 | 0.392407 | 0.526786 | 0.000977 | 0.001218 | 0.001111 |
| swizzle4_test.test | RUN | 0.333164 | 0.777556 | 0.989998 | 0.001149 | 0.001273 | 0.001052 |
| deduce_scalar_test.test | COMPILE | 0.016686 | 0.036736 | 0.052216 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.123874 | 0.303123 | 0.359119 | 0.001457 | 0.001430 | 0.001096 |
| deduce_scalar_mv_test.test | RUN | 0.151246 | 0.340902 | 0.435094 | 0.001222 | 0.001320 | 0.001138 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013230 | 0.024117 | 0.039830 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014302 | 0.033383 | 0.045348 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.013914 | 0.032845 | 0.043598 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014107 | 0.032162 | 0.045060 | — | — | — |
| interop_test.test | RUN | 0.154286 | 0.384539 | 0.557396 | 0.000480 | 0.000377 | 0.000805 |
| transform_test.test | RUN | 0.305061 | 0.632723 | 0.882297 | 0.000865 | 0.000893 | 0.000805 |
| projection_test.test | RUN | 0.198324 | 0.492502 | 0.599299 | 0.000935 | 0.000922 | 0.000807 |
| scalar_traits_test.test | COMPILE | 0.015054 | 0.033152 | 0.049324 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.998×, 1.004× | 0.993× |
| clang | 1.046× | 1.042×, 1.050× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000802s | 0.000794s | 0.000799s | byte equality observed |
| access_q_test.test | 10 | 0.000798s | 0.000800s | 0.000816s | byte equality observed |
| access_v_test.test | 8 | 0.000808s | 0.000784s | 0.000811s | byte equality observed |
| assign_test.test | 10 | 0.000816s | 0.000809s | 0.000824s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000828s | 0.000805s | 0.000809s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000797s | 0.000796s | 0.000813s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000797s | 0.000786s | 0.000825s | byte equality observed |
| col_mat_test.test | 10 | 0.000819s | 0.000822s | 0.000811s | byte equality observed |
| col_test.test | 10 | 0.000820s | 0.000838s | 0.000825s | byte equality observed |
| conjugate_test.test | 10 | 0.000809s | 0.000813s | 0.000815s | byte equality observed |
| convert_to_test.test | 10 | 0.000806s | 0.000814s | 0.000818s | byte equality observed |
| cross_test.test | 10 | 0.000801s | 0.000803s | 0.000803s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000817s | 0.000783s | 0.000807s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000822s | 0.000804s | 0.000794s | byte equality observed |
| del_col_test.test | 10 | 0.000812s | 0.000788s | 0.000833s | byte equality observed |
| del_row_col_test.test | 10 | 0.000808s | 0.000794s | 0.000796s | byte equality observed |
| del_row_test.test | 10 | 0.000823s | 0.000802s | 0.000803s | byte equality observed |
| determinant_test.test | 10 | 0.000830s | 0.000821s | 0.000805s | byte equality observed |
| diag_mat_test.test | 10 | 0.000823s | 0.000838s | 0.000796s | byte equality observed |
| diag_test.test | 10 | 0.000817s | 0.000822s | 0.000818s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000796s | 0.000821s | 0.000819s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000810s | 0.000786s | 0.000801s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000800s | 0.000812s | 0.000801s | byte equality observed |
| div_ms_test.test | 10 | 0.000791s | 0.000785s | 0.000829s | byte equality observed |
| div_qs_test.test | 10 | 0.000807s | 0.000822s | 0.000843s | byte equality observed |
| div_vs_test.test | 10 | 0.000804s | 0.000809s | 0.000781s | byte equality observed |
| dot_qq_test.test | 10 | 0.000833s | 0.000804s | 0.000790s | byte equality observed |
| dot_vv_test.test | 10 | 0.000812s | 0.000786s | 0.000819s | byte equality observed |
| eq_mm_test.test | 10 | 0.000815s | 0.000827s | 0.000812s | byte equality observed |
| eq_qq_test.test | 10 | 0.000825s | 0.000808s | 0.000812s | byte equality observed |
| eq_vv_test.test | 10 | 0.000805s | 0.000805s | 0.000805s | byte equality observed |
| identity_mat_test.test | 10 | 0.000810s | 0.000816s | 0.000832s | byte equality observed |
| identity_quat_test.test | 10 | 0.000803s | 0.000812s | 0.000785s | byte equality observed |
| interop_test.test | 10 | 0.000366s | 0.000365s | 0.000780s | byte equality observed |
| inverse_m_test.test | 10 | 0.000852s | 0.000853s | 0.000810s | byte equality observed |
| inverse_q_test.test | 10 | 0.000815s | 0.000793s | 0.000843s | byte equality observed |
| mag_q_test.test | 10 | 0.000805s | 0.000793s | 0.000840s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000814s | 0.000781s | 0.000850s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000821s | 0.000796s | 0.000809s | byte equality observed |
| mag_v_test.test | 10 | 0.000799s | 0.000801s | 0.000827s | byte equality observed |
| mat_index_test.test | 10 | 0.000815s | 0.000828s | 0.000844s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000787s | 0.000822s | 0.000843s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000788s | 0.000785s | 0.000801s | byte equality observed |
| math_test.test | 10 | 0.001206s | 0.001176s | 0.001065s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000803s | 0.000809s | 0.000799s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000791s | 0.000828s | 0.000833s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000793s | 0.000824s | 0.000820s | byte equality observed |
| minus_m_test.test | 10 | 0.000809s | 0.000856s | 0.000831s | byte equality observed |
| minus_mm_test.test | 10 | 0.000822s | 0.000833s | 0.000817s | byte equality observed |
| minus_q_test.test | 10 | 0.000815s | 0.000801s | 0.000779s | byte equality observed |
| minus_qq_test.test | 10 | 0.000821s | 0.000818s | 0.000783s | byte equality observed |
| minus_v_test.test | 10 | 0.000824s | 0.000833s | 0.000797s | byte equality observed |
| minus_vv_test.test | 10 | 0.000805s | 0.000819s | 0.000818s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000818s | 0.000792s | 0.000810s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000814s | 0.000807s | 0.000837s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000820s | 0.000819s | 0.000813s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000790s | 0.000803s | 0.000799s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000837s | 0.000831s | 0.000811s | byte equality observed |
| mul_mm_test.test | 10 | 0.000825s | 0.000817s | 0.000836s | byte equality observed |
| mul_ms_test.test | 10 | 0.000813s | 0.000805s | 0.000828s | byte equality observed |
| mul_mv_test.test | 10 | 0.000819s | 0.000811s | 0.000827s | byte equality observed |
| mul_qq_test.test | 10 | 0.000826s | 0.000805s | 0.000795s | byte equality observed |
| mul_qs_test.test | 10 | 0.000812s | 0.000793s | 0.000837s | byte equality observed |
| mul_qv_test.test | 10 | 0.000821s | 0.000838s | 0.000855s | byte equality observed |
| mul_sm_test.test | 10 | 0.000813s | 0.000825s | 0.000807s | byte equality observed |
| mul_sv_test.test | 10 | 0.000835s | 0.000809s | 0.000793s | byte equality observed |
| mul_vm_test.test | 10 | 0.000810s | 0.000806s | 0.000800s | byte equality observed |
| mul_vs_test.test | 10 | 0.000824s | 0.000812s | 0.000786s | byte equality observed |
| neg_col_test.test | 10 | 0.000801s | 0.000812s | 0.000793s | byte equality observed |
| neg_row_test.test | 10 | 0.000811s | 0.000837s | 0.000823s | byte equality observed |
| normalize_q_test.test | 10 | 0.000817s | 0.000821s | 0.000833s | byte equality observed |
| normalize_v_test.test | 10 | 0.000819s | 0.000821s | 0.000800s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000815s | 0.000823s | 0.000798s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000811s | 0.000816s | 0.000822s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000803s | 0.000794s | 0.000806s | byte equality observed |
| plus_mm_test.test | 10 | 0.000795s | 0.000807s | 0.000793s | byte equality observed |
| plus_qq_test.test | 10 | 0.000788s | 0.000808s | 0.000824s | byte equality observed |
| plus_vv_test.test | 10 | 0.000833s | 0.000793s | 0.000801s | byte equality observed |
| projection_test.test | 10 | 0.000822s | 0.000798s | 0.000799s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000827s | 0.000794s | 0.000821s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000792s | 0.000787s | 0.000766s | byte equality observed |
| rot_mat_test.test | 1 | 0.019675s | 0.021832s | 0.026683s | byte equality observed |
| rot_quat_test.test | 10 | 0.000752s | 0.000750s | 0.000757s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000774s | 0.000781s | 0.000740s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000816s | 0.000833s | 0.000796s | byte equality observed |
| roty_mat_test.test | 10 | 0.000847s | 0.000829s | 0.000800s | byte equality observed |
| roty_quat_test.test | 10 | 0.000813s | 0.000815s | 0.000808s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000815s | 0.000822s | 0.000804s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000830s | 0.000817s | 0.000812s | byte equality observed |
| row_mat_test.test | 10 | 0.000816s | 0.000808s | 0.000786s | byte equality observed |
| row_test.test | 10 | 0.000790s | 0.000801s | 0.000791s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000797s | 0.000815s | 0.000820s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000811s | 0.000817s | 0.000830s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000781s | 0.000810s | 0.000779s | byte equality observed |
| slerp_test.test | 2 | 0.010854s | 0.009319s | 0.009661s | byte equality observed |
| swap_cols_test.test | 10 | 0.000748s | 0.000749s | 0.000748s | byte equality observed |
| swap_rows_test.test | 10 | 0.000765s | 0.000755s | 0.000755s | byte equality observed |
| swizzle2_test.test | 10 | 0.000804s | 0.000812s | 0.000810s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000803s | 0.000820s | 0.000827s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000815s | 0.000820s | 0.000860s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000816s | 0.000848s | 0.000799s | byte equality observed |
| swizzle3_test.test | 10 | 0.000834s | 0.000808s | 0.000813s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000827s | 0.000802s | 0.000802s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000823s | 0.000807s | 0.000776s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000814s | 0.000819s | 0.000815s | byte equality observed |
| swizzle4_test.test | 10 | 0.000814s | 0.000804s | 0.000780s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000826s | 0.000812s | 0.000806s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000802s | 0.000796s | 0.000801s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000798s | 0.000791s | 0.000798s | byte equality observed |
| to_string_test.test | 10 | 0.000819s | 0.000830s | 0.000831s | byte equality observed |
| transform_test.test | 10 | 0.000794s | 0.000816s | 0.000795s | byte equality observed |
| translation_mat_test.test | 10 | 0.000806s | 0.000825s | 0.000806s | byte equality observed |
| translation_test.test | 10 | 0.000800s | 0.000837s | 0.000815s | byte equality observed |
| transpose_test.test | 10 | 0.000805s | 0.000787s | 0.000796s | byte equality observed |
| vec_index_test.test | 10 | 0.000794s | 0.000803s | 0.000786s | byte equality observed |
| vec_register_test.test | 10 | 0.000833s | 0.000786s | 0.000819s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000824s | 0.000808s | 0.000799s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000821s | 0.000823s | 0.000789s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000808s | 0.000857s | 0.000815s | byte equality observed |
| zero_mat_test.test | 10 | 0.000822s | 0.000823s | 0.000850s | byte equality observed |
| zero_quat_test.test | 10 | 0.000820s | 0.000838s | 0.000826s | byte equality observed |
| zero_vec_test.test | 10 | 0.000812s | 0.000791s | 0.000797s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
