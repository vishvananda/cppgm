# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.132143 | 0.375482 | 0.518437 | 0.001606 | 0.001660 | 0.001448 |
| type_traits_test.test | RUN | 0.179995 | 0.388591 | 0.497344 | 0.000566 | 0.000620 | 0.001475 |
| type_identity_test.test | RUN | 0.342353 | 1.305134 | 2.753041 | 0.001510 | 0.001663 | 0.001624 |
| tricky_rvalue_test.test | RUN | 0.121551 | 0.300167 | 0.391089 | 0.001627 | 0.001442 | 0.001555 |
| tricky_partial_spec_test.test | RUN | 0.145618 | 0.423227 | 0.656651 | 0.001594 | 0.001537 | 0.001486 |
| tricky_is_enum_test.test | RUN | 0.113707 | 0.284000 | 0.360123 | 0.001518 | 0.001625 | 0.001638 |
| tricky_incomplete_type_test.test | RUN | 0.190559 | 0.437388 | 0.582025 | 0.001532 | 0.001558 | 0.001476 |
| tricky_function_type_test.test | RUN | 0.154232 | 0.456111 | 0.690373 | 0.001558 | 0.001515 | 0.001499 |
| tricky_add_pointer_test.test | RUN | 0.229781 | 0.791690 | 1.561648 | 0.001497 | 0.001662 | 0.001628 |
| tricky_abstract_type_test.test | RUN | 0.117860 | 0.281582 | 0.375364 | 0.001707 | 0.001684 | 0.001588 |
| remove_volatile_test.test | RUN | 0.315944 | 1.145200 | 2.442669 | 0.001606 | 0.001732 | 0.001516 |
| remove_reference_test.test | RUN | 0.320746 | 1.228967 | 2.565879 | 0.001477 | 0.001697 | 0.001564 |
| remove_pointer_test.test | RUN | 0.339903 | 1.275198 | 2.704758 | 0.001753 | 0.001560 | 0.001652 |
| remove_extent_test.test | RUN | 0.320216 | 1.212643 | 2.559427 | 0.001565 | 0.001704 | 0.001649 |
| remove_cv_test.test | RUN | 0.314057 | 1.214214 | 2.561064 | 0.001628 | 0.001642 | 0.001578 |
| remove_cv_ref_test.test | RUN | 0.676130 | 2.923048 | 6.377189 | 0.001437 | 0.001691 | 0.001653 |
| remove_const_test.test | RUN | 0.311227 | 1.146029 | 2.447605 | 0.001643 | 0.001752 | 0.001598 |
| remove_bounds_test.test | RUN | 0.324142 | 1.223353 | 2.550651 | 0.001490 | 0.001441 | 0.001610 |
| remove_all_extents_test.test | RUN | 0.324052 | 1.223967 | 2.680858 | 0.001533 | 0.001544 | 0.001390 |
| rank_test.test | RUN | 0.119745 | 0.291390 | 0.371787 | 0.001677 | 0.001534 | 0.001578 |
| promote_mpl_test.test | RUN | 0.104476 | 0.267473 | 0.278628 | 0.000581 | 0.000734 | 0.001538 |
| promote_enum_test.test | RUN | 0.022964 | 0.062978 | 0.063260 | 0.000666 | 0.000656 | 0.001587 |
| promote_enum_msvc_bug_test.test | RUN | 0.020858 | 0.053645 | 0.055249 | 0.000600 | 0.000641 | 0.001614 |
| promote_basic_test.test | RUN | 0.025079 | 0.072849 | 0.067412 | 0.000657 | 0.000614 | 0.001591 |
| negation_test.test | RUN | 0.115294 | 0.272217 | 0.343409 | 0.001493 | 0.001443 | 0.001759 |
| mpl_interop_test3.test | RUN | 0.099110 | 0.264176 | 0.271905 | 0.000584 | 0.000545 | 0.001468 |
| mpl_interop_test2.test | RUN | 0.032584 | 0.072858 | 0.067796 | 0.000649 | 0.000666 | 0.001494 |
| mpl_interop_test1.test | RUN | 0.018657 | 0.050128 | 0.052061 | 0.000592 | 0.000550 | 0.001518 |
| make_void_test.test | RUN | 0.120829 | 0.296849 | 0.401274 | 0.001310 | 0.001653 | 0.001596 |
| make_unsigned_test.test | RUN | 0.141623 | 0.387553 | 0.541414 | 0.001749 | 0.001617 | 0.001530 |
| make_signed_test.test | RUN | 0.140451 | 0.383434 | 0.572252 | 0.001537 | 0.001560 | 0.001568 |
| is_volatile_test.test | RUN | 0.126754 | 0.324379 | 0.451674 | 0.001464 | 0.001425 | 0.001578 |
| is_void_test.test | RUN | 0.122448 | 0.309103 | 0.424185 | 0.001623 | 0.001245 | 0.001442 |
| is_virtual_base_of_test.test | RUN | 0.146614 | 0.393645 | 0.585193 | 0.001388 | 0.001398 | 0.001441 |
| is_unsigned_test.test | RUN | 0.127186 | 0.319211 | 0.423401 | 0.001688 | 0.001523 | 0.001520 |
| is_unscoped_enum_test.test | RUN | 0.123956 | 0.295716 | 0.362935 | 0.001357 | 0.001380 | 0.001610 |
| is_union_test.test | RUN | 0.130072 | 0.365383 | 0.532833 | 0.001535 | 0.001642 | 0.001488 |
| is_unbounded_array_test.test | RUN | 0.119807 | 0.310129 | 0.417410 | 0.001881 | 0.001713 | 0.001347 |
| is_trivially_copyable_test.test | RUN | 0.198018 | 0.637029 | 1.068408 | 0.001495 | 0.001708 | 0.001480 |
| is_swappable_test.test | RUN | 0.159128 | 0.485580 | 0.792790 | 0.001582 | 0.001677 | 0.001556 |
| is_stateless_test.test | RUN | 0.185483 | 0.552078 | 0.881893 | 0.001713 | 0.001570 | 0.001604 |
| is_signed_test.test | RUN | 0.123656 | 0.313808 | 0.446528 | 0.001609 | 0.001520 | 0.001567 |
| is_scoped_enum_test.test | RUN | 0.120875 | 0.289379 | 0.358819 | 0.001762 | 0.001555 | 0.001590 |
| is_scalar_test.test | RUN | 0.158466 | 0.500870 | 0.804733 | 0.001495 | 0.001546 | 0.001566 |
| is_same_test.test | RUN | 0.122543 | 0.307030 | 0.415078 | 0.001694 | 0.001332 | 0.001614 |
| is_rvalue_reference_test.test | RUN | 0.124415 | 0.340231 | 0.490571 | 0.001514 | 0.001546 | 0.001543 |
| is_reference_test.test | RUN | 0.123761 | 0.341905 | 0.483806 | 0.001665 | 0.001522 | 0.001568 |
| is_polymorphic_test.test | RUN | 0.130138 | 0.357990 | 0.480094 | 0.001527 | 0.001520 | 0.001543 |
| is_pointer_test.test | RUN | 0.129589 | 0.348973 | 0.507948 | 0.001587 | 0.001378 | 0.001602 |
| is_pod_test.test | RUN | 0.167968 | 0.568797 | 0.928535 | 0.001499 | 0.001616 | 0.001516 |
| is_object_test.test | RUN | 0.118926 | 0.295449 | 0.382976 | 0.001498 | 0.001634 | 0.001451 |
| is_nothrow_swappable_test.test | RUN | 0.173032 | 0.527523 | 0.845417 | 0.001644 | 0.001667 | 0.001615 |
| is_nothrow_move_constructible_test.test | RUN | 0.165490 | 0.550418 | 0.912873 | 0.001656 | 0.001525 | 0.001425 |
| is_nothrow_move_assignable_test.test | RUN | 0.167754 | 0.555831 | 0.906804 | 0.001416 | 0.001463 | 0.001540 |
| is_noncopyable_test.test | RUN | 0.118860 | 0.297816 | 0.394157 | 0.001383 | 0.001544 | 0.001492 |
| is_member_pointer_test.test | RUN | 0.121152 | 0.309890 | 0.410433 | 0.001572 | 0.001690 | 0.001598 |
| is_member_obj_test.test | RUN | 0.121721 | 0.311968 | 0.424759 | 0.001750 | 0.001394 | 0.001486 |
| is_member_func_test.test | RUN | 0.120717 | 0.329191 | 0.457062 | 0.001551 | 0.001752 | 0.001512 |
| is_lvalue_reference_test.test | RUN | 0.126389 | 0.349982 | 0.491848 | 0.001477 | 0.001581 | 0.001513 |
| is_list_constructible_test.test | RUN | 0.148183 | 0.406485 | 0.540311 | 0.001626 | 0.001575 | 0.001604 |
| is_integral_test.test | RUN | 0.151128 | 0.481024 | 0.749006 | 0.001590 | 0.001542 | 0.001389 |
| is_fundamental_test.test | RUN | 0.153461 | 0.495563 | 0.763931 | 0.001453 | 0.001586 | 0.001384 |
| is_function_test.test | RUN | 0.124068 | 0.329163 | 0.445683 | 0.001462 | 0.001612 | 0.001447 |
| is_floating_point_test.test | RUN | 0.131467 | 0.351495 | 0.489623 | 0.001578 | 0.001554 | 0.001356 |
| is_float_test.test | RUN | 0.130402 | 0.355206 | 0.497668 | 0.001397 | 0.001572 | 0.001319 |
| is_final_test.test | RUN | 0.132711 | 0.355547 | 0.494635 | 0.001596 | 0.001506 | 0.001375 |
| is_enum_test.test | RUN | 0.118427 | 0.304652 | 0.392158 | 0.001132 | 0.001451 | 0.001468 |
| is_empty_test.test | RUN | 0.129570 | 0.323772 | 0.448244 | 0.001592 | 0.001647 | 0.001436 |
| is_detected_test.test | RUN | 0.114908 | 0.281428 | 0.353392 | 0.001504 | 0.001753 | 0.001479 |
| is_detected_exact_test.test | RUN | 0.113594 | 0.285031 | 0.356973 | 0.001422 | 0.001472 | 0.001595 |
| is_destructible_test.test | RUN | 0.165366 | 0.539808 | 0.854911 | 0.001554 | 0.001684 | 0.001479 |
| is_default_constr_test.test | RUN | 0.167119 | 0.578460 | 0.896153 | 0.001602 | 0.001492 | 0.001464 |
| is_copy_constructible_test.test | RUN | 0.170700 | 0.601788 | 0.941538 | 0.001335 | 0.001555 | 0.001571 |
| is_copy_assignable_test.test | RUN | 0.172155 | 0.591821 | 0.933963 | 0.001428 | 0.001472 | 0.001561 |
| is_convertible_test.test | RUN | 0.166846 | 0.526292 | 0.752260 | 0.001410 | 0.001639 | 0.001532 |
| is_constructible_test.test | RUN | 0.135931 | 0.381430 | 0.527218 | 0.001387 | 0.001562 | 0.001426 |
| is_const_test.test | RUN | 0.121781 | 0.327242 | 0.420063 | 0.001437 | 0.001427 | 0.001382 |
| is_compound_test.test | RUN | 0.116423 | 0.281241 | 0.347122 | 0.001571 | 0.001536 | 0.001394 |
| is_complex_test.test | RUN | 0.156613 | 0.377799 | 0.511917 | 0.001646 | 0.001692 | 0.001462 |
| is_complete_test.test | RUN | 0.137196 | 0.384860 | 0.563309 | 0.001568 | 0.001884 | 0.001481 |
| is_class_test.test | RUN | 0.127312 | 0.343447 | 0.502903 | 0.001544 | 0.001878 | 0.001351 |
| is_bounded_array_test.test | RUN | 0.122409 | 0.308635 | 0.433069 | 0.001595 | 0.002410 | 0.001412 |
| is_base_of_test.test | RUN | 0.130725 | 0.359749 | 0.482553 | 0.001402 | 0.001683 | 0.001451 |
| is_base_and_derived_test.test | RUN | 0.123718 | 0.331510 | 0.454767 | 0.001446 | 0.001618 | 0.001546 |
| is_assignable_test.test | RUN | 0.154197 | 0.473031 | 0.730454 | 0.001630 | 0.001515 | 0.001650 |
| is_array_test.test | RUN | 0.120244 | 0.325114 | 0.463632 | 0.001839 | 0.001403 | 0.001545 |
| is_arithmetic_test.test | RUN | 0.153172 | 0.481684 | 0.707882 | 0.001583 | 0.001693 | 0.001664 |
| is_abstract_test.test | RUN | 0.276783 | 1.269941 | 2.647858 | 0.001427 | 0.001623 | 0.001562 |
| integral_constant_test.test | RUN | 0.017804 | 0.052943 | 0.053072 | 0.000743 | 0.000773 | 0.001622 |
| has_virtual_destructor_test.test | RUN | 0.132628 | 0.385676 | 0.571893 | 0.001626 | 0.001678 | 0.001592 |
| has_unary_plus_test.test | RUN | 0.245410 | 1.340992 | 1.996963 | 0.001602 | 0.001571 | 0.001672 |
| has_unary_minus_test.test | RUN | 0.250763 | 1.324140 | 1.952655 | 0.001492 | 0.001638 | 0.001650 |
| has_trivial_move_constructor_test.test | RUN | 0.170510 | 0.552524 | 0.942932 | 0.001591 | 0.001552 | 0.001630 |
| has_trivial_move_assign_test.test | RUN | 0.172299 | 0.571359 | 0.886910 | 0.001549 | 0.001698 | 0.001586 |
| has_trivial_destructor_test.test | RUN | 0.171440 | 0.578871 | 0.931198 | 0.001554 | 0.001522 | 0.001642 |
| has_trivial_copy_test.test | RUN | 0.175450 | 0.608920 | 0.943791 | 0.001699 | 0.001800 | 0.001692 |
| has_trivial_constr_test.test | RUN | 0.177174 | 0.606528 | 0.955740 | 0.001519 | 0.001748 | 0.001687 |
| has_trivial_assign_test.test | RUN | 0.174703 | 0.602153 | 0.945648 | 0.001715 | 0.001844 | 0.001723 |
| has_right_shift_test.test | RUN | 0.271256 | 1.093216 | 2.094289 | 0.001650 | 0.001657 | 0.001624 |
| has_right_shift_assign_test.test | RUN | 0.254528 | 1.047136 | 1.964207 | 0.001460 | 0.001585 | 0.001634 |
| has_prefix_classes3_test.test | RUN | 0.187405 | 0.623210 | 1.036450 | 0.001343 | 0.001586 | 0.001595 |
| has_prefix_classes2_test.test | RUN | 0.185590 | 0.600386 | 1.030365 | 0.001467 | 0.001484 | 0.001714 |
| has_prefix_classes1_test.test | RUN | 0.187168 | 0.621632 | 0.930209 | 0.001455 | 0.001614 | 0.001572 |
| has_prefix_classes0_test.test | RUN | 0.184354 | 0.626789 | 1.004314 | 0.001397 | 0.001498 | 0.001644 |
| has_pre_increment_test.test | RUN | 0.250754 | 1.349155 | 1.945680 | 0.001577 | 0.001440 | 0.001536 |
| has_pre_decrement_test.test | RUN | 0.249446 | 1.335617 | 1.966087 | 0.001419 | 0.001461 | 0.001343 |
| has_postfix_classes3_test.test | RUN | 0.185454 | 0.620773 | 1.038100 | 0.001743 | 0.001631 | 0.001674 |
| has_postfix_classes2_test.test | RUN | 0.187542 | 0.614500 | 0.981442 | 0.001492 | 0.001606 | 0.001645 |
| has_postfix_classes1_test.test | RUN | 0.186766 | 0.619126 | 0.974979 | 0.001482 | 0.001645 | 0.001594 |
| has_postfix_classes0_test.test | RUN | 0.183624 | 0.624931 | 1.016788 | 0.001447 | 0.001692 | 0.001691 |
| has_post_increment_test.test | RUN | 0.251521 | 1.312524 | 1.955325 | 0.001754 | 0.001746 | 0.001567 |
| has_post_decrement_test.test | RUN | 0.252359 | 1.308854 | 1.974904 | 0.001396 | 0.001665 | 0.001390 |
| has_plus_test.test | RUN | 0.253136 | 1.010300 | 1.893831 | 0.001584 | 0.001582 | 0.001623 |
| has_plus_assign_test.test | RUN | 0.260754 | 1.039819 | 1.969681 | 0.001461 | 0.001710 | 0.001415 |
| has_operator_new_test.test | RUN | 0.171597 | 0.541726 | 0.818984 | 0.001640 | 0.001696 | 0.001518 |
| has_nothrow_destructor_test.test | RUN | 0.176584 | 0.594458 | 0.959143 | 0.001388 | 0.001768 | 0.001403 |
| has_nothrow_copy_test.test | RUN | 0.165474 | 0.569226 | 0.888933 | 0.001504 | 0.001692 | 0.001616 |
| has_nothrow_constr_test.test | RUN | 0.165605 | 0.568571 | 0.931556 | 0.001440 | 0.001655 | 0.001611 |
| has_nothrow_assign_test.test | RUN | 0.166714 | 0.567376 | 0.868102 | 0.001551 | 0.001706 | 0.001423 |
| has_not_equal_to_test.test | RUN | 0.255925 | 1.317676 | 1.985154 | 0.001683 | 0.001575 | 0.001684 |
| has_negate_test.test | RUN | 0.244354 | 0.989438 | 1.910477 | 0.001631 | 0.001508 | 0.001649 |
| has_multiplies_test.test | RUN | 0.253624 | 1.050984 | 1.948803 | 0.001466 | 0.001652 | 0.001567 |
| has_multiplies_assign_test.test | RUN | 0.256692 | 1.034028 | 1.914570 | 0.001608 | 0.001766 | 0.001415 |
| has_modulus_test.test | RUN | 0.250785 | 1.030057 | 1.918929 | 0.001656 | 0.001634 | 0.001616 |
| has_modulus_assign_test.test | RUN | 0.252615 | 1.033352 | 1.966911 | 0.001642 | 0.001658 | 0.001578 |
| has_minus_test.test | RUN | 0.259556 | 1.043728 | 1.945199 | 0.001498 | 0.001664 | 0.001566 |
| has_minus_assign_test.test | RUN | 0.267150 | 1.038829 | 1.952428 | 0.001602 | 0.001746 | 0.001515 |
| has_logical_or_test.test | RUN | 0.264283 | 1.047513 | 1.941626 | 0.001458 | 0.001619 | 0.002535 |
| has_logical_not_test.test | RUN | 0.259577 | 1.019115 | 1.974458 | 0.001571 | 0.001545 | 0.001593 |
| has_logical_and_test.test | RUN | 0.264097 | 1.040293 | 2.021996 | 0.001628 | 0.001706 | 0.001438 |
| has_less_test.test | RUN | 0.254410 | 1.276541 | 2.009512 | 0.001583 | 0.001641 | 0.001599 |
| has_less_equal_test.test | RUN | 0.257216 | 1.304668 | 1.974685 | 0.001574 | 0.001677 | 0.001574 |
| has_left_shift_test.test | RUN | 0.279511 | 1.338316 | 2.508373 | 0.001809 | 0.001472 | 0.001556 |
| has_left_shift_assign_test.test | RUN | 0.255682 | 1.047596 | 1.993904 | 0.001531 | 0.001576 | 0.001241 |
| has_greater_test.test | RUN | 0.252887 | 1.302717 | 1.960532 | 0.001551 | 0.001702 | 0.001608 |
| has_greater_equal_test.test | RUN | 0.258636 | 1.322368 | 1.947690 | 0.001668 | 0.001422 | 0.001663 |
| has_equal_to_test.test | RUN | 0.250273 | 1.304590 | 1.957089 | 0.001590 | 0.001908 | 0.001472 |
| has_divides_test.test | RUN | 0.260046 | 1.046555 | 1.982660 | 0.001681 | 0.001517 | 0.001376 |
| has_divides_assign_test.test | RUN | 0.243084 | 1.014848 | 2.003626 | 0.001637 | 0.001676 | 0.001496 |
| has_dereference_test.test | RUN | 0.245652 | 1.029912 | 1.820813 | 0.001611 | 0.001814 | 0.001685 |
| has_complement_test.test | RUN | 0.252547 | 1.302844 | 2.024331 | 0.001533 | 0.001692 | 0.001395 |
| has_bit_xor_test.test | RUN | 0.252553 | 1.047445 | 2.020044 | 0.001582 | 0.001661 | 0.001427 |
| has_bit_xor_assign_test.test | RUN | 0.253413 | 1.027238 | 1.917551 | 0.001530 | 0.001701 | 0.001604 |
| has_bit_or_test.test | RUN | 0.254558 | 1.023139 | 1.911921 | 0.001751 | 0.001657 | 0.001711 |
| has_bit_or_assign_test.test | RUN | 0.251532 | 1.055154 | 2.008374 | 0.001534 | 0.001587 | 0.001284 |
| has_bit_and_test.test | RUN | 0.247992 | 1.039234 | 1.910404 | 0.001576 | 0.001716 | 0.001599 |
| has_bit_and_assign_test.test | RUN | 0.258911 | 1.013406 | 2.003641 | 0.001426 | 0.001730 | 0.001522 |
| has_binary_classes9_test.test | RUN | 0.276109 | 1.223683 | 2.163752 | 0.001644 | 0.001716 | 0.001570 |
| has_binary_classes8_test.test | RUN | 0.279659 | 1.242405 | 2.276326 | 0.001560 | 0.001698 | 0.001383 |
| has_binary_classes7_test.test | RUN | 0.277257 | 1.205014 | 2.253701 | 0.001593 | 0.001527 | 0.001425 |
| has_binary_classes6_test.test | RUN | 0.273766 | 1.179390 | 2.177497 | 0.001578 | 0.001740 | 0.001330 |
| has_binary_classes5_test.test | RUN | 0.272400 | 1.200381 | 2.183990 | 0.001716 | 0.001726 | 0.001677 |
| has_binary_classes4_test.test | RUN | 0.274073 | 1.228634 | 2.275692 | 0.001515 | 0.001706 | 0.001598 |
| has_binary_classes3_test.test | RUN | 0.276692 | 1.249801 | 2.175737 | 0.001588 | 0.001651 | 0.001417 |
| has_binary_classes2_test.test | RUN | 0.275545 | 1.235351 | 2.270526 | 0.001674 | 0.001597 | 0.001405 |
| has_binary_classes1_test.test | RUN | 0.274440 | 1.216438 | 2.166866 | 0.001646 | 0.001834 | 0.001624 |
| has_binary_classes0_test.test | RUN | 0.277329 | 1.243815 | 2.160224 | 0.001451 | 0.001580 | 0.001560 |
| function_traits_test.test | RUN | 0.124666 | 0.326909 | 0.463674 | 0.001599 | 0.001705 | 0.001516 |
| floating_point_promotion_test.test | RUN | 0.125252 | 0.320882 | 0.433802 | 0.001545 | 0.001724 | 0.001377 |
| extent_test.test | RUN | 0.123517 | 0.326514 | 0.469817 | 0.001693 | 0.001906 | 0.001500 |
| enable_if_test.test | RUN | 0.116038 | 0.280535 | 0.333085 | 0.001422 | 0.001607 | 0.001578 |
| disjunction_test.test | RUN | 0.116977 | 0.288380 | 0.360960 | 0.001420 | 0.001584 | 0.001554 |
| detected_test.test | RUN | 0.114910 | 0.274502 | 0.353492 | 0.001584 | 0.001698 | 0.001525 |
| detected_or_test.test | RUN | 0.118216 | 0.290444 | 0.377031 | 0.001632 | 0.001600 | 0.001614 |
| decay_test.test | RUN | 0.302529 | 1.120097 | 2.113581 | 0.001590 | 0.001529 | 0.001535 |
| cxx14_aliases_test.test | RUN | 0.185795 | 0.423429 | 0.576822 | 0.001462 | 0.001474 | 0.001447 |
| copy_reference_test.test | RUN | 0.118306 | 0.288996 | 0.378661 | 0.001521 | 0.001560 | 0.001717 |
| copy_cv_test.test | RUN | 0.123165 | 0.304672 | 0.424278 | 0.001682 | 0.001649 | 0.001583 |
| copy_cv_ref_test.test | RUN | 0.170088 | 0.505120 | 0.875113 | 0.001612 | 0.001720 | 0.001568 |
| conjunction_test.test | RUN | 0.118272 | 0.292611 | 0.382444 | 0.001592 | 0.001748 | 0.001563 |
| conditional_test.test | RUN | 0.118690 | 0.288331 | 0.373300 | 0.001440 | 0.001496 | 0.001531 |
| common_type_test.test | RUN | 0.157365 | 0.433216 | 0.690970 | 0.001538 | 0.001471 | 0.001498 |
| common_type_sfinae_test.test | RUN | 0.116862 | 0.272755 | 0.347787 | 0.001578 | 0.001672 | 0.001512 |
| common_type_sfinae2_test.test | RUN | 0.120029 | 0.289135 | 0.363880 | 0.001585 | 0.001502 | 0.001548 |
| common_type_6_test.test | RUN | 0.121579 | 0.293139 | 0.373123 | 0.001503 | 0.001714 | 0.001595 |
| common_type_5_test.test | RUN | 0.123969 | 0.289537 | 0.382344 | 0.001591 | 0.001711 | 0.001670 |
| common_type_4_test.test | RUN | 0.130402 | 0.320677 | 0.432459 | 0.001603 | 0.001216 | 0.001568 |
| common_type_3_test.test | RUN | 0.114514 | 0.275313 | 0.339923 | 0.001576 | 0.001496 | 0.001432 |
| common_type_2_test.test | RUN | 0.156646 | 0.437454 | 0.704887 | 0.001383 | 0.001722 | 0.001376 |
| alignment_of_test.test | RUN | 0.126530 | 0.355130 | 0.461716 | 0.001484 | 0.001691 | 0.001478 |
| alignment_of_a2_test.test | RUN | 0.125900 | 0.353855 | 0.461024 | 0.001462 | 0.001530 | 0.001461 |
| aligned_storage_test.test | RUN | 0.130696 | 0.343265 | 0.424889 | 0.001577 | 0.001655 | 0.001543 |
| aligned_storage_empy_test.test | RUN | 0.146790 | 0.381565 | 0.575765 | 0.001571 | 0.001675 | 0.001523 |
| aligned_storage_a2_test.test | RUN | 0.131892 | 0.343724 | 0.422105 | 0.001843 | 0.001820 | 0.001720 |
| add_volatile_test.test | RUN | 0.283260 | 0.991722 | 2.022357 | 0.001413 | 0.001525 | 0.001546 |
| add_rvalue_reference_test.test | RUN | 0.315395 | 1.133938 | 2.396936 | 0.001615 | 0.001727 | 0.001624 |
| add_reference_test.test | RUN | 0.310623 | 1.099748 | 2.340748 | 0.001462 | 0.001717 | 0.001584 |
| add_pointer_test.test | RUN | 0.196604 | 0.626870 | 1.222501 | 0.001445 | 0.001538 | 0.001506 |
| add_lvalue_reference_test.test | RUN | 0.305441 | 1.112800 | 2.336876 | 0.001434 | 0.001611 | 0.001354 |
| add_cv_test.test | RUN | 0.289349 | 1.036198 | 2.214718 | 0.001366 | 0.001578 | 0.001345 |
| add_const_test.test | RUN | 0.291050 | 1.044805 | 2.161476 | 0.001514 | 0.001480 | 0.001562 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.110900 | 0.269920 | 0.346898 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.116123 | 0.279435 | 0.356656 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.109753 | 0.259839 | 0.340223 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.109517 | 0.259468 | 0.347439 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.110235 | 0.257935 | 0.332781 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.109068 | 0.261476 | 0.331996 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.111320 | 0.264230 | 0.326668 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.110255 | 0.260558 | 0.332657 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.109820 | 0.258949 | 0.329648 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.110012 | 0.264979 | 0.335328 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.109894 | 0.261762 | 0.330003 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.111370 | 0.259073 | 0.331600 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.110613 | 0.262452 | 0.330342 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.109348 | 0.261107 | 0.327209 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.110041 | 0.265218 | 0.326420 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.110475 | 0.262268 | 0.329289 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.109903 | 0.260731 | 0.329090 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.109252 | 0.264566 | 0.328147 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.109266 | 0.259028 | 0.331637 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.109691 | 0.258919 | 0.335000 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.112270 | 0.260627 | 0.332079 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.110659 | 0.266095 | 0.332699 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.171168 | 0.568799 | 0.957839 | 0.001426 | 0.001570 | 0.001554 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.163158 | 0.567789 | 0.948482 | 0.001540 | 0.001615 | 0.001446 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.170479 | 0.574911 | 0.952163 | 0.001308 | 0.001692 | 0.001099 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.172183 | 0.568091 | 0.918883 | 0.001214 | 0.001225 | 0.001096 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.103044 | 0.372792 | 0.543799 | 0.001169 | 0.001191 | 0.001188 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.991×, 0.998× | 0.999× |
| clang | 1.031× | 1.017×, 1.045× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 9 | 0.001166s | 0.001182s | 0.001171s | byte equality observed |
| add_cv_test.test | 10 | 0.001167s | 0.001141s | 0.001178s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001159s | 0.001168s | 0.001158s | byte equality observed |
| add_pointer_test.test | 10 | 0.001180s | 0.001153s | 0.001135s | byte equality observed |
| add_reference_test.test | 10 | 0.001172s | 0.001142s | 0.001146s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001161s | 0.001134s | 0.001157s | byte equality observed |
| add_volatile_test.test | 10 | 0.001164s | 0.001173s | 0.001146s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001226s | 0.001236s | 0.001270s | byte equality observed |
| aligned_storage_empy_test.test | 9 | 0.001160s | 0.001157s | 0.001140s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001230s | 0.001212s | 0.001217s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001143s | 0.001165s | 0.001174s | byte equality observed |
| alignment_of_test.test | 10 | 0.001159s | 0.001160s | 0.001160s | byte equality observed |
| common_type_2_test.test | 10 | 0.001138s | 0.001161s | 0.001142s | byte equality observed |
| common_type_3_test.test | 10 | 0.001145s | 0.001126s | 0.001159s | byte equality observed |
| common_type_4_test.test | 10 | 0.001166s | 0.001153s | 0.001141s | byte equality observed |
| common_type_5_test.test | 10 | 0.001148s | 0.001143s | 0.001146s | byte equality observed |
| common_type_6_test.test | 10 | 0.001165s | 0.001135s | 0.001138s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001150s | 0.001138s | 0.001158s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001151s | 0.001162s | 0.001130s | byte equality observed |
| common_type_test.test | 10 | 0.001154s | 0.001162s | 0.001162s | byte equality observed |
| conditional_test.test | 10 | 0.001138s | 0.001154s | 0.001137s | byte equality observed |
| conjunction_test.test | 10 | 0.001148s | 0.001138s | 0.001171s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001148s | 0.001128s | 0.001172s | byte equality observed |
| copy_cv_test.test | 10 | 0.001129s | 0.001166s | 0.001150s | byte equality observed |
| copy_reference_test.test | 10 | 0.001156s | 0.001148s | 0.001173s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001150s | 0.001133s | 0.001151s | byte equality observed |
| decay_test.test | 10 | 0.001163s | 0.001121s | 0.001146s | byte equality observed |
| detected_or_test.test | 10 | 0.001158s | 0.001155s | 0.001127s | byte equality observed |
| detected_test.test | 10 | 0.001161s | 0.001124s | 0.001161s | byte equality observed |
| disjunction_test.test | 10 | 0.001145s | 0.001142s | 0.001140s | byte equality observed |
| enable_if_test.test | 10 | 0.001150s | 0.001151s | 0.001150s | byte equality observed |
| extent_test.test | 10 | 0.001127s | 0.001123s | 0.001152s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001157s | 0.001174s | 0.001145s | byte equality observed |
| function_traits_test.test | 10 | 0.001133s | 0.001153s | 0.001144s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001144s | 0.001159s | 0.001147s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001146s | 0.001146s | 0.001158s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001145s | 0.001152s | 0.001139s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001147s | 0.001149s | 0.001147s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001154s | 0.001143s | 0.001161s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001141s | 0.001138s | 0.001145s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001154s | 0.001141s | 0.001165s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001160s | 0.001151s | 0.001158s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001140s | 0.001171s | 0.001136s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001143s | 0.001130s | 0.001154s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001151s | 0.001153s | 0.001148s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001164s | 0.001150s | 0.001139s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001167s | 0.001134s | 0.001173s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001130s | 0.001134s | 0.001180s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001158s | 0.001152s | 0.001134s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001146s | 0.001161s | 0.001153s | byte equality observed |
| has_complement_test.test | 10 | 0.001166s | 0.001140s | 0.001128s | byte equality observed |
| has_dereference_test.test | 10 | 0.001150s | 0.001152s | 0.001165s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001129s | 0.001165s | 0.001160s | byte equality observed |
| has_divides_test.test | 10 | 0.001171s | 0.001137s | 0.001127s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001139s | 0.001166s | 0.001158s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001154s | 0.001156s | 0.001168s | byte equality observed |
| has_greater_test.test | 10 | 0.001157s | 0.001158s | 0.001142s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001149s | 0.001133s | 0.001158s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001165s | 0.001160s | 0.001145s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001128s | 0.001156s | 0.001158s | byte equality observed |
| has_less_test.test | 10 | 0.001164s | 0.001149s | 0.001154s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001155s | 0.001147s | 0.001143s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001146s | 0.001155s | 0.001144s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001142s | 0.001137s | 0.001163s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001131s | 0.001147s | 0.001184s | byte equality observed |
| has_minus_test.test | 10 | 0.001147s | 0.001149s | 0.001143s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001159s | 0.001132s | 0.001143s | byte equality observed |
| has_modulus_test.test | 10 | 0.001142s | 0.001163s | 0.001130s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001150s | 0.001140s | 0.001137s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001149s | 0.001165s | 0.001147s | byte equality observed |
| has_negate_test.test | 10 | 0.001151s | 0.001153s | 0.001141s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001152s | 0.001175s | 0.001123s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001150s | 0.001146s | 0.001168s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001152s | 0.001144s | 0.001117s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001148s | 0.001127s | 0.001139s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001153s | 0.001135s | 0.001160s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001164s | 0.001165s | 0.001121s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001162s | 0.001125s | 0.001137s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001151s | 0.001134s | 0.001146s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001137s | 0.001144s | 0.001144s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001158s | 0.001161s | 0.001135s | byte equality observed |
| has_plus_test.test | 10 | 0.001154s | 0.001139s | 0.001137s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001146s | 0.001144s | 0.001145s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001156s | 0.001159s | 0.001146s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001153s | 0.001141s | 0.001118s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001144s | 0.001148s | 0.001146s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001167s | 0.001160s | 0.001159s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001142s | 0.001154s | 0.001156s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001161s | 0.001150s | 0.001145s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001146s | 0.001142s | 0.001149s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001152s | 0.001162s | 0.001136s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001157s | 0.001145s | 0.001153s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001156s | 0.001174s | 0.001141s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001146s | 0.001129s | 0.001129s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001149s | 0.001164s | 0.001126s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001168s | 0.001170s | 0.001152s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001210s | 0.001211s | 0.001207s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001218s | 0.001188s | 0.001191s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001214s | 0.001205s | 0.001236s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001161s | 0.001171s | 0.001108s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001165s | 0.001175s | 0.001142s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001179s | 0.001166s | 0.001131s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001156s | 0.001146s | 0.001150s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001147s | 0.001141s | 0.001138s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001164s | 0.001161s | 0.001148s | byte equality observed |
| integral_constant_test.test | 9 | 0.000514s | 0.000501s | 0.001125s | byte equality observed |
| is_abstract_test.test | 10 | 0.001153s | 0.001184s | 0.001149s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001137s | 0.001149s | 0.001113s | byte equality observed |
| is_array_test.test | 10 | 0.001161s | 0.001156s | 0.001134s | byte equality observed |
| is_assignable_test.test | 10 | 0.001156s | 0.001143s | 0.001152s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001171s | 0.001114s | 0.001149s | byte equality observed |
| is_base_of_test.test | 10 | 0.001151s | 0.001142s | 0.001133s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001163s | 0.001142s | 0.001147s | byte equality observed |
| is_class_test.test | 10 | 0.001159s | 0.001141s | 0.001174s | byte equality observed |
| is_complete_test.test | 10 | 0.001167s | 0.001136s | 0.001141s | byte equality observed |
| is_complex_test.test | 10 | 0.001158s | 0.001135s | 0.001150s | byte equality observed |
| is_compound_test.test | 10 | 0.001149s | 0.001157s | 0.001160s | byte equality observed |
| is_const_test.test | 10 | 0.001138s | 0.001140s | 0.001163s | byte equality observed |
| is_constructible_test.test | 10 | 0.001165s | 0.001170s | 0.001156s | byte equality observed |
| is_convertible_test.test | 10 | 0.001151s | 0.001168s | 0.001154s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001145s | 0.001151s | 0.001145s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001165s | 0.001169s | 0.001157s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001145s | 0.001144s | 0.001137s | byte equality observed |
| is_destructible_test.test | 10 | 0.001139s | 0.001153s | 0.001123s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001168s | 0.001158s | 0.001162s | byte equality observed |
| is_detected_test.test | 10 | 0.001166s | 0.001128s | 0.001146s | byte equality observed |
| is_empty_test.test | 10 | 0.001149s | 0.001140s | 0.001147s | byte equality observed |
| is_enum_test.test | 10 | 0.001163s | 0.001132s | 0.001144s | byte equality observed |
| is_final_test.test | 10 | 0.001162s | 0.001163s | 0.001140s | byte equality observed |
| is_float_test.test | 10 | 0.001155s | 0.001146s | 0.001149s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001137s | 0.001155s | 0.001130s | byte equality observed |
| is_function_test.test | 10 | 0.001155s | 0.001143s | 0.001143s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001161s | 0.001143s | 0.001129s | byte equality observed |
| is_integral_test.test | 10 | 0.001164s | 0.001167s | 0.001152s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001154s | 0.001149s | 0.001159s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001144s | 0.001147s | 0.001133s | byte equality observed |
| is_member_func_test.test | 10 | 0.001156s | 0.001118s | 0.001143s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001159s | 0.001152s | 0.001128s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001160s | 0.001150s | 0.001144s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001158s | 0.001153s | 0.001168s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001162s | 0.001165s | 0.001143s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001142s | 0.001165s | 0.001160s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001147s | 0.001157s | 0.001161s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001154s | 0.001136s | 0.001145s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001164s | 0.001144s | 0.001157s | byte equality observed |
| is_object_test.test | 10 | 0.001159s | 0.001137s | 0.001130s | byte equality observed |
| is_pod_test.test | 10 | 0.001157s | 0.001154s | 0.001142s | byte equality observed |
| is_pointer_test.test | 10 | 0.001138s | 0.001147s | 0.001140s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001157s | 0.001138s | 0.001147s | byte equality observed |
| is_reference_test.test | 10 | 0.001150s | 0.001133s | 0.001154s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001164s | 0.001151s | 0.001148s | byte equality observed |
| is_same_test.test | 10 | 0.001158s | 0.001148s | 0.001133s | byte equality observed |
| is_scalar_test.test | 10 | 0.001160s | 0.001165s | 0.001143s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001162s | 0.001158s | 0.001150s | byte equality observed |
| is_signed_test.test | 10 | 0.001151s | 0.001163s | 0.001146s | byte equality observed |
| is_stateless_test.test | 10 | 0.001161s | 0.001151s | 0.001171s | byte equality observed |
| is_swappable_test.test | 10 | 0.001156s | 0.001151s | 0.001136s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001169s | 0.001208s | 0.001191s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001157s | 0.001170s | 0.001126s | byte equality observed |
| is_union_test.test | 10 | 0.001160s | 0.001134s | 0.001142s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001148s | 0.001163s | 0.001152s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001160s | 0.001161s | 0.001149s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001144s | 0.001138s | 0.001137s | byte equality observed |
| is_void_test.test | 10 | 0.001143s | 0.001148s | 0.001136s | byte equality observed |
| is_volatile_test.test | 10 | 0.001165s | 0.001136s | 0.001119s | byte equality observed |
| make_signed_test.test | 10 | 0.001161s | 0.001172s | 0.001138s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001156s | 0.001165s | 0.001154s | byte equality observed |
| make_void_test.test | 10 | 0.001154s | 0.001145s | 0.001164s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000498s | 0.000508s | 0.001136s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000507s | 0.000506s | 0.001148s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000507s | 0.000517s | 0.001148s | byte equality observed |
| negation_test.test | 10 | 0.001159s | 0.001177s | 0.001151s | byte equality observed |
| promote_basic_test.test | 10 | 0.000509s | 0.000513s | 0.001155s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000502s | 0.000504s | 0.001130s | byte equality observed |
| promote_enum_test.test | 10 | 0.000504s | 0.000499s | 0.001132s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000504s | 0.000501s | 0.001134s | byte equality observed |
| rank_test.test | 10 | 0.001162s | 0.001168s | 0.001138s | byte equality observed |
| remove_all_extents_test.test | 9 | 0.001171s | 0.001152s | 0.001140s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001172s | 0.001171s | 0.001133s | byte equality observed |
| remove_const_test.test | 10 | 0.001173s | 0.001145s | 0.001129s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001147s | 0.001178s | 0.001143s | byte equality observed |
| remove_cv_test.test | 10 | 0.001170s | 0.001166s | 0.001154s | byte equality observed |
| remove_extent_test.test | 10 | 0.001153s | 0.001164s | 0.001159s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001174s | 0.001155s | 0.001130s | byte equality observed |
| remove_reference_test.test | 10 | 0.001151s | 0.001136s | 0.001152s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001168s | 0.001141s | 0.001139s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001147s | 0.001173s | 0.001151s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001172s | 0.001136s | 0.001129s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001156s | 0.001154s | 0.001160s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001156s | 0.001153s | 0.001142s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001161s | 0.001143s | 0.001141s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001160s | 0.001144s | 0.001141s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001174s | 0.001156s | 0.001146s | byte equality observed |
| type_identity_test.test | 10 | 0.001170s | 0.001159s | 0.001149s | byte equality observed |
| type_traits_test.test | 10 | 0.000510s | 0.000520s | 0.001123s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001253s | 0.001241s | 0.001260s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
