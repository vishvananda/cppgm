# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.242687 | 0.640683 | 0.784632 | 0.002044 | 0.001938 | 0.002216 |
| mat_traits_array_test.test | RUN | 0.189012 | 0.644085 | 0.621075 | 0.001807 | 0.001695 | 0.001477 |
| mat_traits_std_array_test.test | RUN | 0.192404 | 0.506059 | 0.605866 | 0.001532 | 0.001742 | 0.001566 |
| vec_traits_array_test.test | RUN | 0.167523 | 0.499205 | 0.520512 | 0.001518 | 0.001623 | 0.001163 |
| vec_traits_gnuc_test.test | RUN | 0.305405 | 0.619209 | 1.063109 | 0.001660 | 0.001598 | 0.001619 |
| vec_traits_std_array_test.test | RUN | 0.164385 | 0.392170 | 0.501828 | 0.001704 | 0.001775 | 0.001416 |
| quat_traits_array_test.test | RUN | 0.164011 | 0.520904 | 0.529230 | 0.001550 | 0.001576 | 0.001362 |
| quat_traits_std_array_test.test | RUN | 0.162156 | 0.404278 | 0.517061 | 0.001579 | 0.001624 | 0.001718 |
| access_m_test.test | RUN | 0.263350 | 0.950827 | 1.156316 | 0.001646 | 0.001902 | 0.001374 |
| access_m_fail1.test | COMPILE_FAIL | 0.026027 | 0.041914 | 0.088885 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025476 | 0.040886 | 0.085742 | — | — | — |
| access_q_test.test | RUN | 0.217885 | 0.470768 | 0.634074 | 0.001772 | 0.001706 | 0.001740 |
| access_q_fail.test | COMPILE_FAIL | 0.020523 | 0.034874 | 0.067702 | — | — | — |
| access_v_test.test | RUN | 0.218648 | 0.509276 | 0.665618 | 0.001551 | 0.001716 | 0.001747 |
| access_v_fail1.test | COMPILE_FAIL | 0.017707 | 0.031035 | 0.058847 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017622 | 0.031432 | 0.059765 | — | — | — |
| assign_test.test | RUN | 0.331054 | 0.785013 | 1.199327 | 0.001791 | 0.001844 | 0.001756 |
| to_string_test.test | RUN | 0.376924 | 1.276159 | 6.636538 | 0.001444 | 0.001802 | 0.001657 |
| cmp_vv_test.test | RUN | 0.265332 | 0.629437 | 0.845728 | 0.001597 | 0.001772 | 0.001691 |
| cross_test.test | RUN | 0.266734 | 0.613069 | 0.845528 | 0.001564 | 0.001828 | 0.001438 |
| div_eq_vs_test.test | RUN | 0.248868 | 0.534239 | 0.799167 | 0.001704 | 0.001880 | 0.001687 |
| div_vs_test.test | RUN | 0.262566 | 0.662119 | 0.869402 | 0.001606 | 0.001822 | 0.001627 |
| dot_vv_test.test | RUN | 0.246336 | 0.592785 | 0.776580 | 0.001522 | 0.001718 | 0.001666 |
| eq_vv_test.test | RUN | 0.271451 | 0.665777 | 0.834755 | 0.001561 | 0.001631 | 0.001600 |
| mag_v_test.test | RUN | 0.247893 | 0.554817 | 0.788263 | 0.001731 | 0.001883 | 0.001788 |
| mag_sqr_v_test.test | RUN | 0.245935 | 0.544783 | 0.792167 | 0.001554 | 0.001710 | 0.001770 |
| minus_v_test.test | RUN | 0.262200 | 0.638676 | 0.785334 | 0.001332 | 0.001836 | 0.001717 |
| minus_eq_vv_test.test | RUN | 0.252349 | 0.617917 | 0.820065 | 0.001541 | 0.001769 | 0.001718 |
| minus_vv_test.test | RUN | 0.261563 | 0.674541 | 0.869522 | 0.001551 | 0.001736 | 0.001788 |
| mul_eq_vs_test.test | RUN | 0.247814 | 0.541699 | 0.786985 | 0.001570 | 0.001844 | 0.001790 |
| mul_vs_test.test | RUN | 0.265801 | 0.671915 | 0.816948 | 0.001584 | 0.001896 | 0.001771 |
| mul_sv_test.test | RUN | 0.264709 | 0.663651 | 0.857314 | 0.001369 | 0.001848 | 0.001748 |
| mul_vm_test.test | RUN | 0.357194 | 1.188309 | 1.328911 | 0.001554 | 0.001770 | 0.001683 |
| normalize_v_test.test | RUN | 0.266640 | 0.812526 | 0.808919 | 0.001733 | 0.001847 | 0.001718 |
| plus_eq_vv_test.test | RUN | 0.248139 | 0.641542 | 0.836124 | 0.001472 | 0.001999 | 0.001702 |
| plus_vv_test.test | RUN | 0.259202 | 0.675336 | 0.819569 | 0.001497 | 0.001889 | 0.001546 |
| scalar_cast_v_test.test | RUN | 0.243320 | 0.503959 | 0.758887 | 0.001494 | 0.001774 | 0.001397 |
| vec_index_test.test | RUN | 0.211608 | 0.519332 | 0.691543 | 0.001604 | 0.001418 | 0.001709 |
| vec_register_test.test | RUN | 0.140877 | 0.469486 | 0.492690 | 0.001798 | 0.001741 | 0.001506 |
| cmp_mm_test.test | RUN | 0.423549 | 1.442883 | 1.664818 | 0.001808 | 0.001920 | 0.001765 |
| determinant_test.test | RUN | 0.286492 | 0.752739 | 0.943876 | 0.001748 | 0.001799 | 0.001713 |
| div_eq_ms_test.test | RUN | 0.291762 | 0.697497 | 1.049924 | 0.001494 | 0.001587 | 0.001831 |
| div_ms_test.test | RUN | 0.346755 | 1.109572 | 1.289805 | 0.001747 | 0.001840 | 0.001680 |
| eq_mm_test.test | RUN | 0.411139 | 1.350320 | 1.613954 | 0.001770 | 0.001709 | 0.001687 |
| minus_m_test.test | RUN | 0.344917 | 1.067202 | 1.244223 | 0.001689 | 0.001788 | 0.001573 |
| minus_eq_mm_test.test | RUN | 0.323610 | 1.003992 | 1.146066 | 0.001464 | 0.001590 | 0.001621 |
| minus_mm_test.test | RUN | 0.360441 | 1.285400 | 1.336831 | 0.001717 | 0.001856 | 0.001789 |
| mul_eq_mm_test.test | RUN | 0.305256 | 0.941457 | 1.036688 | 0.001723 | 0.001572 | 0.001720 |
| mul_eq_ms_test.test | RUN | 0.297945 | 0.703490 | 1.071839 | 0.001636 | 0.001797 | 0.001666 |
| mul_mm_test.test | RUN | 0.408550 | 2.085845 | 1.667782 | 0.001822 | 0.001568 | 0.001620 |
| mul_ms_test.test | RUN | 0.355607 | 1.102245 | 1.297448 | 0.001651 | 0.001811 | 0.001438 |
| mul_sm_test.test | RUN | 0.359871 | 1.090551 | 1.323511 | 0.001754 | 0.001602 | 0.001559 |
| mul_mv_test.test | RUN | 0.371700 | 1.182182 | 1.347201 | 0.001523 | 0.001760 | 0.001776 |
| inverse_m_test.test | RUN | 0.478663 | 2.122288 | 1.819045 | 0.001821 | 0.001737 | 0.001772 |
| plus_eq_mm_test.test | RUN | 0.320405 | 0.997956 | 1.142279 | 0.001723 | 0.001762 | 0.001678 |
| plus_mm_test.test | RUN | 0.357500 | 1.289872 | 1.393596 | 0.001796 | 0.001673 | 0.001584 |
| scalar_cast_m_test.test | RUN | 0.273836 | 0.592493 | 0.841976 | 0.001866 | 0.001796 | 0.001716 |
| mat_index_test.test | RUN | 0.223814 | 0.552745 | 0.724186 | 0.001624 | 0.001724 | 0.001520 |
| cmp_qq_test.test | RUN | 0.239973 | 0.515282 | 0.698200 | 0.001725 | 0.001844 | 0.001468 |
| conjugate_test.test | RUN | 0.242891 | 0.524119 | 0.718618 | 0.001722 | 0.001797 | 0.001450 |
| normalize_q_test.test | RUN | 0.248962 | 0.593530 | 0.778353 | 0.001795 | 0.001820 | 0.001268 |
| div_eq_qs_test.test | RUN | 0.244186 | 0.524809 | 0.743518 | 0.001571 | 0.001506 | 0.001346 |
| div_qs_test.test | RUN | 0.252481 | 0.530458 | 0.770426 | 0.001704 | 0.001862 | 0.001469 |
| dot_qq_test.test | RUN | 0.249182 | 0.532303 | 0.771833 | 0.001737 | 0.001788 | 0.001490 |
| eq_qq_test.test | RUN | 0.247443 | 0.546495 | 0.778408 | 0.001658 | 0.001839 | 0.001687 |
| inverse_q_test.test | RUN | 0.292200 | 0.734185 | 0.946319 | 0.001722 | 0.001796 | 0.001784 |
| mag_q_test.test | RUN | 0.242341 | 0.542976 | 0.764818 | 0.001646 | 0.001390 | 0.001469 |
| mag_sqr_q_test.test | RUN | 0.249926 | 0.539026 | 0.765197 | 0.001705 | 0.001506 | 0.001426 |
| minus_q_test.test | RUN | 0.243637 | 0.537266 | 0.748015 | 0.001595 | 0.001688 | 0.001687 |
| minus_eq_qq_test.test | RUN | 0.240305 | 0.508376 | 0.740718 | 0.001726 | 0.001443 | 0.001799 |
| minus_qq_test.test | RUN | 0.246930 | 0.512430 | 0.770925 | 0.001720 | 0.001774 | 0.001546 |
| mul_eq_qs_test.test | RUN | 0.242277 | 0.503643 | 0.759597 | 0.001656 | 0.001762 | 0.001343 |
| mul_qs_test.test | RUN | 0.240317 | 0.539820 | 0.740600 | 0.001403 | 0.001949 | 0.001652 |
| mul_qv_test.test | RUN | 0.304264 | 0.735260 | 0.958151 | 0.001730 | 0.001888 | 0.001744 |
| mul_qq_test.test | RUN | 0.295252 | 0.732905 | 0.965933 | 0.001787 | 0.001922 | 0.001606 |
| mul_eq_qq_test.test | RUN | 0.293280 | 0.707643 | 0.963811 | 0.001789 | 0.001693 | 0.001379 |
| plus_eq_qq_test.test | RUN | 0.238371 | 0.497383 | 0.721064 | 0.001401 | 0.001845 | 0.001700 |
| plus_qq_test.test | RUN | 0.252335 | 0.531057 | 0.751181 | 0.001736 | 0.001872 | 0.001728 |
| scalar_cast_q_test.test | RUN | 0.239825 | 0.487481 | 0.756338 | 0.001542 | 0.001731 | 0.001734 |
| slerp_test.test | RUN | 0.261970 | 1.017421 | 0.893076 | 0.018521 | 0.014703 | 0.015584 |
| convert_to_test.test | RUN | 0.356077 | 0.934094 | 1.337436 | 0.001804 | 0.001612 | 0.001800 |
| rot_mat_test.test | RUN | 0.550159 | 4.155360 | 4.086742 | 0.043151 | 0.039245 | 0.035417 |
| rot_quat_test.test | RUN | 0.299323 | 0.867256 | 0.965590 | 0.001738 | 0.001838 | 0.001714 |
| rotx_mat_test.test | RUN | 0.332316 | 1.126131 | 1.232368 | 0.001744 | 0.001769 | 0.001704 |
| rotx_quat_test.test | RUN | 0.292737 | 0.743232 | 0.902904 | 0.001537 | 0.001735 | 0.001682 |
| roty_mat_test.test | RUN | 0.338251 | 1.122900 | 1.165807 | 0.001810 | 0.001737 | 0.001772 |
| roty_quat_test.test | RUN | 0.288474 | 0.742126 | 0.941676 | 0.001558 | 0.001838 | 0.001766 |
| rotz_mat_test.test | RUN | 0.348693 | 1.269169 | 1.346063 | 0.001609 | 0.001376 | 0.001804 |
| rotz_quat_test.test | RUN | 0.290319 | 0.741239 | 0.830049 | 0.001782 | 0.001443 | 0.001692 |
| zero_vec_test.test | RUN | 0.259343 | 0.626151 | 0.742140 | 0.001758 | 0.001683 | 0.001602 |
| zero_mat_test.test | RUN | 0.315111 | 1.024849 | 1.088819 | 0.001635 | 0.001890 | 0.001521 |
| zero_quat_test.test | RUN | 0.237393 | 0.518421 | 0.765084 | 0.001598 | 0.001590 | 0.001422 |
| identity_mat_test.test | RUN | 0.285656 | 0.782384 | 0.953373 | 0.001809 | 0.001613 | 0.001609 |
| identity_quat_test.test | RUN | 0.245255 | 0.514241 | 0.768163 | 0.001780 | 0.001850 | 0.001827 |
| col_test.test | RUN | 0.481990 | 1.608861 | 2.060667 | 0.001815 | 0.001658 | 0.001678 |
| col_mat_test.test | RUN | 0.308052 | 0.716267 | 0.981306 | 0.001790 | 0.001846 | 0.001676 |
| neg_col_test.test | RUN | 0.365866 | 1.044520 | 1.255178 | 0.001534 | 0.001738 | 0.001596 |
| neg_row_test.test | RUN | 0.364792 | 1.032537 | 1.290325 | 0.001594 | 0.001852 | 0.001758 |
| del_col_test.test | RUN | 0.364389 | 1.152645 | 1.285332 | 0.001836 | 0.001820 | 0.001726 |
| del_row_test.test | RUN | 0.366196 | 1.121539 | 1.280237 | 0.001794 | 0.001795 | 0.001694 |
| del_row_col_test.test | RUN | 0.509638 | 2.136706 | 2.454652 | 0.001768 | 0.001813 | 0.001432 |
| swap_cols_test.test | RUN | 0.673573 | 2.856737 | 3.015296 | 0.001792 | 0.001790 | 0.001644 |
| swap_rows_test.test | RUN | 0.737765 | 2.984658 | 2.849010 | 0.001808 | 0.001812 | 0.001450 |
| diag_test.test | RUN | 0.310802 | 0.763343 | 1.108086 | 0.001731 | 0.001723 | 0.001497 |
| diag_mat_test.test | RUN | 0.311699 | 0.762369 | 1.022731 | 0.001754 | 0.001745 | 0.001513 |
| row_test.test | RUN | 0.487650 | 1.591167 | 2.079149 | 0.001761 | 0.001766 | 0.001783 |
| row_mat_test.test | RUN | 0.345922 | 0.719330 | 0.979602 | 0.001446 | 0.001672 | 0.001691 |
| transpose_test.test | RUN | 0.389522 | 1.098529 | 1.310305 | 0.001532 | 0.001752 | 0.001519 |
| translation_test.test | RUN | 0.296200 | 0.691182 | 1.003391 | 0.001656 | 0.001720 | 0.001639 |
| translation_mat_test.test | RUN | 0.316050 | 0.696764 | 1.070545 | 0.001288 | 0.001673 | 0.001664 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.109684 | 0.210363 | 0.323583 | — | — | — |
| swizzle2_test2.test | RUN | 0.131187 | 0.296275 | 0.387696 | 0.001678 | 0.001622 | 0.001744 |
| swizzle2_test3.test | RUN | 0.131400 | 0.302706 | 0.392251 | 0.001372 | 0.001632 | 0.001589 |
| swizzle2_test4.test | RUN | 0.125270 | 0.298359 | 0.414052 | 0.001443 | 0.001788 | 0.001598 |
| swizzle2_test.test | RUN | 0.414979 | 0.818062 | 1.358332 | 0.001792 | 0.001648 | 0.001750 |
| swizzle3_test2.test | RUN | 0.148363 | 0.318449 | 0.476322 | 0.001467 | 0.001852 | 0.001622 |
| swizzle3_test3.test | RUN | 0.146438 | 0.312632 | 0.453918 | 0.001507 | 0.001520 | 0.001582 |
| swizzle3_test4.test | RUN | 0.147170 | 0.313848 | 0.461417 | 0.001452 | 0.001498 | 0.001621 |
| swizzle3_test.test | RUN | 0.413303 | 0.852949 | 1.348034 | 0.001570 | 0.001418 | 0.001476 |
| swizzle4_test2.test | RUN | 0.244205 | 0.462487 | 0.771302 | 0.001640 | 0.001808 | 0.001632 |
| swizzle4_test3.test | RUN | 0.242725 | 0.451831 | 0.813467 | 0.001531 | 0.001609 | 0.001739 |
| swizzle4_test4.test | RUN | 0.252990 | 0.485321 | 0.754554 | 0.001693 | 0.001501 | 0.001597 |
| swizzle4_test.test | RUN | 0.424247 | 0.920871 | 1.461267 | 0.001480 | 0.001733 | 0.001719 |
| deduce_scalar_test.test | COMPILE | 0.022047 | 0.045523 | 0.074235 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.156026 | 0.363198 | 0.507496 | 0.001630 | 0.001526 | 0.001504 |
| deduce_scalar_mv_test.test | RUN | 0.193817 | 0.395666 | 0.568578 | 0.001615 | 0.001696 | 0.001778 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.019354 | 0.028514 | 0.056670 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.021242 | 0.041242 | 0.066353 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019551 | 0.040204 | 0.056710 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019228 | 0.039951 | 0.056968 | — | — | — |
| interop_test.test | RUN | 0.193908 | 0.510673 | 0.822451 | 0.000705 | 0.000814 | 0.001696 |
| transform_test.test | RUN | 0.386338 | 0.757660 | 1.103526 | 0.001345 | 0.001334 | 0.001199 |
| projection_test.test | RUN | 0.224746 | 0.478291 | 0.759022 | 0.001697 | 0.001422 | 0.001760 |
| scalar_traits_test.test | COMPILE | 0.020296 | 0.039605 | 0.063959 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.920×† | 0.874×, 0.966× | 0.992× |
| clang | 0.963×† | 0.879×, 1.047× | 0.875× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001003s | 0.001012s | 0.001045s | byte equality observed |
| access_q_test.test | 10 | 0.001044s | 0.000996s | 0.000995s | byte equality observed |
| access_v_test.test | 10 | 0.001021s | 0.001019s | 0.001024s | byte equality observed |
| assign_test.test | 10 | 0.001048s | 0.001016s | 0.001006s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001023s | 0.001010s | 0.001059s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001019s | 0.000999s | 0.001026s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001007s | 0.000973s | 0.001048s | byte equality observed |
| col_mat_test.test | 10 | 0.001019s | 0.000976s | 0.001001s | byte equality observed |
| col_test.test | 10 | 0.001029s | 0.001001s | 0.001036s | byte equality observed |
| conjugate_test.test | 10 | 0.001026s | 0.000992s | 0.001025s | byte equality observed |
| convert_to_test.test | 10 | 0.001014s | 0.001015s | 0.001032s | byte equality observed |
| cross_test.test | 10 | 0.001008s | 0.000990s | 0.000996s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001001s | 0.000976s | 0.001007s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001023s | 0.000979s | 0.001011s | byte equality observed |
| del_col_test.test | 10 | 0.001013s | 0.001007s | 0.000991s | byte equality observed |
| del_row_col_test.test | 10 | 0.001018s | 0.000988s | 0.001052s | byte equality observed |
| del_row_test.test | 10 | 0.001018s | 0.001008s | 0.001011s | byte equality observed |
| determinant_test.test | 10 | 0.001075s | 0.000999s | 0.001012s | byte equality observed |
| diag_mat_test.test | 10 | 0.001038s | 0.001000s | 0.000982s | byte equality observed |
| diag_test.test | 10 | 0.001011s | 0.000999s | 0.001009s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001021s | 0.000977s | 0.001035s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001017s | 0.001010s | 0.001007s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001016s | 0.001002s | 0.001040s | byte equality observed |
| div_ms_test.test | 10 | 0.001023s | 0.000981s | 0.001017s | byte equality observed |
| div_qs_test.test | 10 | 0.001011s | 0.000982s | 0.001043s | byte equality observed |
| div_vs_test.test | 10 | 0.001051s | 0.001019s | 0.001051s | byte equality observed |
| dot_qq_test.test | 10 | 0.001008s | 0.000991s | 0.001057s | byte equality observed |
| dot_vv_test.test | 10 | 0.001027s | 0.000977s | 0.001032s | byte equality observed |
| eq_mm_test.test | 10 | 0.001017s | 0.000993s | 0.001047s | byte equality observed |
| eq_qq_test.test | 10 | 0.001000s | 0.001011s | 0.001036s | byte equality observed |
| eq_vv_test.test | 10 | 0.000984s | 0.000982s | 0.000984s | byte equality observed |
| identity_mat_test.test | 10 | 0.001007s | 0.000998s | 0.001012s | byte equality observed |
| identity_quat_test.test | 10 | 0.001007s | 0.001049s | 0.001005s | byte equality observed |
| interop_test.test | 10 | 0.000466s | 0.000446s | 0.000978s | byte equality observed |
| inverse_m_test.test | 10 | 0.001061s | 0.001036s | 0.001092s | byte equality observed |
| inverse_q_test.test | 10 | 0.001020s | 0.001033s | 0.001009s | byte equality observed |
| mag_q_test.test | 10 | 0.001013s | 0.001000s | 0.001059s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001014s | 0.000982s | 0.001042s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001022s | 0.000992s | 0.001010s | byte equality observed |
| mag_v_test.test | 10 | 0.001021s | 0.000998s | 0.001018s | byte equality observed |
| mat_index_test.test | 10 | 0.001024s | 0.001018s | 0.001040s | byte equality observed |
| mat_traits_array_test.test | 9 | 0.001027s | 0.000982s | 0.000998s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001014s | 0.000966s | 0.001002s | byte equality observed |
| math_test.test | 10 | 0.001522s | 0.001478s | 0.001337s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001027s | 0.000985s | 0.000993s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001009s | 0.000975s | 0.000987s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001023s | 0.001002s | 0.001015s | byte equality observed |
| minus_m_test.test | 10 | 0.001019s | 0.000991s | 0.001020s | byte equality observed |
| minus_mm_test.test | 10 | 0.001010s | 0.000990s | 0.001012s | byte equality observed |
| minus_q_test.test | 10 | 0.001031s | 0.000999s | 0.001014s | byte equality observed |
| minus_qq_test.test | 10 | 0.001026s | 0.000993s | 0.001029s | byte equality observed |
| minus_v_test.test | 10 | 0.001009s | 0.000994s | 0.000993s | byte equality observed |
| minus_vv_test.test | 10 | 0.001019s | 0.000993s | 0.001028s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001008s | 0.001003s | 0.001008s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001029s | 0.000994s | 0.001025s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001018s | 0.001024s | 0.001026s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001018s | 0.001007s | 0.001050s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000999s | 0.000984s | 0.001017s | byte equality observed |
| mul_mm_test.test | 10 | 0.001025s | 0.000995s | 0.001014s | byte equality observed |
| mul_ms_test.test | 10 | 0.001006s | 0.001001s | 0.001014s | byte equality observed |
| mul_mv_test.test | 10 | 0.001027s | 0.001001s | 0.001018s | byte equality observed |
| mul_qq_test.test | 10 | 0.001016s | 0.001014s | 0.001046s | byte equality observed |
| mul_qs_test.test | 10 | 0.001031s | 0.000986s | 0.001027s | byte equality observed |
| mul_qv_test.test | 10 | 0.001024s | 0.000981s | 0.001024s | byte equality observed |
| mul_sm_test.test | 10 | 0.001014s | 0.000976s | 0.001004s | byte equality observed |
| mul_sv_test.test | 10 | 0.001059s | 0.000979s | 0.000979s | byte equality observed |
| mul_vm_test.test | 10 | 0.001021s | 0.001006s | 0.000974s | byte equality observed |
| mul_vs_test.test | 10 | 0.001013s | 0.001018s | 0.000981s | byte equality observed |
| neg_col_test.test | 10 | 0.001031s | 0.000981s | 0.001004s | byte equality observed |
| neg_row_test.test | 10 | 0.001008s | 0.000990s | 0.001017s | byte equality observed |
| normalize_q_test.test | 10 | 0.001052s | 0.001002s | 0.001017s | byte equality observed |
| normalize_v_test.test | 10 | 0.001052s | 0.001016s | 0.001045s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001001s | 0.001045s | 0.001043s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001023s | 0.001023s | 0.001055s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001032s | 0.001016s | 0.001011s | byte equality observed |
| plus_mm_test.test | 10 | 0.001025s | 0.001003s | 0.001030s | byte equality observed |
| plus_qq_test.test | 10 | 0.001006s | 0.001004s | 0.001024s | byte equality observed |
| plus_vv_test.test | 10 | 0.000998s | 0.000991s | 0.001045s | byte equality observed |
| projection_test.test | 10 | 0.001060s | 0.001002s | 0.001021s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001036s | 0.000990s | 0.001040s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001006s | 0.000979s | 0.000988s | byte equality observed |
| rot_mat_test.test | 1 | 0.028786s | 0.025267s | 0.025105s | byte equality observed |
| rot_quat_test.test | 10 | 0.000978s | 0.000964s | 0.001006s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001004s | 0.001009s | 0.001015s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001022s | 0.001011s | 0.001001s | byte equality observed |
| roty_mat_test.test | 10 | 0.001054s | 0.001018s | 0.001049s | byte equality observed |
| roty_quat_test.test | 10 | 0.001020s | 0.000995s | 0.001047s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001074s | 0.001017s | 0.001067s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001051s | 0.001024s | 0.001030s | byte equality observed |
| row_mat_test.test | 10 | 0.000990s | 0.000985s | 0.001008s | byte equality observed |
| row_test.test | 10 | 0.001028s | 0.001012s | 0.001007s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001015s | 0.000992s | 0.000985s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001040s | 0.000999s | 0.001004s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001001s | 0.000971s | 0.000982s | byte equality observed |
| slerp_test.test | 2 | 0.013219s | 0.011261s | 0.011892s | byte equality observed |
| swap_cols_test.test | 10 | 0.000977s | 0.000950s | 0.000980s | byte equality observed |
| swap_rows_test.test | 10 | 0.001000s | 0.000960s | 0.000998s | byte equality observed |
| swizzle2_test.test | 10 | 0.001016s | 0.001000s | 0.001027s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000989s | 0.001015s | 0.001005s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000988s | 0.001017s | 0.000994s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001011s | 0.000986s | 0.001030s | byte equality observed |
| swizzle3_test.test | 10 | 0.001012s | 0.000991s | 0.001019s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001013s | 0.000995s | 0.001064s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001002s | 0.001011s | 0.001051s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001022s | 0.001014s | 0.001038s | byte equality observed |
| swizzle4_test.test | 10 | 0.001034s | 0.000991s | 0.001034s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001031s | 0.001014s | 0.001058s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001029s | 0.001004s | 0.001026s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001007s | 0.000976s | 0.001003s | byte equality observed |
| to_string_test.test | 10 | 0.001037s | 0.000999s | 0.001060s | byte equality observed |
| transform_test.test | 10 | 0.001000s | 0.000978s | 0.001020s | byte equality observed |
| translation_mat_test.test | 10 | 0.000983s | 0.000974s | 0.001003s | byte equality observed |
| translation_test.test | 10 | 0.001021s | 0.000973s | 0.000984s | byte equality observed |
| transpose_test.test | 10 | 0.001007s | 0.001018s | 0.000984s | byte equality observed |
| vec_index_test.test | 10 | 0.001007s | 0.001015s | 0.000998s | byte equality observed |
| vec_register_test.test | 10 | 0.001003s | 0.001043s | 0.001043s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000996s | 0.001016s | 0.001043s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001000s | 0.001019s | 0.001003s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001021s | 0.000998s | 0.001013s | byte equality observed |
| zero_mat_test.test | 10 | 0.000993s | 0.000994s | 0.001046s | byte equality observed |
| zero_quat_test.test | 10 | 0.001026s | 0.001003s | 0.001019s | byte equality observed |
| zero_vec_test.test | 10 | 0.001062s | 0.000981s | 0.001049s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
