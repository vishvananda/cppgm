# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.241301 | 0.643175 | 0.750984 | 0.002024 | 0.002225 | 0.002078 |
| mat_traits_array_test.test | RUN | 0.185482 | 0.648739 | 0.601828 | 0.001736 | 0.001498 | 0.001609 |
| mat_traits_std_array_test.test | RUN | 0.188369 | 0.487853 | 0.604944 | 0.001684 | 0.001585 | 0.001456 |
| vec_traits_array_test.test | RUN | 0.167871 | 0.489662 | 0.528909 | 0.001640 | 0.001719 | 0.001454 |
| vec_traits_gnuc_test.test | RUN | 0.297569 | 0.607247 | 1.038178 | 0.001665 | 0.001635 | 0.001533 |
| vec_traits_std_array_test.test | RUN | 0.161881 | 0.384801 | 0.529227 | 0.001589 | 0.001717 | 0.001345 |
| quat_traits_array_test.test | RUN | 0.160689 | 0.515936 | 0.501665 | 0.001589 | 0.001619 | 0.001568 |
| quat_traits_std_array_test.test | RUN | 0.156584 | 0.399608 | 0.502675 | 0.001582 | 0.001710 | 0.001679 |
| access_m_test.test | RUN | 0.258189 | 0.940446 | 1.119041 | 0.001500 | 0.001868 | 0.001588 |
| access_m_fail1.test | COMPILE_FAIL | 0.025740 | 0.040396 | 0.087558 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025622 | 0.041695 | 0.085710 | — | — | — |
| access_q_test.test | RUN | 0.219170 | 0.491173 | 0.671470 | 0.001547 | 0.001738 | 0.001682 |
| access_q_fail.test | COMPILE_FAIL | 0.020184 | 0.034345 | 0.067019 | — | — | — |
| access_v_test.test | RUN | 0.219917 | 0.489324 | 0.668445 | 0.001554 | 0.001785 | 0.001683 |
| access_v_fail1.test | COMPILE_FAIL | 0.017331 | 0.028929 | 0.060237 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017290 | 0.032564 | 0.056338 | — | — | — |
| assign_test.test | RUN | 0.322057 | 0.794401 | 1.170636 | 0.001597 | 0.001783 | 0.001709 |
| to_string_test.test | RUN | 0.375120 | 1.233329 | 6.609319 | 0.001205 | 0.001645 | 0.001438 |
| cmp_vv_test.test | RUN | 0.263553 | 0.639779 | 0.812689 | 0.001667 | 0.001838 | 0.001600 |
| cross_test.test | RUN | 0.268880 | 0.606226 | 0.837020 | 0.001491 | 0.001778 | 0.001594 |
| div_eq_vs_test.test | RUN | 0.244945 | 0.542692 | 0.796753 | 0.001792 | 0.001776 | 0.001713 |
| div_vs_test.test | RUN | 0.255892 | 0.689980 | 0.821739 | 0.001776 | 0.001822 | 0.001691 |
| dot_vv_test.test | RUN | 0.246036 | 0.654392 | 0.787487 | 0.001352 | 0.001744 | 0.001292 |
| eq_vv_test.test | RUN | 0.274570 | 0.739606 | 0.838128 | 0.001706 | 0.001725 | 0.001663 |
| mag_v_test.test | RUN | 0.242677 | 0.639691 | 0.782518 | 0.001579 | 0.001876 | 0.001643 |
| mag_sqr_v_test.test | RUN | 0.249049 | 0.547242 | 0.775287 | 0.001712 | 0.001877 | 0.001476 |
| minus_v_test.test | RUN | 0.251121 | 0.645049 | 0.828589 | 0.001460 | 0.001746 | 0.001683 |
| minus_eq_vv_test.test | RUN | 0.250515 | 0.625323 | 0.771678 | 0.001623 | 0.001665 | 0.001724 |
| minus_vv_test.test | RUN | 0.258339 | 0.671473 | 0.850357 | 0.001550 | 0.001722 | 0.001738 |
| mul_eq_vs_test.test | RUN | 0.241584 | 0.558576 | 0.761001 | 0.001603 | 0.001845 | 0.001656 |
| mul_vs_test.test | RUN | 0.252467 | 0.653244 | 0.881270 | 0.001465 | 0.001837 | 0.001611 |
| mul_sv_test.test | RUN | 0.264722 | 0.666702 | 0.885108 | 0.001358 | 0.001816 | 0.001647 |
| mul_vm_test.test | RUN | 0.360950 | 1.204116 | 1.250276 | 0.001299 | 0.001636 | 0.001432 |
| normalize_v_test.test | RUN | 0.259764 | 0.808639 | 0.888087 | 0.001483 | 0.001775 | 0.001339 |
| plus_eq_vv_test.test | RUN | 0.244797 | 0.630988 | 0.830218 | 0.001694 | 0.001761 | 0.001632 |
| plus_vv_test.test | RUN | 0.269241 | 0.678814 | 0.860537 | 0.001348 | 0.001856 | 0.001531 |
| scalar_cast_v_test.test | RUN | 0.238674 | 0.507331 | 0.761155 | 0.001411 | 0.001732 | 0.001254 |
| vec_index_test.test | RUN | 0.211289 | 0.520114 | 0.656100 | 0.001384 | 0.001488 | 0.001401 |
| vec_register_test.test | RUN | 0.140668 | 0.447023 | 0.501849 | 0.001742 | 0.001598 | 0.001606 |
| cmp_mm_test.test | RUN | 0.425452 | 1.442889 | 1.650817 | 0.001802 | 0.001597 | 0.001728 |
| determinant_test.test | RUN | 0.285017 | 0.758923 | 0.957149 | 0.001357 | 0.001785 | 0.001706 |
| div_eq_ms_test.test | RUN | 0.290961 | 0.698116 | 1.057389 | 0.001770 | 0.001678 | 0.001703 |
| div_ms_test.test | RUN | 0.340832 | 1.085876 | 1.287491 | 0.001590 | 0.001654 | 0.001580 |
| eq_mm_test.test | RUN | 0.405526 | 1.335735 | 1.591069 | 0.001732 | 0.001722 | 0.001360 |
| minus_m_test.test | RUN | 0.333199 | 1.091000 | 1.253510 | 0.001385 | 0.001763 | 0.001655 |
| minus_eq_mm_test.test | RUN | 0.319248 | 0.999077 | 1.149111 | 0.001730 | 0.001621 | 0.001699 |
| minus_mm_test.test | RUN | 0.357153 | 1.270723 | 1.352325 | 0.001292 | 0.001887 | 0.001664 |
| mul_eq_mm_test.test | RUN | 0.297282 | 0.933858 | 1.033630 | 0.001725 | 0.001506 | 0.001716 |
| mul_eq_ms_test.test | RUN | 0.298820 | 0.707060 | 1.025062 | 0.001596 | 0.001733 | 0.001788 |
| mul_mm_test.test | RUN | 0.410654 | 2.056317 | 1.678433 | 0.001576 | 0.001854 | 0.001690 |
| mul_ms_test.test | RUN | 0.354753 | 1.118338 | 1.312136 | 0.001541 | 0.001726 | 0.001611 |
| mul_sm_test.test | RUN | 0.344293 | 1.093488 | 1.324573 | 0.001780 | 0.001637 | 0.001584 |
| mul_mv_test.test | RUN | 0.366933 | 1.190789 | 1.331382 | 0.001724 | 0.001622 | 0.001805 |
| inverse_m_test.test | RUN | 0.472396 | 2.123899 | 1.813484 | 0.001790 | 0.001798 | 0.001754 |
| plus_eq_mm_test.test | RUN | 0.321533 | 0.984889 | 1.180939 | 0.001726 | 0.001837 | 0.001585 |
| plus_mm_test.test | RUN | 0.365732 | 1.286472 | 1.337717 | 0.001764 | 0.001775 | 0.001596 |
| scalar_cast_m_test.test | RUN | 0.275134 | 0.592347 | 0.884985 | 0.001486 | 0.001718 | 0.001497 |
| mat_index_test.test | RUN | 0.222522 | 0.541548 | 0.708081 | 0.001576 | 0.001630 | 0.001732 |
| cmp_qq_test.test | RUN | 0.243584 | 0.515367 | 0.694803 | 0.001724 | 0.001628 | 0.001817 |
| conjugate_test.test | RUN | 0.239023 | 0.541270 | 0.734672 | 0.001794 | 0.001565 | 0.001703 |
| normalize_q_test.test | RUN | 0.244572 | 0.586407 | 0.763342 | 0.001664 | 0.001719 | 0.001689 |
| div_eq_qs_test.test | RUN | 0.234109 | 0.507566 | 0.721128 | 0.001392 | 0.001601 | 0.001723 |
| div_qs_test.test | RUN | 0.247426 | 0.540202 | 0.723760 | 0.001726 | 0.001601 | 0.001672 |
| dot_qq_test.test | RUN | 0.245749 | 0.517428 | 0.738446 | 0.001626 | 0.001823 | 0.001674 |
| eq_qq_test.test | RUN | 0.247064 | 0.553395 | 0.744608 | 0.001589 | 0.001578 | 0.001690 |
| inverse_q_test.test | RUN | 0.288682 | 0.706365 | 0.949919 | 0.001548 | 0.001798 | 0.001700 |
| mag_q_test.test | RUN | 0.246681 | 0.531566 | 0.715550 | 0.001712 | 0.001782 | 0.001590 |
| mag_sqr_q_test.test | RUN | 0.243887 | 0.523933 | 0.725226 | 0.001622 | 0.001838 | 0.001690 |
| minus_q_test.test | RUN | 0.238422 | 0.527822 | 0.736339 | 0.001667 | 0.001717 | 0.001666 |
| minus_eq_qq_test.test | RUN | 0.244440 | 0.529046 | 0.730537 | 0.001480 | 0.001731 | 0.001680 |
| minus_qq_test.test | RUN | 0.249031 | 0.547167 | 0.733929 | 0.001738 | 0.001830 | 0.001456 |
| mul_eq_qs_test.test | RUN | 0.237289 | 0.491928 | 0.725228 | 0.001778 | 0.001818 | 0.001434 |
| mul_qs_test.test | RUN | 0.242180 | 0.527989 | 0.775612 | 0.001538 | 0.001832 | 0.001623 |
| mul_qv_test.test | RUN | 0.306648 | 0.735394 | 0.956861 | 0.001658 | 0.001826 | 0.001812 |
| mul_qq_test.test | RUN | 0.300411 | 0.740606 | 0.948046 | 0.001774 | 0.001878 | 0.001558 |
| mul_eq_qq_test.test | RUN | 0.288107 | 0.732671 | 0.944835 | 0.001661 | 0.001756 | 0.001794 |
| plus_eq_qq_test.test | RUN | 0.241514 | 0.526132 | 0.724723 | 0.001554 | 0.001758 | 0.001582 |
| plus_qq_test.test | RUN | 0.242633 | 0.535879 | 0.751810 | 0.001459 | 0.001920 | 0.001696 |
| scalar_cast_q_test.test | RUN | 0.245811 | 0.491644 | 0.731798 | 0.001774 | 0.001773 | 0.001635 |
| slerp_test.test | RUN | 0.266062 | 0.998993 | 0.867182 | 0.018583 | 0.014706 | 0.015514 |
| convert_to_test.test | RUN | 0.354120 | 0.942092 | 1.359277 | 0.001525 | 0.001863 | 0.001768 |
| rot_mat_test.test | RUN | 0.543372 | 4.139261 | 3.987926 | 0.044687 | 0.038020 | 0.035714 |
| rot_quat_test.test | RUN | 0.298478 | 0.872530 | 0.936231 | 0.002034 | 0.001956 | 0.001733 |
| rotx_mat_test.test | RUN | 0.329970 | 1.120367 | 1.266491 | 0.001788 | 0.001778 | 0.001784 |
| rotx_quat_test.test | RUN | 0.286896 | 0.728411 | 0.852110 | 0.001567 | 0.001886 | 0.001697 |
| roty_mat_test.test | RUN | 0.330438 | 1.140305 | 1.154311 | 0.001764 | 0.001820 | 0.001789 |
| roty_quat_test.test | RUN | 0.288437 | 0.737392 | 0.931161 | 0.001808 | 0.001837 | 0.001615 |
| rotz_mat_test.test | RUN | 0.346485 | 1.267612 | 1.362381 | 0.001509 | 0.001406 | 0.001776 |
| rotz_quat_test.test | RUN | 0.288193 | 0.729302 | 0.875966 | 0.001574 | 0.001641 | 0.001790 |
| zero_vec_test.test | RUN | 0.246095 | 0.633717 | 0.728413 | 0.001626 | 0.001639 | 0.001574 |
| zero_mat_test.test | RUN | 0.313353 | 1.036695 | 1.048340 | 0.001602 | 0.001662 | 0.001712 |
| zero_quat_test.test | RUN | 0.245051 | 0.513128 | 0.724109 | 0.001714 | 0.001304 | 0.001704 |
| identity_mat_test.test | RUN | 0.297845 | 0.791400 | 0.915309 | 0.001696 | 0.001563 | 0.001506 |
| identity_quat_test.test | RUN | 0.246619 | 0.514457 | 0.745146 | 0.001792 | 0.001824 | 0.001627 |
| col_test.test | RUN | 0.474247 | 1.625426 | 2.031925 | 0.001774 | 0.001762 | 0.001748 |
| col_mat_test.test | RUN | 0.298644 | 0.720950 | 0.970401 | 0.001780 | 0.001767 | 0.001720 |
| neg_col_test.test | RUN | 0.343683 | 1.020536 | 1.281942 | 0.001553 | 0.001885 | 0.001432 |
| neg_row_test.test | RUN | 0.364194 | 1.051063 | 1.244849 | 0.001750 | 0.001684 | 0.001487 |
| del_col_test.test | RUN | 0.361416 | 1.140461 | 1.278916 | 0.001824 | 0.001854 | 0.001742 |
| del_row_test.test | RUN | 0.365356 | 1.147444 | 1.273703 | 0.001602 | 0.001694 | 0.001700 |
| del_row_col_test.test | RUN | 0.508717 | 2.128621 | 2.425662 | 0.001716 | 0.001784 | 0.001739 |
| swap_cols_test.test | RUN | 0.671372 | 2.830440 | 2.941360 | 0.001735 | 0.001736 | 0.001772 |
| swap_rows_test.test | RUN | 0.746663 | 2.968780 | 2.950095 | 0.001820 | 0.001658 | 0.001733 |
| diag_test.test | RUN | 0.306758 | 0.758661 | 1.151327 | 0.001533 | 0.001822 | 0.001746 |
| diag_mat_test.test | RUN | 0.311170 | 0.752044 | 0.949412 | 0.001686 | 0.001821 | 0.001706 |
| row_test.test | RUN | 0.481433 | 1.615013 | 1.974069 | 0.001598 | 0.001848 | 0.001708 |
| row_mat_test.test | RUN | 0.301174 | 0.741105 | 0.960736 | 0.001771 | 0.001712 | 0.001723 |
| transpose_test.test | RUN | 0.364784 | 1.067948 | 1.311716 | 0.001516 | 0.001872 | 0.001585 |
| translation_test.test | RUN | 0.297782 | 0.682110 | 0.950522 | 0.001542 | 0.001494 | 0.001601 |
| translation_mat_test.test | RUN | 0.325413 | 0.716302 | 1.062221 | 0.001738 | 0.001646 | 0.001476 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.109938 | 0.214785 | 0.264850 | — | — | — |
| swizzle2_test2.test | RUN | 0.131526 | 0.293395 | 0.409161 | 0.001570 | 0.001431 | 0.001620 |
| swizzle2_test3.test | RUN | 0.130471 | 0.307137 | 0.414537 | 0.001676 | 0.001605 | 0.001422 |
| swizzle2_test4.test | RUN | 0.130864 | 0.296093 | 0.407964 | 0.001565 | 0.001836 | 0.001505 |
| swizzle2_test.test | RUN | 0.416924 | 0.833473 | 1.359723 | 0.001564 | 0.001713 | 0.001586 |
| swizzle3_test2.test | RUN | 0.146137 | 0.319360 | 0.463600 | 0.001639 | 0.001540 | 0.001530 |
| swizzle3_test3.test | RUN | 0.149635 | 0.329333 | 0.460720 | 0.001659 | 0.001610 | 0.001580 |
| swizzle3_test4.test | RUN | 0.150836 | 0.335329 | 0.475219 | 0.001588 | 0.001603 | 0.001570 |
| swizzle3_test.test | RUN | 0.400919 | 0.854592 | 1.389105 | 0.001660 | 0.001506 | 0.001629 |
| swizzle4_test2.test | RUN | 0.249404 | 0.478951 | 0.784908 | 0.001840 | 0.001812 | 0.001692 |
| swizzle4_test3.test | RUN | 0.242857 | 0.458998 | 0.814867 | 0.001465 | 0.001651 | 0.001588 |
| swizzle4_test4.test | RUN | 0.255174 | 0.481187 | 0.747793 | 0.001541 | 0.001577 | 0.001746 |
| swizzle4_test.test | RUN | 0.420708 | 0.922574 | 1.406109 | 0.001766 | 0.001701 | 0.001708 |
| deduce_scalar_test.test | COMPILE | 0.021895 | 0.048439 | 0.074745 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.158985 | 0.347612 | 0.513369 | 0.001685 | 0.001780 | 0.001580 |
| deduce_scalar_mv_test.test | RUN | 0.191695 | 0.409936 | 0.540830 | 0.001490 | 0.001564 | 0.001310 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017849 | 0.030133 | 0.056582 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019640 | 0.041946 | 0.066235 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019918 | 0.039203 | 0.061985 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.018969 | 0.039147 | 0.065892 | — | — | — |
| interop_test.test | RUN | 0.198217 | 0.511617 | 0.702695 | 0.000789 | 0.000752 | 0.001233 |
| transform_test.test | RUN | 0.374319 | 0.772744 | 1.144521 | 0.001325 | 0.001312 | 0.001254 |
| projection_test.test | RUN | 0.245550 | 0.499731 | 0.788366 | 0.001391 | 0.001348 | 0.001293 |
| scalar_traits_test.test | COMPILE | 0.020483 | 0.040775 | 0.068474 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.017×† | 0.973×, 1.061× | 0.997× |
| clang | 0.994×† | 0.969×, 1.019× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001025s | 0.001011s | 0.001026s | byte equality observed |
| access_q_test.test | 10 | 0.001002s | 0.001004s | 0.001029s | byte equality observed |
| access_v_test.test | 10 | 0.001028s | 0.001011s | 0.001007s | byte equality observed |
| assign_test.test | 10 | 0.000993s | 0.001022s | 0.001025s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001017s | 0.001019s | 0.001034s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001031s | 0.001001s | 0.001018s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001009s | 0.001048s | 0.001015s | byte equality observed |
| col_mat_test.test | 10 | 0.001004s | 0.001015s | 0.001048s | byte equality observed |
| col_test.test | 10 | 0.001014s | 0.000978s | 0.001046s | byte equality observed |
| conjugate_test.test | 10 | 0.000996s | 0.001009s | 0.001016s | byte equality observed |
| convert_to_test.test | 10 | 0.001018s | 0.001033s | 0.001025s | byte equality observed |
| cross_test.test | 10 | 0.001011s | 0.001036s | 0.001044s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001018s | 0.001023s | 0.001088s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001018s | 0.000998s | 0.001035s | byte equality observed |
| del_col_test.test | 10 | 0.001036s | 0.001019s | 0.001031s | byte equality observed |
| del_row_col_test.test | 10 | 0.001015s | 0.001007s | 0.001033s | byte equality observed |
| del_row_test.test | 10 | 0.000991s | 0.001034s | 0.001027s | byte equality observed |
| determinant_test.test | 10 | 0.001035s | 0.001008s | 0.001035s | byte equality observed |
| diag_mat_test.test | 10 | 0.001009s | 0.000998s | 0.001018s | byte equality observed |
| diag_test.test | 10 | 0.000999s | 0.001005s | 0.001049s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001024s | 0.000985s | 0.001055s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001004s | 0.001021s | 0.001020s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001008s | 0.001032s | 0.001009s | byte equality observed |
| div_ms_test.test | 10 | 0.001011s | 0.001033s | 0.001040s | byte equality observed |
| div_qs_test.test | 10 | 0.001009s | 0.001019s | 0.001015s | byte equality observed |
| div_vs_test.test | 10 | 0.000989s | 0.000998s | 0.001050s | byte equality observed |
| dot_qq_test.test | 10 | 0.000990s | 0.000997s | 0.001010s | byte equality observed |
| dot_vv_test.test | 10 | 0.001040s | 0.000994s | 0.001021s | byte equality observed |
| eq_mm_test.test | 10 | 0.001036s | 0.001044s | 0.001026s | byte equality observed |
| eq_qq_test.test | 10 | 0.001002s | 0.001032s | 0.001005s | byte equality observed |
| eq_vv_test.test | 10 | 0.001004s | 0.001035s | 0.001046s | byte equality observed |
| identity_mat_test.test | 10 | 0.001023s | 0.001023s | 0.001041s | byte equality observed |
| identity_quat_test.test | 10 | 0.001038s | 0.001005s | 0.001029s | byte equality observed |
| interop_test.test | 10 | 0.000468s | 0.000458s | 0.001041s | byte equality observed |
| inverse_m_test.test | 10 | 0.001062s | 0.001043s | 0.001080s | byte equality observed |
| inverse_q_test.test | 10 | 0.001012s | 0.001020s | 0.001038s | byte equality observed |
| mag_q_test.test | 10 | 0.001014s | 0.000994s | 0.001017s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001005s | 0.001067s | 0.001051s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001017s | 0.001001s | 0.001004s | byte equality observed |
| mag_v_test.test | 10 | 0.001023s | 0.001029s | 0.001060s | byte equality observed |
| mat_index_test.test | 10 | 0.001028s | 0.001058s | 0.001024s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001016s | 0.001075s | 0.001061s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001009s | 0.001014s | 0.001013s | byte equality observed |
| math_test.test | 10 | 0.001550s | 0.001520s | 0.001374s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001028s | 0.001005s | 0.001021s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001025s | 0.000996s | 0.001028s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001027s | 0.001023s | 0.001040s | byte equality observed |
| minus_m_test.test | 10 | 0.001037s | 0.001003s | 0.001007s | byte equality observed |
| minus_mm_test.test | 10 | 0.001013s | 0.001053s | 0.001032s | byte equality observed |
| minus_q_test.test | 10 | 0.001019s | 0.000983s | 0.001020s | byte equality observed |
| minus_qq_test.test | 10 | 0.001026s | 0.000982s | 0.001025s | byte equality observed |
| minus_v_test.test | 10 | 0.001026s | 0.000991s | 0.001044s | byte equality observed |
| minus_vv_test.test | 10 | 0.000998s | 0.000998s | 0.001031s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000997s | 0.001027s | 0.001029s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001002s | 0.000992s | 0.001040s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001048s | 0.001003s | 0.001035s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001048s | 0.000994s | 0.001083s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000999s | 0.001039s | 0.001023s | byte equality observed |
| mul_mm_test.test | 10 | 0.001008s | 0.001023s | 0.001051s | byte equality observed |
| mul_ms_test.test | 10 | 0.001018s | 0.001007s | 0.000997s | byte equality observed |
| mul_mv_test.test | 10 | 0.001017s | 0.001034s | 0.001027s | byte equality observed |
| mul_qq_test.test | 10 | 0.001025s | 0.001071s | 0.001024s | byte equality observed |
| mul_qs_test.test | 10 | 0.001002s | 0.001048s | 0.001003s | byte equality observed |
| mul_qv_test.test | 10 | 0.001026s | 0.001065s | 0.001014s | byte equality observed |
| mul_sm_test.test | 10 | 0.001023s | 0.001080s | 0.001038s | byte equality observed |
| mul_sv_test.test | 10 | 0.001010s | 0.001077s | 0.001012s | byte equality observed |
| mul_vm_test.test | 10 | 0.001022s | 0.001105s | 0.001044s | byte equality observed |
| mul_vs_test.test | 10 | 0.000997s | 0.001083s | 0.001034s | byte equality observed |
| neg_col_test.test | 10 | 0.001016s | 0.001084s | 0.001023s | byte equality observed |
| neg_row_test.test | 10 | 0.001062s | 0.001087s | 0.001031s | byte equality observed |
| normalize_q_test.test | 10 | 0.001025s | 0.001097s | 0.001014s | byte equality observed |
| normalize_v_test.test | 10 | 0.001014s | 0.001076s | 0.001038s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001006s | 0.001082s | 0.001000s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001017s | 0.001097s | 0.001019s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001008s | 0.001067s | 0.001005s | byte equality observed |
| plus_mm_test.test | 10 | 0.001024s | 0.001080s | 0.001012s | byte equality observed |
| plus_qq_test.test | 10 | 0.001004s | 0.001082s | 0.001047s | byte equality observed |
| plus_vv_test.test | 10 | 0.001011s | 0.001046s | 0.001043s | byte equality observed |
| projection_test.test | 10 | 0.001014s | 0.001037s | 0.001060s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000997s | 0.001077s | 0.001033s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000977s | 0.000986s | 0.000997s | byte equality observed |
| rot_mat_test.test | 1 | 0.029278s | 0.025307s | 0.026412s | byte equality observed |
| rot_quat_test.test | 10 | 0.000967s | 0.000991s | 0.000990s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001012s | 0.001054s | 0.001041s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001027s | 0.001084s | 0.001077s | byte equality observed |
| roty_mat_test.test | 10 | 0.001032s | 0.001115s | 0.001059s | byte equality observed |
| roty_quat_test.test | 10 | 0.001046s | 0.001087s | 0.001075s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001032s | 0.001049s | 0.001117s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001023s | 0.001070s | 0.001055s | byte equality observed |
| row_mat_test.test | 10 | 0.001003s | 0.001028s | 0.001086s | byte equality observed |
| row_test.test | 10 | 0.001011s | 0.001063s | 0.001030s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001004s | 0.001104s | 0.001079s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000994s | 0.001112s | 0.001090s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000977s | 0.001050s | 0.001008s | byte equality observed |
| slerp_test.test | 2 | 0.013203s | 0.012203s | 0.011944s | byte equality observed |
| swap_cols_test.test | 10 | 0.000993s | 0.001045s | 0.000980s | byte equality observed |
| swap_rows_test.test | 10 | 0.001018s | 0.001095s | 0.001021s | byte equality observed |
| swizzle2_test.test | 10 | 0.001014s | 0.001061s | 0.001021s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001007s | 0.001070s | 0.001030s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001035s | 0.001109s | 0.001006s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001013s | 0.001054s | 0.000988s | byte equality observed |
| swizzle3_test.test | 10 | 0.001006s | 0.001080s | 0.001020s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001002s | 0.001053s | 0.001038s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000999s | 0.001067s | 0.001036s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001020s | 0.001000s | 0.001060s | byte equality observed |
| swizzle4_test.test | 10 | 0.001006s | 0.001043s | 0.001056s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001000s | 0.001043s | 0.001003s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000993s | 0.001080s | 0.001043s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001026s | 0.001064s | 0.001026s | byte equality observed |
| to_string_test.test | 10 | 0.001033s | 0.001122s | 0.001087s | byte equality observed |
| transform_test.test | 10 | 0.001033s | 0.001099s | 0.001020s | byte equality observed |
| translation_mat_test.test | 10 | 0.001004s | 0.001058s | 0.000981s | byte equality observed |
| translation_test.test | 10 | 0.001008s | 0.001041s | 0.001032s | byte equality observed |
| transpose_test.test | 10 | 0.001002s | 0.001056s | 0.001035s | byte equality observed |
| vec_index_test.test | 10 | 0.000995s | 0.001069s | 0.001063s | byte equality observed |
| vec_register_test.test | 10 | 0.001002s | 0.001039s | 0.001099s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001002s | 0.001043s | 0.001025s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001006s | 0.001056s | 0.001090s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001019s | 0.001057s | 0.001109s | byte equality observed |
| zero_mat_test.test | 10 | 0.001012s | 0.001099s | 0.001094s | byte equality observed |
| zero_quat_test.test | 10 | 0.001007s | 0.001052s | 0.001079s | byte equality observed |
| zero_vec_test.test | 10 | 0.001017s | 0.001036s | 0.001120s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
