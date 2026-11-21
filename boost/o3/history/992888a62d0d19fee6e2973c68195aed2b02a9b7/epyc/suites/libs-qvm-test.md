# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.238808 | 0.643034 | 0.767822 | 0.001983 | 0.002118 | 0.002118 |
| mat_traits_array_test.test | RUN | 0.186879 | 0.620533 | 0.612257 | 0.001712 | 0.001646 | 0.001531 |
| mat_traits_std_array_test.test | RUN | 0.189946 | 0.486919 | 0.619840 | 0.001614 | 0.001632 | 0.001425 |
| vec_traits_array_test.test | RUN | 0.169563 | 0.506335 | 0.527092 | 0.001600 | 0.001326 | 0.001348 |
| vec_traits_gnuc_test.test | RUN | 0.300329 | 0.613543 | 1.064646 | 0.001392 | 0.001656 | 0.001671 |
| vec_traits_std_array_test.test | RUN | 0.164631 | 0.403093 | 0.531841 | 0.001744 | 0.001643 | 0.001499 |
| quat_traits_array_test.test | RUN | 0.163171 | 0.513280 | 0.494611 | 0.001436 | 0.001518 | 0.001487 |
| quat_traits_std_array_test.test | RUN | 0.159008 | 0.398613 | 0.495346 | 0.001526 | 0.001568 | 0.001725 |
| access_m_test.test | RUN | 0.262849 | 0.969196 | 1.171035 | 0.001593 | 0.001848 | 0.001523 |
| access_m_fail1.test | COMPILE_FAIL | 0.025443 | 0.041196 | 0.072329 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025201 | 0.041321 | 0.072251 | — | — | — |
| access_q_test.test | RUN | 0.214388 | 0.479449 | 0.642715 | 0.001478 | 0.001922 | 0.001589 |
| access_q_fail.test | COMPILE_FAIL | 0.018247 | 0.032892 | 0.068202 | — | — | — |
| access_v_test.test | RUN | 0.217218 | 0.519856 | 0.680199 | 0.001484 | 0.001837 | 0.001652 |
| access_v_fail1.test | COMPILE_FAIL | 0.018066 | 0.031666 | 0.058719 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.017612 | 0.030629 | 0.060123 | — | — | — |
| assign_test.test | RUN | 0.322753 | 0.775914 | 1.198157 | 0.001762 | 0.001831 | 0.001706 |
| to_string_test.test | RUN | 0.374376 | 1.285170 | 6.588783 | 0.001319 | 0.001733 | 0.001387 |
| cmp_vv_test.test | RUN | 0.265384 | 0.654013 | 0.845458 | 0.001729 | 0.001838 | 0.001659 |
| cross_test.test | RUN | 0.260219 | 0.585433 | 0.843030 | 0.001277 | 0.001786 | 0.001417 |
| div_eq_vs_test.test | RUN | 0.244004 | 0.565441 | 0.771773 | 0.001649 | 0.001882 | 0.001667 |
| div_vs_test.test | RUN | 0.255972 | 0.673593 | 0.878068 | 0.001336 | 0.001850 | 0.001530 |
| dot_vv_test.test | RUN | 0.245283 | 0.602084 | 0.825614 | 0.001272 | 0.001830 | 0.001472 |
| eq_vv_test.test | RUN | 0.269020 | 0.687978 | 0.825311 | 0.001436 | 0.001750 | 0.001712 |
| mag_v_test.test | RUN | 0.241226 | 0.554296 | 0.773196 | 0.001620 | 0.001845 | 0.001458 |
| mag_sqr_v_test.test | RUN | 0.241605 | 0.554661 | 0.769306 | 0.001665 | 0.001900 | 0.001471 |
| minus_v_test.test | RUN | 0.250212 | 0.638993 | 0.786335 | 0.001358 | 0.001826 | 0.001645 |
| minus_eq_vv_test.test | RUN | 0.247996 | 0.637545 | 0.812472 | 0.001413 | 0.001724 | 0.001754 |
| minus_vv_test.test | RUN | 0.256677 | 0.669887 | 0.850990 | 0.001601 | 0.001817 | 0.001434 |
| mul_eq_vs_test.test | RUN | 0.247956 | 0.550155 | 0.811901 | 0.001545 | 0.001907 | 0.001672 |
| mul_vs_test.test | RUN | 0.257227 | 0.681772 | 0.876452 | 0.001582 | 0.001839 | 0.001582 |
| mul_sv_test.test | RUN | 0.259748 | 0.678016 | 0.839636 | 0.001372 | 0.001836 | 0.001515 |
| mul_vm_test.test | RUN | 0.349064 | 1.201913 | 1.320914 | 0.001229 | 0.001775 | 0.001592 |
| normalize_v_test.test | RUN | 0.260010 | 0.833003 | 0.892259 | 0.001558 | 0.001817 | 0.001642 |
| plus_eq_vv_test.test | RUN | 0.244071 | 0.644287 | 0.752692 | 0.001742 | 0.001400 | 0.001500 |
| plus_vv_test.test | RUN | 0.258998 | 0.696454 | 0.882046 | 0.001491 | 0.001923 | 0.001598 |
| scalar_cast_v_test.test | RUN | 0.241298 | 0.509020 | 0.787022 | 0.001467 | 0.001526 | 0.001296 |
| vec_index_test.test | RUN | 0.208580 | 0.521244 | 0.670086 | 0.001598 | 0.001833 | 0.001577 |
| vec_register_test.test | RUN | 0.139075 | 0.452613 | 0.499243 | 0.001734 | 0.001686 | 0.001566 |
| cmp_mm_test.test | RUN | 0.401790 | 1.462101 | 1.652065 | 0.001732 | 0.001826 | 0.001732 |
| determinant_test.test | RUN | 0.285543 | 0.749127 | 0.948340 | 0.001520 | 0.001830 | 0.001518 |
| div_eq_ms_test.test | RUN | 0.289984 | 0.715657 | 1.056853 | 0.001584 | 0.001388 | 0.001713 |
| div_ms_test.test | RUN | 0.336190 | 1.109050 | 1.284612 | 0.001625 | 0.001878 | 0.001606 |
| eq_mm_test.test | RUN | 0.389214 | 1.354999 | 1.585442 | 0.001633 | 0.001860 | 0.001586 |
| minus_m_test.test | RUN | 0.336832 | 1.100814 | 1.244357 | 0.001555 | 0.001806 | 0.001591 |
| minus_eq_mm_test.test | RUN | 0.315923 | 1.040040 | 1.142011 | 0.001485 | 0.001885 | 0.001756 |
| minus_mm_test.test | RUN | 0.354543 | 1.279233 | 1.346508 | 0.001766 | 0.001855 | 0.001700 |
| mul_eq_mm_test.test | RUN | 0.291846 | 0.963176 | 1.031299 | 0.001729 | 0.001397 | 0.001669 |
| mul_eq_ms_test.test | RUN | 0.294962 | 0.687105 | 1.038162 | 0.001572 | 0.001703 | 0.001740 |
| mul_mm_test.test | RUN | 0.400807 | 2.073398 | 1.677112 | 0.001741 | 0.001806 | 0.001479 |
| mul_ms_test.test | RUN | 0.347769 | 1.110456 | 1.309656 | 0.001655 | 0.001816 | 0.001538 |
| mul_sm_test.test | RUN | 0.349098 | 1.093964 | 1.274222 | 0.001783 | 0.001723 | 0.001356 |
| mul_mv_test.test | RUN | 0.354885 | 1.174957 | 1.333339 | 0.001586 | 0.001864 | 0.001723 |
| inverse_m_test.test | RUN | 0.471412 | 2.140047 | 1.821074 | 0.001490 | 0.001895 | 0.001780 |
| plus_eq_mm_test.test | RUN | 0.318753 | 1.023286 | 1.140221 | 0.002002 | 0.001861 | 0.001700 |
| plus_mm_test.test | RUN | 0.358562 | 1.267560 | 1.345733 | 0.001541 | 0.001928 | 0.001726 |
| scalar_cast_m_test.test | RUN | 0.275544 | 0.582610 | 0.832095 | 0.001718 | 0.001840 | 0.001772 |
| mat_index_test.test | RUN | 0.220069 | 0.555874 | 0.727248 | 0.001569 | 0.001681 | 0.001660 |
| cmp_qq_test.test | RUN | 0.242745 | 0.525795 | 0.699607 | 0.001750 | 0.001853 | 0.001687 |
| conjugate_test.test | RUN | 0.244443 | 0.524559 | 0.727780 | 0.001591 | 0.001828 | 0.001708 |
| normalize_q_test.test | RUN | 0.244003 | 0.586326 | 0.780388 | 0.002107 | 0.001795 | 0.002438 |
| div_eq_qs_test.test | RUN | 0.236934 | 0.523039 | 0.705099 | 0.001527 | 0.001661 | 0.001557 |
| div_qs_test.test | RUN | 0.243899 | 0.522017 | 0.733243 | 0.001731 | 0.001710 | 0.001679 |
| dot_qq_test.test | RUN | 0.245000 | 0.519463 | 0.737902 | 0.001552 | 0.001898 | 0.001693 |
| eq_qq_test.test | RUN | 0.247657 | 0.549986 | 0.746918 | 0.001614 | 0.001857 | 0.001802 |
| inverse_q_test.test | RUN | 0.288266 | 0.723240 | 0.932607 | 0.001692 | 0.001540 | 0.001727 |
| mag_q_test.test | RUN | 0.240576 | 0.558301 | 0.761809 | 0.001734 | 0.001844 | 0.001783 |
| mag_sqr_q_test.test | RUN | 0.240313 | 0.530495 | 0.691469 | 0.001712 | 0.001838 | 0.001577 |
| minus_q_test.test | RUN | 0.242079 | 0.537094 | 0.742587 | 0.001704 | 0.001925 | 0.001674 |
| minus_eq_qq_test.test | RUN | 0.240255 | 0.541375 | 0.743673 | 0.001497 | 0.001778 | 0.001732 |
| minus_qq_test.test | RUN | 0.247052 | 0.552497 | 0.732338 | 0.001455 | 0.001564 | 0.001736 |
| mul_eq_qs_test.test | RUN | 0.239139 | 0.513800 | 0.760434 | 0.001755 | 0.001869 | 0.001618 |
| mul_qs_test.test | RUN | 0.237351 | 0.554285 | 0.700344 | 0.001715 | 0.001864 | 0.001757 |
| mul_qv_test.test | RUN | 0.294046 | 0.742390 | 0.914722 | 0.001694 | 0.001577 | 0.001704 |
| mul_qq_test.test | RUN | 0.288338 | 0.751183 | 0.928547 | 0.001484 | 0.001601 | 0.001644 |
| mul_eq_qq_test.test | RUN | 0.287790 | 0.755258 | 0.940845 | 0.001674 | 0.001828 | 0.001523 |
| plus_eq_qq_test.test | RUN | 0.243927 | 0.556712 | 0.757251 | 0.001651 | 0.001908 | 0.001603 |
| plus_qq_test.test | RUN | 0.242734 | 0.561581 | 0.749686 | 0.001607 | 0.001568 | 0.001676 |
| scalar_cast_q_test.test | RUN | 0.237529 | 0.524080 | 0.745288 | 0.001493 | 0.001797 | 0.001601 |
| slerp_test.test | RUN | 0.257275 | 1.048392 | 0.871297 | 0.018135 | 0.013961 | 0.015515 |
| convert_to_test.test | RUN | 0.358768 | 0.973350 | 1.360166 | 0.001771 | 0.001679 | 0.001682 |
| rot_mat_test.test | RUN | 0.523406 | 4.221893 | 3.951423 | 0.043266 | 0.038619 | 0.035476 |
| rot_quat_test.test | RUN | 0.297524 | 0.881774 | 0.936773 | 0.001611 | 0.001844 | 0.001807 |
| rotx_mat_test.test | RUN | 0.335106 | 1.136993 | 1.241372 | 0.001265 | 0.002054 | 0.001708 |
| rotx_quat_test.test | RUN | 0.290438 | 0.751689 | 0.892926 | 0.001770 | 0.001889 | 0.001726 |
| roty_mat_test.test | RUN | 0.335167 | 1.164978 | 1.257036 | 0.001750 | 0.001840 | 0.001750 |
| roty_quat_test.test | RUN | 0.286263 | 0.757536 | 0.807517 | 0.001897 | 0.001827 | 0.001614 |
| rotz_mat_test.test | RUN | 0.350357 | 1.320425 | 1.286715 | 0.001696 | 0.001692 | 0.001744 |
| rotz_quat_test.test | RUN | 0.294871 | 0.765410 | 0.877585 | 0.001397 | 0.001858 | 0.001478 |
| zero_vec_test.test | RUN | 0.251640 | 0.648468 | 0.716938 | 0.001714 | 0.001928 | 0.001598 |
| zero_mat_test.test | RUN | 0.307293 | 1.077044 | 1.103207 | 0.001574 | 0.001694 | 0.001323 |
| zero_quat_test.test | RUN | 0.240383 | 0.561853 | 0.757269 | 0.001550 | 0.001678 | 0.001632 |
| identity_mat_test.test | RUN | 0.284961 | 0.775360 | 0.941381 | 0.001705 | 0.001824 | 0.001611 |
| identity_quat_test.test | RUN | 0.245814 | 0.519754 | 0.758661 | 0.001749 | 0.001942 | 0.001738 |
| col_test.test | RUN | 0.467723 | 1.674654 | 2.039712 | 0.001714 | 0.001866 | 0.001691 |
| col_mat_test.test | RUN | 0.301567 | 0.779530 | 0.985083 | 0.001704 | 0.001891 | 0.001740 |
| neg_col_test.test | RUN | 0.357218 | 1.036754 | 1.292114 | 0.001553 | 0.001936 | 0.001699 |
| neg_row_test.test | RUN | 0.354170 | 1.081922 | 1.246459 | 0.001707 | 0.001836 | 0.001608 |
| del_col_test.test | RUN | 0.365847 | 1.174551 | 1.282859 | 0.001541 | 0.001858 | 0.001704 |
| del_row_test.test | RUN | 0.366299 | 1.152757 | 1.278821 | 0.001743 | 0.002017 | 0.001644 |
| del_row_col_test.test | RUN | 0.511929 | 2.178496 | 2.465572 | 0.001775 | 0.001852 | 0.001682 |
| swap_cols_test.test | RUN | 0.670824 | 2.894218 | 2.965263 | 0.001807 | 0.001832 | 0.001723 |
| swap_rows_test.test | RUN | 0.729314 | 3.010701 | 2.893604 | 0.002182 | 0.001495 | 0.001634 |
| diag_test.test | RUN | 0.321364 | 0.778045 | 1.121406 | 0.001700 | 0.002019 | 0.001728 |
| diag_mat_test.test | RUN | 0.315138 | 0.785498 | 0.942818 | 0.001656 | 0.001846 | 0.001704 |
| row_test.test | RUN | 0.472537 | 1.633750 | 2.022823 | 0.001614 | 0.001936 | 0.001676 |
| row_mat_test.test | RUN | 0.305143 | 0.712807 | 0.923332 | 0.001550 | 0.001434 | 0.001697 |
| transpose_test.test | RUN | 0.364077 | 1.129029 | 1.301810 | 0.001679 | 0.001530 | 0.001428 |
| translation_test.test | RUN | 0.291547 | 0.709935 | 0.966972 | 0.001584 | 0.001867 | 0.001686 |
| translation_mat_test.test | RUN | 0.318579 | 0.729300 | 1.059308 | 0.001542 | 0.001549 | 0.001246 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.107477 | 0.200266 | 0.275956 | — | — | — |
| swizzle2_test2.test | RUN | 0.131581 | 0.311080 | 0.406244 | 0.001522 | 0.001625 | 0.001700 |
| swizzle2_test3.test | RUN | 0.126733 | 0.311846 | 0.415410 | 0.001378 | 0.001476 | 0.001476 |
| swizzle2_test4.test | RUN | 0.130579 | 0.299436 | 0.402295 | 0.001322 | 0.001856 | 0.001442 |
| swizzle2_test.test | RUN | 0.417666 | 0.851204 | 1.375658 | 0.001626 | 0.001374 | 0.001525 |
| swizzle3_test2.test | RUN | 0.144269 | 0.325488 | 0.451979 | 0.001610 | 0.001760 | 0.001342 |
| swizzle3_test3.test | RUN | 0.142814 | 0.325272 | 0.470705 | 0.001573 | 0.001634 | 0.001561 |
| swizzle3_test4.test | RUN | 0.141566 | 0.335685 | 0.451493 | 0.001296 | 0.001591 | 0.001409 |
| swizzle3_test.test | RUN | 0.405047 | 0.884425 | 1.372354 | 0.001527 | 0.001770 | 0.001732 |
| swizzle4_test2.test | RUN | 0.235775 | 0.478692 | 0.801979 | 0.001461 | 0.001874 | 0.001525 |
| swizzle4_test3.test | RUN | 0.235809 | 0.461116 | 0.801879 | 0.001459 | 0.001356 | 0.001390 |
| swizzle4_test4.test | RUN | 0.242325 | 0.462423 | 0.781363 | 0.001546 | 0.001420 | 0.001596 |
| swizzle4_test.test | RUN | 0.413173 | 0.951926 | 1.384433 | 0.001533 | 0.001845 | 0.001689 |
| deduce_scalar_test.test | COMPILE | 0.021797 | 0.045276 | 0.071744 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.156036 | 0.353776 | 0.509367 | 0.001500 | 0.001710 | 0.001513 |
| deduce_scalar_mv_test.test | RUN | 0.182556 | 0.424387 | 0.546764 | 0.001551 | 0.001713 | 0.001705 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017312 | 0.030620 | 0.056511 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019790 | 0.042402 | 0.062847 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.018871 | 0.038953 | 0.062797 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.019554 | 0.038884 | 0.061330 | — | — | — |
| interop_test.test | RUN | 0.197159 | 0.468648 | 0.863400 | 0.000636 | 0.000612 | 0.001609 |
| transform_test.test | RUN | 0.374514 | 0.769325 | 1.063095 | 0.001304 | 0.001260 | 0.001221 |
| projection_test.test | RUN | 0.242390 | 0.568761 | 0.759820 | 0.001322 | 0.001339 | 0.001239 |
| scalar_traits_test.test | COMPILE | 0.019958 | 0.042241 | 0.066437 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.955×† | 0.954×, 0.955× | 1.083× |
| clang | 0.930×† | 0.896×, 0.965× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001010s | 0.000987s | 0.000983s | byte equality observed |
| access_q_test.test | 10 | 0.001018s | 0.001006s | 0.001006s | byte equality observed |
| access_v_test.test | 10 | 0.001015s | 0.001022s | 0.001016s | byte equality observed |
| assign_test.test | 10 | 0.000986s | 0.001028s | 0.001000s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001005s | 0.000984s | 0.000980s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000994s | 0.001003s | 0.001010s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000988s | 0.000994s | 0.000997s | byte equality observed |
| col_mat_test.test | 10 | 0.001011s | 0.000979s | 0.000978s | byte equality observed |
| col_test.test | 10 | 0.001022s | 0.001003s | 0.001005s | byte equality observed |
| conjugate_test.test | 10 | 0.001042s | 0.000979s | 0.000991s | byte equality observed |
| convert_to_test.test | 10 | 0.001018s | 0.001005s | 0.001014s | byte equality observed |
| cross_test.test | 10 | 0.001004s | 0.001009s | 0.001009s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001002s | 0.001019s | 0.000999s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001020s | 0.000984s | 0.001009s | byte equality observed |
| del_col_test.test | 10 | 0.001032s | 0.000990s | 0.001005s | byte equality observed |
| del_row_col_test.test | 10 | 0.000986s | 0.000987s | 0.000984s | byte equality observed |
| del_row_test.test | 10 | 0.000992s | 0.001014s | 0.000993s | byte equality observed |
| determinant_test.test | 10 | 0.001063s | 0.000998s | 0.001031s | byte equality observed |
| diag_mat_test.test | 10 | 0.001001s | 0.001025s | 0.001001s | byte equality observed |
| diag_test.test | 10 | 0.001002s | 0.001012s | 0.000998s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001002s | 0.000981s | 0.000970s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001001s | 0.001032s | 0.000991s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000995s | 0.001053s | 0.000985s | byte equality observed |
| div_ms_test.test | 10 | 0.000986s | 0.001007s | 0.000990s | byte equality observed |
| div_qs_test.test | 10 | 0.000992s | 0.001005s | 0.001003s | byte equality observed |
| div_vs_test.test | 10 | 0.000995s | 0.000991s | 0.001015s | byte equality observed |
| dot_qq_test.test | 10 | 0.000998s | 0.001009s | 0.000999s | byte equality observed |
| dot_vv_test.test | 10 | 0.000998s | 0.001016s | 0.001017s | byte equality observed |
| eq_mm_test.test | 10 | 0.001029s | 0.000994s | 0.000997s | byte equality observed |
| eq_qq_test.test | 10 | 0.001020s | 0.000994s | 0.000989s | byte equality observed |
| eq_vv_test.test | 10 | 0.001031s | 0.001006s | 0.001028s | byte equality observed |
| identity_mat_test.test | 10 | 0.001011s | 0.000975s | 0.000999s | byte equality observed |
| identity_quat_test.test | 10 | 0.001020s | 0.001007s | 0.000988s | byte equality observed |
| interop_test.test | 10 | 0.000468s | 0.000465s | 0.000975s | byte equality observed |
| inverse_m_test.test | 10 | 0.001060s | 0.001015s | 0.001060s | byte equality observed |
| inverse_q_test.test | 10 | 0.001007s | 0.000988s | 0.000979s | byte equality observed |
| mag_q_test.test | 10 | 0.001036s | 0.000983s | 0.000977s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000987s | 0.000990s | 0.000996s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001006s | 0.001030s | 0.000992s | byte equality observed |
| mag_v_test.test | 10 | 0.001034s | 0.001013s | 0.001028s | byte equality observed |
| mat_index_test.test | 10 | 0.001006s | 0.001012s | 0.001006s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001021s | 0.000998s | 0.001009s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000984s | 0.000982s | 0.001021s | byte equality observed |
| math_test.test | 10 | 0.001522s | 0.001482s | 0.001327s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000981s | 0.000995s | 0.000992s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001013s | 0.001055s | 0.000963s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001001s | 0.000988s | 0.000969s | byte equality observed |
| minus_m_test.test | 10 | 0.001020s | 0.001024s | 0.001001s | byte equality observed |
| minus_mm_test.test | 10 | 0.001003s | 0.000997s | 0.000993s | byte equality observed |
| minus_q_test.test | 10 | 0.001002s | 0.001004s | 0.000989s | byte equality observed |
| minus_qq_test.test | 10 | 0.000985s | 0.001034s | 0.000974s | byte equality observed |
| minus_v_test.test | 10 | 0.001006s | 0.001003s | 0.001019s | byte equality observed |
| minus_vv_test.test | 10 | 0.001030s | 0.001004s | 0.000984s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000996s | 0.001015s | 0.000991s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000997s | 0.000988s | 0.000988s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001036s | 0.001044s | 0.001037s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001024s | 0.000984s | 0.000994s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001014s | 0.000995s | 0.001008s | byte equality observed |
| mul_mm_test.test | 10 | 0.001023s | 0.001005s | 0.001023s | byte equality observed |
| mul_ms_test.test | 10 | 0.001023s | 0.000989s | 0.001009s | byte equality observed |
| mul_mv_test.test | 10 | 0.001016s | 0.000978s | 0.000986s | byte equality observed |
| mul_qq_test.test | 10 | 0.001024s | 0.000975s | 0.001004s | byte equality observed |
| mul_qs_test.test | 10 | 0.000985s | 0.000995s | 0.000974s | byte equality observed |
| mul_qv_test.test | 10 | 0.001024s | 0.001015s | 0.000999s | byte equality observed |
| mul_sm_test.test | 10 | 0.000998s | 0.001014s | 0.000982s | byte equality observed |
| mul_sv_test.test | 10 | 0.000994s | 0.001017s | 0.001004s | byte equality observed |
| mul_vm_test.test | 10 | 0.001037s | 0.000964s | 0.000989s | byte equality observed |
| mul_vs_test.test | 10 | 0.000999s | 0.000977s | 0.000986s | byte equality observed |
| neg_col_test.test | 10 | 0.001031s | 0.000980s | 0.001013s | byte equality observed |
| neg_row_test.test | 10 | 0.000989s | 0.001016s | 0.001008s | byte equality observed |
| normalize_q_test.test | 10 | 0.001002s | 0.001036s | 0.000980s | byte equality observed |
| normalize_v_test.test | 10 | 0.001048s | 0.001031s | 0.000983s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000995s | 0.001048s | 0.001004s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001009s | 0.001056s | 0.000994s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001008s | 0.001008s | 0.001002s | byte equality observed |
| plus_mm_test.test | 10 | 0.001046s | 0.001022s | 0.000967s | byte equality observed |
| plus_qq_test.test | 10 | 0.001032s | 0.001044s | 0.000990s | byte equality observed |
| plus_vv_test.test | 10 | 0.000986s | 0.001006s | 0.000997s | byte equality observed |
| projection_test.test | 10 | 0.001029s | 0.001018s | 0.001035s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001010s | 0.001045s | 0.000997s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000962s | 0.000997s | 0.000970s | byte equality observed |
| rot_mat_test.test | 1 | 0.029900s | 0.024867s | 0.026184s | byte equality observed |
| rot_quat_test.test | 10 | 0.000948s | 0.000991s | 0.000944s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000979s | 0.001004s | 0.000970s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001030s | 0.000988s | 0.001030s | byte equality observed |
| roty_mat_test.test | 10 | 0.001054s | 0.001032s | 0.001023s | byte equality observed |
| roty_quat_test.test | 10 | 0.001024s | 0.000996s | 0.000993s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001042s | 0.001032s | 0.001015s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001010s | 0.000985s | 0.000991s | byte equality observed |
| row_mat_test.test | 10 | 0.001054s | 0.000982s | 0.001002s | byte equality observed |
| row_test.test | 10 | 0.001002s | 0.001027s | 0.000973s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001024s | 0.001001s | 0.000995s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001002s | 0.000979s | 0.001012s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000987s | 0.000982s | 0.000978s | byte equality observed |
| slerp_test.test | 2 | 0.013218s | 0.010992s | 0.011608s | byte equality observed |
| swap_cols_test.test | 10 | 0.000967s | 0.000976s | 0.000958s | byte equality observed |
| swap_rows_test.test | 10 | 0.001023s | 0.000988s | 0.000976s | byte equality observed |
| swizzle2_test.test | 10 | 0.001011s | 0.001019s | 0.001004s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001036s | 0.001007s | 0.000984s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001028s | 0.000994s | 0.000997s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000995s | 0.000993s | 0.000979s | byte equality observed |
| swizzle3_test.test | 10 | 0.001010s | 0.000970s | 0.001005s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000992s | 0.000968s | 0.000996s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001029s | 0.001012s | 0.001020s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001040s | 0.000994s | 0.001016s | byte equality observed |
| swizzle4_test.test | 10 | 0.001022s | 0.001002s | 0.001014s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001025s | 0.001005s | 0.001013s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001008s | 0.001007s | 0.001004s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000998s | 0.000994s | 0.000989s | byte equality observed |
| to_string_test.test | 10 | 0.001031s | 0.001048s | 0.001055s | byte equality observed |
| transform_test.test | 10 | 0.001004s | 0.001045s | 0.001017s | byte equality observed |
| translation_mat_test.test | 10 | 0.000990s | 0.001024s | 0.001021s | byte equality observed |
| translation_test.test | 10 | 0.001005s | 0.001001s | 0.000980s | byte equality observed |
| transpose_test.test | 10 | 0.001004s | 0.000992s | 0.001031s | byte equality observed |
| vec_index_test.test | 10 | 0.001017s | 0.001044s | 0.000998s | byte equality observed |
| vec_register_test.test | 10 | 0.001029s | 0.001010s | 0.001005s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000998s | 0.000997s | 0.000991s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001018s | 0.001008s | 0.001007s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001011s | 0.001032s | 0.000981s | byte equality observed |
| zero_mat_test.test | 10 | 0.001010s | 0.001016s | 0.000988s | byte equality observed |
| zero_quat_test.test | 10 | 0.001014s | 0.001034s | 0.000994s | byte equality observed |
| zero_vec_test.test | 10 | 0.000999s | 0.001021s | 0.000958s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
