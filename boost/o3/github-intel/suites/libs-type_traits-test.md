# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.131544 | 0.381337 | 0.530206 | 0.001594 | 0.001653 | 0.001648 |
| type_traits_test.test | RUN | 0.181922 | 0.382874 | 0.513117 | 0.000565 | 0.000596 | 0.001518 |
| type_identity_test.test | RUN | 0.349520 | 1.345866 | 2.792350 | 0.001702 | 0.001749 | 0.001643 |
| tricky_rvalue_test.test | RUN | 0.120779 | 0.302040 | 0.404447 | 0.001508 | 0.001701 | 0.001530 |
| tricky_partial_spec_test.test | RUN | 0.145339 | 0.435494 | 0.673703 | 0.001592 | 0.001643 | 0.001518 |
| tricky_is_enum_test.test | RUN | 0.116469 | 0.280560 | 0.370110 | 0.001606 | 0.001672 | 0.001663 |
| tricky_incomplete_type_test.test | RUN | 0.192460 | 0.439076 | 0.596980 | 0.001574 | 0.001512 | 0.001543 |
| tricky_function_type_test.test | RUN | 0.154770 | 0.464844 | 0.725893 | 0.001588 | 0.001620 | 0.001604 |
| tricky_add_pointer_test.test | RUN | 0.235183 | 0.809171 | 1.607768 | 0.001554 | 0.001696 | 0.001692 |
| tricky_abstract_type_test.test | RUN | 0.122401 | 0.286347 | 0.394333 | 0.001610 | 0.001598 | 0.001571 |
| remove_volatile_test.test | RUN | 0.315283 | 1.170436 | 2.461325 | 0.001646 | 0.001549 | 0.001644 |
| remove_reference_test.test | RUN | 0.324889 | 1.231837 | 2.617057 | 0.001524 | 0.001587 | 0.001592 |
| remove_pointer_test.test | RUN | 0.342367 | 1.313139 | 2.765290 | 0.001638 | 0.001704 | 0.001690 |
| remove_extent_test.test | RUN | 0.325017 | 1.276120 | 2.650725 | 0.001653 | 0.001631 | 0.001581 |
| remove_cv_test.test | RUN | 0.323580 | 1.251966 | 2.637649 | 0.001590 | 0.001724 | 0.001602 |
| remove_cv_ref_test.test | RUN | 0.697392 | 3.001995 | 6.347704 | 0.001504 | 0.001641 | 0.001472 |
| remove_const_test.test | RUN | 0.317959 | 1.178963 | 2.482404 | 0.001640 | 0.001709 | 0.001628 |
| remove_bounds_test.test | RUN | 0.334503 | 1.236588 | 2.670244 | 0.001478 | 0.001804 | 0.001690 |
| remove_all_extents_test.test | RUN | 0.326337 | 1.237434 | 2.499861 | 0.001455 | 0.001557 | 0.001462 |
| rank_test.test | RUN | 0.120259 | 0.303634 | 0.412336 | 0.001412 | 0.001572 | 0.001659 |
| promote_mpl_test.test | RUN | 0.106948 | 0.277561 | 0.303414 | 0.000589 | 0.000620 | 0.001507 |
| promote_enum_test.test | RUN | 0.023507 | 0.063972 | 0.070323 | 0.000605 | 0.000749 | 0.001700 |
| promote_enum_msvc_bug_test.test | RUN | 0.020697 | 0.056051 | 0.057571 | 0.000634 | 0.000644 | 0.001648 |
| promote_basic_test.test | RUN | 0.026238 | 0.074865 | 0.073112 | 0.000682 | 0.000699 | 0.001565 |
| negation_test.test | RUN | 0.116088 | 0.285821 | 0.377803 | 0.001515 | 0.001610 | 0.001389 |
| mpl_interop_test3.test | RUN | 0.103419 | 0.262950 | 0.272437 | 0.000560 | 0.000554 | 0.001374 |
| mpl_interop_test2.test | RUN | 0.035278 | 0.071450 | 0.073029 | 0.000663 | 0.000734 | 0.001605 |
| mpl_interop_test1.test | RUN | 0.019354 | 0.052658 | 0.050555 | 0.000624 | 0.000660 | 0.001507 |
| make_void_test.test | RUN | 0.122287 | 0.303074 | 0.427186 | 0.001594 | 0.001516 | 0.001607 |
| make_unsigned_test.test | RUN | 0.142550 | 0.400938 | 0.564994 | 0.001448 | 0.001526 | 0.001546 |
| make_signed_test.test | RUN | 0.141875 | 0.405471 | 0.582559 | 0.001659 | 0.001763 | 0.001527 |
| is_volatile_test.test | RUN | 0.127267 | 0.341214 | 0.472203 | 0.001427 | 0.001504 | 0.001632 |
| is_void_test.test | RUN | 0.121233 | 0.309712 | 0.423933 | 0.001613 | 0.001729 | 0.001518 |
| is_virtual_base_of_test.test | RUN | 0.144853 | 0.406209 | 0.610196 | 0.001373 | 0.001649 | 0.001442 |
| is_unsigned_test.test | RUN | 0.127469 | 0.333301 | 0.465518 | 0.001524 | 0.001411 | 0.001606 |
| is_unscoped_enum_test.test | RUN | 0.124452 | 0.292796 | 0.367730 | 0.001418 | 0.001484 | 0.001615 |
| is_union_test.test | RUN | 0.133400 | 0.370328 | 0.546779 | 0.001502 | 0.001644 | 0.001576 |
| is_unbounded_array_test.test | RUN | 0.122755 | 0.316902 | 0.426516 | 0.001593 | 0.001606 | 0.001546 |
| is_trivially_copyable_test.test | RUN | 0.194771 | 0.648874 | 1.088703 | 0.001444 | 0.001704 | 0.001610 |
| is_swappable_test.test | RUN | 0.161057 | 0.492408 | 0.800315 | 0.001594 | 0.001613 | 0.001696 |
| is_stateless_test.test | RUN | 0.183294 | 0.569800 | 0.925618 | 0.001420 | 0.001541 | 0.001634 |
| is_signed_test.test | RUN | 0.125133 | 0.323968 | 0.440846 | 0.001495 | 0.001578 | 0.001551 |
| is_scoped_enum_test.test | RUN | 0.119938 | 0.297438 | 0.379184 | 0.001766 | 0.001650 | 0.001409 |
| is_scalar_test.test | RUN | 0.159346 | 0.510932 | 0.830240 | 0.001490 | 0.001575 | 0.001482 |
| is_same_test.test | RUN | 0.121060 | 0.315150 | 0.413504 | 0.001599 | 0.001540 | 0.001582 |
| is_rvalue_reference_test.test | RUN | 0.126344 | 0.356917 | 0.474380 | 0.001670 | 0.001604 | 0.001587 |
| is_reference_test.test | RUN | 0.131028 | 0.349467 | 0.505200 | 0.001695 | 0.001669 | 0.001573 |
| is_polymorphic_test.test | RUN | 0.133811 | 0.364001 | 0.539057 | 0.001521 | 0.001564 | 0.001628 |
| is_pointer_test.test | RUN | 0.127817 | 0.358427 | 0.523954 | 0.001472 | 0.001317 | 0.001678 |
| is_pod_test.test | RUN | 0.170868 | 0.576272 | 0.963805 | 0.001472 | 0.001703 | 0.001554 |
| is_object_test.test | RUN | 0.123295 | 0.301373 | 0.395997 | 0.001580 | 0.001713 | 0.001499 |
| is_nothrow_swappable_test.test | RUN | 0.178830 | 0.546349 | 0.897143 | 0.001566 | 0.001632 | 0.001629 |
| is_nothrow_move_constructible_test.test | RUN | 0.169278 | 0.557077 | 0.914400 | 0.001508 | 0.001247 | 0.001435 |
| is_nothrow_move_assignable_test.test | RUN | 0.170363 | 0.562507 | 0.936981 | 0.001570 | 0.001668 | 0.001422 |
| is_noncopyable_test.test | RUN | 0.121916 | 0.305689 | 0.409311 | 0.001496 | 0.001363 | 0.001487 |
| is_member_pointer_test.test | RUN | 0.126899 | 0.313304 | 0.419861 | 0.001503 | 0.001451 | 0.001714 |
| is_member_obj_test.test | RUN | 0.124046 | 0.308094 | 0.435725 | 0.001460 | 0.001468 | 0.001531 |
| is_member_func_test.test | RUN | 0.124354 | 0.336920 | 0.462563 | 0.001061 | 0.001628 | 0.001437 |
| is_lvalue_reference_test.test | RUN | 0.125837 | 0.354550 | 0.494326 | 0.001581 | 0.001632 | 0.001542 |
| is_list_constructible_test.test | RUN | 0.152034 | 0.413741 | 0.549560 | 0.001700 | 0.001568 | 0.001725 |
| is_integral_test.test | RUN | 0.152808 | 0.486784 | 0.796123 | 0.001427 | 0.001496 | 0.001700 |
| is_fundamental_test.test | RUN | 0.156988 | 0.505653 | 0.818250 | 0.001446 | 0.001472 | 0.001460 |
| is_function_test.test | RUN | 0.123699 | 0.332641 | 0.455145 | 0.001570 | 0.001522 | 0.001541 |
| is_floating_point_test.test | RUN | 0.131255 | 0.357822 | 0.498513 | 0.001642 | 0.001652 | 0.001622 |
| is_float_test.test | RUN | 0.130625 | 0.361445 | 0.518193 | 0.001571 | 0.001627 | 0.001420 |
| is_final_test.test | RUN | 0.132414 | 0.364044 | 0.525885 | 0.001541 | 0.001498 | 0.001465 |
| is_enum_test.test | RUN | 0.121801 | 0.307414 | 0.409265 | 0.001435 | 0.001519 | 0.001385 |
| is_empty_test.test | RUN | 0.128981 | 0.335570 | 0.455205 | 0.001672 | 0.001554 | 0.001383 |
| is_detected_test.test | RUN | 0.118683 | 0.286503 | 0.369995 | 0.001667 | 0.001485 | 0.001547 |
| is_detected_exact_test.test | RUN | 0.118157 | 0.288751 | 0.365249 | 0.001564 | 0.001635 | 0.001602 |
| is_destructible_test.test | RUN | 0.166839 | 0.557465 | 0.919256 | 0.001513 | 0.001647 | 0.001500 |
| is_default_constr_test.test | RUN | 0.171753 | 0.575570 | 0.934506 | 0.001598 | 0.001659 | 0.001332 |
| is_copy_constructible_test.test | RUN | 0.178192 | 0.598796 | 1.000402 | 0.001683 | 0.001524 | 0.001564 |
| is_copy_assignable_test.test | RUN | 0.179750 | 0.592607 | 0.990571 | 0.001481 | 0.001543 | 0.001511 |
| is_convertible_test.test | RUN | 0.171319 | 0.529034 | 0.812117 | 0.001498 | 0.001665 | 0.001644 |
| is_constructible_test.test | RUN | 0.143702 | 0.381690 | 0.581259 | 0.001522 | 0.001642 | 0.001583 |
| is_const_test.test | RUN | 0.124887 | 0.338017 | 0.453110 | 0.001569 | 0.001582 | 0.001551 |
| is_compound_test.test | RUN | 0.118355 | 0.298273 | 0.364189 | 0.001695 | 0.001520 | 0.001414 |
| is_complex_test.test | RUN | 0.164187 | 0.378133 | 0.514700 | 0.001549 | 0.001732 | 0.001636 |
| is_complete_test.test | RUN | 0.142295 | 0.393361 | 0.595177 | 0.001530 | 0.001567 | 0.001570 |
| is_class_test.test | RUN | 0.130037 | 0.355809 | 0.500502 | 0.001610 | 0.001513 | 0.001524 |
| is_bounded_array_test.test | RUN | 0.123308 | 0.313929 | 0.413768 | 0.001756 | 0.001434 | 0.001523 |
| is_base_of_test.test | RUN | 0.131310 | 0.347621 | 0.470271 | 0.001512 | 0.001668 | 0.001600 |
| is_base_and_derived_test.test | RUN | 0.128774 | 0.344694 | 0.484428 | 0.001552 | 0.001424 | 0.001578 |
| is_assignable_test.test | RUN | 0.159177 | 0.483149 | 0.737174 | 0.001626 | 0.001579 | 0.001430 |
| is_array_test.test | RUN | 0.127206 | 0.331266 | 0.451116 | 0.001566 | 0.001551 | 0.001597 |
| is_arithmetic_test.test | RUN | 0.151818 | 0.488732 | 0.788338 | 0.001581 | 0.001701 | 0.001628 |
| is_abstract_test.test | RUN | 0.282582 | 1.307827 | 2.727151 | 0.001513 | 0.001680 | 0.001584 |
| integral_constant_test.test | RUN | 0.018318 | 0.054109 | 0.049804 | 0.000689 | 0.000745 | 0.001496 |
| has_virtual_destructor_test.test | RUN | 0.132082 | 0.391954 | 0.568660 | 0.001614 | 0.001729 | 0.001676 |
| has_unary_plus_test.test | RUN | 0.263932 | 1.340409 | 2.022755 | 0.001547 | 0.001675 | 0.001685 |
| has_unary_minus_test.test | RUN | 0.258765 | 1.306838 | 2.013264 | 0.001470 | 0.001699 | 0.001413 |
| has_trivial_move_constructor_test.test | RUN | 0.176012 | 0.583522 | 0.976884 | 0.001534 | 0.001612 | 0.001715 |
| has_trivial_move_assign_test.test | RUN | 0.175091 | 0.563582 | 0.937995 | 0.001600 | 0.001662 | 0.001595 |
| has_trivial_destructor_test.test | RUN | 0.174795 | 0.579943 | 0.938896 | 0.001592 | 0.001681 | 0.001601 |
| has_trivial_copy_test.test | RUN | 0.179792 | 0.616771 | 1.023151 | 0.001502 | 0.001742 | 0.001678 |
| has_trivial_constr_test.test | RUN | 0.183819 | 0.605592 | 1.021460 | 0.001582 | 0.001765 | 0.001421 |
| has_trivial_assign_test.test | RUN | 0.176998 | 0.598557 | 0.991971 | 0.001652 | 0.001773 | 0.001740 |
| has_right_shift_test.test | RUN | 0.277485 | 1.122238 | 2.129560 | 0.001591 | 0.001471 | 0.001643 |
| has_right_shift_assign_test.test | RUN | 0.255399 | 1.059889 | 2.009345 | 0.001384 | 0.001870 | 0.001677 |
| has_prefix_classes3_test.test | RUN | 0.191398 | 0.637496 | 1.042663 | 0.001514 | 0.001683 | 0.001593 |
| has_prefix_classes2_test.test | RUN | 0.192987 | 0.624134 | 1.058846 | 0.001466 | 0.001688 | 0.001563 |
| has_prefix_classes1_test.test | RUN | 0.191030 | 0.627717 | 0.973198 | 0.001677 | 0.001600 | 0.001542 |
| has_prefix_classes0_test.test | RUN | 0.189540 | 0.630934 | 1.006364 | 0.001519 | 0.001473 | 0.001633 |
| has_pre_increment_test.test | RUN | 0.256800 | 1.358673 | 1.998658 | 0.001674 | 0.001449 | 0.001608 |
| has_pre_decrement_test.test | RUN | 0.257417 | 1.346734 | 2.028857 | 0.001504 | 0.001566 | 0.001597 |
| has_postfix_classes3_test.test | RUN | 0.176795 | 0.626987 | 1.059521 | 0.001563 | 0.001741 | 0.001678 |
| has_postfix_classes2_test.test | RUN | 0.177345 | 0.624764 | 1.035810 | 0.001199 | 0.001489 | 0.001590 |
| has_postfix_classes1_test.test | RUN | 0.191848 | 0.649125 | 1.029558 | 0.001552 | 0.001722 | 0.001596 |
| has_postfix_classes0_test.test | RUN | 0.195251 | 0.637600 | 1.010832 | 0.001435 | 0.001757 | 0.001569 |
| has_post_increment_test.test | RUN | 0.255862 | 1.343409 | 2.066925 | 0.001633 | 0.001592 | 0.001250 |
| has_post_decrement_test.test | RUN | 0.258074 | 1.334725 | 2.046845 | 0.001498 | 0.001573 | 0.001628 |
| has_plus_test.test | RUN | 0.257808 | 1.030854 | 2.047520 | 0.001433 | 0.001679 | 0.001701 |
| has_plus_assign_test.test | RUN | 0.265458 | 1.047492 | 2.066115 | 0.001447 | 0.001683 | 0.001451 |
| has_operator_new_test.test | RUN | 0.172766 | 0.565889 | 0.838880 | 0.001625 | 0.001696 | 0.001510 |
| has_nothrow_destructor_test.test | RUN | 0.177258 | 0.602052 | 0.937719 | 0.001440 | 0.001470 | 0.001631 |
| has_nothrow_copy_test.test | RUN | 0.178483 | 0.585958 | 0.950274 | 0.001526 | 0.001670 | 0.001650 |
| has_nothrow_constr_test.test | RUN | 0.169285 | 0.581680 | 0.936084 | 0.001480 | 0.001724 | 0.001616 |
| has_nothrow_assign_test.test | RUN | 0.169259 | 0.563843 | 0.907232 | 0.001509 | 0.001649 | 0.001497 |
| has_not_equal_to_test.test | RUN | 0.261180 | 1.322965 | 2.060191 | 0.001501 | 0.001555 | 0.001562 |
| has_negate_test.test | RUN | 0.249582 | 1.035023 | 1.979860 | 0.001555 | 0.001584 | 0.001717 |
| has_multiplies_test.test | RUN | 0.255817 | 1.035562 | 2.033645 | 0.001548 | 0.001698 | 0.001579 |
| has_multiplies_assign_test.test | RUN | 0.261824 | 1.062693 | 1.977399 | 0.001584 | 0.001618 | 0.001616 |
| has_modulus_test.test | RUN | 0.260451 | 1.054558 | 1.954892 | 0.001550 | 0.001516 | 0.001654 |
| has_modulus_assign_test.test | RUN | 0.260391 | 1.055791 | 2.056804 | 0.001682 | 0.001527 | 0.001656 |
| has_minus_test.test | RUN | 0.269229 | 1.079034 | 2.046919 | 0.001485 | 0.001582 | 0.001585 |
| has_minus_assign_test.test | RUN | 0.264690 | 1.056858 | 2.012578 | 0.001657 | 0.001655 | 0.001532 |
| has_logical_or_test.test | RUN | 0.263851 | 1.059118 | 1.981754 | 0.001494 | 0.001589 | 0.001730 |
| has_logical_not_test.test | RUN | 0.253381 | 1.020299 | 2.005692 | 0.001894 | 0.001552 | 0.001615 |
| has_logical_and_test.test | RUN | 0.271967 | 1.069886 | 2.012107 | 0.001620 | 0.001700 | 0.001631 |
| has_less_test.test | RUN | 0.261127 | 1.295730 | 2.045795 | 0.001472 | 0.001718 | 0.001460 |
| has_less_equal_test.test | RUN | 0.264642 | 1.321245 | 2.005678 | 0.001478 | 0.001476 | 0.001655 |
| has_left_shift_test.test | RUN | 0.292864 | 1.333383 | 2.630033 | 0.001487 | 0.001752 | 0.001647 |
| has_left_shift_assign_test.test | RUN | 0.256552 | 1.043088 | 2.088742 | 0.001484 | 0.001719 | 0.001504 |
| has_greater_test.test | RUN | 0.262476 | 1.305990 | 2.014519 | 0.001626 | 0.001905 | 0.001540 |
| has_greater_equal_test.test | RUN | 0.264835 | 1.334313 | 2.001908 | 0.001594 | 0.001616 | 0.001611 |
| has_equal_to_test.test | RUN | 0.262176 | 1.343291 | 2.082168 | 0.001568 | 0.001587 | 0.001558 |
| has_divides_test.test | RUN | 0.255235 | 1.047581 | 1.984019 | 0.001532 | 0.001619 | 0.001606 |
| has_divides_assign_test.test | RUN | 0.261196 | 1.051948 | 2.037899 | 0.001639 | 0.001714 | 0.001655 |
| has_dereference_test.test | RUN | 0.255820 | 1.048465 | 1.894335 | 0.001598 | 0.001656 | 0.001616 |
| has_complement_test.test | RUN | 0.257186 | 1.339793 | 1.967566 | 0.001579 | 0.001702 | 0.001644 |
| has_bit_xor_test.test | RUN | 0.256178 | 1.050945 | 2.054784 | 0.001483 | 0.001752 | 0.001778 |
| has_bit_xor_assign_test.test | RUN | 0.258243 | 1.040616 | 2.026784 | 0.001630 | 0.001717 | 0.001626 |
| has_bit_or_test.test | RUN | 0.260194 | 1.047061 | 1.964174 | 0.001423 | 0.001634 | 0.001670 |
| has_bit_or_assign_test.test | RUN | 0.261618 | 1.059699 | 1.968029 | 0.001648 | 0.001745 | 0.001592 |
| has_bit_and_test.test | RUN | 0.257259 | 1.042907 | 2.075425 | 0.001610 | 0.001712 | 0.001693 |
| has_bit_and_assign_test.test | RUN | 0.258077 | 1.042992 | 2.034393 | 0.001545 | 0.001696 | 0.001579 |
| has_binary_classes9_test.test | RUN | 0.284620 | 1.252661 | 2.254989 | 0.001503 | 0.001748 | 0.001672 |
| has_binary_classes8_test.test | RUN | 0.277925 | 1.266539 | 2.233721 | 0.001519 | 0.001746 | 0.001626 |
| has_binary_classes7_test.test | RUN | 0.277499 | 1.242528 | 2.311571 | 0.001595 | 0.001608 | 0.001651 |
| has_binary_classes6_test.test | RUN | 0.277870 | 1.183940 | 2.309959 | 0.001534 | 0.001625 | 0.001618 |
| has_binary_classes5_test.test | RUN | 0.279962 | 1.209715 | 2.248012 | 0.001600 | 0.001632 | 0.001646 |
| has_binary_classes4_test.test | RUN | 0.273435 | 1.254801 | 2.222286 | 0.001612 | 0.001684 | 0.001672 |
| has_binary_classes3_test.test | RUN | 0.280263 | 1.273430 | 2.293438 | 0.001568 | 0.001719 | 0.001653 |
| has_binary_classes2_test.test | RUN | 0.284968 | 1.264710 | 2.263864 | 0.001586 | 0.001676 | 0.001616 |
| has_binary_classes1_test.test | RUN | 0.281631 | 1.247792 | 2.259712 | 0.001373 | 0.001717 | 0.001644 |
| has_binary_classes0_test.test | RUN | 0.283518 | 1.262307 | 2.230234 | 0.001599 | 0.001359 | 0.001612 |
| function_traits_test.test | RUN | 0.127736 | 0.340532 | 0.474869 | 0.001523 | 0.001739 | 0.001577 |
| floating_point_promotion_test.test | RUN | 0.128377 | 0.337393 | 0.432908 | 0.001503 | 0.001788 | 0.001552 |
| extent_test.test | RUN | 0.127134 | 0.334147 | 0.470723 | 0.001532 | 0.001733 | 0.001712 |
| enable_if_test.test | RUN | 0.116646 | 0.282758 | 0.364149 | 0.001502 | 0.001608 | 0.001368 |
| disjunction_test.test | RUN | 0.124175 | 0.295007 | 0.387936 | 0.001612 | 0.001623 | 0.001584 |
| detected_test.test | RUN | 0.118358 | 0.275945 | 0.363989 | 0.001525 | 0.001565 | 0.001538 |
| detected_or_test.test | RUN | 0.120869 | 0.295904 | 0.391611 | 0.001640 | 0.001656 | 0.001570 |
| decay_test.test | RUN | 0.320462 | 1.154263 | 2.250068 | 0.001600 | 0.001940 | 0.001601 |
| cxx14_aliases_test.test | RUN | 0.190158 | 0.432371 | 0.594465 | 0.001636 | 0.001652 | 0.001513 |
| copy_reference_test.test | RUN | 0.120916 | 0.295680 | 0.393286 | 0.001464 | 0.001566 | 0.001556 |
| copy_cv_test.test | RUN | 0.124324 | 0.312545 | 0.430369 | 0.001692 | 0.001545 | 0.001616 |
| copy_cv_ref_test.test | RUN | 0.178073 | 0.509843 | 0.949735 | 0.001458 | 0.001481 | 0.001544 |
| conjunction_test.test | RUN | 0.121338 | 0.298221 | 0.388378 | 0.001605 | 0.001634 | 0.001700 |
| conditional_test.test | RUN | 0.119825 | 0.296076 | 0.374706 | 0.001458 | 0.001758 | 0.001647 |
| common_type_test.test | RUN | 0.164765 | 0.452947 | 0.723849 | 0.001702 | 0.001473 | 0.001599 |
| common_type_sfinae_test.test | RUN | 0.117148 | 0.285406 | 0.363331 | 0.001752 | 0.001638 | 0.001595 |
| common_type_sfinae2_test.test | RUN | 0.120196 | 0.294389 | 0.382426 | 0.001484 | 0.001446 | 0.001584 |
| common_type_6_test.test | RUN | 0.123620 | 0.303756 | 0.388684 | 0.001557 | 0.001604 | 0.001559 |
| common_type_5_test.test | RUN | 0.124864 | 0.292185 | 0.383793 | 0.001620 | 0.001604 | 0.001686 |
| common_type_4_test.test | RUN | 0.132997 | 0.328300 | 0.463156 | 0.001604 | 0.001435 | 0.001508 |
| common_type_3_test.test | RUN | 0.117140 | 0.280864 | 0.340987 | 0.001469 | 0.001527 | 0.001668 |
| common_type_2_test.test | RUN | 0.158498 | 0.436469 | 0.731589 | 0.001552 | 0.001656 | 0.001408 |
| alignment_of_test.test | RUN | 0.132151 | 0.353914 | 0.466657 | 0.001644 | 0.001602 | 0.001644 |
| alignment_of_a2_test.test | RUN | 0.128896 | 0.352789 | 0.482284 | 0.001649 | 0.001556 | 0.001370 |
| aligned_storage_test.test | RUN | 0.133287 | 0.350053 | 0.433007 | 0.001602 | 0.001529 | 0.001513 |
| aligned_storage_empy_test.test | RUN | 0.149417 | 0.387259 | 0.575385 | 0.001623 | 0.001690 | 0.001599 |
| aligned_storage_a2_test.test | RUN | 0.132381 | 0.346400 | 0.440557 | 0.001704 | 0.001830 | 0.001704 |
| add_volatile_test.test | RUN | 0.282200 | 1.009375 | 2.115843 | 0.001653 | 0.001576 | 0.001672 |
| add_rvalue_reference_test.test | RUN | 0.316377 | 1.151704 | 2.361459 | 0.001624 | 0.001477 | 0.001624 |
| add_reference_test.test | RUN | 0.312701 | 1.132218 | 2.439817 | 0.001472 | 0.001638 | 0.001703 |
| add_pointer_test.test | RUN | 0.201910 | 0.644161 | 1.260776 | 0.001400 | 0.001291 | 0.001602 |
| add_lvalue_reference_test.test | RUN | 0.313404 | 1.134644 | 2.379868 | 0.001568 | 0.001741 | 0.001632 |
| add_cv_test.test | RUN | 0.294514 | 1.058270 | 2.289033 | 0.001458 | 0.001528 | 0.001684 |
| add_const_test.test | RUN | 0.294766 | 1.067819 | 2.274241 | 0.001597 | 0.001495 | 0.001646 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.111576 | 0.273986 | 0.356984 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.116707 | 0.282153 | 0.368262 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.106098 | 0.262084 | 0.352367 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.113787 | 0.266536 | 0.330722 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.113213 | 0.272406 | 0.343113 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.112663 | 0.269033 | 0.324258 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.114329 | 0.272911 | 0.342989 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.111468 | 0.266337 | 0.340511 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.113480 | 0.271923 | 0.339701 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.112654 | 0.267763 | 0.340249 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.112948 | 0.269045 | 0.337294 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.113446 | 0.267841 | 0.343413 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.113441 | 0.265971 | 0.336442 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.112254 | 0.264588 | 0.344990 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.112430 | 0.262808 | 0.339110 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.111199 | 0.261739 | 0.336742 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.111189 | 0.269442 | 0.343866 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.113228 | 0.267911 | 0.348743 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.110820 | 0.268007 | 0.338189 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.112824 | 0.266805 | 0.337902 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.115423 | 0.266975 | 0.338308 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.112179 | 0.271579 | 0.342711 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.177489 | 0.575761 | 0.977381 | 0.001802 | 0.001688 | 0.001456 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.168925 | 0.576084 | 0.950551 | 0.001521 | 0.001763 | 0.001532 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.173877 | 0.575586 | 0.964150 | 0.001119 | 0.001084 | 0.001567 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.173695 | 0.572523 | 0.941035 | 0.001246 | 0.001211 | 0.001192 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.104853 | 0.428313 | 0.556574 | 0.001196 | 0.001157 | 0.001144 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.995×, 1.001× | 1.001× |
| clang | 1.028× | 1.028×, 1.028× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001216s | 0.001168s | 0.001209s | byte equality observed |
| add_cv_test.test | 10 | 0.001221s | 0.001194s | 0.001214s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001209s | 0.001184s | 0.001215s | byte equality observed |
| add_pointer_test.test | 10 | 0.001203s | 0.001186s | 0.001196s | byte equality observed |
| add_reference_test.test | 10 | 0.001194s | 0.001211s | 0.001196s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001184s | 0.001184s | 0.001193s | byte equality observed |
| add_volatile_test.test | 10 | 0.001182s | 0.001188s | 0.001206s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001264s | 0.001277s | 0.001280s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001197s | 0.001200s | 0.001203s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001294s | 0.001249s | 0.001287s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001185s | 0.001208s | 0.001204s | byte equality observed |
| alignment_of_test.test | 10 | 0.001186s | 0.001198s | 0.001207s | byte equality observed |
| common_type_2_test.test | 10 | 0.001172s | 0.001172s | 0.001185s | byte equality observed |
| common_type_3_test.test | 10 | 0.001173s | 0.001182s | 0.001210s | byte equality observed |
| common_type_4_test.test | 10 | 0.001191s | 0.001178s | 0.001195s | byte equality observed |
| common_type_5_test.test | 10 | 0.001187s | 0.001179s | 0.001196s | byte equality observed |
| common_type_6_test.test | 10 | 0.001181s | 0.001189s | 0.001191s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001188s | 0.001193s | 0.001177s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001181s | 0.001197s | 0.001185s | byte equality observed |
| common_type_test.test | 10 | 0.001189s | 0.001176s | 0.001173s | byte equality observed |
| conditional_test.test | 10 | 0.001189s | 0.001179s | 0.001175s | byte equality observed |
| conjunction_test.test | 10 | 0.001172s | 0.001166s | 0.001175s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001187s | 0.001194s | 0.001199s | byte equality observed |
| copy_cv_test.test | 10 | 0.001186s | 0.001176s | 0.001155s | byte equality observed |
| copy_reference_test.test | 10 | 0.001190s | 0.001148s | 0.001177s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001192s | 0.001181s | 0.001207s | byte equality observed |
| decay_test.test | 10 | 0.001190s | 0.001177s | 0.001213s | byte equality observed |
| detected_or_test.test | 10 | 0.001174s | 0.001160s | 0.001196s | byte equality observed |
| detected_test.test | 10 | 0.001166s | 0.001179s | 0.001178s | byte equality observed |
| disjunction_test.test | 10 | 0.001157s | 0.001168s | 0.001190s | byte equality observed |
| enable_if_test.test | 10 | 0.001163s | 0.001199s | 0.001209s | byte equality observed |
| extent_test.test | 10 | 0.001179s | 0.001171s | 0.001196s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001178s | 0.001173s | 0.001188s | byte equality observed |
| function_traits_test.test | 10 | 0.001189s | 0.001175s | 0.001184s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001187s | 0.001187s | 0.001200s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001192s | 0.001189s | 0.001177s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001167s | 0.001182s | 0.001189s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001185s | 0.001173s | 0.001201s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001180s | 0.001175s | 0.001158s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001187s | 0.001179s | 0.001184s | byte equality observed |
| has_binary_classes6_test.test | 9 | 0.001187s | 0.001213s | 0.001181s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001175s | 0.001168s | 0.001181s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001192s | 0.001198s | 0.001193s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001178s | 0.001184s | 0.001183s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001183s | 0.001175s | 0.001186s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001169s | 0.001179s | 0.001204s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001191s | 0.001203s | 0.001195s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001195s | 0.001197s | 0.001202s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001196s | 0.001170s | 0.001196s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001174s | 0.001163s | 0.001188s | byte equality observed |
| has_complement_test.test | 10 | 0.001170s | 0.001175s | 0.001190s | byte equality observed |
| has_dereference_test.test | 10 | 0.001194s | 0.001178s | 0.001200s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001197s | 0.001172s | 0.001178s | byte equality observed |
| has_divides_test.test | 10 | 0.001184s | 0.001168s | 0.001184s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001181s | 0.001174s | 0.001196s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001183s | 0.001179s | 0.001213s | byte equality observed |
| has_greater_test.test | 10 | 0.001183s | 0.001193s | 0.001167s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001175s | 0.001194s | 0.001188s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001182s | 0.001210s | 0.001212s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001182s | 0.001175s | 0.001173s | byte equality observed |
| has_less_test.test | 10 | 0.001182s | 0.001204s | 0.001177s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001175s | 0.001196s | 0.001190s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001180s | 0.001174s | 0.001172s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001180s | 0.001186s | 0.001208s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001183s | 0.001185s | 0.001190s | byte equality observed |
| has_minus_test.test | 10 | 0.001188s | 0.001175s | 0.001179s | byte equality observed |
| has_modulus_assign_test.test | 9 | 0.001166s | 0.001168s | 0.001189s | byte equality observed |
| has_modulus_test.test | 10 | 0.001177s | 0.001172s | 0.001212s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001176s | 0.001163s | 0.001175s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001196s | 0.001153s | 0.001194s | byte equality observed |
| has_negate_test.test | 10 | 0.001186s | 0.001180s | 0.001176s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001183s | 0.001197s | 0.001179s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001177s | 0.001161s | 0.001185s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001182s | 0.001174s | 0.001175s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001183s | 0.001178s | 0.001174s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001185s | 0.001200s | 0.001193s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001184s | 0.001172s | 0.001194s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001186s | 0.001160s | 0.001199s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001173s | 0.001167s | 0.001175s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001182s | 0.001184s | 0.001178s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001184s | 0.001163s | 0.001181s | byte equality observed |
| has_plus_test.test | 10 | 0.001195s | 0.001204s | 0.001201s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001177s | 0.001173s | 0.001188s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001178s | 0.001183s | 0.001181s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001174s | 0.001177s | 0.001193s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001185s | 0.001190s | 0.001174s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001189s | 0.001172s | 0.001199s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001173s | 0.001191s | 0.001195s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001171s | 0.001179s | 0.001194s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001176s | 0.001155s | 0.001207s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001194s | 0.001179s | 0.001166s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001176s | 0.001193s | 0.001162s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001177s | 0.001189s | 0.001179s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001185s | 0.001181s | 0.001168s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001174s | 0.001197s | 0.001146s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001178s | 0.001187s | 0.001192s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001241s | 0.001238s | 0.001248s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001210s | 0.001232s | 0.001265s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001243s | 0.001222s | 0.001258s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001199s | 0.001190s | 0.001199s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001178s | 0.001175s | 0.001182s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001199s | 0.001191s | 0.001194s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001198s | 0.001184s | 0.001189s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001176s | 0.001193s | 0.001178s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001178s | 0.001188s | 0.001217s | byte equality observed |
| integral_constant_test.test | 10 | 0.000517s | 0.000519s | 0.001195s | byte equality observed |
| is_abstract_test.test | 10 | 0.001194s | 0.001196s | 0.001197s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001176s | 0.001169s | 0.001179s | byte equality observed |
| is_array_test.test | 10 | 0.001189s | 0.001183s | 0.001196s | byte equality observed |
| is_assignable_test.test | 10 | 0.001181s | 0.001172s | 0.001190s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001186s | 0.001168s | 0.001197s | byte equality observed |
| is_base_of_test.test | 10 | 0.001179s | 0.001165s | 0.001185s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001183s | 0.001195s | 0.001183s | byte equality observed |
| is_class_test.test | 10 | 0.001191s | 0.001164s | 0.001181s | byte equality observed |
| is_complete_test.test | 10 | 0.001192s | 0.001170s | 0.001196s | byte equality observed |
| is_complex_test.test | 10 | 0.001169s | 0.001192s | 0.001189s | byte equality observed |
| is_compound_test.test | 10 | 0.001201s | 0.001189s | 0.001173s | byte equality observed |
| is_const_test.test | 10 | 0.001198s | 0.001178s | 0.001199s | byte equality observed |
| is_constructible_test.test | 9 | 0.001184s | 0.001179s | 0.001174s | byte equality observed |
| is_convertible_test.test | 10 | 0.001185s | 0.001174s | 0.001195s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001176s | 0.001170s | 0.001175s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001179s | 0.001179s | 0.001172s | byte equality observed |
| is_default_constr_test.test | 9 | 0.001186s | 0.001180s | 0.001193s | byte equality observed |
| is_destructible_test.test | 9 | 0.001174s | 0.001148s | 0.001173s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001187s | 0.001190s | 0.001174s | byte equality observed |
| is_detected_test.test | 10 | 0.001169s | 0.001180s | 0.001189s | byte equality observed |
| is_empty_test.test | 10 | 0.001184s | 0.001173s | 0.001177s | byte equality observed |
| is_enum_test.test | 10 | 0.001178s | 0.001177s | 0.001175s | byte equality observed |
| is_final_test.test | 10 | 0.001183s | 0.001205s | 0.001207s | byte equality observed |
| is_float_test.test | 10 | 0.001173s | 0.001176s | 0.001195s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001183s | 0.001187s | 0.001182s | byte equality observed |
| is_function_test.test | 10 | 0.001199s | 0.001168s | 0.001203s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001187s | 0.001179s | 0.001189s | byte equality observed |
| is_integral_test.test | 10 | 0.001194s | 0.001145s | 0.001193s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001184s | 0.001183s | 0.001180s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001171s | 0.001170s | 0.001181s | byte equality observed |
| is_member_func_test.test | 10 | 0.001170s | 0.001178s | 0.001187s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001188s | 0.001195s | 0.001189s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001188s | 0.001188s | 0.001184s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001195s | 0.001166s | 0.001185s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001190s | 0.001170s | 0.001171s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001185s | 0.001179s | 0.001182s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001184s | 0.001179s | 0.001196s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001184s | 0.001182s | 0.001173s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001200s | 0.001178s | 0.001173s | byte equality observed |
| is_object_test.test | 10 | 0.001177s | 0.001168s | 0.001200s | byte equality observed |
| is_pod_test.test | 10 | 0.001189s | 0.001161s | 0.001184s | byte equality observed |
| is_pointer_test.test | 10 | 0.001176s | 0.001170s | 0.001191s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001197s | 0.001194s | 0.001218s | byte equality observed |
| is_reference_test.test | 10 | 0.001176s | 0.001164s | 0.001197s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001188s | 0.001165s | 0.001191s | byte equality observed |
| is_same_test.test | 10 | 0.001188s | 0.001158s | 0.001197s | byte equality observed |
| is_scalar_test.test | 10 | 0.001185s | 0.001180s | 0.001165s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001201s | 0.001156s | 0.001198s | byte equality observed |
| is_signed_test.test | 10 | 0.001190s | 0.001191s | 0.001189s | byte equality observed |
| is_stateless_test.test | 10 | 0.001187s | 0.001182s | 0.001182s | byte equality observed |
| is_swappable_test.test | 10 | 0.001190s | 0.001159s | 0.001176s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001213s | 0.001219s | 0.001227s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001185s | 0.001211s | 0.001204s | byte equality observed |
| is_union_test.test | 10 | 0.001176s | 0.001170s | 0.001199s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001182s | 0.001173s | 0.001194s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001172s | 0.001179s | 0.001206s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001193s | 0.001171s | 0.001206s | byte equality observed |
| is_void_test.test | 10 | 0.001175s | 0.001182s | 0.001197s | byte equality observed |
| is_volatile_test.test | 10 | 0.001175s | 0.001207s | 0.001206s | byte equality observed |
| make_signed_test.test | 10 | 0.001178s | 0.001185s | 0.001205s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001195s | 0.001162s | 0.001176s | byte equality observed |
| make_void_test.test | 10 | 0.001198s | 0.001175s | 0.001182s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000513s | 0.000519s | 0.001195s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000512s | 0.000512s | 0.001181s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000515s | 0.000517s | 0.001166s | byte equality observed |
| negation_test.test | 10 | 0.001195s | 0.001162s | 0.001189s | byte equality observed |
| promote_basic_test.test | 10 | 0.000517s | 0.000519s | 0.001163s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000518s | 0.000515s | 0.001195s | byte equality observed |
| promote_enum_test.test | 10 | 0.000514s | 0.000510s | 0.001172s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000516s | 0.000507s | 0.001195s | byte equality observed |
| rank_test.test | 10 | 0.001196s | 0.001198s | 0.001191s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001176s | 0.001190s | 0.001170s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001194s | 0.001172s | 0.001202s | byte equality observed |
| remove_const_test.test | 10 | 0.001192s | 0.001183s | 0.001205s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001198s | 0.001200s | 0.001183s | byte equality observed |
| remove_cv_test.test | 10 | 0.001179s | 0.001155s | 0.001188s | byte equality observed |
| remove_extent_test.test | 10 | 0.001183s | 0.001167s | 0.001193s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001186s | 0.001167s | 0.001165s | byte equality observed |
| remove_reference_test.test | 10 | 0.001187s | 0.001152s | 0.001178s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001190s | 0.001171s | 0.001193s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001180s | 0.001177s | 0.001184s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001184s | 0.001164s | 0.001199s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001186s | 0.001175s | 0.001180s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001188s | 0.001188s | 0.001159s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001182s | 0.001169s | 0.001186s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001187s | 0.001169s | 0.001182s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001176s | 0.001147s | 0.001173s | byte equality observed |
| type_identity_test.test | 10 | 0.001201s | 0.001163s | 0.001203s | byte equality observed |
| type_traits_test.test | 10 | 0.000520s | 0.000512s | 0.001198s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001281s | 0.001272s | 0.001289s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
