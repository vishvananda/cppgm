# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.336567 | 0.893292 | 1.227721 | 0.002802 | 0.002714 | 0.002634 |
| mat_traits_array_test.test | RUN | 0.252077 | 0.909181 | 0.972935 | 0.001539 | 0.001804 | 0.001656 |
| mat_traits_std_array_test.test | RUN | 0.252864 | 0.699524 | 0.998274 | 0.001960 | 0.001878 | 0.001730 |
| vec_traits_array_test.test | RUN | 0.228233 | 0.685573 | 0.844620 | 0.002002 | 0.001909 | 0.001513 |
| vec_traits_gnuc_test.test | RUN | 0.417868 | 0.883934 | 1.667542 | 0.001614 | 0.002070 | 0.001782 |
| vec_traits_std_array_test.test | RUN | 0.230221 | 0.551793 | 0.832571 | 0.002089 | 0.001836 | 0.001818 |
| quat_traits_array_test.test | RUN | 0.226131 | 0.712426 | 0.830800 | 0.001952 | 0.001707 | 0.001772 |
| quat_traits_std_array_test.test | RUN | 0.221982 | 0.547735 | 0.854233 | 0.002054 | 0.001782 | 0.002066 |
| access_m_test.test | RUN | 0.354303 | 1.351355 | 1.804865 | 0.001860 | 0.002095 | 0.001884 |
| access_m_fail1.test | COMPILE_FAIL | 0.035052 | 0.057535 | 0.130865 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.035089 | 0.063200 | 0.130033 | — | — | — |
| access_q_test.test | RUN | 0.294126 | 0.666413 | 1.118604 | 0.001998 | 0.002232 | 0.001944 |
| access_q_fail.test | COMPILE_FAIL | 0.028324 | 0.044548 | 0.087671 | — | — | — |
| access_v_test.test | RUN | 0.292010 | 0.709092 | 1.079447 | 0.001836 | 0.002058 | 0.002121 |
| access_v_fail1.test | COMPILE_FAIL | 0.023833 | 0.044491 | 0.089683 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.022768 | 0.044630 | 0.088908 | — | — | — |
| assign_test.test | RUN | 0.454745 | 1.143060 | 1.918867 | 0.001972 | 0.002142 | 0.001936 |
| to_string_test.test | RUN | 0.524538 | 1.805138 | 10.355334 | 0.002098 | 0.001911 | 0.002122 |
| cmp_vv_test.test | RUN | 0.378300 | 0.888071 | 1.286298 | 0.001735 | 0.002021 | 0.001922 |
| cross_test.test | RUN | 0.360266 | 0.834984 | 1.328675 | 0.001347 | 0.002017 | 0.002026 |
| div_eq_vs_test.test | RUN | 0.343676 | 0.770202 | 1.275320 | 0.001935 | 0.001948 | 0.002327 |
| div_vs_test.test | RUN | 0.358267 | 0.916884 | 1.366818 | 0.001671 | 0.002175 | 0.001710 |
| dot_vv_test.test | RUN | 0.345818 | 0.819607 | 1.219327 | 0.001752 | 0.002206 | 0.001966 |
| eq_vv_test.test | RUN | 0.378622 | 0.929182 | 1.309988 | 0.001796 | 0.002130 | 0.002036 |
| mag_v_test.test | RUN | 0.337413 | 0.777601 | 1.258658 | 0.002031 | 0.002469 | 0.001827 |
| mag_sqr_v_test.test | RUN | 0.338776 | 0.773169 | 1.250539 | 0.001844 | 0.002168 | 0.001752 |
| minus_v_test.test | RUN | 0.348540 | 0.894208 | 1.262895 | 0.001851 | 0.002226 | 0.002059 |
| minus_eq_vv_test.test | RUN | 0.341601 | 0.871587 | 1.342219 | 0.001781 | 0.002046 | 0.002066 |
| minus_vv_test.test | RUN | 0.364845 | 0.939636 | 1.408396 | 0.001996 | 0.002068 | 0.001742 |
| mul_eq_vs_test.test | RUN | 0.341051 | 0.777969 | 1.272970 | 0.001570 | 0.001976 | 0.002246 |
| mul_vs_test.test | RUN | 0.359680 | 0.926263 | 1.313179 | 0.001960 | 0.002216 | 0.001872 |
| mul_sv_test.test | RUN | 0.359037 | 0.941515 | 1.373788 | 0.001610 | 0.002138 | 0.002144 |
| mul_vm_test.test | RUN | 0.508535 | 1.637469 | 2.097496 | 0.001735 | 0.002004 | 0.002190 |
| normalize_v_test.test | RUN | 0.356687 | 1.151009 | 1.448867 | 0.002008 | 0.002060 | 0.001990 |
| plus_eq_vv_test.test | RUN | 0.336535 | 0.863140 | 1.186426 | 0.001788 | 0.001798 | 0.001953 |
| plus_vv_test.test | RUN | 0.372761 | 0.948957 | 1.307468 | 0.001856 | 0.002076 | 0.002082 |
| scalar_cast_v_test.test | RUN | 0.333073 | 0.697597 | 1.139316 | 0.001929 | 0.002056 | 0.001983 |
| vec_index_test.test | RUN | 0.290307 | 0.713078 | 1.029662 | 0.001822 | 0.002302 | 0.002190 |
| vec_register_test.test | RUN | 0.190342 | 0.640418 | 0.767124 | 0.002146 | 0.001734 | 0.001796 |
| cmp_mm_test.test | RUN | 0.549052 | 2.029268 | 2.653454 | 0.002158 | 0.002102 | 0.002294 |
| determinant_test.test | RUN | 0.397651 | 1.033337 | 1.504152 | 0.001755 | 0.002140 | 0.001999 |
| div_eq_ms_test.test | RUN | 0.400340 | 1.004766 | 1.714282 | 0.001884 | 0.002184 | 0.002222 |
| div_ms_test.test | RUN | 0.473791 | 1.528874 | 1.999593 | 0.001742 | 0.002079 | 0.002122 |
| eq_mm_test.test | RUN | 0.547617 | 1.889456 | 2.478852 | 0.002100 | 0.001971 | 0.001834 |
| minus_m_test.test | RUN | 0.473128 | 1.516577 | 1.942640 | 0.002024 | 0.002170 | 0.002023 |
| minus_eq_mm_test.test | RUN | 0.438508 | 1.391744 | 1.814275 | 0.001756 | 0.001956 | 0.001774 |
| minus_mm_test.test | RUN | 0.507266 | 1.817992 | 2.124288 | 0.002071 | 0.002164 | 0.002165 |
| mul_eq_mm_test.test | RUN | 0.418836 | 1.363586 | 1.711100 | 0.002130 | 0.002268 | 0.002283 |
| mul_eq_ms_test.test | RUN | 0.421062 | 0.944230 | 1.636558 | 0.002118 | 0.002121 | 0.002158 |
| mul_mm_test.test | RUN | 0.570380 | 2.934885 | 2.670637 | 0.001936 | 0.002119 | 0.001979 |
| mul_ms_test.test | RUN | 0.487697 | 1.550444 | 2.093343 | 0.002009 | 0.002020 | 0.001980 |
| mul_sm_test.test | RUN | 0.490267 | 1.548220 | 2.114517 | 0.002044 | 0.002028 | 0.001983 |
| mul_mv_test.test | RUN | 0.510563 | 1.662793 | 2.198900 | 0.002101 | 0.002066 | 0.002146 |
| inverse_m_test.test | RUN | 0.653060 | 2.936902 | 2.834403 | 0.002202 | 0.002024 | 0.001955 |
| plus_eq_mm_test.test | RUN | 0.444947 | 1.429824 | 1.855802 | 0.002034 | 0.002116 | 0.002016 |
| plus_mm_test.test | RUN | 0.508319 | 1.817120 | 2.110338 | 0.002000 | 0.002033 | 0.001916 |
| scalar_cast_m_test.test | RUN | 0.387598 | 0.825101 | 1.431692 | 0.001960 | 0.002040 | 0.002092 |
| mat_index_test.test | RUN | 0.303965 | 0.766367 | 1.080546 | 0.001866 | 0.001849 | 0.002117 |
| cmp_qq_test.test | RUN | 0.335543 | 0.725383 | 1.215851 | 0.002087 | 0.001924 | 0.001870 |
| conjugate_test.test | RUN | 0.345668 | 0.742712 | 1.233164 | 0.002023 | 0.002252 | 0.001729 |
| normalize_q_test.test | RUN | 0.356379 | 0.857218 | 1.215792 | 0.001999 | 0.001792 | 0.002277 |
| div_eq_qs_test.test | RUN | 0.333553 | 0.721940 | 1.172744 | 0.001880 | 0.002030 | 0.002345 |
| div_qs_test.test | RUN | 0.331779 | 0.747117 | 1.191650 | 0.002110 | 0.002102 | 0.002294 |
| dot_qq_test.test | RUN | 0.337851 | 0.717170 | 1.151404 | 0.002104 | 0.002120 | 0.001821 |
| eq_qq_test.test | RUN | 0.337420 | 0.758059 | 1.159143 | 0.001896 | 0.001966 | 0.002193 |
| inverse_q_test.test | RUN | 0.411257 | 0.977315 | 1.518275 | 0.001968 | 0.001872 | 0.002112 |
| mag_q_test.test | RUN | 0.329709 | 0.743051 | 1.213546 | 0.001877 | 0.002081 | 0.001816 |
| mag_sqr_q_test.test | RUN | 0.327569 | 0.733066 | 1.143944 | 0.002031 | 0.002127 | 0.002220 |
| minus_q_test.test | RUN | 0.326312 | 0.734730 | 1.158568 | 0.001926 | 0.001799 | 0.002246 |
| minus_eq_qq_test.test | RUN | 0.325726 | 0.744624 | 1.201508 | 0.001830 | 0.002066 | 0.002124 |
| minus_qq_test.test | RUN | 0.326203 | 0.765818 | 1.219494 | 0.001806 | 0.001841 | 0.002068 |
| mul_eq_qs_test.test | RUN | 0.329435 | 0.688478 | 1.185361 | 0.001964 | 0.002176 | 0.001942 |
| mul_qs_test.test | RUN | 0.332192 | 0.740250 | 1.209454 | 0.001833 | 0.002208 | 0.002069 |
| mul_qv_test.test | RUN | 0.404138 | 1.016092 | 1.542610 | 0.002026 | 0.002209 | 0.002290 |
| mul_qq_test.test | RUN | 0.405223 | 1.032572 | 1.506858 | 0.001835 | 0.002188 | 0.001738 |
| mul_eq_qq_test.test | RUN | 0.397872 | 1.012377 | 1.484138 | 0.001931 | 0.002034 | 0.002068 |
| plus_eq_qq_test.test | RUN | 0.340173 | 0.748833 | 1.205381 | 0.001962 | 0.001963 | 0.001618 |
| plus_qq_test.test | RUN | 0.332698 | 0.759437 | 1.176257 | 0.002095 | 0.002094 | 0.002220 |
| scalar_cast_q_test.test | RUN | 0.336077 | 0.680180 | 1.179057 | 0.002192 | 0.001890 | 0.002278 |
| slerp_test.test | RUN | 0.358626 | 1.418671 | 1.453285 | 0.024629 | 0.020458 | 0.021673 |
| convert_to_test.test | RUN | 0.484980 | 1.302262 | 2.109243 | 0.001894 | 0.002146 | 0.002307 |
| rot_mat_test.test | RUN | 0.729699 | 5.783499 | 6.277753 | 0.060429 | 0.054932 | 0.050368 |
| rot_quat_test.test | RUN | 0.413600 | 1.191107 | 1.605453 | 0.002004 | 0.002282 | 0.002102 |
| rotx_mat_test.test | RUN | 0.454988 | 1.591466 | 1.966759 | 0.001776 | 0.002045 | 0.002526 |
| rotx_quat_test.test | RUN | 0.408670 | 1.014085 | 1.439207 | 0.002038 | 0.002152 | 0.001905 |
| roty_mat_test.test | RUN | 0.454284 | 1.605875 | 1.925796 | 0.002097 | 0.002189 | 0.002114 |
| roty_quat_test.test | RUN | 0.396361 | 1.012645 | 1.446565 | 0.001939 | 0.002225 | 0.002024 |
| rotz_mat_test.test | RUN | 0.485916 | 1.780440 | 1.873423 | 0.001854 | 0.001829 | 0.002210 |
| rotz_quat_test.test | RUN | 0.408666 | 1.060218 | 1.426223 | 0.001947 | 0.002244 | 0.002076 |
| zero_vec_test.test | RUN | 0.349531 | 0.874292 | 1.129252 | 0.002158 | 0.001910 | 0.001732 |
| zero_mat_test.test | RUN | 0.450242 | 1.444843 | 1.795851 | 0.002014 | 0.002118 | 0.002220 |
| zero_quat_test.test | RUN | 0.319151 | 0.733471 | 1.174769 | 0.001788 | 0.002037 | 0.001812 |
| identity_mat_test.test | RUN | 0.388193 | 1.082693 | 1.531842 | 0.002022 | 0.002011 | 0.002242 |
| identity_quat_test.test | RUN | 0.328851 | 0.689990 | 1.191346 | 0.001956 | 0.002280 | 0.002347 |
| col_test.test | RUN | 0.651109 | 2.307066 | 3.244804 | 0.001891 | 0.001798 | 0.002254 |
| col_mat_test.test | RUN | 0.414472 | 1.067709 | 1.580126 | 0.002102 | 0.002026 | 0.002170 |
| neg_col_test.test | RUN | 0.485870 | 1.409396 | 2.024870 | 0.001458 | 0.002150 | 0.002341 |
| neg_row_test.test | RUN | 0.496236 | 1.480289 | 2.066367 | 0.002024 | 0.001966 | 0.002128 |
| del_col_test.test | RUN | 0.506382 | 1.603373 | 2.023792 | 0.002261 | 0.002088 | 0.002117 |
| del_row_test.test | RUN | 0.514755 | 1.576167 | 2.046838 | 0.002100 | 0.002138 | 0.002374 |
| del_row_col_test.test | RUN | 0.706853 | 2.968454 | 3.860411 | 0.002167 | 0.002258 | 0.002116 |
| swap_cols_test.test | RUN | 0.930531 | 3.964570 | 4.611704 | 0.002020 | 0.002100 | 0.002308 |
| swap_rows_test.test | RUN | 1.023694 | 4.152949 | 4.503903 | 0.002026 | 0.001758 | 0.002210 |
| diag_test.test | RUN | 0.446679 | 1.065227 | 1.837448 | 0.001942 | 0.002172 | 0.002231 |
| diag_mat_test.test | RUN | 0.456683 | 1.076225 | 1.588866 | 0.002316 | 0.002154 | 0.001834 |
| row_test.test | RUN | 0.667978 | 2.262800 | 3.408398 | 0.001984 | 0.002053 | 0.001900 |
| row_mat_test.test | RUN | 0.432185 | 0.988434 | 1.629475 | 0.002026 | 0.002078 | 0.002276 |
| transpose_test.test | RUN | 0.510072 | 1.551804 | 2.169462 | 0.002046 | 0.001802 | 0.002151 |
| translation_test.test | RUN | 0.406499 | 0.968821 | 1.515260 | 0.002012 | 0.002018 | 0.002020 |
| translation_mat_test.test | RUN | 0.448667 | 1.018802 | 1.674951 | 0.001613 | 0.001978 | 0.001967 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.144715 | 0.280079 | 0.515466 | — | — | — |
| swizzle2_test2.test | RUN | 0.178940 | 0.418606 | 0.641869 | 0.002034 | 0.001920 | 0.002044 |
| swizzle2_test3.test | RUN | 0.185367 | 0.418849 | 0.618927 | 0.001639 | 0.001712 | 0.002165 |
| swizzle2_test4.test | RUN | 0.181633 | 0.418705 | 0.602727 | 0.001642 | 0.001856 | 0.002036 |
| swizzle2_test.test | RUN | 0.566506 | 1.182644 | 2.174825 | 0.002026 | 0.001938 | 0.002150 |
| swizzle3_test2.test | RUN | 0.200316 | 0.441897 | 0.711779 | 0.001820 | 0.002158 | 0.002247 |
| swizzle3_test3.test | RUN | 0.201336 | 0.445424 | 0.713715 | 0.001878 | 0.001824 | 0.002110 |
| swizzle3_test4.test | RUN | 0.200120 | 0.460149 | 0.747588 | 0.002141 | 0.001830 | 0.002165 |
| swizzle3_test.test | RUN | 0.561923 | 1.214018 | 2.185979 | 0.001880 | 0.002055 | 0.002161 |
| swizzle4_test2.test | RUN | 0.339117 | 0.665074 | 1.293363 | 0.001980 | 0.002104 | 0.002041 |
| swizzle4_test3.test | RUN | 0.341419 | 0.651063 | 1.244332 | 0.002034 | 0.001996 | 0.002050 |
| swizzle4_test4.test | RUN | 0.342633 | 0.677171 | 1.247658 | 0.002039 | 0.001836 | 0.002176 |
| swizzle4_test.test | RUN | 0.571090 | 1.338179 | 2.233423 | 0.001720 | 0.001878 | 0.002096 |
| deduce_scalar_test.test | COMPILE | 0.028771 | 0.059841 | 0.105704 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.226583 | 0.484267 | 0.821737 | 0.001856 | 0.002164 | 0.002109 |
| deduce_scalar_mv_test.test | RUN | 0.273020 | 0.587604 | 0.916348 | 0.001654 | 0.001922 | 0.002130 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.021879 | 0.042412 | 0.082807 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.024751 | 0.056944 | 0.090229 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.025128 | 0.052943 | 0.090657 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.024336 | 0.053025 | 0.095156 | — | — | — |
| interop_test.test | RUN | 0.226292 | 0.634469 | 1.412015 | 0.000758 | 0.000679 | 0.001498 |
| transform_test.test | RUN | 0.511401 | 0.968960 | 1.764232 | 0.001600 | 0.001464 | 0.001587 |
| projection_test.test | RUN | 0.351266 | 0.771510 | 1.228953 | 0.001674 | 0.001464 | 0.001522 |
| scalar_traits_test.test | COMPILE | 0.028374 | 0.056417 | 0.094307 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.975× | 0.979×, 0.970× | 0.977× |
| clang | 1.079× | 1.054×, 1.104× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001258s | 0.001248s | 0.001262s | byte equality observed |
| access_q_test.test | 10 | 0.001294s | 0.001230s | 0.001264s | byte equality observed |
| access_v_test.test | 10 | 0.001285s | 0.001213s | 0.001299s | byte equality observed |
| assign_test.test | 10 | 0.001240s | 0.001268s | 0.001234s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001272s | 0.001306s | 0.001285s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001237s | 0.001283s | 0.001269s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001248s | 0.001281s | 0.001283s | byte equality observed |
| col_mat_test.test | 10 | 0.001269s | 0.001280s | 0.001294s | byte equality observed |
| col_test.test | 10 | 0.001270s | 0.001236s | 0.001241s | byte equality observed |
| conjugate_test.test | 10 | 0.001279s | 0.001301s | 0.001292s | byte equality observed |
| convert_to_test.test | 10 | 0.001250s | 0.001298s | 0.001274s | byte equality observed |
| cross_test.test | 10 | 0.001291s | 0.001279s | 0.001227s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001303s | 0.001249s | 0.001253s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001285s | 0.001297s | 0.001249s | byte equality observed |
| del_col_test.test | 10 | 0.001251s | 0.001272s | 0.001229s | byte equality observed |
| del_row_col_test.test | 10 | 0.001270s | 0.001282s | 0.001262s | byte equality observed |
| del_row_test.test | 10 | 0.001276s | 0.001330s | 0.001261s | byte equality observed |
| determinant_test.test | 10 | 0.001257s | 0.001322s | 0.001267s | byte equality observed |
| diag_mat_test.test | 10 | 0.001255s | 0.001291s | 0.001261s | byte equality observed |
| diag_test.test | 9 | 0.001251s | 0.001257s | 0.001251s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001273s | 0.001221s | 0.001251s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001275s | 0.001261s | 0.001288s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001238s | 0.001286s | 0.001253s | byte equality observed |
| div_ms_test.test | 10 | 0.001243s | 0.001269s | 0.001266s | byte equality observed |
| div_qs_test.test | 10 | 0.001292s | 0.001237s | 0.001266s | byte equality observed |
| div_vs_test.test | 10 | 0.001293s | 0.001258s | 0.001306s | byte equality observed |
| dot_qq_test.test | 10 | 0.001257s | 0.001249s | 0.001279s | byte equality observed |
| dot_vv_test.test | 10 | 0.001249s | 0.001263s | 0.001296s | byte equality observed |
| eq_mm_test.test | 10 | 0.001263s | 0.001316s | 0.001250s | byte equality observed |
| eq_qq_test.test | 10 | 0.001254s | 0.001262s | 0.001246s | byte equality observed |
| eq_vv_test.test | 10 | 0.001288s | 0.001280s | 0.001253s | byte equality observed |
| identity_mat_test.test | 10 | 0.001275s | 0.001301s | 0.001257s | byte equality observed |
| identity_quat_test.test | 10 | 0.001269s | 0.001281s | 0.001309s | byte equality observed |
| interop_test.test | 10 | 0.000581s | 0.000598s | 0.001208s | byte equality observed |
| inverse_m_test.test | 10 | 0.001354s | 0.001326s | 0.001282s | byte equality observed |
| inverse_q_test.test | 10 | 0.001244s | 0.001291s | 0.001277s | byte equality observed |
| mag_q_test.test | 10 | 0.001252s | 0.001242s | 0.001286s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001289s | 0.001321s | 0.001265s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001253s | 0.001290s | 0.001247s | byte equality observed |
| mag_v_test.test | 10 | 0.001257s | 0.001333s | 0.001264s | byte equality observed |
| mat_index_test.test | 10 | 0.001254s | 0.001278s | 0.001330s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001279s | 0.001309s | 0.001277s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001226s | 0.001264s | 0.001267s | byte equality observed |
| math_test.test | 9 | 0.001883s | 0.001831s | 0.001609s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001247s | 0.001234s | 0.001238s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001231s | 0.001285s | 0.001257s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001256s | 0.001299s | 0.001254s | byte equality observed |
| minus_m_test.test | 10 | 0.001282s | 0.001276s | 0.001280s | byte equality observed |
| minus_mm_test.test | 10 | 0.001255s | 0.001259s | 0.001296s | byte equality observed |
| minus_q_test.test | 10 | 0.001336s | 0.001253s | 0.001276s | byte equality observed |
| minus_qq_test.test | 10 | 0.001301s | 0.001319s | 0.001318s | byte equality observed |
| minus_v_test.test | 10 | 0.001244s | 0.001239s | 0.001294s | byte equality observed |
| minus_vv_test.test | 9 | 0.001264s | 0.001263s | 0.001239s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001274s | 0.001291s | 0.001294s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001274s | 0.001249s | 0.001282s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001268s | 0.001267s | 0.001267s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001260s | 0.001282s | 0.001281s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001241s | 0.001288s | 0.001280s | byte equality observed |
| mul_mm_test.test | 8 | 0.001255s | 0.001245s | 0.001261s | byte equality observed |
| mul_ms_test.test | 10 | 0.001262s | 0.001277s | 0.001269s | byte equality observed |
| mul_mv_test.test | 10 | 0.001247s | 0.001301s | 0.001325s | byte equality observed |
| mul_qq_test.test | 10 | 0.001300s | 0.001275s | 0.001268s | byte equality observed |
| mul_qs_test.test | 10 | 0.001250s | 0.001237s | 0.001296s | byte equality observed |
| mul_qv_test.test | 10 | 0.001283s | 0.001256s | 0.001294s | byte equality observed |
| mul_sm_test.test | 10 | 0.001259s | 0.001347s | 0.001304s | byte equality observed |
| mul_sv_test.test | 10 | 0.001241s | 0.001286s | 0.001289s | byte equality observed |
| mul_vm_test.test | 10 | 0.001260s | 0.001223s | 0.001306s | byte equality observed |
| mul_vs_test.test | 10 | 0.001267s | 0.001262s | 0.001279s | byte equality observed |
| neg_col_test.test | 10 | 0.001231s | 0.001271s | 0.001325s | byte equality observed |
| neg_row_test.test | 10 | 0.001246s | 0.001270s | 0.001354s | byte equality observed |
| normalize_q_test.test | 10 | 0.001234s | 0.001314s | 0.001249s | byte equality observed |
| normalize_v_test.test | 10 | 0.001264s | 0.001313s | 0.001302s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001238s | 0.001258s | 0.001294s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001250s | 0.001284s | 0.001388s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001289s | 0.001270s | 0.001391s | byte equality observed |
| plus_mm_test.test | 10 | 0.001265s | 0.001281s | 0.001386s | byte equality observed |
| plus_qq_test.test | 10 | 0.001275s | 0.001298s | 0.001430s | byte equality observed |
| plus_vv_test.test | 10 | 0.001310s | 0.001237s | 0.001456s | byte equality observed |
| projection_test.test | 10 | 0.001262s | 0.001241s | 0.001399s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001259s | 0.001248s | 0.001464s | byte equality observed |
| quat_traits_std_array_test.test | 7 | 0.001256s | 0.001321s | 0.001420s | byte equality observed |
| rot_mat_test.test | 1 | 0.037123s | 0.032607s | 0.046081s | byte equality observed |
| rot_quat_test.test | 10 | 0.001173s | 0.001172s | 0.001434s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001178s | 0.001214s | 0.001491s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001306s | 0.001270s | 0.001433s | byte equality observed |
| roty_mat_test.test | 10 | 0.001281s | 0.001260s | 0.001510s | byte equality observed |
| roty_quat_test.test | 10 | 0.001246s | 0.001284s | 0.001524s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001265s | 0.001308s | 0.001531s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001274s | 0.001272s | 0.001492s | byte equality observed |
| row_mat_test.test | 10 | 0.001274s | 0.001338s | 0.001465s | byte equality observed |
| row_test.test | 10 | 0.001277s | 0.001242s | 0.001497s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001283s | 0.001273s | 0.001485s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001295s | 0.001240s | 0.001484s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001249s | 0.001239s | 0.001421s | byte equality observed |
| slerp_test.test | 2 | 0.016806s | 0.013732s | 0.019681s | byte equality observed |
| swap_cols_test.test | 9 | 0.001152s | 0.001162s | 0.001474s | byte equality observed |
| swap_rows_test.test | 10 | 0.001183s | 0.001196s | 0.001432s | byte equality observed |
| swizzle2_test.test | 10 | 0.001270s | 0.001247s | 0.001466s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001286s | 0.001260s | 0.001468s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001297s | 0.001293s | 0.001540s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001296s | 0.001336s | 0.001470s | byte equality observed |
| swizzle3_test.test | 10 | 0.001296s | 0.001337s | 0.001501s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001388s | 0.001398s | 0.001528s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001369s | 0.001446s | 0.001491s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001426s | 0.001420s | 0.001501s | byte equality observed |
| swizzle4_test.test | 10 | 0.001463s | 0.001477s | 0.001517s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001474s | 0.001458s | 0.001511s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001435s | 0.001480s | 0.001510s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001448s | 0.001489s | 0.001489s | byte equality observed |
| to_string_test.test | 10 | 0.001542s | 0.001534s | 0.001569s | byte equality observed |
| transform_test.test | 10 | 0.001504s | 0.001465s | 0.001452s | byte equality observed |
| translation_mat_test.test | 10 | 0.001481s | 0.001473s | 0.001506s | byte equality observed |
| translation_test.test | 10 | 0.001472s | 0.001505s | 0.001482s | byte equality observed |
| transpose_test.test | 10 | 0.001467s | 0.001486s | 0.001507s | byte equality observed |
| vec_index_test.test | 10 | 0.001491s | 0.001422s | 0.001512s | byte equality observed |
| vec_register_test.test | 10 | 0.001528s | 0.001502s | 0.001516s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001452s | 0.001494s | 0.001525s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001471s | 0.001478s | 0.001530s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001478s | 0.001463s | 0.001524s | byte equality observed |
| zero_mat_test.test | 10 | 0.001475s | 0.001485s | 0.001499s | byte equality observed |
| zero_quat_test.test | 10 | 0.001508s | 0.001491s | 0.001508s | byte equality observed |
| zero_vec_test.test | 10 | 0.001485s | 0.001450s | 0.001528s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
