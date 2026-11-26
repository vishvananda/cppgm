# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.189125 | 0.559130 | 0.591491 | 0.001613 | 0.001764 | 0.001440 |
| mat_traits_array_test.test | RUN | 0.150495 | 0.557012 | 0.457201 | 0.001242 | 0.001322 | 0.001170 |
| mat_traits_std_array_test.test | RUN | 0.150759 | 0.419495 | 0.453081 | 0.001370 | 0.001174 | 0.001234 |
| vec_traits_array_test.test | RUN | 0.129140 | 0.427278 | 0.381264 | 0.001125 | 0.000932 | 0.000965 |
| vec_traits_gnuc_test.test | RUN | 0.236360 | 0.505676 | 0.729680 | 0.001083 | 0.001190 | 0.001141 |
| vec_traits_std_array_test.test | RUN | 0.128018 | 0.328828 | 0.385086 | 0.001369 | 0.001374 | 0.001166 |
| quat_traits_array_test.test | RUN | 0.126862 | 0.448049 | 0.378540 | 0.000912 | 0.001328 | 0.001306 |
| quat_traits_std_array_test.test | RUN | 0.126554 | 0.336685 | 0.378965 | 0.001352 | 0.001217 | 0.001080 |
| access_m_test.test | RUN | 0.204915 | 0.799682 | 0.859463 | 0.001290 | 0.001175 | 0.001021 |
| access_m_fail1.test | COMPILE_FAIL | 0.019375 | 0.034223 | 0.055682 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.019287 | 0.034862 | 0.057721 | — | — | — |
| access_q_test.test | RUN | 0.170007 | 0.411880 | 0.506836 | 0.001265 | 0.001113 | 0.001134 |
| access_q_fail.test | COMPILE_FAIL | 0.013377 | 0.027656 | 0.045304 | — | — | — |
| access_v_test.test | RUN | 0.174640 | 0.420217 | 0.497747 | 0.001130 | 0.001205 | 0.001017 |
| access_v_fail1.test | COMPILE_FAIL | 0.013291 | 0.025118 | 0.039404 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013684 | 0.024978 | 0.040930 | — | — | — |
| assign_test.test | RUN | 0.259803 | 0.687908 | 0.929186 | 0.001602 | 0.001214 | 0.001109 |
| to_string_test.test | RUN | 0.311040 | 1.133871 | 5.480226 | 0.001163 | 0.001189 | 0.001162 |
| cmp_vv_test.test | RUN | 0.213566 | 0.545811 | 0.621372 | 0.001289 | 0.001275 | 0.001038 |
| cross_test.test | RUN | 0.204757 | 0.501340 | 0.616458 | 0.001200 | 0.001233 | 0.001009 |
| div_eq_vs_test.test | RUN | 0.196952 | 0.466762 | 0.600116 | 0.001381 | 0.001163 | 0.001255 |
| div_vs_test.test | RUN | 0.206261 | 0.576948 | 0.645695 | 0.001124 | 0.001228 | 0.000924 |
| dot_vv_test.test | RUN | 0.198647 | 0.517628 | 0.601851 | 0.000971 | 0.001214 | 0.001142 |
| eq_vv_test.test | RUN | 0.222379 | 0.580140 | 0.648538 | 0.001205 | 0.001207 | 0.001128 |
| mag_v_test.test | RUN | 0.198484 | 0.474548 | 0.580471 | 0.001386 | 0.001421 | 0.001129 |
| mag_sqr_v_test.test | RUN | 0.203030 | 0.467556 | 0.575452 | 0.001235 | 0.001224 | 0.001065 |
| minus_v_test.test | RUN | 0.206801 | 0.554041 | 0.632999 | 0.001194 | 0.001353 | 0.001153 |
| minus_eq_vv_test.test | RUN | 0.203841 | 0.528672 | 0.600457 | 0.001313 | 0.001232 | 0.001208 |
| minus_vv_test.test | RUN | 0.208448 | 0.578626 | 0.654418 | 0.001344 | 0.001255 | 0.001107 |
| mul_eq_vs_test.test | RUN | 0.200948 | 0.461113 | 0.608577 | 0.001232 | 0.001288 | 0.001293 |
| mul_vs_test.test | RUN | 0.208409 | 0.577598 | 0.635736 | 0.001106 | 0.001356 | 0.001136 |
| mul_sv_test.test | RUN | 0.209157 | 0.579464 | 0.655325 | 0.001133 | 0.001308 | 0.001161 |
| mul_vm_test.test | RUN | 0.287915 | 1.033037 | 1.012249 | 0.001086 | 0.001325 | 0.001185 |
| normalize_v_test.test | RUN | 0.212151 | 0.705855 | 0.669022 | 0.001194 | 0.001100 | 0.001189 |
| plus_eq_vv_test.test | RUN | 0.195610 | 0.536245 | 0.578203 | 0.001166 | 0.001238 | 0.001155 |
| plus_vv_test.test | RUN | 0.202961 | 0.573011 | 0.626095 | 0.001019 | 0.001311 | 0.001086 |
| scalar_cast_v_test.test | RUN | 0.194995 | 0.426068 | 0.546958 | 0.001087 | 0.001249 | 0.001168 |
| vec_index_test.test | RUN | 0.168285 | 0.441906 | 0.501132 | 0.001203 | 0.001338 | 0.001012 |
| vec_register_test.test | RUN | 0.107685 | 0.392225 | 0.362371 | 0.001122 | 0.001261 | 0.001093 |
| cmp_mm_test.test | RUN | 0.350383 | 1.274046 | 1.323858 | 0.001299 | 0.001319 | 0.001144 |
| determinant_test.test | RUN | 0.226854 | 0.651093 | 0.696396 | 0.001413 | 0.001311 | 0.001167 |
| div_eq_ms_test.test | RUN | 0.232644 | 0.586511 | 0.812383 | 0.001188 | 0.001266 | 0.001154 |
| div_ms_test.test | RUN | 0.275407 | 0.948797 | 0.976044 | 0.001109 | 0.001189 | 0.001122 |
| eq_mm_test.test | RUN | 0.328755 | 1.170948 | 1.271610 | 0.001172 | 0.001202 | 0.001113 |
| minus_m_test.test | RUN | 0.273319 | 0.936262 | 0.941347 | 0.001221 | 0.001236 | 0.001087 |
| minus_eq_mm_test.test | RUN | 0.266899 | 0.865067 | 0.879629 | 0.001223 | 0.001345 | 0.001142 |
| minus_mm_test.test | RUN | 0.290958 | 1.108846 | 1.019636 | 0.001202 | 0.001144 | 0.001074 |
| mul_eq_mm_test.test | RUN | 0.243764 | 0.800778 | 0.778205 | 0.001233 | 0.001202 | 0.001163 |
| mul_eq_ms_test.test | RUN | 0.240331 | 0.593164 | 0.802722 | 0.001208 | 0.001331 | 0.001062 |
| mul_mm_test.test | RUN | 0.339180 | 1.820567 | 1.304409 | 0.001321 | 0.001248 | 0.001053 |
| mul_ms_test.test | RUN | 0.281522 | 0.957752 | 1.010283 | 0.001201 | 0.001268 | 0.001090 |
| mul_sm_test.test | RUN | 0.280169 | 0.950827 | 1.004861 | 0.001215 | 0.001372 | 0.001195 |
| mul_mv_test.test | RUN | 0.289508 | 1.019788 | 1.000093 | 0.001133 | 0.001056 | 0.001228 |
| inverse_m_test.test | RUN | 0.385547 | 1.881612 | 1.430031 | 0.001323 | 0.001264 | 0.001209 |
| plus_eq_mm_test.test | RUN | 0.259923 | 0.868025 | 0.884757 | 0.001251 | 0.001204 | 0.001207 |
| plus_mm_test.test | RUN | 0.294803 | 1.095539 | 1.049048 | 0.001303 | 0.001250 | 0.001255 |
| scalar_cast_m_test.test | RUN | 0.219296 | 0.496410 | 0.647565 | 0.001141 | 0.001283 | 0.001095 |
| mat_index_test.test | RUN | 0.180490 | 0.470783 | 0.563895 | 0.001233 | 0.001250 | 0.001121 |
| cmp_qq_test.test | RUN | 0.190445 | 0.434589 | 0.546443 | 0.001286 | 0.001349 | 0.001355 |
| conjugate_test.test | RUN | 0.189868 | 0.452375 | 0.560789 | 0.001334 | 0.001327 | 0.001199 |
| normalize_q_test.test | RUN | 0.201206 | 0.500135 | 0.586006 | 0.001216 | 0.001204 | 0.001212 |
| div_eq_qs_test.test | RUN | 0.195227 | 0.423276 | 0.554919 | 0.001240 | 0.001031 | 0.001081 |
| div_qs_test.test | RUN | 0.199249 | 0.455138 | 0.567709 | 0.001238 | 0.001160 | 0.001192 |
| dot_qq_test.test | RUN | 0.190415 | 0.435545 | 0.571605 | 0.001474 | 0.001328 | 0.001101 |
| eq_qq_test.test | RUN | 0.194261 | 0.459438 | 0.575648 | 0.001292 | 0.001267 | 0.001152 |
| inverse_q_test.test | RUN | 0.233131 | 0.606421 | 0.711096 | 0.001195 | 0.001150 | 0.001136 |
| mag_q_test.test | RUN | 0.193441 | 0.449459 | 0.552954 | 0.001182 | 0.001330 | 0.001085 |
| mag_sqr_q_test.test | RUN | 0.193980 | 0.445322 | 0.557808 | 0.001415 | 0.001304 | 0.001169 |
| minus_q_test.test | RUN | 0.193135 | 0.452227 | 0.555558 | 0.001238 | 0.001324 | 0.001148 |
| minus_eq_qq_test.test | RUN | 0.190053 | 0.455369 | 0.557452 | 0.001208 | 0.001256 | 0.001145 |
| minus_qq_test.test | RUN | 0.191895 | 0.459307 | 0.562783 | 0.001191 | 0.001249 | 0.001226 |
| mul_eq_qs_test.test | RUN | 0.192725 | 0.420383 | 0.555976 | 0.001130 | 0.001255 | 0.001161 |
| mul_qs_test.test | RUN | 0.194729 | 0.449853 | 0.552228 | 0.001205 | 0.001290 | 0.001180 |
| mul_qv_test.test | RUN | 0.241265 | 0.614060 | 0.733500 | 0.001313 | 0.001506 | 0.001173 |
| mul_qq_test.test | RUN | 0.225878 | 0.625881 | 0.710840 | 0.001300 | 0.001181 | 0.001121 |
| mul_eq_qq_test.test | RUN | 0.232261 | 0.621192 | 0.696732 | 0.001275 | 0.001199 | 0.001056 |
| plus_eq_qq_test.test | RUN | 0.194352 | 0.452328 | 0.557608 | 0.001029 | 0.001282 | 0.001148 |
| plus_qq_test.test | RUN | 0.194635 | 0.460370 | 0.567942 | 0.001236 | 0.001182 | 0.001203 |
| scalar_cast_q_test.test | RUN | 0.188744 | 0.427520 | 0.556548 | 0.001210 | 0.001130 | 0.001084 |
| slerp_test.test | RUN | 0.209745 | 0.888866 | 0.668672 | 0.015332 | 0.012981 | 0.013137 |
| convert_to_test.test | RUN | 0.283253 | 0.812939 | 1.040611 | 0.001117 | 0.001151 | 0.001157 |
| rot_mat_test.test | RUN | 0.472145 | 3.702261 | 3.279684 | 0.033059 | 0.031185 | 0.033598 |
| rot_quat_test.test | RUN | 0.237845 | 0.750715 | 0.742691 | 0.001197 | 0.001184 | 0.001174 |
| rotx_mat_test.test | RUN | 0.264440 | 0.972580 | 0.970157 | 0.001103 | 0.001261 | 0.001331 |
| rotx_quat_test.test | RUN | 0.230645 | 0.625485 | 0.676764 | 0.001276 | 0.001248 | 0.001208 |
| roty_mat_test.test | RUN | 0.271636 | 0.959627 | 0.949848 | 0.001370 | 0.001189 | 0.001230 |
| roty_quat_test.test | RUN | 0.231422 | 0.618086 | 0.644710 | 0.001408 | 0.001245 | 0.001308 |
| rotz_mat_test.test | RUN | 0.284516 | 1.101910 | 1.021922 | 0.001094 | 0.001209 | 0.001198 |
| rotz_quat_test.test | RUN | 0.233517 | 0.611243 | 0.691092 | 0.001386 | 0.001325 | 0.001135 |
| zero_vec_test.test | RUN | 0.200783 | 0.532577 | 0.565720 | 0.001192 | 0.001366 | 0.001056 |
| zero_mat_test.test | RUN | 0.244255 | 0.888713 | 0.800526 | 0.001292 | 0.001080 | 0.001104 |
| zero_quat_test.test | RUN | 0.187091 | 0.441810 | 0.553631 | 0.001242 | 0.001182 | 0.001072 |
| identity_mat_test.test | RUN | 0.219822 | 0.652375 | 0.721988 | 0.001222 | 0.001166 | 0.001109 |
| identity_quat_test.test | RUN | 0.192739 | 0.433098 | 0.553106 | 0.001151 | 0.001403 | 0.001152 |
| col_test.test | RUN | 0.366709 | 1.392439 | 1.590556 | 0.001179 | 0.001226 | 0.001280 |
| col_mat_test.test | RUN | 0.239218 | 0.608699 | 0.741885 | 0.001210 | 0.001287 | 0.001161 |
| neg_col_test.test | RUN | 0.273024 | 0.868228 | 0.968701 | 0.001147 | 0.001214 | 0.001178 |
| neg_row_test.test | RUN | 0.276553 | 0.877619 | 0.960149 | 0.001170 | 0.001347 | 0.001111 |
| del_col_test.test | RUN | 0.285485 | 0.973977 | 0.997487 | 0.001199 | 0.001232 | 0.001233 |
| del_row_test.test | RUN | 0.286103 | 0.951009 | 1.007701 | 0.001270 | 0.001249 | 0.001276 |
| del_row_col_test.test | RUN | 0.404595 | 1.815736 | 1.851065 | 0.001320 | 0.001357 | 0.001220 |
| swap_cols_test.test | RUN | 0.503206 | 2.418201 | 2.279444 | 0.001367 | 0.001303 | 0.001286 |
| swap_rows_test.test | RUN | 0.572139 | 2.507180 | 2.235266 | 0.001491 | 0.001194 | 0.001096 |
| diag_test.test | RUN | 0.252986 | 0.651383 | 0.853231 | 0.001334 | 0.001202 | 0.001225 |
| diag_mat_test.test | RUN | 0.247976 | 0.631909 | 0.758813 | 0.001351 | 0.001208 | 0.001128 |
| row_test.test | RUN | 0.375963 | 1.384011 | 1.577670 | 0.001310 | 0.001244 | 0.001252 |
| row_mat_test.test | RUN | 0.240059 | 0.598168 | 0.750792 | 0.001388 | 0.001246 | 0.001216 |
| transpose_test.test | RUN | 0.294679 | 0.938634 | 1.017521 | 0.001395 | 0.001109 | 0.001077 |
| translation_test.test | RUN | 0.235806 | 0.584763 | 0.751607 | 0.001255 | 0.001196 | 0.001144 |
| translation_mat_test.test | RUN | 0.248820 | 0.592942 | 0.804750 | 0.001316 | 0.001069 | 0.001071 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.085177 | 0.167356 | 0.214041 | — | — | — |
| swizzle2_test2.test | RUN | 0.099292 | 0.254612 | 0.311597 | 0.001240 | 0.001336 | 0.001169 |
| swizzle2_test3.test | RUN | 0.099704 | 0.250747 | 0.305059 | 0.001100 | 0.001157 | 0.001103 |
| swizzle2_test4.test | RUN | 0.102973 | 0.257450 | 0.306409 | 0.001216 | 0.001229 | 0.001048 |
| swizzle2_test.test | RUN | 0.331237 | 0.694272 | 0.956112 | 0.001144 | 0.001288 | 0.001229 |
| swizzle3_test2.test | RUN | 0.114501 | 0.271969 | 0.334541 | 0.001393 | 0.001178 | 0.000992 |
| swizzle3_test3.test | RUN | 0.113192 | 0.276606 | 0.332697 | 0.001152 | 0.001136 | 0.001085 |
| swizzle3_test4.test | RUN | 0.115407 | 0.266218 | 0.340895 | 0.001136 | 0.001212 | 0.000990 |
| swizzle3_test.test | RUN | 0.317025 | 0.711654 | 0.966340 | 0.001174 | 0.001309 | 0.001098 |
| swizzle4_test2.test | RUN | 0.185675 | 0.382930 | 0.544524 | 0.001494 | 0.001270 | 0.001138 |
| swizzle4_test3.test | RUN | 0.188766 | 0.397481 | 0.531444 | 0.001292 | 0.001224 | 0.001147 |
| swizzle4_test4.test | RUN | 0.187779 | 0.384352 | 0.522148 | 0.001162 | 0.001245 | 0.001084 |
| swizzle4_test.test | RUN | 0.325600 | 0.757426 | 0.995194 | 0.001086 | 0.001246 | 0.001071 |
| deduce_scalar_test.test | COMPILE | 0.016679 | 0.038077 | 0.053483 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125670 | 0.298833 | 0.357743 | 0.001199 | 0.001158 | 0.001057 |
| deduce_scalar_mv_test.test | RUN | 0.144183 | 0.337352 | 0.441514 | 0.001251 | 0.001216 | 0.001198 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.013360 | 0.023974 | 0.041731 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014565 | 0.032178 | 0.047298 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015609 | 0.032097 | 0.045909 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015290 | 0.030855 | 0.045289 | — | — | — |
| interop_test.test | RUN | 0.152391 | 0.432667 | 0.624361 | 0.000371 | 0.000552 | 0.001106 |
| transform_test.test | RUN | 0.294795 | 0.578247 | 0.837524 | 0.000943 | 0.000869 | 0.000883 |
| projection_test.test | RUN | 0.176625 | 0.472270 | 0.489790 | 0.000915 | 0.000935 | 0.000780 |
| scalar_traits_test.test | COMPILE | 0.015314 | 0.033776 | 0.050110 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.988×, 0.983× | 1.001× |
| clang | 1.021× | 1.024×, 1.018× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000787s | 0.000800s | 0.000828s | byte equality observed |
| access_q_test.test | 10 | 0.000785s | 0.000811s | 0.000821s | byte equality observed |
| access_v_test.test | 10 | 0.000805s | 0.000798s | 0.000813s | byte equality observed |
| assign_test.test | 10 | 0.000796s | 0.000770s | 0.000816s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000819s | 0.000793s | 0.000838s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000801s | 0.000803s | 0.000834s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000805s | 0.000793s | 0.000822s | byte equality observed |
| col_mat_test.test | 10 | 0.000799s | 0.000777s | 0.000804s | byte equality observed |
| col_test.test | 10 | 0.000788s | 0.000794s | 0.000799s | byte equality observed |
| conjugate_test.test | 10 | 0.000806s | 0.000779s | 0.000793s | byte equality observed |
| convert_to_test.test | 10 | 0.000793s | 0.000779s | 0.000798s | byte equality observed |
| cross_test.test | 10 | 0.000799s | 0.000794s | 0.000804s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000800s | 0.000804s | 0.000803s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000788s | 0.000818s | 0.000820s | byte equality observed |
| del_col_test.test | 10 | 0.000789s | 0.000792s | 0.000833s | byte equality observed |
| del_row_col_test.test | 10 | 0.000803s | 0.000813s | 0.000819s | byte equality observed |
| del_row_test.test | 10 | 0.000804s | 0.000820s | 0.000828s | byte equality observed |
| determinant_test.test | 10 | 0.000806s | 0.000843s | 0.000821s | byte equality observed |
| diag_mat_test.test | 10 | 0.000791s | 0.000816s | 0.000798s | byte equality observed |
| diag_test.test | 10 | 0.000790s | 0.000806s | 0.000803s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000782s | 0.000824s | 0.000810s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000793s | 0.000802s | 0.000811s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000793s | 0.000835s | 0.000837s | byte equality observed |
| div_ms_test.test | 10 | 0.000775s | 0.000832s | 0.000841s | byte equality observed |
| div_qs_test.test | 10 | 0.000801s | 0.000815s | 0.000810s | byte equality observed |
| div_vs_test.test | 10 | 0.000800s | 0.000780s | 0.000817s | byte equality observed |
| dot_qq_test.test | 10 | 0.000811s | 0.000794s | 0.000796s | byte equality observed |
| dot_vv_test.test | 10 | 0.000812s | 0.000797s | 0.000797s | byte equality observed |
| eq_mm_test.test | 10 | 0.000805s | 0.000799s | 0.000796s | byte equality observed |
| eq_qq_test.test | 10 | 0.000801s | 0.000809s | 0.000802s | byte equality observed |
| eq_vv_test.test | 10 | 0.000799s | 0.000785s | 0.000821s | byte equality observed |
| identity_mat_test.test | 10 | 0.000804s | 0.000814s | 0.000836s | byte equality observed |
| identity_quat_test.test | 10 | 0.000788s | 0.000782s | 0.000782s | byte equality observed |
| interop_test.test | 10 | 0.000359s | 0.000361s | 0.000762s | byte equality observed |
| inverse_m_test.test | 10 | 0.000832s | 0.000862s | 0.000820s | byte equality observed |
| inverse_q_test.test | 10 | 0.000799s | 0.000814s | 0.000779s | byte equality observed |
| mag_q_test.test | 10 | 0.000795s | 0.000796s | 0.000808s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000788s | 0.000801s | 0.000799s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000801s | 0.000809s | 0.000796s | byte equality observed |
| mag_v_test.test | 10 | 0.000800s | 0.000817s | 0.000839s | byte equality observed |
| mat_index_test.test | 10 | 0.000820s | 0.000785s | 0.000800s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000816s | 0.000796s | 0.000816s | byte equality observed |
| mat_traits_std_array_test.test | 9 | 0.000785s | 0.000793s | 0.000773s | byte equality observed |
| math_test.test | 10 | 0.001182s | 0.001152s | 0.001063s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000794s | 0.000790s | 0.000774s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000817s | 0.000804s | 0.000815s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000839s | 0.000796s | 0.000822s | byte equality observed |
| minus_m_test.test | 10 | 0.000810s | 0.000814s | 0.000806s | byte equality observed |
| minus_mm_test.test | 10 | 0.000810s | 0.000815s | 0.000803s | byte equality observed |
| minus_q_test.test | 10 | 0.000810s | 0.000814s | 0.000797s | byte equality observed |
| minus_qq_test.test | 10 | 0.000796s | 0.000811s | 0.000801s | byte equality observed |
| minus_v_test.test | 10 | 0.000786s | 0.000800s | 0.000815s | byte equality observed |
| minus_vv_test.test | 10 | 0.000786s | 0.000786s | 0.000785s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000797s | 0.000805s | 0.000791s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000814s | 0.000801s | 0.000807s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000806s | 0.000798s | 0.000806s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000788s | 0.000797s | 0.000809s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000794s | 0.000778s | 0.000795s | byte equality observed |
| mul_mm_test.test | 10 | 0.000788s | 0.000789s | 0.000776s | byte equality observed |
| mul_ms_test.test | 10 | 0.000798s | 0.000834s | 0.000806s | byte equality observed |
| mul_mv_test.test | 10 | 0.000797s | 0.000799s | 0.000811s | byte equality observed |
| mul_qq_test.test | 10 | 0.000821s | 0.000803s | 0.000808s | byte equality observed |
| mul_qs_test.test | 10 | 0.000813s | 0.000776s | 0.000780s | byte equality observed |
| mul_qv_test.test | 10 | 0.000820s | 0.000774s | 0.000807s | byte equality observed |
| mul_sm_test.test | 10 | 0.000801s | 0.000784s | 0.000825s | byte equality observed |
| mul_sv_test.test | 10 | 0.000804s | 0.000782s | 0.000803s | byte equality observed |
| mul_vm_test.test | 10 | 0.000814s | 0.000798s | 0.000810s | byte equality observed |
| mul_vs_test.test | 10 | 0.000803s | 0.000789s | 0.000816s | byte equality observed |
| neg_col_test.test | 10 | 0.000791s | 0.000798s | 0.000822s | byte equality observed |
| neg_row_test.test | 10 | 0.000794s | 0.000813s | 0.000840s | byte equality observed |
| normalize_q_test.test | 10 | 0.000805s | 0.000835s | 0.000830s | byte equality observed |
| normalize_v_test.test | 10 | 0.000808s | 0.000815s | 0.000826s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000795s | 0.000779s | 0.000788s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000811s | 0.000792s | 0.000792s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000803s | 0.000803s | 0.000775s | byte equality observed |
| plus_mm_test.test | 10 | 0.000792s | 0.000787s | 0.000799s | byte equality observed |
| plus_qq_test.test | 10 | 0.000811s | 0.000784s | 0.000811s | byte equality observed |
| plus_vv_test.test | 10 | 0.000797s | 0.000796s | 0.000804s | byte equality observed |
| projection_test.test | 10 | 0.000795s | 0.000794s | 0.000834s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000821s | 0.000813s | 0.000831s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000802s | 0.000784s | 0.000775s | byte equality observed |
| rot_mat_test.test | 1 | 0.023064s | 0.021841s | 0.026589s | byte equality observed |
| rot_quat_test.test | 10 | 0.000744s | 0.000736s | 0.000740s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000742s | 0.000745s | 0.000727s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000805s | 0.000784s | 0.000806s | byte equality observed |
| roty_mat_test.test | 10 | 0.000838s | 0.000818s | 0.000833s | byte equality observed |
| roty_quat_test.test | 10 | 0.000802s | 0.000825s | 0.000793s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000815s | 0.000819s | 0.000822s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000821s | 0.000799s | 0.000836s | byte equality observed |
| row_mat_test.test | 10 | 0.000797s | 0.000774s | 0.000815s | byte equality observed |
| row_test.test | 10 | 0.000806s | 0.000783s | 0.000782s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000784s | 0.000799s | 0.000794s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000779s | 0.000774s | 0.000839s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000789s | 0.000797s | 0.000780s | byte equality observed |
| slerp_test.test | 2 | 0.010800s | 0.009562s | 0.009784s | byte equality observed |
| swap_cols_test.test | 10 | 0.000749s | 0.000718s | 0.000730s | byte equality observed |
| swap_rows_test.test | 10 | 0.000749s | 0.000716s | 0.000746s | byte equality observed |
| swizzle2_test.test | 10 | 0.000815s | 0.000824s | 0.000792s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000806s | 0.000810s | 0.000778s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000811s | 0.000810s | 0.000815s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000818s | 0.000829s | 0.000827s | byte equality observed |
| swizzle3_test.test | 10 | 0.000816s | 0.000796s | 0.000841s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000804s | 0.000815s | 0.000824s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000802s | 0.000828s | 0.000799s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000812s | 0.000806s | 0.000797s | byte equality observed |
| swizzle4_test.test | 10 | 0.000808s | 0.000818s | 0.000799s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000787s | 0.000796s | 0.000827s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000815s | 0.000807s | 0.000830s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000817s | 0.000802s | 0.000818s | byte equality observed |
| to_string_test.test | 10 | 0.000822s | 0.000830s | 0.000824s | byte equality observed |
| transform_test.test | 10 | 0.000802s | 0.000789s | 0.000766s | byte equality observed |
| translation_mat_test.test | 10 | 0.000794s | 0.000816s | 0.000786s | byte equality observed |
| translation_test.test | 10 | 0.000798s | 0.000821s | 0.000771s | byte equality observed |
| transpose_test.test | 10 | 0.000806s | 0.000787s | 0.000816s | byte equality observed |
| vec_index_test.test | 10 | 0.000791s | 0.000809s | 0.000834s | byte equality observed |
| vec_register_test.test | 10 | 0.000813s | 0.000790s | 0.000826s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000813s | 0.000804s | 0.000816s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000833s | 0.000832s | 0.000803s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000837s | 0.000823s | 0.000798s | byte equality observed |
| zero_mat_test.test | 10 | 0.000821s | 0.000806s | 0.000801s | byte equality observed |
| zero_quat_test.test | 10 | 0.000820s | 0.000811s | 0.000810s | byte equality observed |
| zero_vec_test.test | 10 | 0.000796s | 0.000799s | 0.000809s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
