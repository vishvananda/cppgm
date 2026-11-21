# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.115549 | 0.320190 | 0.488935 | 0.001569 | 0.001713 | 0.001498 |
| type_traits_test.test | RUN | 0.158988 | 0.328762 | 0.509868 | 0.000597 | 0.000580 | 0.001554 |
| type_identity_test.test | RUN | 0.307704 | 1.148539 | 2.958170 | 0.001488 | 0.001745 | 0.001617 |
| tricky_rvalue_test.test | RUN | 0.105921 | 0.256655 | 0.388920 | 0.001582 | 0.001680 | 0.001317 |
| tricky_partial_spec_test.test | RUN | 0.129165 | 0.367192 | 0.610484 | 0.001638 | 0.001670 | 0.001600 |
| tricky_is_enum_test.test | RUN | 0.103388 | 0.243539 | 0.356641 | 0.001462 | 0.001743 | 0.001640 |
| tricky_incomplete_type_test.test | RUN | 0.167926 | 0.381935 | 0.617525 | 0.001620 | 0.001666 | 0.001621 |
| tricky_function_type_test.test | RUN | 0.138412 | 0.397396 | 0.692617 | 0.001680 | 0.001568 | 0.001427 |
| tricky_add_pointer_test.test | RUN | 0.206584 | 0.685114 | 1.650603 | 0.001701 | 0.001782 | 0.001320 |
| tricky_abstract_type_test.test | RUN | 0.109378 | 0.255959 | 0.371724 | 0.001738 | 0.001610 | 0.001637 |
| remove_volatile_test.test | RUN | 0.278659 | 1.011616 | 2.597266 | 0.001706 | 0.001856 | 0.001531 |
| remove_reference_test.test | RUN | 0.286969 | 1.018806 | 2.696552 | 0.001618 | 0.001737 | 0.001590 |
| remove_pointer_test.test | RUN | 0.299293 | 1.062772 | 2.823967 | 0.001768 | 0.001518 | 0.001568 |
| remove_extent_test.test | RUN | 0.288763 | 1.085524 | 2.757922 | 0.001598 | 0.001843 | 0.001640 |
| remove_cv_test.test | RUN | 0.286242 | 1.075710 | 2.737116 | 0.001685 | 0.001871 | 0.001646 |
| remove_cv_ref_test.test | RUN | 0.603369 | 2.491409 | 6.785429 | 0.001572 | 0.001580 | 0.001400 |
| remove_const_test.test | RUN | 0.279220 | 0.991716 | 2.597545 | 0.001759 | 0.001814 | 0.001396 |
| remove_bounds_test.test | RUN | 0.293986 | 1.069194 | 2.674246 | 0.001584 | 0.001738 | 0.001634 |
| remove_all_extents_test.test | RUN | 0.292046 | 1.037353 | 2.778972 | 0.001534 | 0.001707 | 0.001515 |
| rank_test.test | RUN | 0.108284 | 0.250287 | 0.352079 | 0.001398 | 0.001447 | 0.001484 |
| promote_mpl_test.test | RUN | 0.092810 | 0.224451 | 0.261342 | 0.000587 | 0.000740 | 0.001464 |
| promote_enum_test.test | RUN | 0.021782 | 0.055023 | 0.063173 | 0.000619 | 0.000783 | 0.001632 |
| promote_enum_msvc_bug_test.test | RUN | 0.020384 | 0.048648 | 0.052464 | 0.000587 | 0.000598 | 0.001412 |
| promote_basic_test.test | RUN | 0.024591 | 0.066070 | 0.064071 | 0.000587 | 0.000616 | 0.001687 |
| negation_test.test | RUN | 0.103570 | 0.237302 | 0.313964 | 0.001696 | 0.001558 | 0.001648 |
| mpl_interop_test3.test | RUN | 0.088753 | 0.207755 | 0.233854 | 0.000592 | 0.000595 | 0.001498 |
| mpl_interop_test2.test | RUN | 0.032443 | 0.065287 | 0.061734 | 0.000579 | 0.000769 | 0.001599 |
| mpl_interop_test1.test | RUN | 0.017306 | 0.046075 | 0.047527 | 0.000686 | 0.000768 | 0.001618 |
| make_void_test.test | RUN | 0.108306 | 0.251467 | 0.408694 | 0.001543 | 0.001684 | 0.001632 |
| make_unsigned_test.test | RUN | 0.123778 | 0.336856 | 0.563776 | 0.001524 | 0.001530 | 0.001369 |
| make_signed_test.test | RUN | 0.123750 | 0.345026 | 0.566533 | 0.001207 | 0.001679 | 0.001390 |
| is_volatile_test.test | RUN | 0.112916 | 0.279890 | 0.479571 | 0.001342 | 0.001484 | 0.001587 |
| is_void_test.test | RUN | 0.108607 | 0.258309 | 0.415688 | 0.001559 | 0.001766 | 0.001644 |
| is_virtual_base_of_test.test | RUN | 0.125002 | 0.349504 | 0.568855 | 0.001437 | 0.001321 | 0.001681 |
| is_unsigned_test.test | RUN | 0.110100 | 0.273855 | 0.439670 | 0.001483 | 0.001378 | 0.001399 |
| is_unscoped_enum_test.test | RUN | 0.108492 | 0.257492 | 0.376494 | 0.001521 | 0.001298 | 0.001491 |
| is_union_test.test | RUN | 0.116520 | 0.310723 | 0.512681 | 0.001522 | 0.001717 | 0.001576 |
| is_unbounded_array_test.test | RUN | 0.107672 | 0.259214 | 0.403204 | 0.001262 | 0.001822 | 0.001746 |
| is_trivially_copyable_test.test | RUN | 0.178819 | 0.543168 | 1.060427 | 0.001452 | 0.001688 | 0.001820 |
| is_swappable_test.test | RUN | 0.144850 | 0.415625 | 0.809923 | 0.001326 | 0.001674 | 0.001506 |
| is_stateless_test.test | RUN | 0.164963 | 0.486040 | 0.873637 | 0.001674 | 0.001468 | 0.001675 |
| is_signed_test.test | RUN | 0.111905 | 0.286867 | 0.451731 | 0.001500 | 0.001610 | 0.001618 |
| is_scoped_enum_test.test | RUN | 0.108846 | 0.249486 | 0.330383 | 0.001466 | 0.001619 | 0.001724 |
| is_scalar_test.test | RUN | 0.143234 | 0.448284 | 0.789664 | 0.001475 | 0.001492 | 0.001608 |
| is_same_test.test | RUN | 0.110226 | 0.265634 | 0.422952 | 0.001503 | 0.001614 | 0.001604 |
| is_rvalue_reference_test.test | RUN | 0.114419 | 0.295279 | 0.469495 | 0.001673 | 0.001521 | 0.001597 |
| is_reference_test.test | RUN | 0.114204 | 0.308051 | 0.469014 | 0.001462 | 0.001768 | 0.001681 |
| is_polymorphic_test.test | RUN | 0.118399 | 0.306988 | 0.510065 | 0.001495 | 0.001628 | 0.001736 |
| is_pointer_test.test | RUN | 0.115602 | 0.306077 | 0.498655 | 0.001636 | 0.001538 | 0.001631 |
| is_pod_test.test | RUN | 0.151856 | 0.497694 | 0.936026 | 0.001450 | 0.001746 | 0.001630 |
| is_object_test.test | RUN | 0.106163 | 0.252155 | 0.385956 | 0.001552 | 0.001636 | 0.001586 |
| is_nothrow_swappable_test.test | RUN | 0.158474 | 0.468021 | 0.856385 | 0.001411 | 0.001476 | 0.001701 |
| is_nothrow_move_constructible_test.test | RUN | 0.145993 | 0.467897 | 0.917941 | 0.001699 | 0.001511 | 0.001365 |
| is_nothrow_move_assignable_test.test | RUN | 0.149661 | 0.485690 | 0.928087 | 0.001362 | 0.001527 | 0.001580 |
| is_noncopyable_test.test | RUN | 0.108979 | 0.262978 | 0.372518 | 0.001655 | 0.001483 | 0.001720 |
| is_member_pointer_test.test | RUN | 0.110666 | 0.267746 | 0.378951 | 0.001540 | 0.001645 | 0.001740 |
| is_member_obj_test.test | RUN | 0.111295 | 0.267952 | 0.425881 | 0.001716 | 0.001528 | 0.001607 |
| is_member_func_test.test | RUN | 0.113119 | 0.288879 | 0.458287 | 0.001341 | 0.001580 | 0.001509 |
| is_lvalue_reference_test.test | RUN | 0.113883 | 0.302095 | 0.468191 | 0.001710 | 0.001704 | 0.001773 |
| is_list_constructible_test.test | RUN | 0.134319 | 0.349091 | 0.547843 | 0.001643 | 0.001477 | 0.001598 |
| is_integral_test.test | RUN | 0.133624 | 0.409925 | 0.765727 | 0.001628 | 0.001585 | 0.001443 |
| is_fundamental_test.test | RUN | 0.138282 | 0.442929 | 0.804680 | 0.001562 | 0.001712 | 0.001665 |
| is_function_test.test | RUN | 0.112579 | 0.285418 | 0.404615 | 0.001552 | 0.001450 | 0.001658 |
| is_floating_point_test.test | RUN | 0.115838 | 0.305166 | 0.458526 | 0.001602 | 0.001602 | 0.001762 |
| is_float_test.test | RUN | 0.114745 | 0.303788 | 0.492862 | 0.001699 | 0.001638 | 0.001711 |
| is_final_test.test | RUN | 0.116482 | 0.309905 | 0.476990 | 0.001448 | 0.001592 | 0.001642 |
| is_enum_test.test | RUN | 0.104699 | 0.262719 | 0.369095 | 0.001608 | 0.001518 | 0.001418 |
| is_empty_test.test | RUN | 0.115863 | 0.283056 | 0.438652 | 0.001276 | 0.001479 | 0.001718 |
| is_detected_test.test | RUN | 0.105261 | 0.246688 | 0.346498 | 0.001706 | 0.001529 | 0.001574 |
| is_detected_exact_test.test | RUN | 0.103897 | 0.239157 | 0.332519 | 0.001572 | 0.001488 | 0.001676 |
| is_destructible_test.test | RUN | 0.146996 | 0.471854 | 0.859681 | 0.001445 | 0.001782 | 0.001629 |
| is_default_constr_test.test | RUN | 0.150889 | 0.482560 | 0.920108 | 0.001435 | 0.001730 | 0.001626 |
| is_copy_constructible_test.test | RUN | 0.160851 | 0.508942 | 0.949099 | 0.001611 | 0.001579 | 0.001683 |
| is_copy_assignable_test.test | RUN | 0.156389 | 0.484271 | 0.949217 | 0.001519 | 0.001598 | 0.001650 |
| is_convertible_test.test | RUN | 0.151727 | 0.439694 | 0.796358 | 0.001338 | 0.001750 | 0.001376 |
| is_constructible_test.test | RUN | 0.121372 | 0.326329 | 0.497098 | 0.001456 | 0.001320 | 0.001499 |
| is_const_test.test | RUN | 0.114138 | 0.272224 | 0.436245 | 0.001541 | 0.001368 | 0.001696 |
| is_compound_test.test | RUN | 0.105192 | 0.251583 | 0.340042 | 0.001556 | 0.001369 | 0.001369 |
| is_complex_test.test | RUN | 0.143200 | 0.323324 | 0.498022 | 0.001109 | 0.001795 | 0.001389 |
| is_complete_test.test | RUN | 0.120387 | 0.332602 | 0.576760 | 0.001541 | 0.001410 | 0.001457 |
| is_class_test.test | RUN | 0.114830 | 0.298970 | 0.485869 | 0.001464 | 0.001518 | 0.001454 |
| is_bounded_array_test.test | RUN | 0.108803 | 0.266797 | 0.400096 | 0.001622 | 0.001561 | 0.001470 |
| is_base_of_test.test | RUN | 0.112763 | 0.289622 | 0.476056 | 0.001566 | 0.001699 | 0.001710 |
| is_base_and_derived_test.test | RUN | 0.112112 | 0.288102 | 0.459694 | 0.001381 | 0.001799 | 0.001419 |
| is_assignable_test.test | RUN | 0.137171 | 0.412851 | 0.710138 | 0.001314 | 0.001595 | 0.001632 |
| is_array_test.test | RUN | 0.110693 | 0.280557 | 0.450290 | 0.001520 | 0.001535 | 0.001455 |
| is_arithmetic_test.test | RUN | 0.135834 | 0.415472 | 0.760577 | 0.001424 | 0.001797 | 0.001514 |
| is_abstract_test.test | RUN | 0.249009 | 1.129031 | 2.527513 | 0.001514 | 0.001653 | 0.001596 |
| integral_constant_test.test | RUN | 0.017776 | 0.048940 | 0.051648 | 0.000573 | 0.000732 | 0.001585 |
| has_virtual_destructor_test.test | RUN | 0.117263 | 0.330708 | 0.535981 | 0.001595 | 0.001768 | 0.001625 |
| has_unary_plus_test.test | RUN | 0.231573 | 1.264429 | 1.980997 | 0.001622 | 0.001683 | 0.001484 |
| has_unary_minus_test.test | RUN | 0.224562 | 1.242898 | 1.917715 | 0.001634 | 0.001616 | 0.001620 |
| has_trivial_move_constructor_test.test | RUN | 0.159496 | 0.457947 | 0.940996 | 0.001552 | 0.001288 | 0.001680 |
| has_trivial_move_assign_test.test | RUN | 0.158374 | 0.463982 | 0.863541 | 0.001546 | 0.001586 | 0.001597 |
| has_trivial_destructor_test.test | RUN | 0.155646 | 0.470542 | 0.943486 | 0.001357 | 0.001472 | 0.001468 |
| has_trivial_copy_test.test | RUN | 0.159620 | 0.510912 | 0.968692 | 0.001677 | 0.001880 | 0.001758 |
| has_trivial_constr_test.test | RUN | 0.161391 | 0.526075 | 0.969273 | 0.001473 | 0.001810 | 0.001815 |
| has_trivial_assign_test.test | RUN | 0.160263 | 0.515022 | 0.971998 | 0.001532 | 0.001751 | 0.001752 |
| has_right_shift_test.test | RUN | 0.242908 | 0.956708 | 2.023429 | 0.001562 | 0.001720 | 0.001691 |
| has_right_shift_assign_test.test | RUN | 0.233785 | 0.897026 | 1.912646 | 0.001382 | 0.001691 | 0.001519 |
| has_prefix_classes3_test.test | RUN | 0.170116 | 0.535907 | 1.019063 | 0.001502 | 0.001773 | 0.001572 |
| has_prefix_classes2_test.test | RUN | 0.173598 | 0.531677 | 1.024420 | 0.001428 | 0.001537 | 0.001606 |
| has_prefix_classes1_test.test | RUN | 0.169742 | 0.515559 | 0.956302 | 0.001493 | 0.001791 | 0.001636 |
| has_prefix_classes0_test.test | RUN | 0.170141 | 0.534114 | 0.984389 | 0.001477 | 0.001791 | 0.001643 |
| has_pre_increment_test.test | RUN | 0.229643 | 1.233996 | 1.911996 | 0.001456 | 0.001654 | 0.001445 |
| has_pre_decrement_test.test | RUN | 0.232370 | 1.240384 | 1.957609 | 0.001510 | 0.001612 | 0.001416 |
| has_postfix_classes3_test.test | RUN | 0.169760 | 0.531313 | 0.990614 | 0.001561 | 0.001701 | 0.001560 |
| has_postfix_classes2_test.test | RUN | 0.171828 | 0.509134 | 1.013168 | 0.001459 | 0.001667 | 0.001610 |
| has_postfix_classes1_test.test | RUN | 0.173443 | 0.533858 | 0.990971 | 0.001312 | 0.001579 | 0.001684 |
| has_postfix_classes0_test.test | RUN | 0.167016 | 0.526182 | 1.015796 | 0.001528 | 0.001744 | 0.001604 |
| has_post_increment_test.test | RUN | 0.228646 | 1.256994 | 1.974017 | 0.001529 | 0.001740 | 0.001622 |
| has_post_decrement_test.test | RUN | 0.230108 | 1.271142 | 1.930876 | 0.001612 | 0.001716 | 0.001466 |
| has_plus_test.test | RUN | 0.233164 | 0.892474 | 1.931488 | 0.001413 | 0.001626 | 0.001685 |
| has_plus_assign_test.test | RUN | 0.237504 | 0.904077 | 1.943109 | 0.001537 | 0.001830 | 0.001373 |
| has_operator_new_test.test | RUN | 0.154799 | 0.460921 | 0.896223 | 0.001589 | 0.001814 | 0.001627 |
| has_nothrow_destructor_test.test | RUN | 0.161036 | 0.505176 | 0.930749 | 0.001561 | 0.001295 | 0.001311 |
| has_nothrow_copy_test.test | RUN | 0.154582 | 0.479612 | 0.918910 | 0.001524 | 0.001764 | 0.001662 |
| has_nothrow_constr_test.test | RUN | 0.149812 | 0.473549 | 0.919997 | 0.001414 | 0.001615 | 0.001574 |
| has_nothrow_assign_test.test | RUN | 0.153509 | 0.477714 | 0.878759 | 0.001450 | 0.001797 | 0.001199 |
| has_not_equal_to_test.test | RUN | 0.234360 | 1.239151 | 2.019321 | 0.001700 | 0.001624 | 0.001368 |
| has_negate_test.test | RUN | 0.219126 | 0.891453 | 1.846510 | 0.001626 | 0.001592 | 0.001734 |
| has_multiplies_test.test | RUN | 0.229554 | 0.912404 | 1.949639 | 0.001513 | 0.001641 | 0.001714 |
| has_multiplies_assign_test.test | RUN | 0.236690 | 0.862563 | 1.996017 | 0.001617 | 0.001617 | 0.001576 |
| has_modulus_test.test | RUN | 0.229694 | 0.892809 | 1.891933 | 0.001747 | 0.001578 | 0.001703 |
| has_modulus_assign_test.test | RUN | 0.232248 | 0.874630 | 1.960005 | 0.001870 | 0.001668 | 0.001644 |
| has_minus_test.test | RUN | 0.234151 | 0.911609 | 1.945784 | 0.001485 | 0.001714 | 0.001749 |
| has_minus_assign_test.test | RUN | 0.243889 | 0.898155 | 1.963726 | 0.001668 | 0.001604 | 0.001533 |
| has_logical_or_test.test | RUN | 0.234043 | 0.893466 | 1.945929 | 0.001520 | 0.001674 | 0.001619 |
| has_logical_not_test.test | RUN | 0.220089 | 0.864005 | 1.901160 | 0.001504 | 0.001528 | 0.001764 |
| has_logical_and_test.test | RUN | 0.232325 | 0.912012 | 1.950021 | 0.001520 | 0.001640 | 0.001752 |
| has_less_test.test | RUN | 0.231735 | 1.217508 | 1.949509 | 0.001586 | 0.001688 | 0.001504 |
| has_less_equal_test.test | RUN | 0.236226 | 1.215261 | 1.955581 | 0.001380 | 0.001640 | 0.001610 |
| has_left_shift_test.test | RUN | 0.256963 | 1.152971 | 2.422969 | 0.001519 | 0.001469 | 0.001372 |
| has_left_shift_assign_test.test | RUN | 0.232660 | 0.880174 | 1.907224 | 0.001542 | 0.001478 | 0.001437 |
| has_greater_test.test | RUN | 0.231560 | 1.199509 | 1.972183 | 0.001690 | 0.001779 | 0.001425 |
| has_greater_equal_test.test | RUN | 0.234308 | 1.193875 | 1.945263 | 0.001631 | 0.001726 | 0.001624 |
| has_equal_to_test.test | RUN | 0.227318 | 1.220294 | 1.930971 | 0.001495 | 0.001560 | 0.001690 |
| has_divides_test.test | RUN | 0.230006 | 0.860407 | 1.977695 | 0.001494 | 0.001602 | 0.001557 |
| has_divides_assign_test.test | RUN | 0.234033 | 0.858316 | 1.970895 | 0.001522 | 0.001761 | 0.001399 |
| has_dereference_test.test | RUN | 0.225845 | 0.864038 | 1.828644 | 0.001574 | 0.001860 | 0.001609 |
| has_complement_test.test | RUN | 0.225197 | 1.207132 | 1.956398 | 0.001535 | 0.001797 | 0.001518 |
| has_bit_xor_test.test | RUN | 0.226269 | 0.894047 | 1.909630 | 0.001326 | 0.001784 | 0.001586 |
| has_bit_xor_assign_test.test | RUN | 0.233124 | 0.862718 | 1.953879 | 0.001678 | 0.001719 | 0.001250 |
| has_bit_or_test.test | RUN | 0.232156 | 0.913432 | 1.930536 | 0.001704 | 0.001802 | 0.001682 |
| has_bit_or_assign_test.test | RUN | 0.227461 | 0.932376 | 1.921900 | 0.001444 | 0.001775 | 0.001699 |
| has_bit_and_test.test | RUN | 0.230602 | 0.885023 | 1.985880 | 0.001342 | 0.001643 | 0.001719 |
| has_bit_and_assign_test.test | RUN | 0.232243 | 0.909202 | 1.963002 | 0.001545 | 0.001775 | 0.001559 |
| has_binary_classes9_test.test | RUN | 0.250593 | 1.036380 | 2.155874 | 0.001514 | 0.001769 | 0.001426 |
| has_binary_classes8_test.test | RUN | 0.252398 | 1.067587 | 2.142331 | 0.001540 | 0.001595 | 0.001756 |
| has_binary_classes7_test.test | RUN | 0.249463 | 1.041320 | 2.135540 | 0.001293 | 0.001674 | 0.001571 |
| has_binary_classes6_test.test | RUN | 0.251604 | 1.010273 | 2.153414 | 0.001639 | 0.001592 | 0.001425 |
| has_binary_classes5_test.test | RUN | 0.250073 | 1.037588 | 2.159534 | 0.001630 | 0.001747 | 0.001702 |
| has_binary_classes4_test.test | RUN | 0.249219 | 1.047389 | 2.106663 | 0.001536 | 0.001792 | 0.001471 |
| has_binary_classes3_test.test | RUN | 0.251243 | 1.053423 | 2.175597 | 0.001582 | 0.001524 | 0.001642 |
| has_binary_classes2_test.test | RUN | 0.255583 | 1.066563 | 2.170156 | 0.001614 | 0.001557 | 0.001431 |
| has_binary_classes1_test.test | RUN | 0.251388 | 1.047768 | 2.157709 | 0.001502 | 0.001476 | 0.001728 |
| has_binary_classes0_test.test | RUN | 0.253061 | 1.064649 | 2.111193 | 0.001520 | 0.001306 | 0.001676 |
| function_traits_test.test | RUN | 0.114609 | 0.282650 | 0.470833 | 0.001293 | 0.001515 | 0.001698 |
| floating_point_promotion_test.test | RUN | 0.108176 | 0.277396 | 0.439015 | 0.001337 | 0.001609 | 0.001461 |
| extent_test.test | RUN | 0.110782 | 0.283427 | 0.445150 | 0.001642 | 0.001642 | 0.001199 |
| enable_if_test.test | RUN | 0.104998 | 0.243291 | 0.348340 | 0.001669 | 0.001614 | 0.001480 |
| disjunction_test.test | RUN | 0.105140 | 0.238495 | 0.387409 | 0.001446 | 0.001376 | 0.001651 |
| detected_test.test | RUN | 0.099549 | 0.233883 | 0.341790 | 0.001717 | 0.001808 | 0.001349 |
| detected_or_test.test | RUN | 0.101055 | 0.247581 | 0.367531 | 0.001563 | 0.001578 | 0.001638 |
| decay_test.test | RUN | 0.280900 | 0.964919 | 2.260553 | 0.001752 | 0.001695 | 0.001586 |
| cxx14_aliases_test.test | RUN | 0.171435 | 0.366828 | 0.561422 | 0.001542 | 0.001662 | 0.001530 |
| copy_reference_test.test | RUN | 0.106845 | 0.251690 | 0.380004 | 0.001572 | 0.001783 | 0.001659 |
| copy_cv_test.test | RUN | 0.107199 | 0.256414 | 0.398572 | 0.001487 | 0.001685 | 0.001610 |
| copy_cv_ref_test.test | RUN | 0.154617 | 0.441794 | 0.952650 | 0.001578 | 0.001674 | 0.001595 |
| conjunction_test.test | RUN | 0.105348 | 0.257282 | 0.359756 | 0.001562 | 0.001663 | 0.001320 |
| conditional_test.test | RUN | 0.103276 | 0.245812 | 0.346248 | 0.001566 | 0.001578 | 0.001578 |
| common_type_test.test | RUN | 0.143879 | 0.375456 | 0.730326 | 0.001397 | 0.001617 | 0.001554 |
| common_type_sfinae_test.test | RUN | 0.105849 | 0.230278 | 0.350685 | 0.001709 | 0.001584 | 0.001643 |
| common_type_sfinae2_test.test | RUN | 0.104623 | 0.249004 | 0.358520 | 0.001551 | 0.001571 | 0.001688 |
| common_type_6_test.test | RUN | 0.107632 | 0.249425 | 0.371269 | 0.001662 | 0.001567 | 0.001704 |
| common_type_5_test.test | RUN | 0.109244 | 0.250561 | 0.367533 | 0.001467 | 0.001633 | 0.001565 |
| common_type_4_test.test | RUN | 0.117892 | 0.277191 | 0.454032 | 0.001467 | 0.001805 | 0.001379 |
| common_type_3_test.test | RUN | 0.103955 | 0.231848 | 0.341117 | 0.001409 | 0.001346 | 0.001358 |
| common_type_2_test.test | RUN | 0.142935 | 0.378281 | 0.723024 | 0.001605 | 0.001737 | 0.001422 |
| alignment_of_test.test | RUN | 0.111810 | 0.304812 | 0.471810 | 0.001283 | 0.001595 | 0.001637 |
| alignment_of_a2_test.test | RUN | 0.113352 | 0.293192 | 0.462118 | 0.001543 | 0.001586 | 0.001240 |
| aligned_storage_test.test | RUN | 0.118974 | 0.295964 | 0.425909 | 0.001706 | 0.001578 | 0.001666 |
| aligned_storage_empy_test.test | RUN | 0.131004 | 0.335417 | 0.546795 | 0.001440 | 0.001798 | 0.001621 |
| aligned_storage_a2_test.test | RUN | 0.114080 | 0.289258 | 0.422825 | 0.001664 | 0.001976 | 0.001428 |
| add_volatile_test.test | RUN | 0.249809 | 0.864752 | 2.217401 | 0.001743 | 0.001306 | 0.001652 |
| add_rvalue_reference_test.test | RUN | 0.282895 | 0.975941 | 2.500231 | 0.001468 | 0.001525 | 0.001664 |
| add_reference_test.test | RUN | 0.275686 | 0.945410 | 2.453066 | 0.001410 | 0.001766 | 0.001634 |
| add_pointer_test.test | RUN | 0.178036 | 0.539718 | 1.264793 | 0.001554 | 0.001486 | 0.001603 |
| add_lvalue_reference_test.test | RUN | 0.274313 | 0.931047 | 2.473097 | 0.001700 | 0.001698 | 0.001735 |
| add_cv_test.test | RUN | 0.259024 | 0.909197 | 2.298281 | 0.001557 | 0.001362 | 0.001546 |
| add_const_test.test | RUN | 0.258889 | 0.883763 | 2.305555 | 0.001224 | 0.001566 | 0.001631 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.102663 | 0.234568 | 0.337776 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.104138 | 0.238261 | 0.347478 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.098895 | 0.221667 | 0.335149 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.099085 | 0.223346 | 0.321425 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.098975 | 0.223496 | 0.326636 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.098739 | 0.224884 | 0.294951 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.101170 | 0.231299 | 0.332597 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.098825 | 0.222791 | 0.329644 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.098815 | 0.221692 | 0.323268 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.098946 | 0.226264 | 0.328718 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.099498 | 0.226933 | 0.325709 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.100064 | 0.220006 | 0.317334 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.099907 | 0.224004 | 0.331451 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.099003 | 0.224816 | 0.333374 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.099254 | 0.222072 | 0.317533 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.098250 | 0.220946 | 0.329242 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.098905 | 0.225114 | 0.329578 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.099221 | 0.224753 | 0.333427 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.099229 | 0.223196 | 0.329158 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.098930 | 0.224921 | 0.324020 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.099496 | 0.224506 | 0.327131 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.099203 | 0.223917 | 0.326875 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.155461 | 0.487946 | 0.941252 | 0.001700 | 0.001648 | 0.001637 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.149536 | 0.484913 | 0.934023 | 0.001279 | 0.001651 | 0.001433 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.154243 | 0.483603 | 0.937710 | 0.001576 | 0.001712 | 0.001466 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.152959 | 0.474990 | 0.879849 | 0.001138 | 0.001383 | 0.001607 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.097546 | 0.334462 | 0.596243 | 0.001257 | 0.001259 | 0.001248 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998×† | 0.993×, 1.004× | 1.061× |
| clang | 1.027×† | 0.975×, 1.080× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001099s | 0.001048s | 0.000950s | byte equality observed |
| add_cv_test.test | 10 | 0.001069s | 0.001039s | 0.000994s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001086s | 0.001045s | 0.000984s | byte equality observed |
| add_pointer_test.test | 10 | 0.001071s | 0.001052s | 0.001007s | byte equality observed |
| add_reference_test.test | 10 | 0.001082s | 0.001067s | 0.000981s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001063s | 0.001075s | 0.000992s | byte equality observed |
| add_volatile_test.test | 10 | 0.001057s | 0.001023s | 0.001025s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001158s | 0.001160s | 0.001079s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001073s | 0.001050s | 0.001002s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001143s | 0.001159s | 0.001116s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001080s | 0.001066s | 0.001017s | byte equality observed |
| alignment_of_test.test | 10 | 0.001048s | 0.001042s | 0.000971s | byte equality observed |
| common_type_2_test.test | 10 | 0.001088s | 0.001056s | 0.000974s | byte equality observed |
| common_type_3_test.test | 10 | 0.001077s | 0.001050s | 0.001018s | byte equality observed |
| common_type_4_test.test | 10 | 0.001047s | 0.001048s | 0.001047s | byte equality observed |
| common_type_5_test.test | 10 | 0.001080s | 0.001059s | 0.001046s | byte equality observed |
| common_type_6_test.test | 10 | 0.001048s | 0.001059s | 0.001052s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001036s | 0.001050s | 0.001034s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001088s | 0.001062s | 0.001063s | byte equality observed |
| common_type_test.test | 10 | 0.001064s | 0.001066s | 0.001051s | byte equality observed |
| conditional_test.test | 10 | 0.001034s | 0.001045s | 0.001061s | byte equality observed |
| conjunction_test.test | 10 | 0.001055s | 0.001070s | 0.001085s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001078s | 0.001071s | 0.001076s | byte equality observed |
| copy_cv_test.test | 10 | 0.001059s | 0.001051s | 0.001062s | byte equality observed |
| copy_reference_test.test | 10 | 0.001043s | 0.001043s | 0.001075s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001064s | 0.001078s | 0.001082s | byte equality observed |
| decay_test.test | 10 | 0.001054s | 0.001079s | 0.001063s | byte equality observed |
| detected_or_test.test | 10 | 0.001069s | 0.001073s | 0.001061s | byte equality observed |
| detected_test.test | 10 | 0.001063s | 0.001027s | 0.001091s | byte equality observed |
| disjunction_test.test | 10 | 0.001050s | 0.001052s | 0.001048s | byte equality observed |
| enable_if_test.test | 10 | 0.001056s | 0.001081s | 0.001079s | byte equality observed |
| extent_test.test | 10 | 0.001048s | 0.001030s | 0.001038s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001060s | 0.001053s | 0.001062s | byte equality observed |
| function_traits_test.test | 10 | 0.001048s | 0.001016s | 0.001078s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001091s | 0.001049s | 0.001039s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001038s | 0.001067s | 0.001081s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001045s | 0.001043s | 0.001064s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001047s | 0.001067s | 0.001086s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001078s | 0.001028s | 0.001102s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001077s | 0.001055s | 0.001050s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001058s | 0.001087s | 0.001107s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001061s | 0.001072s | 0.001069s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001066s | 0.001062s | 0.001071s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001047s | 0.001062s | 0.001068s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001069s | 0.001064s | 0.001057s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001085s | 0.001076s | 0.001065s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001053s | 0.001076s | 0.001089s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001061s | 0.001056s | 0.001053s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001070s | 0.001046s | 0.001065s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001069s | 0.001078s | 0.001072s | byte equality observed |
| has_complement_test.test | 10 | 0.001049s | 0.001054s | 0.001088s | byte equality observed |
| has_dereference_test.test | 10 | 0.001072s | 0.001083s | 0.001089s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001074s | 0.001058s | 0.001052s | byte equality observed |
| has_divides_test.test | 10 | 0.001035s | 0.001046s | 0.001096s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001084s | 0.001100s | 0.001053s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001061s | 0.001057s | 0.001058s | byte equality observed |
| has_greater_test.test | 10 | 0.001062s | 0.001063s | 0.001058s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001068s | 0.001098s | 0.001049s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001033s | 0.001075s | 0.001075s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001056s | 0.001078s | 0.001083s | byte equality observed |
| has_less_test.test | 10 | 0.001062s | 0.001051s | 0.001043s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001062s | 0.001066s | 0.001080s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001067s | 0.001044s | 0.001084s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001054s | 0.001042s | 0.001069s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001085s | 0.001079s | 0.001043s | byte equality observed |
| has_minus_test.test | 10 | 0.001082s | 0.001085s | 0.001066s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001054s | 0.001056s | 0.001073s | byte equality observed |
| has_modulus_test.test | 10 | 0.001063s | 0.001081s | 0.001085s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001070s | 0.001034s | 0.001067s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001073s | 0.001053s | 0.001072s | byte equality observed |
| has_negate_test.test | 10 | 0.001076s | 0.001087s | 0.001044s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001065s | 0.001048s | 0.001072s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001040s | 0.001036s | 0.001080s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001074s | 0.001061s | 0.001054s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001070s | 0.001073s | 0.001062s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001047s | 0.001030s | 0.001089s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001059s | 0.001062s | 0.001092s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001039s | 0.001063s | 0.001080s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001077s | 0.001063s | 0.001039s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001041s | 0.001087s | 0.001074s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001076s | 0.001063s | 0.001057s | byte equality observed |
| has_plus_test.test | 10 | 0.001058s | 0.001068s | 0.001068s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001049s | 0.001075s | 0.001098s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001069s | 0.001048s | 0.001074s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001055s | 0.001063s | 0.001039s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001059s | 0.001083s | 0.001054s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001062s | 0.001074s | 0.001076s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001057s | 0.001065s | 0.001077s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001050s | 0.001063s | 0.001086s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001081s | 0.001100s | 0.001084s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001066s | 0.001052s | 0.001045s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001061s | 0.001077s | 0.001043s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001056s | 0.001086s | 0.001088s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001060s | 0.001077s | 0.001080s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001040s | 0.001068s | 0.001066s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001073s | 0.001064s | 0.001055s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001112s | 0.001111s | 0.001130s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001079s | 0.001119s | 0.001130s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001107s | 0.001098s | 0.001146s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001041s | 0.001019s | 0.001031s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001075s | 0.000971s | 0.001053s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001059s | 0.000972s | 0.001072s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001041s | 0.000955s | 0.001048s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001083s | 0.000962s | 0.001039s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001075s | 0.000999s | 0.001067s | byte equality observed |
| integral_constant_test.test | 10 | 0.000481s | 0.000466s | 0.001075s | byte equality observed |
| is_abstract_test.test | 10 | 0.001062s | 0.001016s | 0.001056s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001034s | 0.000963s | 0.001056s | byte equality observed |
| is_array_test.test | 10 | 0.001047s | 0.000981s | 0.001057s | byte equality observed |
| is_assignable_test.test | 10 | 0.001030s | 0.000987s | 0.001046s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001065s | 0.000985s | 0.001052s | byte equality observed |
| is_base_of_test.test | 10 | 0.001054s | 0.001025s | 0.001067s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001082s | 0.000973s | 0.001079s | byte equality observed |
| is_class_test.test | 10 | 0.001085s | 0.001033s | 0.001052s | byte equality observed |
| is_complete_test.test | 10 | 0.001115s | 0.001010s | 0.001055s | byte equality observed |
| is_complex_test.test | 10 | 0.001075s | 0.000988s | 0.001099s | byte equality observed |
| is_compound_test.test | 10 | 0.001099s | 0.001041s | 0.001088s | byte equality observed |
| is_const_test.test | 10 | 0.001129s | 0.000963s | 0.001113s | byte equality observed |
| is_constructible_test.test | 10 | 0.001135s | 0.000995s | 0.001102s | byte equality observed |
| is_convertible_test.test | 10 | 0.001124s | 0.001019s | 0.001101s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001115s | 0.001037s | 0.001119s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001125s | 0.001045s | 0.001130s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001137s | 0.001026s | 0.001117s | byte equality observed |
| is_destructible_test.test | 10 | 0.001128s | 0.001060s | 0.001119s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001125s | 0.001057s | 0.001143s | byte equality observed |
| is_detected_test.test | 10 | 0.001115s | 0.001095s | 0.001115s | byte equality observed |
| is_empty_test.test | 10 | 0.001111s | 0.001031s | 0.001129s | byte equality observed |
| is_enum_test.test | 10 | 0.001122s | 0.001047s | 0.001090s | byte equality observed |
| is_final_test.test | 10 | 0.001124s | 0.001056s | 0.001124s | byte equality observed |
| is_float_test.test | 10 | 0.001112s | 0.001064s | 0.001117s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001117s | 0.001056s | 0.001142s | byte equality observed |
| is_function_test.test | 10 | 0.001125s | 0.001057s | 0.001140s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001127s | 0.001104s | 0.001127s | byte equality observed |
| is_integral_test.test | 10 | 0.001135s | 0.001080s | 0.001127s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001143s | 0.001129s | 0.001144s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001120s | 0.001108s | 0.001120s | byte equality observed |
| is_member_func_test.test | 10 | 0.001125s | 0.001102s | 0.001130s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001140s | 0.001134s | 0.001138s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001110s | 0.001121s | 0.001148s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001120s | 0.001147s | 0.001116s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001128s | 0.001108s | 0.001138s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001122s | 0.001139s | 0.001128s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001131s | 0.001105s | 0.001145s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001113s | 0.001126s | 0.001127s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001127s | 0.001133s | 0.001139s | byte equality observed |
| is_object_test.test | 10 | 0.001113s | 0.001112s | 0.001148s | byte equality observed |
| is_pod_test.test | 10 | 0.001124s | 0.001141s | 0.001121s | byte equality observed |
| is_pointer_test.test | 10 | 0.001105s | 0.001108s | 0.001144s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001132s | 0.001119s | 0.001136s | byte equality observed |
| is_reference_test.test | 10 | 0.001142s | 0.001107s | 0.001122s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001130s | 0.001128s | 0.001146s | byte equality observed |
| is_same_test.test | 10 | 0.001131s | 0.001124s | 0.001116s | byte equality observed |
| is_scalar_test.test | 10 | 0.001132s | 0.001128s | 0.001142s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001115s | 0.001126s | 0.001141s | byte equality observed |
| is_signed_test.test | 10 | 0.001139s | 0.001117s | 0.001132s | byte equality observed |
| is_stateless_test.test | 10 | 0.001126s | 0.001111s | 0.001126s | byte equality observed |
| is_swappable_test.test | 10 | 0.001123s | 0.001111s | 0.001131s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001166s | 0.001148s | 0.001179s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001125s | 0.001127s | 0.001127s | byte equality observed |
| is_union_test.test | 10 | 0.001127s | 0.001129s | 0.001131s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001122s | 0.001127s | 0.001157s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001121s | 0.001140s | 0.001149s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001122s | 0.001133s | 0.001150s | byte equality observed |
| is_void_test.test | 10 | 0.001135s | 0.001137s | 0.001144s | byte equality observed |
| is_volatile_test.test | 10 | 0.001126s | 0.001142s | 0.001128s | byte equality observed |
| make_signed_test.test | 10 | 0.001138s | 0.001127s | 0.001134s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001139s | 0.001100s | 0.001133s | byte equality observed |
| make_void_test.test | 10 | 0.001152s | 0.001130s | 0.001130s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000509s | 0.000499s | 0.001138s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000508s | 0.000501s | 0.001138s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000505s | 0.000511s | 0.001147s | byte equality observed |
| negation_test.test | 10 | 0.001177s | 0.001172s | 0.001124s | byte equality observed |
| promote_basic_test.test | 10 | 0.000508s | 0.000500s | 0.001151s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000508s | 0.000509s | 0.001119s | byte equality observed |
| promote_enum_test.test | 10 | 0.000505s | 0.000510s | 0.001147s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000502s | 0.000500s | 0.001133s | byte equality observed |
| rank_test.test | 10 | 0.001127s | 0.001117s | 0.001156s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001149s | 0.001134s | 0.001139s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001132s | 0.001138s | 0.001157s | byte equality observed |
| remove_const_test.test | 10 | 0.001143s | 0.001141s | 0.001134s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001121s | 0.001127s | 0.001154s | byte equality observed |
| remove_cv_test.test | 10 | 0.001136s | 0.001143s | 0.001144s | byte equality observed |
| remove_extent_test.test | 10 | 0.001140s | 0.001147s | 0.001154s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001148s | 0.001126s | 0.001138s | byte equality observed |
| remove_reference_test.test | 10 | 0.001141s | 0.001132s | 0.001144s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001123s | 0.001114s | 0.001144s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001123s | 0.001122s | 0.001131s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001134s | 0.001125s | 0.001154s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001136s | 0.001114s | 0.001128s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001115s | 0.001114s | 0.001140s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001130s | 0.001132s | 0.001147s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001145s | 0.001128s | 0.001121s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001132s | 0.001151s | 0.001140s | byte equality observed |
| type_identity_test.test | 10 | 0.001145s | 0.001123s | 0.001151s | byte equality observed |
| type_traits_test.test | 10 | 0.000495s | 0.000500s | 0.001156s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001272s | 0.001263s | 0.001254s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
