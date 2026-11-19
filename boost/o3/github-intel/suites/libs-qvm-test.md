# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.274137 | 0.764600 | 0.790477 | 0.002119 | 0.002249 | 0.002070 |
| mat_traits_array_test.test | RUN | 0.203031 | 0.770255 | 0.616691 | 0.001879 | 0.001515 | 0.001411 |
| mat_traits_std_array_test.test | RUN | 0.210788 | 0.586427 | 0.635063 | 0.001612 | 0.001510 | 0.001429 |
| vec_traits_array_test.test | RUN | 0.184570 | 0.585879 | 0.521499 | 0.001473 | 0.001712 | 0.001383 |
| vec_traits_gnuc_test.test | RUN | 0.331218 | 0.708129 | 1.013175 | 0.001501 | 0.001551 | 0.001739 |
| vec_traits_std_array_test.test | RUN | 0.177957 | 0.453775 | 0.518735 | 0.001598 | 0.001548 | 0.001572 |
| quat_traits_array_test.test | RUN | 0.177736 | 0.619786 | 0.525024 | 0.001085 | 0.001466 | 0.001480 |
| quat_traits_std_array_test.test | RUN | 0.174707 | 0.465894 | 0.517432 | 0.001188 | 0.001538 | 0.001681 |
| access_m_test.test | RUN | 0.292461 | 1.094727 | 1.225447 | 0.001515 | 0.001767 | 0.001516 |
| access_m_fail1.test | COMPILE_FAIL | 0.028283 | 0.046919 | 0.077343 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.027406 | 0.045186 | 0.074095 | — | — | — |
| access_q_test.test | RUN | 0.234322 | 0.563317 | 0.717240 | 0.001567 | 0.001737 | 0.001658 |
| access_q_fail.test | COMPILE_FAIL | 0.021657 | 0.037632 | 0.063584 | — | — | — |
| access_v_test.test | RUN | 0.239935 | 0.588480 | 0.715446 | 0.001340 | 0.001663 | 0.001576 |
| access_v_fail1.test | COMPILE_FAIL | 0.019366 | 0.034268 | 0.054658 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018611 | 0.034601 | 0.057362 | — | — | — |
| assign_test.test | RUN | 0.359795 | 0.909987 | 1.346818 | 0.001800 | 0.001788 | 0.001722 |
| to_string_test.test | RUN | 0.431179 | 1.554186 | 7.635963 | 0.001554 | 0.001813 | 0.001494 |
| cmp_vv_test.test | RUN | 0.290635 | 0.755274 | 0.919341 | 0.001408 | 0.001634 | 0.001559 |
| cross_test.test | RUN | 0.279686 | 0.675959 | 0.914171 | 0.001498 | 0.001891 | 0.001380 |
| div_eq_vs_test.test | RUN | 0.271350 | 0.629022 | 0.826779 | 0.001871 | 0.001744 | 0.001639 |
| div_vs_test.test | RUN | 0.284167 | 0.781273 | 0.878235 | 0.001563 | 0.001599 | 0.001552 |
| dot_vv_test.test | RUN | 0.270078 | 0.691099 | 0.796914 | 0.001612 | 0.001686 | 0.001477 |
| eq_vv_test.test | RUN | 0.307098 | 0.786867 | 0.913605 | 0.001461 | 0.001803 | 0.001589 |
| mag_v_test.test | RUN | 0.268946 | 0.637219 | 0.789778 | 0.001742 | 0.001608 | 0.001455 |
| mag_sqr_v_test.test | RUN | 0.266067 | 0.640836 | 0.757277 | 0.001472 | 0.001718 | 0.001673 |
| minus_v_test.test | RUN | 0.277502 | 0.750673 | 0.867824 | 0.001588 | 0.001792 | 0.001502 |
| minus_eq_vv_test.test | RUN | 0.276982 | 0.729257 | 0.843490 | 0.001535 | 0.001626 | 0.001569 |
| minus_vv_test.test | RUN | 0.287266 | 0.786578 | 0.860541 | 0.001672 | 0.001584 | 0.001365 |
| mul_eq_vs_test.test | RUN | 0.271905 | 0.638343 | 0.822150 | 0.001457 | 0.001753 | 0.001557 |
| mul_vs_test.test | RUN | 0.282741 | 0.784143 | 0.852913 | 0.001536 | 0.001748 | 0.001582 |
| mul_sv_test.test | RUN | 0.292411 | 0.796296 | 0.879160 | 0.001514 | 0.001726 | 0.001525 |
| mul_vm_test.test | RUN | 0.395566 | 1.414263 | 1.381843 | 0.001602 | 0.001703 | 0.001656 |
| normalize_v_test.test | RUN | 0.295843 | 0.976173 | 0.902227 | 0.001552 | 0.001629 | 0.001555 |
| plus_eq_vv_test.test | RUN | 0.275557 | 0.747768 | 0.769878 | 0.001574 | 0.001689 | 0.001588 |
| plus_vv_test.test | RUN | 0.288157 | 0.789431 | 0.864814 | 0.001374 | 0.001701 | 0.001411 |
| scalar_cast_v_test.test | RUN | 0.268701 | 0.579132 | 0.727365 | 0.001493 | 0.001658 | 0.001208 |
| vec_index_test.test | RUN | 0.233405 | 0.595461 | 0.698918 | 0.001542 | 0.001876 | 0.001663 |
| vec_register_test.test | RUN | 0.155817 | 0.540064 | 0.498429 | 0.001614 | 0.001624 | 0.001693 |
| cmp_mm_test.test | RUN | 0.473932 | 1.741637 | 1.829488 | 0.001574 | 0.001634 | 0.001564 |
| determinant_test.test | RUN | 0.324723 | 0.901388 | 0.986511 | 0.001586 | 0.001696 | 0.001862 |
| div_eq_ms_test.test | RUN | 0.323688 | 0.818991 | 1.106328 | 0.001485 | 0.001577 | 0.001712 |
| div_ms_test.test | RUN | 0.383036 | 1.317477 | 1.384917 | 0.001561 | 0.001580 | 0.001651 |
| eq_mm_test.test | RUN | 0.444487 | 1.613122 | 1.750675 | 0.001495 | 0.001726 | 0.001647 |
| minus_m_test.test | RUN | 0.388232 | 1.288932 | 1.273983 | 0.001466 | 0.001700 | 0.001658 |
| minus_eq_mm_test.test | RUN | 0.360362 | 1.196326 | 1.209518 | 0.001640 | 0.001746 | 0.001668 |
| minus_mm_test.test | RUN | 0.410092 | 1.540041 | 1.412717 | 0.001679 | 0.001650 | 0.001612 |
| mul_eq_mm_test.test | RUN | 0.332570 | 1.123123 | 1.074807 | 0.001472 | 0.001580 | 0.001582 |
| mul_eq_ms_test.test | RUN | 0.327065 | 0.817429 | 1.105114 | 0.001645 | 0.001765 | 0.001543 |
| mul_mm_test.test | RUN | 0.483635 | 2.520089 | 1.823924 | 0.001550 | 0.001680 | 0.001656 |
| mul_ms_test.test | RUN | 0.392427 | 1.309280 | 1.411852 | 0.001462 | 0.001639 | 0.001475 |
| mul_sm_test.test | RUN | 0.395950 | 1.306568 | 1.405101 | 0.001598 | 0.001598 | 0.001627 |
| mul_mv_test.test | RUN | 0.407634 | 1.399807 | 1.395887 | 0.001597 | 0.001394 | 0.001656 |
| inverse_m_test.test | RUN | 0.558451 | 2.586985 | 1.976895 | 0.001663 | 0.001650 | 0.001511 |
| plus_eq_mm_test.test | RUN | 0.363064 | 1.213450 | 1.208084 | 0.001576 | 0.001648 | 0.001604 |
| plus_mm_test.test | RUN | 0.402664 | 1.529954 | 1.436565 | 0.001135 | 0.001655 | 0.001071 |
| scalar_cast_m_test.test | RUN | 0.301195 | 0.681700 | 0.872168 | 0.001482 | 0.001647 | 0.001808 |
| mat_index_test.test | RUN | 0.253035 | 0.643710 | 0.774021 | 0.001691 | 0.001484 | 0.001549 |
| cmp_qq_test.test | RUN | 0.261489 | 0.596293 | 0.732760 | 0.001686 | 0.001493 | 0.001626 |
| conjugate_test.test | RUN | 0.264889 | 0.617230 | 0.770223 | 0.001690 | 0.001662 | 0.001740 |
| normalize_q_test.test | RUN | 0.260260 | 0.691328 | 0.798837 | 0.001495 | 0.001528 | 0.001490 |
| div_eq_qs_test.test | RUN | 0.261548 | 0.586496 | 0.743702 | 0.001576 | 0.001390 | 0.001654 |
| div_qs_test.test | RUN | 0.263477 | 0.619969 | 0.758312 | 0.001693 | 0.001621 | 0.001718 |
| dot_qq_test.test | RUN | 0.261364 | 0.597515 | 0.794486 | 0.001649 | 0.001760 | 0.001770 |
| eq_qq_test.test | RUN | 0.272214 | 0.634300 | 0.791956 | 0.001549 | 0.001768 | 0.001627 |
| inverse_q_test.test | RUN | 0.328415 | 0.839950 | 0.968138 | 0.001647 | 0.001766 | 0.001731 |
| mag_q_test.test | RUN | 0.262358 | 0.609806 | 0.761808 | 0.001501 | 0.001531 | 0.001560 |
| mag_sqr_q_test.test | RUN | 0.268241 | 0.612613 | 0.768419 | 0.001670 | 0.001716 | 0.001589 |
| minus_q_test.test | RUN | 0.260863 | 0.616625 | 0.771923 | 0.001566 | 0.001666 | 0.001506 |
| minus_eq_qq_test.test | RUN | 0.260944 | 0.617217 | 0.764133 | 0.001684 | 0.001567 | 0.001587 |
| minus_qq_test.test | RUN | 0.263762 | 0.629115 | 0.776094 | 0.001535 | 0.001629 | 0.001596 |
| mul_eq_qs_test.test | RUN | 0.267617 | 0.578382 | 0.740626 | 0.001570 | 0.001675 | 0.001589 |
| mul_qs_test.test | RUN | 0.260993 | 0.618099 | 0.762854 | 0.001351 | 0.001659 | 0.001617 |
| mul_qv_test.test | RUN | 0.330304 | 0.838913 | 0.980115 | 0.001713 | 0.001684 | 0.001656 |
| mul_qq_test.test | RUN | 0.316414 | 0.870886 | 0.954706 | 0.001430 | 0.001702 | 0.001515 |
| mul_eq_qq_test.test | RUN | 0.317446 | 0.865109 | 0.958441 | 0.001545 | 0.001736 | 0.001557 |
| plus_eq_qq_test.test | RUN | 0.269084 | 0.613194 | 0.737283 | 0.001535 | 0.001609 | 0.001662 |
| plus_qq_test.test | RUN | 0.269767 | 0.633384 | 0.766503 | 0.001529 | 0.001626 | 0.001820 |
| scalar_cast_q_test.test | RUN | 0.264942 | 0.571519 | 0.744125 | 0.001545 | 0.001690 | 0.001405 |
| slerp_test.test | RUN | 0.286924 | 1.201384 | 0.929580 | 0.020157 | 0.017983 | 0.018457 |
| convert_to_test.test | RUN | 0.401403 | 1.110007 | 1.421652 | 0.001688 | 0.001452 | 0.001660 |
| rot_mat_test.test | RUN | 0.640310 | 5.163534 | 4.628840 | 0.040127 | 0.042084 | 0.047284 |
| rot_quat_test.test | RUN | 0.323198 | 1.023649 | 1.016948 | 0.001746 | 0.001691 | 0.001687 |
| rotx_mat_test.test | RUN | 0.382516 | 1.337341 | 1.305082 | 0.001534 | 0.001768 | 0.001725 |
| rotx_quat_test.test | RUN | 0.314413 | 0.860483 | 0.919541 | 0.001522 | 0.001739 | 0.001684 |
| roty_mat_test.test | RUN | 0.378010 | 1.335873 | 1.296767 | 0.001696 | 0.001690 | 0.001621 |
| roty_quat_test.test | RUN | 0.319004 | 0.861616 | 0.874957 | 0.001906 | 0.001723 | 0.001712 |
| rotz_mat_test.test | RUN | 0.394704 | 1.525987 | 1.392674 | 0.001627 | 0.001640 | 0.001820 |
| rotz_quat_test.test | RUN | 0.317413 | 0.852083 | 0.939395 | 0.001596 | 0.001604 | 0.001516 |
| zero_vec_test.test | RUN | 0.273315 | 0.746193 | 0.774345 | 0.001723 | 0.001618 | 0.001689 |
| zero_mat_test.test | RUN | 0.337415 | 1.208211 | 1.132375 | 0.001448 | 0.001679 | 0.001583 |
| zero_quat_test.test | RUN | 0.257433 | 0.610677 | 0.756769 | 0.001676 | 0.001734 | 0.001687 |
| identity_mat_test.test | RUN | 0.310783 | 0.908033 | 0.956166 | 0.001540 | 0.001500 | 0.001747 |
| identity_quat_test.test | RUN | 0.260924 | 0.591867 | 0.748040 | 0.001646 | 0.001686 | 0.001759 |
| col_test.test | RUN | 0.519329 | 1.905288 | 2.182240 | 0.001580 | 0.001705 | 0.001476 |
| col_mat_test.test | RUN | 0.331218 | 0.858421 | 1.021618 | 0.001699 | 0.001762 | 0.001642 |
| neg_col_test.test | RUN | 0.389207 | 1.205373 | 1.323745 | 0.001658 | 0.001642 | 0.002536 |
| neg_row_test.test | RUN | 0.394871 | 1.220988 | 1.323921 | 0.001922 | 0.001716 | 0.001618 |
| del_col_test.test | RUN | 0.422032 | 1.351049 | 1.372318 | 0.001954 | 0.001816 | 0.001634 |
| del_row_test.test | RUN | 0.414395 | 1.327057 | 1.350588 | 0.001621 | 0.001743 | 0.001628 |
| del_row_col_test.test | RUN | 0.570530 | 2.471815 | 2.547730 | 0.001760 | 0.001708 | 0.001639 |
| swap_cols_test.test | RUN | 0.782192 | 3.382115 | 3.166890 | 0.001617 | 0.001625 | 0.001658 |
| swap_rows_test.test | RUN | 0.855651 | 3.507058 | 3.128146 | 0.001664 | 0.001756 | 0.001735 |
| diag_test.test | RUN | 0.349487 | 0.889404 | 1.157384 | 0.001526 | 0.001676 | 0.002273 |
| diag_mat_test.test | RUN | 0.344080 | 0.871648 | 1.012683 | 0.001774 | 0.001744 | 0.001620 |
| row_test.test | RUN | 0.514010 | 1.904591 | 2.134318 | 0.001510 | 0.001654 | 0.001681 |
| row_mat_test.test | RUN | 0.329487 | 0.851631 | 1.005047 | 0.001914 | 0.001694 | 0.001621 |
| transpose_test.test | RUN | 0.403480 | 1.288276 | 1.383703 | 0.001546 | 0.001674 | 0.001534 |
| translation_test.test | RUN | 0.326544 | 0.809546 | 1.021355 | 0.001474 | 0.001758 | 0.001556 |
| translation_mat_test.test | RUN | 0.350303 | 0.806361 | 1.109693 | 0.001703 | 0.001552 | 0.001638 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.120318 | 0.235767 | 0.290631 | — | — | — |
| swizzle2_test2.test | RUN | 0.140577 | 0.350396 | 0.421117 | 0.001476 | 0.001709 | 0.001479 |
| swizzle2_test3.test | RUN | 0.141101 | 0.353523 | 0.405278 | 0.001566 | 0.001556 | 0.001509 |
| swizzle2_test4.test | RUN | 0.142695 | 0.341918 | 0.413564 | 0.001503 | 0.001718 | 0.001520 |
| swizzle2_test.test | RUN | 0.455662 | 0.969674 | 1.316464 | 0.001696 | 0.001538 | 0.001585 |
| swizzle3_test2.test | RUN | 0.161405 | 0.373875 | 0.455434 | 0.001684 | 0.001742 | 0.001462 |
| swizzle3_test3.test | RUN | 0.161681 | 0.375161 | 0.453758 | 0.001564 | 0.001679 | 0.001437 |
| swizzle3_test4.test | RUN | 0.164177 | 0.379469 | 0.455673 | 0.001492 | 0.001702 | 0.001356 |
| swizzle3_test.test | RUN | 0.444852 | 0.993842 | 1.328906 | 0.001559 | 0.001531 | 0.001615 |
| swizzle4_test2.test | RUN | 0.265821 | 0.550797 | 0.754594 | 0.001663 | 0.001660 | 0.001608 |
| swizzle4_test3.test | RUN | 0.264989 | 0.544974 | 0.751775 | 0.001607 | 0.001990 | 0.001364 |
| swizzle4_test4.test | RUN | 0.270914 | 0.544464 | 0.735917 | 0.001524 | 0.001595 | 0.001682 |
| swizzle4_test.test | RUN | 0.455279 | 1.088850 | 1.372703 | 0.001604 | 0.001781 | 0.001581 |
| deduce_scalar_test.test | COMPILE | 0.023758 | 0.050339 | 0.068969 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.174171 | 0.424685 | 0.501994 | 0.001711 | 0.001683 | 0.001528 |
| deduce_scalar_mv_test.test | RUN | 0.205918 | 0.464714 | 0.574935 | 0.002038 | 0.001463 | 0.001617 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.019016 | 0.032509 | 0.054443 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019897 | 0.046075 | 0.062439 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.021081 | 0.044592 | 0.060245 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.022816 | 0.043156 | 0.059718 | — | — | — |
| interop_test.test | RUN | 0.202458 | 0.603947 | 0.826490 | 0.000570 | 0.000775 | 0.001597 |
| transform_test.test | RUN | 0.403461 | 0.843563 | 1.056210 | 0.001252 | 0.001199 | 0.001074 |
| projection_test.test | RUN | 0.289385 | 0.692496 | 0.829358 | 0.001223 | 0.001155 | 0.001149 |
| scalar_traits_test.test | COMPILE | 0.022454 | 0.047030 | 0.065091 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.967×, 1.001× | 1.010× |
| clang | 1.041× | 1.029×, 1.053× | 1.038× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001043s | 0.001020s | 0.001051s | byte equality observed |
| access_q_test.test | 10 | 0.001042s | 0.001005s | 0.001029s | byte equality observed |
| access_v_test.test | 10 | 0.001049s | 0.001018s | 0.001030s | byte equality observed |
| assign_test.test | 10 | 0.001070s | 0.000993s | 0.001030s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001035s | 0.001044s | 0.001039s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001046s | 0.001032s | 0.001001s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001030s | 0.000993s | 0.001046s | byte equality observed |
| col_mat_test.test | 10 | 0.001014s | 0.001054s | 0.001035s | byte equality observed |
| col_test.test | 10 | 0.001028s | 0.001038s | 0.001034s | byte equality observed |
| conjugate_test.test | 10 | 0.001022s | 0.001015s | 0.001042s | byte equality observed |
| convert_to_test.test | 10 | 0.001023s | 0.001030s | 0.001070s | byte equality observed |
| cross_test.test | 10 | 0.001013s | 0.000998s | 0.001066s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001028s | 0.001029s | 0.001083s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001020s | 0.001030s | 0.001036s | byte equality observed |
| del_col_test.test | 10 | 0.001028s | 0.001038s | 0.001076s | byte equality observed |
| del_row_col_test.test | 10 | 0.001017s | 0.001007s | 0.001036s | byte equality observed |
| del_row_test.test | 10 | 0.001047s | 0.001030s | 0.001094s | byte equality observed |
| determinant_test.test | 10 | 0.001057s | 0.001079s | 0.001043s | byte equality observed |
| diag_mat_test.test | 10 | 0.001021s | 0.000998s | 0.001065s | byte equality observed |
| diag_test.test | 10 | 0.001006s | 0.001034s | 0.001041s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001049s | 0.001042s | 0.001039s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001017s | 0.001042s | 0.001017s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001032s | 0.001028s | 0.001000s | byte equality observed |
| div_ms_test.test | 10 | 0.001054s | 0.001012s | 0.001016s | byte equality observed |
| div_qs_test.test | 10 | 0.001029s | 0.001036s | 0.001005s | byte equality observed |
| div_vs_test.test | 10 | 0.001016s | 0.000992s | 0.001024s | byte equality observed |
| dot_qq_test.test | 10 | 0.001039s | 0.001033s | 0.001026s | byte equality observed |
| dot_vv_test.test | 10 | 0.001019s | 0.001008s | 0.001003s | byte equality observed |
| eq_mm_test.test | 10 | 0.001044s | 0.001042s | 0.001057s | byte equality observed |
| eq_qq_test.test | 10 | 0.001013s | 0.001022s | 0.001075s | byte equality observed |
| eq_vv_test.test | 10 | 0.001012s | 0.001020s | 0.001007s | byte equality observed |
| identity_mat_test.test | 10 | 0.001008s | 0.000978s | 0.001012s | byte equality observed |
| identity_quat_test.test | 10 | 0.001019s | 0.001006s | 0.001004s | byte equality observed |
| interop_test.test | 10 | 0.000461s | 0.000462s | 0.001021s | byte equality observed |
| inverse_m_test.test | 10 | 0.001124s | 0.001060s | 0.001089s | byte equality observed |
| inverse_q_test.test | 10 | 0.001034s | 0.001039s | 0.001050s | byte equality observed |
| mag_q_test.test | 10 | 0.001028s | 0.001035s | 0.001003s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001024s | 0.001012s | 0.001006s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001041s | 0.000978s | 0.001069s | byte equality observed |
| mag_v_test.test | 10 | 0.001046s | 0.001006s | 0.001028s | byte equality observed |
| mat_index_test.test | 10 | 0.001062s | 0.000983s | 0.001061s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001032s | 0.001030s | 0.001024s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001053s | 0.001028s | 0.001047s | byte equality observed |
| math_test.test | 10 | 0.001581s | 0.001475s | 0.001395s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001021s | 0.001030s | 0.000999s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001037s | 0.001009s | 0.001017s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001054s | 0.000988s | 0.001003s | byte equality observed |
| minus_m_test.test | 10 | 0.001035s | 0.000994s | 0.001026s | byte equality observed |
| minus_mm_test.test | 10 | 0.001053s | 0.001033s | 0.001032s | byte equality observed |
| minus_q_test.test | 10 | 0.001043s | 0.001021s | 0.001002s | byte equality observed |
| minus_qq_test.test | 10 | 0.001029s | 0.001020s | 0.001025s | byte equality observed |
| minus_v_test.test | 10 | 0.001061s | 0.001008s | 0.001011s | byte equality observed |
| minus_vv_test.test | 10 | 0.001034s | 0.001035s | 0.001018s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001010s | 0.001022s | 0.001003s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001035s | 0.001051s | 0.001025s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001052s | 0.001049s | 0.001051s | byte equality observed |
| mul_eq_qs_test.test | 9 | 0.001044s | 0.001022s | 0.001052s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001008s | 0.001019s | 0.001031s | byte equality observed |
| mul_mm_test.test | 10 | 0.001041s | 0.001023s | 0.001037s | byte equality observed |
| mul_ms_test.test | 10 | 0.001034s | 0.001024s | 0.001039s | byte equality observed |
| mul_mv_test.test | 10 | 0.001055s | 0.001034s | 0.001006s | byte equality observed |
| mul_qq_test.test | 10 | 0.001072s | 0.001028s | 0.001089s | byte equality observed |
| mul_qs_test.test | 10 | 0.001017s | 0.001027s | 0.000988s | byte equality observed |
| mul_qv_test.test | 10 | 0.001025s | 0.001032s | 0.001039s | byte equality observed |
| mul_sm_test.test | 10 | 0.001019s | 0.001012s | 0.001041s | byte equality observed |
| mul_sv_test.test | 10 | 0.001021s | 0.000995s | 0.001022s | byte equality observed |
| mul_vm_test.test | 10 | 0.001005s | 0.001024s | 0.001032s | byte equality observed |
| mul_vs_test.test | 10 | 0.001020s | 0.001016s | 0.001026s | byte equality observed |
| neg_col_test.test | 10 | 0.001053s | 0.000988s | 0.000991s | byte equality observed |
| neg_row_test.test | 10 | 0.001029s | 0.001028s | 0.001020s | byte equality observed |
| normalize_q_test.test | 10 | 0.001067s | 0.001031s | 0.001042s | byte equality observed |
| normalize_v_test.test | 10 | 0.001060s | 0.001008s | 0.001002s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001061s | 0.001035s | 0.001001s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001031s | 0.001008s | 0.001037s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001050s | 0.001040s | 0.001028s | byte equality observed |
| plus_mm_test.test | 10 | 0.001032s | 0.001050s | 0.001049s | byte equality observed |
| plus_qq_test.test | 10 | 0.001020s | 0.001060s | 0.001024s | byte equality observed |
| plus_vv_test.test | 10 | 0.001053s | 0.001010s | 0.001033s | byte equality observed |
| projection_test.test | 10 | 0.001032s | 0.001049s | 0.001012s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001051s | 0.001037s | 0.001014s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000998s | 0.001020s | 0.001000s | byte equality observed |
| rot_mat_test.test | 1 | 0.027713s | 0.029407s | 0.032444s | byte equality observed |
| rot_quat_test.test | 10 | 0.000959s | 0.000981s | 0.000987s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001012s | 0.001028s | 0.001000s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001075s | 0.001033s | 0.001049s | byte equality observed |
| roty_mat_test.test | 10 | 0.001053s | 0.001062s | 0.001057s | byte equality observed |
| roty_quat_test.test | 10 | 0.001052s | 0.001084s | 0.001088s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001076s | 0.001060s | 0.001060s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001049s | 0.001056s | 0.001065s | byte equality observed |
| row_mat_test.test | 10 | 0.001011s | 0.001054s | 0.001082s | byte equality observed |
| row_test.test | 10 | 0.001028s | 0.001065s | 0.001052s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001011s | 0.001053s | 0.001043s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001000s | 0.001055s | 0.001081s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000975s | 0.001005s | 0.001036s | byte equality observed |
| slerp_test.test | 2 | 0.014868s | 0.012201s | 0.013043s | byte equality observed |
| swap_cols_test.test | 10 | 0.000952s | 0.000967s | 0.000963s | byte equality observed |
| swap_rows_test.test | 10 | 0.001014s | 0.001007s | 0.001022s | byte equality observed |
| swizzle2_test.test | 10 | 0.001028s | 0.001078s | 0.001080s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001021s | 0.001022s | 0.001061s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001008s | 0.001068s | 0.001107s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001026s | 0.001038s | 0.001053s | byte equality observed |
| swizzle3_test.test | 10 | 0.001041s | 0.001101s | 0.001033s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001024s | 0.001009s | 0.001071s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001008s | 0.001012s | 0.001029s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001026s | 0.001003s | 0.001046s | byte equality observed |
| swizzle4_test.test | 10 | 0.001025s | 0.001031s | 0.001059s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001027s | 0.001043s | 0.001035s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001032s | 0.001012s | 0.001037s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001020s | 0.001010s | 0.001050s | byte equality observed |
| to_string_test.test | 10 | 0.001050s | 0.001045s | 0.001081s | byte equality observed |
| transform_test.test | 10 | 0.001045s | 0.001057s | 0.001047s | byte equality observed |
| translation_mat_test.test | 10 | 0.001030s | 0.001030s | 0.001005s | byte equality observed |
| translation_test.test | 10 | 0.001032s | 0.001029s | 0.001058s | byte equality observed |
| transpose_test.test | 10 | 0.000995s | 0.001025s | 0.001064s | byte equality observed |
| vec_index_test.test | 10 | 0.001009s | 0.001037s | 0.001106s | byte equality observed |
| vec_register_test.test | 10 | 0.001056s | 0.001020s | 0.001105s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001016s | 0.001000s | 0.001088s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001046s | 0.001034s | 0.001107s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001021s | 0.001004s | 0.001177s | byte equality observed |
| zero_mat_test.test | 10 | 0.001003s | 0.001069s | 0.001119s | byte equality observed |
| zero_quat_test.test | 10 | 0.001045s | 0.001012s | 0.001142s | byte equality observed |
| zero_vec_test.test | 10 | 0.001007s | 0.001021s | 0.001143s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
