# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.143370 | 0.412267 | 0.581821 | 0.001440 | 0.001472 | 0.001638 |
| type_traits_test.test | RUN | 0.194288 | 0.418361 | 0.592963 | 0.000571 | 0.000500 | 0.001399 |
| type_identity_test.test | RUN | 0.386566 | 1.529157 | 3.421397 | 0.001480 | 0.001385 | 0.001546 |
| tricky_rvalue_test.test | RUN | 0.127792 | 0.331614 | 0.448634 | 0.001473 | 0.001573 | 0.001526 |
| tricky_partial_spec_test.test | RUN | 0.157802 | 0.475507 | 0.737141 | 0.001420 | 0.001646 | 0.001526 |
| tricky_is_enum_test.test | RUN | 0.124108 | 0.300230 | 0.406841 | 0.001442 | 0.001507 | 0.001510 |
| tricky_incomplete_type_test.test | RUN | 0.200469 | 0.475638 | 0.711004 | 0.001376 | 0.001411 | 0.001598 |
| tricky_function_type_test.test | RUN | 0.159047 | 0.500619 | 0.811727 | 0.001390 | 0.001479 | 0.001437 |
| tricky_add_pointer_test.test | RUN | 0.255200 | 0.906235 | 1.880609 | 0.001535 | 0.001548 | 0.001545 |
| tricky_abstract_type_test.test | RUN | 0.127085 | 0.315634 | 0.427392 | 0.001418 | 0.001441 | 0.001580 |
| remove_volatile_test.test | RUN | 0.345832 | 1.311941 | 2.907316 | 0.001605 | 0.001624 | 0.001575 |
| remove_reference_test.test | RUN | 0.362121 | 1.379534 | 3.060185 | 0.001440 | 0.001574 | 0.001586 |
| remove_pointer_test.test | RUN | 0.374956 | 1.458781 | 3.213161 | 0.001517 | 0.001466 | 0.001547 |
| remove_extent_test.test | RUN | 0.367146 | 1.386060 | 3.077391 | 0.001638 | 0.001625 | 0.001428 |
| remove_cv_test.test | RUN | 0.360791 | 1.385109 | 3.068998 | 0.001605 | 0.001702 | 0.001620 |
| remove_cv_ref_test.test | RUN | 0.772330 | 3.326985 | 7.552193 | 0.001569 | 0.001443 | 0.001566 |
| remove_const_test.test | RUN | 0.351679 | 1.317675 | 2.895202 | 0.001470 | 0.001540 | 0.001514 |
| remove_bounds_test.test | RUN | 0.370039 | 1.397009 | 3.081404 | 0.001595 | 0.001470 | 0.001556 |
| remove_all_extents_test.test | RUN | 0.363157 | 1.375452 | 3.144095 | 0.001437 | 0.001486 | 0.001461 |
| rank_test.test | RUN | 0.124633 | 0.316461 | 0.456056 | 0.001498 | 0.001329 | 0.001578 |
| promote_mpl_test.test | RUN | 0.113749 | 0.285140 | 0.325418 | 0.000652 | 0.000627 | 0.001422 |
| promote_enum_test.test | RUN | 0.023776 | 0.068188 | 0.077388 | 0.000572 | 0.000669 | 0.001615 |
| promote_enum_msvc_bug_test.test | RUN | 0.020905 | 0.057760 | 0.060961 | 0.000610 | 0.000580 | 0.001351 |
| promote_basic_test.test | RUN | 0.025775 | 0.079872 | 0.079971 | 0.000645 | 0.000697 | 0.001572 |
| negation_test.test | RUN | 0.120437 | 0.294919 | 0.417183 | 0.001389 | 0.001578 | 0.001546 |
| mpl_interop_test3.test | RUN | 0.107185 | 0.276490 | 0.299439 | 0.000516 | 0.000521 | 0.001528 |
| mpl_interop_test2.test | RUN | 0.036115 | 0.075662 | 0.074734 | 0.000608 | 0.000554 | 0.001276 |
| mpl_interop_test1.test | RUN | 0.018358 | 0.053852 | 0.055275 | 0.000503 | 0.000682 | 0.001548 |
| make_void_test.test | RUN | 0.127429 | 0.320886 | 0.463975 | 0.001636 | 0.001588 | 0.001605 |
| make_unsigned_test.test | RUN | 0.153205 | 0.437752 | 0.648837 | 0.001485 | 0.001529 | 0.001541 |
| make_signed_test.test | RUN | 0.150660 | 0.434275 | 0.658508 | 0.001272 | 0.001523 | 0.001566 |
| is_volatile_test.test | RUN | 0.131048 | 0.367977 | 0.536325 | 0.001432 | 0.001448 | 0.001509 |
| is_void_test.test | RUN | 0.127385 | 0.346094 | 0.479613 | 0.001723 | 0.001599 | 0.001549 |
| is_virtual_base_of_test.test | RUN | 0.150642 | 0.440963 | 0.677079 | 0.001356 | 0.001338 | 0.001490 |
| is_unsigned_test.test | RUN | 0.128872 | 0.346503 | 0.512951 | 0.001354 | 0.001350 | 0.001233 |
| is_unscoped_enum_test.test | RUN | 0.126644 | 0.314968 | 0.428562 | 0.001337 | 0.001546 | 0.001525 |
| is_union_test.test | RUN | 0.140113 | 0.405115 | 0.619329 | 0.001488 | 0.001573 | 0.001578 |
| is_unbounded_array_test.test | RUN | 0.128809 | 0.337703 | 0.476146 | 0.001375 | 0.001618 | 0.001502 |
| is_trivially_copyable_test.test | RUN | 0.207563 | 0.710704 | 1.272508 | 0.001354 | 0.001682 | 0.001510 |
| is_swappable_test.test | RUN | 0.173131 | 0.536766 | 0.938859 | 0.001429 | 0.001551 | 0.001582 |
| is_stateless_test.test | RUN | 0.194619 | 0.620075 | 1.059234 | 0.001462 | 0.001440 | 0.001561 |
| is_signed_test.test | RUN | 0.132478 | 0.347785 | 0.511480 | 0.001416 | 0.001521 | 0.001520 |
| is_scoped_enum_test.test | RUN | 0.127559 | 0.313885 | 0.424027 | 0.001394 | 0.001532 | 0.001539 |
| is_scalar_test.test | RUN | 0.171070 | 0.572023 | 0.957969 | 0.001435 | 0.001351 | 0.001516 |
| is_same_test.test | RUN | 0.130260 | 0.334380 | 0.474281 | 0.001636 | 0.001271 | 0.001555 |
| is_rvalue_reference_test.test | RUN | 0.133781 | 0.379979 | 0.564769 | 0.001465 | 0.001373 | 0.001489 |
| is_reference_test.test | RUN | 0.137421 | 0.379623 | 0.568992 | 0.001401 | 0.001626 | 0.001580 |
| is_polymorphic_test.test | RUN | 0.141619 | 0.390450 | 0.621891 | 0.001439 | 0.001536 | 0.001644 |
| is_pointer_test.test | RUN | 0.139059 | 0.388284 | 0.593599 | 0.001612 | 0.001351 | 0.001616 |
| is_pod_test.test | RUN | 0.183098 | 0.631842 | 1.102558 | 0.001488 | 0.001587 | 0.001470 |
| is_object_test.test | RUN | 0.127876 | 0.327742 | 0.437033 | 0.001377 | 0.001573 | 0.001548 |
| is_nothrow_swappable_test.test | RUN | 0.184187 | 0.585158 | 1.026580 | 0.001544 | 0.001439 | 0.001578 |
| is_nothrow_move_constructible_test.test | RUN | 0.179781 | 0.623142 | 1.069336 | 0.001536 | 0.001592 | 0.001589 |
| is_nothrow_move_assignable_test.test | RUN | 0.179613 | 0.625780 | 1.072478 | 0.001368 | 0.001523 | 0.001411 |
| is_noncopyable_test.test | RUN | 0.128566 | 0.329441 | 0.466767 | 0.001437 | 0.001427 | 0.001346 |
| is_member_pointer_test.test | RUN | 0.128606 | 0.335721 | 0.473742 | 0.001423 | 0.001522 | 0.001553 |
| is_member_obj_test.test | RUN | 0.128164 | 0.344751 | 0.486857 | 0.001522 | 0.001521 | 0.001505 |
| is_member_func_test.test | RUN | 0.133851 | 0.363260 | 0.530080 | 0.001411 | 0.001412 | 0.001513 |
| is_lvalue_reference_test.test | RUN | 0.134983 | 0.388380 | 0.573072 | 0.001484 | 0.001592 | 0.001402 |
| is_list_constructible_test.test | RUN | 0.157397 | 0.450542 | 0.647611 | 0.001538 | 0.001582 | 0.001590 |
| is_integral_test.test | RUN | 0.163817 | 0.543076 | 0.887265 | 0.001600 | 0.001526 | 0.001553 |
| is_fundamental_test.test | RUN | 0.166751 | 0.551618 | 0.953750 | 0.001368 | 0.001462 | 0.001661 |
| is_function_test.test | RUN | 0.134723 | 0.360297 | 0.510289 | 0.001470 | 0.001545 | 0.001554 |
| is_floating_point_test.test | RUN | 0.138625 | 0.387615 | 0.594520 | 0.001574 | 0.001552 | 0.001554 |
| is_float_test.test | RUN | 0.137419 | 0.384706 | 0.575501 | 0.001576 | 0.001511 | 0.001542 |
| is_final_test.test | RUN | 0.138504 | 0.387814 | 0.606187 | 0.001329 | 0.001410 | 0.001386 |
| is_enum_test.test | RUN | 0.125112 | 0.326428 | 0.448177 | 0.001411 | 0.001332 | 0.002363 |
| is_empty_test.test | RUN | 0.134183 | 0.361119 | 0.513020 | 0.001565 | 0.001504 | 0.001569 |
| is_detected_test.test | RUN | 0.123059 | 0.310842 | 0.420062 | 0.001417 | 0.001526 | 0.001555 |
| is_detected_exact_test.test | RUN | 0.121978 | 0.308768 | 0.400579 | 0.001432 | 0.001295 | 0.001581 |
| is_destructible_test.test | RUN | 0.177832 | 0.608905 | 1.058026 | 0.001445 | 0.001605 | 0.001449 |
| is_default_constr_test.test | RUN | 0.181922 | 0.619867 | 1.070133 | 0.001496 | 0.001601 | 0.001506 |
| is_copy_constructible_test.test | RUN | 0.193264 | 0.650949 | 1.138224 | 0.001552 | 0.001606 | 0.001536 |
| is_copy_assignable_test.test | RUN | 0.186274 | 0.639794 | 1.121003 | 0.001532 | 0.001530 | 0.001540 |
| is_convertible_test.test | RUN | 0.181281 | 0.567672 | 0.936093 | 0.001454 | 0.001606 | 0.001592 |
| is_constructible_test.test | RUN | 0.147276 | 0.422409 | 0.652043 | 0.001377 | 0.001506 | 0.001549 |
| is_const_test.test | RUN | 0.131459 | 0.365463 | 0.526716 | 0.001150 | 0.001387 | 0.001405 |
| is_compound_test.test | RUN | 0.124839 | 0.307935 | 0.426626 | 0.001371 | 0.001471 | 0.001573 |
| is_complex_test.test | RUN | 0.166641 | 0.413213 | 0.596339 | 0.001405 | 0.001619 | 0.001538 |
| is_complete_test.test | RUN | 0.147281 | 0.430836 | 0.672123 | 0.001383 | 0.001398 | 0.001414 |
| is_class_test.test | RUN | 0.133181 | 0.384562 | 0.568443 | 0.001522 | 0.001677 | 0.001575 |
| is_bounded_array_test.test | RUN | 0.127940 | 0.345790 | 0.484860 | 0.001425 | 0.001473 | 0.001285 |
| is_base_of_test.test | RUN | 0.136520 | 0.376255 | 0.556378 | 0.001467 | 0.001575 | 0.001574 |
| is_base_and_derived_test.test | RUN | 0.132448 | 0.364212 | 0.535704 | 0.001402 | 0.001572 | 0.001630 |
| is_assignable_test.test | RUN | 0.162905 | 0.536476 | 0.872668 | 0.001410 | 0.001543 | 0.001439 |
| is_array_test.test | RUN | 0.128850 | 0.370119 | 0.529076 | 0.001553 | 0.001462 | 0.001349 |
| is_arithmetic_test.test | RUN | 0.163957 | 0.535968 | 0.919353 | 0.001491 | 0.001488 | 0.001568 |
| is_abstract_test.test | RUN | 0.308111 | 1.444064 | 3.053048 | 0.001484 | 0.001600 | 0.001625 |
| integral_constant_test.test | RUN | 0.018853 | 0.056402 | 0.055643 | 0.000616 | 0.000696 | 0.001407 |
| has_virtual_destructor_test.test | RUN | 0.141315 | 0.425570 | 0.645116 | 0.001432 | 0.001644 | 0.001615 |
| has_unary_plus_test.test | RUN | 0.278621 | 1.607175 | 2.351913 | 0.001427 | 0.001436 | 0.001552 |
| has_unary_minus_test.test | RUN | 0.275752 | 1.567424 | 2.334396 | 0.001669 | 0.001551 | 0.001574 |
| has_trivial_move_constructor_test.test | RUN | 0.187062 | 0.617533 | 1.091362 | 0.001440 | 0.001466 | 0.001687 |
| has_trivial_move_assign_test.test | RUN | 0.184439 | 0.630836 | 1.060773 | 0.001376 | 0.001706 | 0.001614 |
| has_trivial_destructor_test.test | RUN | 0.177620 | 0.634085 | 1.110036 | 0.001589 | 0.001480 | 0.001634 |
| has_trivial_copy_test.test | RUN | 0.188905 | 0.669888 | 1.150583 | 0.001477 | 0.001638 | 0.001664 |
| has_trivial_constr_test.test | RUN | 0.192549 | 0.672404 | 1.174607 | 0.001484 | 0.001598 | 0.001692 |
| has_trivial_assign_test.test | RUN | 0.188891 | 0.668067 | 1.147026 | 0.001482 | 0.001668 | 0.001628 |
| has_right_shift_test.test | RUN | 0.294677 | 1.231811 | 2.504870 | 0.001529 | 0.001614 | 0.001501 |
| has_right_shift_assign_test.test | RUN | 0.277274 | 1.158595 | 2.313275 | 0.001200 | 0.001481 | 0.001532 |
| has_prefix_classes3_test.test | RUN | 0.202995 | 0.690346 | 1.182032 | 0.001604 | 0.001585 | 0.001469 |
| has_prefix_classes2_test.test | RUN | 0.204091 | 0.665339 | 1.171266 | 0.001328 | 0.001592 | 0.001514 |
| has_prefix_classes1_test.test | RUN | 0.202286 | 0.684281 | 1.176191 | 0.001474 | 0.001631 | 0.001693 |
| has_prefix_classes0_test.test | RUN | 0.201035 | 0.699573 | 1.161489 | 0.001439 | 0.001611 | 0.001584 |
| has_pre_increment_test.test | RUN | 0.277685 | 1.598842 | 2.359117 | 0.001482 | 0.001479 | 0.001403 |
| has_pre_decrement_test.test | RUN | 0.277131 | 1.591518 | 2.313902 | 0.001429 | 0.001550 | 0.001629 |
| has_postfix_classes3_test.test | RUN | 0.206338 | 0.693311 | 1.201576 | 0.001497 | 0.001520 | 0.001613 |
| has_postfix_classes2_test.test | RUN | 0.201701 | 0.681246 | 1.173168 | 0.001431 | 0.001615 | 0.001582 |
| has_postfix_classes1_test.test | RUN | 0.207630 | 0.704224 | 1.192297 | 0.001414 | 0.001630 | 0.001661 |
| has_postfix_classes0_test.test | RUN | 0.201468 | 0.700070 | 1.174745 | 0.001417 | 0.001556 | 0.001715 |
| has_post_increment_test.test | RUN | 0.280205 | 1.602955 | 2.380773 | 0.001477 | 0.001617 | 0.001570 |
| has_post_decrement_test.test | RUN | 0.278598 | 1.583487 | 2.353189 | 0.001387 | 0.001512 | 0.001566 |
| has_plus_test.test | RUN | 0.281409 | 1.158856 | 2.384884 | 0.001423 | 0.001616 | 0.001473 |
| has_plus_assign_test.test | RUN | 0.292776 | 1.170048 | 2.389953 | 0.001346 | 0.001648 | 0.001535 |
| has_operator_new_test.test | RUN | 0.187334 | 0.620199 | 1.048261 | 0.001498 | 0.001584 | 0.001609 |
| has_nothrow_destructor_test.test | RUN | 0.192669 | 0.684730 | 1.167408 | 0.001354 | 0.001273 | 0.001570 |
| has_nothrow_copy_test.test | RUN | 0.185313 | 0.641924 | 1.103699 | 0.001090 | 0.001517 | 0.001531 |
| has_nothrow_constr_test.test | RUN | 0.179841 | 0.628788 | 1.083265 | 0.001336 | 0.001655 | 0.001582 |
| has_nothrow_assign_test.test | RUN | 0.179993 | 0.621637 | 1.071385 | 0.001478 | 0.001634 | 0.001491 |
| has_not_equal_to_test.test | RUN | 0.279907 | 1.509520 | 2.415699 | 0.001531 | 0.001563 | 0.001636 |
| has_negate_test.test | RUN | 0.270056 | 1.143681 | 2.269034 | 0.001472 | 0.001509 | 0.001598 |
| has_multiplies_test.test | RUN | 0.278179 | 1.152927 | 2.320700 | 0.001412 | 0.001375 | 0.001557 |
| has_multiplies_assign_test.test | RUN | 0.281440 | 1.137908 | 2.313481 | 0.001452 | 0.001534 | 0.001443 |
| has_modulus_test.test | RUN | 0.281689 | 1.157325 | 2.363941 | 0.001559 | 0.001575 | 0.001633 |
| has_modulus_assign_test.test | RUN | 0.272012 | 1.176314 | 2.310538 | 0.001502 | 0.001534 | 0.001607 |
| has_minus_test.test | RUN | 0.290119 | 1.169038 | 2.396834 | 0.001541 | 0.001383 | 0.001430 |
| has_minus_assign_test.test | RUN | 0.286556 | 1.179374 | 2.342756 | 0.001462 | 0.001682 | 0.001371 |
| has_logical_or_test.test | RUN | 0.281682 | 1.183545 | 2.370423 | 0.001495 | 0.001567 | 0.001564 |
| has_logical_not_test.test | RUN | 0.269866 | 1.158452 | 2.258029 | 0.001543 | 0.001462 | 0.001540 |
| has_logical_and_test.test | RUN | 0.284166 | 1.172794 | 2.325338 | 0.001551 | 0.001652 | 0.001571 |
| has_less_test.test | RUN | 0.280335 | 1.548495 | 2.380123 | 0.001503 | 0.001635 | 0.001580 |
| has_less_equal_test.test | RUN | 0.280743 | 1.520075 | 2.363022 | 0.001566 | 0.001657 | 0.001630 |
| has_left_shift_test.test | RUN | 0.308819 | 1.523251 | 2.928728 | 0.001445 | 0.001690 | 0.001402 |
| has_left_shift_assign_test.test | RUN | 0.277939 | 1.166720 | 2.347926 | 0.001413 | 0.001700 | 0.001712 |
| has_greater_test.test | RUN | 0.276888 | 1.546827 | 2.361147 | 0.001602 | 0.001638 | 0.001491 |
| has_greater_equal_test.test | RUN | 0.285420 | 1.602513 | 2.357996 | 0.001436 | 0.001648 | 0.001579 |
| has_equal_to_test.test | RUN | 0.279460 | 1.568431 | 2.337457 | 0.001516 | 0.001612 | 0.001546 |
| has_divides_test.test | RUN | 0.283762 | 1.150125 | 2.367501 | 0.001441 | 0.001670 | 0.001477 |
| has_divides_assign_test.test | RUN | 0.282139 | 1.196447 | 2.365034 | 0.001448 | 0.001677 | 0.001587 |
| has_dereference_test.test | RUN | 0.275890 | 1.139027 | 2.252540 | 0.001482 | 0.001705 | 0.001596 |
| has_complement_test.test | RUN | 0.271888 | 1.522590 | 2.308394 | 0.001527 | 0.001588 | 0.001576 |
| has_bit_xor_test.test | RUN | 0.278102 | 1.168619 | 2.337592 | 0.001399 | 0.001603 | 0.001553 |
| has_bit_xor_assign_test.test | RUN | 0.280837 | 1.185802 | 2.325079 | 0.001403 | 0.001567 | 0.001569 |
| has_bit_or_test.test | RUN | 0.280405 | 1.151762 | 2.337570 | 0.001671 | 0.001630 | 0.001590 |
| has_bit_or_assign_test.test | RUN | 0.281570 | 1.168197 | 2.329686 | 0.001455 | 0.001680 | 0.001585 |
| has_bit_and_test.test | RUN | 0.272749 | 1.144567 | 2.332176 | 0.001416 | 0.001625 | 0.001682 |
| has_bit_and_assign_test.test | RUN | 0.280106 | 1.187933 | 2.326762 | 0.001536 | 0.001639 | 0.001454 |
| has_binary_classes9_test.test | RUN | 0.310024 | 1.387913 | 2.605571 | 0.001624 | 0.001611 | 0.001601 |
| has_binary_classes8_test.test | RUN | 0.311888 | 1.395301 | 2.596100 | 0.001481 | 0.001605 | 0.001557 |
| has_binary_classes7_test.test | RUN | 0.303521 | 1.370819 | 2.623910 | 0.001393 | 0.001610 | 0.001586 |
| has_binary_classes6_test.test | RUN | 0.295151 | 1.317985 | 2.641168 | 0.001660 | 0.001584 | 0.001574 |
| has_binary_classes5_test.test | RUN | 0.305794 | 1.347211 | 2.610985 | 0.001512 | 0.001612 | 0.001628 |
| has_binary_classes4_test.test | RUN | 0.304818 | 1.381624 | 2.584748 | 0.001457 | 0.001621 | 0.001518 |
| has_binary_classes3_test.test | RUN | 0.310374 | 1.388571 | 2.626348 | 0.001377 | 0.001589 | 0.001748 |
| has_binary_classes2_test.test | RUN | 0.307830 | 1.388315 | 2.614547 | 0.001536 | 0.001596 | 0.001537 |
| has_binary_classes1_test.test | RUN | 0.306184 | 1.374918 | 2.608228 | 0.001660 | 0.001535 | 0.001602 |
| has_binary_classes0_test.test | RUN | 0.307689 | 1.394868 | 2.600246 | 0.001086 | 0.001382 | 0.001663 |
| function_traits_test.test | RUN | 0.131816 | 0.367383 | 0.536162 | 0.001504 | 0.001572 | 0.001312 |
| floating_point_promotion_test.test | RUN | 0.130882 | 0.356148 | 0.500654 | 0.001521 | 0.001431 | 0.001306 |
| extent_test.test | RUN | 0.133124 | 0.356127 | 0.531892 | 0.001558 | 0.001601 | 0.001526 |
| enable_if_test.test | RUN | 0.122354 | 0.300838 | 0.409654 | 0.001548 | 0.001481 | 0.001661 |
| disjunction_test.test | RUN | 0.124871 | 0.306699 | 0.436446 | 0.001516 | 0.001342 | 0.001676 |
| detected_test.test | RUN | 0.123171 | 0.297567 | 0.409694 | 0.001501 | 0.001572 | 0.001437 |
| detected_or_test.test | RUN | 0.124379 | 0.314289 | 0.439324 | 0.001582 | 0.001546 | 0.001711 |
| decay_test.test | RUN | 0.337996 | 1.292561 | 2.712928 | 0.001527 | 0.001540 | 0.001560 |
| cxx14_aliases_test.test | RUN | 0.203765 | 0.460742 | 0.706598 | 0.001628 | 0.001527 | 0.001381 |
| copy_reference_test.test | RUN | 0.128382 | 0.319637 | 0.420017 | 0.001454 | 0.001440 | 0.001600 |
| copy_cv_test.test | RUN | 0.130086 | 0.326380 | 0.470487 | 0.001494 | 0.001610 | 0.001589 |
| copy_cv_ref_test.test | RUN | 0.187783 | 0.577540 | 1.073410 | 0.001481 | 0.001496 | 0.001575 |
| conjunction_test.test | RUN | 0.124577 | 0.324218 | 0.438939 | 0.001457 | 0.001454 | 0.001602 |
| conditional_test.test | RUN | 0.124301 | 0.315249 | 0.415923 | 0.001402 | 0.001343 | 0.001545 |
| common_type_test.test | RUN | 0.170375 | 0.497805 | 0.850074 | 0.001615 | 0.001433 | 0.001462 |
| common_type_sfinae_test.test | RUN | 0.123814 | 0.294680 | 0.404049 | 0.001470 | 0.001695 | 0.001619 |
| common_type_sfinae2_test.test | RUN | 0.127827 | 0.322425 | 0.447750 | 0.001360 | 0.001507 | 0.001392 |
| common_type_6_test.test | RUN | 0.129045 | 0.320375 | 0.445347 | 0.001390 | 0.001331 | 0.001564 |
| common_type_5_test.test | RUN | 0.129884 | 0.320104 | 0.448032 | 0.001594 | 0.001700 | 0.001646 |
| common_type_4_test.test | RUN | 0.135866 | 0.351109 | 0.540507 | 0.001803 | 0.001346 | 0.001460 |
| common_type_3_test.test | RUN | 0.121529 | 0.298481 | 0.402170 | 0.001383 | 0.001376 | 0.001586 |
| common_type_2_test.test | RUN | 0.172315 | 0.484455 | 0.829473 | 0.001484 | 0.001623 | 0.001332 |
| alignment_of_test.test | RUN | 0.135062 | 0.385592 | 0.543844 | 0.001651 | 0.001650 | 0.001485 |
| alignment_of_a2_test.test | RUN | 0.136754 | 0.384511 | 0.541963 | 0.001534 | 0.001325 | 0.001470 |
| aligned_storage_test.test | RUN | 0.142739 | 0.366411 | 0.497572 | 0.001724 | 0.001590 | 0.001503 |
| aligned_storage_empy_test.test | RUN | 0.159213 | 0.426162 | 0.659694 | 0.001340 | 0.001600 | 0.001566 |
| aligned_storage_a2_test.test | RUN | 0.138879 | 0.370267 | 0.488119 | 0.001476 | 0.001754 | 0.001749 |
| add_volatile_test.test | RUN | 0.311571 | 1.124821 | 2.489170 | 0.001703 | 0.001446 | 0.001620 |
| add_rvalue_reference_test.test | RUN | 0.349785 | 1.284165 | 2.849746 | 0.001640 | 0.001498 | 0.001555 |
| add_reference_test.test | RUN | 0.342503 | 1.278943 | 2.816721 | 0.001408 | 0.001602 | 0.001618 |
| add_pointer_test.test | RUN | 0.218198 | 0.715228 | 1.415408 | 0.001499 | 0.001530 | 0.001609 |
| add_lvalue_reference_test.test | RUN | 0.338364 | 1.282863 | 2.806815 | 0.001393 | 0.001652 | 0.001589 |
| add_cv_test.test | RUN | 0.329789 | 1.176652 | 2.702333 | 0.001560 | 0.001326 | 0.001326 |
| add_const_test.test | RUN | 0.329878 | 1.178564 | 2.611991 | 0.001355 | 0.001361 | 0.001192 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.119689 | 0.294706 | 0.394353 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.120087 | 0.298579 | 0.406190 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.116594 | 0.278112 | 0.391702 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.116886 | 0.284274 | 0.388492 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.119007 | 0.285308 | 0.381045 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.117570 | 0.284932 | 0.382182 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.118488 | 0.282192 | 0.388508 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.116753 | 0.285283 | 0.382081 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.118644 | 0.284890 | 0.383397 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.118226 | 0.284168 | 0.385806 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.116809 | 0.282270 | 0.385819 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.118476 | 0.290690 | 0.383590 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.120803 | 0.286206 | 0.385879 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.118513 | 0.286504 | 0.386863 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.114411 | 0.285799 | 0.385433 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.117082 | 0.285062 | 0.382777 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.115005 | 0.283141 | 0.384685 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.119146 | 0.289952 | 0.391326 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.115964 | 0.285738 | 0.386796 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.118211 | 0.288034 | 0.385341 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.117055 | 0.285270 | 0.386851 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.119546 | 0.286265 | 0.389199 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.188575 | 0.624055 | 1.127690 | 0.001616 | 0.001602 | 0.001598 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.182571 | 0.605537 | 1.066826 | 0.001641 | 0.001490 | 0.001524 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.186397 | 0.611441 | 1.079791 | 0.000965 | 0.001521 | 0.001474 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.178541 | 0.618804 | 1.100689 | 0.001172 | 0.001089 | 0.001124 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.122527 | 0.452039 | 0.674464 | 0.001119 | 0.001005 | 0.001158 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.981×, 0.999× | 1.000× |
| clang | 1.045× | 1.056×, 1.035× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000949s | 0.000952s | 0.000966s | byte equality observed |
| add_cv_test.test | 10 | 0.000948s | 0.000915s | 0.000928s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000971s | 0.000978s | 0.000955s | byte equality observed |
| add_pointer_test.test | 10 | 0.000931s | 0.000937s | 0.000982s | byte equality observed |
| add_reference_test.test | 10 | 0.000921s | 0.000936s | 0.000908s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000964s | 0.000926s | 0.000953s | byte equality observed |
| add_volatile_test.test | 10 | 0.000941s | 0.000969s | 0.000950s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001021s | 0.001033s | 0.000978s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000982s | 0.000935s | 0.000966s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001004s | 0.001012s | 0.001007s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000987s | 0.000941s | 0.000917s | byte equality observed |
| alignment_of_test.test | 10 | 0.000955s | 0.000926s | 0.000937s | byte equality observed |
| common_type_2_test.test | 10 | 0.000926s | 0.000930s | 0.000957s | byte equality observed |
| common_type_3_test.test | 10 | 0.000943s | 0.000926s | 0.000902s | byte equality observed |
| common_type_4_test.test | 10 | 0.000948s | 0.000954s | 0.000955s | byte equality observed |
| common_type_5_test.test | 10 | 0.000919s | 0.000948s | 0.000948s | byte equality observed |
| common_type_6_test.test | 10 | 0.000951s | 0.000928s | 0.000929s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000910s | 0.000944s | 0.000905s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000949s | 0.000917s | 0.000957s | byte equality observed |
| common_type_test.test | 10 | 0.000960s | 0.000921s | 0.000939s | byte equality observed |
| conditional_test.test | 10 | 0.000945s | 0.000928s | 0.000939s | byte equality observed |
| conjunction_test.test | 10 | 0.000948s | 0.000927s | 0.000932s | byte equality observed |
| copy_cv_ref_test.test | 9 | 0.000930s | 0.000960s | 0.000967s | byte equality observed |
| copy_cv_test.test | 10 | 0.000942s | 0.000962s | 0.000922s | byte equality observed |
| copy_reference_test.test | 10 | 0.000965s | 0.000934s | 0.000965s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000938s | 0.000951s | 0.000929s | byte equality observed |
| decay_test.test | 10 | 0.000941s | 0.000928s | 0.000952s | byte equality observed |
| detected_or_test.test | 10 | 0.000943s | 0.000938s | 0.000934s | byte equality observed |
| detected_test.test | 10 | 0.000929s | 0.000918s | 0.000947s | byte equality observed |
| disjunction_test.test | 10 | 0.000934s | 0.000945s | 0.000922s | byte equality observed |
| enable_if_test.test | 10 | 0.000922s | 0.000933s | 0.000960s | byte equality observed |
| extent_test.test | 10 | 0.000922s | 0.000961s | 0.000940s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000947s | 0.000940s | 0.000935s | byte equality observed |
| function_traits_test.test | 10 | 0.000935s | 0.000940s | 0.000943s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000922s | 0.000928s | 0.000959s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000931s | 0.000934s | 0.000906s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000924s | 0.000938s | 0.000954s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000943s | 0.000923s | 0.000962s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000936s | 0.000910s | 0.000908s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000936s | 0.000916s | 0.000926s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000958s | 0.000955s | 0.000954s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000940s | 0.000912s | 0.000949s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000941s | 0.000942s | 0.000922s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000936s | 0.000975s | 0.000953s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000956s | 0.000910s | 0.000920s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000915s | 0.000922s | 0.000918s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000953s | 0.000922s | 0.000966s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000934s | 0.000922s | 0.000898s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000922s | 0.000936s | 0.000939s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000937s | 0.000948s | 0.000961s | byte equality observed |
| has_complement_test.test | 10 | 0.000950s | 0.000947s | 0.000921s | byte equality observed |
| has_dereference_test.test | 10 | 0.000949s | 0.000928s | 0.000959s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000938s | 0.000933s | 0.000929s | byte equality observed |
| has_divides_test.test | 10 | 0.000960s | 0.000954s | 0.000913s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000918s | 0.000912s | 0.000944s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000951s | 0.000956s | 0.000958s | byte equality observed |
| has_greater_test.test | 10 | 0.000972s | 0.000931s | 0.000960s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000927s | 0.000934s | 0.000921s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000947s | 0.000948s | 0.000950s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000947s | 0.000929s | 0.000925s | byte equality observed |
| has_less_test.test | 10 | 0.000954s | 0.000944s | 0.000960s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000949s | 0.000920s | 0.000910s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000946s | 0.000948s | 0.000943s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000934s | 0.000931s | 0.000912s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000957s | 0.000954s | 0.000950s | byte equality observed |
| has_minus_test.test | 10 | 0.000914s | 0.000954s | 0.000913s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000946s | 0.000948s | 0.000945s | byte equality observed |
| has_modulus_test.test | 10 | 0.000934s | 0.000944s | 0.000925s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000945s | 0.000915s | 0.000936s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000916s | 0.000941s | 0.000917s | byte equality observed |
| has_negate_test.test | 10 | 0.000938s | 0.000907s | 0.000917s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000941s | 0.000917s | 0.000965s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000970s | 0.000911s | 0.000926s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000935s | 0.000934s | 0.000966s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000943s | 0.000918s | 0.000916s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000949s | 0.000946s | 0.000947s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000959s | 0.000924s | 0.000943s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000928s | 0.000930s | 0.000924s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000933s | 0.000970s | 0.000907s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000942s | 0.000929s | 0.000906s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000960s | 0.000956s | 0.000978s | byte equality observed |
| has_plus_test.test | 10 | 0.000928s | 0.000948s | 0.000924s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000960s | 0.000944s | 0.000948s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000931s | 0.000941s | 0.000941s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000930s | 0.000940s | 0.000948s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000959s | 0.000923s | 0.000919s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000934s | 0.000961s | 0.000955s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000979s | 0.000906s | 0.000985s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000937s | 0.000954s | 0.000915s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000949s | 0.000902s | 0.000931s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000954s | 0.000930s | 0.000945s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000945s | 0.000942s | 0.000927s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000951s | 0.000898s | 0.000983s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000938s | 0.000952s | 0.000941s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000945s | 0.000908s | 0.000960s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000931s | 0.000973s | 0.000906s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000991s | 0.000985s | 0.000979s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000979s | 0.000976s | 0.000979s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000981s | 0.000982s | 0.000972s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000951s | 0.000969s | 0.000978s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000944s | 0.000946s | 0.000954s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000923s | 0.000929s | 0.000926s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000958s | 0.000929s | 0.000943s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000963s | 0.000979s | 0.000931s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000941s | 0.000937s | 0.000927s | byte equality observed |
| integral_constant_test.test | 10 | 0.000426s | 0.000421s | 0.000960s | byte equality observed |
| is_abstract_test.test | 10 | 0.000973s | 0.000924s | 0.000916s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000952s | 0.000968s | 0.000957s | byte equality observed |
| is_array_test.test | 10 | 0.000959s | 0.000952s | 0.000948s | byte equality observed |
| is_assignable_test.test | 10 | 0.000942s | 0.000923s | 0.000909s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000927s | 0.000950s | 0.000929s | byte equality observed |
| is_base_of_test.test | 10 | 0.000938s | 0.000923s | 0.000930s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000945s | 0.000947s | 0.000966s | byte equality observed |
| is_class_test.test | 10 | 0.000932s | 0.000953s | 0.000912s | byte equality observed |
| is_complete_test.test | 10 | 0.000926s | 0.000958s | 0.000932s | byte equality observed |
| is_complex_test.test | 10 | 0.000954s | 0.000909s | 0.000940s | byte equality observed |
| is_compound_test.test | 10 | 0.000937s | 0.000978s | 0.000910s | byte equality observed |
| is_const_test.test | 10 | 0.000945s | 0.000926s | 0.000942s | byte equality observed |
| is_constructible_test.test | 10 | 0.000949s | 0.000929s | 0.000983s | byte equality observed |
| is_convertible_test.test | 10 | 0.000977s | 0.000988s | 0.000935s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000912s | 0.000920s | 0.000923s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000942s | 0.000966s | 0.000971s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000931s | 0.000930s | 0.000922s | byte equality observed |
| is_destructible_test.test | 10 | 0.000943s | 0.000937s | 0.000940s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000960s | 0.000943s | 0.000929s | byte equality observed |
| is_detected_test.test | 10 | 0.000942s | 0.000924s | 0.000950s | byte equality observed |
| is_empty_test.test | 10 | 0.000939s | 0.000927s | 0.000909s | byte equality observed |
| is_enum_test.test | 10 | 0.000961s | 0.000935s | 0.000942s | byte equality observed |
| is_final_test.test | 10 | 0.000935s | 0.000934s | 0.000937s | byte equality observed |
| is_float_test.test | 10 | 0.000940s | 0.000938s | 0.000927s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000925s | 0.000959s | 0.000947s | byte equality observed |
| is_function_test.test | 10 | 0.000957s | 0.000939s | 0.000929s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000922s | 0.000975s | 0.000942s | byte equality observed |
| is_integral_test.test | 10 | 0.000956s | 0.000943s | 0.000981s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000941s | 0.000955s | 0.000942s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000946s | 0.000939s | 0.000944s | byte equality observed |
| is_member_func_test.test | 10 | 0.000967s | 0.000932s | 0.000909s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000954s | 0.000927s | 0.000946s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000937s | 0.000960s | 0.000917s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000962s | 0.000960s | 0.000912s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000972s | 0.000957s | 0.000940s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000918s | 0.000958s | 0.000930s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000929s | 0.000942s | 0.000929s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000973s | 0.000945s | 0.000930s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000921s | 0.000954s | 0.000922s | byte equality observed |
| is_object_test.test | 10 | 0.000950s | 0.000952s | 0.000965s | byte equality observed |
| is_pod_test.test | 10 | 0.000925s | 0.000958s | 0.000954s | byte equality observed |
| is_pointer_test.test | 10 | 0.000938s | 0.000917s | 0.000936s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000929s | 0.000924s | 0.000943s | byte equality observed |
| is_reference_test.test | 10 | 0.000937s | 0.000955s | 0.000953s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000937s | 0.000928s | 0.000923s | byte equality observed |
| is_same_test.test | 10 | 0.000928s | 0.000959s | 0.000960s | byte equality observed |
| is_scalar_test.test | 10 | 0.000940s | 0.000930s | 0.000975s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000912s | 0.000947s | 0.000945s | byte equality observed |
| is_signed_test.test | 10 | 0.000928s | 0.000937s | 0.000959s | byte equality observed |
| is_stateless_test.test | 10 | 0.000927s | 0.000982s | 0.000949s | byte equality observed |
| is_swappable_test.test | 10 | 0.000957s | 0.000933s | 0.001038s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000946s | 0.000931s | 0.001011s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000980s | 0.000927s | 0.001059s | byte equality observed |
| is_union_test.test | 10 | 0.000929s | 0.000971s | 0.000972s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000947s | 0.000930s | 0.001016s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000942s | 0.000915s | 0.001037s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000923s | 0.000959s | 0.001089s | byte equality observed |
| is_void_test.test | 10 | 0.000953s | 0.000923s | 0.001101s | byte equality observed |
| is_volatile_test.test | 10 | 0.000935s | 0.000932s | 0.001076s | byte equality observed |
| make_signed_test.test | 10 | 0.000955s | 0.000971s | 0.001126s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000950s | 0.000938s | 0.001129s | byte equality observed |
| make_void_test.test | 10 | 0.000929s | 0.000961s | 0.001124s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000422s | 0.000426s | 0.001132s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000432s | 0.000426s | 0.001124s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000441s | 0.000438s | 0.001107s | byte equality observed |
| negation_test.test | 10 | 0.000993s | 0.000967s | 0.001122s | byte equality observed |
| promote_basic_test.test | 10 | 0.000422s | 0.000430s | 0.001140s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000434s | 0.000423s | 0.001099s | byte equality observed |
| promote_enum_test.test | 10 | 0.000440s | 0.000431s | 0.001122s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000427s | 0.000439s | 0.001125s | byte equality observed |
| rank_test.test | 10 | 0.000967s | 0.000940s | 0.001119s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000931s | 0.000985s | 0.001108s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000961s | 0.000952s | 0.001124s | byte equality observed |
| remove_const_test.test | 10 | 0.000969s | 0.000929s | 0.001119s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000952s | 0.000970s | 0.001132s | byte equality observed |
| remove_cv_test.test | 10 | 0.000953s | 0.000895s | 0.001120s | byte equality observed |
| remove_extent_test.test | 10 | 0.000957s | 0.000928s | 0.001150s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001000s | 0.000935s | 0.001120s | byte equality observed |
| remove_reference_test.test | 10 | 0.000947s | 0.000972s | 0.001127s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000964s | 0.000921s | 0.001106s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001040s | 0.000937s | 0.001155s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001048s | 0.000934s | 0.001128s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001067s | 0.000914s | 0.001116s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001104s | 0.000962s | 0.001125s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001092s | 0.000956s | 0.001125s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001093s | 0.000907s | 0.001122s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001108s | 0.000944s | 0.001108s | byte equality observed |
| type_identity_test.test | 10 | 0.001125s | 0.001011s | 0.001147s | byte equality observed |
| type_traits_test.test | 10 | 0.000477s | 0.000448s | 0.001106s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001224s | 0.001094s | 0.001234s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
