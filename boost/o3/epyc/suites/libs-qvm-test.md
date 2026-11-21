# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.241891 | 0.632591 | 0.767806 | 0.002047 | 0.001767 | 0.002118 |
| mat_traits_array_test.test | RUN | 0.191816 | 0.633076 | 0.611676 | 0.001817 | 0.001318 | 0.001270 |
| mat_traits_std_array_test.test | RUN | 0.189573 | 0.498164 | 0.621886 | 0.001641 | 0.001593 | 0.001311 |
| vec_traits_array_test.test | RUN | 0.170405 | 0.492378 | 0.530900 | 0.001665 | 0.001720 | 0.001423 |
| vec_traits_gnuc_test.test | RUN | 0.296347 | 0.603630 | 1.056985 | 0.001645 | 0.001636 | 0.001585 |
| vec_traits_std_array_test.test | RUN | 0.163440 | 0.390534 | 0.516201 | 0.001594 | 0.001543 | 0.001489 |
| quat_traits_array_test.test | RUN | 0.162643 | 0.505304 | 0.516018 | 0.001605 | 0.001556 | 0.001493 |
| quat_traits_std_array_test.test | RUN | 0.162584 | 0.392643 | 0.535382 | 0.001526 | 0.001685 | 0.001699 |
| access_m_test.test | RUN | 0.256555 | 0.944012 | 1.160465 | 0.001467 | 0.001832 | 0.001124 |
| access_m_fail1.test | COMPILE_FAIL | 0.025445 | 0.042107 | 0.085350 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025125 | 0.040988 | 0.085824 | — | — | — |
| access_q_test.test | RUN | 0.220376 | 0.469600 | 0.640729 | 0.001375 | 0.001665 | 0.001784 |
| access_q_fail.test | COMPILE_FAIL | 0.020223 | 0.035852 | 0.066346 | — | — | — |
| access_v_test.test | RUN | 0.221557 | 0.516864 | 0.674150 | 0.001444 | 0.001818 | 0.001439 |
| access_v_fail1.test | COMPILE_FAIL | 0.017577 | 0.031021 | 0.062036 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017232 | 0.031288 | 0.062055 | — | — | — |
| assign_test.test | RUN | 0.327418 | 0.778170 | 1.197559 | 0.001810 | 0.001758 | 0.001714 |
| to_string_test.test | RUN | 0.370829 | 1.274573 | 6.658717 | 0.001587 | 0.001690 | 0.001665 |
| cmp_vv_test.test | RUN | 0.270870 | 0.627403 | 0.847169 | 0.001570 | 0.001741 | 0.001420 |
| cross_test.test | RUN | 0.264158 | 0.604744 | 0.836798 | 0.001436 | 0.001727 | 0.001520 |
| div_eq_vs_test.test | RUN | 0.251897 | 0.516743 | 0.784408 | 0.001723 | 0.001462 | 0.001649 |
| div_vs_test.test | RUN | 0.256103 | 0.665047 | 0.868502 | 0.001610 | 0.001772 | 0.001660 |
| dot_vv_test.test | RUN | 0.244281 | 0.612009 | 0.806750 | 0.001247 | 0.001703 | 0.001702 |
| eq_vv_test.test | RUN | 0.277521 | 0.652851 | 0.863221 | 0.001566 | 0.001630 | 0.001663 |
| mag_v_test.test | RUN | 0.244512 | 0.544101 | 0.738984 | 0.001566 | 0.001722 | 0.001680 |
| mag_sqr_v_test.test | RUN | 0.246608 | 0.537482 | 0.767907 | 0.001583 | 0.001807 | 0.001845 |
| minus_v_test.test | RUN | 0.251182 | 0.630076 | 0.825140 | 0.001472 | 0.001723 | 0.001355 |
| minus_eq_vv_test.test | RUN | 0.258009 | 0.619238 | 0.765584 | 0.001614 | 0.001873 | 0.001608 |
| minus_vv_test.test | RUN | 0.262498 | 0.665417 | 0.854995 | 0.001706 | 0.001804 | 0.001750 |
| mul_eq_vs_test.test | RUN | 0.250199 | 0.541259 | 0.777253 | 0.001638 | 0.001831 | 0.001293 |
| mul_vs_test.test | RUN | 0.258195 | 0.656003 | 0.862457 | 0.001482 | 0.001818 | 0.001667 |
| mul_sv_test.test | RUN | 0.265089 | 0.661483 | 0.865089 | 0.001699 | 0.001843 | 0.001843 |
| mul_vm_test.test | RUN | 0.350500 | 1.179537 | 1.325804 | 0.001521 | 0.001466 | 0.001717 |
| normalize_v_test.test | RUN | 0.264279 | 0.805410 | 0.815958 | 0.001530 | 0.001670 | 0.001624 |
| plus_eq_vv_test.test | RUN | 0.244634 | 0.630854 | 0.842889 | 0.001555 | 0.001616 | 0.001527 |
| plus_vv_test.test | RUN | 0.267011 | 0.668454 | 0.822031 | 0.001504 | 0.001828 | 0.001500 |
| scalar_cast_v_test.test | RUN | 0.240223 | 0.497322 | 0.758826 | 0.001483 | 0.001675 | 0.001366 |
| vec_index_test.test | RUN | 0.212858 | 0.509278 | 0.691201 | 0.001518 | 0.001408 | 0.001354 |
| vec_register_test.test | RUN | 0.142571 | 0.461560 | 0.490646 | 0.001761 | 0.001656 | 0.001394 |
| cmp_mm_test.test | RUN | 0.408015 | 1.445138 | 1.680698 | 0.001805 | 0.001730 | 0.001761 |
| determinant_test.test | RUN | 0.283538 | 0.763587 | 0.960384 | 0.001708 | 0.001793 | 0.001821 |
| div_eq_ms_test.test | RUN | 0.295477 | 0.688684 | 1.077925 | 0.001620 | 0.001550 | 0.001772 |
| div_ms_test.test | RUN | 0.338187 | 1.066167 | 1.279171 | 0.001421 | 0.001564 | 0.001710 |
| eq_mm_test.test | RUN | 0.392406 | 1.336119 | 1.571889 | 0.001590 | 0.001753 | 0.001788 |
| minus_m_test.test | RUN | 0.341812 | 1.071443 | 1.236908 | 0.001590 | 0.001738 | 0.001318 |
| minus_eq_mm_test.test | RUN | 0.314270 | 1.006769 | 1.165002 | 0.001508 | 0.001676 | 0.001339 |
| minus_mm_test.test | RUN | 0.362193 | 1.257746 | 1.293963 | 0.001482 | 0.001833 | 0.001791 |
| mul_eq_mm_test.test | RUN | 0.296619 | 0.945735 | 1.007041 | 0.001556 | 0.001617 | 0.001741 |
| mul_eq_ms_test.test | RUN | 0.291467 | 0.674517 | 1.047186 | 0.001502 | 0.001637 | 0.001840 |
| mul_mm_test.test | RUN | 0.401829 | 2.083686 | 1.640852 | 0.001553 | 0.001322 | 0.001417 |
| mul_ms_test.test | RUN | 0.344634 | 1.104565 | 1.315567 | 0.001543 | 0.001874 | 0.001632 |
| mul_sm_test.test | RUN | 0.342366 | 1.114107 | 1.345917 | 0.001593 | 0.001714 | 0.001554 |
| mul_mv_test.test | RUN | 0.367377 | 1.185762 | 1.334888 | 0.001626 | 0.001816 | 0.001749 |
| inverse_m_test.test | RUN | 0.467702 | 2.124361 | 1.828528 | 0.001600 | 0.001608 | 0.001835 |
| plus_eq_mm_test.test | RUN | 0.334545 | 0.989886 | 1.185876 | 0.001616 | 0.001803 | 0.001697 |
| plus_mm_test.test | RUN | 0.357674 | 1.268654 | 1.351668 | 0.001699 | 0.001636 | 0.001639 |
| scalar_cast_m_test.test | RUN | 0.277860 | 0.595838 | 0.892170 | 0.001696 | 0.001727 | 0.001540 |
| mat_index_test.test | RUN | 0.226417 | 0.538208 | 0.702040 | 0.001535 | 0.001740 | 0.003878 |
| cmp_qq_test.test | RUN | 0.245225 | 0.512569 | 0.725454 | 0.001708 | 0.001784 | 0.001746 |
| conjugate_test.test | RUN | 0.245348 | 0.525817 | 0.739055 | 0.001605 | 0.001560 | 0.001646 |
| normalize_q_test.test | RUN | 0.243792 | 0.575590 | 0.753543 | 0.001814 | 0.001407 | 0.001416 |
| div_eq_qs_test.test | RUN | 0.243925 | 0.499576 | 0.709726 | 0.001594 | 0.001708 | 0.001497 |
| div_qs_test.test | RUN | 0.245534 | 0.536060 | 0.751998 | 0.001722 | 0.001698 | 0.001607 |
| dot_qq_test.test | RUN | 0.240935 | 0.512561 | 0.743840 | 0.001773 | 0.001797 | 0.001687 |
| eq_qq_test.test | RUN | 0.245002 | 0.543587 | 0.782418 | 0.001709 | 0.001751 | 0.001429 |
| inverse_q_test.test | RUN | 0.293460 | 0.699413 | 0.943526 | 0.001608 | 0.001747 | 0.001728 |
| mag_q_test.test | RUN | 0.251166 | 0.533248 | 0.755909 | 0.001465 | 0.001738 | 0.001481 |
| mag_sqr_q_test.test | RUN | 0.247269 | 0.524365 | 0.763975 | 0.001746 | 0.001750 | 0.001244 |
| minus_q_test.test | RUN | 0.243917 | 0.520113 | 0.749573 | 0.001618 | 0.001867 | 0.001558 |
| minus_eq_qq_test.test | RUN | 0.242859 | 0.525940 | 0.745778 | 0.001552 | 0.001824 | 0.001646 |
| minus_qq_test.test | RUN | 0.246733 | 0.543990 | 0.772352 | 0.001534 | 0.001766 | 0.001761 |
| mul_eq_qs_test.test | RUN | 0.238433 | 0.495979 | 0.761366 | 0.001705 | 0.001806 | 0.001627 |
| mul_qs_test.test | RUN | 0.241195 | 0.522710 | 0.718435 | 0.001727 | 0.001739 | 0.001730 |
| mul_qv_test.test | RUN | 0.299169 | 0.731789 | 0.983032 | 0.001875 | 0.001713 | 0.001714 |
| mul_qq_test.test | RUN | 0.288300 | 0.722987 | 0.975981 | 0.001847 | 0.001794 | 0.001489 |
| mul_eq_qq_test.test | RUN | 0.291417 | 0.733259 | 0.885816 | 0.001596 | 0.001661 | 0.001452 |
| plus_eq_qq_test.test | RUN | 0.238763 | 0.543679 | 0.764034 | 0.001624 | 0.001798 | 0.001708 |
| plus_qq_test.test | RUN | 0.243266 | 0.541047 | 0.738522 | 0.001716 | 0.001786 | 0.001616 |
| scalar_cast_q_test.test | RUN | 0.239897 | 0.508739 | 0.737839 | 0.001651 | 0.001652 | 0.001810 |
| slerp_test.test | RUN | 0.260959 | 0.983557 | 0.863477 | 0.018167 | 0.014614 | 0.015703 |
| convert_to_test.test | RUN | 0.354505 | 0.935548 | 1.341480 | 0.001601 | 0.001390 | 0.001719 |
| rot_mat_test.test | RUN | 0.525917 | 4.140864 | 4.030573 | 0.042633 | 0.038925 | 0.035289 |
| rot_quat_test.test | RUN | 0.299469 | 0.841635 | 0.994218 | 0.001787 | 0.001836 | 0.001619 |
| rotx_mat_test.test | RUN | 0.335968 | 1.119219 | 1.239016 | 0.001551 | 0.001814 | 0.001715 |
| rotx_quat_test.test | RUN | 0.284041 | 0.725755 | 0.904012 | 0.001611 | 0.001688 | 0.001733 |
| roty_mat_test.test | RUN | 0.336740 | 1.127223 | 1.222433 | 0.001785 | 0.001877 | 0.001702 |
| roty_quat_test.test | RUN | 0.284969 | 0.721919 | 0.819029 | 0.001558 | 0.001909 | 0.001512 |
| rotz_mat_test.test | RUN | 0.341315 | 1.231520 | 1.288371 | 0.001511 | 0.001503 | 0.001838 |
| rotz_quat_test.test | RUN | 0.288346 | 0.726665 | 0.884625 | 0.001428 | 0.001673 | 0.001621 |
| zero_vec_test.test | RUN | 0.252432 | 0.629670 | 0.726479 | 0.001685 | 0.001575 | 0.001645 |
| zero_mat_test.test | RUN | 0.313579 | 1.001206 | 1.100389 | 0.001694 | 0.001837 | 0.001616 |
| zero_quat_test.test | RUN | 0.240551 | 0.525298 | 0.719814 | 0.001503 | 0.001609 | 0.001406 |
| identity_mat_test.test | RUN | 0.283563 | 0.771471 | 0.969881 | 0.001590 | 0.001736 | 0.001759 |
| identity_quat_test.test | RUN | 0.242201 | 0.502947 | 0.754004 | 0.001668 | 0.001861 | 0.001567 |
| col_test.test | RUN | 0.472919 | 1.618443 | 2.076236 | 0.001568 | 0.001673 | 0.001644 |
| col_mat_test.test | RUN | 0.303761 | 0.742366 | 1.018013 | 0.001593 | 0.001818 | 0.001722 |
| neg_col_test.test | RUN | 0.346682 | 1.001186 | 1.275398 | 0.001712 | 0.001844 | 0.001444 |
| neg_row_test.test | RUN | 0.365221 | 1.046352 | 1.262115 | 0.001792 | 0.001800 | 0.001664 |
| del_col_test.test | RUN | 0.365222 | 1.121764 | 1.332403 | 0.001738 | 0.001837 | 0.001695 |
| del_row_test.test | RUN | 0.363339 | 1.114634 | 1.257684 | 0.001672 | 0.001895 | 0.001670 |
| del_row_col_test.test | RUN | 0.505127 | 2.093711 | 2.460329 | 0.001767 | 0.001787 | 0.001626 |
| swap_cols_test.test | RUN | 0.672030 | 2.835932 | 2.949309 | 0.001658 | 0.001787 | 0.001832 |
| swap_rows_test.test | RUN | 0.729127 | 2.976201 | 2.955873 | 0.001713 | 0.001261 | 0.001675 |
| diag_test.test | RUN | 0.314097 | 0.742416 | 1.141743 | 0.001535 | 0.001740 | 0.001472 |
| diag_mat_test.test | RUN | 0.312508 | 0.741884 | 0.953205 | 0.001648 | 0.001789 | 0.001738 |
| row_test.test | RUN | 0.469134 | 1.610422 | 1.967427 | 0.001538 | 0.001802 | 0.001631 |
| row_mat_test.test | RUN | 0.310405 | 0.696846 | 0.972946 | 0.001587 | 0.001665 | 0.001715 |
| transpose_test.test | RUN | 0.356092 | 1.080791 | 1.311372 | 0.001688 | 0.001520 | 0.001164 |
| translation_test.test | RUN | 0.287287 | 0.691474 | 0.959432 | 0.001536 | 0.001616 | 0.001544 |
| translation_mat_test.test | RUN | 0.322018 | 0.714548 | 1.066231 | 0.001798 | 0.001502 | 0.001314 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.106948 | 0.200848 | 0.303481 | — | — | — |
| swizzle2_test2.test | RUN | 0.129373 | 0.299669 | 0.421672 | 0.001676 | 0.001744 | 0.001516 |
| swizzle2_test3.test | RUN | 0.126244 | 0.302761 | 0.412936 | 0.001291 | 0.001439 | 0.001299 |
| swizzle2_test4.test | RUN | 0.129660 | 0.291165 | 0.412134 | 0.001474 | 0.001528 | 0.001588 |
| swizzle2_test.test | RUN | 0.414217 | 0.855638 | 1.359614 | 0.001658 | 0.001612 | 0.001834 |
| swizzle3_test2.test | RUN | 0.145320 | 0.312722 | 0.475842 | 0.001555 | 0.001699 | 0.001669 |
| swizzle3_test3.test | RUN | 0.147678 | 0.329669 | 0.462403 | 0.001551 | 0.001746 | 0.001312 |
| swizzle3_test4.test | RUN | 0.145761 | 0.331469 | 0.462223 | 0.001466 | 0.001700 | 0.001258 |
| swizzle3_test.test | RUN | 0.398057 | 0.852275 | 1.377573 | 0.001627 | 0.001552 | 0.001604 |
| swizzle4_test2.test | RUN | 0.244340 | 0.470715 | 0.782834 | 0.001542 | 0.001788 | 0.001777 |
| swizzle4_test3.test | RUN | 0.239933 | 0.457562 | 0.817261 | 0.001502 | 0.001631 | 0.001622 |
| swizzle4_test4.test | RUN | 0.244250 | 0.469844 | 0.770189 | 0.001600 | 0.001627 | 0.001405 |
| swizzle4_test.test | RUN | 0.425480 | 0.934645 | 1.440286 | 0.001411 | 0.001698 | 0.001688 |
| deduce_scalar_test.test | COMPILE | 0.021682 | 0.047573 | 0.072147 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.159161 | 0.347278 | 0.441616 | 0.001584 | 0.001515 | 0.001390 |
| deduce_scalar_mv_test.test | RUN | 0.188694 | 0.413406 | 0.617004 | 0.001594 | 0.001544 | 0.001643 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017707 | 0.030686 | 0.050614 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.018643 | 0.041931 | 0.056905 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.020603 | 0.038365 | 0.056288 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019738 | 0.038744 | 0.055958 | — | — | — |
| interop_test.test | RUN | 0.199216 | 0.503976 | 0.857419 | 0.000668 | 0.000712 | 0.001712 |
| transform_test.test | RUN | 0.381291 | 0.675197 | 1.190108 | 0.001278 | 0.001380 | 0.001242 |
| projection_test.test | RUN | 0.232980 | 0.584489 | 0.643355 | 0.001387 | 0.001227 | 0.001243 |
| scalar_traits_test.test | COMPILE | 0.019874 | 0.041847 | 0.068203 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011×† | 1.052×, 0.970× | 0.934× |
| clang | 0.980× | 0.978×, 0.983× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000988s | 0.001008s | 0.000991s | byte equality observed |
| access_q_test.test | 10 | 0.000983s | 0.000988s | 0.000979s | byte equality observed |
| access_v_test.test | 10 | 0.000992s | 0.001032s | 0.000972s | byte equality observed |
| assign_test.test | 10 | 0.000986s | 0.000978s | 0.001034s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000999s | 0.000990s | 0.001010s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000985s | 0.001022s | 0.000989s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000971s | 0.000963s | 0.001024s | byte equality observed |
| col_mat_test.test | 10 | 0.000976s | 0.000980s | 0.000989s | byte equality observed |
| col_test.test | 10 | 0.001016s | 0.001040s | 0.001026s | byte equality observed |
| conjugate_test.test | 10 | 0.001005s | 0.000991s | 0.000989s | byte equality observed |
| convert_to_test.test | 10 | 0.001005s | 0.001013s | 0.000971s | byte equality observed |
| cross_test.test | 10 | 0.001010s | 0.001035s | 0.001034s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001022s | 0.001032s | 0.001010s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001012s | 0.001007s | 0.000984s | byte equality observed |
| del_col_test.test | 10 | 0.000987s | 0.001021s | 0.001011s | byte equality observed |
| del_row_col_test.test | 10 | 0.001004s | 0.001011s | 0.000984s | byte equality observed |
| del_row_test.test | 10 | 0.000982s | 0.001044s | 0.000984s | byte equality observed |
| determinant_test.test | 10 | 0.001008s | 0.000990s | 0.001004s | byte equality observed |
| diag_mat_test.test | 10 | 0.000987s | 0.000976s | 0.001040s | byte equality observed |
| diag_test.test | 10 | 0.000980s | 0.001032s | 0.001012s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000969s | 0.001044s | 0.000989s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000988s | 0.001005s | 0.001025s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000985s | 0.001054s | 0.000988s | byte equality observed |
| div_ms_test.test | 10 | 0.001001s | 0.001009s | 0.001021s | byte equality observed |
| div_qs_test.test | 10 | 0.000985s | 0.000978s | 0.001013s | byte equality observed |
| div_vs_test.test | 10 | 0.000986s | 0.001002s | 0.001005s | byte equality observed |
| dot_qq_test.test | 10 | 0.000973s | 0.000979s | 0.000975s | byte equality observed |
| dot_vv_test.test | 10 | 0.000982s | 0.000986s | 0.000996s | byte equality observed |
| eq_mm_test.test | 10 | 0.000999s | 0.000995s | 0.000977s | byte equality observed |
| eq_qq_test.test | 10 | 0.000974s | 0.000994s | 0.000969s | byte equality observed |
| eq_vv_test.test | 10 | 0.000983s | 0.001014s | 0.000990s | byte equality observed |
| identity_mat_test.test | 10 | 0.000987s | 0.001049s | 0.000998s | byte equality observed |
| identity_quat_test.test | 10 | 0.001010s | 0.000996s | 0.000996s | byte equality observed |
| interop_test.test | 10 | 0.000455s | 0.000452s | 0.000974s | byte equality observed |
| inverse_m_test.test | 10 | 0.001025s | 0.001030s | 0.001021s | byte equality observed |
| inverse_q_test.test | 10 | 0.000996s | 0.000987s | 0.000968s | byte equality observed |
| mag_q_test.test | 10 | 0.000991s | 0.001038s | 0.000970s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000990s | 0.000972s | 0.000989s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000977s | 0.000994s | 0.001043s | byte equality observed |
| mag_v_test.test | 10 | 0.000981s | 0.000981s | 0.000999s | byte equality observed |
| mat_index_test.test | 10 | 0.001008s | 0.000997s | 0.001034s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000977s | 0.000993s | 0.001000s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000971s | 0.000982s | 0.001000s | byte equality observed |
| math_test.test | 10 | 0.001503s | 0.001459s | 0.001323s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000984s | 0.000985s | 0.000975s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001002s | 0.000991s | 0.000992s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000988s | 0.000962s | 0.000998s | byte equality observed |
| minus_m_test.test | 10 | 0.000991s | 0.000997s | 0.000982s | byte equality observed |
| minus_mm_test.test | 10 | 0.001003s | 0.001002s | 0.000999s | byte equality observed |
| minus_q_test.test | 10 | 0.000984s | 0.001013s | 0.001001s | byte equality observed |
| minus_qq_test.test | 10 | 0.001007s | 0.000995s | 0.001028s | byte equality observed |
| minus_v_test.test | 10 | 0.000993s | 0.000965s | 0.000967s | byte equality observed |
| minus_vv_test.test | 10 | 0.001012s | 0.000996s | 0.000980s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000980s | 0.000967s | 0.000982s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000988s | 0.000968s | 0.000993s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000995s | 0.001036s | 0.001003s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000986s | 0.000995s | 0.001023s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000980s | 0.001030s | 0.000999s | byte equality observed |
| mul_mm_test.test | 10 | 0.001017s | 0.000981s | 0.001001s | byte equality observed |
| mul_ms_test.test | 10 | 0.000979s | 0.000984s | 0.001055s | byte equality observed |
| mul_mv_test.test | 10 | 0.000994s | 0.001044s | 0.000985s | byte equality observed |
| mul_qq_test.test | 10 | 0.001021s | 0.001021s | 0.001026s | byte equality observed |
| mul_qs_test.test | 10 | 0.001010s | 0.000970s | 0.000980s | byte equality observed |
| mul_qv_test.test | 10 | 0.001007s | 0.000995s | 0.000988s | byte equality observed |
| mul_sm_test.test | 10 | 0.000991s | 0.001004s | 0.000975s | byte equality observed |
| mul_sv_test.test | 10 | 0.000969s | 0.001016s | 0.000999s | byte equality observed |
| mul_vm_test.test | 10 | 0.000996s | 0.001009s | 0.000998s | byte equality observed |
| mul_vs_test.test | 10 | 0.000996s | 0.000986s | 0.000999s | byte equality observed |
| neg_col_test.test | 10 | 0.000986s | 0.000971s | 0.001017s | byte equality observed |
| neg_row_test.test | 10 | 0.000986s | 0.000981s | 0.000993s | byte equality observed |
| normalize_q_test.test | 10 | 0.000996s | 0.001012s | 0.000984s | byte equality observed |
| normalize_v_test.test | 10 | 0.000989s | 0.001005s | 0.001001s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001011s | 0.001015s | 0.001010s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001004s | 0.000994s | 0.000981s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000989s | 0.001016s | 0.000992s | byte equality observed |
| plus_mm_test.test | 10 | 0.000991s | 0.000984s | 0.000994s | byte equality observed |
| plus_qq_test.test | 10 | 0.000979s | 0.000994s | 0.000989s | byte equality observed |
| plus_vv_test.test | 10 | 0.000996s | 0.000997s | 0.000986s | byte equality observed |
| projection_test.test | 10 | 0.000992s | 0.001000s | 0.000971s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000983s | 0.001001s | 0.000998s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000971s | 0.000962s | 0.000966s | byte equality observed |
| rot_mat_test.test | 1 | 0.029743s | 0.027244s | 0.026172s | byte equality observed |
| rot_quat_test.test | 10 | 0.000945s | 0.000939s | 0.000945s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000966s | 0.000966s | 0.000989s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000989s | 0.001014s | 0.000981s | byte equality observed |
| roty_mat_test.test | 10 | 0.001009s | 0.001015s | 0.001007s | byte equality observed |
| roty_quat_test.test | 10 | 0.001011s | 0.001035s | 0.001017s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001008s | 0.001033s | 0.001023s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001019s | 0.000998s | 0.001020s | byte equality observed |
| row_mat_test.test | 10 | 0.001015s | 0.000986s | 0.000986s | byte equality observed |
| row_test.test | 10 | 0.000983s | 0.001050s | 0.000987s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000988s | 0.001008s | 0.000995s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000987s | 0.001014s | 0.000990s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000989s | 0.001004s | 0.000951s | byte equality observed |
| slerp_test.test | 2 | 0.013236s | 0.010955s | 0.011652s | byte equality observed |
| swap_cols_test.test | 10 | 0.000952s | 0.000965s | 0.000943s | byte equality observed |
| swap_rows_test.test | 10 | 0.000980s | 0.000993s | 0.000974s | byte equality observed |
| swizzle2_test.test | 10 | 0.000993s | 0.001025s | 0.001002s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000999s | 0.000997s | 0.000982s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000977s | 0.001018s | 0.000985s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000990s | 0.001015s | 0.001000s | byte equality observed |
| swizzle3_test.test | 10 | 0.001008s | 0.001002s | 0.001008s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000987s | 0.000988s | 0.000988s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000997s | 0.000991s | 0.000980s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000986s | 0.001029s | 0.000989s | byte equality observed |
| swizzle4_test.test | 10 | 0.000998s | 0.000983s | 0.000972s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000984s | 0.001008s | 0.000965s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000999s | 0.001026s | 0.000995s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000983s | 0.000987s | 0.000964s | byte equality observed |
| to_string_test.test | 10 | 0.001018s | 0.001025s | 0.001008s | byte equality observed |
| transform_test.test | 10 | 0.001015s | 0.000988s | 0.000974s | byte equality observed |
| translation_mat_test.test | 10 | 0.000979s | 0.001012s | 0.000978s | byte equality observed |
| translation_test.test | 10 | 0.000992s | 0.001009s | 0.001014s | byte equality observed |
| transpose_test.test | 10 | 0.000990s | 0.001013s | 0.001018s | byte equality observed |
| vec_index_test.test | 10 | 0.001005s | 0.000988s | 0.001006s | byte equality observed |
| vec_register_test.test | 10 | 0.000986s | 0.001055s | 0.000982s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000979s | 0.001044s | 0.000999s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001001s | 0.001026s | 0.000969s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000998s | 0.000990s | 0.001006s | byte equality observed |
| zero_mat_test.test | 10 | 0.000997s | 0.001029s | 0.000980s | byte equality observed |
| zero_quat_test.test | 10 | 0.000981s | 0.000995s | 0.000983s | byte equality observed |
| zero_vec_test.test | 10 | 0.001005s | 0.000991s | 0.000988s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
