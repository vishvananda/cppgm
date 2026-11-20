# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.275460 | 0.780190 | 0.805712 | 0.002151 | 0.002036 | 0.002132 |
| mat_traits_array_test.test | RUN | 0.221075 | 0.777962 | 0.646944 | 0.001583 | 0.001615 | 0.001517 |
| mat_traits_std_array_test.test | RUN | 0.215091 | 0.591921 | 0.653021 | 0.001818 | 0.001586 | 0.001614 |
| vec_traits_array_test.test | RUN | 0.186682 | 0.603676 | 0.542118 | 0.001582 | 0.001815 | 0.001385 |
| vec_traits_gnuc_test.test | RUN | 0.336692 | 0.725813 | 1.025758 | 0.001664 | 0.001646 | 0.001562 |
| vec_traits_std_array_test.test | RUN | 0.184713 | 0.464339 | 0.526518 | 0.001686 | 0.001574 | 0.001519 |
| quat_traits_array_test.test | RUN | 0.183809 | 0.635787 | 0.530680 | 0.001645 | 0.001630 | 0.001383 |
| quat_traits_std_array_test.test | RUN | 0.180521 | 0.473966 | 0.525267 | 0.001534 | 0.001686 | 0.001613 |
| access_m_test.test | RUN | 0.291325 | 1.130153 | 1.220433 | 0.001468 | 0.001680 | 0.001420 |
| access_m_fail1.test | COMPILE_FAIL | 0.028561 | 0.048345 | 0.073620 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.027749 | 0.049499 | 0.078571 | — | — | — |
| access_q_test.test | RUN | 0.240452 | 0.571570 | 0.724153 | 0.001571 | 0.001730 | 0.001768 |
| access_q_fail.test | COMPILE_FAIL | 0.022326 | 0.038174 | 0.063324 | — | — | — |
| access_v_test.test | RUN | 0.239701 | 0.601502 | 0.717743 | 0.001462 | 0.001594 | 0.001573 |
| access_v_fail1.test | COMPILE_FAIL | 0.019542 | 0.036375 | 0.057184 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.019961 | 0.036184 | 0.058947 | — | — | — |
| assign_test.test | RUN | 0.369215 | 0.956357 | 1.269768 | 0.001685 | 0.001716 | 0.001694 |
| to_string_test.test | RUN | 0.439790 | 1.594983 | 7.809757 | 0.001567 | 0.001735 | 0.001617 |
| cmp_vv_test.test | RUN | 0.297826 | 0.763488 | 0.858553 | 0.001609 | 0.001740 | 0.001608 |
| cross_test.test | RUN | 0.286049 | 0.705668 | 0.853121 | 0.001398 | 0.001610 | 0.001453 |
| div_eq_vs_test.test | RUN | 0.276459 | 0.649369 | 0.841173 | 0.001631 | 0.001596 | 0.001586 |
| div_vs_test.test | RUN | 0.292429 | 0.810864 | 0.887681 | 0.001494 | 0.001526 | 0.001518 |
| dot_vv_test.test | RUN | 0.279749 | 0.732838 | 0.832570 | 0.001547 | 0.001598 | 0.001593 |
| eq_vv_test.test | RUN | 0.311367 | 0.812747 | 0.904369 | 0.001558 | 0.001863 | 0.001662 |
| mag_v_test.test | RUN | 0.277192 | 0.675593 | 0.803154 | 0.001620 | 0.001566 | 0.001743 |
| mag_sqr_v_test.test | RUN | 0.279125 | 0.657504 | 0.810488 | 0.001664 | 0.001650 | 0.001444 |
| minus_v_test.test | RUN | 0.280769 | 0.779217 | 0.854465 | 0.001639 | 0.001663 | 0.001791 |
| minus_eq_vv_test.test | RUN | 0.280506 | 0.746517 | 0.864431 | 0.001539 | 0.001666 | 0.001716 |
| minus_vv_test.test | RUN | 0.295757 | 0.817593 | 0.907272 | 0.001836 | 0.001585 | 0.001644 |
| mul_eq_vs_test.test | RUN | 0.277913 | 0.650178 | 0.819285 | 0.001654 | 0.001717 | 0.001752 |
| mul_vs_test.test | RUN | 0.296249 | 0.808380 | 0.915125 | 0.001471 | 0.001797 | 0.001741 |
| mul_sv_test.test | RUN | 0.297752 | 0.809470 | 0.924179 | 0.001610 | 0.001671 | 0.001685 |
| mul_vm_test.test | RUN | 0.413149 | 1.456552 | 1.358825 | 0.001490 | 0.001736 | 0.001667 |
| normalize_v_test.test | RUN | 0.302936 | 0.991605 | 0.936289 | 0.001617 | 0.001604 | 0.001560 |
| plus_eq_vv_test.test | RUN | 0.287270 | 0.751766 | 0.863269 | 0.001497 | 0.001727 | 0.001315 |
| plus_vv_test.test | RUN | 0.300183 | 0.814351 | 0.909461 | 0.001438 | 0.001774 | 0.001549 |
| scalar_cast_v_test.test | RUN | 0.267655 | 0.606480 | 0.781652 | 0.001473 | 0.001544 | 0.001491 |
| vec_index_test.test | RUN | 0.237217 | 0.627616 | 0.678148 | 0.001474 | 0.001586 | 0.001481 |
| vec_register_test.test | RUN | 0.157506 | 0.552115 | 0.520037 | 0.001724 | 0.001773 | 0.001960 |
| cmp_mm_test.test | RUN | 0.475678 | 1.792326 | 1.867878 | 0.001729 | 0.001750 | 0.001706 |
| determinant_test.test | RUN | 0.325837 | 0.908437 | 0.995262 | 0.001747 | 0.001812 | 0.001676 |
| div_eq_ms_test.test | RUN | 0.330584 | 0.843968 | 1.126167 | 0.001634 | 0.001604 | 0.001658 |
| div_ms_test.test | RUN | 0.396547 | 1.347097 | 1.363040 | 0.001517 | 0.001482 | 0.001663 |
| eq_mm_test.test | RUN | 0.447316 | 1.644901 | 1.764193 | 0.001714 | 0.001711 | 0.001657 |
| minus_m_test.test | RUN | 0.387243 | 1.328723 | 1.332874 | 0.001632 | 0.001717 | 0.001611 |
| minus_eq_mm_test.test | RUN | 0.369965 | 1.233234 | 1.252197 | 0.001508 | 0.001693 | 0.001704 |
| minus_mm_test.test | RUN | 0.409943 | 1.570801 | 1.475400 | 0.001666 | 0.001719 | 0.001660 |
| mul_eq_mm_test.test | RUN | 0.341182 | 1.155679 | 1.109871 | 0.001634 | 0.001719 | 0.001652 |
| mul_eq_ms_test.test | RUN | 0.339239 | 0.839359 | 1.140395 | 0.001627 | 0.001757 | 0.001677 |
| mul_mm_test.test | RUN | 0.493986 | 2.566894 | 1.837865 | 0.001636 | 0.001800 | 0.001416 |
| mul_ms_test.test | RUN | 0.404241 | 1.360356 | 1.416051 | 0.001729 | 0.001672 | 0.001790 |
| mul_sm_test.test | RUN | 0.403494 | 1.350425 | 1.411086 | 0.001709 | 0.001579 | 0.001566 |
| mul_mv_test.test | RUN | 0.408078 | 1.437331 | 1.425626 | 0.001532 | 0.001738 | 0.001598 |
| inverse_m_test.test | RUN | 0.560602 | 2.645317 | 2.032082 | 0.001614 | 0.001883 | 0.001772 |
| plus_eq_mm_test.test | RUN | 0.368503 | 1.234121 | 1.257801 | 0.001652 | 0.001695 | 0.001701 |
| plus_mm_test.test | RUN | 0.416913 | 1.577903 | 1.454601 | 0.001832 | 0.001604 | 0.001934 |
| scalar_cast_m_test.test | RUN | 0.307328 | 0.688075 | 0.908979 | 0.001469 | 0.001536 | 0.001670 |
| mat_index_test.test | RUN | 0.248795 | 0.674604 | 0.782878 | 0.001732 | 0.001708 | 0.001899 |
| cmp_qq_test.test | RUN | 0.269070 | 0.599275 | 0.775523 | 0.001719 | 0.001570 | 0.001642 |
| conjugate_test.test | RUN | 0.269156 | 0.629133 | 0.798479 | 0.001791 | 0.001772 | 0.001589 |
| normalize_q_test.test | RUN | 0.276657 | 0.707985 | 0.837452 | 0.001538 | 0.001524 | 0.001635 |
| div_eq_qs_test.test | RUN | 0.268381 | 0.600655 | 0.764840 | 0.001596 | 0.001691 | 0.001690 |
| div_qs_test.test | RUN | 0.273718 | 0.624035 | 0.776522 | 0.001467 | 0.001790 | 0.001628 |
| dot_qq_test.test | RUN | 0.265430 | 0.619261 | 0.787508 | 0.001727 | 0.001755 | 0.001623 |
| eq_qq_test.test | RUN | 0.280498 | 0.661172 | 0.785786 | 0.001552 | 0.001600 | 0.001596 |
| inverse_q_test.test | RUN | 0.330747 | 0.857687 | 0.981680 | 0.001706 | 0.001668 | 0.001803 |
| mag_q_test.test | RUN | 0.274533 | 0.624458 | 0.773824 | 0.001575 | 0.001692 | 0.001545 |
| mag_sqr_q_test.test | RUN | 0.275551 | 0.621975 | 0.762325 | 0.001767 | 0.001777 | 0.001709 |
| minus_q_test.test | RUN | 0.269804 | 0.632718 | 0.770460 | 0.001586 | 0.001581 | 0.001614 |
| minus_eq_qq_test.test | RUN | 0.266046 | 0.622357 | 0.768262 | 0.001689 | 0.001592 | 0.001672 |
| minus_qq_test.test | RUN | 0.277705 | 0.649954 | 0.771500 | 0.001606 | 0.001572 | 0.001584 |
| mul_eq_qs_test.test | RUN | 0.264620 | 0.597248 | 0.754917 | 0.002046 | 0.001724 | 0.001676 |
| mul_qs_test.test | RUN | 0.265129 | 0.633819 | 0.768598 | 0.001660 | 0.001716 | 0.001537 |
| mul_qv_test.test | RUN | 0.329791 | 0.865507 | 0.998492 | 0.001765 | 0.001765 | 0.001708 |
| mul_qq_test.test | RUN | 0.327728 | 0.885300 | 0.982781 | 0.001626 | 0.001765 | 0.001536 |
| mul_eq_qq_test.test | RUN | 0.321834 | 0.882122 | 0.971613 | 0.001700 | 0.001786 | 0.001618 |
| plus_eq_qq_test.test | RUN | 0.265418 | 0.646465 | 0.757570 | 0.001626 | 0.001673 | 0.001573 |
| plus_qq_test.test | RUN | 0.272212 | 0.649792 | 0.776367 | 0.001694 | 0.001708 | 0.001657 |
| scalar_cast_q_test.test | RUN | 0.266627 | 0.610903 | 0.761033 | 0.001578 | 0.001730 | 0.001572 |
| slerp_test.test | RUN | 0.299288 | 1.226423 | 0.933917 | 0.020898 | 0.017524 | 0.018896 |
| convert_to_test.test | RUN | 0.419609 | 1.151667 | 1.473915 | 0.001634 | 0.001491 | 0.001686 |
| rot_mat_test.test | RUN | 0.642412 | 5.297561 | 4.692801 | 0.043809 | 0.045155 | 0.046384 |
| rot_quat_test.test | RUN | 0.340758 | 1.047229 | 1.020067 | 0.001852 | 0.001813 | 0.001760 |
| rotx_mat_test.test | RUN | 0.378043 | 1.363726 | 1.341911 | 0.001782 | 0.001655 | 0.001646 |
| rotx_quat_test.test | RUN | 0.330684 | 0.882350 | 0.962230 | 0.001504 | 0.001837 | 0.001664 |
| roty_mat_test.test | RUN | 0.381868 | 1.394217 | 1.359963 | 0.001752 | 0.001712 | 0.001741 |
| roty_quat_test.test | RUN | 0.324064 | 0.874259 | 0.904875 | 0.001672 | 0.001742 | 0.001568 |
| rotz_mat_test.test | RUN | 0.408854 | 1.545406 | 1.439528 | 0.001515 | 0.001710 | 0.001568 |
| rotz_quat_test.test | RUN | 0.321912 | 0.883573 | 0.961554 | 0.001780 | 0.001559 | 0.001541 |
| zero_vec_test.test | RUN | 0.275217 | 0.765510 | 0.801009 | 0.001653 | 0.001525 | 0.001588 |
| zero_mat_test.test | RUN | 0.345472 | 1.249138 | 1.176147 | 0.001476 | 0.001668 | 0.001662 |
| zero_quat_test.test | RUN | 0.271155 | 0.636519 | 0.730419 | 0.001442 | 0.001620 | 0.001654 |
| identity_mat_test.test | RUN | 0.331433 | 0.911673 | 1.007234 | 0.001674 | 0.001471 | 0.001631 |
| identity_quat_test.test | RUN | 0.268727 | 0.615670 | 0.763486 | 0.001723 | 0.001776 | 0.001613 |
| col_test.test | RUN | 0.527575 | 1.979363 | 2.225165 | 0.001628 | 0.001752 | 0.001362 |
| col_mat_test.test | RUN | 0.339397 | 0.871663 | 1.045145 | 0.001475 | 0.001780 | 0.001670 |
| neg_col_test.test | RUN | 0.397868 | 1.239627 | 1.344660 | 0.001493 | 0.001691 | 0.001652 |
| neg_row_test.test | RUN | 0.404595 | 1.261585 | 1.349523 | 0.001773 | 0.001757 | 0.001644 |
| del_col_test.test | RUN | 0.430233 | 1.373791 | 1.385069 | 0.001612 | 0.001824 | 0.001674 |
| del_row_test.test | RUN | 0.421309 | 1.373364 | 1.381591 | 0.001696 | 0.001804 | 0.001695 |
| del_row_col_test.test | RUN | 0.576103 | 2.612917 | 2.567310 | 0.001665 | 0.001739 | 0.001706 |
| swap_cols_test.test | RUN | 0.793225 | 3.457896 | 3.199528 | 0.001568 | 0.001829 | 0.001726 |
| swap_rows_test.test | RUN | 0.868258 | 3.645976 | 3.200450 | 0.001803 | 0.001556 | 0.001674 |
| diag_test.test | RUN | 0.356074 | 0.925026 | 1.215513 | 0.001598 | 0.001705 | 0.001633 |
| diag_mat_test.test | RUN | 0.355564 | 0.901776 | 1.065929 | 0.001674 | 0.001739 | 0.001711 |
| row_test.test | RUN | 0.538124 | 1.936525 | 2.198589 | 0.001601 | 0.001680 | 0.001729 |
| row_mat_test.test | RUN | 0.334377 | 0.849726 | 1.037821 | 0.001640 | 0.001539 | 0.001738 |
| transpose_test.test | RUN | 0.411486 | 1.333065 | 1.399145 | 0.001582 | 0.001688 | 0.001388 |
| translation_test.test | RUN | 0.332880 | 0.832848 | 1.053301 | 0.001708 | 0.001625 | 0.001776 |
| translation_mat_test.test | RUN | 0.364516 | 0.853630 | 1.122448 | 0.001578 | 0.001565 | 0.001618 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.120824 | 0.237235 | 0.315109 | — | — | — |
| swizzle2_test2.test | RUN | 0.149202 | 0.360017 | 0.431394 | 0.001482 | 0.001663 | 0.001693 |
| swizzle2_test3.test | RUN | 0.144465 | 0.360372 | 0.430536 | 0.001541 | 0.001668 | 0.001508 |
| swizzle2_test4.test | RUN | 0.143078 | 0.357023 | 0.411487 | 0.001519 | 0.001669 | 0.001441 |
| swizzle2_test.test | RUN | 0.466327 | 0.990310 | 1.333112 | 0.001752 | 0.001471 | 0.001726 |
| swizzle3_test2.test | RUN | 0.162685 | 0.383965 | 0.472048 | 0.001585 | 0.001692 | 0.001625 |
| swizzle3_test3.test | RUN | 0.161002 | 0.384838 | 0.470980 | 0.001547 | 0.001657 | 0.001402 |
| swizzle3_test4.test | RUN | 0.163678 | 0.391369 | 0.470912 | 0.001472 | 0.001518 | 0.001456 |
| swizzle3_test.test | RUN | 0.443618 | 1.011382 | 1.351244 | 0.001506 | 0.001573 | 0.001617 |
| swizzle4_test2.test | RUN | 0.270564 | 0.567597 | 0.768220 | 0.001636 | 0.001639 | 0.001532 |
| swizzle4_test3.test | RUN | 0.271068 | 0.558681 | 0.753570 | 0.001453 | 0.001557 | 0.001646 |
| swizzle4_test4.test | RUN | 0.281263 | 0.558071 | 0.740618 | 0.001421 | 0.001630 | 0.001664 |
| swizzle4_test.test | RUN | 0.466724 | 1.111501 | 1.396959 | 0.001563 | 0.001786 | 0.001630 |
| deduce_scalar_test.test | COMPILE | 0.023541 | 0.052652 | 0.072694 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.176240 | 0.431464 | 0.494398 | 0.001575 | 0.001504 | 0.001521 |
| deduce_scalar_mv_test.test | RUN | 0.213233 | 0.474294 | 0.619210 | 0.001472 | 0.001584 | 0.001582 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.019514 | 0.033262 | 0.053278 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.020784 | 0.047746 | 0.062950 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.020258 | 0.045749 | 0.060663 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.021200 | 0.045575 | 0.061629 | — | — | — |
| interop_test.test | RUN | 0.218337 | 0.623708 | 0.869605 | 0.000559 | 0.000530 | 0.001624 |
| transform_test.test | RUN | 0.405138 | 0.895645 | 1.194106 | 0.001301 | 0.001219 | 0.001172 |
| projection_test.test | RUN | 0.282244 | 0.700626 | 0.691256 | 0.001239 | 0.001165 | 0.001233 |
| scalar_traits_test.test | COMPILE | 0.021948 | 0.048364 | 0.067021 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 0.998×, 1.013× | 0.992× |
| clang | 1.112× | 1.090×, 1.134× | 1.038× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001053s | 0.001045s | 0.001066s | byte equality observed |
| access_q_test.test | 10 | 0.001052s | 0.001127s | 0.001058s | byte equality observed |
| access_v_test.test | 10 | 0.001053s | 0.001069s | 0.001106s | byte equality observed |
| assign_test.test | 10 | 0.001082s | 0.001074s | 0.001043s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001066s | 0.001058s | 0.001066s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001065s | 0.001050s | 0.001083s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001049s | 0.001053s | 0.001043s | byte equality observed |
| col_mat_test.test | 10 | 0.001054s | 0.001030s | 0.001065s | byte equality observed |
| col_test.test | 10 | 0.001048s | 0.001074s | 0.001068s | byte equality observed |
| conjugate_test.test | 10 | 0.001077s | 0.001045s | 0.001086s | byte equality observed |
| convert_to_test.test | 10 | 0.001066s | 0.001029s | 0.001035s | byte equality observed |
| cross_test.test | 10 | 0.001068s | 0.001047s | 0.001060s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001051s | 0.001055s | 0.001050s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001104s | 0.001022s | 0.001041s | byte equality observed |
| del_col_test.test | 10 | 0.001096s | 0.001025s | 0.001064s | byte equality observed |
| del_row_col_test.test | 10 | 0.001058s | 0.001021s | 0.001084s | byte equality observed |
| del_row_test.test | 10 | 0.001052s | 0.001061s | 0.001061s | byte equality observed |
| determinant_test.test | 10 | 0.001082s | 0.001061s | 0.001089s | byte equality observed |
| diag_mat_test.test | 10 | 0.001042s | 0.001058s | 0.001083s | byte equality observed |
| diag_test.test | 10 | 0.001049s | 0.001061s | 0.001065s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001046s | 0.001044s | 0.001086s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001091s | 0.001037s | 0.001049s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001065s | 0.001056s | 0.001065s | byte equality observed |
| div_ms_test.test | 10 | 0.001087s | 0.001065s | 0.001067s | byte equality observed |
| div_qs_test.test | 10 | 0.001071s | 0.001037s | 0.001084s | byte equality observed |
| div_vs_test.test | 10 | 0.001056s | 0.001026s | 0.001045s | byte equality observed |
| dot_qq_test.test | 10 | 0.001046s | 0.001029s | 0.001069s | byte equality observed |
| dot_vv_test.test | 10 | 0.001094s | 0.001072s | 0.001063s | byte equality observed |
| eq_mm_test.test | 10 | 0.001098s | 0.001068s | 0.001102s | byte equality observed |
| eq_qq_test.test | 10 | 0.001068s | 0.001096s | 0.001027s | byte equality observed |
| eq_vv_test.test | 10 | 0.001041s | 0.001049s | 0.001041s | byte equality observed |
| identity_mat_test.test | 10 | 0.001095s | 0.001036s | 0.001048s | byte equality observed |
| identity_quat_test.test | 10 | 0.001059s | 0.001044s | 0.001034s | byte equality observed |
| interop_test.test | 10 | 0.000469s | 0.000460s | 0.001031s | byte equality observed |
| inverse_m_test.test | 10 | 0.001128s | 0.001098s | 0.001152s | byte equality observed |
| inverse_q_test.test | 10 | 0.001047s | 0.001067s | 0.001103s | byte equality observed |
| mag_q_test.test | 10 | 0.001073s | 0.001074s | 0.001059s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001047s | 0.001076s | 0.001038s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001050s | 0.001068s | 0.001048s | byte equality observed |
| mag_v_test.test | 10 | 0.001076s | 0.001046s | 0.001038s | byte equality observed |
| mat_index_test.test | 10 | 0.001043s | 0.001064s | 0.001022s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001077s | 0.001045s | 0.001066s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001038s | 0.001019s | 0.001062s | byte equality observed |
| math_test.test | 10 | 0.001600s | 0.001517s | 0.001372s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001043s | 0.001032s | 0.001073s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001043s | 0.001063s | 0.001059s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001045s | 0.001056s | 0.001052s | byte equality observed |
| minus_m_test.test | 10 | 0.001066s | 0.001056s | 0.001143s | byte equality observed |
| minus_mm_test.test | 10 | 0.001047s | 0.001084s | 0.001075s | byte equality observed |
| minus_q_test.test | 10 | 0.001069s | 0.001038s | 0.001126s | byte equality observed |
| minus_qq_test.test | 10 | 0.001079s | 0.001045s | 0.001071s | byte equality observed |
| minus_v_test.test | 10 | 0.001025s | 0.001042s | 0.001076s | byte equality observed |
| minus_vv_test.test | 10 | 0.001071s | 0.001032s | 0.001059s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001057s | 0.001053s | 0.001043s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001087s | 0.001032s | 0.001093s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001080s | 0.001019s | 0.001087s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001070s | 0.001034s | 0.001025s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001060s | 0.001030s | 0.001083s | byte equality observed |
| mul_mm_test.test | 10 | 0.001061s | 0.001051s | 0.001077s | byte equality observed |
| mul_ms_test.test | 10 | 0.001052s | 0.001051s | 0.001096s | byte equality observed |
| mul_mv_test.test | 10 | 0.001077s | 0.001053s | 0.001062s | byte equality observed |
| mul_qq_test.test | 10 | 0.001090s | 0.001039s | 0.001059s | byte equality observed |
| mul_qs_test.test | 10 | 0.001049s | 0.001055s | 0.001058s | byte equality observed |
| mul_qv_test.test | 10 | 0.001061s | 0.001039s | 0.001060s | byte equality observed |
| mul_sm_test.test | 10 | 0.001072s | 0.001073s | 0.001056s | byte equality observed |
| mul_sv_test.test | 10 | 0.001053s | 0.001051s | 0.001037s | byte equality observed |
| mul_vm_test.test | 10 | 0.001047s | 0.001058s | 0.001040s | byte equality observed |
| mul_vs_test.test | 10 | 0.001048s | 0.001042s | 0.001047s | byte equality observed |
| neg_col_test.test | 10 | 0.001065s | 0.001066s | 0.001061s | byte equality observed |
| neg_row_test.test | 10 | 0.001061s | 0.001056s | 0.001068s | byte equality observed |
| normalize_q_test.test | 10 | 0.001032s | 0.001059s | 0.001042s | byte equality observed |
| normalize_v_test.test | 10 | 0.001067s | 0.001058s | 0.001031s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001074s | 0.001058s | 0.001044s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001064s | 0.001043s | 0.001051s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001055s | 0.001023s | 0.001067s | byte equality observed |
| plus_mm_test.test | 10 | 0.001065s | 0.001060s | 0.001087s | byte equality observed |
| plus_qq_test.test | 10 | 0.001049s | 0.001025s | 0.001071s | byte equality observed |
| plus_vv_test.test | 10 | 0.001045s | 0.001055s | 0.001055s | byte equality observed |
| projection_test.test | 10 | 0.001071s | 0.001026s | 0.001079s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001079s | 0.001032s | 0.001093s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001029s | 0.001049s | 0.001014s | byte equality observed |
| rot_mat_test.test | 1 | 0.027504s | 0.029304s | 0.036625s | byte equality observed |
| rot_quat_test.test | 10 | 0.000981s | 0.000988s | 0.001085s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001044s | 0.001029s | 0.001195s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001052s | 0.001075s | 0.001186s | byte equality observed |
| roty_mat_test.test | 10 | 0.001086s | 0.001077s | 0.001218s | byte equality observed |
| roty_quat_test.test | 10 | 0.001062s | 0.001079s | 0.001205s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001081s | 0.001062s | 0.001236s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001084s | 0.001054s | 0.001218s | byte equality observed |
| row_mat_test.test | 10 | 0.001042s | 0.001080s | 0.001214s | byte equality observed |
| row_test.test | 10 | 0.001064s | 0.001067s | 0.001229s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001046s | 0.001120s | 0.001215s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001053s | 0.001051s | 0.001223s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001027s | 0.001033s | 0.001219s | byte equality observed |
| slerp_test.test | 2 | 0.014944s | 0.013092s | 0.017405s | byte equality observed |
| swap_cols_test.test | 10 | 0.000997s | 0.000946s | 0.001213s | byte equality observed |
| swap_rows_test.test | 10 | 0.001035s | 0.001051s | 0.001237s | byte equality observed |
| swizzle2_test.test | 10 | 0.001052s | 0.001036s | 0.001199s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001059s | 0.001115s | 0.001219s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001036s | 0.001071s | 0.001212s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001079s | 0.001084s | 0.001210s | byte equality observed |
| swizzle3_test.test | 10 | 0.001059s | 0.001083s | 0.001200s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001089s | 0.001099s | 0.001228s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001042s | 0.001069s | 0.001221s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001062s | 0.001029s | 0.001213s | byte equality observed |
| swizzle4_test.test | 10 | 0.001090s | 0.001055s | 0.001229s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001033s | 0.001044s | 0.001215s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001027s | 0.001049s | 0.001196s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001042s | 0.001034s | 0.001216s | byte equality observed |
| to_string_test.test | 10 | 0.001081s | 0.001130s | 0.001294s | byte equality observed |
| transform_test.test | 10 | 0.001073s | 0.001104s | 0.001240s | byte equality observed |
| translation_mat_test.test | 10 | 0.001037s | 0.001034s | 0.001220s | byte equality observed |
| translation_test.test | 10 | 0.001067s | 0.001040s | 0.001215s | byte equality observed |
| transpose_test.test | 10 | 0.001094s | 0.001094s | 0.001230s | byte equality observed |
| vec_index_test.test | 10 | 0.001087s | 0.001090s | 0.001206s | byte equality observed |
| vec_register_test.test | 9 | 0.001071s | 0.001054s | 0.001228s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001035s | 0.001049s | 0.001221s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001079s | 0.001050s | 0.001205s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001088s | 0.001054s | 0.001204s | byte equality observed |
| zero_mat_test.test | 10 | 0.001081s | 0.001099s | 0.001231s | byte equality observed |
| zero_quat_test.test | 10 | 0.001103s | 0.001090s | 0.001204s | byte equality observed |
| zero_vec_test.test | 10 | 0.001127s | 0.001121s | 0.001230s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
