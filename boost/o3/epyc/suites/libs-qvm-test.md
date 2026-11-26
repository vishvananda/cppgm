# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.206586 | 0.543018 | 0.506459 | 0.001837 | 0.002050 | 0.001914 |
| mat_traits_array_test.test | RUN | 0.157326 | 0.532780 | 0.396610 | 0.001694 | 0.001434 | 0.001016 |
| mat_traits_std_array_test.test | RUN | 0.157492 | 0.409185 | 0.405900 | 0.001482 | 0.001653 | 0.001266 |
| vec_traits_array_test.test | RUN | 0.142733 | 0.420303 | 0.342846 | 0.001530 | 0.001783 | 0.001344 |
| vec_traits_gnuc_test.test | RUN | 0.249646 | 0.514231 | 0.636705 | 0.001434 | 0.001518 | 0.001526 |
| vec_traits_std_array_test.test | RUN | 0.138930 | 0.332891 | 0.341980 | 0.001992 | 0.001798 | 0.001529 |
| quat_traits_array_test.test | RUN | 0.138808 | 0.448828 | 0.336382 | 0.001410 | 0.001638 | 0.001321 |
| quat_traits_std_array_test.test | RUN | 0.136242 | 0.341021 | 0.337488 | 0.001439 | 0.001683 | 0.001532 |
| access_m_test.test | RUN | 0.219511 | 0.840298 | 0.768551 | 0.001642 | 0.001747 | 0.001286 |
| access_m_fail1.test | COMPILE_FAIL | 0.021614 | 0.037037 | 0.053424 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.021574 | 0.036684 | 0.052606 | — | — | — |
| access_q_test.test | RUN | 0.186056 | 0.474449 | 0.451412 | 0.001616 | 0.001774 | 0.001662 |
| access_q_fail.test | COMPILE_FAIL | 0.017327 | 0.028934 | 0.049212 | — | — | — |
| access_v_test.test | RUN | 0.190180 | 0.486767 | 0.450749 | 0.001536 | 0.001502 | 0.001373 |
| access_v_fail1.test | COMPILE_FAIL | 0.015886 | 0.028109 | 0.041787 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017046 | 0.038350 | 0.041338 | — | — | — |
| assign_test.test | RUN | 0.276322 | 0.654748 | 0.788843 | 0.001790 | 0.001892 | 0.001477 |
| to_string_test.test | RUN | 0.318195 | 1.063629 | 4.813903 | 0.001612 | 0.001561 | 0.001549 |
| cmp_vv_test.test | RUN | 0.228834 | 0.518620 | 0.546911 | 0.001595 | 0.001709 | 0.001471 |
| cross_test.test | RUN | 0.233876 | 0.480217 | 0.537613 | 0.001440 | 0.001723 | 0.002718 |
| div_eq_vs_test.test | RUN | 0.211073 | 0.447764 | 0.555015 | 0.001816 | 0.001708 | 0.001546 |
| div_vs_test.test | RUN | 0.227009 | 0.557665 | 0.584751 | 0.001310 | 0.001694 | 0.001430 |
| dot_vv_test.test | RUN | 0.213601 | 0.502069 | 0.524190 | 0.001560 | 0.001549 | 0.001503 |
| eq_vv_test.test | RUN | 0.233147 | 0.545963 | 0.606266 | 0.001482 | 0.001708 | 0.001531 |
| mag_v_test.test | RUN | 0.203649 | 0.453760 | 0.492952 | 0.001781 | 0.001792 | 0.001288 |
| mag_sqr_v_test.test | RUN | 0.202815 | 0.443663 | 0.529304 | 0.001106 | 0.003727 | 0.001278 |
| minus_v_test.test | RUN | 0.208286 | 0.555052 | 0.545782 | 0.001399 | 0.001887 | 0.001348 |
| minus_eq_vv_test.test | RUN | 0.209350 | 0.580931 | 0.516586 | 0.001132 | 0.001776 | 0.001592 |
| minus_vv_test.test | RUN | 0.222508 | 0.630867 | 0.571260 | 0.001673 | 0.001722 | 0.001650 |
| mul_eq_vs_test.test | RUN | 0.204135 | 0.459733 | 0.527844 | 0.001530 | 0.001839 | 0.001650 |
| mul_vs_test.test | RUN | 0.213201 | 0.570762 | 0.549076 | 0.001415 | 0.001884 | 0.001328 |
| mul_sv_test.test | RUN | 0.221820 | 0.569904 | 0.576403 | 0.001451 | 0.001760 | 0.001702 |
| mul_vm_test.test | RUN | 0.293204 | 1.007642 | 0.894190 | 0.001387 | 0.002050 | 0.001498 |
| normalize_v_test.test | RUN | 0.217116 | 0.686823 | 0.558453 | 0.001369 | 0.001669 | 0.001567 |
| plus_eq_vv_test.test | RUN | 0.203907 | 0.513183 | 0.545926 | 0.001714 | 0.003448 | 0.001538 |
| plus_vv_test.test | RUN | 0.216542 | 0.625958 | 0.562485 | 0.001369 | 0.001890 | 0.001520 |
| scalar_cast_v_test.test | RUN | 0.250900 | 0.452059 | 0.489176 | 0.001508 | 0.001737 | 0.001505 |
| vec_index_test.test | RUN | 0.223805 | 0.423678 | 0.441261 | 0.001498 | 0.001944 | 0.001354 |
| vec_register_test.test | RUN | 0.158525 | 0.376042 | 0.325267 | 0.001755 | 0.001845 | 0.001370 |
| cmp_mm_test.test | RUN | 0.390055 | 1.257616 | 1.109319 | 0.001873 | 0.001735 | 0.001686 |
| determinant_test.test | RUN | 0.249162 | 0.681309 | 0.599737 | 0.001567 | 0.002020 | 0.001521 |
| div_eq_ms_test.test | RUN | 0.252418 | 0.668404 | 0.693829 | 0.001517 | 0.001594 | 0.001532 |
| div_ms_test.test | RUN | 0.286687 | 0.990188 | 0.828057 | 0.001670 | 0.001909 | 0.001644 |
| eq_mm_test.test | RUN | 0.341463 | 1.111469 | 1.091600 | 0.001909 | 0.001844 | 0.001620 |
| minus_m_test.test | RUN | 0.285259 | 0.894121 | 0.831213 | 0.001660 | 0.001694 | 0.001498 |
| minus_eq_mm_test.test | RUN | 0.276855 | 0.847680 | 0.779992 | 0.001452 | 0.001872 | 0.001312 |
| minus_mm_test.test | RUN | 0.310077 | 1.070599 | 0.931320 | 0.001885 | 0.001974 | 0.001629 |
| mul_eq_mm_test.test | RUN | 0.263133 | 0.819046 | 0.685810 | 0.001813 | 0.001673 | 0.001691 |
| mul_eq_ms_test.test | RUN | 0.251549 | 0.611734 | 0.722654 | 0.001680 | 0.001904 | 0.001685 |
| mul_mm_test.test | RUN | 0.343384 | 1.741074 | 1.192824 | 0.001808 | 0.001643 | 0.001622 |
| mul_ms_test.test | RUN | 0.291571 | 0.934757 | 0.883500 | 0.001436 | 0.001858 | 0.001584 |
| mul_sm_test.test | RUN | 0.294232 | 0.912271 | 0.879412 | 0.001755 | 0.001716 | 0.001638 |
| mul_mv_test.test | RUN | 0.291676 | 0.991689 | 0.884809 | 0.001432 | 0.001521 | 0.001533 |
| inverse_m_test.test | RUN | 0.374138 | 1.790817 | 1.234798 | 0.001834 | 0.001877 | 0.001320 |
| plus_eq_mm_test.test | RUN | 0.262373 | 0.849089 | 0.761348 | 0.001630 | 0.001909 | 0.001628 |
| plus_mm_test.test | RUN | 0.330409 | 1.040673 | 0.891558 | 0.001686 | 0.001605 | 0.001507 |
| scalar_cast_m_test.test | RUN | 0.276862 | 0.471065 | 0.556186 | 0.001556 | 0.001890 | 0.001230 |
| mat_index_test.test | RUN | 0.199523 | 0.457158 | 0.495523 | 0.001402 | 0.001750 | 0.001539 |
| cmp_qq_test.test | RUN | 0.208233 | 0.462868 | 0.468368 | 0.001580 | 0.001924 | 0.001502 |
| conjugate_test.test | RUN | 0.200418 | 0.469555 | 0.475275 | 0.001813 | 0.001829 | 0.001226 |
| normalize_q_test.test | RUN | 0.209211 | 0.495383 | 0.511246 | 0.001919 | 0.002099 | 0.001442 |
| div_eq_qs_test.test | RUN | 0.207698 | 0.424778 | 0.488712 | 0.001837 | 0.001502 | 0.001688 |
| div_qs_test.test | RUN | 0.213281 | 0.457746 | 0.497856 | 0.001786 | 0.001826 | 0.001520 |
| dot_qq_test.test | RUN | 0.210246 | 0.430984 | 0.495602 | 0.001450 | 0.001804 | 0.001262 |
| eq_qq_test.test | RUN | 0.210452 | 0.452978 | 0.501446 | 0.001588 | 0.001780 | 0.001414 |
| inverse_q_test.test | RUN | 0.248516 | 0.601319 | 0.614878 | 0.001820 | 0.001826 | 0.001581 |
| mag_q_test.test | RUN | 0.204311 | 0.430960 | 0.471529 | 0.001588 | 0.001736 | 0.001462 |
| mag_sqr_q_test.test | RUN | 0.211050 | 0.425999 | 0.470669 | 0.001686 | 0.001819 | 0.001454 |
| minus_q_test.test | RUN | 0.209225 | 0.429612 | 0.485785 | 0.001533 | 0.001850 | 0.001585 |
| minus_eq_qq_test.test | RUN | 0.204838 | 0.447832 | 0.469811 | 0.001784 | 0.001718 | 0.001543 |
| minus_qq_test.test | RUN | 0.208316 | 0.447293 | 0.472535 | 0.001686 | 0.001471 | 0.001426 |
| mul_eq_qs_test.test | RUN | 0.208722 | 0.430318 | 0.466009 | 0.001670 | 0.001876 | 0.001463 |
| mul_qs_test.test | RUN | 0.210212 | 0.451800 | 0.480785 | 0.001767 | 0.001865 | 0.001593 |
| mul_qv_test.test | RUN | 0.255411 | 0.599152 | 0.621306 | 0.001758 | 0.001834 | 0.001657 |
| mul_qq_test.test | RUN | 0.248048 | 0.606845 | 0.593315 | 0.001557 | 0.001535 | 0.001324 |
| mul_eq_qq_test.test | RUN | 0.245909 | 0.609804 | 0.584132 | 0.001424 | 0.001746 | 0.001452 |
| plus_eq_qq_test.test | RUN | 0.204020 | 0.454295 | 0.480168 | 0.001815 | 0.001554 | 0.001615 |
| plus_qq_test.test | RUN | 0.204069 | 0.455288 | 0.488686 | 0.001690 | 0.001771 | 0.001411 |
| scalar_cast_q_test.test | RUN | 0.201493 | 0.426217 | 0.461845 | 0.001840 | 0.001477 | 0.001474 |
| slerp_test.test | RUN | 0.225992 | 0.854057 | 0.570825 | 0.014971 | 0.012230 | 0.012708 |
| convert_to_test.test | RUN | 0.301199 | 0.789107 | 0.886789 | 0.001760 | 0.001544 | 0.001614 |
| rot_mat_test.test | RUN | 0.451514 | 3.470100 | 2.835369 | 0.038750 | 0.032135 | 0.028143 |
| rot_quat_test.test | RUN | 0.251394 | 0.709435 | 0.624031 | 0.001744 | 0.001800 | 0.001592 |
| rotx_mat_test.test | RUN | 0.284464 | 0.946322 | 0.817504 | 0.001546 | 0.001832 | 0.001638 |
| rotx_quat_test.test | RUN | 0.259322 | 0.641747 | 0.587130 | 0.001762 | 0.001780 | 0.001584 |
| roty_mat_test.test | RUN | 0.284108 | 0.962804 | 0.835468 | 0.001742 | 0.001840 | 0.001517 |
| roty_quat_test.test | RUN | 0.249303 | 0.606069 | 0.619190 | 0.001786 | 0.001757 | 0.001599 |
| rotz_mat_test.test | RUN | 0.294731 | 1.056196 | 0.854960 | 0.001627 | 0.001775 | 0.001740 |
| rotz_quat_test.test | RUN | 0.251454 | 0.609668 | 0.630815 | 0.001791 | 0.001688 | 0.001622 |
| zero_vec_test.test | RUN | 0.215318 | 0.526429 | 0.554999 | 0.001718 | 0.001640 | 0.001247 |
| zero_mat_test.test | RUN | 0.260033 | 0.818261 | 0.729905 | 0.001446 | 0.001731 | 0.001473 |
| zero_quat_test.test | RUN | 0.205505 | 0.434911 | 0.463533 | 0.001465 | 0.001556 | 0.001499 |
| identity_mat_test.test | RUN | 0.244531 | 0.614511 | 0.609459 | 0.001694 | 0.001698 | 0.003192 |
| identity_quat_test.test | RUN | 0.210641 | 0.408483 | 0.465383 | 0.003426 | 0.001773 | 0.001555 |
| col_test.test | RUN | 0.434123 | 1.253731 | 1.381985 | 0.001632 | 0.001764 | 0.001546 |
| col_mat_test.test | RUN | 0.303025 | 0.584264 | 0.669881 | 0.001786 | 0.001605 | 0.001549 |
| neg_col_test.test | RUN | 0.338967 | 0.791540 | 0.818861 | 0.001514 | 0.001748 | 0.001510 |
| neg_row_test.test | RUN | 0.300560 | 0.801209 | 0.808845 | 0.001748 | 0.001732 | 0.001380 |
| del_col_test.test | RUN | 0.299389 | 0.878892 | 0.845261 | 0.001647 | 0.001775 | 0.001596 |
| del_row_test.test | RUN | 0.302117 | 0.867517 | 0.894191 | 0.001560 | 0.001785 | 0.001596 |
| del_row_col_test.test | RUN | 0.411334 | 1.672131 | 1.613346 | 0.001768 | 0.001862 | 0.001716 |
| swap_cols_test.test | RUN | 0.498727 | 2.234828 | 1.997944 | 0.001661 | 0.001582 | 0.001645 |
| swap_rows_test.test | RUN | 0.544831 | 2.302909 | 1.961921 | 0.001788 | 0.001759 | 0.001580 |
| diag_test.test | RUN | 0.264342 | 0.639768 | 0.718639 | 0.001813 | 0.001751 | 0.001639 |
| diag_mat_test.test | RUN | 0.265359 | 0.602502 | 0.676171 | 0.001653 | 0.001671 | 0.001531 |
| row_test.test | RUN | 0.379851 | 1.247920 | 1.392534 | 0.001603 | 0.001503 | 0.001702 |
| row_mat_test.test | RUN | 0.259738 | 0.578740 | 0.623948 | 0.001594 | 0.001710 | 0.001695 |
| transpose_test.test | RUN | 0.304028 | 0.853943 | 0.894880 | 0.001287 | 0.001536 | 0.001495 |
| translation_test.test | RUN | 0.243412 | 0.558384 | 0.654449 | 0.001412 | 0.001831 | 0.001594 |
| translation_mat_test.test | RUN | 0.262686 | 0.565064 | 0.705269 | 0.001678 | 0.001600 | 0.001666 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.089478 | 0.160941 | 0.183985 | — | — | — |
| swizzle2_test2.test | RUN | 0.112226 | 0.241678 | 0.271942 | 0.001399 | 0.001435 | 0.001374 |
| swizzle2_test3.test | RUN | 0.110965 | 0.244854 | 0.272854 | 0.001312 | 0.001504 | 0.001526 |
| swizzle2_test4.test | RUN | 0.108803 | 0.246982 | 0.277194 | 0.001582 | 0.001753 | 0.001383 |
| swizzle2_test.test | RUN | 0.374330 | 0.645333 | 0.824520 | 0.001814 | 0.001704 | 0.001656 |
| swizzle3_test2.test | RUN | 0.126020 | 0.252603 | 0.304424 | 0.001857 | 0.001643 | 0.001635 |
| swizzle3_test3.test | RUN | 0.125247 | 0.256153 | 0.298360 | 0.001530 | 0.001703 | 0.001368 |
| swizzle3_test4.test | RUN | 0.124553 | 0.258525 | 0.294348 | 0.001490 | 0.001384 | 0.001333 |
| swizzle3_test.test | RUN | 0.367862 | 0.666194 | 0.815946 | 0.001566 | 0.001513 | 0.001387 |
| swizzle4_test2.test | RUN | 0.213072 | 0.366439 | 0.463292 | 0.001575 | 0.001760 | 0.001364 |
| swizzle4_test3.test | RUN | 0.216595 | 0.368941 | 0.456185 | 0.001874 | 0.001518 | 0.001644 |
| swizzle4_test4.test | RUN | 0.211851 | 0.382111 | 0.473618 | 0.001748 | 0.001644 | 0.001528 |
| swizzle4_test.test | RUN | 0.370613 | 0.749594 | 0.887719 | 0.001567 | 0.001567 | 0.001636 |
| deduce_scalar_test.test | COMPILE | 0.019595 | 0.039598 | 0.051515 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.148127 | 0.286884 | 0.311493 | 0.001854 | 0.001669 | 0.001423 |
| deduce_scalar_mv_test.test | RUN | 0.171802 | 0.331086 | 0.367268 | 0.001623 | 0.001591 | 0.001645 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.016205 | 0.024384 | 0.038577 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.018310 | 0.034043 | 0.046079 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.016836 | 0.032195 | 0.044585 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.018058 | 0.033683 | 0.043265 | — | — | — |
| interop_test.test | RUN | 0.165148 | 0.445844 | 0.529778 | 0.000775 | 0.000816 | 0.001636 |
| transform_test.test | RUN | 0.297923 | 0.611944 | 0.730604 | 0.001380 | 0.001425 | 0.001059 |
| projection_test.test | RUN | 0.219773 | 0.500766 | 0.517360 | 0.001476 | 0.001260 | 0.001207 |
| scalar_traits_test.test | COMPILE | 0.017841 | 0.036190 | 0.046982 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.943× | 0.955×, 0.932× | 0.983× |
| clang | 0.954× | 0.957×, 0.952× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000912s | 0.000882s | 0.000920s | byte equality observed |
| access_q_test.test | 10 | 0.000905s | 0.000864s | 0.000935s | byte equality observed |
| access_v_test.test | 10 | 0.000911s | 0.000877s | 0.000910s | byte equality observed |
| assign_test.test | 10 | 0.000909s | 0.000875s | 0.000929s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000922s | 0.000883s | 0.000926s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000914s | 0.000863s | 0.000925s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000909s | 0.000865s | 0.000901s | byte equality observed |
| col_mat_test.test | 10 | 0.000910s | 0.000874s | 0.000926s | byte equality observed |
| col_test.test | 10 | 0.000910s | 0.000873s | 0.000918s | byte equality observed |
| conjugate_test.test | 10 | 0.000914s | 0.000869s | 0.000933s | byte equality observed |
| convert_to_test.test | 10 | 0.000914s | 0.000868s | 0.000932s | byte equality observed |
| cross_test.test | 10 | 0.000899s | 0.000880s | 0.000925s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000908s | 0.000872s | 0.000919s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000906s | 0.000860s | 0.000920s | byte equality observed |
| del_col_test.test | 10 | 0.000909s | 0.000881s | 0.000931s | byte equality observed |
| del_row_col_test.test | 10 | 0.000902s | 0.000878s | 0.000903s | byte equality observed |
| del_row_test.test | 10 | 0.000891s | 0.000867s | 0.000932s | byte equality observed |
| determinant_test.test | 10 | 0.000934s | 0.000886s | 0.000927s | byte equality observed |
| diag_mat_test.test | 10 | 0.000891s | 0.000874s | 0.000918s | byte equality observed |
| diag_test.test | 10 | 0.000895s | 0.000876s | 0.000952s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000900s | 0.000873s | 0.000915s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000893s | 0.000905s | 0.000913s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000895s | 0.000906s | 0.000925s | byte equality observed |
| div_ms_test.test | 10 | 0.000920s | 0.000886s | 0.000899s | byte equality observed |
| div_qs_test.test | 10 | 0.000900s | 0.000883s | 0.000904s | byte equality observed |
| div_vs_test.test | 10 | 0.000894s | 0.000906s | 0.000911s | byte equality observed |
| dot_qq_test.test | 10 | 0.000893s | 0.000897s | 0.000903s | byte equality observed |
| dot_vv_test.test | 10 | 0.000904s | 0.000896s | 0.000933s | byte equality observed |
| eq_mm_test.test | 10 | 0.000899s | 0.000921s | 0.000923s | byte equality observed |
| eq_qq_test.test | 10 | 0.000892s | 0.000892s | 0.000915s | byte equality observed |
| eq_vv_test.test | 10 | 0.000891s | 0.000910s | 0.000903s | byte equality observed |
| identity_mat_test.test | 10 | 0.000903s | 0.000897s | 0.000918s | byte equality observed |
| identity_quat_test.test | 10 | 0.000897s | 0.000897s | 0.000934s | byte equality observed |
| interop_test.test | 10 | 0.000417s | 0.000412s | 0.000911s | byte equality observed |
| inverse_m_test.test | 10 | 0.000946s | 0.000930s | 0.000976s | byte equality observed |
| inverse_q_test.test | 10 | 0.000920s | 0.000890s | 0.000925s | byte equality observed |
| mag_q_test.test | 10 | 0.000900s | 0.000869s | 0.000902s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000899s | 0.000879s | 0.000935s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000887s | 0.000893s | 0.000903s | byte equality observed |
| mag_v_test.test | 10 | 0.000892s | 0.000892s | 0.000909s | byte equality observed |
| mat_index_test.test | 10 | 0.000903s | 0.000885s | 0.000912s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000894s | 0.000881s | 0.000954s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000893s | 0.000883s | 0.000926s | byte equality observed |
| math_test.test | 10 | 0.001325s | 0.001252s | 0.001197s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000905s | 0.000875s | 0.000925s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000893s | 0.000863s | 0.000944s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000895s | 0.000856s | 0.000908s | byte equality observed |
| minus_m_test.test | 10 | 0.000884s | 0.000870s | 0.000920s | byte equality observed |
| minus_mm_test.test | 10 | 0.000889s | 0.000874s | 0.000939s | byte equality observed |
| minus_q_test.test | 10 | 0.000896s | 0.000885s | 0.000912s | byte equality observed |
| minus_qq_test.test | 10 | 0.000901s | 0.000871s | 0.000935s | byte equality observed |
| minus_v_test.test | 10 | 0.000891s | 0.000877s | 0.000912s | byte equality observed |
| minus_vv_test.test | 10 | 0.000900s | 0.000891s | 0.000932s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000904s | 0.000893s | 0.000920s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000915s | 0.000881s | 0.000936s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000905s | 0.000874s | 0.000945s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000914s | 0.000874s | 0.000904s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000902s | 0.000881s | 0.000910s | byte equality observed |
| mul_mm_test.test | 10 | 0.000889s | 0.000875s | 0.000906s | byte equality observed |
| mul_ms_test.test | 10 | 0.000920s | 0.000875s | 0.000902s | byte equality observed |
| mul_mv_test.test | 10 | 0.000891s | 0.000886s | 0.000926s | byte equality observed |
| mul_qq_test.test | 10 | 0.000908s | 0.000883s | 0.000936s | byte equality observed |
| mul_qs_test.test | 10 | 0.000911s | 0.000894s | 0.000918s | byte equality observed |
| mul_qv_test.test | 10 | 0.000934s | 0.000879s | 0.000928s | byte equality observed |
| mul_sm_test.test | 10 | 0.000901s | 0.000880s | 0.000929s | byte equality observed |
| mul_sv_test.test | 10 | 0.000892s | 0.000875s | 0.000930s | byte equality observed |
| mul_vm_test.test | 10 | 0.000912s | 0.000869s | 0.000914s | byte equality observed |
| mul_vs_test.test | 10 | 0.000899s | 0.000854s | 0.000911s | byte equality observed |
| neg_col_test.test | 10 | 0.000925s | 0.000878s | 0.000923s | byte equality observed |
| neg_row_test.test | 10 | 0.000927s | 0.000868s | 0.000911s | byte equality observed |
| normalize_q_test.test | 10 | 0.000919s | 0.000883s | 0.000908s | byte equality observed |
| normalize_v_test.test | 10 | 0.000909s | 0.000874s | 0.000911s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000903s | 0.000876s | 0.000928s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000902s | 0.000887s | 0.000926s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000903s | 0.000865s | 0.000928s | byte equality observed |
| plus_mm_test.test | 10 | 0.000909s | 0.000859s | 0.000921s | byte equality observed |
| plus_qq_test.test | 10 | 0.000900s | 0.000858s | 0.000923s | byte equality observed |
| plus_vv_test.test | 10 | 0.000916s | 0.000876s | 0.000929s | byte equality observed |
| projection_test.test | 10 | 0.000911s | 0.000891s | 0.000923s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000902s | 0.000859s | 0.000910s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000890s | 0.000860s | 0.000908s | byte equality observed |
| rot_mat_test.test | 1 | 0.026410s | 0.020889s | 0.019360s | byte equality observed |
| rot_quat_test.test | 10 | 0.000862s | 0.000851s | 0.000929s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000891s | 0.000871s | 0.000950s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000897s | 0.000876s | 0.000938s | byte equality observed |
| roty_mat_test.test | 10 | 0.000930s | 0.000878s | 0.000967s | byte equality observed |
| roty_quat_test.test | 10 | 0.000902s | 0.000900s | 0.000935s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000912s | 0.000877s | 0.000940s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000932s | 0.000885s | 0.000934s | byte equality observed |
| row_mat_test.test | 10 | 0.000884s | 0.000877s | 0.000915s | byte equality observed |
| row_test.test | 10 | 0.000906s | 0.000877s | 0.000935s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000895s | 0.000863s | 0.000924s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000898s | 0.000861s | 0.000912s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000871s | 0.000853s | 0.000891s | byte equality observed |
| slerp_test.test | 2 | 0.010096s | 0.008170s | 0.008982s | byte equality observed |
| swap_cols_test.test | 10 | 0.000893s | 0.000832s | 0.000886s | byte equality observed |
| swap_rows_test.test | 10 | 0.000916s | 0.000881s | 0.000924s | byte equality observed |
| swizzle2_test.test | 10 | 0.000899s | 0.000891s | 0.000941s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000897s | 0.000871s | 0.000915s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000901s | 0.000853s | 0.000913s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000903s | 0.000887s | 0.000918s | byte equality observed |
| swizzle3_test.test | 10 | 0.000887s | 0.000877s | 0.000941s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000893s | 0.000871s | 0.000920s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000907s | 0.000874s | 0.000909s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000878s | 0.000879s | 0.000920s | byte equality observed |
| swizzle4_test.test | 10 | 0.000893s | 0.000884s | 0.000924s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000895s | 0.000879s | 0.000914s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000897s | 0.000875s | 0.000906s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000895s | 0.000879s | 0.000902s | byte equality observed |
| to_string_test.test | 10 | 0.000937s | 0.000926s | 0.000936s | byte equality observed |
| transform_test.test | 10 | 0.000889s | 0.000884s | 0.000906s | byte equality observed |
| translation_mat_test.test | 10 | 0.000888s | 0.000885s | 0.000922s | byte equality observed |
| translation_test.test | 10 | 0.000901s | 0.000911s | 0.000914s | byte equality observed |
| transpose_test.test | 10 | 0.000899s | 0.000881s | 0.000911s | byte equality observed |
| vec_index_test.test | 10 | 0.000894s | 0.000897s | 0.000929s | byte equality observed |
| vec_register_test.test | 10 | 0.000894s | 0.000888s | 0.000931s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000897s | 0.000892s | 0.000949s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000902s | 0.000890s | 0.000949s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000912s | 0.000876s | 0.000935s | byte equality observed |
| zero_mat_test.test | 10 | 0.000892s | 0.000871s | 0.000932s | byte equality observed |
| zero_quat_test.test | 10 | 0.000893s | 0.000896s | 0.000941s | byte equality observed |
| zero_vec_test.test | 10 | 0.000879s | 0.000873s | 0.000930s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
