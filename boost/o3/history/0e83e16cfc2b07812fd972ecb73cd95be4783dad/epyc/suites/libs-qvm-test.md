# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.251416 | 0.634579 | 0.811823 | 0.002264 | 0.002054 | 0.002220 |
| mat_traits_array_test.test | RUN | 0.197772 | 0.634551 | 0.642414 | 0.001850 | 0.001520 | 0.001731 |
| mat_traits_std_array_test.test | RUN | 0.204669 | 0.499123 | 0.648135 | 0.001665 | 0.001632 | 0.001580 |
| vec_traits_array_test.test | RUN | 0.178833 | 0.496738 | 0.562026 | 0.001686 | 0.001610 | 0.001434 |
| vec_traits_gnuc_test.test | RUN | 0.307812 | 0.620474 | 1.056413 | 0.001758 | 0.001616 | 0.001816 |
| vec_traits_std_array_test.test | RUN | 0.169935 | 0.390743 | 0.521945 | 0.001738 | 0.001654 | 0.001954 |
| quat_traits_array_test.test | RUN | 0.166139 | 0.526019 | 0.545087 | 0.001551 | 0.001502 | 0.001706 |
| quat_traits_std_array_test.test | RUN | 0.164382 | 0.393996 | 0.516828 | 0.001764 | 0.001522 | 0.001892 |
| access_m_test.test | RUN | 0.280916 | 0.958754 | 1.219791 | 0.001674 | 0.001816 | 0.001740 |
| access_m_fail1.test | COMPILE_FAIL | 0.025781 | 0.041362 | 0.090719 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.026684 | 0.042181 | 0.084276 | — | — | — |
| access_q_test.test | RUN | 0.226867 | 0.498007 | 0.748003 | 0.001805 | 0.001662 | 0.001716 |
| access_q_fail.test | COMPILE_FAIL | 0.021058 | 0.032930 | 0.060788 | — | — | — |
| access_v_test.test | RUN | 0.225716 | 0.491645 | 0.701744 | 0.001537 | 0.001737 | 0.001957 |
| access_v_fail1.test | COMPILE_FAIL | 0.016913 | 0.028734 | 0.064054 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017656 | 0.031277 | 0.064807 | — | — | — |
| assign_test.test | RUN | 0.340318 | 0.797777 | 1.310939 | 0.001836 | 0.001722 | 0.001700 |
| to_string_test.test | RUN | 0.385654 | 1.267888 | 7.521053 | 0.001703 | 0.001880 | 0.002028 |
| cmp_vv_test.test | RUN | 0.273555 | 0.632858 | 0.874472 | 0.001820 | 0.001830 | 0.001922 |
| cross_test.test | RUN | 0.271717 | 0.602686 | 0.895087 | 0.001623 | 0.001882 | 0.001906 |
| div_eq_vs_test.test | RUN | 0.268238 | 0.533286 | 0.882809 | 0.001743 | 0.001828 | 0.001699 |
| div_vs_test.test | RUN | 0.272005 | 0.660639 | 0.936724 | 0.001614 | 0.001724 | 0.001852 |
| dot_vv_test.test | RUN | 0.263992 | 0.589453 | 0.796567 | 0.001637 | 0.001716 | 0.001742 |
| eq_vv_test.test | RUN | 0.289696 | 0.657095 | 0.945514 | 0.001486 | 0.001902 | 0.001832 |
| mag_v_test.test | RUN | 0.263672 | 0.557325 | 0.761771 | 0.001706 | 0.001669 | 0.001794 |
| mag_sqr_v_test.test | RUN | 0.256617 | 0.485003 | 0.847656 | 0.001800 | 0.001612 | 0.001557 |
| minus_v_test.test | RUN | 0.266855 | 0.514364 | 0.825924 | 0.001656 | 0.001448 | 0.001844 |
| minus_eq_vv_test.test | RUN | 0.261911 | 0.565026 | 0.884878 | 0.001529 | 0.001826 | 0.001788 |
| minus_vv_test.test | RUN | 0.273820 | 0.658344 | 0.924387 | 0.001781 | 0.002365 | 0.001576 |
| mul_eq_vs_test.test | RUN | 0.260763 | 0.547519 | 0.816172 | 0.001517 | 0.002869 | 0.001776 |
| mul_vs_test.test | RUN | 0.270453 | 0.669535 | 0.946308 | 0.001617 | 0.001810 | 0.001713 |
| mul_sv_test.test | RUN | 0.274156 | 0.725772 | 0.943054 | 0.001444 | 0.001886 | 0.001604 |
| mul_vm_test.test | RUN | 0.371320 | 1.203190 | 1.292303 | 0.001388 | 0.001749 | 0.001494 |
| normalize_v_test.test | RUN | 0.277199 | 0.823991 | 0.943376 | 0.001498 | 0.001519 | 0.001759 |
| plus_eq_vv_test.test | RUN | 0.262403 | 0.649500 | 0.887156 | 0.001538 | 0.001713 | 0.001292 |
| plus_vv_test.test | RUN | 0.275169 | 0.694404 | 0.868899 | 0.001561 | 0.001673 | 0.001525 |
| scalar_cast_v_test.test | RUN | 0.251400 | 0.496990 | 0.807135 | 0.001584 | 0.001709 | 0.001559 |
| vec_index_test.test | RUN | 0.222758 | 0.507529 | 0.736230 | 0.001945 | 0.001728 | 0.001812 |
| vec_register_test.test | RUN | 0.147441 | 0.455062 | 0.527909 | 0.001939 | 0.001938 | 0.001906 |
| cmp_mm_test.test | RUN | 0.417594 | 1.434951 | 1.857949 | 0.001855 | 0.001738 | 0.001884 |
| determinant_test.test | RUN | 0.302836 | 0.760856 | 1.017778 | 0.001831 | 0.001393 | 0.001786 |
| div_eq_ms_test.test | RUN | 0.315921 | 0.695867 | 1.137368 | 0.001697 | 0.001701 | 0.002035 |
| div_ms_test.test | RUN | 0.353979 | 1.080953 | 1.377055 | 0.001612 | 0.001755 | 0.001935 |
| eq_mm_test.test | RUN | 0.415411 | 1.337231 | 1.709864 | 0.001858 | 0.001817 | 0.001923 |
| minus_m_test.test | RUN | 0.354581 | 1.074799 | 1.307101 | 0.001792 | 0.001684 | 0.001937 |
| minus_eq_mm_test.test | RUN | 0.338924 | 1.011599 | 1.228032 | 0.001706 | 0.001897 | 0.001679 |
| minus_mm_test.test | RUN | 0.372174 | 1.296274 | 1.410737 | 0.001774 | 0.001877 | 0.001954 |
| mul_eq_mm_test.test | RUN | 0.314555 | 0.940428 | 1.104158 | 0.001900 | 0.001516 | 0.001960 |
| mul_eq_ms_test.test | RUN | 0.307729 | 0.694161 | 1.162504 | 0.001932 | 0.001583 | 0.001894 |
| mul_mm_test.test | RUN | 0.430516 | 2.065884 | 1.766204 | 0.001664 | 0.001826 | 0.001976 |
| mul_ms_test.test | RUN | 0.359748 | 1.097801 | 1.409869 | 0.001838 | 0.001714 | 0.001924 |
| mul_sm_test.test | RUN | 0.368714 | 1.097142 | 1.362403 | 0.001936 | 0.001620 | 0.001966 |
| mul_mv_test.test | RUN | 0.381126 | 1.171818 | 1.444085 | 0.001612 | 0.001541 | 0.001947 |
| inverse_m_test.test | RUN | 0.492967 | 2.101000 | 1.952554 | 0.001950 | 0.001758 | 0.001636 |
| plus_eq_mm_test.test | RUN | 0.333377 | 1.007863 | 1.210450 | 0.001796 | 0.001732 | 0.002015 |
| plus_mm_test.test | RUN | 0.390576 | 1.294867 | 1.475982 | 0.001856 | 0.001795 | 0.001630 |
| scalar_cast_m_test.test | RUN | 0.296701 | 0.592440 | 0.883292 | 0.001759 | 0.001729 | 0.001615 |
| mat_index_test.test | RUN | 0.237595 | 0.545339 | 0.771479 | 0.001960 | 0.001713 | 0.001946 |
| cmp_qq_test.test | RUN | 0.257943 | 0.518954 | 0.800691 | 0.001950 | 0.001527 | 0.001733 |
| conjugate_test.test | RUN | 0.256924 | 0.537164 | 0.814961 | 0.001928 | 0.001846 | 0.001590 |
| normalize_q_test.test | RUN | 0.273726 | 0.595530 | 0.813171 | 0.001911 | 0.001868 | 0.001725 |
| div_eq_qs_test.test | RUN | 0.263432 | 0.498106 | 0.782047 | 0.001991 | 0.001691 | 0.001874 |
| div_qs_test.test | RUN | 0.260146 | 0.544589 | 0.819539 | 0.001728 | 0.001708 | 0.001804 |
| dot_qq_test.test | RUN | 0.257345 | 0.498732 | 0.824568 | 0.001844 | 0.001743 | 0.001936 |
| eq_qq_test.test | RUN | 0.263031 | 0.553154 | 0.807970 | 0.001612 | 0.001773 | 0.001932 |
| inverse_q_test.test | RUN | 0.306262 | 0.719389 | 0.988554 | 0.001668 | 0.001454 | 0.001988 |
| mag_q_test.test | RUN | 0.256517 | 0.513855 | 0.794451 | 0.001688 | 0.001694 | 0.002111 |
| mag_sqr_q_test.test | RUN | 0.258756 | 0.535487 | 0.795241 | 0.001788 | 0.001866 | 0.001887 |
| minus_q_test.test | RUN | 0.264205 | 0.530361 | 0.747947 | 0.001784 | 0.001860 | 0.001971 |
| minus_eq_qq_test.test | RUN | 0.257384 | 0.537132 | 0.767467 | 0.001761 | 0.001527 | 0.002060 |
| minus_qq_test.test | RUN | 0.252706 | 0.542913 | 0.815663 | 0.001752 | 0.001542 | 0.001839 |
| mul_eq_qs_test.test | RUN | 0.256781 | 0.492833 | 0.801725 | 0.001632 | 0.001820 | 0.002062 |
| mul_qs_test.test | RUN | 0.259388 | 0.526627 | 0.767403 | 0.001827 | 0.001890 | 0.002018 |
| mul_qv_test.test | RUN | 0.311976 | 0.729451 | 1.033727 | 0.001763 | 0.001804 | 0.002032 |
| mul_qq_test.test | RUN | 0.300537 | 0.746050 | 1.014926 | 0.001818 | 0.001552 | 0.001838 |
| mul_eq_qq_test.test | RUN | 0.303537 | 0.730401 | 1.023290 | 0.001797 | 0.001725 | 0.001982 |
| plus_eq_qq_test.test | RUN | 0.263079 | 0.538395 | 0.747888 | 0.002007 | 0.001838 | 0.001801 |
| plus_qq_test.test | RUN | 0.259608 | 0.523713 | 0.764719 | 0.001974 | 0.001816 | 0.001936 |
| scalar_cast_q_test.test | RUN | 0.249879 | 0.500927 | 0.778309 | 0.001671 | 0.001582 | 0.001903 |
| slerp_test.test | RUN | 0.275631 | 1.004371 | 0.914775 | 0.017276 | 0.014567 | 0.015972 |
| convert_to_test.test | RUN | 0.369798 | 0.940814 | 1.456278 | 0.001859 | 0.001664 | 0.001937 |
| rot_mat_test.test | RUN | 0.552216 | 4.129543 | 4.545794 | 0.042830 | 0.038950 | 0.035929 |
| rot_quat_test.test | RUN | 0.315112 | 0.872429 | 1.044263 | 0.001759 | 0.001823 | 0.001958 |
| rotx_mat_test.test | RUN | 0.351091 | 1.128360 | 1.348166 | 0.001890 | 0.001834 | 0.002049 |
| rotx_quat_test.test | RUN | 0.303693 | 0.734034 | 0.937710 | 0.001721 | 0.001752 | 0.001900 |
| roty_mat_test.test | RUN | 0.349007 | 1.133132 | 1.328781 | 0.001736 | 0.001785 | 0.001778 |
| roty_quat_test.test | RUN | 0.311311 | 0.721220 | 0.958683 | 0.001888 | 0.001818 | 0.002132 |
| rotz_mat_test.test | RUN | 0.367995 | 1.259767 | 1.261797 | 0.001728 | 0.001736 | 0.001944 |
| rotz_quat_test.test | RUN | 0.307277 | 0.728261 | 0.923054 | 0.001738 | 0.001669 | 0.001680 |
| zero_vec_test.test | RUN | 0.262826 | 0.638108 | 0.843132 | 0.001816 | 0.001452 | 0.001534 |
| zero_mat_test.test | RUN | 0.338132 | 1.007536 | 1.151513 | 0.001492 | 0.001740 | 0.001878 |
| zero_quat_test.test | RUN | 0.257394 | 0.526901 | 0.801944 | 0.001990 | 0.001838 | 0.001706 |
| identity_mat_test.test | RUN | 0.312384 | 0.772132 | 0.964012 | 0.001650 | 0.001684 | 0.001834 |
| identity_quat_test.test | RUN | 0.259210 | 0.515828 | 0.780412 | 0.001841 | 0.001813 | 0.001873 |
| col_test.test | RUN | 0.489852 | 1.594555 | 2.198644 | 0.001853 | 0.001724 | 0.001967 |
| col_mat_test.test | RUN | 0.324264 | 0.724366 | 1.041956 | 0.001832 | 0.001828 | 0.001839 |
| neg_col_test.test | RUN | 0.365695 | 1.015059 | 1.353030 | 0.001530 | 0.001795 | 0.001756 |
| neg_row_test.test | RUN | 0.382110 | 1.053136 | 1.307351 | 0.001854 | 0.001809 | 0.001802 |
| del_col_test.test | RUN | 0.384505 | 1.132856 | 1.372905 | 0.001912 | 0.001863 | 0.001926 |
| del_row_test.test | RUN | 0.381738 | 1.106551 | 1.350792 | 0.001687 | 0.001918 | 0.001770 |
| del_row_col_test.test | RUN | 0.520416 | 2.106564 | 2.614085 | 0.001784 | 0.001826 | 0.001828 |
| swap_cols_test.test | RUN | 0.709960 | 2.832024 | 3.219330 | 0.001915 | 0.001773 | 0.001834 |
| swap_rows_test.test | RUN | 0.751252 | 2.957770 | 3.193632 | 0.001788 | 0.001768 | 0.001949 |
| diag_test.test | RUN | 0.327413 | 0.749877 | 1.231297 | 0.001745 | 0.001810 | 0.001931 |
| diag_mat_test.test | RUN | 0.336798 | 0.744919 | 1.004699 | 0.001814 | 0.001788 | 0.001910 |
| row_test.test | RUN | 0.479005 | 1.621124 | 2.110648 | 0.001700 | 0.001806 | 0.001986 |
| row_mat_test.test | RUN | 0.315471 | 0.697545 | 1.037068 | 0.001767 | 0.001548 | 0.002002 |
| transpose_test.test | RUN | 0.371882 | 1.087146 | 1.373949 | 0.001984 | 0.001488 | 0.001975 |
| translation_test.test | RUN | 0.302355 | 0.697045 | 1.014034 | 0.001639 | 0.001692 | 0.001721 |
| translation_mat_test.test | RUN | 0.342231 | 0.723109 | 1.111313 | 0.001584 | 0.001676 | 0.001818 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.117213 | 0.200154 | 0.281766 | — | — | — |
| swizzle2_test2.test | RUN | 0.140899 | 0.301063 | 0.432421 | 0.001672 | 0.001652 | 0.001734 |
| swizzle2_test3.test | RUN | 0.138878 | 0.303475 | 0.439908 | 0.001558 | 0.001678 | 0.001646 |
| swizzle2_test4.test | RUN | 0.141565 | 0.296103 | 0.433372 | 0.001511 | 0.001842 | 0.001569 |
| swizzle2_test.test | RUN | 0.431940 | 0.845859 | 1.405273 | 0.001843 | 0.001538 | 0.001814 |
| swizzle3_test2.test | RUN | 0.158520 | 0.327099 | 0.477871 | 0.001777 | 0.001635 | 0.001438 |
| swizzle3_test3.test | RUN | 0.153350 | 0.315202 | 0.497464 | 0.001606 | 0.001466 | 0.001598 |
| swizzle3_test4.test | RUN | 0.155325 | 0.335354 | 0.479622 | 0.001683 | 0.001733 | 0.001937 |
| swizzle3_test.test | RUN | 0.422932 | 0.855513 | 1.414567 | 0.001751 | 0.001328 | 0.001952 |
| swizzle4_test2.test | RUN | 0.257064 | 0.465366 | 0.863112 | 0.001829 | 0.001826 | 0.001828 |
| swizzle4_test3.test | RUN | 0.259236 | 0.462386 | 0.805001 | 0.001940 | 0.001687 | 0.001817 |
| swizzle4_test4.test | RUN | 0.260292 | 0.472169 | 0.790425 | 0.001608 | 0.001600 | 0.001920 |
| swizzle4_test.test | RUN | 0.436611 | 0.930096 | 1.452328 | 0.001669 | 0.001792 | 0.001896 |
| deduce_scalar_test.test | COMPILE | 0.023300 | 0.048267 | 0.079186 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.164975 | 0.355297 | 0.474832 | 0.001677 | 0.001623 | 0.001810 |
| deduce_scalar_mv_test.test | RUN | 0.201407 | 0.403176 | 0.594850 | 0.001686 | 0.001527 | 0.001771 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.018151 | 0.031203 | 0.051163 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.020091 | 0.041282 | 0.070074 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.018977 | 0.039106 | 0.067902 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019954 | 0.041027 | 0.060733 | — | — | — |
| interop_test.test | RUN | 0.205602 | 0.506748 | 0.802701 | 0.000828 | 0.000655 | 0.001396 |
| transform_test.test | RUN | 0.361418 | 0.778033 | 1.241545 | 0.001488 | 0.001428 | 0.001408 |
| projection_test.test | RUN | 0.270247 | 0.516959 | 0.855278 | 0.001497 | 0.001450 | 0.001446 |
| scalar_traits_test.test | COMPILE | 0.022052 | 0.042149 | 0.070826 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.966×† | 0.877×, 1.056× | 0.846× |
| clang | 0.999×† | 0.973×, 1.025× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001003s | 0.000987s | 0.001098s | byte equality observed |
| access_q_test.test | 10 | 0.000989s | 0.000974s | 0.001085s | byte equality observed |
| access_v_test.test | 10 | 0.001023s | 0.000974s | 0.001077s | byte equality observed |
| assign_test.test | 10 | 0.001018s | 0.000995s | 0.001048s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001007s | 0.001019s | 0.001052s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000967s | 0.001011s | 0.000969s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001022s | 0.000977s | 0.001029s | byte equality observed |
| col_mat_test.test | 10 | 0.000994s | 0.000991s | 0.001077s | byte equality observed |
| col_test.test | 10 | 0.001023s | 0.001003s | 0.001074s | byte equality observed |
| conjugate_test.test | 10 | 0.000985s | 0.000999s | 0.001082s | byte equality observed |
| convert_to_test.test | 10 | 0.001009s | 0.000996s | 0.001041s | byte equality observed |
| cross_test.test | 10 | 0.000999s | 0.001004s | 0.001083s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001006s | 0.001025s | 0.001070s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001011s | 0.001000s | 0.001055s | byte equality observed |
| del_col_test.test | 10 | 0.001039s | 0.000972s | 0.001070s | byte equality observed |
| del_row_col_test.test | 10 | 0.001007s | 0.001023s | 0.001089s | byte equality observed |
| del_row_test.test | 10 | 0.000995s | 0.000996s | 0.001053s | byte equality observed |
| determinant_test.test | 10 | 0.001009s | 0.001025s | 0.001077s | byte equality observed |
| diag_mat_test.test | 10 | 0.001031s | 0.001006s | 0.001014s | byte equality observed |
| diag_test.test | 10 | 0.001007s | 0.000977s | 0.001065s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001010s | 0.000988s | 0.001001s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001021s | 0.000998s | 0.001058s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001022s | 0.000991s | 0.001037s | byte equality observed |
| div_ms_test.test | 10 | 0.000999s | 0.001019s | 0.001059s | byte equality observed |
| div_qs_test.test | 9 | 0.000997s | 0.000981s | 0.001036s | byte equality observed |
| div_vs_test.test | 10 | 0.001022s | 0.001006s | 0.001068s | byte equality observed |
| dot_qq_test.test | 10 | 0.001023s | 0.001022s | 0.001089s | byte equality observed |
| dot_vv_test.test | 10 | 0.000985s | 0.001014s | 0.001042s | byte equality observed |
| eq_mm_test.test | 10 | 0.001043s | 0.001010s | 0.001048s | byte equality observed |
| eq_qq_test.test | 10 | 0.001014s | 0.001003s | 0.001008s | byte equality observed |
| eq_vv_test.test | 10 | 0.001028s | 0.000990s | 0.001068s | byte equality observed |
| identity_mat_test.test | 10 | 0.001002s | 0.001046s | 0.001084s | byte equality observed |
| identity_quat_test.test | 10 | 0.001020s | 0.001017s | 0.001070s | byte equality observed |
| interop_test.test | 10 | 0.000466s | 0.000454s | 0.001018s | byte equality observed |
| inverse_m_test.test | 10 | 0.001095s | 0.001031s | 0.001117s | byte equality observed |
| inverse_q_test.test | 10 | 0.001011s | 0.001009s | 0.001018s | byte equality observed |
| mag_q_test.test | 10 | 0.001000s | 0.000990s | 0.001037s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000999s | 0.001031s | 0.001047s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001000s | 0.001035s | 0.001062s | byte equality observed |
| mag_v_test.test | 10 | 0.001007s | 0.001023s | 0.001060s | byte equality observed |
| mat_index_test.test | 10 | 0.001029s | 0.000999s | 0.001083s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000992s | 0.001040s | 0.001071s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000986s | 0.001038s | 0.001089s | byte equality observed |
| math_test.test | 10 | 0.001520s | 0.001461s | 0.001435s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001011s | 0.000982s | 0.001112s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001024s | 0.000986s | 0.001072s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001044s | 0.000991s | 0.001068s | byte equality observed |
| minus_m_test.test | 10 | 0.001021s | 0.000959s | 0.001089s | byte equality observed |
| minus_mm_test.test | 10 | 0.001028s | 0.001009s | 0.001121s | byte equality observed |
| minus_q_test.test | 10 | 0.001021s | 0.000987s | 0.001080s | byte equality observed |
| minus_qq_test.test | 10 | 0.000989s | 0.000993s | 0.001045s | byte equality observed |
| minus_v_test.test | 10 | 0.000985s | 0.000993s | 0.001101s | byte equality observed |
| minus_vv_test.test | 10 | 0.001011s | 0.000993s | 0.001066s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001001s | 0.001016s | 0.001091s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001004s | 0.001013s | 0.001060s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001036s | 0.001015s | 0.001093s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001055s | 0.001029s | 0.001033s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001017s | 0.001004s | 0.001061s | byte equality observed |
| mul_mm_test.test | 10 | 0.001058s | 0.000979s | 0.001046s | byte equality observed |
| mul_ms_test.test | 10 | 0.001013s | 0.001027s | 0.001086s | byte equality observed |
| mul_mv_test.test | 10 | 0.000994s | 0.001023s | 0.001110s | byte equality observed |
| mul_qq_test.test | 10 | 0.001038s | 0.001056s | 0.001134s | byte equality observed |
| mul_qs_test.test | 10 | 0.000990s | 0.001023s | 0.001148s | byte equality observed |
| mul_qv_test.test | 10 | 0.001011s | 0.001031s | 0.001158s | byte equality observed |
| mul_sm_test.test | 10 | 0.001051s | 0.001007s | 0.001124s | byte equality observed |
| mul_sv_test.test | 10 | 0.001026s | 0.001025s | 0.001185s | byte equality observed |
| mul_vm_test.test | 10 | 0.001029s | 0.001020s | 0.001111s | byte equality observed |
| mul_vs_test.test | 10 | 0.001013s | 0.001021s | 0.001126s | byte equality observed |
| neg_col_test.test | 10 | 0.001002s | 0.001013s | 0.001147s | byte equality observed |
| neg_row_test.test | 10 | 0.000980s | 0.001016s | 0.001111s | byte equality observed |
| normalize_q_test.test | 10 | 0.000983s | 0.001016s | 0.001133s | byte equality observed |
| normalize_v_test.test | 10 | 0.001011s | 0.001018s | 0.001131s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001026s | 0.001048s | 0.001142s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001019s | 0.001001s | 0.001108s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001002s | 0.001029s | 0.001064s | byte equality observed |
| plus_mm_test.test | 10 | 0.001036s | 0.001035s | 0.001018s | byte equality observed |
| plus_qq_test.test | 10 | 0.001039s | 0.000993s | 0.001098s | byte equality observed |
| plus_vv_test.test | 10 | 0.001011s | 0.001039s | 0.001110s | byte equality observed |
| projection_test.test | 10 | 0.001026s | 0.000992s | 0.001142s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001004s | 0.000984s | 0.001109s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000985s | 0.001002s | 0.001074s | byte equality observed |
| rot_mat_test.test | 1 | 0.030460s | 0.024970s | 0.029877s | byte equality observed |
| rot_quat_test.test | 10 | 0.000973s | 0.000979s | 0.001128s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001022s | 0.001001s | 0.001074s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001011s | 0.001035s | 0.001127s | byte equality observed |
| roty_mat_test.test | 10 | 0.001038s | 0.001055s | 0.001148s | byte equality observed |
| roty_quat_test.test | 10 | 0.001032s | 0.001041s | 0.001079s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001007s | 0.001030s | 0.001152s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001018s | 0.001050s | 0.001141s | byte equality observed |
| row_mat_test.test | 10 | 0.001017s | 0.000999s | 0.001098s | byte equality observed |
| row_test.test | 10 | 0.001014s | 0.001009s | 0.001144s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001024s | 0.001022s | 0.001088s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001012s | 0.000986s | 0.001090s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000971s | 0.000973s | 0.001111s | byte equality observed |
| slerp_test.test | 2 | 0.013377s | 0.011669s | 0.014029s | byte equality observed |
| swap_cols_test.test | 10 | 0.000962s | 0.000955s | 0.001114s | byte equality observed |
| swap_rows_test.test | 10 | 0.001025s | 0.000981s | 0.001117s | byte equality observed |
| swizzle2_test.test | 10 | 0.001040s | 0.000993s | 0.001098s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001041s | 0.001039s | 0.001143s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001043s | 0.000985s | 0.001143s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001042s | 0.001011s | 0.001150s | byte equality observed |
| swizzle3_test.test | 10 | 0.001014s | 0.001014s | 0.001071s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001005s | 0.001007s | 0.001122s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001038s | 0.001023s | 0.001110s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001000s | 0.000995s | 0.001087s | byte equality observed |
| swizzle4_test.test | 10 | 0.000996s | 0.000995s | 0.001132s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001004s | 0.000989s | 0.001099s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001023s | 0.001041s | 0.001119s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001004s | 0.000997s | 0.001103s | byte equality observed |
| to_string_test.test | 10 | 0.001059s | 0.001025s | 0.001181s | byte equality observed |
| transform_test.test | 10 | 0.001054s | 0.001029s | 0.001109s | byte equality observed |
| translation_mat_test.test | 10 | 0.001052s | 0.000979s | 0.001164s | byte equality observed |
| translation_test.test | 10 | 0.001065s | 0.000991s | 0.001084s | byte equality observed |
| transpose_test.test | 10 | 0.001079s | 0.000997s | 0.001048s | byte equality observed |
| vec_index_test.test | 10 | 0.001099s | 0.000995s | 0.001124s | byte equality observed |
| vec_register_test.test | 10 | 0.001038s | 0.001032s | 0.001171s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001024s | 0.001038s | 0.001133s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001062s | 0.001002s | 0.001143s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001062s | 0.001045s | 0.001137s | byte equality observed |
| zero_mat_test.test | 10 | 0.001068s | 0.001024s | 0.001121s | byte equality observed |
| zero_quat_test.test | 10 | 0.001070s | 0.001011s | 0.001127s | byte equality observed |
| zero_vec_test.test | 10 | 0.001055s | 0.000985s | 0.001150s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
