# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.193483 | 0.558425 | 0.590788 | 0.001828 | 0.001617 | 0.001547 |
| mat_traits_array_test.test | RUN | 0.147053 | 0.558955 | 0.459473 | 0.001392 | 0.001124 | 0.000891 |
| mat_traits_std_array_test.test | RUN | 0.149888 | 0.426268 | 0.450672 | 0.001230 | 0.001435 | 0.001205 |
| vec_traits_array_test.test | RUN | 0.126579 | 0.428885 | 0.382237 | 0.001238 | 0.001430 | 0.001145 |
| vec_traits_gnuc_test.test | RUN | 0.239207 | 0.506920 | 0.721570 | 0.001029 | 0.001231 | 0.001068 |
| vec_traits_std_array_test.test | RUN | 0.123989 | 0.330403 | 0.389265 | 0.001332 | 0.001285 | 0.001252 |
| quat_traits_array_test.test | RUN | 0.125350 | 0.444631 | 0.383071 | 0.001251 | 0.001284 | 0.001284 |
| quat_traits_std_array_test.test | RUN | 0.124492 | 0.335925 | 0.376551 | 0.001120 | 0.001345 | 0.001094 |
| access_m_test.test | RUN | 0.202729 | 0.803927 | 0.874059 | 0.001161 | 0.001378 | 0.001175 |
| access_m_fail1.test | COMPILE_FAIL | 0.019338 | 0.031832 | 0.057225 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019231 | 0.031077 | 0.055573 | — | — | — |
| access_q_test.test | RUN | 0.169914 | 0.411610 | 0.528564 | 0.001146 | 0.001358 | 0.001148 |
| access_q_fail.test | COMPILE_FAIL | 0.014415 | 0.028276 | 0.047098 | — | — | — |
| access_v_test.test | RUN | 0.172289 | 0.423369 | 0.517099 | 0.001069 | 0.001180 | 0.001210 |
| access_v_fail1.test | COMPILE_FAIL | 0.013046 | 0.025090 | 0.041797 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013897 | 0.025339 | 0.043761 | — | — | — |
| assign_test.test | RUN | 0.262495 | 0.669850 | 0.948853 | 0.001353 | 0.001468 | 0.001379 |
| to_string_test.test | RUN | 0.312391 | 1.140742 | 5.605238 | 0.001069 | 0.001348 | 0.001229 |
| cmp_vv_test.test | RUN | 0.210922 | 0.552417 | 0.627038 | 0.001280 | 0.001195 | 0.001306 |
| cross_test.test | RUN | 0.205403 | 0.493992 | 0.620595 | 0.001072 | 0.001246 | 0.001183 |
| div_eq_vs_test.test | RUN | 0.196768 | 0.461774 | 0.616353 | 0.001302 | 0.001406 | 0.001416 |
| div_vs_test.test | RUN | 0.208038 | 0.572891 | 0.652135 | 0.001027 | 0.001187 | 0.001084 |
| dot_vv_test.test | RUN | 0.194801 | 0.507558 | 0.601091 | 0.001144 | 0.001249 | 0.001148 |
| eq_vv_test.test | RUN | 0.219102 | 0.577702 | 0.665452 | 0.001032 | 0.001224 | 0.001198 |
| mag_v_test.test | RUN | 0.196680 | 0.466539 | 0.585321 | 0.001359 | 0.001230 | 0.001097 |
| mag_sqr_v_test.test | RUN | 0.189263 | 0.466712 | 0.582495 | 0.001339 | 0.001341 | 0.001066 |
| minus_v_test.test | RUN | 0.197927 | 0.547804 | 0.628786 | 0.001184 | 0.001382 | 0.001271 |
| minus_eq_vv_test.test | RUN | 0.201595 | 0.526347 | 0.621256 | 0.001100 | 0.001339 | 0.001213 |
| minus_vv_test.test | RUN | 0.209324 | 0.576773 | 0.653517 | 0.001444 | 0.001371 | 0.001107 |
| mul_eq_vs_test.test | RUN | 0.194221 | 0.452328 | 0.623479 | 0.001282 | 0.001343 | 0.001121 |
| mul_vs_test.test | RUN | 0.208302 | 0.577413 | 0.663620 | 0.001212 | 0.001351 | 0.001123 |
| mul_sv_test.test | RUN | 0.207292 | 0.572964 | 0.649217 | 0.001042 | 0.001190 | 0.001114 |
| mul_vm_test.test | RUN | 0.283046 | 1.024531 | 1.039946 | 0.001040 | 0.001176 | 0.001290 |
| normalize_v_test.test | RUN | 0.212446 | 0.700484 | 0.633612 | 0.001129 | 0.001460 | 0.001380 |
| plus_eq_vv_test.test | RUN | 0.195304 | 0.534090 | 0.620731 | 0.001255 | 0.001204 | 0.001263 |
| plus_vv_test.test | RUN | 0.207049 | 0.576924 | 0.641411 | 0.001192 | 0.001147 | 0.001250 |
| scalar_cast_v_test.test | RUN | 0.191646 | 0.431137 | 0.555682 | 0.001015 | 0.001199 | 0.001192 |
| vec_index_test.test | RUN | 0.165757 | 0.439975 | 0.511874 | 0.001148 | 0.001295 | 0.001349 |
| vec_register_test.test | RUN | 0.112153 | 0.393198 | 0.375561 | 0.001376 | 0.001302 | 0.001222 |
| cmp_mm_test.test | RUN | 0.337156 | 1.276515 | 1.326933 | 0.001320 | 0.001217 | 0.001264 |
| determinant_test.test | RUN | 0.234257 | 0.647950 | 0.717095 | 0.001202 | 0.001261 | 0.001205 |
| div_eq_ms_test.test | RUN | 0.236451 | 0.589306 | 0.823643 | 0.001294 | 0.001239 | 0.001258 |
| div_ms_test.test | RUN | 0.276436 | 0.961223 | 1.005614 | 0.001052 | 0.001249 | 0.001179 |
| eq_mm_test.test | RUN | 0.327411 | 1.181474 | 1.301082 | 0.001208 | 0.001238 | 0.001159 |
| minus_m_test.test | RUN | 0.282199 | 0.931959 | 0.954215 | 0.001100 | 0.001184 | 0.001246 |
| minus_eq_mm_test.test | RUN | 0.259467 | 0.873443 | 0.896560 | 0.001298 | 0.001333 | 0.001154 |
| minus_mm_test.test | RUN | 0.296394 | 1.101541 | 1.058841 | 0.001210 | 0.001239 | 0.001291 |
| mul_eq_mm_test.test | RUN | 0.250317 | 0.795508 | 0.787201 | 0.001410 | 0.001163 | 0.001134 |
| mul_eq_ms_test.test | RUN | 0.238926 | 0.585555 | 0.821801 | 0.001254 | 0.001290 | 0.001299 |
| mul_mm_test.test | RUN | 0.343065 | 1.822593 | 1.317885 | 0.001294 | 0.001257 | 0.001244 |
| mul_ms_test.test | RUN | 0.294047 | 0.953072 | 1.043135 | 0.001179 | 0.001235 | 0.001269 |
| mul_sm_test.test | RUN | 0.282016 | 0.940073 | 1.012779 | 0.001204 | 0.001300 | 0.001142 |
| mul_mv_test.test | RUN | 0.293849 | 1.014889 | 1.038858 | 0.001262 | 0.001287 | 0.001306 |
| inverse_m_test.test | RUN | 0.403057 | 1.868631 | 1.452228 | 0.001285 | 0.001289 | 0.001300 |
| plus_eq_mm_test.test | RUN | 0.263158 | 0.868839 | 0.904772 | 0.001215 | 0.001222 | 0.001188 |
| plus_mm_test.test | RUN | 0.296166 | 1.089449 | 1.046362 | 0.001314 | 0.001245 | 0.001123 |
| scalar_cast_m_test.test | RUN | 0.215462 | 0.489752 | 0.652340 | 0.001204 | 0.001426 | 0.001187 |
| mat_index_test.test | RUN | 0.183402 | 0.467724 | 0.574223 | 0.001268 | 0.001360 | 0.001171 |
| cmp_qq_test.test | RUN | 0.190961 | 0.436788 | 0.542315 | 0.001228 | 0.001169 | 0.001300 |
| conjugate_test.test | RUN | 0.194895 | 0.436849 | 0.562981 | 0.001353 | 0.001274 | 0.001170 |
| normalize_q_test.test | RUN | 0.199784 | 0.494453 | 0.575512 | 0.001124 | 0.001338 | 0.001124 |
| div_eq_qs_test.test | RUN | 0.187878 | 0.423164 | 0.559327 | 0.001031 | 0.001326 | 0.001386 |
| div_qs_test.test | RUN | 0.197305 | 0.452380 | 0.570776 | 0.001168 | 0.001179 | 0.001270 |
| dot_qq_test.test | RUN | 0.189947 | 0.429919 | 0.575627 | 0.001306 | 0.001242 | 0.001346 |
| eq_qq_test.test | RUN | 0.195630 | 0.457319 | 0.571632 | 0.001141 | 0.001313 | 0.001180 |
| inverse_q_test.test | RUN | 0.234063 | 0.602667 | 0.726474 | 0.001186 | 0.001204 | 0.001272 |
| mag_q_test.test | RUN | 0.195342 | 0.451152 | 0.563859 | 0.001134 | 0.001197 | 0.001278 |
| mag_sqr_q_test.test | RUN | 0.189192 | 0.438602 | 0.555421 | 0.001332 | 0.001369 | 0.001217 |
| minus_q_test.test | RUN | 0.188510 | 0.440188 | 0.565126 | 0.001148 | 0.001197 | 0.001224 |
| minus_eq_qq_test.test | RUN | 0.190451 | 0.450479 | 0.568485 | 0.001339 | 0.001187 | 0.001275 |
| minus_qq_test.test | RUN | 0.193309 | 0.458577 | 0.574718 | 0.001204 | 0.001306 | 0.001156 |
| mul_eq_qs_test.test | RUN | 0.189633 | 0.420621 | 0.550760 | 0.001120 | 0.001177 | 0.001244 |
| mul_qs_test.test | RUN | 0.197834 | 0.453465 | 0.567559 | 0.001121 | 0.001135 | 0.001238 |
| mul_qv_test.test | RUN | 0.233565 | 0.602934 | 0.734037 | 0.001277 | 0.001261 | 0.001191 |
| mul_qq_test.test | RUN | 0.229384 | 0.621856 | 0.710272 | 0.001222 | 0.001314 | 0.001123 |
| mul_eq_qq_test.test | RUN | 0.234471 | 0.623248 | 0.695806 | 0.001140 | 0.001211 | 0.001110 |
| plus_eq_qq_test.test | RUN | 0.196110 | 0.434408 | 0.554815 | 0.001174 | 0.001180 | 0.001140 |
| plus_qq_test.test | RUN | 0.194717 | 0.456425 | 0.569412 | 0.001274 | 0.001226 | 0.001113 |
| scalar_cast_q_test.test | RUN | 0.191384 | 0.422388 | 0.551211 | 0.001250 | 0.001224 | 0.001239 |
| slerp_test.test | RUN | 0.214756 | 0.894462 | 0.664448 | 0.015088 | 0.012972 | 0.013358 |
| convert_to_test.test | RUN | 0.290103 | 0.799820 | 1.076976 | 0.001256 | 0.001294 | 0.001255 |
| rot_mat_test.test | RUN | 0.474038 | 3.736434 | 3.282702 | 0.031041 | 0.027540 | 0.033665 |
| rot_quat_test.test | RUN | 0.232190 | 0.733806 | 0.746305 | 0.001200 | 0.001266 | 0.001234 |
| rotx_mat_test.test | RUN | 0.276781 | 0.973163 | 0.951676 | 0.001147 | 0.001271 | 0.001126 |
| rotx_quat_test.test | RUN | 0.229507 | 0.618648 | 0.701953 | 0.001224 | 0.001169 | 0.001236 |
| roty_mat_test.test | RUN | 0.273632 | 0.968439 | 0.975852 | 0.001207 | 0.001385 | 0.001371 |
| roty_quat_test.test | RUN | 0.236283 | 0.615540 | 0.647226 | 0.001145 | 0.001139 | 0.001143 |
| rotz_mat_test.test | RUN | 0.285747 | 1.098128 | 1.004564 | 0.001181 | 0.001209 | 0.001270 |
| rotz_quat_test.test | RUN | 0.230192 | 0.613453 | 0.699105 | 0.001177 | 0.001205 | 0.001062 |
| zero_vec_test.test | RUN | 0.200833 | 0.528507 | 0.598132 | 0.001288 | 0.001149 | 0.001141 |
| zero_mat_test.test | RUN | 0.247044 | 0.889873 | 0.819420 | 0.001126 | 0.001296 | 0.001170 |
| zero_quat_test.test | RUN | 0.190006 | 0.443238 | 0.553489 | 0.001412 | 0.001242 | 0.001208 |
| identity_mat_test.test | RUN | 0.223799 | 0.655772 | 0.715811 | 0.001252 | 0.001182 | 0.001148 |
| identity_quat_test.test | RUN | 0.191511 | 0.433531 | 0.560184 | 0.001188 | 0.001341 | 0.001280 |
| col_test.test | RUN | 0.373368 | 1.401327 | 1.586794 | 0.001169 | 0.001215 | 0.001244 |
| col_mat_test.test | RUN | 0.238150 | 0.626733 | 0.766460 | 0.001131 | 0.001210 | 0.001256 |
| neg_col_test.test | RUN | 0.282390 | 0.870689 | 0.968049 | 0.001173 | 0.001303 | 0.001211 |
| neg_row_test.test | RUN | 0.292365 | 0.872465 | 0.983734 | 0.001228 | 0.001360 | 0.001250 |
| del_col_test.test | RUN | 0.297303 | 0.972443 | 1.011845 | 0.001624 | 0.001238 | 0.001303 |
| del_row_test.test | RUN | 0.301496 | 0.946757 | 0.997876 | 0.001458 | 0.001275 | 0.001243 |
| del_row_col_test.test | RUN | 0.413093 | 1.803563 | 1.865217 | 0.001416 | 0.001206 | 0.001256 |
| swap_cols_test.test | RUN | 0.571679 | 2.385342 | 2.249336 | 0.001241 | 0.001185 | 0.001294 |
| swap_rows_test.test | RUN | 0.625931 | 2.533703 | 2.278274 | 0.001401 | 0.001410 | 0.001097 |
| diag_test.test | RUN | 0.256788 | 0.646154 | 0.853726 | 0.001114 | 0.001226 | 0.001104 |
| diag_mat_test.test | RUN | 0.248428 | 0.624861 | 0.754478 | 0.001198 | 0.001283 | 0.001166 |
| row_test.test | RUN | 0.370886 | 1.349621 | 1.617639 | 0.001375 | 0.001296 | 0.001410 |
| row_mat_test.test | RUN | 0.250346 | 0.602066 | 0.729617 | 0.001236 | 0.001165 | 0.001379 |
| transpose_test.test | RUN | 0.289140 | 0.928375 | 1.039317 | 0.001217 | 0.001162 | 0.001372 |
| translation_test.test | RUN | 0.234422 | 0.581841 | 0.756914 | 0.001213 | 0.001276 | 0.001202 |
| translation_mat_test.test | RUN | 0.257617 | 0.581989 | 0.827668 | 0.001159 | 0.001141 | 0.001225 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.083258 | 0.169632 | 0.229127 | — | — | — |
| swizzle2_test2.test | RUN | 0.101904 | 0.256077 | 0.313938 | 0.001180 | 0.001221 | 0.001128 |
| swizzle2_test3.test | RUN | 0.102049 | 0.248427 | 0.311807 | 0.001135 | 0.001304 | 0.001166 |
| swizzle2_test4.test | RUN | 0.100644 | 0.249917 | 0.300312 | 0.001037 | 0.001198 | 0.001238 |
| swizzle2_test.test | RUN | 0.334823 | 0.693589 | 0.983313 | 0.001190 | 0.001178 | 0.001330 |
| swizzle3_test2.test | RUN | 0.113716 | 0.266364 | 0.357915 | 0.001187 | 0.001271 | 0.001387 |
| swizzle3_test3.test | RUN | 0.114408 | 0.276813 | 0.340617 | 0.001191 | 0.001182 | 0.001095 |
| swizzle3_test4.test | RUN | 0.111661 | 0.264890 | 0.338572 | 0.001310 | 0.001192 | 0.001198 |
| swizzle3_test.test | RUN | 0.318795 | 0.706016 | 0.980381 | 0.001224 | 0.001098 | 0.001266 |
| swizzle4_test2.test | RUN | 0.192671 | 0.376273 | 0.547338 | 0.001492 | 0.001201 | 0.001151 |
| swizzle4_test3.test | RUN | 0.189037 | 0.387547 | 0.544205 | 0.001201 | 0.001269 | 0.001335 |
| swizzle4_test4.test | RUN | 0.200228 | 0.381083 | 0.544546 | 0.001058 | 0.001187 | 0.001361 |
| swizzle4_test.test | RUN | 0.332360 | 0.773359 | 1.020788 | 0.001147 | 0.001329 | 0.001310 |
| deduce_scalar_test.test | COMPILE | 0.016995 | 0.036637 | 0.054101 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125059 | 0.291998 | 0.356214 | 0.001217 | 0.001194 | 0.001264 |
| deduce_scalar_mv_test.test | RUN | 0.156019 | 0.342904 | 0.447870 | 0.001125 | 0.001076 | 0.001185 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013139 | 0.022731 | 0.040204 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.013995 | 0.032300 | 0.048049 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014465 | 0.030534 | 0.047997 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015410 | 0.030718 | 0.046754 | — | — | — |
| interop_test.test | RUN | 0.158442 | 0.427182 | 0.632364 | 0.000365 | 0.000548 | 0.001216 |
| transform_test.test | RUN | 0.301558 | 0.578702 | 0.874925 | 0.000876 | 0.000816 | 0.000963 |
| projection_test.test | RUN | 0.202580 | 0.477057 | 0.542607 | 0.000931 | 0.000882 | 0.000937 |
| scalar_traits_test.test | COMPILE | 0.015814 | 0.033071 | 0.050953 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 0.998×, 1.014× | 1.003× |
| clang | 1.046× | 1.046×, 1.045× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000813s | 0.000817s | 0.000809s | byte equality observed |
| access_q_test.test | 10 | 0.000791s | 0.000818s | 0.000837s | byte equality observed |
| access_v_test.test | 10 | 0.000799s | 0.000831s | 0.000815s | byte equality observed |
| assign_test.test | 10 | 0.000808s | 0.000810s | 0.000802s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000815s | 0.000843s | 0.000811s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000807s | 0.000808s | 0.000814s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000811s | 0.000804s | 0.000815s | byte equality observed |
| col_mat_test.test | 10 | 0.000815s | 0.000821s | 0.000829s | byte equality observed |
| col_test.test | 10 | 0.000814s | 0.000839s | 0.000806s | byte equality observed |
| conjugate_test.test | 10 | 0.000802s | 0.000836s | 0.000802s | byte equality observed |
| convert_to_test.test | 10 | 0.000818s | 0.000839s | 0.000798s | byte equality observed |
| cross_test.test | 10 | 0.000815s | 0.000807s | 0.000842s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000832s | 0.000823s | 0.000797s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000789s | 0.000821s | 0.000816s | byte equality observed |
| del_col_test.test | 10 | 0.000808s | 0.000817s | 0.000808s | byte equality observed |
| del_row_col_test.test | 10 | 0.000814s | 0.000815s | 0.000805s | byte equality observed |
| del_row_test.test | 10 | 0.000803s | 0.000816s | 0.000815s | byte equality observed |
| determinant_test.test | 10 | 0.000803s | 0.000841s | 0.000839s | byte equality observed |
| diag_mat_test.test | 10 | 0.000806s | 0.000805s | 0.000832s | byte equality observed |
| diag_test.test | 10 | 0.000798s | 0.000810s | 0.000821s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000786s | 0.000838s | 0.000817s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000803s | 0.000814s | 0.000810s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000796s | 0.000784s | 0.000806s | byte equality observed |
| div_ms_test.test | 10 | 0.000796s | 0.000807s | 0.000786s | byte equality observed |
| div_qs_test.test | 10 | 0.000791s | 0.000819s | 0.000807s | byte equality observed |
| div_vs_test.test | 10 | 0.000798s | 0.000809s | 0.000799s | byte equality observed |
| dot_qq_test.test | 10 | 0.000791s | 0.000800s | 0.000798s | byte equality observed |
| dot_vv_test.test | 10 | 0.000795s | 0.000809s | 0.000828s | byte equality observed |
| eq_mm_test.test | 10 | 0.000819s | 0.000808s | 0.000829s | byte equality observed |
| eq_qq_test.test | 10 | 0.000794s | 0.000823s | 0.000785s | byte equality observed |
| eq_vv_test.test | 10 | 0.000794s | 0.000843s | 0.000807s | byte equality observed |
| identity_mat_test.test | 10 | 0.000821s | 0.000834s | 0.000820s | byte equality observed |
| identity_quat_test.test | 10 | 0.000797s | 0.000801s | 0.000796s | byte equality observed |
| interop_test.test | 10 | 0.000363s | 0.000364s | 0.000798s | byte equality observed |
| inverse_m_test.test | 10 | 0.000855s | 0.000845s | 0.000824s | byte equality observed |
| inverse_q_test.test | 10 | 0.000805s | 0.000774s | 0.000812s | byte equality observed |
| mag_q_test.test | 10 | 0.000802s | 0.000786s | 0.000815s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000808s | 0.000778s | 0.000817s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000797s | 0.000809s | 0.000849s | byte equality observed |
| mag_v_test.test | 10 | 0.000813s | 0.000836s | 0.000827s | byte equality observed |
| mat_index_test.test | 10 | 0.000792s | 0.000821s | 0.000824s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000808s | 0.000824s | 0.000817s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000794s | 0.000801s | 0.000794s | byte equality observed |
| math_test.test | 10 | 0.001201s | 0.001174s | 0.001055s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000781s | 0.000793s | 0.000808s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000791s | 0.000812s | 0.000812s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000820s | 0.000791s | 0.000844s | byte equality observed |
| minus_m_test.test | 10 | 0.000791s | 0.000837s | 0.000826s | byte equality observed |
| minus_mm_test.test | 10 | 0.000806s | 0.000820s | 0.000824s | byte equality observed |
| minus_q_test.test | 10 | 0.000811s | 0.000809s | 0.000826s | byte equality observed |
| minus_qq_test.test | 10 | 0.000817s | 0.000797s | 0.000819s | byte equality observed |
| minus_v_test.test | 10 | 0.000793s | 0.000814s | 0.000807s | byte equality observed |
| minus_vv_test.test | 10 | 0.000815s | 0.000798s | 0.000801s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000818s | 0.000811s | 0.000823s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000812s | 0.000833s | 0.000833s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000812s | 0.000823s | 0.000825s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000794s | 0.000812s | 0.000814s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000800s | 0.000819s | 0.000806s | byte equality observed |
| mul_mm_test.test | 10 | 0.000804s | 0.000806s | 0.000810s | byte equality observed |
| mul_ms_test.test | 10 | 0.000794s | 0.000801s | 0.000814s | byte equality observed |
| mul_mv_test.test | 10 | 0.000800s | 0.000798s | 0.000828s | byte equality observed |
| mul_qq_test.test | 10 | 0.000830s | 0.000802s | 0.000811s | byte equality observed |
| mul_qs_test.test | 10 | 0.000803s | 0.000808s | 0.000815s | byte equality observed |
| mul_qv_test.test | 10 | 0.000844s | 0.000823s | 0.000793s | byte equality observed |
| mul_sm_test.test | 10 | 0.000830s | 0.000833s | 0.000843s | byte equality observed |
| mul_sv_test.test | 10 | 0.000829s | 0.000798s | 0.000801s | byte equality observed |
| mul_vm_test.test | 10 | 0.000787s | 0.000798s | 0.000796s | byte equality observed |
| mul_vs_test.test | 10 | 0.000819s | 0.000799s | 0.000831s | byte equality observed |
| neg_col_test.test | 10 | 0.000796s | 0.000803s | 0.000799s | byte equality observed |
| neg_row_test.test | 10 | 0.000797s | 0.000803s | 0.000811s | byte equality observed |
| normalize_q_test.test | 10 | 0.000836s | 0.000830s | 0.000787s | byte equality observed |
| normalize_v_test.test | 10 | 0.000800s | 0.000820s | 0.000819s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000816s | 0.000822s | 0.000811s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000834s | 0.000814s | 0.000826s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000809s | 0.000806s | 0.000787s | byte equality observed |
| plus_mm_test.test | 10 | 0.000815s | 0.000814s | 0.000816s | byte equality observed |
| plus_qq_test.test | 10 | 0.000805s | 0.000811s | 0.000802s | byte equality observed |
| plus_vv_test.test | 10 | 0.000814s | 0.000814s | 0.000802s | byte equality observed |
| projection_test.test | 10 | 0.000825s | 0.000786s | 0.000811s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000787s | 0.000833s | 0.000820s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000774s | 0.000770s | 0.000750s | byte equality observed |
| rot_mat_test.test | 1 | 0.019797s | 0.021858s | 0.026126s | byte equality observed |
| rot_quat_test.test | 10 | 0.000737s | 0.000747s | 0.000755s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000779s | 0.000774s | 0.000735s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000828s | 0.000813s | 0.000802s | byte equality observed |
| roty_mat_test.test | 10 | 0.000820s | 0.000858s | 0.000821s | byte equality observed |
| roty_quat_test.test | 10 | 0.000835s | 0.000818s | 0.000832s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000842s | 0.000832s | 0.000825s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000830s | 0.000821s | 0.000810s | byte equality observed |
| row_mat_test.test | 10 | 0.000828s | 0.000814s | 0.000811s | byte equality observed |
| row_test.test | 10 | 0.000816s | 0.000783s | 0.000801s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000799s | 0.000798s | 0.000817s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000801s | 0.000817s | 0.000795s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000774s | 0.000801s | 0.000821s | byte equality observed |
| slerp_test.test | 2 | 0.011025s | 0.009424s | 0.009772s | byte equality observed |
| swap_cols_test.test | 10 | 0.000749s | 0.000738s | 0.000761s | byte equality observed |
| swap_rows_test.test | 10 | 0.000758s | 0.000766s | 0.000768s | byte equality observed |
| swizzle2_test.test | 10 | 0.000800s | 0.000798s | 0.000810s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000814s | 0.000803s | 0.000805s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000821s | 0.000807s | 0.000824s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000825s | 0.000815s | 0.000788s | byte equality observed |
| swizzle3_test.test | 10 | 0.000818s | 0.000831s | 0.000807s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000828s | 0.000831s | 0.000804s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000799s | 0.000825s | 0.000832s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000779s | 0.000774s | 0.000828s | byte equality observed |
| swizzle4_test.test | 10 | 0.000792s | 0.000822s | 0.000802s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000781s | 0.000817s | 0.000814s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000802s | 0.000802s | 0.000838s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000825s | 0.000811s | 0.000819s | byte equality observed |
| to_string_test.test | 10 | 0.000835s | 0.000861s | 0.000843s | byte equality observed |
| transform_test.test | 10 | 0.000816s | 0.000825s | 0.000785s | byte equality observed |
| translation_mat_test.test | 10 | 0.000791s | 0.000808s | 0.000800s | byte equality observed |
| translation_test.test | 10 | 0.000802s | 0.000807s | 0.000815s | byte equality observed |
| transpose_test.test | 10 | 0.000827s | 0.000816s | 0.000855s | byte equality observed |
| vec_index_test.test | 10 | 0.000817s | 0.000788s | 0.000841s | byte equality observed |
| vec_register_test.test | 10 | 0.000792s | 0.000810s | 0.000808s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000802s | 0.000786s | 0.000800s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000799s | 0.000784s | 0.000775s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000803s | 0.000793s | 0.000787s | byte equality observed |
| zero_mat_test.test | 10 | 0.000805s | 0.000783s | 0.000786s | byte equality observed |
| zero_quat_test.test | 10 | 0.000808s | 0.000781s | 0.000799s | byte equality observed |
| zero_vec_test.test | 10 | 0.000802s | 0.000802s | 0.000773s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
