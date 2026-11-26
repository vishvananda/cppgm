# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.132353 | 0.364538 | 0.514346 | 0.001672 | 0.001605 | 0.001524 |
| type_traits_test.test | RUN | 0.182049 | 0.386555 | 0.492641 | 0.000531 | 0.000611 | 0.001309 |
| type_identity_test.test | RUN | 0.349799 | 1.309678 | 2.691913 | 0.001250 | 0.001530 | 0.001548 |
| tricky_rvalue_test.test | RUN | 0.122185 | 0.294364 | 0.396890 | 0.001592 | 0.001520 | 0.001439 |
| tricky_partial_spec_test.test | RUN | 0.151788 | 0.418257 | 0.633017 | 0.001852 | 0.001671 | 0.001420 |
| tricky_is_enum_test.test | RUN | 0.117059 | 0.278083 | 0.365382 | 0.001592 | 0.001499 | 0.001576 |
| tricky_incomplete_type_test.test | RUN | 0.189178 | 0.433305 | 0.600109 | 0.001456 | 0.001396 | 0.001441 |
| tricky_function_type_test.test | RUN | 0.156891 | 0.442511 | 0.705012 | 0.001668 | 0.001563 | 0.001556 |
| tricky_add_pointer_test.test | RUN | 0.230854 | 0.787486 | 1.576290 | 0.001424 | 0.001618 | 0.001517 |
| tricky_abstract_type_test.test | RUN | 0.123270 | 0.290637 | 0.373193 | 0.001660 | 0.001524 | 0.001577 |
| remove_volatile_test.test | RUN | 0.309330 | 1.142981 | 2.443709 | 0.001680 | 0.001661 | 0.001550 |
| remove_reference_test.test | RUN | 0.324187 | 1.211557 | 2.537580 | 0.001736 | 0.001642 | 0.001551 |
| remove_pointer_test.test | RUN | 0.339551 | 1.270702 | 2.712796 | 0.001918 | 0.001601 | 0.001417 |
| remove_extent_test.test | RUN | 0.326552 | 1.222209 | 2.584348 | 0.001600 | 0.001616 | 0.001513 |
| remove_cv_test.test | RUN | 0.319065 | 1.209988 | 2.562092 | 0.001704 | 0.001884 | 0.001498 |
| remove_cv_ref_test.test | RUN | 0.679859 | 2.979150 | 6.409712 | 0.001499 | 0.001623 | 0.001514 |
| remove_const_test.test | RUN | 0.321345 | 1.155441 | 2.426552 | 0.001671 | 0.001637 | 0.001516 |
| remove_bounds_test.test | RUN | 0.329510 | 1.243253 | 2.558377 | 0.001688 | 0.001658 | 0.001544 |
| remove_all_extents_test.test | RUN | 0.323563 | 1.235492 | 2.604353 | 0.001401 | 0.001656 | 0.001368 |
| rank_test.test | RUN | 0.119802 | 0.301154 | 0.369733 | 0.001454 | 0.003343 | 0.001489 |
| promote_mpl_test.test | RUN | 0.103587 | 0.287586 | 0.280392 | 0.000598 | 0.000711 | 0.001271 |
| promote_enum_test.test | RUN | 0.022947 | 0.066228 | 0.064789 | 0.000485 | 0.000723 | 0.001548 |
| promote_enum_msvc_bug_test.test | RUN | 0.020405 | 0.055071 | 0.054983 | 0.000598 | 0.000625 | 0.001569 |
| promote_basic_test.test | RUN | 0.026248 | 0.073633 | 0.066934 | 0.000582 | 0.000728 | 0.001384 |
| negation_test.test | RUN | 0.113900 | 0.286726 | 0.339822 | 0.001410 | 0.001462 | 0.001495 |
| mpl_interop_test3.test | RUN | 0.098367 | 0.253644 | 0.269699 | 0.000575 | 0.000591 | 0.001490 |
| mpl_interop_test2.test | RUN | 0.034218 | 0.071012 | 0.070035 | 0.000627 | 0.000582 | 0.001328 |
| mpl_interop_test1.test | RUN | 0.018492 | 0.050818 | 0.049200 | 0.000706 | 0.000741 | 0.001372 |
| make_void_test.test | RUN | 0.114455 | 0.298523 | 0.399695 | 0.001510 | 0.001524 | 0.001538 |
| make_unsigned_test.test | RUN | 0.142912 | 0.399287 | 0.538897 | 0.001612 | 0.001539 | 0.001563 |
| make_signed_test.test | RUN | 0.144599 | 0.391874 | 0.572380 | 0.001582 | 0.001569 | 0.001484 |
| is_volatile_test.test | RUN | 0.122096 | 0.334617 | 0.461825 | 0.001435 | 0.001558 | 0.001418 |
| is_void_test.test | RUN | 0.123115 | 0.310334 | 0.409289 | 0.001574 | 0.001742 | 0.001550 |
| is_virtual_base_of_test.test | RUN | 0.143487 | 0.402029 | 0.591091 | 0.001672 | 0.001373 | 0.001680 |
| is_unsigned_test.test | RUN | 0.126699 | 0.322082 | 0.442796 | 0.001454 | 0.001575 | 0.001340 |
| is_unscoped_enum_test.test | RUN | 0.120446 | 0.300635 | 0.358338 | 0.001359 | 0.001529 | 0.001434 |
| is_union_test.test | RUN | 0.134322 | 0.366159 | 0.510921 | 0.002775 | 0.001712 | 0.001462 |
| is_unbounded_array_test.test | RUN | 0.126755 | 0.316441 | 0.419852 | 0.001644 | 0.001694 | 0.001582 |
| is_trivially_copyable_test.test | RUN | 0.215000 | 0.649660 | 1.049200 | 0.001711 | 0.001707 | 0.001467 |
| is_swappable_test.test | RUN | 0.190543 | 0.496826 | 0.762924 | 0.001456 | 0.001545 | 0.001416 |
| is_stateless_test.test | RUN | 0.181781 | 0.541435 | 0.879282 | 0.001822 | 0.001513 | 0.001508 |
| is_signed_test.test | RUN | 0.126849 | 0.314830 | 0.433920 | 0.001653 | 0.001755 | 0.001316 |
| is_scoped_enum_test.test | RUN | 0.123734 | 0.294246 | 0.355614 | 0.001560 | 0.001740 | 0.001458 |
| is_scalar_test.test | RUN | 0.148525 | 0.511858 | 0.799958 | 0.001422 | 0.001467 | 0.001439 |
| is_same_test.test | RUN | 0.123479 | 0.311356 | 0.423960 | 0.001749 | 0.001548 | 0.001559 |
| is_rvalue_reference_test.test | RUN | 0.128654 | 0.347229 | 0.480891 | 0.001600 | 0.001488 | 0.001339 |
| is_reference_test.test | RUN | 0.130979 | 0.357383 | 0.479356 | 0.001552 | 0.001623 | 0.001429 |
| is_polymorphic_test.test | RUN | 0.132154 | 0.360985 | 0.514164 | 0.001394 | 0.001640 | 0.001455 |
| is_pointer_test.test | RUN | 0.127887 | 0.358813 | 0.498845 | 0.001520 | 0.001332 | 0.001352 |
| is_pod_test.test | RUN | 0.170811 | 0.587386 | 0.948071 | 0.001818 | 0.001744 | 0.001640 |
| is_object_test.test | RUN | 0.117212 | 0.298899 | 0.388629 | 0.001549 | 0.001732 | 0.001210 |
| is_nothrow_swappable_test.test | RUN | 0.174529 | 0.525652 | 0.905445 | 0.001501 | 0.001727 | 0.001525 |
| is_nothrow_move_constructible_test.test | RUN | 0.169715 | 0.559751 | 0.884427 | 0.001580 | 0.001549 | 0.001373 |
| is_nothrow_move_assignable_test.test | RUN | 0.166969 | 0.560935 | 0.884266 | 0.001650 | 0.001557 | 0.001308 |
| is_noncopyable_test.test | RUN | 0.121558 | 0.301232 | 0.403327 | 0.001561 | 0.001458 | 0.001375 |
| is_member_pointer_test.test | RUN | 0.122969 | 0.304309 | 0.404766 | 0.001436 | 0.001571 | 0.001574 |
| is_member_obj_test.test | RUN | 0.123146 | 0.320208 | 0.407039 | 0.001690 | 0.001799 | 0.001554 |
| is_member_func_test.test | RUN | 0.128507 | 0.336385 | 0.460497 | 0.001618 | 0.001533 | 0.001345 |
| is_lvalue_reference_test.test | RUN | 0.131480 | 0.342876 | 0.498315 | 0.001604 | 0.001638 | 0.001354 |
| is_list_constructible_test.test | RUN | 0.149295 | 0.421135 | 0.532923 | 0.001469 | 0.001587 | 0.001577 |
| is_integral_test.test | RUN | 0.151850 | 0.486239 | 0.767756 | 0.001634 | 0.001426 | 0.001648 |
| is_fundamental_test.test | RUN | 0.155697 | 0.493561 | 0.785803 | 0.001816 | 0.001490 | 0.001314 |
| is_function_test.test | RUN | 0.127675 | 0.328819 | 0.429160 | 0.001537 | 0.001372 | 0.001635 |
| is_floating_point_test.test | RUN | 0.129093 | 0.339708 | 0.499508 | 0.001498 | 0.001535 | 0.001574 |
| is_float_test.test | RUN | 0.132122 | 0.353170 | 0.497779 | 0.001646 | 0.001570 | 0.001560 |
| is_final_test.test | RUN | 0.133380 | 0.360764 | 0.512945 | 0.001632 | 0.001517 | 0.001411 |
| is_enum_test.test | RUN | 0.120702 | 0.296401 | 0.399673 | 0.001719 | 0.001410 | 0.001626 |
| is_empty_test.test | RUN | 0.128181 | 0.326981 | 0.448146 | 0.001406 | 0.001190 | 0.001597 |
| is_detected_test.test | RUN | 0.118803 | 0.281737 | 0.361380 | 0.001666 | 0.001703 | 0.001601 |
| is_detected_exact_test.test | RUN | 0.118682 | 0.283480 | 0.359083 | 0.001678 | 0.001500 | 0.001542 |
| is_destructible_test.test | RUN | 0.167180 | 0.545796 | 0.861621 | 0.001701 | 0.001684 | 0.001488 |
| is_default_constr_test.test | RUN | 0.168988 | 0.569721 | 0.919197 | 0.001499 | 0.001504 | 0.001492 |
| is_copy_constructible_test.test | RUN | 0.170799 | 0.601640 | 0.980019 | 0.001615 | 0.001558 | 0.001498 |
| is_copy_assignable_test.test | RUN | 0.177944 | 0.575741 | 0.907324 | 0.001642 | 0.001640 | 0.001488 |
| is_convertible_test.test | RUN | 0.167277 | 0.520316 | 0.776860 | 0.001567 | 0.001676 | 0.001293 |
| is_constructible_test.test | RUN | 0.139407 | 0.385785 | 0.533515 | 0.001463 | 0.001683 | 0.001588 |
| is_const_test.test | RUN | 0.126190 | 0.325486 | 0.448980 | 0.001714 | 0.001458 | 0.001660 |
| is_compound_test.test | RUN | 0.120674 | 0.297182 | 0.356775 | 0.001580 | 0.001432 | 0.001377 |
| is_complex_test.test | RUN | 0.157734 | 0.378932 | 0.513001 | 0.001424 | 0.001692 | 0.001552 |
| is_complete_test.test | RUN | 0.137573 | 0.398088 | 0.579011 | 0.001591 | 0.001410 | 0.001505 |
| is_class_test.test | RUN | 0.125704 | 0.349933 | 0.486394 | 0.001500 | 0.001425 | 0.001514 |
| is_bounded_array_test.test | RUN | 0.119975 | 0.312728 | 0.414026 | 0.001557 | 0.001621 | 0.001377 |
| is_base_of_test.test | RUN | 0.126700 | 0.333946 | 0.490067 | 0.001556 | 0.001705 | 0.001560 |
| is_base_and_derived_test.test | RUN | 0.126253 | 0.334831 | 0.464554 | 0.001446 | 0.001526 | 0.001397 |
| is_assignable_test.test | RUN | 0.150466 | 0.480813 | 0.723948 | 0.001610 | 0.001421 | 0.001511 |
| is_array_test.test | RUN | 0.124959 | 0.326833 | 0.451502 | 0.001514 | 0.001411 | 0.001490 |
| is_arithmetic_test.test | RUN | 0.150040 | 0.488472 | 0.784895 | 0.001469 | 0.001661 | 0.001584 |
| is_abstract_test.test | RUN | 0.279592 | 1.293891 | 2.675756 | 0.001604 | 0.001776 | 0.001624 |
| integral_constant_test.test | RUN | 0.017715 | 0.051274 | 0.049906 | 0.000658 | 0.000684 | 0.001462 |
| has_virtual_destructor_test.test | RUN | 0.134727 | 0.375021 | 0.552335 | 0.001676 | 0.001705 | 0.001558 |
| has_unary_plus_test.test | RUN | 0.254665 | 1.327188 | 1.968053 | 0.001759 | 0.001722 | 0.001611 |
| has_unary_minus_test.test | RUN | 0.254406 | 1.312500 | 1.906594 | 0.001432 | 0.001696 | 0.001627 |
| has_trivial_move_constructor_test.test | RUN | 0.174353 | 0.565982 | 0.938947 | 0.001466 | 0.001517 | 0.001658 |
| has_trivial_move_assign_test.test | RUN | 0.172470 | 0.552752 | 0.909710 | 0.001621 | 0.001745 | 0.001561 |
| has_trivial_destructor_test.test | RUN | 0.170757 | 0.577622 | 0.908960 | 0.001658 | 0.001744 | 0.001681 |
| has_trivial_copy_test.test | RUN | 0.176267 | 0.607382 | 1.000077 | 0.001448 | 0.001773 | 0.001676 |
| has_trivial_constr_test.test | RUN | 0.178225 | 0.600290 | 0.985789 | 0.001606 | 0.001705 | 0.001624 |
| has_trivial_assign_test.test | RUN | 0.175557 | 0.578619 | 0.957831 | 0.001767 | 0.001753 | 0.001712 |
| has_right_shift_test.test | RUN | 0.267990 | 1.116607 | 2.118307 | 0.001412 | 0.001546 | 0.001543 |
| has_right_shift_assign_test.test | RUN | 0.259353 | 1.037788 | 1.956035 | 0.001461 | 0.001759 | 0.001651 |
| has_prefix_classes3_test.test | RUN | 0.188288 | 0.617918 | 1.026062 | 0.001799 | 0.001702 | 0.001577 |
| has_prefix_classes2_test.test | RUN | 0.188882 | 0.615020 | 1.014420 | 0.001686 | 0.001438 | 0.001575 |
| has_prefix_classes1_test.test | RUN | 0.186832 | 0.621080 | 0.979275 | 0.001336 | 0.001555 | 0.001660 |
| has_prefix_classes0_test.test | RUN | 0.184867 | 0.620686 | 0.989325 | 0.001667 | 0.001520 | 0.001612 |
| has_pre_increment_test.test | RUN | 0.254703 | 1.306192 | 1.970438 | 0.001980 | 0.001360 | 0.001397 |
| has_pre_decrement_test.test | RUN | 0.256876 | 1.325289 | 1.952651 | 0.001557 | 0.001522 | 0.001559 |
| has_postfix_classes3_test.test | RUN | 0.186227 | 0.614407 | 1.015864 | 0.001648 | 0.001356 | 0.001584 |
| has_postfix_classes2_test.test | RUN | 0.185730 | 0.595358 | 0.994856 | 0.001603 | 0.001488 | 0.001400 |
| has_postfix_classes1_test.test | RUN | 0.190744 | 0.617718 | 1.011102 | 0.001854 | 0.001565 | 0.001495 |
| has_postfix_classes0_test.test | RUN | 0.194906 | 0.628015 | 0.999530 | 0.001663 | 0.001516 | 0.001581 |
| has_post_increment_test.test | RUN | 0.255753 | 1.288674 | 2.025898 | 0.001601 | 0.001542 | 0.001417 |
| has_post_decrement_test.test | RUN | 0.251908 | 1.302952 | 1.978242 | 0.001277 | 0.001548 | 0.001520 |
| has_plus_test.test | RUN | 0.256058 | 1.009930 | 1.933183 | 0.001615 | 0.001542 | 0.001535 |
| has_plus_assign_test.test | RUN | 0.262567 | 1.021452 | 1.951359 | 0.001695 | 0.001572 | 0.001454 |
| has_operator_new_test.test | RUN | 0.172470 | 0.526999 | 0.848011 | 0.001607 | 0.001625 | 0.001468 |
| has_nothrow_destructor_test.test | RUN | 0.174754 | 0.591949 | 0.926846 | 0.001272 | 0.001688 | 0.001616 |
| has_nothrow_copy_test.test | RUN | 0.173285 | 0.563317 | 0.931012 | 0.001790 | 0.001654 | 0.001436 |
| has_nothrow_constr_test.test | RUN | 0.164974 | 0.559052 | 0.925238 | 0.001620 | 0.001371 | 0.001480 |
| has_nothrow_assign_test.test | RUN | 0.168567 | 0.558299 | 0.912682 | 0.001572 | 0.001614 | 0.001422 |
| has_not_equal_to_test.test | RUN | 0.253142 | 1.269859 | 2.019007 | 0.001611 | 0.001781 | 0.001543 |
| has_negate_test.test | RUN | 0.247211 | 0.999036 | 1.935316 | 0.001894 | 0.001655 | 0.001567 |
| has_multiplies_test.test | RUN | 0.253273 | 1.003032 | 1.931657 | 0.001336 | 0.001414 | 0.001463 |
| has_multiplies_assign_test.test | RUN | 0.260396 | 1.033173 | 1.984552 | 0.001734 | 0.001685 | 0.001382 |
| has_modulus_test.test | RUN | 0.254575 | 1.046147 | 1.940636 | 0.001376 | 0.001448 | 0.001525 |
| has_modulus_assign_test.test | RUN | 0.255761 | 1.027565 | 1.933847 | 0.001545 | 0.001558 | 0.001578 |
| has_minus_test.test | RUN | 0.262769 | 1.044957 | 2.031212 | 0.001524 | 0.001448 | 0.001452 |
| has_minus_assign_test.test | RUN | 0.268797 | 1.034639 | 2.017903 | 0.001653 | 0.001720 | 0.001530 |
| has_logical_or_test.test | RUN | 0.257865 | 1.068929 | 1.947107 | 0.001673 | 0.001754 | 0.002339 |
| has_logical_not_test.test | RUN | 0.247815 | 1.021472 | 1.953777 | 0.001615 | 0.001592 | 0.001377 |
| has_logical_and_test.test | RUN | 0.254799 | 1.089475 | 1.993036 | 0.001607 | 0.001531 | 0.001662 |
| has_less_test.test | RUN | 0.253650 | 1.317391 | 1.966457 | 0.001766 | 0.001732 | 0.001509 |
| has_less_equal_test.test | RUN | 0.257997 | 1.292402 | 1.970877 | 0.001786 | 0.001560 | 0.001657 |
| has_left_shift_test.test | RUN | 0.281968 | 1.325831 | 2.503836 | 0.001536 | 0.001542 | 0.001159 |
| has_left_shift_assign_test.test | RUN | 0.259888 | 1.040639 | 1.979351 | 0.001671 | 0.001726 | 0.001494 |
| has_greater_test.test | RUN | 0.259157 | 1.285773 | 1.962321 | 0.001697 | 0.001725 | 0.001482 |
| has_greater_equal_test.test | RUN | 0.259163 | 1.282090 | 1.961698 | 0.001726 | 0.001620 | 0.001496 |
| has_equal_to_test.test | RUN | 0.264109 | 1.314155 | 1.875929 | 0.001694 | 0.001553 | 0.001571 |
| has_divides_test.test | RUN | 0.255042 | 1.034990 | 2.053067 | 0.001597 | 0.001632 | 0.001534 |
| has_divides_assign_test.test | RUN | 0.256558 | 1.023411 | 1.979328 | 0.001741 | 0.001670 | 0.001523 |
| has_dereference_test.test | RUN | 0.251954 | 1.019024 | 1.850359 | 0.001565 | 0.001760 | 0.001567 |
| has_complement_test.test | RUN | 0.252912 | 1.327202 | 1.979896 | 0.001736 | 0.001681 | 0.001494 |
| has_bit_xor_test.test | RUN | 0.252585 | 1.047736 | 1.951079 | 0.001554 | 0.001766 | 0.001618 |
| has_bit_xor_assign_test.test | RUN | 0.255658 | 1.024246 | 1.940811 | 0.001804 | 0.001674 | 0.001512 |
| has_bit_or_test.test | RUN | 0.253330 | 1.019589 | 1.956479 | 0.001541 | 0.001622 | 0.001517 |
| has_bit_or_assign_test.test | RUN | 0.255512 | 1.048945 | 1.982406 | 0.001770 | 0.001770 | 0.001478 |
| has_bit_and_test.test | RUN | 0.250573 | 1.050252 | 1.943698 | 0.001551 | 0.001592 | 0.001479 |
| has_bit_and_assign_test.test | RUN | 0.255490 | 1.030615 | 1.941963 | 0.001766 | 0.001550 | 0.001528 |
| has_binary_classes9_test.test | RUN | 0.274719 | 1.209076 | 2.217711 | 0.001574 | 0.001644 | 0.001606 |
| has_binary_classes8_test.test | RUN | 0.278383 | 1.238815 | 2.184802 | 0.001616 | 0.001708 | 0.001579 |
| has_binary_classes7_test.test | RUN | 0.277112 | 1.236089 | 2.254743 | 0.001604 | 0.001627 | 0.001617 |
| has_binary_classes6_test.test | RUN | 0.273462 | 1.149158 | 2.245438 | 0.001632 | 0.001556 | 0.001472 |
| has_binary_classes5_test.test | RUN | 0.278389 | 1.191228 | 2.213597 | 0.001510 | 0.001600 | 0.001647 |
| has_binary_classes4_test.test | RUN | 0.288108 | 1.231928 | 2.191459 | 0.001416 | 0.001768 | 0.001772 |
| has_binary_classes3_test.test | RUN | 0.300531 | 1.201194 | 2.242285 | 0.001654 | 0.001606 | 0.001603 |
| has_binary_classes2_test.test | RUN | 0.275395 | 1.252405 | 2.219692 | 0.001528 | 0.001649 | 0.001675 |
| has_binary_classes1_test.test | RUN | 0.278406 | 1.202716 | 2.208981 | 0.001454 | 0.001664 | 0.001557 |
| has_binary_classes0_test.test | RUN | 0.280365 | 1.250309 | 2.151557 | 0.001508 | 0.001592 | 0.001304 |
| function_traits_test.test | RUN | 0.130676 | 0.331210 | 0.457837 | 0.001441 | 0.001633 | 0.001468 |
| floating_point_promotion_test.test | RUN | 0.122711 | 0.328264 | 0.421428 | 0.001524 | 0.001630 | 0.001607 |
| extent_test.test | RUN | 0.123945 | 0.330239 | 0.454499 | 0.001474 | 0.001550 | 0.001534 |
| enable_if_test.test | RUN | 0.115698 | 0.270851 | 0.351818 | 0.001608 | 0.001453 | 0.001403 |
| disjunction_test.test | RUN | 0.118090 | 0.283100 | 0.372156 | 0.001363 | 0.001712 | 0.001417 |
| detected_test.test | RUN | 0.115852 | 0.271010 | 0.329766 | 0.001538 | 0.001588 | 0.001394 |
| detected_or_test.test | RUN | 0.118829 | 0.289405 | 0.371070 | 0.001626 | 0.001456 | 0.001170 |
| decay_test.test | RUN | 0.308296 | 1.122626 | 2.167556 | 0.001466 | 0.001572 | 0.001430 |
| cxx14_aliases_test.test | RUN | 0.193086 | 0.433732 | 0.583320 | 0.001531 | 0.001593 | 0.001507 |
| copy_reference_test.test | RUN | 0.121722 | 0.286431 | 0.380682 | 0.001456 | 0.001487 | 0.001534 |
| copy_cv_test.test | RUN | 0.122703 | 0.301570 | 0.421073 | 0.001628 | 0.001502 | 0.001579 |
| copy_cv_ref_test.test | RUN | 0.168829 | 0.504443 | 0.877923 | 0.001728 | 0.001600 | 0.001520 |
| conjunction_test.test | RUN | 0.119244 | 0.290135 | 0.384226 | 0.001677 | 0.001580 | 0.001496 |
| conditional_test.test | RUN | 0.117464 | 0.287519 | 0.372376 | 0.001263 | 0.001532 | 0.001491 |
| common_type_test.test | RUN | 0.161157 | 0.435432 | 0.731333 | 0.001713 | 0.001454 | 0.001451 |
| common_type_sfinae_test.test | RUN | 0.117310 | 0.278175 | 0.337410 | 0.001668 | 0.001445 | 0.001603 |
| common_type_sfinae2_test.test | RUN | 0.120676 | 0.285098 | 0.369802 | 0.001463 | 0.001468 | 0.001519 |
| common_type_6_test.test | RUN | 0.123047 | 0.294980 | 0.387360 | 0.001353 | 0.001559 | 0.001547 |
| common_type_5_test.test | RUN | 0.126539 | 0.292098 | 0.390748 | 0.001573 | 0.001716 | 0.001520 |
| common_type_4_test.test | RUN | 0.129799 | 0.324119 | 0.446759 | 0.001540 | 0.001417 | 0.001466 |
| common_type_3_test.test | RUN | 0.115822 | 0.266072 | 0.335416 | 0.001666 | 0.001595 | 0.001554 |
| common_type_2_test.test | RUN | 0.159606 | 0.431951 | 0.709269 | 0.001233 | 0.001684 | 0.001408 |
| alignment_of_test.test | RUN | 0.130107 | 0.347427 | 0.460923 | 0.001654 | 0.001737 | 0.001418 |
| alignment_of_a2_test.test | RUN | 0.126740 | 0.348879 | 0.466353 | 0.001595 | 0.001663 | 0.001459 |
| aligned_storage_test.test | RUN | 0.131827 | 0.333742 | 0.420617 | 0.001448 | 0.001602 | 0.001430 |
| aligned_storage_empy_test.test | RUN | 0.153710 | 0.379828 | 0.572349 | 0.001544 | 0.001644 | 0.001391 |
| aligned_storage_a2_test.test | RUN | 0.139293 | 0.335354 | 0.426449 | 0.001754 | 0.001832 | 0.001677 |
| add_volatile_test.test | RUN | 0.285233 | 0.989744 | 2.020473 | 0.001628 | 0.001574 | 0.001528 |
| add_rvalue_reference_test.test | RUN | 0.317742 | 1.142069 | 2.368372 | 0.001565 | 0.001647 | 0.001466 |
| add_reference_test.test | RUN | 0.310401 | 1.109949 | 2.338649 | 0.001570 | 0.001654 | 0.001454 |
| add_pointer_test.test | RUN | 0.197164 | 0.631291 | 1.229473 | 0.001612 | 0.001566 | 0.001343 |
| add_lvalue_reference_test.test | RUN | 0.308168 | 1.106906 | 2.344012 | 0.001549 | 0.001676 | 0.001302 |
| add_cv_test.test | RUN | 0.294036 | 1.032991 | 2.215043 | 0.001449 | 0.001578 | 0.001386 |
| add_const_test.test | RUN | 0.292218 | 1.038465 | 2.141010 | 0.001685 | 0.001405 | 0.001422 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.113311 | 0.266563 | 0.340781 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.119359 | 0.270271 | 0.352451 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.112626 | 0.258944 | 0.337985 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.113075 | 0.259391 | 0.337427 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.113868 | 0.261329 | 0.332776 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.111140 | 0.259662 | 0.327690 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.111751 | 0.263539 | 0.330852 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.111470 | 0.260822 | 0.330578 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.112143 | 0.259590 | 0.333492 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.112027 | 0.259177 | 0.331467 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.113098 | 0.260722 | 0.329437 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.112788 | 0.262610 | 0.330360 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.112695 | 0.261054 | 0.333833 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.110647 | 0.256071 | 0.331583 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.111225 | 0.265381 | 0.328056 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.110506 | 0.259061 | 0.331532 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.113823 | 0.258341 | 0.329121 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.113351 | 0.257005 | 0.345996 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.109905 | 0.265809 | 0.334085 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.110222 | 0.263501 | 0.333252 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.113412 | 0.264015 | 0.336056 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.112652 | 0.259379 | 0.335170 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.172313 | 0.566314 | 0.924856 | 0.001464 | 0.001692 | 0.001479 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.164151 | 0.563831 | 0.905210 | 0.001588 | 0.001688 | 0.001446 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.172497 | 0.567677 | 0.935942 | 0.001112 | 0.001212 | 0.001089 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.173133 | 0.560725 | 0.918313 | 0.001210 | 0.001082 | 0.001064 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.107184 | 0.386206 | 0.554460 | 0.001192 | 0.001170 | 0.001194 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.994×, 1.001× | 1.000× |
| clang | 1.030× | 1.033×, 1.027× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001189s | 0.001173s | 0.001177s | byte equality observed |
| add_cv_test.test | 10 | 0.001171s | 0.001130s | 0.001198s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001177s | 0.001182s | 0.001150s | byte equality observed |
| add_pointer_test.test | 10 | 0.001158s | 0.001150s | 0.001157s | byte equality observed |
| add_reference_test.test | 10 | 0.001172s | 0.001177s | 0.001154s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001170s | 0.001139s | 0.001164s | byte equality observed |
| add_volatile_test.test | 10 | 0.001148s | 0.001184s | 0.001188s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001257s | 0.001228s | 0.001255s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001162s | 0.001147s | 0.001165s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001257s | 0.001246s | 0.001260s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001161s | 0.001142s | 0.001157s | byte equality observed |
| alignment_of_test.test | 10 | 0.001147s | 0.001136s | 0.001166s | byte equality observed |
| common_type_2_test.test | 10 | 0.001152s | 0.001149s | 0.001152s | byte equality observed |
| common_type_3_test.test | 10 | 0.001150s | 0.001144s | 0.001156s | byte equality observed |
| common_type_4_test.test | 10 | 0.001171s | 0.001162s | 0.001150s | byte equality observed |
| common_type_5_test.test | 10 | 0.001139s | 0.001150s | 0.001166s | byte equality observed |
| common_type_6_test.test | 10 | 0.001168s | 0.001164s | 0.001177s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001154s | 0.001156s | 0.001150s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001150s | 0.001158s | 0.001174s | byte equality observed |
| common_type_test.test | 10 | 0.001138s | 0.001138s | 0.001145s | byte equality observed |
| conditional_test.test | 10 | 0.001148s | 0.001158s | 0.001149s | byte equality observed |
| conjunction_test.test | 10 | 0.001142s | 0.001137s | 0.001147s | byte equality observed |
| copy_cv_ref_test.test | 9 | 0.001129s | 0.001159s | 0.001155s | byte equality observed |
| copy_cv_test.test | 10 | 0.001153s | 0.001161s | 0.001152s | byte equality observed |
| copy_reference_test.test | 10 | 0.001155s | 0.001144s | 0.001167s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001161s | 0.001163s | 0.001170s | byte equality observed |
| decay_test.test | 10 | 0.001168s | 0.001171s | 0.001176s | byte equality observed |
| detected_or_test.test | 10 | 0.001142s | 0.001151s | 0.001163s | byte equality observed |
| detected_test.test | 10 | 0.001168s | 0.001136s | 0.001158s | byte equality observed |
| disjunction_test.test | 10 | 0.001154s | 0.001135s | 0.001141s | byte equality observed |
| enable_if_test.test | 10 | 0.001155s | 0.001157s | 0.001150s | byte equality observed |
| extent_test.test | 10 | 0.001148s | 0.001166s | 0.001149s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001146s | 0.001164s | 0.001167s | byte equality observed |
| function_traits_test.test | 10 | 0.001139s | 0.001147s | 0.001164s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001155s | 0.001172s | 0.001161s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001157s | 0.001160s | 0.001172s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001163s | 0.001125s | 0.001159s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001149s | 0.001161s | 0.001160s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001149s | 0.001157s | 0.001170s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001161s | 0.001142s | 0.001140s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001157s | 0.001138s | 0.001134s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001139s | 0.001137s | 0.001151s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001156s | 0.001168s | 0.001179s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001161s | 0.001157s | 0.001157s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001148s | 0.001165s | 0.001161s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001144s | 0.001155s | 0.001148s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001142s | 0.001136s | 0.001151s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001156s | 0.001137s | 0.001145s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001142s | 0.001141s | 0.001141s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001151s | 0.001141s | 0.001152s | byte equality observed |
| has_complement_test.test | 10 | 0.001149s | 0.001130s | 0.001171s | byte equality observed |
| has_dereference_test.test | 10 | 0.001138s | 0.001144s | 0.001143s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001131s | 0.001135s | 0.001142s | byte equality observed |
| has_divides_test.test | 10 | 0.001157s | 0.001150s | 0.001173s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001154s | 0.001167s | 0.001145s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001161s | 0.001177s | 0.001140s | byte equality observed |
| has_greater_test.test | 10 | 0.001152s | 0.001140s | 0.001163s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001137s | 0.001142s | 0.001160s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001151s | 0.001130s | 0.001154s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001129s | 0.001157s | 0.001168s | byte equality observed |
| has_less_test.test | 10 | 0.001159s | 0.001162s | 0.001148s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001141s | 0.001151s | 0.001147s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001162s | 0.001154s | 0.001143s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001134s | 0.001163s | 0.001149s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001140s | 0.001164s | 0.001155s | byte equality observed |
| has_minus_test.test | 10 | 0.001167s | 0.001140s | 0.001150s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001149s | 0.001150s | 0.001177s | byte equality observed |
| has_modulus_test.test | 10 | 0.001170s | 0.001153s | 0.001174s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001163s | 0.001137s | 0.001159s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001160s | 0.001136s | 0.001162s | byte equality observed |
| has_negate_test.test | 10 | 0.001145s | 0.001135s | 0.001166s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001168s | 0.001155s | 0.001163s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001145s | 0.001183s | 0.001139s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001172s | 0.001145s | 0.001154s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001141s | 0.001141s | 0.001166s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001162s | 0.001139s | 0.001162s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001148s | 0.001158s | 0.001145s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001164s | 0.001138s | 0.001171s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001158s | 0.001144s | 0.001159s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001144s | 0.001132s | 0.001134s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001144s | 0.001151s | 0.001149s | byte equality observed |
| has_plus_test.test | 10 | 0.001162s | 0.001159s | 0.001151s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001138s | 0.001165s | 0.001142s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001150s | 0.001135s | 0.001166s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001155s | 0.001172s | 0.001146s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001139s | 0.001144s | 0.001135s | byte equality observed |
| has_postfix_classes2_test.test | 9 | 0.001144s | 0.001145s | 0.001160s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001142s | 0.001152s | 0.001157s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001149s | 0.001150s | 0.001148s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001135s | 0.001154s | 0.001166s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001163s | 0.001148s | 0.001164s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001146s | 0.001160s | 0.001147s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001152s | 0.001155s | 0.001152s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001157s | 0.001173s | 0.001160s | byte equality observed |
| has_right_shift_assign_test.test | 8 | 0.001159s | 0.001143s | 0.001157s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001162s | 0.001183s | 0.001166s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001235s | 0.001183s | 0.001218s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001195s | 0.001234s | 0.001242s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001214s | 0.001225s | 0.001257s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001169s | 0.001140s | 0.001187s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001160s | 0.001167s | 0.001173s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001144s | 0.001161s | 0.001180s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001161s | 0.001140s | 0.001140s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001147s | 0.001173s | 0.001155s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001132s | 0.001162s | 0.001163s | byte equality observed |
| integral_constant_test.test | 10 | 0.000504s | 0.000511s | 0.001168s | byte equality observed |
| is_abstract_test.test | 10 | 0.001151s | 0.001130s | 0.001142s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001152s | 0.001160s | 0.001150s | byte equality observed |
| is_array_test.test | 10 | 0.001158s | 0.001136s | 0.001164s | byte equality observed |
| is_assignable_test.test | 10 | 0.001152s | 0.001147s | 0.001163s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001153s | 0.001146s | 0.001168s | byte equality observed |
| is_base_of_test.test | 10 | 0.001154s | 0.001140s | 0.001152s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001141s | 0.001153s | 0.001156s | byte equality observed |
| is_class_test.test | 10 | 0.001143s | 0.001155s | 0.001137s | byte equality observed |
| is_complete_test.test | 10 | 0.001148s | 0.001125s | 0.001153s | byte equality observed |
| is_complex_test.test | 10 | 0.001140s | 0.001157s | 0.001149s | byte equality observed |
| is_compound_test.test | 10 | 0.001161s | 0.001141s | 0.001158s | byte equality observed |
| is_const_test.test | 10 | 0.001150s | 0.001138s | 0.001152s | byte equality observed |
| is_constructible_test.test | 10 | 0.001148s | 0.001129s | 0.001170s | byte equality observed |
| is_convertible_test.test | 10 | 0.001140s | 0.001145s | 0.001168s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001139s | 0.001114s | 0.001149s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001145s | 0.001131s | 0.001141s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001151s | 0.001141s | 0.001123s | byte equality observed |
| is_destructible_test.test | 10 | 0.001154s | 0.001169s | 0.001176s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001156s | 0.001159s | 0.001135s | byte equality observed |
| is_detected_test.test | 10 | 0.001150s | 0.001139s | 0.001154s | byte equality observed |
| is_empty_test.test | 10 | 0.001155s | 0.001143s | 0.001176s | byte equality observed |
| is_enum_test.test | 10 | 0.001130s | 0.001151s | 0.001152s | byte equality observed |
| is_final_test.test | 10 | 0.001154s | 0.001151s | 0.001163s | byte equality observed |
| is_float_test.test | 10 | 0.001136s | 0.001152s | 0.001151s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001163s | 0.001170s | 0.001154s | byte equality observed |
| is_function_test.test | 10 | 0.001159s | 0.001119s | 0.001158s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001160s | 0.001149s | 0.001139s | byte equality observed |
| is_integral_test.test | 10 | 0.001148s | 0.001153s | 0.001140s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001147s | 0.001161s | 0.001156s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001148s | 0.001164s | 0.001169s | byte equality observed |
| is_member_func_test.test | 10 | 0.001168s | 0.001157s | 0.001145s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001150s | 0.001132s | 0.001165s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001148s | 0.001123s | 0.001192s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001148s | 0.001122s | 0.001156s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001151s | 0.001140s | 0.001151s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001156s | 0.001137s | 0.001156s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001157s | 0.001156s | 0.001162s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001136s | 0.001151s | 0.001157s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001136s | 0.001160s | 0.001156s | byte equality observed |
| is_object_test.test | 10 | 0.001153s | 0.001145s | 0.001170s | byte equality observed |
| is_pod_test.test | 10 | 0.001143s | 0.001153s | 0.001158s | byte equality observed |
| is_pointer_test.test | 10 | 0.001128s | 0.001149s | 0.001159s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001154s | 0.001149s | 0.001164s | byte equality observed |
| is_reference_test.test | 10 | 0.001164s | 0.001150s | 0.001152s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001156s | 0.001144s | 0.001160s | byte equality observed |
| is_same_test.test | 10 | 0.001160s | 0.001139s | 0.001148s | byte equality observed |
| is_scalar_test.test | 10 | 0.001142s | 0.001153s | 0.001177s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001162s | 0.001132s | 0.001147s | byte equality observed |
| is_signed_test.test | 10 | 0.001133s | 0.001163s | 0.001162s | byte equality observed |
| is_stateless_test.test | 10 | 0.001161s | 0.001169s | 0.001174s | byte equality observed |
| is_swappable_test.test | 8 | 0.001156s | 0.001146s | 0.001160s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001183s | 0.001201s | 0.001198s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001166s | 0.001144s | 0.001166s | byte equality observed |
| is_union_test.test | 10 | 0.001144s | 0.001152s | 0.001168s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001168s | 0.001152s | 0.001167s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001166s | 0.001150s | 0.001148s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001150s | 0.001124s | 0.001146s | byte equality observed |
| is_void_test.test | 10 | 0.001140s | 0.001165s | 0.001150s | byte equality observed |
| is_volatile_test.test | 10 | 0.001159s | 0.001188s | 0.001155s | byte equality observed |
| make_signed_test.test | 10 | 0.001148s | 0.001145s | 0.001165s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001154s | 0.001166s | 0.001149s | byte equality observed |
| make_void_test.test | 10 | 0.001152s | 0.001150s | 0.001124s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000497s | 0.000511s | 0.001128s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000493s | 0.000503s | 0.001140s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000503s | 0.000499s | 0.001163s | byte equality observed |
| negation_test.test | 10 | 0.001168s | 0.001134s | 0.001130s | byte equality observed |
| promote_basic_test.test | 10 | 0.000510s | 0.000484s | 0.001153s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000489s | 0.000501s | 0.001186s | byte equality observed |
| promote_enum_test.test | 10 | 0.000499s | 0.000516s | 0.001161s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000509s | 0.000502s | 0.001154s | byte equality observed |
| rank_test.test | 10 | 0.001154s | 0.001175s | 0.001166s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001164s | 0.001155s | 0.001153s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001139s | 0.001155s | 0.001158s | byte equality observed |
| remove_const_test.test | 10 | 0.001156s | 0.001156s | 0.001167s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001150s | 0.001154s | 0.001166s | byte equality observed |
| remove_cv_test.test | 10 | 0.001171s | 0.001156s | 0.001149s | byte equality observed |
| remove_extent_test.test | 10 | 0.001153s | 0.001153s | 0.001150s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001160s | 0.001115s | 0.001160s | byte equality observed |
| remove_reference_test.test | 10 | 0.001142s | 0.001145s | 0.001177s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001139s | 0.001144s | 0.001162s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001148s | 0.001162s | 0.001164s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001160s | 0.001160s | 0.001161s | byte equality observed |
| tricky_function_type_test.test | 9 | 0.001160s | 0.001161s | 0.001131s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001155s | 0.001160s | 0.001150s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001139s | 0.001142s | 0.001160s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001158s | 0.001150s | 0.001162s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001145s | 0.001117s | 0.001145s | byte equality observed |
| type_identity_test.test | 10 | 0.001171s | 0.001151s | 0.001168s | byte equality observed |
| type_traits_test.test | 10 | 0.000507s | 0.000495s | 0.001164s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001251s | 0.001255s | 0.001252s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
