# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.188218 | 0.561236 | 0.584365 | 0.001586 | 0.001605 | 0.001483 |
| mat_traits_array_test.test | RUN | 0.143396 | 0.568146 | 0.457894 | 0.001231 | 0.001107 | 0.001237 |
| mat_traits_std_array_test.test | RUN | 0.146647 | 0.423075 | 0.458397 | 0.001299 | 0.001246 | 0.001233 |
| vec_traits_array_test.test | RUN | 0.127334 | 0.415117 | 0.389687 | 0.001059 | 0.001084 | 0.001092 |
| vec_traits_gnuc_test.test | RUN | 0.228203 | 0.513782 | 0.749132 | 0.001040 | 0.001221 | 0.001131 |
| vec_traits_std_array_test.test | RUN | 0.125733 | 0.330121 | 0.382151 | 0.001323 | 0.001218 | 0.001169 |
| quat_traits_array_test.test | RUN | 0.124487 | 0.450623 | 0.389324 | 0.001160 | 0.001146 | 0.001158 |
| quat_traits_std_array_test.test | RUN | 0.122421 | 0.333939 | 0.377536 | 0.001175 | 0.001395 | 0.001142 |
| access_m_test.test | RUN | 0.207806 | 0.784084 | 0.866790 | 0.001332 | 0.001173 | 0.001250 |
| access_m_fail1.test | COMPILE_FAIL | 0.018905 | 0.034602 | 0.054963 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019703 | 0.031661 | 0.060420 | — | — | — |
| access_q_test.test | RUN | 0.164645 | 0.410181 | 0.509243 | 0.001088 | 0.001187 | 0.001196 |
| access_q_fail.test | COMPILE_FAIL | 0.014619 | 0.026061 | 0.047672 | — | — | — |
| access_v_test.test | RUN | 0.170403 | 0.415658 | 0.504317 | 0.001213 | 0.001309 | 0.001318 |
| access_v_fail1.test | COMPILE_FAIL | 0.013212 | 0.022203 | 0.041718 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014129 | 0.023900 | 0.043409 | — | — | — |
| assign_test.test | RUN | 0.270381 | 0.668447 | 0.943109 | 0.001495 | 0.001254 | 0.001144 |
| to_string_test.test | RUN | 0.314545 | 1.150174 | 5.502823 | 0.001103 | 0.001250 | 0.001162 |
| cmp_vv_test.test | RUN | 0.216190 | 0.543701 | 0.642770 | 0.001356 | 0.001228 | 0.000985 |
| cross_test.test | RUN | 0.209230 | 0.498987 | 0.636865 | 0.001151 | 0.001193 | 0.001064 |
| div_eq_vs_test.test | RUN | 0.193357 | 0.450412 | 0.608842 | 0.001148 | 0.001326 | 0.001108 |
| div_vs_test.test | RUN | 0.201273 | 0.568782 | 0.653872 | 0.001037 | 0.001331 | 0.001107 |
| dot_vv_test.test | RUN | 0.191809 | 0.500566 | 0.606805 | 0.001142 | 0.001264 | 0.001254 |
| eq_vv_test.test | RUN | 0.217075 | 0.566880 | 0.650614 | 0.000959 | 0.001343 | 0.001092 |
| mag_v_test.test | RUN | 0.186094 | 0.465003 | 0.579402 | 0.001437 | 0.001334 | 0.001220 |
| mag_sqr_v_test.test | RUN | 0.188835 | 0.468256 | 0.581369 | 0.001161 | 0.001215 | 0.001171 |
| minus_v_test.test | RUN | 0.196255 | 0.544773 | 0.633716 | 0.001118 | 0.001315 | 0.001258 |
| minus_eq_vv_test.test | RUN | 0.192225 | 0.525793 | 0.619532 | 0.000917 | 0.001419 | 0.001213 |
| minus_vv_test.test | RUN | 0.199377 | 0.577703 | 0.626301 | 0.001189 | 0.001100 | 0.001056 |
| mul_eq_vs_test.test | RUN | 0.188120 | 0.462154 | 0.592991 | 0.001218 | 0.001232 | 0.001305 |
| mul_vs_test.test | RUN | 0.198531 | 0.565806 | 0.663272 | 0.001149 | 0.001320 | 0.001129 |
| mul_sv_test.test | RUN | 0.209487 | 0.570969 | 0.663796 | 0.001033 | 0.001322 | 0.001149 |
| mul_vm_test.test | RUN | 0.278177 | 1.016787 | 1.015732 | 0.001131 | 0.001196 | 0.001137 |
| normalize_v_test.test | RUN | 0.204739 | 0.710083 | 0.623132 | 0.001356 | 0.001170 | 0.001193 |
| plus_eq_vv_test.test | RUN | 0.189072 | 0.527593 | 0.613425 | 0.001231 | 0.001222 | 0.001051 |
| plus_vv_test.test | RUN | 0.200647 | 0.574342 | 0.651071 | 0.001002 | 0.001320 | 0.001136 |
| scalar_cast_v_test.test | RUN | 0.180098 | 0.424003 | 0.548090 | 0.001176 | 0.001159 | 0.001167 |
| vec_index_test.test | RUN | 0.162879 | 0.434213 | 0.517055 | 0.001072 | 0.001197 | 0.001105 |
| vec_register_test.test | RUN | 0.105864 | 0.391634 | 0.370306 | 0.001245 | 0.001241 | 0.001115 |
| cmp_mm_test.test | RUN | 0.332157 | 1.283270 | 1.343541 | 0.001226 | 0.001340 | 0.001103 |
| determinant_test.test | RUN | 0.220315 | 0.644406 | 0.718151 | 0.001155 | 0.001442 | 0.001115 |
| div_eq_ms_test.test | RUN | 0.230827 | 0.597766 | 0.818379 | 0.001118 | 0.001211 | 0.001216 |
| div_ms_test.test | RUN | 0.268392 | 0.954515 | 0.988492 | 0.001097 | 0.001153 | 0.001163 |
| eq_mm_test.test | RUN | 0.316945 | 1.172150 | 1.275267 | 0.001230 | 0.001205 | 0.001191 |
| minus_m_test.test | RUN | 0.269664 | 0.927120 | 0.968704 | 0.001159 | 0.001198 | 0.001414 |
| minus_eq_mm_test.test | RUN | 0.250792 | 0.866829 | 0.909688 | 0.001160 | 0.001284 | 0.001157 |
| minus_mm_test.test | RUN | 0.287997 | 1.103169 | 1.063736 | 0.001137 | 0.001328 | 0.001275 |
| mul_eq_mm_test.test | RUN | 0.242361 | 0.812825 | 0.804605 | 0.001168 | 0.001028 | 0.001228 |
| mul_eq_ms_test.test | RUN | 0.237984 | 0.587096 | 0.819136 | 0.001085 | 0.001243 | 0.001183 |
| mul_mm_test.test | RUN | 0.335253 | 1.811789 | 1.315442 | 0.001110 | 0.001306 | 0.001101 |
| mul_ms_test.test | RUN | 0.282577 | 0.955556 | 1.027457 | 0.001077 | 0.001244 | 0.001154 |
| mul_sm_test.test | RUN | 0.279861 | 0.945149 | 1.025851 | 0.001147 | 0.001337 | 0.001326 |
| mul_mv_test.test | RUN | 0.280230 | 1.006609 | 1.034664 | 0.001101 | 0.001193 | 0.001168 |
| inverse_m_test.test | RUN | 0.388995 | 1.882952 | 1.459980 | 0.001210 | 0.001248 | 0.001211 |
| plus_eq_mm_test.test | RUN | 0.255711 | 0.873359 | 0.910833 | 0.001124 | 0.001209 | 0.001269 |
| plus_mm_test.test | RUN | 0.287207 | 1.101252 | 1.048988 | 0.001282 | 0.001186 | 0.001080 |
| scalar_cast_m_test.test | RUN | 0.209476 | 0.486916 | 0.662018 | 0.001055 | 0.001050 | 0.001094 |
| mat_index_test.test | RUN | 0.172092 | 0.474251 | 0.561111 | 0.001041 | 0.001182 | 0.001261 |
| cmp_qq_test.test | RUN | 0.189900 | 0.439603 | 0.542518 | 0.001087 | 0.001216 | 0.001067 |
| conjugate_test.test | RUN | 0.182416 | 0.446715 | 0.551277 | 0.001111 | 0.001303 | 0.001087 |
| normalize_q_test.test | RUN | 0.191678 | 0.499468 | 0.577224 | 0.001057 | 0.001327 | 0.001062 |
| div_eq_qs_test.test | RUN | 0.190411 | 0.427500 | 0.530370 | 0.001039 | 0.001156 | 0.001154 |
| div_qs_test.test | RUN | 0.190328 | 0.438499 | 0.549697 | 0.000999 | 0.001084 | 0.001195 |
| dot_qq_test.test | RUN | 0.191857 | 0.431249 | 0.574573 | 0.001058 | 0.001188 | 0.001103 |
| eq_qq_test.test | RUN | 0.185667 | 0.457044 | 0.568497 | 0.001022 | 0.001024 | 0.001077 |
| inverse_q_test.test | RUN | 0.225997 | 0.600157 | 0.716883 | 0.001057 | 0.001155 | 0.001321 |
| mag_q_test.test | RUN | 0.180399 | 0.448780 | 0.560751 | 0.001021 | 0.001126 | 0.001122 |
| mag_sqr_q_test.test | RUN | 0.176704 | 0.440185 | 0.560904 | 0.001039 | 0.001153 | 0.001063 |
| minus_q_test.test | RUN | 0.186170 | 0.447178 | 0.559211 | 0.001119 | 0.001191 | 0.001082 |
| minus_eq_qq_test.test | RUN | 0.185047 | 0.449751 | 0.565858 | 0.001230 | 0.001199 | 0.001094 |
| minus_qq_test.test | RUN | 0.185652 | 0.454253 | 0.570824 | 0.001099 | 0.001270 | 0.001079 |
| mul_eq_qs_test.test | RUN | 0.180340 | 0.426563 | 0.557244 | 0.001027 | 0.001166 | 0.001166 |
| mul_qs_test.test | RUN | 0.183915 | 0.448325 | 0.563081 | 0.001124 | 0.001220 | 0.001141 |
| mul_qv_test.test | RUN | 0.231187 | 0.609688 | 0.711664 | 0.001247 | 0.001264 | 0.001123 |
| mul_qq_test.test | RUN | 0.227277 | 0.621269 | 0.703869 | 0.001233 | 0.001310 | 0.001212 |
| mul_eq_qq_test.test | RUN | 0.226645 | 0.619505 | 0.701745 | 0.001129 | 0.001264 | 0.001059 |
| plus_eq_qq_test.test | RUN | 0.187259 | 0.447964 | 0.556968 | 0.001112 | 0.001301 | 0.001142 |
| plus_qq_test.test | RUN | 0.190127 | 0.448534 | 0.563336 | 0.001290 | 0.001159 | 0.001142 |
| scalar_cast_q_test.test | RUN | 0.187464 | 0.428050 | 0.548071 | 0.001130 | 0.001127 | 0.001086 |
| slerp_test.test | RUN | 0.210322 | 0.890737 | 0.666770 | 0.014898 | 0.012583 | 0.013278 |
| convert_to_test.test | RUN | 0.280033 | 0.800136 | 1.053982 | 0.001183 | 0.001216 | 0.001124 |
| rot_mat_test.test | RUN | 0.461538 | 3.706256 | 3.285679 | 0.028989 | 0.032489 | 0.033988 |
| rot_quat_test.test | RUN | 0.238944 | 0.739798 | 0.717618 | 0.001263 | 0.001177 | 0.001164 |
| rotx_mat_test.test | RUN | 0.267069 | 0.976943 | 0.960888 | 0.001269 | 0.001215 | 0.001301 |
| rotx_quat_test.test | RUN | 0.227391 | 0.622281 | 0.670091 | 0.001142 | 0.001318 | 0.001094 |
| roty_mat_test.test | RUN | 0.270721 | 0.960917 | 0.951429 | 0.001319 | 0.001264 | 0.001236 |
| roty_quat_test.test | RUN | 0.224200 | 0.621107 | 0.676546 | 0.001192 | 0.001230 | 0.001187 |
| rotz_mat_test.test | RUN | 0.279374 | 1.071172 | 0.949017 | 0.001112 | 0.001141 | 0.001127 |
| rotz_quat_test.test | RUN | 0.227301 | 0.625638 | 0.686633 | 0.001094 | 0.001299 | 0.001257 |
| zero_vec_test.test | RUN | 0.197777 | 0.537604 | 0.592689 | 0.001239 | 0.001113 | 0.001127 |
| zero_mat_test.test | RUN | 0.239892 | 0.874142 | 0.801304 | 0.001084 | 0.001115 | 0.001141 |
| zero_quat_test.test | RUN | 0.186151 | 0.441363 | 0.544804 | 0.001159 | 0.001211 | 0.001093 |
| identity_mat_test.test | RUN | 0.218910 | 0.645031 | 0.714559 | 0.001096 | 0.001302 | 0.001132 |
| identity_quat_test.test | RUN | 0.184375 | 0.429396 | 0.551119 | 0.001155 | 0.001195 | 0.001090 |
| col_test.test | RUN | 0.369967 | 1.386510 | 1.578917 | 0.001127 | 0.001196 | 0.001320 |
| col_mat_test.test | RUN | 0.228111 | 0.617136 | 0.747246 | 0.001216 | 0.001244 | 0.001129 |
| neg_col_test.test | RUN | 0.277537 | 0.857681 | 0.966616 | 0.001024 | 0.001211 | 0.001223 |
| neg_row_test.test | RUN | 0.284761 | 0.895832 | 0.963514 | 0.001127 | 0.001269 | 0.001179 |
| del_col_test.test | RUN | 0.294951 | 0.961956 | 1.015719 | 0.001232 | 0.001335 | 0.001154 |
| del_row_test.test | RUN | 0.290538 | 0.948171 | 1.010475 | 0.001174 | 0.001530 | 0.001165 |
| del_row_col_test.test | RUN | 0.398722 | 1.817344 | 1.835192 | 0.001116 | 0.001247 | 0.001077 |
| swap_cols_test.test | RUN | 0.547083 | 2.402839 | 2.250937 | 0.001172 | 0.001250 | 0.001133 |
| swap_rows_test.test | RUN | 0.618325 | 2.509224 | 2.271430 | 0.001209 | 0.001192 | 0.001025 |
| diag_test.test | RUN | 0.246152 | 0.647588 | 0.872384 | 0.001163 | 0.001337 | 0.001135 |
| diag_mat_test.test | RUN | 0.246499 | 0.625650 | 0.745696 | 0.001292 | 0.001308 | 0.001174 |
| row_test.test | RUN | 0.368144 | 1.355624 | 1.586741 | 0.001146 | 0.001332 | 0.001174 |
| row_mat_test.test | RUN | 0.232661 | 0.602854 | 0.733003 | 0.001243 | 0.001166 | 0.001191 |
| transpose_test.test | RUN | 0.276227 | 0.936310 | 1.017862 | 0.001137 | 0.001288 | 0.001153 |
| translation_test.test | RUN | 0.230423 | 0.580817 | 0.750093 | 0.001133 | 0.001330 | 0.001223 |
| translation_mat_test.test | RUN | 0.246043 | 0.585715 | 0.822134 | 0.001173 | 0.001172 | 0.001139 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.078874 | 0.165841 | 0.217008 | — | — | — |
| swizzle2_test2.test | RUN | 0.097477 | 0.252909 | 0.316203 | 0.001096 | 0.001316 | 0.001266 |
| swizzle2_test3.test | RUN | 0.100850 | 0.252569 | 0.313406 | 0.001052 | 0.001143 | 0.001168 |
| swizzle2_test4.test | RUN | 0.099495 | 0.256474 | 0.311913 | 0.001010 | 0.001337 | 0.001096 |
| swizzle2_test.test | RUN | 0.317317 | 0.697003 | 0.967489 | 0.001066 | 0.001213 | 0.001181 |
| swizzle3_test2.test | RUN | 0.109419 | 0.272441 | 0.335830 | 0.001191 | 0.001320 | 0.001266 |
| swizzle3_test3.test | RUN | 0.110152 | 0.277027 | 0.338970 | 0.001214 | 0.001154 | 0.001078 |
| swizzle3_test4.test | RUN | 0.109607 | 0.272068 | 0.337474 | 0.001121 | 0.001221 | 0.001069 |
| swizzle3_test.test | RUN | 0.306869 | 0.698865 | 0.967403 | 0.001077 | 0.001155 | 0.001232 |
| swizzle4_test2.test | RUN | 0.183310 | 0.381006 | 0.541403 | 0.001257 | 0.001211 | 0.001191 |
| swizzle4_test3.test | RUN | 0.185451 | 0.395847 | 0.548101 | 0.001176 | 0.001340 | 0.001045 |
| swizzle4_test4.test | RUN | 0.188688 | 0.381789 | 0.531806 | 0.001017 | 0.001137 | 0.001108 |
| swizzle4_test.test | RUN | 0.331117 | 0.769641 | 1.025926 | 0.001127 | 0.001222 | 0.001160 |
| deduce_scalar_test.test | COMPILE | 0.016644 | 0.036108 | 0.050514 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.118114 | 0.291404 | 0.358029 | 0.001065 | 0.001230 | 0.001194 |
| deduce_scalar_mv_test.test | RUN | 0.145115 | 0.334505 | 0.441087 | 0.001049 | 0.001181 | 0.001099 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.012743 | 0.023832 | 0.041654 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.013736 | 0.032802 | 0.043211 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.013775 | 0.032097 | 0.046954 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.013158 | 0.031989 | 0.046095 | — | — | — |
| interop_test.test | RUN | 0.152593 | 0.429767 | 0.572398 | 0.000512 | 0.000491 | 0.000792 |
| transform_test.test | RUN | 0.281134 | 0.584010 | 0.876293 | 0.000876 | 0.000854 | 0.000907 |
| projection_test.test | RUN | 0.200863 | 0.489252 | 0.604402 | 0.000910 | 0.000838 | 0.000906 |
| scalar_traits_test.test | COMPILE | 0.014675 | 0.033390 | 0.049286 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.007×, 0.995× | 1.009× |
| clang | 1.047× | 1.045×, 1.048× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000814s | 0.000813s | 0.000828s | byte equality observed |
| access_q_test.test | 10 | 0.000796s | 0.000803s | 0.000820s | byte equality observed |
| access_v_test.test | 10 | 0.000803s | 0.000792s | 0.000836s | byte equality observed |
| assign_test.test | 10 | 0.000817s | 0.000806s | 0.000818s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000803s | 0.000807s | 0.000820s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000802s | 0.000815s | 0.000795s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000815s | 0.000789s | 0.000817s | byte equality observed |
| col_mat_test.test | 10 | 0.000807s | 0.000791s | 0.000804s | byte equality observed |
| col_test.test | 10 | 0.000791s | 0.000813s | 0.000826s | byte equality observed |
| conjugate_test.test | 10 | 0.000814s | 0.000829s | 0.000821s | byte equality observed |
| convert_to_test.test | 10 | 0.000809s | 0.000814s | 0.000839s | byte equality observed |
| cross_test.test | 10 | 0.000813s | 0.000826s | 0.000809s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000814s | 0.000830s | 0.000810s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000828s | 0.000801s | 0.000790s | byte equality observed |
| del_col_test.test | 10 | 0.000775s | 0.000815s | 0.000811s | byte equality observed |
| del_row_col_test.test | 10 | 0.000794s | 0.000824s | 0.000808s | byte equality observed |
| del_row_test.test | 10 | 0.000793s | 0.000804s | 0.000815s | byte equality observed |
| determinant_test.test | 10 | 0.000814s | 0.000827s | 0.000841s | byte equality observed |
| diag_mat_test.test | 10 | 0.000797s | 0.000814s | 0.000829s | byte equality observed |
| diag_test.test | 10 | 0.000782s | 0.000848s | 0.000828s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000806s | 0.000814s | 0.000782s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000814s | 0.000808s | 0.000801s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000810s | 0.000793s | 0.000820s | byte equality observed |
| div_ms_test.test | 10 | 0.000811s | 0.000802s | 0.000815s | byte equality observed |
| div_qs_test.test | 10 | 0.000801s | 0.000800s | 0.000794s | byte equality observed |
| div_vs_test.test | 10 | 0.000799s | 0.000795s | 0.000790s | byte equality observed |
| dot_qq_test.test | 10 | 0.000793s | 0.000795s | 0.000807s | byte equality observed |
| dot_vv_test.test | 10 | 0.000809s | 0.000789s | 0.000787s | byte equality observed |
| eq_mm_test.test | 10 | 0.000843s | 0.000791s | 0.000821s | byte equality observed |
| eq_qq_test.test | 10 | 0.000809s | 0.000804s | 0.000806s | byte equality observed |
| eq_vv_test.test | 10 | 0.000800s | 0.000799s | 0.000816s | byte equality observed |
| identity_mat_test.test | 10 | 0.000798s | 0.000816s | 0.000828s | byte equality observed |
| identity_quat_test.test | 10 | 0.000790s | 0.000801s | 0.000807s | byte equality observed |
| interop_test.test | 10 | 0.000362s | 0.000368s | 0.000774s | byte equality observed |
| inverse_m_test.test | 10 | 0.000830s | 0.000845s | 0.000847s | byte equality observed |
| inverse_q_test.test | 10 | 0.000799s | 0.000773s | 0.000830s | byte equality observed |
| mag_q_test.test | 10 | 0.000799s | 0.000801s | 0.000817s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000792s | 0.000800s | 0.000814s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000796s | 0.000795s | 0.000824s | byte equality observed |
| mag_v_test.test | 10 | 0.000808s | 0.000800s | 0.000798s | byte equality observed |
| mat_index_test.test | 10 | 0.000820s | 0.000800s | 0.000795s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000822s | 0.000828s | 0.000788s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000797s | 0.000785s | 0.000816s | byte equality observed |
| math_test.test | 10 | 0.001197s | 0.001175s | 0.001042s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000796s | 0.000796s | 0.000827s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000786s | 0.000813s | 0.000790s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000793s | 0.000832s | 0.000797s | byte equality observed |
| minus_m_test.test | 10 | 0.000792s | 0.000783s | 0.000797s | byte equality observed |
| minus_mm_test.test | 10 | 0.000802s | 0.000804s | 0.000806s | byte equality observed |
| minus_q_test.test | 10 | 0.000801s | 0.000802s | 0.000785s | byte equality observed |
| minus_qq_test.test | 10 | 0.000813s | 0.000767s | 0.000804s | byte equality observed |
| minus_v_test.test | 10 | 0.000791s | 0.000806s | 0.000809s | byte equality observed |
| minus_vv_test.test | 10 | 0.000788s | 0.000814s | 0.000803s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000788s | 0.000820s | 0.000818s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000798s | 0.000815s | 0.000803s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000818s | 0.000809s | 0.000821s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000793s | 0.000808s | 0.000792s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000786s | 0.000796s | 0.000803s | byte equality observed |
| mul_mm_test.test | 10 | 0.000798s | 0.000792s | 0.000821s | byte equality observed |
| mul_ms_test.test | 10 | 0.000801s | 0.000813s | 0.000812s | byte equality observed |
| mul_mv_test.test | 10 | 0.000788s | 0.000776s | 0.000799s | byte equality observed |
| mul_qq_test.test | 10 | 0.000804s | 0.000801s | 0.000825s | byte equality observed |
| mul_qs_test.test | 10 | 0.000810s | 0.000775s | 0.000793s | byte equality observed |
| mul_qv_test.test | 10 | 0.000827s | 0.000804s | 0.000808s | byte equality observed |
| mul_sm_test.test | 10 | 0.000824s | 0.000789s | 0.000792s | byte equality observed |
| mul_sv_test.test | 10 | 0.000794s | 0.000791s | 0.000806s | byte equality observed |
| mul_vm_test.test | 10 | 0.000806s | 0.000780s | 0.000790s | byte equality observed |
| mul_vs_test.test | 10 | 0.000817s | 0.000802s | 0.000789s | byte equality observed |
| neg_col_test.test | 10 | 0.000818s | 0.000791s | 0.000813s | byte equality observed |
| neg_row_test.test | 10 | 0.000818s | 0.000799s | 0.000833s | byte equality observed |
| normalize_q_test.test | 10 | 0.000811s | 0.000799s | 0.000813s | byte equality observed |
| normalize_v_test.test | 10 | 0.000829s | 0.000829s | 0.000789s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000792s | 0.000835s | 0.000789s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000795s | 0.000818s | 0.000820s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000796s | 0.000805s | 0.000796s | byte equality observed |
| plus_mm_test.test | 10 | 0.000800s | 0.000822s | 0.000836s | byte equality observed |
| plus_qq_test.test | 10 | 0.000778s | 0.000803s | 0.000811s | byte equality observed |
| plus_vv_test.test | 10 | 0.000813s | 0.000802s | 0.000829s | byte equality observed |
| projection_test.test | 10 | 0.000805s | 0.000801s | 0.000816s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000810s | 0.000787s | 0.000791s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000768s | 0.000777s | 0.000774s | byte equality observed |
| rot_mat_test.test | 1 | 0.020276s | 0.022295s | 0.026582s | byte equality observed |
| rot_quat_test.test | 10 | 0.000726s | 0.000741s | 0.000748s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000758s | 0.000778s | 0.000737s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000825s | 0.000813s | 0.000817s | byte equality observed |
| roty_mat_test.test | 10 | 0.000827s | 0.000804s | 0.000848s | byte equality observed |
| roty_quat_test.test | 10 | 0.000818s | 0.000817s | 0.000822s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000820s | 0.000819s | 0.000832s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000830s | 0.000811s | 0.000831s | byte equality observed |
| row_mat_test.test | 10 | 0.000805s | 0.000831s | 0.000796s | byte equality observed |
| row_test.test | 10 | 0.000809s | 0.000847s | 0.000818s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000798s | 0.000815s | 0.000820s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000804s | 0.000805s | 0.000791s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000775s | 0.000801s | 0.000796s | byte equality observed |
| slerp_test.test | 2 | 0.011171s | 0.009247s | 0.009924s | byte equality observed |
| swap_cols_test.test | 10 | 0.000719s | 0.000742s | 0.000743s | byte equality observed |
| swap_rows_test.test | 10 | 0.000733s | 0.000763s | 0.000731s | byte equality observed |
| swizzle2_test.test | 10 | 0.000766s | 0.000822s | 0.000799s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000788s | 0.000795s | 0.000797s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000791s | 0.000823s | 0.000807s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000801s | 0.000828s | 0.000812s | byte equality observed |
| swizzle3_test.test | 10 | 0.000810s | 0.000788s | 0.000824s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000813s | 0.000794s | 0.000781s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000792s | 0.000794s | 0.000796s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000795s | 0.000778s | 0.000789s | byte equality observed |
| swizzle4_test.test | 10 | 0.000794s | 0.000788s | 0.000812s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000830s | 0.000814s | 0.000797s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000826s | 0.000815s | 0.000832s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000781s | 0.000826s | 0.000804s | byte equality observed |
| to_string_test.test | 10 | 0.000825s | 0.000855s | 0.000828s | byte equality observed |
| transform_test.test | 10 | 0.000817s | 0.000821s | 0.000797s | byte equality observed |
| translation_mat_test.test | 10 | 0.000799s | 0.000798s | 0.000815s | byte equality observed |
| translation_test.test | 10 | 0.000788s | 0.000793s | 0.000822s | byte equality observed |
| transpose_test.test | 10 | 0.000807s | 0.000792s | 0.000808s | byte equality observed |
| vec_index_test.test | 10 | 0.000817s | 0.000794s | 0.000825s | byte equality observed |
| vec_register_test.test | 10 | 0.000801s | 0.000774s | 0.000797s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000798s | 0.000790s | 0.000805s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000801s | 0.000775s | 0.000791s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000807s | 0.000795s | 0.000804s | byte equality observed |
| zero_mat_test.test | 10 | 0.000807s | 0.000839s | 0.000830s | byte equality observed |
| zero_quat_test.test | 10 | 0.000823s | 0.000820s | 0.000815s | byte equality observed |
| zero_vec_test.test | 10 | 0.000780s | 0.000807s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
