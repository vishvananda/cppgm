# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.189029 | 0.561581 | 0.569771 | 0.001630 | 0.001886 | 0.001482 |
| mat_traits_array_test.test | RUN | 0.142920 | 0.559731 | 0.461181 | 0.001392 | 0.001358 | 0.001169 |
| mat_traits_std_array_test.test | RUN | 0.147660 | 0.426978 | 0.461527 | 0.001270 | 0.001335 | 0.001098 |
| vec_traits_array_test.test | RUN | 0.126051 | 0.430158 | 0.382230 | 0.001164 | 0.001502 | 0.001011 |
| vec_traits_gnuc_test.test | RUN | 0.231081 | 0.525206 | 0.730062 | 0.001064 | 0.001266 | 0.001311 |
| vec_traits_std_array_test.test | RUN | 0.128343 | 0.340583 | 0.385492 | 0.001354 | 0.001357 | 0.001118 |
| quat_traits_array_test.test | RUN | 0.123924 | 0.452529 | 0.377586 | 0.001227 | 0.001205 | 0.001152 |
| quat_traits_std_array_test.test | RUN | 0.121119 | 0.334380 | 0.377537 | 0.001186 | 0.001368 | 0.001028 |
| access_m_test.test | RUN | 0.202632 | 0.812719 | 0.871060 | 0.001098 | 0.001327 | 0.000983 |
| access_m_fail1.test | COMPILE_FAIL | 0.018491 | 0.035400 | 0.057036 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019514 | 0.034110 | 0.057796 | — | — | — |
| access_q_test.test | RUN | 0.168500 | 0.416920 | 0.513095 | 0.001069 | 0.001190 | 0.001141 |
| access_q_fail.test | COMPILE_FAIL | 0.014236 | 0.027106 | 0.047972 | — | — | — |
| access_v_test.test | RUN | 0.167145 | 0.424958 | 0.506169 | 0.001053 | 0.001139 | 0.001167 |
| access_v_fail1.test | COMPILE_FAIL | 0.012705 | 0.023835 | 0.041641 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.012842 | 0.025176 | 0.044314 | — | — | — |
| assign_test.test | RUN | 0.256523 | 0.693248 | 0.945209 | 0.001058 | 0.001565 | 0.001115 |
| to_string_test.test | RUN | 0.302566 | 1.179812 | 5.518276 | 0.001143 | 0.001319 | 0.001111 |
| cmp_vv_test.test | RUN | 0.199791 | 0.556419 | 0.624905 | 0.001160 | 0.001342 | 0.001111 |
| cross_test.test | RUN | 0.199113 | 0.507506 | 0.619544 | 0.001100 | 0.001187 | 0.000970 |
| div_eq_vs_test.test | RUN | 0.196112 | 0.471349 | 0.603292 | 0.001264 | 0.001257 | 0.001023 |
| div_vs_test.test | RUN | 0.202148 | 0.583828 | 0.650380 | 0.001036 | 0.001607 | 0.001130 |
| dot_vv_test.test | RUN | 0.192340 | 0.520842 | 0.605922 | 0.001118 | 0.001203 | 0.001044 |
| eq_vv_test.test | RUN | 0.220025 | 0.585109 | 0.676271 | 0.001071 | 0.001432 | 0.001083 |
| mag_v_test.test | RUN | 0.194080 | 0.479201 | 0.576891 | 0.001350 | 0.001219 | 0.001035 |
| mag_sqr_v_test.test | RUN | 0.188301 | 0.473244 | 0.553980 | 0.001331 | 0.001162 | 0.001071 |
| minus_v_test.test | RUN | 0.196744 | 0.554354 | 0.627637 | 0.001149 | 0.001379 | 0.001064 |
| minus_eq_vv_test.test | RUN | 0.196410 | 0.543328 | 0.614736 | 0.001096 | 0.001534 | 0.001118 |
| minus_vv_test.test | RUN | 0.203363 | 0.581101 | 0.620317 | 0.001224 | 0.001310 | 0.001123 |
| mul_eq_vs_test.test | RUN | 0.189926 | 0.467648 | 0.612283 | 0.001226 | 0.001250 | 0.001088 |
| mul_vs_test.test | RUN | 0.202392 | 0.586334 | 0.627464 | 0.001170 | 0.001440 | 0.001105 |
| mul_sv_test.test | RUN | 0.205236 | 0.588394 | 0.653515 | 0.000991 | 0.001338 | 0.001098 |
| mul_vm_test.test | RUN | 0.280394 | 1.036340 | 1.007676 | 0.001190 | 0.001184 | 0.001093 |
| normalize_v_test.test | RUN | 0.208226 | 0.715777 | 0.666931 | 0.001338 | 0.001297 | 0.001046 |
| plus_eq_vv_test.test | RUN | 0.198961 | 0.537589 | 0.561299 | 0.001331 | 0.001418 | 0.001176 |
| plus_vv_test.test | RUN | 0.203781 | 0.584047 | 0.624337 | 0.001236 | 0.001302 | 0.001094 |
| scalar_cast_v_test.test | RUN | 0.185831 | 0.431081 | 0.548113 | 0.001150 | 0.001297 | 0.001078 |
| vec_index_test.test | RUN | 0.163850 | 0.441039 | 0.507500 | 0.000990 | 0.001224 | 0.001096 |
| vec_register_test.test | RUN | 0.109450 | 0.400947 | 0.364509 | 0.001133 | 0.001178 | 0.001086 |
| cmp_mm_test.test | RUN | 0.334599 | 1.291253 | 1.318942 | 0.001329 | 0.001282 | 0.001085 |
| determinant_test.test | RUN | 0.227424 | 0.658276 | 0.707344 | 0.001322 | 0.001492 | 0.001218 |
| div_eq_ms_test.test | RUN | 0.231454 | 0.605015 | 0.818350 | 0.001224 | 0.001282 | 0.001115 |
| div_ms_test.test | RUN | 0.275489 | 0.967795 | 0.985278 | 0.001073 | 0.001366 | 0.001090 |
| eq_mm_test.test | RUN | 0.319215 | 1.195744 | 1.286853 | 0.001167 | 0.001358 | 0.000941 |
| minus_m_test.test | RUN | 0.267839 | 0.956666 | 0.953062 | 0.001363 | 0.001390 | 0.001149 |
| minus_eq_mm_test.test | RUN | 0.258324 | 0.882921 | 0.894536 | 0.001146 | 0.001384 | 0.001114 |
| minus_mm_test.test | RUN | 0.286025 | 1.130628 | 1.038369 | 0.001069 | 0.001220 | 0.001124 |
| mul_eq_mm_test.test | RUN | 0.234267 | 0.819760 | 0.780614 | 0.001166 | 0.001253 | 0.001160 |
| mul_eq_ms_test.test | RUN | 0.226664 | 0.597821 | 0.813722 | 0.001144 | 0.001300 | 0.001116 |
| mul_mm_test.test | RUN | 0.345078 | 1.854274 | 1.311892 | 0.001199 | 0.001372 | 0.001079 |
| mul_ms_test.test | RUN | 0.280306 | 0.972838 | 1.016949 | 0.001184 | 0.001391 | 0.001209 |
| mul_sm_test.test | RUN | 0.283015 | 0.971533 | 1.016695 | 0.001156 | 0.001213 | 0.001134 |
| mul_mv_test.test | RUN | 0.283267 | 1.037905 | 1.014930 | 0.001270 | 0.001203 | 0.001122 |
| inverse_m_test.test | RUN | 0.394010 | 1.923367 | 1.436083 | 0.001211 | 0.001230 | 0.001167 |
| plus_eq_mm_test.test | RUN | 0.257738 | 0.888534 | 0.888847 | 0.001120 | 0.001368 | 0.001226 |
| plus_mm_test.test | RUN | 0.286544 | 1.125483 | 1.054422 | 0.001098 | 0.001419 | 0.001058 |
| scalar_cast_m_test.test | RUN | 0.212581 | 0.502355 | 0.655172 | 0.001215 | 0.001324 | 0.001132 |
| mat_index_test.test | RUN | 0.170669 | 0.474606 | 0.570625 | 0.001115 | 0.001439 | 0.001059 |
| cmp_qq_test.test | RUN | 0.187664 | 0.444837 | 0.535497 | 0.001151 | 0.001312 | 0.001042 |
| conjugate_test.test | RUN | 0.189405 | 0.459729 | 0.553219 | 0.001025 | 0.001523 | 0.001012 |
| normalize_q_test.test | RUN | 0.190153 | 0.512969 | 0.577287 | 0.001147 | 0.001271 | 0.001004 |
| div_eq_qs_test.test | RUN | 0.184845 | 0.434659 | 0.547013 | 0.001038 | 0.001339 | 0.001050 |
| div_qs_test.test | RUN | 0.188774 | 0.452324 | 0.562563 | 0.001237 | 0.001264 | 0.001043 |
| dot_qq_test.test | RUN | 0.193973 | 0.451237 | 0.563377 | 0.001149 | 0.001321 | 0.001078 |
| eq_qq_test.test | RUN | 0.191230 | 0.471878 | 0.568468 | 0.001093 | 0.001415 | 0.001050 |
| inverse_q_test.test | RUN | 0.227781 | 0.619375 | 0.709191 | 0.001082 | 0.001465 | 0.001069 |
| mag_q_test.test | RUN | 0.190056 | 0.465227 | 0.547117 | 0.001145 | 0.001269 | 0.001037 |
| mag_sqr_q_test.test | RUN | 0.190108 | 0.453829 | 0.546614 | 0.001149 | 0.001464 | 0.001015 |
| minus_q_test.test | RUN | 0.188084 | 0.465461 | 0.551497 | 0.001083 | 0.001304 | 0.001107 |
| minus_eq_qq_test.test | RUN | 0.184767 | 0.458406 | 0.551661 | 0.001064 | 0.001296 | 0.001081 |
| minus_qq_test.test | RUN | 0.188601 | 0.470404 | 0.562418 | 0.001143 | 0.001330 | 0.001057 |
| mul_eq_qs_test.test | RUN | 0.186125 | 0.436040 | 0.549620 | 0.001097 | 0.001506 | 0.001164 |
| mul_qs_test.test | RUN | 0.184762 | 0.458921 | 0.556237 | 0.001021 | 0.001446 | 0.001000 |
| mul_qv_test.test | RUN | 0.226916 | 0.626203 | 0.727721 | 0.001133 | 0.001400 | 0.001122 |
| mul_qq_test.test | RUN | 0.227745 | 0.630155 | 0.705794 | 0.001202 | 0.001350 | 0.001126 |
| mul_eq_qq_test.test | RUN | 0.228502 | 0.631197 | 0.700302 | 0.001161 | 0.001274 | 0.001095 |
| plus_eq_qq_test.test | RUN | 0.190654 | 0.460321 | 0.544051 | 0.001043 | 0.001540 | 0.001063 |
| plus_qq_test.test | RUN | 0.191625 | 0.468857 | 0.559223 | 0.001066 | 0.001492 | 0.001218 |
| scalar_cast_q_test.test | RUN | 0.180832 | 0.428827 | 0.544147 | 0.001123 | 0.001316 | 0.001122 |
| slerp_test.test | RUN | 0.204444 | 0.913988 | 0.670316 | 0.015111 | 0.012811 | 0.013189 |
| convert_to_test.test | RUN | 0.286549 | 0.824266 | 1.057766 | 0.001158 | 0.001285 | 0.001185 |
| rot_mat_test.test | RUN | 0.456693 | 3.811045 | 3.269252 | 0.029808 | 0.031450 | 0.033689 |
| rot_quat_test.test | RUN | 0.231939 | 0.757954 | 0.720052 | 0.001288 | 0.001396 | 0.001091 |
| rotx_mat_test.test | RUN | 0.263027 | 0.988916 | 0.968535 | 0.001126 | 0.001435 | 0.001211 |
| rotx_quat_test.test | RUN | 0.229528 | 0.638470 | 0.673789 | 0.001063 | 0.001373 | 0.001072 |
| roty_mat_test.test | RUN | 0.267244 | 0.990806 | 0.953447 | 0.001270 | 0.001551 | 0.001184 |
| roty_quat_test.test | RUN | 0.226488 | 0.630891 | 0.682149 | 0.001174 | 0.001335 | 0.001139 |
| rotz_mat_test.test | RUN | 0.288774 | 1.135243 | 0.951239 | 0.001221 | 0.001411 | 0.001112 |
| rotz_quat_test.test | RUN | 0.229925 | 0.639346 | 0.688509 | 0.001094 | 0.001338 | 0.001108 |
| zero_vec_test.test | RUN | 0.191788 | 0.542599 | 0.593922 | 0.001240 | 0.001349 | 0.001082 |
| zero_mat_test.test | RUN | 0.246545 | 0.910623 | 0.828466 | 0.001356 | 0.001223 | 0.001083 |
| zero_quat_test.test | RUN | 0.183302 | 0.452475 | 0.547542 | 0.001082 | 0.001411 | 0.001136 |
| identity_mat_test.test | RUN | 0.219742 | 0.681871 | 0.708147 | 0.001094 | 0.001158 | 0.001086 |
| identity_quat_test.test | RUN | 0.186540 | 0.445173 | 0.553972 | 0.001202 | 0.001468 | 0.000989 |
| col_test.test | RUN | 0.373111 | 1.430243 | 1.603052 | 0.001213 | 0.001305 | 0.001122 |
| col_mat_test.test | RUN | 0.235197 | 0.617005 | 0.763683 | 0.001153 | 0.001279 | 0.001220 |
| neg_col_test.test | RUN | 0.273345 | 0.876081 | 0.964351 | 0.001203 | 0.001486 | 0.001170 |
| neg_row_test.test | RUN | 0.287467 | 0.909810 | 0.951844 | 0.001098 | 0.001522 | 0.001128 |
| del_col_test.test | RUN | 0.297027 | 0.996255 | 1.003998 | 0.001290 | 0.001308 | 0.001126 |
| del_row_test.test | RUN | 0.298191 | 0.974158 | 1.003951 | 0.001143 | 0.001438 | 0.001109 |
| del_row_col_test.test | RUN | 0.408662 | 1.822501 | 1.822680 | 0.001284 | 0.001212 | 0.001152 |
| swap_cols_test.test | RUN | 0.560724 | 2.424773 | 2.256423 | 0.001235 | 0.001318 | 0.001118 |
| swap_rows_test.test | RUN | 0.620426 | 2.579414 | 2.233442 | 0.001239 | 0.001213 | 0.001138 |
| diag_test.test | RUN | 0.254722 | 0.663121 | 0.845801 | 0.001117 | 0.001284 | 0.001212 |
| diag_mat_test.test | RUN | 0.246952 | 0.651228 | 0.783907 | 0.001100 | 0.001272 | 0.001080 |
| row_test.test | RUN | 0.377575 | 1.407661 | 1.610929 | 0.001127 | 0.001419 | 0.001024 |
| row_mat_test.test | RUN | 0.230704 | 0.622240 | 0.717591 | 0.001158 | 0.001398 | 0.001184 |
| transpose_test.test | RUN | 0.282678 | 0.936280 | 1.011399 | 0.001094 | 0.001485 | 0.001244 |
| translation_test.test | RUN | 0.227783 | 0.593068 | 0.760691 | 0.001085 | 0.001304 | 0.001150 |
| translation_mat_test.test | RUN | 0.251561 | 0.605059 | 0.822620 | 0.001099 | 0.001206 | 0.001078 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.080476 | 0.175037 | 0.220638 | — | — | — |
| swizzle2_test2.test | RUN | 0.100997 | 0.256220 | 0.309387 | 0.001089 | 0.001280 | 0.001115 |
| swizzle2_test3.test | RUN | 0.097987 | 0.261325 | 0.305802 | 0.001035 | 0.001399 | 0.001051 |
| swizzle2_test4.test | RUN | 0.096532 | 0.260399 | 0.305634 | 0.001091 | 0.001247 | 0.000995 |
| swizzle2_test.test | RUN | 0.320540 | 0.711333 | 0.968903 | 0.001040 | 0.001126 | 0.001216 |
| swizzle3_test2.test | RUN | 0.109662 | 0.275140 | 0.345267 | 0.001137 | 0.001248 | 0.001047 |
| swizzle3_test3.test | RUN | 0.109660 | 0.274473 | 0.339110 | 0.001066 | 0.001395 | 0.001044 |
| swizzle3_test4.test | RUN | 0.109837 | 0.271437 | 0.334450 | 0.001012 | 0.001323 | 0.001123 |
| swizzle3_test.test | RUN | 0.313997 | 0.728229 | 0.971277 | 0.001060 | 0.001155 | 0.001132 |
| swizzle4_test2.test | RUN | 0.187333 | 0.384520 | 0.545606 | 0.001072 | 0.001545 | 0.001132 |
| swizzle4_test3.test | RUN | 0.185170 | 0.390403 | 0.539730 | 0.001063 | 0.001117 | 0.001187 |
| swizzle4_test4.test | RUN | 0.187232 | 0.400613 | 0.525154 | 0.001092 | 0.001202 | 0.001096 |
| swizzle4_test.test | RUN | 0.322678 | 0.800698 | 0.971199 | 0.001069 | 0.001319 | 0.001082 |
| deduce_scalar_test.test | COMPILE | 0.013968 | 0.039548 | 0.053714 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.119026 | 0.309886 | 0.363428 | 0.001161 | 0.001349 | 0.001015 |
| deduce_scalar_mv_test.test | RUN | 0.145715 | 0.343037 | 0.431898 | 0.001071 | 0.001270 | 0.001050 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.012660 | 0.024382 | 0.040763 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.013875 | 0.033782 | 0.046380 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.013280 | 0.032693 | 0.042976 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014078 | 0.031672 | 0.043753 | — | — | — |
| interop_test.test | RUN | 0.147265 | 0.450269 | 0.539971 | 0.000484 | 0.000577 | 0.000846 |
| transform_test.test | RUN | 0.287048 | 0.593094 | 0.873946 | 0.000867 | 0.000889 | 0.000859 |
| projection_test.test | RUN | 0.194565 | 0.522017 | 0.604511 | 0.000892 | 0.000898 | 0.000850 |
| scalar_traits_test.test | COMPILE | 0.014723 | 0.035161 | 0.046224 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.997× | 1.002× |
| clang | 1.036× | 1.038×, 1.033× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 7 | 0.000799s | 0.000794s | 0.000811s | byte equality observed |
| access_q_test.test | 10 | 0.000796s | 0.000785s | 0.000826s | byte equality observed |
| access_v_test.test | 10 | 0.000822s | 0.000811s | 0.000826s | byte equality observed |
| assign_test.test | 10 | 0.000834s | 0.000826s | 0.000838s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000823s | 0.000831s | 0.000818s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000837s | 0.000818s | 0.000786s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000825s | 0.000842s | 0.000829s | byte equality observed |
| col_mat_test.test | 10 | 0.000808s | 0.000788s | 0.000800s | byte equality observed |
| col_test.test | 10 | 0.000819s | 0.000787s | 0.000840s | byte equality observed |
| conjugate_test.test | 10 | 0.000833s | 0.000801s | 0.000823s | byte equality observed |
| convert_to_test.test | 10 | 0.000839s | 0.000824s | 0.000823s | byte equality observed |
| cross_test.test | 10 | 0.000817s | 0.000822s | 0.000805s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000816s | 0.000833s | 0.000801s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000843s | 0.000850s | 0.000789s | byte equality observed |
| del_col_test.test | 10 | 0.000816s | 0.000778s | 0.000808s | byte equality observed |
| del_row_col_test.test | 10 | 0.000842s | 0.000824s | 0.000844s | byte equality observed |
| del_row_test.test | 10 | 0.000840s | 0.000839s | 0.000834s | byte equality observed |
| determinant_test.test | 10 | 0.000855s | 0.000841s | 0.000839s | byte equality observed |
| diag_mat_test.test | 10 | 0.000825s | 0.000804s | 0.000830s | byte equality observed |
| diag_test.test | 10 | 0.000811s | 0.000811s | 0.000830s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000797s | 0.000811s | 0.000820s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000835s | 0.000815s | 0.000835s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000827s | 0.000827s | 0.000817s | byte equality observed |
| div_ms_test.test | 10 | 0.000818s | 0.000823s | 0.000807s | byte equality observed |
| div_qs_test.test | 10 | 0.000825s | 0.000816s | 0.000814s | byte equality observed |
| div_vs_test.test | 10 | 0.000791s | 0.000799s | 0.000842s | byte equality observed |
| dot_qq_test.test | 10 | 0.000815s | 0.000806s | 0.000820s | byte equality observed |
| dot_vv_test.test | 10 | 0.000821s | 0.000794s | 0.000831s | byte equality observed |
| eq_mm_test.test | 10 | 0.000849s | 0.000843s | 0.000830s | byte equality observed |
| eq_qq_test.test | 10 | 0.000851s | 0.000806s | 0.000837s | byte equality observed |
| eq_vv_test.test | 10 | 0.000837s | 0.000825s | 0.000799s | byte equality observed |
| identity_mat_test.test | 10 | 0.000816s | 0.000820s | 0.000791s | byte equality observed |
| identity_quat_test.test | 10 | 0.000838s | 0.000812s | 0.000809s | byte equality observed |
| interop_test.test | 10 | 0.000369s | 0.000358s | 0.000779s | byte equality observed |
| inverse_m_test.test | 10 | 0.000853s | 0.000836s | 0.000861s | byte equality observed |
| inverse_q_test.test | 10 | 0.000820s | 0.000784s | 0.000800s | byte equality observed |
| mag_q_test.test | 10 | 0.000835s | 0.000806s | 0.000804s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000814s | 0.000836s | 0.000839s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000808s | 0.000843s | 0.000796s | byte equality observed |
| mag_v_test.test | 10 | 0.000822s | 0.000822s | 0.000820s | byte equality observed |
| mat_index_test.test | 10 | 0.000830s | 0.000828s | 0.000823s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000836s | 0.000810s | 0.000817s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000802s | 0.000792s | 0.000818s | byte equality observed |
| math_test.test | 10 | 0.001212s | 0.001188s | 0.001038s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000808s | 0.000801s | 0.000812s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000809s | 0.000845s | 0.000823s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000822s | 0.000845s | 0.000834s | byte equality observed |
| minus_m_test.test | 10 | 0.000801s | 0.000810s | 0.000813s | byte equality observed |
| minus_mm_test.test | 10 | 0.000812s | 0.000805s | 0.000816s | byte equality observed |
| minus_q_test.test | 10 | 0.000828s | 0.000806s | 0.000822s | byte equality observed |
| minus_qq_test.test | 10 | 0.000802s | 0.000792s | 0.000839s | byte equality observed |
| minus_v_test.test | 10 | 0.000786s | 0.000801s | 0.000782s | byte equality observed |
| minus_vv_test.test | 10 | 0.000797s | 0.000803s | 0.000809s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000814s | 0.000794s | 0.000843s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000816s | 0.000819s | 0.000809s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000824s | 0.000789s | 0.000832s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000813s | 0.000795s | 0.000798s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000817s | 0.000845s | 0.000810s | byte equality observed |
| mul_mm_test.test | 10 | 0.000820s | 0.000834s | 0.000804s | byte equality observed |
| mul_ms_test.test | 10 | 0.000819s | 0.000800s | 0.000829s | byte equality observed |
| mul_mv_test.test | 10 | 0.000830s | 0.000819s | 0.000833s | byte equality observed |
| mul_qq_test.test | 10 | 0.000841s | 0.000837s | 0.000826s | byte equality observed |
| mul_qs_test.test | 10 | 0.000806s | 0.000809s | 0.000820s | byte equality observed |
| mul_qv_test.test | 10 | 0.000807s | 0.000820s | 0.000853s | byte equality observed |
| mul_sm_test.test | 10 | 0.000797s | 0.000813s | 0.000829s | byte equality observed |
| mul_sv_test.test | 10 | 0.000800s | 0.000838s | 0.000836s | byte equality observed |
| mul_vm_test.test | 10 | 0.000798s | 0.000840s | 0.000824s | byte equality observed |
| mul_vs_test.test | 10 | 0.000824s | 0.000812s | 0.000830s | byte equality observed |
| neg_col_test.test | 10 | 0.000839s | 0.000807s | 0.000827s | byte equality observed |
| neg_row_test.test | 10 | 0.000838s | 0.000858s | 0.000847s | byte equality observed |
| normalize_q_test.test | 10 | 0.000821s | 0.000823s | 0.000834s | byte equality observed |
| normalize_v_test.test | 10 | 0.000821s | 0.000828s | 0.000843s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000804s | 0.000801s | 0.000850s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000811s | 0.000813s | 0.000838s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000820s | 0.000823s | 0.000832s | byte equality observed |
| plus_mm_test.test | 10 | 0.000817s | 0.000780s | 0.000812s | byte equality observed |
| plus_qq_test.test | 10 | 0.000815s | 0.000800s | 0.000841s | byte equality observed |
| plus_vv_test.test | 10 | 0.000830s | 0.000805s | 0.000811s | byte equality observed |
| projection_test.test | 10 | 0.000824s | 0.000807s | 0.000793s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000817s | 0.000798s | 0.000804s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000780s | 0.000788s | 0.000804s | byte equality observed |
| rot_mat_test.test | 1 | 0.020087s | 0.021821s | 0.026223s | byte equality observed |
| rot_quat_test.test | 10 | 0.000754s | 0.000748s | 0.000775s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000762s | 0.000760s | 0.000764s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000829s | 0.000838s | 0.000849s | byte equality observed |
| roty_mat_test.test | 10 | 0.000850s | 0.000828s | 0.000852s | byte equality observed |
| roty_quat_test.test | 10 | 0.000852s | 0.000816s | 0.000807s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000859s | 0.000808s | 0.000836s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000849s | 0.000836s | 0.000817s | byte equality observed |
| row_mat_test.test | 10 | 0.000812s | 0.000821s | 0.000797s | byte equality observed |
| row_test.test | 10 | 0.000829s | 0.000827s | 0.000801s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000814s | 0.000849s | 0.000781s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000817s | 0.000822s | 0.000810s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000833s | 0.000798s | 0.000813s | byte equality observed |
| slerp_test.test | 2 | 0.010951s | 0.009253s | 0.009718s | byte equality observed |
| swap_cols_test.test | 10 | 0.000756s | 0.000756s | 0.000759s | byte equality observed |
| swap_rows_test.test | 10 | 0.000761s | 0.000763s | 0.000772s | byte equality observed |
| swizzle2_test.test | 10 | 0.000814s | 0.000812s | 0.000842s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000832s | 0.000822s | 0.000847s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000822s | 0.000820s | 0.000827s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000826s | 0.000799s | 0.000817s | byte equality observed |
| swizzle3_test.test | 10 | 0.000844s | 0.000812s | 0.000823s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000853s | 0.000812s | 0.000803s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000845s | 0.000826s | 0.000805s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000819s | 0.000829s | 0.000795s | byte equality observed |
| swizzle4_test.test | 10 | 0.000798s | 0.000798s | 0.000836s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000801s | 0.000810s | 0.000832s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000810s | 0.000790s | 0.000818s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000805s | 0.000793s | 0.000823s | byte equality observed |
| to_string_test.test | 10 | 0.000847s | 0.000828s | 0.000817s | byte equality observed |
| transform_test.test | 10 | 0.000819s | 0.000805s | 0.000798s | byte equality observed |
| translation_mat_test.test | 10 | 0.000817s | 0.000822s | 0.000805s | byte equality observed |
| translation_test.test | 10 | 0.000831s | 0.000800s | 0.000788s | byte equality observed |
| transpose_test.test | 10 | 0.000798s | 0.000796s | 0.000817s | byte equality observed |
| vec_index_test.test | 10 | 0.000817s | 0.000810s | 0.000816s | byte equality observed |
| vec_register_test.test | 10 | 0.000818s | 0.000804s | 0.000829s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000827s | 0.000816s | 0.000845s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000816s | 0.000802s | 0.000842s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000815s | 0.000834s | 0.000824s | byte equality observed |
| zero_mat_test.test | 10 | 0.000804s | 0.000813s | 0.000815s | byte equality observed |
| zero_quat_test.test | 10 | 0.000811s | 0.000811s | 0.000802s | byte equality observed |
| zero_vec_test.test | 10 | 0.000788s | 0.000819s | 0.000825s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
