# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.115944 | 0.323722 | 0.509557 | 0.001605 | 0.001686 | 0.001700 |
| type_traits_test.test | RUN | 0.164986 | 0.340614 | 0.486876 | 0.000593 | 0.000576 | 0.001769 |
| type_identity_test.test | RUN | 0.315224 | 1.173111 | 2.918280 | 0.001528 | 0.001773 | 0.001648 |
| tricky_rvalue_test.test | RUN | 0.109509 | 0.255140 | 0.392085 | 0.001681 | 0.001840 | 0.001504 |
| tricky_partial_spec_test.test | RUN | 0.133870 | 0.378500 | 0.627206 | 0.001545 | 0.001558 | 0.001713 |
| tricky_is_enum_test.test | RUN | 0.106561 | 0.237512 | 0.359718 | 0.001540 | 0.001598 | 0.001511 |
| tricky_incomplete_type_test.test | RUN | 0.167395 | 0.371716 | 0.617876 | 0.001615 | 0.001512 | 0.001451 |
| tricky_function_type_test.test | RUN | 0.138373 | 0.387526 | 0.703540 | 0.001500 | 0.001578 | 0.001598 |
| tricky_add_pointer_test.test | RUN | 0.209889 | 0.710053 | 1.645005 | 0.001561 | 0.001806 | 0.001676 |
| tricky_abstract_type_test.test | RUN | 0.108448 | 0.255773 | 0.375969 | 0.001581 | 0.001549 | 0.001828 |
| remove_volatile_test.test | RUN | 0.283703 | 1.017410 | 2.589425 | 0.001697 | 0.001818 | 0.001676 |
| remove_reference_test.test | RUN | 0.293744 | 1.032109 | 2.779981 | 0.001716 | 0.001650 | 0.001695 |
| remove_pointer_test.test | RUN | 0.303749 | 1.067733 | 2.852861 | 0.001748 | 0.001481 | 0.001776 |
| remove_extent_test.test | RUN | 0.297723 | 1.072178 | 2.719100 | 0.001604 | 0.001788 | 0.001554 |
| remove_cv_test.test | RUN | 0.295816 | 1.041098 | 2.734030 | 0.001648 | 0.001615 | 0.001712 |
| remove_cv_ref_test.test | RUN | 0.614854 | 2.542837 | 6.608878 | 0.001671 | 0.001457 | 0.001590 |
| remove_const_test.test | RUN | 0.285583 | 0.972155 | 2.573217 | 0.001752 | 0.001848 | 0.001678 |
| remove_bounds_test.test | RUN | 0.297574 | 1.080350 | 2.733258 | 0.001570 | 0.001691 | 0.001668 |
| remove_all_extents_test.test | RUN | 0.296578 | 1.051235 | 2.598535 | 0.001535 | 0.001582 | 0.001692 |
| rank_test.test | RUN | 0.111689 | 0.264984 | 0.377099 | 0.001464 | 0.001834 | 0.001516 |
| promote_mpl_test.test | RUN | 0.094582 | 0.230210 | 0.282087 | 0.000560 | 0.000797 | 0.001593 |
| promote_enum_test.test | RUN | 0.023144 | 0.060900 | 0.071188 | 0.000687 | 0.000610 | 0.001556 |
| promote_enum_msvc_bug_test.test | RUN | 0.020767 | 0.048320 | 0.060001 | 0.000610 | 0.000768 | 0.001520 |
| promote_basic_test.test | RUN | 0.024670 | 0.064624 | 0.074157 | 0.000646 | 0.000680 | 0.001643 |
| negation_test.test | RUN | 0.101689 | 0.231231 | 0.367985 | 0.001603 | 0.001584 | 0.001560 |
| mpl_interop_test3.test | RUN | 0.088516 | 0.217637 | 0.255779 | 0.000542 | 0.000599 | 0.001580 |
| mpl_interop_test2.test | RUN | 0.032296 | 0.062462 | 0.061244 | 0.000634 | 0.000605 | 0.001529 |
| mpl_interop_test1.test | RUN | 0.018383 | 0.045985 | 0.052835 | 0.000596 | 0.000719 | 0.001658 |
| make_void_test.test | RUN | 0.108500 | 0.260163 | 0.401504 | 0.001678 | 0.001736 | 0.001678 |
| make_unsigned_test.test | RUN | 0.126929 | 0.338541 | 0.533360 | 0.001622 | 0.001599 | 0.001670 |
| make_signed_test.test | RUN | 0.128379 | 0.336810 | 0.585333 | 0.001461 | 0.001505 | 0.001684 |
| is_volatile_test.test | RUN | 0.113269 | 0.292809 | 0.446361 | 0.001431 | 0.001545 | 0.001756 |
| is_void_test.test | RUN | 0.110312 | 0.273401 | 0.402717 | 0.001709 | 0.001438 | 0.001662 |
| is_virtual_base_of_test.test | RUN | 0.127011 | 0.343725 | 0.583991 | 0.001456 | 0.001516 | 0.001493 |
| is_unsigned_test.test | RUN | 0.113717 | 0.279012 | 0.443196 | 0.001127 | 0.001690 | 0.001404 |
| is_unscoped_enum_test.test | RUN | 0.109089 | 0.261379 | 0.350327 | 0.001267 | 0.001584 | 0.001532 |
| is_union_test.test | RUN | 0.118629 | 0.319367 | 0.514102 | 0.001600 | 0.001831 | 0.001706 |
| is_unbounded_array_test.test | RUN | 0.109022 | 0.267098 | 0.419939 | 0.001478 | 0.001704 | 0.001689 |
| is_trivially_copyable_test.test | RUN | 0.177646 | 0.563672 | 1.084505 | 0.001491 | 0.001820 | 0.001562 |
| is_swappable_test.test | RUN | 0.147384 | 0.418212 | 0.756470 | 0.001302 | 0.001662 | 0.001670 |
| is_stateless_test.test | RUN | 0.162373 | 0.484645 | 0.905743 | 0.001541 | 0.001686 | 0.001599 |
| is_signed_test.test | RUN | 0.112761 | 0.268976 | 0.411758 | 0.001654 | 0.001837 | 0.001724 |
| is_scoped_enum_test.test | RUN | 0.108810 | 0.254801 | 0.327743 | 0.001491 | 0.001586 | 0.001539 |
| is_scalar_test.test | RUN | 0.145142 | 0.455262 | 0.793938 | 0.001455 | 0.001512 | 0.001411 |
| is_same_test.test | RUN | 0.109336 | 0.277755 | 0.424532 | 0.001655 | 0.001623 | 0.001694 |
| is_rvalue_reference_test.test | RUN | 0.114377 | 0.306273 | 0.479546 | 0.001419 | 0.001838 | 0.001638 |
| is_reference_test.test | RUN | 0.115530 | 0.311699 | 0.494480 | 0.001483 | 0.001717 | 0.001431 |
| is_polymorphic_test.test | RUN | 0.120410 | 0.314066 | 0.510645 | 0.001518 | 0.001749 | 0.001672 |
| is_pointer_test.test | RUN | 0.116986 | 0.303089 | 0.482861 | 0.001616 | 0.001369 | 0.001479 |
| is_pod_test.test | RUN | 0.151231 | 0.498515 | 0.969432 | 0.001483 | 0.001817 | 0.001676 |
| is_object_test.test | RUN | 0.108057 | 0.259119 | 0.395902 | 0.001464 | 0.001802 | 0.001283 |
| is_nothrow_swappable_test.test | RUN | 0.160395 | 0.454164 | 0.838752 | 0.001501 | 0.001615 | 0.001779 |
| is_nothrow_move_constructible_test.test | RUN | 0.152270 | 0.474015 | 0.945486 | 0.001744 | 0.001638 | 0.001615 |
| is_nothrow_move_assignable_test.test | RUN | 0.152431 | 0.477093 | 0.954846 | 0.001574 | 0.001618 | 0.001421 |
| is_noncopyable_test.test | RUN | 0.109238 | 0.267438 | 0.372366 | 0.001526 | 0.001666 | 0.001353 |
| is_member_pointer_test.test | RUN | 0.111572 | 0.261246 | 0.400797 | 0.001463 | 0.001771 | 0.001681 |
| is_member_obj_test.test | RUN | 0.110157 | 0.265274 | 0.427080 | 0.001645 | 0.001532 | 0.001315 |
| is_member_func_test.test | RUN | 0.111990 | 0.283041 | 0.459742 | 0.001337 | 0.001694 | 0.001462 |
| is_lvalue_reference_test.test | RUN | 0.115191 | 0.301143 | 0.469112 | 0.001454 | 0.001488 | 0.001667 |
| is_list_constructible_test.test | RUN | 0.134716 | 0.355703 | 0.527603 | 0.001535 | 0.001511 | 0.001690 |
| is_integral_test.test | RUN | 0.134280 | 0.416725 | 0.784189 | 0.001626 | 0.001695 | 0.001507 |
| is_fundamental_test.test | RUN | 0.135310 | 0.434756 | 0.800226 | 0.001568 | 0.001822 | 0.001482 |
| is_function_test.test | RUN | 0.112895 | 0.286235 | 0.397518 | 0.001462 | 0.001601 | 0.001642 |
| is_floating_point_test.test | RUN | 0.117741 | 0.301966 | 0.474207 | 0.001434 | 0.001692 | 0.001444 |
| is_float_test.test | RUN | 0.115774 | 0.300913 | 0.498899 | 0.001619 | 0.001522 | 0.001716 |
| is_final_test.test | RUN | 0.116520 | 0.305588 | 0.516447 | 0.001509 | 0.001695 | 0.001516 |
| is_enum_test.test | RUN | 0.105642 | 0.260799 | 0.373477 | 0.001546 | 0.001667 | 0.001595 |
| is_empty_test.test | RUN | 0.115501 | 0.279346 | 0.456712 | 0.001328 | 0.001712 | 0.001276 |
| is_detected_test.test | RUN | 0.104874 | 0.239222 | 0.336394 | 0.001550 | 0.001450 | 0.001720 |
| is_detected_exact_test.test | RUN | 0.106285 | 0.243741 | 0.336085 | 0.001592 | 0.001656 | 0.001664 |
| is_destructible_test.test | RUN | 0.148800 | 0.466123 | 0.914249 | 0.001549 | 0.001764 | 0.001470 |
| is_default_constr_test.test | RUN | 0.151783 | 0.491878 | 0.919118 | 0.001281 | 0.001620 | 0.001300 |
| is_copy_constructible_test.test | RUN | 0.160648 | 0.510230 | 0.971262 | 0.001627 | 0.001642 | 0.001658 |
| is_copy_assignable_test.test | RUN | 0.156911 | 0.502137 | 0.961401 | 0.001536 | 0.001665 | 0.001696 |
| is_convertible_test.test | RUN | 0.151634 | 0.450327 | 0.779688 | 0.001516 | 0.001578 | 0.001607 |
| is_constructible_test.test | RUN | 0.128928 | 0.331204 | 0.559295 | 0.001391 | 0.001746 | 0.001768 |
| is_const_test.test | RUN | 0.112950 | 0.293890 | 0.443333 | 0.001764 | 0.001535 | 0.001522 |
| is_compound_test.test | RUN | 0.105722 | 0.242479 | 0.369527 | 0.001561 | 0.001631 | 0.001563 |
| is_complex_test.test | RUN | 0.140641 | 0.321105 | 0.497031 | 0.001640 | 0.001786 | 0.001692 |
| is_complete_test.test | RUN | 0.125723 | 0.337080 | 0.575400 | 0.001508 | 0.001463 | 0.001271 |
| is_class_test.test | RUN | 0.117776 | 0.303406 | 0.463121 | 0.001569 | 0.001598 | 0.001395 |
| is_bounded_array_test.test | RUN | 0.110282 | 0.268582 | 0.428553 | 0.001425 | 0.001354 | 0.001518 |
| is_base_of_test.test | RUN | 0.116265 | 0.297311 | 0.469569 | 0.001697 | 0.001672 | 0.001732 |
| is_base_and_derived_test.test | RUN | 0.113017 | 0.292802 | 0.439569 | 0.001508 | 0.001663 | 0.001756 |
| is_assignable_test.test | RUN | 0.137160 | 0.415377 | 0.720307 | 0.001542 | 0.001575 | 0.001682 |
| is_array_test.test | RUN | 0.112080 | 0.281737 | 0.460361 | 0.001384 | 0.001358 | 0.001537 |
| is_arithmetic_test.test | RUN | 0.140247 | 0.436478 | 0.717674 | 0.001571 | 0.001933 | 0.001651 |
| is_abstract_test.test | RUN | 0.250868 | 1.137156 | 2.540621 | 0.001488 | 0.001702 | 0.001653 |
| integral_constant_test.test | RUN | 0.017473 | 0.044932 | 0.051958 | 0.000567 | 0.000692 | 0.001560 |
| has_virtual_destructor_test.test | RUN | 0.119331 | 0.328150 | 0.521413 | 0.001754 | 0.001906 | 0.001684 |
| has_unary_plus_test.test | RUN | 0.226808 | 1.298698 | 1.992737 | 0.001726 | 0.001684 | 0.001736 |
| has_unary_minus_test.test | RUN | 0.227153 | 1.234809 | 1.873681 | 0.001526 | 0.001847 | 0.001643 |
| has_trivial_move_constructor_test.test | RUN | 0.158286 | 0.461202 | 0.956086 | 0.001664 | 0.001442 | 0.001628 |
| has_trivial_move_assign_test.test | RUN | 0.153493 | 0.489355 | 0.863251 | 0.001678 | 0.001638 | 0.001694 |
| has_trivial_destructor_test.test | RUN | 0.154856 | 0.495546 | 0.942910 | 0.001657 | 0.001651 | 0.001718 |
| has_trivial_copy_test.test | RUN | 0.160902 | 0.508810 | 0.961669 | 0.001612 | 0.001816 | 0.001367 |
| has_trivial_constr_test.test | RUN | 0.162745 | 0.532677 | 0.946366 | 0.001590 | 0.001780 | 0.001647 |
| has_trivial_assign_test.test | RUN | 0.155230 | 0.527019 | 1.001208 | 0.001626 | 0.001645 | 0.001770 |
| has_right_shift_test.test | RUN | 0.248437 | 0.989343 | 2.068092 | 0.001649 | 0.001749 | 0.001680 |
| has_right_shift_assign_test.test | RUN | 0.236256 | 0.898000 | 1.938170 | 0.001552 | 0.001734 | 0.001567 |
| has_prefix_classes3_test.test | RUN | 0.168255 | 0.539408 | 1.022060 | 0.001601 | 0.001710 | 0.001677 |
| has_prefix_classes2_test.test | RUN | 0.170843 | 0.536410 | 1.014911 | 0.001548 | 0.001511 | 0.001669 |
| has_prefix_classes1_test.test | RUN | 0.170091 | 0.524900 | 0.949977 | 0.001688 | 0.001929 | 0.001677 |
| has_prefix_classes0_test.test | RUN | 0.169104 | 0.541068 | 0.994115 | 0.001595 | 0.001678 | 0.001701 |
| has_pre_increment_test.test | RUN | 0.231016 | 1.253587 | 1.974026 | 0.001360 | 0.001706 | 0.001337 |
| has_pre_decrement_test.test | RUN | 0.230517 | 1.230270 | 1.936829 | 0.001262 | 0.001612 | 0.001427 |
| has_postfix_classes3_test.test | RUN | 0.171721 | 0.538858 | 0.976334 | 0.001780 | 0.001808 | 0.001738 |
| has_postfix_classes2_test.test | RUN | 0.171354 | 0.506978 | 0.989406 | 0.001749 | 0.001853 | 0.001773 |
| has_postfix_classes1_test.test | RUN | 0.170977 | 0.544282 | 0.979502 | 0.001711 | 0.001879 | 0.001673 |
| has_postfix_classes0_test.test | RUN | 0.169009 | 0.539072 | 1.033167 | 0.001406 | 0.001761 | 0.001650 |
| has_post_increment_test.test | RUN | 0.231165 | 1.249996 | 1.974971 | 0.001698 | 0.001725 | 0.001704 |
| has_post_decrement_test.test | RUN | 0.232094 | 1.270727 | 1.974760 | 0.001657 | 0.001704 | 0.001698 |
| has_plus_test.test | RUN | 0.233287 | 0.883640 | 1.909087 | 0.001457 | 0.001834 | 0.001679 |
| has_plus_assign_test.test | RUN | 0.239439 | 0.883649 | 1.960814 | 0.001364 | 0.001670 | 0.001921 |
| has_operator_new_test.test | RUN | 0.157536 | 0.453307 | 0.910164 | 0.001781 | 0.001877 | 0.001658 |
| has_nothrow_destructor_test.test | RUN | 0.163245 | 0.537329 | 0.913044 | 0.001693 | 0.001772 | 0.001580 |
| has_nothrow_copy_test.test | RUN | 0.156321 | 0.500899 | 0.889648 | 0.001580 | 0.001687 | 0.001659 |
| has_nothrow_constr_test.test | RUN | 0.150671 | 0.474992 | 0.915758 | 0.001374 | 0.001843 | 0.001474 |
| has_nothrow_assign_test.test | RUN | 0.153450 | 0.472396 | 0.908455 | 0.001791 | 0.001762 | 0.001627 |
| has_not_equal_to_test.test | RUN | 0.235585 | 1.266233 | 1.988525 | 0.001687 | 0.001421 | 0.001670 |
| has_negate_test.test | RUN | 0.222706 | 0.901764 | 1.860113 | 0.001520 | 0.001719 | 0.001695 |
| has_multiplies_test.test | RUN | 0.231066 | 0.936089 | 1.959967 | 0.001381 | 0.001724 | 0.001632 |
| has_multiplies_assign_test.test | RUN | 0.233962 | 0.911189 | 1.954439 | 0.001741 | 0.001792 | 0.001661 |
| has_modulus_test.test | RUN | 0.230666 | 0.923496 | 1.971507 | 0.001578 | 0.001776 | 0.001646 |
| has_modulus_assign_test.test | RUN | 0.229802 | 0.890303 | 1.949700 | 0.001567 | 0.001846 | 0.001740 |
| has_minus_test.test | RUN | 0.231835 | 0.902971 | 1.992731 | 0.001390 | 0.001613 | 0.001413 |
| has_minus_assign_test.test | RUN | 0.242934 | 0.904204 | 2.017390 | 0.001756 | 0.001814 | 0.001681 |
| has_logical_or_test.test | RUN | 0.234326 | 0.996545 | 2.000176 | 0.001726 | 0.001792 | 0.001582 |
| has_logical_not_test.test | RUN | 0.221835 | 0.937994 | 1.917832 | 0.001488 | 0.001687 | 0.001529 |
| has_logical_and_test.test | RUN | 0.226163 | 0.951448 | 1.930080 | 0.001468 | 0.001905 | 0.001691 |
| has_less_test.test | RUN | 0.233120 | 1.259632 | 1.963456 | 0.001596 | 0.001786 | 0.001572 |
| has_less_equal_test.test | RUN | 0.230318 | 1.215051 | 1.956258 | 0.001761 | 0.001706 | 0.001661 |
| has_left_shift_test.test | RUN | 0.257774 | 1.179283 | 2.412109 | 0.001571 | 0.001800 | 0.001606 |
| has_left_shift_assign_test.test | RUN | 0.234970 | 0.909096 | 1.938079 | 0.001543 | 0.001570 | 0.001414 |
| has_greater_test.test | RUN | 0.234241 | 1.218942 | 1.922738 | 0.001638 | 0.001718 | 0.001747 |
| has_greater_equal_test.test | RUN | 0.234403 | 1.225179 | 1.966241 | 0.001939 | 0.001532 | 0.001544 |
| has_equal_to_test.test | RUN | 0.233521 | 1.225681 | 2.015205 | 0.001471 | 0.001803 | 0.001694 |
| has_divides_test.test | RUN | 0.230172 | 0.893999 | 1.972732 | 0.001519 | 0.001576 | 0.001681 |
| has_divides_assign_test.test | RUN | 0.236589 | 0.895478 | 1.911041 | 0.001825 | 0.001800 | 0.001544 |
| has_dereference_test.test | RUN | 0.231698 | 0.900809 | 1.861598 | 0.001620 | 0.001669 | 0.001770 |
| has_complement_test.test | RUN | 0.245060 | 1.233600 | 1.953190 | 0.001541 | 0.001959 | 0.001608 |
| has_bit_xor_test.test | RUN | 0.255238 | 0.895961 | 1.937287 | 0.001508 | 0.001750 | 0.001553 |
| has_bit_xor_assign_test.test | RUN | 0.238763 | 0.906785 | 1.940775 | 0.001818 | 0.001822 | 0.001624 |
| has_bit_or_test.test | RUN | 0.231262 | 0.899290 | 1.933112 | 0.001583 | 0.001829 | 0.001745 |
| has_bit_or_assign_test.test | RUN | 0.231161 | 0.908816 | 1.949206 | 0.001505 | 0.001769 | 0.001588 |
| has_bit_and_test.test | RUN | 0.228709 | 0.907142 | 1.942897 | 0.001495 | 0.001702 | 0.001549 |
| has_bit_and_assign_test.test | RUN | 0.232819 | 0.890554 | 1.931935 | 0.001669 | 0.001744 | 0.001188 |
| has_binary_classes9_test.test | RUN | 0.255503 | 1.031501 | 2.153602 | 0.001533 | 0.001871 | 0.001774 |
| has_binary_classes8_test.test | RUN | 0.252263 | 1.097527 | 2.110888 | 0.001553 | 0.001767 | 0.001668 |
| has_binary_classes7_test.test | RUN | 0.247986 | 1.080693 | 2.176592 | 0.001361 | 0.001793 | 0.001730 |
| has_binary_classes6_test.test | RUN | 0.251962 | 1.033547 | 2.143325 | 0.001672 | 0.001608 | 0.001697 |
| has_binary_classes5_test.test | RUN | 0.253053 | 1.031753 | 2.134830 | 0.001584 | 0.001807 | 0.001770 |
| has_binary_classes4_test.test | RUN | 0.250516 | 1.082134 | 2.142840 | 0.001328 | 0.001860 | 0.001636 |
| has_binary_classes3_test.test | RUN | 0.248926 | 1.040134 | 2.124265 | 0.001460 | 0.001764 | 0.001734 |
| has_binary_classes2_test.test | RUN | 0.257214 | 1.069142 | 2.127832 | 0.001813 | 0.001746 | 0.001627 |
| has_binary_classes1_test.test | RUN | 0.249959 | 1.091280 | 2.080041 | 0.001565 | 0.001746 | 0.001420 |
| has_binary_classes0_test.test | RUN | 0.249215 | 1.067138 | 2.100038 | 0.001449 | 0.001710 | 0.001482 |
| function_traits_test.test | RUN | 0.112872 | 0.284485 | 0.470201 | 0.001591 | 0.001774 | 0.001598 |
| floating_point_promotion_test.test | RUN | 0.109240 | 0.280293 | 0.436648 | 0.001750 | 0.001512 | 0.001510 |
| extent_test.test | RUN | 0.114463 | 0.290536 | 0.421384 | 0.001675 | 0.001455 | 0.001413 |
| enable_if_test.test | RUN | 0.103211 | 0.251493 | 0.354366 | 0.001277 | 0.001497 | 0.001744 |
| disjunction_test.test | RUN | 0.107183 | 0.247492 | 0.365938 | 0.001505 | 0.001785 | 0.001305 |
| detected_test.test | RUN | 0.107077 | 0.241286 | 0.345317 | 0.001722 | 0.001742 | 0.001662 |
| detected_or_test.test | RUN | 0.116464 | 0.248627 | 0.379142 | 0.001414 | 0.001561 | 0.001553 |
| decay_test.test | RUN | 0.290385 | 0.995591 | 2.320565 | 0.001533 | 0.001866 | 0.001412 |
| cxx14_aliases_test.test | RUN | 0.172748 | 0.362212 | 0.573766 | 0.001708 | 0.001828 | 0.001598 |
| copy_reference_test.test | RUN | 0.108782 | 0.261326 | 0.378047 | 0.001636 | 0.001751 | 0.001605 |
| copy_cv_test.test | RUN | 0.111417 | 0.255900 | 0.414970 | 0.001460 | 0.001732 | 0.001238 |
| copy_cv_ref_test.test | RUN | 0.155570 | 0.453100 | 0.963914 | 0.001597 | 0.001539 | 0.001631 |
| conjunction_test.test | RUN | 0.105946 | 0.259004 | 0.375170 | 0.001468 | 0.001510 | 0.001487 |
| conditional_test.test | RUN | 0.103507 | 0.241577 | 0.363265 | 0.001416 | 0.001679 | 0.001490 |
| common_type_test.test | RUN | 0.144447 | 0.386776 | 0.715637 | 0.001669 | 0.001604 | 0.001681 |
| common_type_sfinae_test.test | RUN | 0.105349 | 0.234565 | 0.339368 | 0.001532 | 0.001656 | 0.001536 |
| common_type_sfinae2_test.test | RUN | 0.105717 | 0.246361 | 0.354501 | 0.001490 | 0.001468 | 0.001474 |
| common_type_6_test.test | RUN | 0.110519 | 0.260895 | 0.395700 | 0.001463 | 0.001561 | 0.001676 |
| common_type_5_test.test | RUN | 0.112746 | 0.252218 | 0.352143 | 0.001686 | 0.001694 | 0.001685 |
| common_type_4_test.test | RUN | 0.117168 | 0.280885 | 0.449295 | 0.001552 | 0.001512 | 0.001504 |
| common_type_3_test.test | RUN | 0.104866 | 0.239355 | 0.348969 | 0.001408 | 0.001471 | 0.001427 |
| common_type_2_test.test | RUN | 0.143085 | 0.379229 | 0.716574 | 0.001507 | 0.001664 | 0.001613 |
| alignment_of_test.test | RUN | 0.113128 | 0.303593 | 0.473019 | 0.001438 | 0.001675 | 0.001646 |
| alignment_of_a2_test.test | RUN | 0.112657 | 0.302689 | 0.462505 | 0.001630 | 0.001533 | 0.001618 |
| aligned_storage_test.test | RUN | 0.116183 | 0.288683 | 0.427954 | 0.001679 | 0.001614 | 0.001783 |
| aligned_storage_empy_test.test | RUN | 0.135037 | 0.336709 | 0.554056 | 0.002877 | 0.001876 | 0.001364 |
| aligned_storage_a2_test.test | RUN | 0.118961 | 0.293561 | 0.429565 | 0.001796 | 0.002036 | 0.001792 |
| add_volatile_test.test | RUN | 0.247640 | 0.854014 | 2.198199 | 0.001594 | 0.001802 | 0.001634 |
| add_rvalue_reference_test.test | RUN | 0.279051 | 1.009846 | 2.520488 | 0.001588 | 0.001572 | 0.001651 |
| add_reference_test.test | RUN | 0.274899 | 0.940381 | 2.472777 | 0.001597 | 0.001868 | 0.001665 |
| add_pointer_test.test | RUN | 0.179831 | 0.545024 | 1.278964 | 0.001530 | 0.001654 | 0.001652 |
| add_lvalue_reference_test.test | RUN | 0.276343 | 0.985797 | 2.479415 | 0.001574 | 0.001682 | 0.001712 |
| add_cv_test.test | RUN | 0.261110 | 0.878636 | 2.291198 | 0.001518 | 0.001414 | 0.001630 |
| add_const_test.test | RUN | 0.261526 | 0.876992 | 2.309127 | 0.001485 | 0.001224 | 0.001436 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.102632 | 0.236359 | 0.342292 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.105578 | 0.242244 | 0.350956 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.099264 | 0.219820 | 0.337575 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.099748 | 0.222365 | 0.346280 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.099902 | 0.227801 | 0.308410 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.098953 | 0.229525 | 0.316773 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.102186 | 0.232682 | 0.329121 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.099662 | 0.226034 | 0.299262 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.099464 | 0.221672 | 0.331288 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.099482 | 0.230426 | 0.338202 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.102040 | 0.227692 | 0.319790 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.103784 | 0.230817 | 0.325475 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.102676 | 0.229525 | 0.327367 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.101294 | 0.219251 | 0.323366 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.100276 | 0.220288 | 0.327630 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.100926 | 0.231077 | 0.322400 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.100122 | 0.229784 | 0.317350 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.101575 | 0.228655 | 0.335078 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.100857 | 0.225544 | 0.330784 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.099846 | 0.227281 | 0.310517 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.100968 | 0.224220 | 0.331509 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.100789 | 0.225985 | 0.332443 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.158202 | 0.487790 | 0.935867 | 0.001529 | 0.001722 | 0.001476 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.151583 | 0.497174 | 0.922435 | 0.001582 | 0.001654 | 0.001407 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.153368 | 0.490129 | 0.946395 | 0.001501 | 0.001734 | 0.001656 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.156364 | 0.490565 | 0.931786 | 0.001092 | 0.001285 | 0.001330 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.098778 | 0.364947 | 0.532455 | 0.001344 | 0.001254 | 0.001162 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.972×† | 0.946×, 0.998× | 1.068× |
| clang | 1.099×† | 1.074×, 1.125× | 0.919× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000955s | 0.000974s | 0.001116s | byte equality observed |
| add_cv_test.test | 10 | 0.000980s | 0.000976s | 0.001132s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000978s | 0.000993s | 0.001156s | byte equality observed |
| add_pointer_test.test | 10 | 0.001014s | 0.000975s | 0.001133s | byte equality observed |
| add_reference_test.test | 10 | 0.000991s | 0.000983s | 0.001129s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000997s | 0.001003s | 0.001085s | byte equality observed |
| add_volatile_test.test | 10 | 0.000980s | 0.000986s | 0.001072s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001083s | 0.001063s | 0.001163s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000991s | 0.000948s | 0.001055s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001079s | 0.001093s | 0.001150s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001001s | 0.000952s | 0.001078s | byte equality observed |
| alignment_of_test.test | 10 | 0.001000s | 0.000969s | 0.001092s | byte equality observed |
| common_type_2_test.test | 10 | 0.000981s | 0.001002s | 0.001066s | byte equality observed |
| common_type_3_test.test | 9 | 0.001000s | 0.001001s | 0.001088s | byte equality observed |
| common_type_4_test.test | 10 | 0.001000s | 0.000990s | 0.001109s | byte equality observed |
| common_type_5_test.test | 10 | 0.000969s | 0.000986s | 0.001118s | byte equality observed |
| common_type_6_test.test | 10 | 0.000994s | 0.000985s | 0.001098s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000986s | 0.000977s | 0.001089s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000994s | 0.000977s | 0.001117s | byte equality observed |
| common_type_test.test | 10 | 0.000978s | 0.000987s | 0.001118s | byte equality observed |
| conditional_test.test | 10 | 0.001006s | 0.000966s | 0.001143s | byte equality observed |
| conjunction_test.test | 10 | 0.000998s | 0.000975s | 0.001128s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001009s | 0.000998s | 0.001138s | byte equality observed |
| copy_cv_test.test | 10 | 0.000994s | 0.000965s | 0.001123s | byte equality observed |
| copy_reference_test.test | 10 | 0.000981s | 0.000973s | 0.001132s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001017s | 0.000997s | 0.001098s | byte equality observed |
| decay_test.test | 10 | 0.000993s | 0.000984s | 0.001140s | byte equality observed |
| detected_or_test.test | 10 | 0.000992s | 0.001011s | 0.001124s | byte equality observed |
| detected_test.test | 10 | 0.001015s | 0.000978s | 0.001131s | byte equality observed |
| disjunction_test.test | 10 | 0.000975s | 0.001000s | 0.001146s | byte equality observed |
| enable_if_test.test | 10 | 0.001009s | 0.000990s | 0.001120s | byte equality observed |
| extent_test.test | 10 | 0.000985s | 0.000982s | 0.001151s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000986s | 0.000986s | 0.001120s | byte equality observed |
| function_traits_test.test | 10 | 0.000977s | 0.000990s | 0.001128s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000989s | 0.000981s | 0.001124s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000971s | 0.000988s | 0.001154s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001007s | 0.000992s | 0.001134s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000993s | 0.000965s | 0.001135s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000977s | 0.001003s | 0.001122s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001000s | 0.000969s | 0.001119s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000978s | 0.000978s | 0.001139s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001020s | 0.001037s | 0.001132s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001001s | 0.000952s | 0.001138s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001003s | 0.000987s | 0.001148s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000986s | 0.000972s | 0.001137s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000986s | 0.001005s | 0.001125s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000979s | 0.000995s | 0.001150s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001001s | 0.000957s | 0.001163s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000995s | 0.000977s | 0.001122s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001004s | 0.000971s | 0.001141s | byte equality observed |
| has_complement_test.test | 10 | 0.001002s | 0.000987s | 0.001128s | byte equality observed |
| has_dereference_test.test | 10 | 0.000984s | 0.001006s | 0.001144s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000990s | 0.000965s | 0.001140s | byte equality observed |
| has_divides_test.test | 10 | 0.000975s | 0.000999s | 0.001119s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000985s | 0.000958s | 0.001135s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000970s | 0.000972s | 0.001149s | byte equality observed |
| has_greater_test.test | 10 | 0.000980s | 0.000976s | 0.001129s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000992s | 0.001008s | 0.001130s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000986s | 0.000996s | 0.001149s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000987s | 0.000977s | 0.001141s | byte equality observed |
| has_less_test.test | 10 | 0.000994s | 0.000970s | 0.001130s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001007s | 0.001032s | 0.001131s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000999s | 0.000958s | 0.001121s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001010s | 0.000965s | 0.001150s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000986s | 0.000967s | 0.001150s | byte equality observed |
| has_minus_test.test | 10 | 0.000975s | 0.000987s | 0.001155s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000995s | 0.000978s | 0.001127s | byte equality observed |
| has_modulus_test.test | 10 | 0.000975s | 0.000987s | 0.001141s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001019s | 0.000975s | 0.001152s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000985s | 0.000999s | 0.001116s | byte equality observed |
| has_negate_test.test | 9 | 0.000988s | 0.000972s | 0.001141s | byte equality observed |
| has_not_equal_to_test.test | 9 | 0.001012s | 0.000974s | 0.001126s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000967s | 0.001035s | 0.001125s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000996s | 0.000976s | 0.001150s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000989s | 0.000978s | 0.001132s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001000s | 0.001016s | 0.001145s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001009s | 0.000965s | 0.001140s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000978s | 0.001000s | 0.001146s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001013s | 0.000974s | 0.001130s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000985s | 0.000962s | 0.001158s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000982s | 0.000985s | 0.001143s | byte equality observed |
| has_plus_test.test | 10 | 0.001001s | 0.000963s | 0.001123s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000995s | 0.000959s | 0.001117s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001011s | 0.000997s | 0.001135s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001032s | 0.000985s | 0.001144s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001017s | 0.000956s | 0.001148s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000973s | 0.000985s | 0.001139s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000997s | 0.000980s | 0.001131s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001001s | 0.000977s | 0.001140s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000983s | 0.000993s | 0.001124s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001012s | 0.000984s | 0.001125s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000983s | 0.000976s | 0.001132s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000988s | 0.000983s | 0.001143s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001024s | 0.000968s | 0.001139s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000979s | 0.000994s | 0.001125s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001011s | 0.000970s | 0.001133s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001046s | 0.001035s | 0.001191s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001084s | 0.001001s | 0.001210s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001024s | 0.001017s | 0.001255s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001007s | 0.000986s | 0.001128s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001002s | 0.000987s | 0.001120s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000993s | 0.000995s | 0.001141s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001006s | 0.000981s | 0.001139s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000990s | 0.000983s | 0.001141s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000997s | 0.000991s | 0.001118s | byte equality observed |
| integral_constant_test.test | 10 | 0.000465s | 0.000467s | 0.001147s | byte equality observed |
| is_abstract_test.test | 10 | 0.001003s | 0.000999s | 0.001144s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000975s | 0.000997s | 0.001137s | byte equality observed |
| is_array_test.test | 10 | 0.000974s | 0.000989s | 0.001145s | byte equality observed |
| is_assignable_test.test | 10 | 0.000977s | 0.000973s | 0.001152s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000991s | 0.000989s | 0.001140s | byte equality observed |
| is_base_of_test.test | 10 | 0.001019s | 0.000989s | 0.001127s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001018s | 0.000968s | 0.001135s | byte equality observed |
| is_class_test.test | 10 | 0.001010s | 0.000975s | 0.001137s | byte equality observed |
| is_complete_test.test | 10 | 0.001004s | 0.000970s | 0.001135s | byte equality observed |
| is_complex_test.test | 10 | 0.001004s | 0.001007s | 0.001148s | byte equality observed |
| is_compound_test.test | 10 | 0.001023s | 0.001007s | 0.001144s | byte equality observed |
| is_const_test.test | 10 | 0.001039s | 0.000992s | 0.001143s | byte equality observed |
| is_constructible_test.test | 10 | 0.001065s | 0.000986s | 0.001144s | byte equality observed |
| is_convertible_test.test | 10 | 0.001060s | 0.000974s | 0.001150s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001066s | 0.000986s | 0.001155s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001038s | 0.000983s | 0.001143s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001043s | 0.000969s | 0.001140s | byte equality observed |
| is_destructible_test.test | 10 | 0.001060s | 0.000987s | 0.001151s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001074s | 0.000975s | 0.001147s | byte equality observed |
| is_detected_test.test | 10 | 0.001063s | 0.000976s | 0.001155s | byte equality observed |
| is_empty_test.test | 10 | 0.001074s | 0.000994s | 0.001159s | byte equality observed |
| is_enum_test.test | 10 | 0.001073s | 0.000984s | 0.001143s | byte equality observed |
| is_final_test.test | 10 | 0.001059s | 0.000970s | 0.001139s | byte equality observed |
| is_float_test.test | 10 | 0.001063s | 0.000968s | 0.001128s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001051s | 0.000972s | 0.001119s | byte equality observed |
| is_function_test.test | 10 | 0.001034s | 0.000966s | 0.001137s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001073s | 0.001013s | 0.001165s | byte equality observed |
| is_integral_test.test | 10 | 0.001032s | 0.000963s | 0.001135s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001065s | 0.000980s | 0.001141s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001048s | 0.000995s | 0.001148s | byte equality observed |
| is_member_func_test.test | 10 | 0.001050s | 0.000983s | 0.001137s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001070s | 0.001001s | 0.001131s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001065s | 0.001007s | 0.001148s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001065s | 0.000984s | 0.001144s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001122s | 0.000993s | 0.001146s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001113s | 0.000979s | 0.001144s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001117s | 0.000972s | 0.001164s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001100s | 0.001021s | 0.001150s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001094s | 0.001005s | 0.001146s | byte equality observed |
| is_object_test.test | 10 | 0.001131s | 0.000991s | 0.001148s | byte equality observed |
| is_pod_test.test | 10 | 0.001119s | 0.001034s | 0.001145s | byte equality observed |
| is_pointer_test.test | 10 | 0.001109s | 0.001040s | 0.001149s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001135s | 0.001027s | 0.001132s | byte equality observed |
| is_reference_test.test | 10 | 0.001090s | 0.000983s | 0.001155s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001120s | 0.001053s | 0.001146s | byte equality observed |
| is_same_test.test | 10 | 0.001107s | 0.001068s | 0.001137s | byte equality observed |
| is_scalar_test.test | 10 | 0.001138s | 0.001078s | 0.001128s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001110s | 0.001081s | 0.001135s | byte equality observed |
| is_signed_test.test | 10 | 0.001102s | 0.001069s | 0.001135s | byte equality observed |
| is_stateless_test.test | 10 | 0.001124s | 0.001063s | 0.001155s | byte equality observed |
| is_swappable_test.test | 10 | 0.001130s | 0.001058s | 0.001152s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001150s | 0.001090s | 0.001201s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001120s | 0.001043s | 0.001141s | byte equality observed |
| is_union_test.test | 10 | 0.001131s | 0.001039s | 0.001159s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001120s | 0.001084s | 0.001147s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001123s | 0.001047s | 0.001153s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001120s | 0.001054s | 0.001157s | byte equality observed |
| is_void_test.test | 10 | 0.001129s | 0.001112s | 0.001143s | byte equality observed |
| is_volatile_test.test | 10 | 0.001122s | 0.001095s | 0.001147s | byte equality observed |
| make_signed_test.test | 10 | 0.001136s | 0.001120s | 0.001134s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001145s | 0.001104s | 0.001170s | byte equality observed |
| make_void_test.test | 10 | 0.001151s | 0.001106s | 0.001137s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000505s | 0.000501s | 0.001140s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000511s | 0.000508s | 0.001161s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000518s | 0.000508s | 0.001149s | byte equality observed |
| negation_test.test | 10 | 0.001164s | 0.001168s | 0.001141s | byte equality observed |
| promote_basic_test.test | 10 | 0.000513s | 0.000507s | 0.001156s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000511s | 0.000510s | 0.001151s | byte equality observed |
| promote_enum_test.test | 10 | 0.000508s | 0.000513s | 0.001153s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000498s | 0.000505s | 0.001148s | byte equality observed |
| rank_test.test | 10 | 0.001143s | 0.001143s | 0.001139s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001162s | 0.001128s | 0.001149s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001135s | 0.001115s | 0.001142s | byte equality observed |
| remove_const_test.test | 10 | 0.001115s | 0.001119s | 0.001130s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001130s | 0.001122s | 0.001128s | byte equality observed |
| remove_cv_test.test | 10 | 0.001140s | 0.001112s | 0.001151s | byte equality observed |
| remove_extent_test.test | 10 | 0.001135s | 0.001139s | 0.001161s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001156s | 0.001128s | 0.001162s | byte equality observed |
| remove_reference_test.test | 10 | 0.001135s | 0.001137s | 0.001160s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001132s | 0.001121s | 0.001157s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001126s | 0.001155s | 0.001149s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001119s | 0.001134s | 0.001152s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001122s | 0.001121s | 0.001139s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001135s | 0.001136s | 0.001157s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001144s | 0.001139s | 0.001157s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001119s | 0.001155s | 0.001131s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001131s | 0.001140s | 0.001150s | byte equality observed |
| type_identity_test.test | 10 | 0.001143s | 0.001142s | 0.001128s | byte equality observed |
| type_traits_test.test | 10 | 0.000509s | 0.000504s | 0.001126s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001285s | 0.001266s | 0.001253s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
