# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.274274 | 0.756940 | 0.802169 | 0.002096 | 0.002068 | 0.002038 |
| mat_traits_array_test.test | RUN | 0.212187 | 0.740697 | 0.607817 | 0.001893 | 0.001443 | 0.001453 |
| mat_traits_std_array_test.test | RUN | 0.212882 | 0.569687 | 0.638925 | 0.001570 | 0.001388 | 0.001336 |
| vec_traits_array_test.test | RUN | 0.185314 | 0.583124 | 0.520105 | 0.001434 | 0.001799 | 0.001329 |
| vec_traits_gnuc_test.test | RUN | 0.337146 | 0.709662 | 1.013942 | 0.001604 | 0.001511 | 0.001411 |
| vec_traits_std_array_test.test | RUN | 0.185438 | 0.447738 | 0.533290 | 0.001685 | 0.001529 | 0.001419 |
| quat_traits_array_test.test | RUN | 0.180674 | 0.608884 | 0.511822 | 0.001503 | 0.001488 | 0.001412 |
| quat_traits_std_array_test.test | RUN | 0.180428 | 0.464861 | 0.510272 | 0.001439 | 0.001921 | 0.001480 |
| access_m_test.test | RUN | 0.290938 | 1.091261 | 1.207412 | 0.001654 | 0.001620 | 0.001488 |
| access_m_fail1.test | COMPILE_FAIL | 0.029444 | 0.046223 | 0.070826 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.028614 | 0.047514 | 0.076087 | — | — | — |
| access_q_test.test | RUN | 0.243745 | 0.554173 | 0.676965 | 0.001584 | 0.001698 | 0.001570 |
| access_q_fail.test | COMPILE_FAIL | 0.022047 | 0.037384 | 0.063935 | — | — | — |
| access_v_test.test | RUN | 0.242351 | 0.582194 | 0.685315 | 0.001513 | 0.001589 | 0.001468 |
| access_v_fail1.test | COMPILE_FAIL | 0.020070 | 0.034834 | 0.055014 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.019073 | 0.035373 | 0.056506 | — | — | — |
| assign_test.test | RUN | 0.369487 | 0.939520 | 1.252970 | 0.001715 | 0.001663 | 0.001561 |
| to_string_test.test | RUN | 0.445330 | 1.531167 | 7.523510 | 0.001543 | 0.001660 | 0.001663 |
| cmp_vv_test.test | RUN | 0.303325 | 0.745308 | 0.852985 | 0.001670 | 0.001600 | 0.001586 |
| cross_test.test | RUN | 0.297728 | 0.680033 | 0.846923 | 0.001529 | 0.001664 | 0.001475 |
| div_eq_vs_test.test | RUN | 0.278065 | 0.630868 | 0.822226 | 0.001534 | 0.001673 | 0.001668 |
| div_vs_test.test | RUN | 0.293943 | 0.790973 | 0.854200 | 0.001708 | 0.001732 | 0.001527 |
| dot_vv_test.test | RUN | 0.281025 | 0.691576 | 0.811569 | 0.001730 | 0.001626 | 0.001538 |
| eq_vv_test.test | RUN | 0.314503 | 0.789198 | 0.905048 | 0.001686 | 0.001625 | 0.001522 |
| mag_v_test.test | RUN | 0.277880 | 0.639055 | 0.762136 | 0.001565 | 0.001688 | 0.001496 |
| mag_sqr_v_test.test | RUN | 0.275895 | 0.635605 | 0.777119 | 0.001736 | 0.001718 | 0.001346 |
| minus_v_test.test | RUN | 0.286660 | 0.753326 | 0.834515 | 0.001776 | 0.001729 | 0.001589 |
| minus_eq_vv_test.test | RUN | 0.281665 | 0.712733 | 0.838822 | 0.001690 | 0.001619 | 0.001565 |
| minus_vv_test.test | RUN | 0.293540 | 0.806299 | 0.880664 | 0.001679 | 0.001576 | 0.001411 |
| mul_eq_vs_test.test | RUN | 0.283827 | 0.644260 | 0.814064 | 0.001409 | 0.001698 | 0.001610 |
| mul_vs_test.test | RUN | 0.296920 | 0.778562 | 0.853402 | 0.001479 | 0.001646 | 0.001560 |
| mul_sv_test.test | RUN | 0.295705 | 0.773993 | 0.866066 | 0.001724 | 0.001642 | 0.001386 |
| mul_vm_test.test | RUN | 0.405559 | 1.396407 | 1.357341 | 0.001712 | 0.001695 | 0.001612 |
| normalize_v_test.test | RUN | 0.301153 | 0.968916 | 0.894495 | 0.001497 | 0.001611 | 0.001421 |
| plus_eq_vv_test.test | RUN | 0.285926 | 0.726261 | 0.768627 | 0.001458 | 0.001640 | 0.001641 |
| plus_vv_test.test | RUN | 0.304121 | 0.797717 | 0.866346 | 0.001676 | 0.001733 | 0.001453 |
| scalar_cast_v_test.test | RUN | 0.268980 | 0.575386 | 0.730017 | 0.001513 | 0.001534 | 0.001515 |
| vec_index_test.test | RUN | 0.237940 | 0.600253 | 0.677469 | 0.001563 | 0.001489 | 0.001607 |
| vec_register_test.test | RUN | 0.156724 | 0.531550 | 0.501015 | 0.001634 | 0.001622 | 0.001487 |
| cmp_mm_test.test | RUN | 0.496840 | 1.746504 | 1.807018 | 0.001802 | 0.001709 | 0.001546 |
| determinant_test.test | RUN | 0.334490 | 0.877831 | 0.976178 | 0.001850 | 0.001590 | 0.001534 |
| div_eq_ms_test.test | RUN | 0.332983 | 0.805504 | 1.108147 | 0.001617 | 0.001415 | 0.001584 |
| div_ms_test.test | RUN | 0.386148 | 1.309276 | 1.316228 | 0.001723 | 0.001498 | 0.001587 |
| eq_mm_test.test | RUN | 0.466031 | 1.583680 | 1.732360 | 0.001839 | 0.001599 | 0.001562 |
| minus_m_test.test | RUN | 0.388207 | 1.280878 | 1.310667 | 0.001569 | 0.001699 | 0.001495 |
| minus_eq_mm_test.test | RUN | 0.365759 | 1.204287 | 1.207428 | 0.001522 | 0.001536 | 0.001618 |
| minus_mm_test.test | RUN | 0.411423 | 1.519812 | 1.417175 | 0.001734 | 0.001662 | 0.001584 |
| mul_eq_mm_test.test | RUN | 0.339173 | 1.109120 | 1.097658 | 0.001840 | 0.001573 | 0.001785 |
| mul_eq_ms_test.test | RUN | 0.332811 | 0.809275 | 1.119985 | 0.001600 | 0.001659 | 0.001634 |
| mul_mm_test.test | RUN | 0.473552 | 2.500548 | 1.774654 | 0.001704 | 0.001630 | 0.001438 |
| mul_ms_test.test | RUN | 0.397302 | 1.316064 | 1.369335 | 0.001696 | 0.001550 | 0.001626 |
| mul_sm_test.test | RUN | 0.400378 | 1.308780 | 1.383720 | 0.001771 | 0.001512 | 0.001685 |
| mul_mv_test.test | RUN | 0.404986 | 1.396407 | 1.387896 | 0.001516 | 0.001644 | 0.001593 |
| inverse_m_test.test | RUN | 0.544483 | 2.584447 | 1.957403 | 0.001706 | 0.001571 | 0.001597 |
| plus_eq_mm_test.test | RUN | 0.379613 | 1.189141 | 1.210679 | 0.001605 | 0.001596 | 0.001551 |
| plus_mm_test.test | RUN | 0.409574 | 1.509945 | 1.430958 | 0.001744 | 0.001696 | 0.001627 |
| scalar_cast_m_test.test | RUN | 0.315368 | 0.671242 | 0.894115 | 0.001808 | 0.001616 | 0.001672 |
| mat_index_test.test | RUN | 0.253258 | 0.638501 | 0.752786 | 0.001606 | 0.001616 | 0.001620 |
| cmp_qq_test.test | RUN | 0.268746 | 0.602398 | 0.741732 | 0.001759 | 0.001501 | 0.001662 |
| conjugate_test.test | RUN | 0.273045 | 0.602252 | 0.758915 | 0.001726 | 0.001624 | 0.001758 |
| normalize_q_test.test | RUN | 0.278185 | 0.695750 | 0.797430 | 0.001756 | 0.001468 | 0.001507 |
| div_eq_qs_test.test | RUN | 0.271796 | 0.586536 | 0.756018 | 0.001579 | 0.001467 | 0.001452 |
| div_qs_test.test | RUN | 0.271103 | 0.635566 | 0.769276 | 0.001737 | 0.001599 | 0.001624 |
| dot_qq_test.test | RUN | 0.273306 | 0.605921 | 0.766464 | 0.001683 | 0.001678 | 0.001607 |
| eq_qq_test.test | RUN | 0.279301 | 0.626649 | 0.774513 | 0.001612 | 0.001588 | 0.001648 |
| inverse_q_test.test | RUN | 0.328868 | 0.812160 | 0.958692 | 0.001776 | 0.001672 | 0.001529 |
| mag_q_test.test | RUN | 0.278968 | 0.608066 | 0.750175 | 0.001676 | 0.001438 | 0.001514 |
| mag_sqr_q_test.test | RUN | 0.268636 | 0.597492 | 0.756920 | 0.001778 | 0.001632 | 0.001656 |
| minus_q_test.test | RUN | 0.275137 | 0.613322 | 0.749078 | 0.001704 | 0.001554 | 0.001646 |
| minus_eq_qq_test.test | RUN | 0.270461 | 0.606477 | 0.741524 | 0.001606 | 0.001517 | 0.001540 |
| minus_qq_test.test | RUN | 0.282125 | 0.619579 | 0.771042 | 0.001686 | 0.001486 | 0.001462 |
| mul_eq_qs_test.test | RUN | 0.268464 | 0.583435 | 0.753510 | 0.001698 | 0.001505 | 0.001297 |
| mul_qs_test.test | RUN | 0.273952 | 0.610551 | 0.754681 | 0.001845 | 0.001628 | 0.001642 |
| mul_qv_test.test | RUN | 0.340158 | 0.832648 | 0.979820 | 0.001790 | 0.001485 | 0.001682 |
| mul_qq_test.test | RUN | 0.329963 | 0.851688 | 0.974102 | 0.001766 | 0.001924 | 0.001462 |
| mul_eq_qq_test.test | RUN | 0.321608 | 0.860912 | 0.963957 | 0.001626 | 0.001576 | 0.001449 |
| plus_eq_qq_test.test | RUN | 0.264803 | 0.625589 | 0.741736 | 0.001463 | 0.001674 | 0.001525 |
| plus_qq_test.test | RUN | 0.281359 | 0.629126 | 0.759514 | 0.001674 | 0.001438 | 0.001588 |
| scalar_cast_q_test.test | RUN | 0.270397 | 0.582370 | 0.763407 | 0.001626 | 0.001444 | 0.001548 |
| slerp_test.test | RUN | 0.297944 | 1.210578 | 0.917516 | 0.021227 | 0.017547 | 0.018822 |
| convert_to_test.test | RUN | 0.410456 | 1.087470 | 1.407929 | 0.001633 | 0.001551 | 0.001704 |
| rot_mat_test.test | RUN | 0.660255 | 5.096713 | 4.573238 | 0.044111 | 0.045062 | 0.046889 |
| rot_quat_test.test | RUN | 0.336947 | 1.006678 | 0.994832 | 0.001821 | 0.001606 | 0.001669 |
| rotx_mat_test.test | RUN | 0.380879 | 1.342127 | 1.335374 | 0.001758 | 0.001628 | 0.001604 |
| rotx_quat_test.test | RUN | 0.327487 | 0.839036 | 0.908895 | 0.001503 | 0.001561 | 0.001479 |
| roty_mat_test.test | RUN | 0.386971 | 1.337856 | 1.278916 | 0.001736 | 0.001613 | 0.001586 |
| roty_quat_test.test | RUN | 0.327771 | 0.851128 | 0.953621 | 0.001621 | 0.001602 | 0.001621 |
| rotz_mat_test.test | RUN | 0.401532 | 1.507069 | 1.412511 | 0.001546 | 0.001781 | 0.001798 |
| rotz_quat_test.test | RUN | 0.323559 | 0.862686 | 0.924678 | 0.001669 | 0.001596 | 0.001608 |
| zero_vec_test.test | RUN | 0.282796 | 0.718949 | 0.789159 | 0.001688 | 0.001566 | 0.001538 |
| zero_mat_test.test | RUN | 0.344600 | 1.244102 | 1.133250 | 0.001640 | 0.001491 | 0.001366 |
| zero_quat_test.test | RUN | 0.265219 | 0.609971 | 0.725729 | 0.001687 | 0.001634 | 0.001488 |
| identity_mat_test.test | RUN | 0.313561 | 0.931826 | 0.958032 | 0.001550 | 0.001585 | 0.001597 |
| identity_quat_test.test | RUN | 0.269537 | 0.591024 | 0.751501 | 0.001652 | 0.001710 | 0.001598 |
| col_test.test | RUN | 0.511931 | 1.934979 | 2.137906 | 0.001517 | 0.001733 | 0.001587 |
| col_mat_test.test | RUN | 0.337361 | 0.853275 | 1.010189 | 0.001660 | 0.001746 | 0.001654 |
| neg_col_test.test | RUN | 0.383182 | 1.202857 | 1.318940 | 0.001364 | 0.001812 | 0.001698 |
| neg_row_test.test | RUN | 0.388405 | 1.244430 | 1.309300 | 0.001705 | 0.001590 | 0.001670 |
| del_col_test.test | RUN | 0.400349 | 1.377876 | 1.367823 | 0.001708 | 0.001701 | 0.001628 |
| del_row_test.test | RUN | 0.400244 | 1.345488 | 1.351058 | 0.001714 | 0.001770 | 0.001608 |
| del_row_col_test.test | RUN | 0.570389 | 2.499121 | 2.546060 | 0.001785 | 0.001641 | 0.001606 |
| swap_cols_test.test | RUN | 0.703871 | 3.375894 | 3.139450 | 0.001734 | 0.001729 | 0.001723 |
| swap_rows_test.test | RUN | 0.790797 | 3.517424 | 3.105570 | 0.001724 | 0.001622 | 0.002404 |
| diag_test.test | RUN | 0.353791 | 0.906472 | 1.148037 | 0.001682 | 0.001696 | 0.001586 |
| diag_mat_test.test | RUN | 0.346151 | 0.884003 | 1.043922 | 0.001590 | 0.001677 | 0.001662 |
| row_test.test | RUN | 0.525777 | 1.879560 | 2.135385 | 0.001528 | 0.001540 | 0.001600 |
| row_mat_test.test | RUN | 0.332181 | 0.833714 | 1.034866 | 0.001649 | 0.001702 | 0.001573 |
| transpose_test.test | RUN | 0.408050 | 1.278446 | 1.389755 | 0.001439 | 0.001560 | 0.001589 |
| translation_test.test | RUN | 0.321643 | 0.813325 | 1.029624 | 0.001458 | 0.001872 | 0.001663 |
| translation_mat_test.test | RUN | 0.348069 | 0.829568 | 1.088982 | 0.001846 | 0.001547 | 0.001272 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.118941 | 0.228222 | 0.302417 | — | — | — |
| swizzle2_test2.test | RUN | 0.143083 | 0.348366 | 0.411013 | 0.001740 | 0.001601 | 0.001465 |
| swizzle2_test3.test | RUN | 0.142333 | 0.355023 | 0.419245 | 0.001485 | 0.001736 | 0.001509 |
| swizzle2_test4.test | RUN | 0.144864 | 0.346344 | 0.410564 | 0.001376 | 0.001652 | 0.001602 |
| swizzle2_test.test | RUN | 0.458204 | 0.950351 | 1.312031 | 0.001742 | 0.001625 | 0.001586 |
| swizzle3_test2.test | RUN | 0.164440 | 0.368454 | 0.460842 | 0.001636 | 0.001559 | 0.001618 |
| swizzle3_test3.test | RUN | 0.162675 | 0.372516 | 0.453721 | 0.001432 | 0.001616 | 0.001436 |
| swizzle3_test4.test | RUN | 0.167460 | 0.364541 | 0.465030 | 0.001513 | 0.001630 | 0.001530 |
| swizzle3_test.test | RUN | 0.454841 | 0.988579 | 1.296407 | 0.001678 | 0.001716 | 0.001602 |
| swizzle4_test2.test | RUN | 0.268370 | 0.529492 | 0.742060 | 0.001545 | 0.001742 | 0.001460 |
| swizzle4_test3.test | RUN | 0.267969 | 0.548322 | 0.737776 | 0.001483 | 0.001629 | 0.001553 |
| swizzle4_test4.test | RUN | 0.266853 | 0.526781 | 0.735529 | 0.001624 | 0.001576 | 0.001574 |
| swizzle4_test.test | RUN | 0.461461 | 1.067367 | 1.396198 | 0.001548 | 0.001647 | 0.001670 |
| deduce_scalar_test.test | COMPILE | 0.024520 | 0.050621 | 0.072050 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.173454 | 0.412976 | 0.469967 | 0.001722 | 0.001561 | 0.001524 |
| deduce_scalar_mv_test.test | RUN | 0.209652 | 0.471847 | 0.609966 | 0.001566 | 0.001594 | 0.001606 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.019523 | 0.033567 | 0.051467 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.020622 | 0.046117 | 0.060876 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019445 | 0.045174 | 0.059108 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.020659 | 0.044752 | 0.060808 | — | — | — |
| interop_test.test | RUN | 0.214788 | 0.606595 | 0.835263 | 0.000805 | 0.000807 | 0.001671 |
| transform_test.test | RUN | 0.372794 | 0.754741 | 1.068939 | 0.001211 | 0.001194 | 0.001137 |
| projection_test.test | RUN | 0.274902 | 0.666887 | 0.772345 | 0.001239 | 0.001093 | 0.001160 |
| scalar_traits_test.test | COMPILE | 0.021962 | 0.047408 | 0.066410 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.997×, 0.985× | 0.984× |
| clang | 1.028× | 1.035×, 1.021× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001024s | 0.001064s | 0.001024s | byte equality observed |
| access_q_test.test | 10 | 0.001005s | 0.001033s | 0.001059s | byte equality observed |
| access_v_test.test | 10 | 0.001024s | 0.001068s | 0.001042s | byte equality observed |
| assign_test.test | 10 | 0.001022s | 0.001060s | 0.001090s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001054s | 0.001046s | 0.001053s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001019s | 0.001025s | 0.001022s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001035s | 0.001056s | 0.001035s | byte equality observed |
| col_mat_test.test | 10 | 0.001047s | 0.001040s | 0.001028s | byte equality observed |
| col_test.test | 10 | 0.001036s | 0.001026s | 0.001045s | byte equality observed |
| conjugate_test.test | 10 | 0.001024s | 0.001008s | 0.001037s | byte equality observed |
| convert_to_test.test | 10 | 0.001018s | 0.001005s | 0.001029s | byte equality observed |
| cross_test.test | 10 | 0.001024s | 0.001033s | 0.001012s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001032s | 0.001007s | 0.001029s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001054s | 0.001060s | 0.001066s | byte equality observed |
| del_col_test.test | 10 | 0.001020s | 0.001013s | 0.001060s | byte equality observed |
| del_row_col_test.test | 10 | 0.001024s | 0.001045s | 0.001015s | byte equality observed |
| del_row_test.test | 10 | 0.001026s | 0.001034s | 0.001020s | byte equality observed |
| determinant_test.test | 10 | 0.001068s | 0.001036s | 0.001057s | byte equality observed |
| diag_mat_test.test | 10 | 0.001037s | 0.001048s | 0.001001s | byte equality observed |
| diag_test.test | 10 | 0.001020s | 0.001030s | 0.001072s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001043s | 0.001015s | 0.001029s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001003s | 0.001028s | 0.001011s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001022s | 0.001055s | 0.001033s | byte equality observed |
| div_ms_test.test | 10 | 0.001034s | 0.001046s | 0.001028s | byte equality observed |
| div_qs_test.test | 10 | 0.001056s | 0.001004s | 0.001031s | byte equality observed |
| div_vs_test.test | 10 | 0.001046s | 0.001031s | 0.001052s | byte equality observed |
| dot_qq_test.test | 10 | 0.001030s | 0.001040s | 0.001002s | byte equality observed |
| dot_vv_test.test | 10 | 0.000995s | 0.001039s | 0.001056s | byte equality observed |
| eq_mm_test.test | 10 | 0.001038s | 0.001035s | 0.001034s | byte equality observed |
| eq_qq_test.test | 10 | 0.001050s | 0.001058s | 0.001041s | byte equality observed |
| eq_vv_test.test | 10 | 0.001008s | 0.001045s | 0.001052s | byte equality observed |
| identity_mat_test.test | 10 | 0.001065s | 0.001069s | 0.001080s | byte equality observed |
| identity_quat_test.test | 10 | 0.001018s | 0.001049s | 0.001034s | byte equality observed |
| interop_test.test | 10 | 0.000461s | 0.000458s | 0.001002s | byte equality observed |
| inverse_m_test.test | 10 | 0.001097s | 0.001097s | 0.001080s | byte equality observed |
| inverse_q_test.test | 10 | 0.001027s | 0.001048s | 0.001040s | byte equality observed |
| mag_q_test.test | 10 | 0.001021s | 0.001024s | 0.001002s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001033s | 0.001012s | 0.001082s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001019s | 0.001001s | 0.000988s | byte equality observed |
| mag_v_test.test | 10 | 0.001048s | 0.001037s | 0.001054s | byte equality observed |
| mat_index_test.test | 10 | 0.001032s | 0.001052s | 0.001008s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001063s | 0.001053s | 0.001016s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000998s | 0.001004s | 0.001039s | byte equality observed |
| math_test.test | 10 | 0.001523s | 0.001490s | 0.001370s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001026s | 0.001057s | 0.000995s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001034s | 0.001078s | 0.001018s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001056s | 0.001059s | 0.001003s | byte equality observed |
| minus_m_test.test | 10 | 0.001034s | 0.001047s | 0.001006s | byte equality observed |
| minus_mm_test.test | 10 | 0.001025s | 0.001072s | 0.001016s | byte equality observed |
| minus_q_test.test | 10 | 0.001040s | 0.001072s | 0.001057s | byte equality observed |
| minus_qq_test.test | 10 | 0.001048s | 0.001019s | 0.001024s | byte equality observed |
| minus_v_test.test | 10 | 0.001003s | 0.001010s | 0.001025s | byte equality observed |
| minus_vv_test.test | 10 | 0.001023s | 0.001045s | 0.001049s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001020s | 0.001067s | 0.001045s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001007s | 0.001084s | 0.001035s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001026s | 0.001045s | 0.001037s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001032s | 0.001020s | 0.001014s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001020s | 0.001045s | 0.001037s | byte equality observed |
| mul_mm_test.test | 10 | 0.001019s | 0.001033s | 0.001032s | byte equality observed |
| mul_ms_test.test | 10 | 0.001037s | 0.001042s | 0.001049s | byte equality observed |
| mul_mv_test.test | 10 | 0.001023s | 0.001077s | 0.001021s | byte equality observed |
| mul_qq_test.test | 10 | 0.001054s | 0.001071s | 0.001040s | byte equality observed |
| mul_qs_test.test | 10 | 0.001002s | 0.001039s | 0.001025s | byte equality observed |
| mul_qv_test.test | 10 | 0.001036s | 0.001059s | 0.001035s | byte equality observed |
| mul_sm_test.test | 10 | 0.001035s | 0.001038s | 0.001005s | byte equality observed |
| mul_sv_test.test | 10 | 0.001021s | 0.001066s | 0.001047s | byte equality observed |
| mul_vm_test.test | 10 | 0.001028s | 0.001062s | 0.001027s | byte equality observed |
| mul_vs_test.test | 10 | 0.001009s | 0.001057s | 0.001021s | byte equality observed |
| neg_col_test.test | 10 | 0.001004s | 0.001068s | 0.001037s | byte equality observed |
| neg_row_test.test | 10 | 0.001000s | 0.001038s | 0.001032s | byte equality observed |
| normalize_q_test.test | 10 | 0.001006s | 0.001067s | 0.000997s | byte equality observed |
| normalize_v_test.test | 10 | 0.001039s | 0.001023s | 0.001044s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001012s | 0.001037s | 0.001008s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001038s | 0.001062s | 0.001045s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000996s | 0.001047s | 0.001040s | byte equality observed |
| plus_mm_test.test | 10 | 0.001018s | 0.001048s | 0.001049s | byte equality observed |
| plus_qq_test.test | 10 | 0.001009s | 0.001042s | 0.001021s | byte equality observed |
| plus_vv_test.test | 10 | 0.000997s | 0.001046s | 0.001038s | byte equality observed |
| projection_test.test | 10 | 0.001031s | 0.001029s | 0.001043s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001006s | 0.001043s | 0.001048s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001048s | 0.000985s | 0.000986s | byte equality observed |
| rot_mat_test.test | 1 | 0.031242s | 0.030755s | 0.034689s | byte equality observed |
| rot_quat_test.test | 10 | 0.000942s | 0.000933s | 0.000935s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000996s | 0.000992s | 0.000945s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001050s | 0.001061s | 0.001023s | byte equality observed |
| roty_mat_test.test | 10 | 0.001054s | 0.001067s | 0.001067s | byte equality observed |
| roty_quat_test.test | 10 | 0.001044s | 0.001061s | 0.001041s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001057s | 0.001084s | 0.001041s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001056s | 0.001045s | 0.001017s | byte equality observed |
| row_mat_test.test | 10 | 0.001020s | 0.001035s | 0.001031s | byte equality observed |
| row_test.test | 10 | 0.001032s | 0.001018s | 0.001045s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001016s | 0.001032s | 0.001016s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001041s | 0.001008s | 0.001035s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000986s | 0.001011s | 0.001008s | byte equality observed |
| slerp_test.test | 2 | 0.014706s | 0.012432s | 0.013181s | byte equality observed |
| swap_cols_test.test | 10 | 0.000954s | 0.000985s | 0.000953s | byte equality observed |
| swap_rows_test.test | 10 | 0.001007s | 0.001037s | 0.000998s | byte equality observed |
| swizzle2_test.test | 10 | 0.001011s | 0.001082s | 0.001045s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001033s | 0.001031s | 0.001074s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001008s | 0.001074s | 0.001099s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001047s | 0.001012s | 0.001092s | byte equality observed |
| swizzle3_test.test | 10 | 0.001015s | 0.001034s | 0.001117s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001046s | 0.001040s | 0.001098s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001029s | 0.001045s | 0.001094s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001035s | 0.001058s | 0.001126s | byte equality observed |
| swizzle4_test.test | 10 | 0.001019s | 0.001035s | 0.001092s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001036s | 0.001050s | 0.001084s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001013s | 0.001046s | 0.001126s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001041s | 0.001010s | 0.001116s | byte equality observed |
| to_string_test.test | 10 | 0.001039s | 0.001107s | 0.001174s | byte equality observed |
| transform_test.test | 10 | 0.001060s | 0.001019s | 0.001112s | byte equality observed |
| translation_mat_test.test | 10 | 0.001046s | 0.001055s | 0.001096s | byte equality observed |
| translation_test.test | 10 | 0.001060s | 0.001033s | 0.001102s | byte equality observed |
| transpose_test.test | 10 | 0.001045s | 0.001046s | 0.001157s | byte equality observed |
| vec_index_test.test | 10 | 0.001069s | 0.001051s | 0.001170s | byte equality observed |
| vec_register_test.test | 10 | 0.001037s | 0.001030s | 0.001170s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001075s | 0.001030s | 0.001166s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001040s | 0.001054s | 0.001180s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001035s | 0.001079s | 0.001196s | byte equality observed |
| zero_mat_test.test | 10 | 0.001038s | 0.001012s | 0.001184s | byte equality observed |
| zero_quat_test.test | 10 | 0.001036s | 0.001036s | 0.001184s | byte equality observed |
| zero_vec_test.test | 10 | 0.001024s | 0.001005s | 0.001179s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
