# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.335285 | 0.874354 | 1.211348 | 0.002574 | 0.002681 | 0.002600 |
| mat_traits_array_test.test | RUN | 0.261355 | 0.881812 | 0.969880 | 0.001738 | 0.001724 | 0.001874 |
| mat_traits_std_array_test.test | RUN | 0.264762 | 0.708337 | 1.012727 | 0.001859 | 0.002067 | 0.001833 |
| vec_traits_array_test.test | RUN | 0.230914 | 0.683825 | 0.833129 | 0.001810 | 0.002103 | 0.002076 |
| vec_traits_gnuc_test.test | RUN | 0.426139 | 0.874171 | 1.644357 | 0.001833 | 0.001846 | 0.002142 |
| vec_traits_std_array_test.test | RUN | 0.228327 | 0.538970 | 0.787870 | 0.001918 | 0.001977 | 0.001967 |
| quat_traits_array_test.test | RUN | 0.224541 | 0.729389 | 0.854053 | 0.001551 | 0.001849 | 0.002226 |
| quat_traits_std_array_test.test | RUN | 0.225109 | 0.550083 | 0.771608 | 0.001766 | 0.001914 | 0.002063 |
| access_m_test.test | RUN | 0.367826 | 1.347715 | 1.786043 | 0.001787 | 0.002125 | 0.001728 |
| access_m_fail1.test | COMPILE_FAIL | 0.036921 | 0.059655 | 0.138328 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.036226 | 0.060513 | 0.131061 | — | — | — |
| access_q_test.test | RUN | 0.301943 | 0.694459 | 1.021911 | 0.001688 | 0.001884 | 0.002170 |
| access_q_fail.test | COMPILE_FAIL | 0.027611 | 0.049075 | 0.098865 | — | — | — |
| access_v_test.test | RUN | 0.311964 | 0.692525 | 1.057645 | 0.001704 | 0.002078 | 0.001971 |
| access_v_fail1.test | COMPILE_FAIL | 0.024425 | 0.040244 | 0.085343 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.026398 | 0.043673 | 0.087937 | — | — | — |
| assign_test.test | RUN | 0.454998 | 1.125955 | 1.913299 | 0.001790 | 0.002130 | 0.002060 |
| to_string_test.test | RUN | 0.532682 | 1.778055 | 10.212190 | 0.001785 | 0.002212 | 0.002082 |
| cmp_vv_test.test | RUN | 0.365760 | 0.894694 | 1.343028 | 0.001799 | 0.002031 | 0.002016 |
| cross_test.test | RUN | 0.375702 | 0.852574 | 1.336842 | 0.001682 | 0.002004 | 0.001549 |
| div_eq_vs_test.test | RUN | 0.343168 | 0.734134 | 1.245824 | 0.001714 | 0.002013 | 0.001872 |
| div_vs_test.test | RUN | 0.358153 | 0.924942 | 1.362515 | 0.001866 | 0.001796 | 0.001847 |
| dot_vv_test.test | RUN | 0.344717 | 0.806687 | 1.284228 | 0.001662 | 0.002136 | 0.002096 |
| eq_vv_test.test | RUN | 0.380254 | 0.929367 | 1.366877 | 0.001678 | 0.002152 | 0.001860 |
| mag_v_test.test | RUN | 0.342148 | 0.766435 | 1.159135 | 0.001776 | 0.001864 | 0.001776 |
| mag_sqr_v_test.test | RUN | 0.340097 | 0.757005 | 1.235510 | 0.001773 | 0.002030 | 0.002015 |
| minus_v_test.test | RUN | 0.350628 | 0.875084 | 1.339582 | 0.001814 | 0.002065 | 0.001660 |
| minus_eq_vv_test.test | RUN | 0.351793 | 0.857840 | 1.284679 | 0.001657 | 0.001868 | 0.001880 |
| minus_vv_test.test | RUN | 0.360232 | 0.941184 | 1.284376 | 0.001927 | 0.001798 | 0.001796 |
| mul_eq_vs_test.test | RUN | 0.346037 | 0.779476 | 1.307125 | 0.001796 | 0.002134 | 0.001931 |
| mul_vs_test.test | RUN | 0.358879 | 0.935691 | 1.352905 | 0.001827 | 0.002108 | 0.001699 |
| mul_sv_test.test | RUN | 0.364058 | 0.917765 | 1.300976 | 0.001893 | 0.002074 | 0.001836 |
| mul_vm_test.test | RUN | 0.496310 | 1.652299 | 2.126434 | 0.001732 | 0.002098 | 0.001972 |
| normalize_v_test.test | RUN | 0.363333 | 1.137420 | 1.396060 | 0.001930 | 0.002011 | 0.002056 |
| plus_eq_vv_test.test | RUN | 0.345815 | 0.886627 | 1.218443 | 0.001776 | 0.001584 | 0.001752 |
| plus_vv_test.test | RUN | 0.373781 | 0.925060 | 1.296487 | 0.001826 | 0.002030 | 0.001708 |
| scalar_cast_v_test.test | RUN | 0.336252 | 0.706904 | 1.146456 | 0.001868 | 0.001776 | 0.002160 |
| vec_index_test.test | RUN | 0.295174 | 0.713581 | 1.035365 | 0.001518 | 0.001960 | 0.002130 |
| vec_register_test.test | RUN | 0.195704 | 0.627091 | 0.725841 | 0.001612 | 0.001715 | 0.002002 |
| cmp_mm_test.test | RUN | 0.577120 | 2.005999 | 2.523845 | 0.001994 | 0.001983 | 0.001906 |
| determinant_test.test | RUN | 0.396783 | 1.036604 | 1.485174 | 0.001926 | 0.001800 | 0.002008 |
| div_eq_ms_test.test | RUN | 0.409826 | 0.984069 | 1.654327 | 0.001797 | 0.001841 | 0.002159 |
| div_ms_test.test | RUN | 0.463220 | 1.504748 | 2.001702 | 0.001871 | 0.001875 | 0.001855 |
| eq_mm_test.test | RUN | 0.561950 | 1.867693 | 2.427359 | 0.001835 | 0.001910 | 0.001801 |
| minus_m_test.test | RUN | 0.469625 | 1.506462 | 1.935014 | 0.001531 | 0.001936 | 0.001790 |
| minus_eq_mm_test.test | RUN | 0.451314 | 1.396180 | 1.849439 | 0.001808 | 0.002177 | 0.002135 |
| minus_mm_test.test | RUN | 0.494109 | 1.763667 | 2.147236 | 0.001927 | 0.002172 | 0.002096 |
| mul_eq_mm_test.test | RUN | 0.422092 | 1.324384 | 1.660424 | 0.001968 | 0.002038 | 0.001807 |
| mul_eq_ms_test.test | RUN | 0.404878 | 0.954057 | 1.668776 | 0.001870 | 0.002106 | 0.001930 |
| mul_mm_test.test | RUN | 0.586480 | 2.945577 | 2.608148 | 0.001822 | 0.001932 | 0.001797 |
| mul_ms_test.test | RUN | 0.500363 | 1.559876 | 2.090406 | 0.001856 | 0.002082 | 0.001704 |
| mul_sm_test.test | RUN | 0.478916 | 1.528646 | 2.105316 | 0.001938 | 0.001954 | 0.002119 |
| mul_mv_test.test | RUN | 0.499322 | 1.646564 | 2.137099 | 0.001981 | 0.001854 | 0.001769 |
| inverse_m_test.test | RUN | 0.620912 | 2.960266 | 2.808001 | 0.002120 | 0.002132 | 0.002246 |
| plus_eq_mm_test.test | RUN | 0.442510 | 1.412720 | 1.861785 | 0.001908 | 0.001995 | 0.001948 |
| plus_mm_test.test | RUN | 0.492631 | 1.798716 | 2.132574 | 0.001786 | 0.002033 | 0.002131 |
| scalar_cast_m_test.test | RUN | 0.386691 | 0.816611 | 1.405551 | 0.001821 | 0.001972 | 0.002006 |
| mat_index_test.test | RUN | 0.306381 | 0.768753 | 1.104671 | 0.001973 | 0.001892 | 0.001875 |
| cmp_qq_test.test | RUN | 0.336981 | 0.704165 | 1.115190 | 0.001958 | 0.001642 | 0.002120 |
| conjugate_test.test | RUN | 0.329279 | 0.740762 | 1.166722 | 0.001761 | 0.002122 | 0.001976 |
| normalize_q_test.test | RUN | 0.348255 | 0.822346 | 1.195003 | 0.001844 | 0.001982 | 0.002092 |
| div_eq_qs_test.test | RUN | 0.337442 | 0.688784 | 1.183466 | 0.001600 | 0.002082 | 0.001939 |
| div_qs_test.test | RUN | 0.335442 | 0.724434 | 1.181870 | 0.002053 | 0.001661 | 0.002104 |
| dot_qq_test.test | RUN | 0.339201 | 0.714146 | 1.200018 | 0.001974 | 0.002190 | 0.001956 |
| eq_qq_test.test | RUN | 0.346448 | 0.749903 | 1.237804 | 0.001834 | 0.002084 | 0.001990 |
| inverse_q_test.test | RUN | 0.412579 | 0.995170 | 1.461663 | 0.002082 | 0.002098 | 0.002069 |
| mag_q_test.test | RUN | 0.340105 | 0.731858 | 1.144464 | 0.002097 | 0.001320 | 0.001956 |
| mag_sqr_q_test.test | RUN | 0.342321 | 0.734767 | 1.161693 | 0.002072 | 0.002138 | 0.002110 |
| minus_q_test.test | RUN | 0.345249 | 0.734735 | 1.197133 | 0.001888 | 0.001719 | 0.002034 |
| minus_eq_qq_test.test | RUN | 0.334521 | 0.731416 | 1.183925 | 0.001846 | 0.002061 | 0.002077 |
| minus_qq_test.test | RUN | 0.339681 | 0.748331 | 1.188625 | 0.001946 | 0.002142 | 0.002126 |
| mul_eq_qs_test.test | RUN | 0.333518 | 0.712216 | 1.165381 | 0.002052 | 0.002144 | 0.002180 |
| mul_qs_test.test | RUN | 0.334840 | 0.745246 | 1.222090 | 0.001875 | 0.001959 | 0.002028 |
| mul_qv_test.test | RUN | 0.422995 | 1.017179 | 1.491726 | 0.002095 | 0.002197 | 0.002046 |
| mul_qq_test.test | RUN | 0.403620 | 1.042429 | 1.474406 | 0.001986 | 0.002142 | 0.001943 |
| mul_eq_qq_test.test | RUN | 0.405837 | 1.050874 | 1.507113 | 0.001988 | 0.002066 | 0.002111 |
| plus_eq_qq_test.test | RUN | 0.338657 | 0.735575 | 1.210106 | 0.001756 | 0.001930 | 0.002001 |
| plus_qq_test.test | RUN | 0.338239 | 0.764598 | 1.143600 | 0.001920 | 0.002239 | 0.002025 |
| scalar_cast_q_test.test | RUN | 0.333972 | 0.690549 | 1.129544 | 0.002050 | 0.002197 | 0.002034 |
| slerp_test.test | RUN | 0.361820 | 1.421990 | 1.416113 | 0.025381 | 0.020584 | 0.021621 |
| convert_to_test.test | RUN | 0.492438 | 1.306366 | 2.155810 | 0.002032 | 0.002034 | 0.001918 |
| rot_mat_test.test | RUN | 0.748081 | 5.850253 | 5.990550 | 0.072564 | 0.054308 | 0.049357 |
| rot_quat_test.test | RUN | 0.414504 | 1.185708 | 1.526897 | 0.002011 | 0.002226 | 0.002068 |
| rotx_mat_test.test | RUN | 0.455306 | 1.581742 | 1.970444 | 0.001866 | 0.002180 | 0.002108 |
| rotx_quat_test.test | RUN | 0.402647 | 1.014797 | 1.352964 | 0.001896 | 0.002008 | 0.002112 |
| roty_mat_test.test | RUN | 0.453953 | 1.576269 | 1.816166 | 0.001942 | 0.002135 | 0.002226 |
| roty_quat_test.test | RUN | 0.405261 | 1.010659 | 1.422657 | 0.002013 | 0.002039 | 0.002100 |
| rotz_mat_test.test | RUN | 0.477603 | 1.766566 | 1.879928 | 0.001914 | 0.001772 | 0.001945 |
| rotz_quat_test.test | RUN | 0.403292 | 1.036439 | 1.448911 | 0.001853 | 0.002041 | 0.002108 |
| zero_vec_test.test | RUN | 0.345469 | 0.867630 | 1.245566 | 0.001966 | 0.001971 | 0.002010 |
| zero_mat_test.test | RUN | 0.438905 | 1.418654 | 1.734038 | 0.001922 | 0.002064 | 0.001872 |
| zero_quat_test.test | RUN | 0.338851 | 0.733934 | 1.152605 | 0.001820 | 0.001961 | 0.002162 |
| identity_mat_test.test | RUN | 0.396420 | 1.078862 | 1.509719 | 0.001741 | 0.001866 | 0.002090 |
| identity_quat_test.test | RUN | 0.341170 | 0.693218 | 1.146303 | 0.002016 | 0.002124 | 0.002043 |
| col_test.test | RUN | 0.634489 | 2.260646 | 3.272823 | 0.001976 | 0.001922 | 0.002224 |
| col_mat_test.test | RUN | 0.421604 | 1.051718 | 1.567780 | 0.001944 | 0.002240 | 0.002138 |
| neg_col_test.test | RUN | 0.474642 | 1.423958 | 2.016029 | 0.001752 | 0.002170 | 0.001946 |
| neg_row_test.test | RUN | 0.479662 | 1.474379 | 2.006717 | 0.001938 | 0.001741 | 0.002162 |
| del_col_test.test | RUN | 0.496395 | 1.608479 | 2.053347 | 0.002006 | 0.002124 | 0.001963 |
| del_row_test.test | RUN | 0.493399 | 1.578927 | 2.051721 | 0.001976 | 0.002242 | 0.002140 |
| del_row_col_test.test | RUN | 0.690752 | 2.954047 | 3.857443 | 0.002018 | 0.002112 | 0.001730 |
| swap_cols_test.test | RUN | 0.850390 | 4.023690 | 4.634608 | 0.001896 | 0.002184 | 0.002016 |
| swap_rows_test.test | RUN | 0.920037 | 4.226171 | 4.513528 | 0.002074 | 0.001962 | 0.002082 |
| diag_test.test | RUN | 0.434841 | 1.049585 | 1.708624 | 0.002196 | 0.002120 | 0.001822 |
| diag_mat_test.test | RUN | 0.443906 | 1.039651 | 1.679450 | 0.001554 | 0.002047 | 0.002086 |
| row_test.test | RUN | 0.641069 | 2.208620 | 3.319675 | 0.002020 | 0.001910 | 0.002104 |
| row_mat_test.test | RUN | 0.417370 | 0.986186 | 1.482872 | 0.001957 | 0.001902 | 0.002097 |
| transpose_test.test | RUN | 0.486610 | 1.540510 | 2.025862 | 0.001691 | 0.002035 | 0.001695 |
| translation_test.test | RUN | 0.403385 | 0.969108 | 1.550342 | 0.001630 | 0.001880 | 0.001934 |
| translation_mat_test.test | RUN | 0.431962 | 0.988164 | 1.639196 | 0.002018 | 0.002060 | 0.001594 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.148305 | 0.297899 | 0.470334 | — | — | — |
| swizzle2_test2.test | RUN | 0.178602 | 0.415212 | 0.661053 | 0.001900 | 0.001874 | 0.001896 |
| swizzle2_test3.test | RUN | 0.177128 | 0.418062 | 0.625276 | 0.001673 | 0.001885 | 0.001715 |
| swizzle2_test4.test | RUN | 0.181483 | 0.407536 | 0.643426 | 0.001798 | 0.001864 | 0.001800 |
| swizzle2_test.test | RUN | 0.573403 | 1.188116 | 2.221800 | 0.001961 | 0.002094 | 0.002108 |
| swizzle3_test2.test | RUN | 0.201352 | 0.454926 | 0.726963 | 0.001941 | 0.002195 | 0.001760 |
| swizzle3_test3.test | RUN | 0.199219 | 0.457904 | 0.750283 | 0.001749 | 0.002048 | 0.001869 |
| swizzle3_test4.test | RUN | 0.200161 | 0.435866 | 0.721442 | 0.001808 | 0.002030 | 0.001677 |
| swizzle3_test.test | RUN | 0.569637 | 1.213800 | 2.179939 | 0.001715 | 0.001699 | 0.002057 |
| swizzle4_test2.test | RUN | 0.340382 | 0.651583 | 1.266978 | 0.001765 | 0.002121 | 0.001644 |
| swizzle4_test3.test | RUN | 0.347579 | 0.697544 | 1.261350 | 0.001746 | 0.002012 | 0.001941 |
| swizzle4_test4.test | RUN | 0.356415 | 0.649404 | 1.277648 | 0.001634 | 0.001831 | 0.002056 |
| swizzle4_test.test | RUN | 0.592813 | 1.338256 | 2.237741 | 0.001682 | 0.001941 | 0.002002 |
| deduce_scalar_test.test | COMPILE | 0.030373 | 0.064572 | 0.104555 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.217306 | 0.495758 | 0.749642 | 0.001928 | 0.001870 | 0.001934 |
| deduce_scalar_mv_test.test | RUN | 0.263942 | 0.554370 | 0.935771 | 0.001700 | 0.001868 | 0.002053 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.024525 | 0.038363 | 0.082917 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.027050 | 0.055646 | 0.093870 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.025158 | 0.055690 | 0.088005 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.026131 | 0.055791 | 0.093150 | — | — | — |
| interop_test.test | RUN | 0.273116 | 0.638740 | 1.416505 | 0.000640 | 0.000918 | 0.002000 |
| transform_test.test | RUN | 0.448112 | 1.007000 | 1.664207 | 0.001498 | 0.001509 | 0.001368 |
| projection_test.test | RUN | 0.351030 | 0.750792 | 1.249032 | 0.001462 | 0.001455 | 0.001446 |
| scalar_traits_test.test | COMPILE | 0.028656 | 0.058029 | 0.096370 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.935× | 0.924×, 0.946× | 1.015× |
| clang | 1.015× | 1.021×, 1.008× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001222s | 0.001227s | 0.001240s | byte equality observed |
| access_q_test.test | 10 | 0.001232s | 0.001270s | 0.001266s | byte equality observed |
| access_v_test.test | 10 | 0.001221s | 0.001283s | 0.001249s | byte equality observed |
| assign_test.test | 10 | 0.001268s | 0.001220s | 0.001274s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001262s | 0.001247s | 0.001278s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001218s | 0.001286s | 0.001235s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001205s | 0.001254s | 0.001256s | byte equality observed |
| col_mat_test.test | 10 | 0.001208s | 0.001284s | 0.001278s | byte equality observed |
| col_test.test | 10 | 0.001279s | 0.001241s | 0.001240s | byte equality observed |
| conjugate_test.test | 10 | 0.001260s | 0.001282s | 0.001304s | byte equality observed |
| convert_to_test.test | 10 | 0.001270s | 0.001280s | 0.001246s | byte equality observed |
| cross_test.test | 10 | 0.001276s | 0.001250s | 0.001248s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001259s | 0.001303s | 0.001231s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001288s | 0.001230s | 0.001300s | byte equality observed |
| del_col_test.test | 10 | 0.001270s | 0.001238s | 0.001240s | byte equality observed |
| del_row_col_test.test | 10 | 0.001276s | 0.001258s | 0.001305s | byte equality observed |
| del_row_test.test | 10 | 0.001237s | 0.001258s | 0.001288s | byte equality observed |
| determinant_test.test | 10 | 0.001260s | 0.001252s | 0.001267s | byte equality observed |
| diag_mat_test.test | 10 | 0.001231s | 0.001282s | 0.001249s | byte equality observed |
| diag_test.test | 10 | 0.001241s | 0.001263s | 0.001241s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001258s | 0.001262s | 0.001230s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001269s | 0.001295s | 0.001226s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001245s | 0.001279s | 0.001231s | byte equality observed |
| div_ms_test.test | 8 | 0.001249s | 0.001229s | 0.001312s | byte equality observed |
| div_qs_test.test | 8 | 0.001262s | 0.001267s | 0.001264s | byte equality observed |
| div_vs_test.test | 10 | 0.001251s | 0.001231s | 0.001259s | byte equality observed |
| dot_qq_test.test | 10 | 0.001228s | 0.001259s | 0.001295s | byte equality observed |
| dot_vv_test.test | 10 | 0.001266s | 0.001250s | 0.001281s | byte equality observed |
| eq_mm_test.test | 8 | 0.001266s | 0.001252s | 0.001269s | byte equality observed |
| eq_qq_test.test | 10 | 0.001251s | 0.001236s | 0.001282s | byte equality observed |
| eq_vv_test.test | 10 | 0.001278s | 0.001261s | 0.001245s | byte equality observed |
| identity_mat_test.test | 10 | 0.001266s | 0.001251s | 0.001265s | byte equality observed |
| identity_quat_test.test | 10 | 0.001271s | 0.001326s | 0.001252s | byte equality observed |
| interop_test.test | 10 | 0.000583s | 0.000585s | 0.001254s | byte equality observed |
| inverse_m_test.test | 10 | 0.001336s | 0.001354s | 0.001269s | byte equality observed |
| inverse_q_test.test | 10 | 0.001251s | 0.001244s | 0.001215s | byte equality observed |
| mag_q_test.test | 10 | 0.001251s | 0.001255s | 0.001232s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001289s | 0.001225s | 0.001253s | byte equality observed |
| mag_sqr_v_test.test | 9 | 0.001228s | 0.001218s | 0.001228s | byte equality observed |
| mag_v_test.test | 10 | 0.001267s | 0.001223s | 0.001242s | byte equality observed |
| mat_index_test.test | 10 | 0.001233s | 0.001222s | 0.001279s | byte equality observed |
| mat_traits_array_test.test | 9 | 0.001233s | 0.001234s | 0.001268s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001208s | 0.001261s | 0.001265s | byte equality observed |
| math_test.test | 7 | 0.001881s | 0.001774s | 0.001643s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001228s | 0.001206s | 0.001235s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001230s | 0.001204s | 0.001254s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001245s | 0.001238s | 0.001228s | byte equality observed |
| minus_m_test.test | 10 | 0.001232s | 0.001238s | 0.001249s | byte equality observed |
| minus_mm_test.test | 10 | 0.001250s | 0.001209s | 0.001318s | byte equality observed |
| minus_q_test.test | 10 | 0.001208s | 0.001283s | 0.001231s | byte equality observed |
| minus_qq_test.test | 10 | 0.001244s | 0.001209s | 0.001235s | byte equality observed |
| minus_v_test.test | 10 | 0.001253s | 0.001233s | 0.001264s | byte equality observed |
| minus_vv_test.test | 10 | 0.001263s | 0.001211s | 0.001247s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001248s | 0.001235s | 0.001274s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001263s | 0.001295s | 0.001238s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001253s | 0.001214s | 0.001267s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001239s | 0.001238s | 0.001234s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001262s | 0.001258s | 0.001221s | byte equality observed |
| mul_mm_test.test | 10 | 0.001250s | 0.001301s | 0.001287s | byte equality observed |
| mul_ms_test.test | 10 | 0.001225s | 0.001272s | 0.001266s | byte equality observed |
| mul_mv_test.test | 10 | 0.001247s | 0.001266s | 0.001265s | byte equality observed |
| mul_qq_test.test | 8 | 0.001279s | 0.001271s | 0.001308s | byte equality observed |
| mul_qs_test.test | 10 | 0.001251s | 0.001270s | 0.001220s | byte equality observed |
| mul_qv_test.test | 10 | 0.001264s | 0.001228s | 0.001309s | byte equality observed |
| mul_sm_test.test | 10 | 0.001236s | 0.001201s | 0.001339s | byte equality observed |
| mul_sv_test.test | 10 | 0.001247s | 0.001218s | 0.001354s | byte equality observed |
| mul_vm_test.test | 10 | 0.001283s | 0.001274s | 0.001334s | byte equality observed |
| mul_vs_test.test | 10 | 0.001267s | 0.001223s | 0.001398s | byte equality observed |
| neg_col_test.test | 10 | 0.001233s | 0.001253s | 0.001410s | byte equality observed |
| neg_row_test.test | 10 | 0.001214s | 0.001319s | 0.001466s | byte equality observed |
| normalize_q_test.test | 10 | 0.001266s | 0.001262s | 0.001424s | byte equality observed |
| normalize_v_test.test | 10 | 0.001254s | 0.001274s | 0.001496s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001282s | 0.001230s | 0.001491s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001239s | 0.001265s | 0.001463s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001302s | 0.001230s | 0.001501s | byte equality observed |
| plus_mm_test.test | 10 | 0.001243s | 0.001273s | 0.001498s | byte equality observed |
| plus_qq_test.test | 10 | 0.001245s | 0.001253s | 0.001502s | byte equality observed |
| plus_vv_test.test | 10 | 0.001270s | 0.001230s | 0.001466s | byte equality observed |
| projection_test.test | 10 | 0.001234s | 0.001218s | 0.001467s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001293s | 0.001220s | 0.001429s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001147s | 0.001129s | 0.001404s | byte equality observed |
| rot_mat_test.test | 1 | 0.047972s | 0.034891s | 0.044874s | byte equality observed |
| rot_quat_test.test | 10 | 0.001153s | 0.001134s | 0.001426s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001173s | 0.001245s | 0.001458s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001251s | 0.001278s | 0.001477s | byte equality observed |
| roty_mat_test.test | 10 | 0.001278s | 0.001302s | 0.001541s | byte equality observed |
| roty_quat_test.test | 10 | 0.001293s | 0.001330s | 0.001538s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001272s | 0.001258s | 0.001518s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001263s | 0.001260s | 0.001559s | byte equality observed |
| row_mat_test.test | 10 | 0.001240s | 0.001257s | 0.001465s | byte equality observed |
| row_test.test | 10 | 0.001259s | 0.001229s | 0.001504s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001243s | 0.001230s | 0.001488s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001282s | 0.001260s | 0.001505s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001250s | 0.001228s | 0.001446s | byte equality observed |
| slerp_test.test | 2 | 0.017513s | 0.014823s | 0.019813s | byte equality observed |
| swap_cols_test.test | 10 | 0.001164s | 0.001201s | 0.001445s | byte equality observed |
| swap_rows_test.test | 10 | 0.001233s | 0.001384s | 0.001436s | byte equality observed |
| swizzle2_test.test | 10 | 0.001384s | 0.001412s | 0.001448s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001454s | 0.001411s | 0.001455s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001474s | 0.001488s | 0.001461s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001469s | 0.001494s | 0.001517s | byte equality observed |
| swizzle3_test.test | 10 | 0.001521s | 0.001456s | 0.001500s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001473s | 0.001487s | 0.001433s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001493s | 0.001482s | 0.001490s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001505s | 0.001493s | 0.001512s | byte equality observed |
| swizzle4_test.test | 10 | 0.001495s | 0.001500s | 0.001504s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001488s | 0.001498s | 0.001482s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001491s | 0.001474s | 0.001489s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001510s | 0.001469s | 0.001516s | byte equality observed |
| to_string_test.test | 10 | 0.001545s | 0.001528s | 0.001537s | byte equality observed |
| transform_test.test | 10 | 0.001488s | 0.001529s | 0.001497s | byte equality observed |
| translation_mat_test.test | 10 | 0.001497s | 0.001523s | 0.001518s | byte equality observed |
| translation_test.test | 10 | 0.001488s | 0.001517s | 0.001488s | byte equality observed |
| transpose_test.test | 10 | 0.001498s | 0.001454s | 0.001517s | byte equality observed |
| vec_index_test.test | 10 | 0.001479s | 0.001467s | 0.001481s | byte equality observed |
| vec_register_test.test | 10 | 0.001486s | 0.001468s | 0.001485s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001448s | 0.001471s | 0.001523s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001507s | 0.001482s | 0.001504s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001478s | 0.001487s | 0.001462s | byte equality observed |
| zero_mat_test.test | 10 | 0.001492s | 0.001489s | 0.001473s | byte equality observed |
| zero_quat_test.test | 10 | 0.001507s | 0.001531s | 0.001487s | byte equality observed |
| zero_vec_test.test | 10 | 0.001500s | 0.001506s | 0.001460s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
