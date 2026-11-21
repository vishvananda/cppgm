# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.285705 | 0.832995 | 0.925228 | 0.001965 | 0.002148 | 0.002038 |
| mat_traits_array_test.test | RUN | 0.225388 | 0.846497 | 0.734803 | 0.001586 | 0.001372 | 0.001404 |
| mat_traits_std_array_test.test | RUN | 0.226422 | 0.646822 | 0.740299 | 0.001756 | 0.001598 | 0.001421 |
| vec_traits_array_test.test | RUN | 0.194259 | 0.633071 | 0.620486 | 0.001455 | 0.001536 | 0.001398 |
| vec_traits_gnuc_test.test | RUN | 0.366812 | 0.806290 | 1.249351 | 0.001537 | 0.001529 | 0.001646 |
| vec_traits_std_array_test.test | RUN | 0.195318 | 0.498049 | 0.602860 | 0.001742 | 0.001660 | 0.001446 |
| quat_traits_array_test.test | RUN | 0.191229 | 0.669390 | 0.612958 | 0.001470 | 0.001484 | 0.001441 |
| quat_traits_std_array_test.test | RUN | 0.190196 | 0.507618 | 0.607784 | 0.001462 | 0.001464 | 0.001553 |
| access_m_test.test | RUN | 0.305246 | 1.259130 | 1.425951 | 0.001528 | 0.001665 | 0.001496 |
| access_m_fail1.test | COMPILE_FAIL | 0.030963 | 0.053895 | 0.091339 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.030455 | 0.052583 | 0.092152 | — | — | — |
| access_q_test.test | RUN | 0.251422 | 0.621941 | 0.800002 | 0.001473 | 0.001631 | 0.001697 |
| access_q_fail.test | COMPILE_FAIL | 0.023383 | 0.040928 | 0.071412 | — | — | — |
| access_v_test.test | RUN | 0.256767 | 0.638230 | 0.821351 | 0.001366 | 0.001665 | 0.001589 |
| access_v_fail1.test | COMPILE_FAIL | 0.020720 | 0.036993 | 0.065745 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.021235 | 0.037279 | 0.063637 | — | — | — |
| assign_test.test | RUN | 0.389911 | 1.045221 | 1.464159 | 0.001480 | 0.001706 | 0.001589 |
| to_string_test.test | RUN | 0.466716 | 1.684615 | 8.568069 | 0.001527 | 0.001713 | 0.001664 |
| cmp_vv_test.test | RUN | 0.315281 | 0.826624 | 0.990654 | 0.001612 | 0.001663 | 0.001596 |
| cross_test.test | RUN | 0.305111 | 0.759096 | 0.990719 | 0.001600 | 0.001679 | 0.001548 |
| div_eq_vs_test.test | RUN | 0.290666 | 0.689362 | 0.966374 | 0.001128 | 0.001532 | 0.001644 |
| div_vs_test.test | RUN | 0.304543 | 0.851593 | 1.041761 | 0.001408 | 0.001661 | 0.001630 |
| dot_vv_test.test | RUN | 0.289466 | 0.757730 | 0.945793 | 0.001518 | 0.001575 | 0.001575 |
| eq_vv_test.test | RUN | 0.324824 | 0.864589 | 1.048171 | 0.001552 | 0.001631 | 0.001637 |
| mag_v_test.test | RUN | 0.288085 | 0.704384 | 0.918765 | 0.001491 | 0.001454 | 0.001515 |
| mag_sqr_v_test.test | RUN | 0.286670 | 0.708354 | 0.917770 | 0.001502 | 0.001615 | 0.001664 |
| minus_v_test.test | RUN | 0.297633 | 0.809606 | 0.992460 | 0.001432 | 0.001665 | 0.001497 |
| minus_eq_vv_test.test | RUN | 0.287237 | 0.792182 | 0.976060 | 0.001572 | 0.001696 | 0.001516 |
| minus_vv_test.test | RUN | 0.310993 | 0.854502 | 1.005801 | 0.001552 | 0.001568 | 0.001410 |
| mul_eq_vs_test.test | RUN | 0.289342 | 0.700999 | 0.963609 | 0.001530 | 0.001487 | 0.001426 |
| mul_vs_test.test | RUN | 0.302741 | 0.849500 | 1.040717 | 0.001341 | 0.001596 | 0.001560 |
| mul_sv_test.test | RUN | 0.315277 | 0.857412 | 1.017204 | 0.001569 | 0.001635 | 0.001542 |
| mul_vm_test.test | RUN | 0.427139 | 1.526735 | 1.615745 | 0.001546 | 0.001714 | 0.001552 |
| normalize_v_test.test | RUN | 0.311825 | 1.035585 | 0.977983 | 0.001566 | 0.001625 | 0.001454 |
| plus_eq_vv_test.test | RUN | 0.292397 | 0.809965 | 0.984096 | 0.001382 | 0.001516 | 0.001280 |
| plus_vv_test.test | RUN | 0.309031 | 0.869765 | 1.003156 | 0.001115 | 0.001666 | 0.001627 |
| scalar_cast_v_test.test | RUN | 0.281117 | 0.644543 | 0.885655 | 0.001411 | 0.001665 | 0.001597 |
| vec_index_test.test | RUN | 0.245051 | 0.651795 | 0.771563 | 0.001433 | 0.001513 | 0.001560 |
| vec_register_test.test | RUN | 0.166244 | 0.599049 | 0.575119 | 0.001589 | 0.001586 | 0.001604 |
| cmp_mm_test.test | RUN | 0.507851 | 1.905992 | 2.072511 | 0.001614 | 0.001578 | 0.001678 |
| determinant_test.test | RUN | 0.345989 | 0.965070 | 1.120777 | 0.001542 | 0.001633 | 0.001658 |
| div_eq_ms_test.test | RUN | 0.345724 | 0.903780 | 1.283380 | 0.001363 | 0.001414 | 0.001664 |
| div_ms_test.test | RUN | 0.411718 | 1.437137 | 1.566049 | 0.001516 | 0.001718 | 0.001498 |
| eq_mm_test.test | RUN | 0.479980 | 1.782858 | 2.010281 | 0.001625 | 0.001648 | 0.001592 |
| minus_m_test.test | RUN | 0.403338 | 1.405962 | 1.482696 | 0.001443 | 0.001610 | 0.001440 |
| minus_eq_mm_test.test | RUN | 0.382318 | 1.316262 | 1.414019 | 0.001471 | 0.001734 | 0.001556 |
| minus_mm_test.test | RUN | 0.431861 | 1.683695 | 1.662072 | 0.001596 | 0.001653 | 0.001630 |
| mul_eq_mm_test.test | RUN | 0.356007 | 1.239110 | 1.261048 | 0.001522 | 0.001545 | 0.001508 |
| mul_eq_ms_test.test | RUN | 0.351176 | 0.899026 | 1.284534 | 0.001654 | 0.001715 | 0.001615 |
| mul_mm_test.test | RUN | 0.499017 | 2.732074 | 2.077637 | 0.001462 | 0.001634 | 0.001664 |
| mul_ms_test.test | RUN | 0.416706 | 1.446697 | 1.615640 | 0.001435 | 0.001671 | 0.001584 |
| mul_sm_test.test | RUN | 0.419709 | 1.435183 | 1.610914 | 0.001546 | 0.001569 | 0.001600 |
| mul_mv_test.test | RUN | 0.419696 | 1.562434 | 1.631597 | 0.001537 | 0.001599 | 0.001604 |
| inverse_m_test.test | RUN | 0.573872 | 2.788437 | 2.243995 | 0.001699 | 0.001606 | 0.001818 |
| plus_eq_mm_test.test | RUN | 0.382944 | 1.315399 | 1.408898 | 0.001451 | 0.001622 | 0.001699 |
| plus_mm_test.test | RUN | 0.432283 | 1.679582 | 1.638726 | 0.001492 | 0.001674 | 0.001654 |
| scalar_cast_m_test.test | RUN | 0.319395 | 0.742747 | 1.040684 | 0.001402 | 0.001628 | 0.001609 |
| mat_index_test.test | RUN | 0.258330 | 0.709509 | 0.911502 | 0.001381 | 0.001612 | 0.001662 |
| cmp_qq_test.test | RUN | 0.281402 | 0.654859 | 0.882391 | 0.001555 | 0.001581 | 0.001682 |
| conjugate_test.test | RUN | 0.280565 | 0.681798 | 0.902989 | 0.001608 | 0.001744 | 0.001668 |
| normalize_q_test.test | RUN | 0.290713 | 0.753420 | 0.935564 | 0.001396 | 0.001667 | 0.001616 |
| div_eq_qs_test.test | RUN | 0.282121 | 0.643096 | 0.896713 | 0.001594 | 0.001542 | 0.001705 |
| div_qs_test.test | RUN | 0.288682 | 0.691451 | 0.909497 | 0.001606 | 0.001429 | 0.001686 |
| dot_qq_test.test | RUN | 0.281921 | 0.665089 | 0.911421 | 0.001718 | 0.001662 | 0.001574 |
| eq_qq_test.test | RUN | 0.287271 | 0.697574 | 0.916753 | 0.001349 | 0.001666 | 0.001697 |
| inverse_q_test.test | RUN | 0.344361 | 0.903827 | 1.150544 | 0.001584 | 0.001617 | 0.001634 |
| mag_q_test.test | RUN | 0.289447 | 0.675605 | 0.894110 | 0.001623 | 0.001486 | 0.001600 |
| mag_sqr_q_test.test | RUN | 0.280566 | 0.668946 | 0.883353 | 0.001687 | 0.001717 | 0.001677 |
| minus_q_test.test | RUN | 0.281570 | 0.685365 | 0.913750 | 0.001462 | 0.001631 | 0.001628 |
| minus_eq_qq_test.test | RUN | 0.280788 | 0.668918 | 0.884309 | 0.001534 | 0.001519 | 0.001703 |
| minus_qq_test.test | RUN | 0.283061 | 0.692152 | 0.910923 | 0.001626 | 0.001565 | 0.001580 |
| mul_eq_qs_test.test | RUN | 0.277262 | 0.637246 | 0.891989 | 0.001748 | 0.001609 | 0.001616 |
| mul_qs_test.test | RUN | 0.280532 | 0.679822 | 0.903591 | 0.001521 | 0.001591 | 0.001613 |
| mul_qv_test.test | RUN | 0.360288 | 0.940035 | 1.156158 | 0.001534 | 0.001584 | 0.001697 |
| mul_qq_test.test | RUN | 0.342301 | 0.934735 | 1.126852 | 0.001584 | 0.001653 | 0.001658 |
| mul_eq_qq_test.test | RUN | 0.337146 | 0.945645 | 1.124864 | 0.001574 | 0.001578 | 0.001544 |
| plus_eq_qq_test.test | RUN | 0.278284 | 0.678196 | 0.890307 | 0.001593 | 0.001735 | 0.001414 |
| plus_qq_test.test | RUN | 0.286477 | 0.691857 | 0.912082 | 0.001554 | 0.001604 | 0.001626 |
| scalar_cast_q_test.test | RUN | 0.278242 | 0.637842 | 0.881133 | 0.001561 | 0.001632 | 0.001591 |
| slerp_test.test | RUN | 0.307531 | 1.298879 | 1.066775 | 0.023577 | 0.020831 | 0.021554 |
| convert_to_test.test | RUN | 0.429468 | 1.216253 | 1.664205 | 0.001666 | 0.001574 | 0.001706 |
| rot_mat_test.test | RUN | 0.690464 | 5.596493 | 5.247501 | 0.048937 | 0.047350 | 0.053939 |
| rot_quat_test.test | RUN | 0.353920 | 1.100272 | 1.147061 | 0.001568 | 0.001614 | 0.001694 |
| rotx_mat_test.test | RUN | 0.392456 | 1.468994 | 1.542384 | 0.001476 | 0.001615 | 0.001660 |
| rotx_quat_test.test | RUN | 0.341818 | 0.945199 | 1.105821 | 0.001425 | 0.001687 | 0.001587 |
| roty_mat_test.test | RUN | 0.394727 | 1.474681 | 1.538144 | 0.001644 | 0.002862 | 0.001655 |
| roty_quat_test.test | RUN | 0.340729 | 0.960381 | 1.104656 | 0.001480 | 0.001695 | 0.001671 |
| rotz_mat_test.test | RUN | 0.419117 | 1.669078 | 1.539784 | 0.001512 | 0.001540 | 0.001554 |
| rotz_quat_test.test | RUN | 0.340976 | 0.952743 | 1.099213 | 0.001552 | 0.001646 | 0.001639 |
| zero_vec_test.test | RUN | 0.291794 | 0.816765 | 0.947970 | 0.001610 | 0.001652 | 0.001635 |
| zero_mat_test.test | RUN | 0.365999 | 1.355844 | 1.281193 | 0.001322 | 0.001464 | 0.001450 |
| zero_quat_test.test | RUN | 0.279461 | 0.667397 | 0.861639 | 0.001477 | 0.001660 | 0.001534 |
| identity_mat_test.test | RUN | 0.335872 | 1.003355 | 1.131508 | 0.001362 | 0.001564 | 0.001608 |
| identity_quat_test.test | RUN | 0.276959 | 0.657698 | 0.863000 | 0.001513 | 0.001661 | 0.001616 |
| col_test.test | RUN | 0.554950 | 2.107538 | 2.486289 | 0.001436 | 0.001684 | 0.001620 |
| col_mat_test.test | RUN | 0.353705 | 0.925576 | 1.182226 | 0.001631 | 0.001657 | 0.001632 |
| neg_col_test.test | RUN | 0.422044 | 1.336470 | 1.524144 | 0.001254 | 0.001686 | 0.001665 |
| neg_row_test.test | RUN | 0.422478 | 1.350300 | 1.535905 | 0.001575 | 0.001641 | 0.001601 |
| del_col_test.test | RUN | 0.434710 | 1.492943 | 1.585025 | 0.001555 | 0.001654 | 0.001650 |
| del_row_test.test | RUN | 0.438347 | 1.452825 | 1.561793 | 0.001647 | 0.001759 | 0.001529 |
| del_row_col_test.test | RUN | 0.613605 | 2.799386 | 3.022760 | 0.001625 | 0.001683 | 0.001545 |
| swap_cols_test.test | RUN | 0.822240 | 3.805132 | 3.668591 | 0.001747 | 0.001678 | 0.001603 |
| swap_rows_test.test | RUN | 0.912042 | 3.958949 | 3.651145 | 0.001596 | 0.001649 | 0.001590 |
| diag_test.test | RUN | 0.371121 | 0.985152 | 1.326106 | 0.001354 | 0.001601 | 0.001497 |
| diag_mat_test.test | RUN | 0.368328 | 0.978239 | 1.206190 | 0.001603 | 0.001734 | 0.001596 |
| row_test.test | RUN | 0.568335 | 2.082092 | 2.505569 | 0.001888 | 0.001656 | 0.001657 |
| row_mat_test.test | RUN | 0.362889 | 0.919194 | 1.169795 | 0.001546 | 0.001527 | 0.001656 |
| transpose_test.test | RUN | 0.428277 | 1.425411 | 1.596698 | 0.001625 | 0.001568 | 0.001432 |
| translation_test.test | RUN | 0.346297 | 0.900574 | 1.191227 | 0.001427 | 0.001461 | 0.001578 |
| translation_mat_test.test | RUN | 0.369211 | 0.902442 | 1.296766 | 0.001467 | 0.001514 | 0.001605 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.127918 | 0.261528 | 0.359764 | — | — | — |
| swizzle2_test2.test | RUN | 0.149887 | 0.382502 | 0.479395 | 0.001450 | 0.001630 | 0.001607 |
| swizzle2_test3.test | RUN | 0.153047 | 0.387234 | 0.470982 | 0.001515 | 0.001479 | 0.001651 |
| swizzle2_test4.test | RUN | 0.150895 | 0.375277 | 0.477540 | 0.001496 | 0.001676 | 0.001442 |
| swizzle2_test.test | RUN | 0.488185 | 1.087647 | 1.605656 | 0.001529 | 0.001544 | 0.001202 |
| swizzle3_test2.test | RUN | 0.169821 | 0.409711 | 0.537616 | 0.001631 | 0.001626 | 0.001465 |
| swizzle3_test3.test | RUN | 0.170775 | 0.409310 | 0.542740 | 0.001518 | 0.001554 | 0.001544 |
| swizzle3_test4.test | RUN | 0.171379 | 0.412900 | 0.538917 | 0.001408 | 0.001634 | 0.001423 |
| swizzle3_test.test | RUN | 0.485233 | 1.110169 | 1.636480 | 0.001562 | 0.001399 | 0.001663 |
| swizzle4_test2.test | RUN | 0.304818 | 0.598472 | 0.931333 | 0.001132 | 0.001577 | 0.001657 |
| swizzle4_test3.test | RUN | 0.292889 | 0.617767 | 0.952317 | 0.001412 | 0.001415 | 0.001691 |
| swizzle4_test4.test | RUN | 0.304747 | 0.613270 | 0.935326 | 0.001411 | 0.001306 | 0.001460 |
| swizzle4_test.test | RUN | 0.503929 | 1.225557 | 1.691305 | 0.001607 | 0.001662 | 0.001597 |
| deduce_scalar_test.test | COMPILE | 0.024795 | 0.056905 | 0.082990 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.184554 | 0.452612 | 0.567928 | 0.001628 | 0.001553 | 0.001632 |
| deduce_scalar_mv_test.test | RUN | 0.216329 | 0.522628 | 0.720011 | 0.001470 | 0.001646 | 0.001644 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.020527 | 0.035503 | 0.061805 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.021784 | 0.048572 | 0.065800 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.022126 | 0.048181 | 0.066717 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.020593 | 0.048172 | 0.067346 | — | — | — |
| interop_test.test | RUN | 0.235325 | 0.663276 | 1.020366 | 0.000618 | 0.000733 | 0.001664 |
| transform_test.test | RUN | 0.436725 | 0.912907 | 1.402453 | 0.001174 | 0.001046 | 0.001159 |
| projection_test.test | RUN | 0.290348 | 0.707784 | 0.820511 | 0.001185 | 0.001044 | 0.001138 |
| scalar_traits_test.test | COMPILE | 0.023354 | 0.049391 | 0.070996 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.005×, 0.993× | 1.001× |
| clang | 1.019× | 1.013×, 1.024× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000943s | 0.000952s | 0.000986s | byte equality observed |
| access_q_test.test | 10 | 0.000980s | 0.001002s | 0.000963s | byte equality observed |
| access_v_test.test | 10 | 0.001004s | 0.000986s | 0.000972s | byte equality observed |
| assign_test.test | 10 | 0.000959s | 0.000980s | 0.000947s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000987s | 0.000947s | 0.001004s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000969s | 0.000975s | 0.000968s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000956s | 0.000992s | 0.000973s | byte equality observed |
| col_mat_test.test | 10 | 0.000979s | 0.000963s | 0.000998s | byte equality observed |
| col_test.test | 10 | 0.000967s | 0.000974s | 0.000990s | byte equality observed |
| conjugate_test.test | 10 | 0.000999s | 0.001001s | 0.000983s | byte equality observed |
| convert_to_test.test | 10 | 0.000975s | 0.000977s | 0.000978s | byte equality observed |
| cross_test.test | 10 | 0.001002s | 0.001016s | 0.000990s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000990s | 0.000971s | 0.001001s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000989s | 0.000991s | 0.000956s | byte equality observed |
| del_col_test.test | 10 | 0.000999s | 0.000959s | 0.001005s | byte equality observed |
| del_row_col_test.test | 10 | 0.001022s | 0.001011s | 0.000977s | byte equality observed |
| del_row_test.test | 10 | 0.001004s | 0.000945s | 0.000973s | byte equality observed |
| determinant_test.test | 10 | 0.000970s | 0.000969s | 0.001017s | byte equality observed |
| diag_mat_test.test | 10 | 0.000965s | 0.000997s | 0.000944s | byte equality observed |
| diag_test.test | 10 | 0.000994s | 0.000952s | 0.000966s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000970s | 0.000955s | 0.000986s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001004s | 0.001018s | 0.000994s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000959s | 0.000951s | 0.001001s | byte equality observed |
| div_ms_test.test | 10 | 0.000956s | 0.000989s | 0.000947s | byte equality observed |
| div_qs_test.test | 10 | 0.000980s | 0.000958s | 0.000966s | byte equality observed |
| div_vs_test.test | 10 | 0.000987s | 0.001009s | 0.000979s | byte equality observed |
| dot_qq_test.test | 10 | 0.000983s | 0.000968s | 0.000937s | byte equality observed |
| dot_vv_test.test | 10 | 0.000938s | 0.000970s | 0.000963s | byte equality observed |
| eq_mm_test.test | 10 | 0.000984s | 0.000980s | 0.000990s | byte equality observed |
| eq_qq_test.test | 10 | 0.000948s | 0.001023s | 0.000940s | byte equality observed |
| eq_vv_test.test | 10 | 0.000958s | 0.000998s | 0.000995s | byte equality observed |
| identity_mat_test.test | 10 | 0.000984s | 0.000971s | 0.000960s | byte equality observed |
| identity_quat_test.test | 10 | 0.000970s | 0.000981s | 0.000931s | byte equality observed |
| interop_test.test | 10 | 0.000427s | 0.000428s | 0.000947s | byte equality observed |
| inverse_m_test.test | 10 | 0.001026s | 0.001029s | 0.000989s | byte equality observed |
| inverse_q_test.test | 10 | 0.000964s | 0.000970s | 0.000963s | byte equality observed |
| mag_q_test.test | 10 | 0.000950s | 0.000958s | 0.000953s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000992s | 0.001012s | 0.000959s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000990s | 0.000966s | 0.000971s | byte equality observed |
| mag_v_test.test | 10 | 0.000971s | 0.001000s | 0.000975s | byte equality observed |
| mat_index_test.test | 10 | 0.000980s | 0.000972s | 0.000957s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000965s | 0.000966s | 0.000968s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000966s | 0.000936s | 0.000960s | byte equality observed |
| math_test.test | 10 | 0.001473s | 0.001421s | 0.001304s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000950s | 0.000986s | 0.000987s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001005s | 0.000991s | 0.000953s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000966s | 0.000986s | 0.000969s | byte equality observed |
| minus_m_test.test | 10 | 0.000973s | 0.000969s | 0.000971s | byte equality observed |
| minus_mm_test.test | 10 | 0.001004s | 0.001013s | 0.000965s | byte equality observed |
| minus_q_test.test | 10 | 0.000969s | 0.000992s | 0.000976s | byte equality observed |
| minus_qq_test.test | 10 | 0.000970s | 0.000980s | 0.000998s | byte equality observed |
| minus_v_test.test | 10 | 0.000967s | 0.000975s | 0.000948s | byte equality observed |
| minus_vv_test.test | 10 | 0.000978s | 0.000966s | 0.000978s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000968s | 0.000969s | 0.000979s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000965s | 0.000961s | 0.000963s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001009s | 0.000977s | 0.001002s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000954s | 0.000993s | 0.000991s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000965s | 0.001008s | 0.000960s | byte equality observed |
| mul_mm_test.test | 10 | 0.000975s | 0.000928s | 0.000977s | byte equality observed |
| mul_ms_test.test | 10 | 0.000937s | 0.000954s | 0.000980s | byte equality observed |
| mul_mv_test.test | 10 | 0.000991s | 0.001002s | 0.001008s | byte equality observed |
| mul_qq_test.test | 10 | 0.001003s | 0.000961s | 0.000943s | byte equality observed |
| mul_qs_test.test | 10 | 0.000945s | 0.000953s | 0.000987s | byte equality observed |
| mul_qv_test.test | 10 | 0.000957s | 0.000959s | 0.000956s | byte equality observed |
| mul_sm_test.test | 10 | 0.000978s | 0.000959s | 0.000978s | byte equality observed |
| mul_sv_test.test | 10 | 0.000986s | 0.000931s | 0.000960s | byte equality observed |
| mul_vm_test.test | 10 | 0.000979s | 0.001035s | 0.000995s | byte equality observed |
| mul_vs_test.test | 10 | 0.000965s | 0.000973s | 0.000954s | byte equality observed |
| neg_col_test.test | 10 | 0.000977s | 0.000976s | 0.000962s | byte equality observed |
| neg_row_test.test | 10 | 0.000994s | 0.000975s | 0.000968s | byte equality observed |
| normalize_q_test.test | 10 | 0.000970s | 0.000958s | 0.000965s | byte equality observed |
| normalize_v_test.test | 10 | 0.000968s | 0.000990s | 0.000985s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000976s | 0.000966s | 0.000995s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000972s | 0.000962s | 0.001019s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000953s | 0.000989s | 0.000976s | byte equality observed |
| plus_mm_test.test | 10 | 0.000949s | 0.000962s | 0.000918s | byte equality observed |
| plus_qq_test.test | 10 | 0.000994s | 0.000979s | 0.000929s | byte equality observed |
| plus_vv_test.test | 10 | 0.000981s | 0.000996s | 0.000914s | byte equality observed |
| projection_test.test | 10 | 0.000967s | 0.000984s | 0.000923s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000985s | 0.000964s | 0.000941s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000938s | 0.000928s | 0.000904s | byte equality observed |
| rot_mat_test.test | 1 | 0.028185s | 0.032121s | 0.033663s | byte equality observed |
| rot_quat_test.test | 10 | 0.000906s | 0.000878s | 0.000908s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000932s | 0.000889s | 0.000941s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000985s | 0.000988s | 0.000951s | byte equality observed |
| roty_mat_test.test | 10 | 0.000977s | 0.000993s | 0.000985s | byte equality observed |
| roty_quat_test.test | 10 | 0.000980s | 0.000990s | 0.000992s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001003s | 0.001011s | 0.001041s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000996s | 0.000981s | 0.001007s | byte equality observed |
| row_mat_test.test | 10 | 0.000969s | 0.000963s | 0.000976s | byte equality observed |
| row_test.test | 10 | 0.000965s | 0.000987s | 0.000980s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000978s | 0.000953s | 0.000944s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000988s | 0.000980s | 0.000963s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000960s | 0.000967s | 0.000957s | byte equality observed |
| slerp_test.test | 2 | 0.017180s | 0.014773s | 0.014861s | byte equality observed |
| swap_cols_test.test | 10 | 0.000886s | 0.000897s | 0.000891s | byte equality observed |
| swap_rows_test.test | 10 | 0.000904s | 0.000904s | 0.000889s | byte equality observed |
| swizzle2_test.test | 10 | 0.000935s | 0.000935s | 0.000950s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000969s | 0.000962s | 0.000952s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000953s | 0.001000s | 0.001005s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000977s | 0.000957s | 0.000979s | byte equality observed |
| swizzle3_test.test | 10 | 0.000988s | 0.000957s | 0.000955s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000976s | 0.000966s | 0.000959s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000975s | 0.000963s | 0.001021s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000965s | 0.000961s | 0.000971s | byte equality observed |
| swizzle4_test.test | 10 | 0.000958s | 0.000959s | 0.000959s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001009s | 0.000975s | 0.000987s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000945s | 0.001004s | 0.000986s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000977s | 0.000971s | 0.000955s | byte equality observed |
| to_string_test.test | 10 | 0.001000s | 0.001024s | 0.001005s | byte equality observed |
| transform_test.test | 10 | 0.000955s | 0.000967s | 0.000991s | byte equality observed |
| translation_mat_test.test | 10 | 0.000969s | 0.000981s | 0.000967s | byte equality observed |
| translation_test.test | 10 | 0.000959s | 0.000987s | 0.000964s | byte equality observed |
| transpose_test.test | 10 | 0.000979s | 0.000978s | 0.000978s | byte equality observed |
| vec_index_test.test | 10 | 0.000989s | 0.000991s | 0.000962s | byte equality observed |
| vec_register_test.test | 10 | 0.000956s | 0.000982s | 0.000984s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000963s | 0.000992s | 0.000960s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000952s | 0.000946s | 0.000992s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000959s | 0.000945s | 0.000940s | byte equality observed |
| zero_mat_test.test | 10 | 0.000971s | 0.000946s | 0.001007s | byte equality observed |
| zero_quat_test.test | 10 | 0.000966s | 0.000989s | 0.000973s | byte equality observed |
| zero_vec_test.test | 10 | 0.000986s | 0.000994s | 0.000969s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
