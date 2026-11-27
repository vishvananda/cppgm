# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.333280 | 0.870630 | 1.195236 | 0.002503 | 0.002532 | 0.002528 |
| mat_traits_array_test.test | RUN | 0.270105 | 0.828341 | 0.954002 | 0.001651 | 0.001763 | 0.001762 |
| mat_traits_std_array_test.test | RUN | 0.263090 | 0.639675 | 0.959213 | 0.001866 | 0.001728 | 0.001751 |
| vec_traits_array_test.test | RUN | 0.235438 | 0.687033 | 0.838823 | 0.001726 | 0.001974 | 0.001656 |
| vec_traits_gnuc_test.test | RUN | 0.431884 | 0.864614 | 1.662134 | 0.001711 | 0.001930 | 0.002062 |
| vec_traits_std_array_test.test | RUN | 0.228160 | 0.530736 | 0.788578 | 0.001863 | 0.001833 | 0.001746 |
| quat_traits_array_test.test | RUN | 0.226705 | 0.717140 | 0.815403 | 0.001710 | 0.001777 | 0.001707 |
| quat_traits_std_array_test.test | RUN | 0.225050 | 0.546421 | 0.830248 | 0.001830 | 0.001768 | 0.001815 |
| access_m_test.test | RUN | 0.359816 | 1.325701 | 1.786889 | 0.001881 | 0.002110 | 0.002041 |
| access_m_fail1.test | COMPILE_FAIL | 0.036544 | 0.059185 | 0.130263 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.038454 | 0.061801 | 0.134733 | — | — | — |
| access_q_test.test | RUN | 0.300819 | 0.665285 | 1.101308 | 0.001913 | 0.002009 | 0.001835 |
| access_q_fail.test | COMPILE_FAIL | 0.028848 | 0.043566 | 0.082287 | — | — | — |
| access_v_test.test | RUN | 0.297783 | 0.703559 | 1.061232 | 0.001786 | 0.001938 | 0.001598 |
| access_v_fail1.test | COMPILE_FAIL | 0.024178 | 0.042368 | 0.087099 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023276 | 0.044362 | 0.084419 | — | — | — |
| assign_test.test | RUN | 0.460302 | 1.109552 | 1.903473 | 0.001827 | 0.002159 | 0.001873 |
| to_string_test.test | RUN | 0.542472 | 1.782095 | 10.099786 | 0.001705 | 0.002076 | 0.002090 |
| cmp_vv_test.test | RUN | 0.380715 | 0.870892 | 1.275084 | 0.001901 | 0.002188 | 0.002040 |
| cross_test.test | RUN | 0.381441 | 0.836117 | 1.309956 | 0.001641 | 0.001890 | 0.001809 |
| div_eq_vs_test.test | RUN | 0.349269 | 0.764348 | 1.262883 | 0.001889 | 0.001939 | 0.002008 |
| div_vs_test.test | RUN | 0.361886 | 0.948157 | 1.346551 | 0.001630 | 0.001870 | 0.001987 |
| dot_vv_test.test | RUN | 0.347833 | 0.841903 | 1.192793 | 0.001735 | 0.001990 | 0.001876 |
| eq_vv_test.test | RUN | 0.378977 | 0.941010 | 1.380804 | 0.001742 | 0.001750 | 0.001382 |
| mag_v_test.test | RUN | 0.344592 | 0.797223 | 1.122522 | 0.001817 | 0.001928 | 0.001920 |
| mag_sqr_v_test.test | RUN | 0.343076 | 0.772128 | 1.234154 | 0.001940 | 0.002062 | 0.002064 |
| minus_v_test.test | RUN | 0.355324 | 0.896032 | 1.236626 | 0.001910 | 0.001950 | 0.001706 |
| minus_eq_vv_test.test | RUN | 0.350957 | 0.855175 | 1.293600 | 0.001685 | 0.001965 | 0.001924 |
| minus_vv_test.test | RUN | 0.364942 | 0.925913 | 1.358624 | 0.001838 | 0.001880 | 0.002092 |
| mul_eq_vs_test.test | RUN | 0.353026 | 0.746672 | 1.204636 | 0.001855 | 0.001965 | 0.001655 |
| mul_vs_test.test | RUN | 0.361649 | 0.925149 | 1.354691 | 0.001662 | 0.002068 | 0.002016 |
| mul_sv_test.test | RUN | 0.352188 | 0.915251 | 1.396385 | 0.001748 | 0.002130 | 0.002050 |
| mul_vm_test.test | RUN | 0.504422 | 1.652330 | 2.088437 | 0.001754 | 0.001932 | 0.002028 |
| normalize_v_test.test | RUN | 0.369898 | 1.125371 | 1.251051 | 0.001840 | 0.001803 | 0.002112 |
| plus_eq_vv_test.test | RUN | 0.349428 | 0.867810 | 1.300272 | 0.001952 | 0.001958 | 0.002085 |
| plus_vv_test.test | RUN | 0.358252 | 0.940816 | 1.255164 | 0.001559 | 0.002148 | 0.001995 |
| scalar_cast_v_test.test | RUN | 0.347274 | 0.691633 | 1.175723 | 0.001825 | 0.001949 | 0.001724 |
| vec_index_test.test | RUN | 0.287105 | 0.716815 | 1.046432 | 0.002015 | 0.001895 | 0.001700 |
| vec_register_test.test | RUN | 0.193330 | 0.625062 | 0.736442 | 0.002046 | 0.001576 | 0.002012 |
| cmp_mm_test.test | RUN | 0.585991 | 1.994395 | 2.478669 | 0.002143 | 0.002242 | 0.002090 |
| determinant_test.test | RUN | 0.412623 | 1.027647 | 1.507751 | 0.002044 | 0.002135 | 0.002045 |
| div_eq_ms_test.test | RUN | 0.412272 | 0.973493 | 1.681045 | 0.001754 | 0.001917 | 0.001930 |
| div_ms_test.test | RUN | 0.465516 | 1.508298 | 2.023205 | 0.001966 | 0.002001 | 0.002088 |
| eq_mm_test.test | RUN | 0.566586 | 1.882153 | 2.444351 | 0.001996 | 0.001899 | 0.001666 |
| minus_m_test.test | RUN | 0.464620 | 1.502136 | 1.858364 | 0.001952 | 0.002224 | 0.002050 |
| minus_eq_mm_test.test | RUN | 0.452026 | 1.406062 | 1.745951 | 0.001884 | 0.002056 | 0.001755 |
| minus_mm_test.test | RUN | 0.498766 | 1.742076 | 2.115372 | 0.002058 | 0.002116 | 0.002056 |
| mul_eq_mm_test.test | RUN | 0.413574 | 1.321059 | 1.604626 | 0.002070 | 0.002158 | 0.002050 |
| mul_eq_ms_test.test | RUN | 0.404984 | 0.950646 | 1.694015 | 0.002044 | 0.002116 | 0.002012 |
| mul_mm_test.test | RUN | 0.570867 | 2.904478 | 2.600515 | 0.001784 | 0.001765 | 0.001906 |
| mul_ms_test.test | RUN | 0.487750 | 1.547515 | 2.045878 | 0.001935 | 0.002133 | 0.002054 |
| mul_sm_test.test | RUN | 0.486166 | 1.515373 | 2.087817 | 0.001964 | 0.002052 | 0.002048 |
| mul_mv_test.test | RUN | 0.500640 | 1.669125 | 2.058165 | 0.002005 | 0.001892 | 0.002058 |
| inverse_m_test.test | RUN | 0.648195 | 2.937724 | 2.790925 | 0.002132 | 0.001875 | 0.001850 |
| plus_eq_mm_test.test | RUN | 0.449486 | 1.388091 | 1.813398 | 0.002018 | 0.002074 | 0.002095 |
| plus_mm_test.test | RUN | 0.504008 | 1.773815 | 2.117765 | 0.001958 | 0.002134 | 0.001692 |
| scalar_cast_m_test.test | RUN | 0.385877 | 0.811202 | 1.333520 | 0.001894 | 0.002034 | 0.001776 |
| mat_index_test.test | RUN | 0.295517 | 0.761744 | 1.156139 | 0.002064 | 0.001934 | 0.001608 |
| cmp_qq_test.test | RUN | 0.339087 | 0.700929 | 1.176261 | 0.002004 | 0.001934 | 0.001813 |
| conjugate_test.test | RUN | 0.327904 | 0.734367 | 1.179881 | 0.001968 | 0.001847 | 0.001880 |
| normalize_q_test.test | RUN | 0.349728 | 0.813200 | 1.240013 | 0.001922 | 0.001598 | 0.001641 |
| div_eq_qs_test.test | RUN | 0.334787 | 0.687971 | 1.169077 | 0.002040 | 0.001826 | 0.001810 |
| div_qs_test.test | RUN | 0.338144 | 0.745848 | 1.201536 | 0.001897 | 0.002120 | 0.001796 |
| dot_qq_test.test | RUN | 0.334476 | 0.709172 | 1.189692 | 0.001817 | 0.002066 | 0.001978 |
| eq_qq_test.test | RUN | 0.347583 | 0.746734 | 1.234194 | 0.001827 | 0.001808 | 0.002067 |
| inverse_q_test.test | RUN | 0.402909 | 0.975614 | 1.496033 | 0.001834 | 0.001740 | 0.002083 |
| mag_q_test.test | RUN | 0.336532 | 0.733125 | 1.148582 | 0.001785 | 0.001906 | 0.001896 |
| mag_sqr_q_test.test | RUN | 0.337602 | 0.734796 | 1.195778 | 0.001667 | 0.001781 | 0.002090 |
| minus_q_test.test | RUN | 0.342343 | 0.747839 | 1.169458 | 0.001948 | 0.001862 | 0.002073 |
| minus_eq_qq_test.test | RUN | 0.328993 | 0.738098 | 1.170056 | 0.001786 | 0.002138 | 0.002081 |
| minus_qq_test.test | RUN | 0.346935 | 0.756618 | 1.180520 | 0.002041 | 0.002079 | 0.001864 |
| mul_eq_qs_test.test | RUN | 0.332554 | 0.683606 | 1.148895 | 0.001940 | 0.001977 | 0.002036 |
| mul_qs_test.test | RUN | 0.344506 | 0.726629 | 1.163526 | 0.001924 | 0.002236 | 0.002082 |
| mul_qv_test.test | RUN | 0.425275 | 1.012164 | 1.524162 | 0.001878 | 0.002178 | 0.002037 |
| mul_qq_test.test | RUN | 0.399527 | 1.029201 | 1.522276 | 0.001820 | 0.002160 | 0.001730 |
| mul_eq_qq_test.test | RUN | 0.399357 | 1.013398 | 1.455882 | 0.001988 | 0.002194 | 0.001626 |
| plus_eq_qq_test.test | RUN | 0.336945 | 0.722664 | 1.099944 | 0.001844 | 0.002089 | 0.001925 |
| plus_qq_test.test | RUN | 0.330219 | 0.744046 | 1.189014 | 0.001906 | 0.002130 | 0.002084 |
| scalar_cast_q_test.test | RUN | 0.330993 | 0.692453 | 1.121795 | 0.001712 | 0.001981 | 0.002072 |
| slerp_test.test | RUN | 0.359275 | 1.407251 | 1.402828 | 0.025047 | 0.020326 | 0.020785 |
| convert_to_test.test | RUN | 0.506680 | 1.308363 | 2.051740 | 0.002056 | 0.002095 | 0.002107 |
| rot_mat_test.test | RUN | 0.749472 | 5.789567 | 5.990387 | 0.071395 | 0.054249 | 0.048816 |
| rot_quat_test.test | RUN | 0.411184 | 1.216541 | 1.564100 | 0.001952 | 0.001852 | 0.002122 |
| rotx_mat_test.test | RUN | 0.455187 | 1.559098 | 1.915522 | 0.001913 | 0.002178 | 0.001804 |
| rotx_quat_test.test | RUN | 0.393068 | 1.008161 | 1.428105 | 0.001728 | 0.002032 | 0.002047 |
| roty_mat_test.test | RUN | 0.457953 | 1.601276 | 1.744681 | 0.001850 | 0.002012 | 0.001899 |
| roty_quat_test.test | RUN | 0.402006 | 1.009333 | 1.427614 | 0.001821 | 0.001976 | 0.002080 |
| rotz_mat_test.test | RUN | 0.477120 | 1.766628 | 2.086827 | 0.001949 | 0.001832 | 0.001960 |
| rotz_quat_test.test | RUN | 0.405692 | 1.026942 | 1.302852 | 0.001914 | 0.001866 | 0.001986 |
| zero_vec_test.test | RUN | 0.352722 | 0.856164 | 1.182640 | 0.002098 | 0.002136 | 0.001742 |
| zero_mat_test.test | RUN | 0.426436 | 1.434384 | 1.758467 | 0.001876 | 0.001991 | 0.001805 |
| zero_quat_test.test | RUN | 0.343917 | 0.714403 | 1.182252 | 0.001967 | 0.001765 | 0.002066 |
| identity_mat_test.test | RUN | 0.392313 | 1.099797 | 1.478645 | 0.002038 | 0.001922 | 0.002070 |
| identity_quat_test.test | RUN | 0.342836 | 0.693383 | 1.183632 | 0.002026 | 0.001974 | 0.001617 |
| col_test.test | RUN | 0.656584 | 2.258851 | 3.253701 | 0.001976 | 0.001810 | 0.002032 |
| col_mat_test.test | RUN | 0.434877 | 1.007267 | 1.580947 | 0.002089 | 0.001990 | 0.001982 |
| neg_col_test.test | RUN | 0.484869 | 1.405849 | 1.983277 | 0.001762 | 0.002341 | 0.002010 |
| neg_row_test.test | RUN | 0.485603 | 1.466145 | 2.024356 | 0.002079 | 0.001817 | 0.002035 |
| del_col_test.test | RUN | 0.500937 | 1.594962 | 1.943413 | 0.002024 | 0.001899 | 0.002044 |
| del_row_test.test | RUN | 0.492203 | 1.541699 | 2.036132 | 0.001666 | 0.002134 | 0.002060 |
| del_row_col_test.test | RUN | 0.676373 | 2.905300 | 3.812437 | 0.002012 | 0.002073 | 0.001812 |
| swap_cols_test.test | RUN | 0.840601 | 3.845503 | 4.608197 | 0.002048 | 0.002110 | 0.002110 |
| swap_rows_test.test | RUN | 0.918522 | 4.110045 | 4.599808 | 0.001996 | 0.001905 | 0.002010 |
| diag_test.test | RUN | 0.431709 | 1.064902 | 1.689911 | 0.001775 | 0.002112 | 0.001942 |
| diag_mat_test.test | RUN | 0.437313 | 1.055782 | 1.581386 | 0.002021 | 0.002093 | 0.001888 |
| row_test.test | RUN | 0.632470 | 2.221023 | 3.129847 | 0.002058 | 0.001988 | 0.002090 |
| row_mat_test.test | RUN | 0.424385 | 0.993348 | 1.565896 | 0.001908 | 0.001802 | 0.001852 |
| transpose_test.test | RUN | 0.490190 | 1.533287 | 2.007987 | 0.001910 | 0.002138 | 0.001608 |
| translation_test.test | RUN | 0.406293 | 0.961820 | 1.549851 | 0.001881 | 0.001970 | 0.001740 |
| translation_mat_test.test | RUN | 0.438955 | 0.997172 | 1.668919 | 0.001700 | 0.001402 | 0.002140 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.153977 | 0.281910 | 0.515843 | — | — | — |
| swizzle2_test2.test | RUN | 0.183366 | 0.412086 | 0.648925 | 0.001886 | 0.001536 | 0.001870 |
| swizzle2_test3.test | RUN | 0.183333 | 0.423299 | 0.634473 | 0.001707 | 0.002140 | 0.001657 |
| swizzle2_test4.test | RUN | 0.180182 | 0.404089 | 0.635841 | 0.001710 | 0.002000 | 0.001641 |
| swizzle2_test.test | RUN | 0.578022 | 1.191853 | 2.193744 | 0.001931 | 0.001973 | 0.002006 |
| swizzle3_test2.test | RUN | 0.204395 | 0.427145 | 0.717661 | 0.001831 | 0.001903 | 0.001950 |
| swizzle3_test3.test | RUN | 0.201190 | 0.443953 | 0.732371 | 0.001696 | 0.002077 | 0.001634 |
| swizzle3_test4.test | RUN | 0.204422 | 0.432211 | 0.694660 | 0.001750 | 0.001766 | 0.001658 |
| swizzle3_test.test | RUN | 0.579326 | 1.222294 | 2.124424 | 0.001677 | 0.001866 | 0.002050 |
| swizzle4_test2.test | RUN | 0.344544 | 0.653551 | 1.227535 | 0.001858 | 0.002118 | 0.002148 |
| swizzle4_test3.test | RUN | 0.343806 | 0.663277 | 1.247829 | 0.001687 | 0.001780 | 0.002008 |
| swizzle4_test4.test | RUN | 0.369241 | 0.648551 | 1.238822 | 0.001763 | 0.001982 | 0.001876 |
| swizzle4_test.test | RUN | 0.599304 | 1.331514 | 2.241717 | 0.001952 | 0.002153 | 0.002003 |
| deduce_scalar_test.test | COMPILE | 0.029731 | 0.060932 | 0.105635 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.224912 | 0.483218 | 0.790999 | 0.002287 | 0.001836 | 0.001629 |
| deduce_scalar_mv_test.test | RUN | 0.269680 | 0.579365 | 0.947636 | 0.001850 | 0.002020 | 0.002189 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.024720 | 0.040197 | 0.075792 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.026617 | 0.056573 | 0.086306 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.024447 | 0.054376 | 0.082299 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.025607 | 0.053595 | 0.085005 | — | — | — |
| interop_test.test | RUN | 0.274370 | 0.642935 | 1.367898 | 0.001238 | 0.000701 | 0.001401 |
| transform_test.test | RUN | 0.499540 | 1.041823 | 1.960461 | 0.001618 | 0.001385 | 0.001569 |
| projection_test.test | RUN | 0.324731 | 0.748360 | 1.049386 | 0.001519 | 0.001514 | 0.001449 |
| scalar_traits_test.test | COMPILE | 0.028948 | 0.059535 | 0.093301 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.920× | 0.916×, 0.923× | 0.985× |
| clang | 1.034× | 1.043×, 1.024× | 1.044× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001253s | 0.001288s | 0.001274s | byte equality observed |
| access_q_test.test | 10 | 0.001251s | 0.001228s | 0.001269s | byte equality observed |
| access_v_test.test | 10 | 0.001241s | 0.001248s | 0.001236s | byte equality observed |
| assign_test.test | 10 | 0.001244s | 0.001265s | 0.001230s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001260s | 0.001230s | 0.001236s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001223s | 0.001225s | 0.001235s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001248s | 0.001180s | 0.001268s | byte equality observed |
| col_mat_test.test | 10 | 0.001241s | 0.001216s | 0.001226s | byte equality observed |
| col_test.test | 10 | 0.001234s | 0.001260s | 0.001272s | byte equality observed |
| conjugate_test.test | 10 | 0.001258s | 0.001205s | 0.001240s | byte equality observed |
| convert_to_test.test | 10 | 0.001275s | 0.001231s | 0.001288s | byte equality observed |
| cross_test.test | 10 | 0.001217s | 0.001263s | 0.001253s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001284s | 0.001208s | 0.001253s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001254s | 0.001232s | 0.001243s | byte equality observed |
| del_col_test.test | 10 | 0.001225s | 0.001243s | 0.001225s | byte equality observed |
| del_row_col_test.test | 10 | 0.001276s | 0.001195s | 0.001247s | byte equality observed |
| del_row_test.test | 10 | 0.001246s | 0.001244s | 0.001254s | byte equality observed |
| determinant_test.test | 10 | 0.001280s | 0.001243s | 0.001257s | byte equality observed |
| diag_mat_test.test | 10 | 0.001260s | 0.001184s | 0.001239s | byte equality observed |
| diag_test.test | 10 | 0.001231s | 0.001242s | 0.001264s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001245s | 0.001200s | 0.001265s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001257s | 0.001208s | 0.001220s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001239s | 0.001212s | 0.001243s | byte equality observed |
| div_ms_test.test | 10 | 0.001268s | 0.001206s | 0.001259s | byte equality observed |
| div_qs_test.test | 10 | 0.001267s | 0.001262s | 0.001252s | byte equality observed |
| div_vs_test.test | 9 | 0.001263s | 0.001251s | 0.001245s | byte equality observed |
| dot_qq_test.test | 10 | 0.001221s | 0.001241s | 0.001224s | byte equality observed |
| dot_vv_test.test | 10 | 0.001245s | 0.001262s | 0.001295s | byte equality observed |
| eq_mm_test.test | 10 | 0.001261s | 0.001257s | 0.001223s | byte equality observed |
| eq_qq_test.test | 10 | 0.001263s | 0.001213s | 0.001222s | byte equality observed |
| eq_vv_test.test | 10 | 0.001257s | 0.001203s | 0.001270s | byte equality observed |
| identity_mat_test.test | 10 | 0.001283s | 0.001227s | 0.001271s | byte equality observed |
| identity_quat_test.test | 10 | 0.001237s | 0.001239s | 0.001222s | byte equality observed |
| interop_test.test | 10 | 0.000571s | 0.000560s | 0.001228s | byte equality observed |
| inverse_m_test.test | 10 | 0.001283s | 0.001255s | 0.001241s | byte equality observed |
| inverse_q_test.test | 10 | 0.001229s | 0.001253s | 0.001265s | byte equality observed |
| mag_q_test.test | 10 | 0.001203s | 0.001242s | 0.001230s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001230s | 0.001217s | 0.001257s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001208s | 0.001242s | 0.001229s | byte equality observed |
| mag_v_test.test | 10 | 0.001225s | 0.001233s | 0.001278s | byte equality observed |
| mat_index_test.test | 10 | 0.001230s | 0.001226s | 0.001277s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001253s | 0.001246s | 0.001226s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001199s | 0.001185s | 0.001224s | byte equality observed |
| math_test.test | 10 | 0.001837s | 0.001768s | 0.001637s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001222s | 0.001208s | 0.001250s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001236s | 0.001165s | 0.001267s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001233s | 0.001185s | 0.001249s | byte equality observed |
| minus_m_test.test | 10 | 0.001244s | 0.001274s | 0.001304s | byte equality observed |
| minus_mm_test.test | 10 | 0.001223s | 0.001250s | 0.001214s | byte equality observed |
| minus_q_test.test | 10 | 0.001266s | 0.001266s | 0.001276s | byte equality observed |
| minus_qq_test.test | 10 | 0.001245s | 0.001229s | 0.001244s | byte equality observed |
| minus_v_test.test | 10 | 0.001243s | 0.001251s | 0.001249s | byte equality observed |
| minus_vv_test.test | 10 | 0.001265s | 0.001272s | 0.001237s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001243s | 0.001291s | 0.001273s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001207s | 0.001233s | 0.001241s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001260s | 0.001279s | 0.001282s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001216s | 0.001231s | 0.001292s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001229s | 0.001288s | 0.001230s | byte equality observed |
| mul_mm_test.test | 10 | 0.001251s | 0.001231s | 0.001228s | byte equality observed |
| mul_ms_test.test | 8 | 0.001261s | 0.001271s | 0.001252s | byte equality observed |
| mul_mv_test.test | 10 | 0.001266s | 0.001216s | 0.001292s | byte equality observed |
| mul_qq_test.test | 10 | 0.001241s | 0.001236s | 0.001237s | byte equality observed |
| mul_qs_test.test | 10 | 0.001255s | 0.001224s | 0.001272s | byte equality observed |
| mul_qv_test.test | 10 | 0.001252s | 0.001259s | 0.001276s | byte equality observed |
| mul_sm_test.test | 10 | 0.001247s | 0.001275s | 0.001222s | byte equality observed |
| mul_sv_test.test | 10 | 0.001245s | 0.001258s | 0.001246s | byte equality observed |
| mul_vm_test.test | 10 | 0.001241s | 0.001217s | 0.001229s | byte equality observed |
| mul_vs_test.test | 10 | 0.001257s | 0.001200s | 0.001204s | byte equality observed |
| neg_col_test.test | 10 | 0.001239s | 0.001264s | 0.001285s | byte equality observed |
| neg_row_test.test | 10 | 0.001229s | 0.001225s | 0.001247s | byte equality observed |
| normalize_q_test.test | 10 | 0.001246s | 0.001225s | 0.001256s | byte equality observed |
| normalize_v_test.test | 10 | 0.001271s | 0.001250s | 0.001274s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001241s | 0.001214s | 0.001273s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001281s | 0.001285s | 0.001231s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001249s | 0.001291s | 0.001291s | byte equality observed |
| plus_mm_test.test | 10 | 0.001244s | 0.001229s | 0.001235s | byte equality observed |
| plus_qq_test.test | 10 | 0.001220s | 0.001229s | 0.001275s | byte equality observed |
| plus_vv_test.test | 10 | 0.001200s | 0.001243s | 0.001296s | byte equality observed |
| projection_test.test | 10 | 0.001252s | 0.001251s | 0.001376s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001228s | 0.001191s | 0.001316s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001193s | 0.001177s | 0.001367s | byte equality observed |
| rot_mat_test.test | 1 | 0.045876s | 0.031708s | 0.046368s | byte equality observed |
| rot_quat_test.test | 10 | 0.001137s | 0.001155s | 0.001420s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001137s | 0.001206s | 0.001458s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001221s | 0.001264s | 0.001458s | byte equality observed |
| roty_mat_test.test | 10 | 0.001278s | 0.001261s | 0.001442s | byte equality observed |
| roty_quat_test.test | 10 | 0.001252s | 0.001291s | 0.001489s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001304s | 0.001258s | 0.001491s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001264s | 0.001253s | 0.001484s | byte equality observed |
| row_mat_test.test | 10 | 0.001289s | 0.001221s | 0.001491s | byte equality observed |
| row_test.test | 10 | 0.001244s | 0.001217s | 0.001448s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001271s | 0.001237s | 0.001445s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001244s | 0.001233s | 0.001457s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001173s | 0.001235s | 0.001400s | byte equality observed |
| slerp_test.test | 2 | 0.016172s | 0.013621s | 0.019522s | byte equality observed |
| swap_cols_test.test | 10 | 0.001149s | 0.001144s | 0.001409s | byte equality observed |
| swap_rows_test.test | 10 | 0.001186s | 0.001257s | 0.001421s | byte equality observed |
| swizzle2_test.test | 10 | 0.001263s | 0.001280s | 0.001419s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001231s | 0.001242s | 0.001436s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001253s | 0.001280s | 0.001477s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001288s | 0.001344s | 0.001491s | byte equality observed |
| swizzle3_test.test | 10 | 0.001259s | 0.001333s | 0.001505s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001277s | 0.001394s | 0.001446s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001341s | 0.001409s | 0.001454s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001311s | 0.001417s | 0.001468s | byte equality observed |
| swizzle4_test.test | 10 | 0.001374s | 0.001507s | 0.001469s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001428s | 0.001455s | 0.001486s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001429s | 0.001501s | 0.001475s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001460s | 0.001432s | 0.001486s | byte equality observed |
| to_string_test.test | 10 | 0.001445s | 0.001490s | 0.001528s | byte equality observed |
| transform_test.test | 10 | 0.001457s | 0.001487s | 0.001473s | byte equality observed |
| translation_mat_test.test | 10 | 0.001492s | 0.001480s | 0.001458s | byte equality observed |
| translation_test.test | 10 | 0.001484s | 0.001494s | 0.001467s | byte equality observed |
| transpose_test.test | 10 | 0.001470s | 0.001457s | 0.001470s | byte equality observed |
| vec_index_test.test | 10 | 0.001473s | 0.001480s | 0.001518s | byte equality observed |
| vec_register_test.test | 10 | 0.001487s | 0.001486s | 0.001465s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001481s | 0.001452s | 0.001476s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001456s | 0.001493s | 0.001501s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001463s | 0.001483s | 0.001491s | byte equality observed |
| zero_mat_test.test | 10 | 0.001479s | 0.001498s | 0.001515s | byte equality observed |
| zero_quat_test.test | 10 | 0.001454s | 0.001499s | 0.001495s | byte equality observed |
| zero_vec_test.test | 10 | 0.001468s | 0.001490s | 0.001474s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
