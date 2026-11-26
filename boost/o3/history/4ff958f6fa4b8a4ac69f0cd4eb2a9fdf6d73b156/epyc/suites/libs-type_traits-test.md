# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.108386 | 0.244004 | 0.335837 | 0.001518 | 0.001506 | 0.001324 |
| type_traits_test.test | RUN | 0.147082 | 0.267225 | 0.322298 | 0.000552 | 0.000487 | 0.001270 |
| type_identity_test.test | RUN | 0.246614 | 0.851119 | 1.683410 | 0.001714 | 0.001759 | 0.001500 |
| tricky_rvalue_test.test | RUN | 0.104138 | 0.201589 | 0.255903 | 0.001698 | 0.001479 | 0.001376 |
| tricky_partial_spec_test.test | RUN | 0.107452 | 0.286904 | 0.411772 | 0.001476 | 0.001603 | 0.001546 |
| tricky_is_enum_test.test | RUN | 0.087382 | 0.189878 | 0.229162 | 0.001592 | 0.001610 | 0.001427 |
| tricky_incomplete_type_test.test | RUN | 0.141157 | 0.291096 | 0.364379 | 0.001343 | 0.001369 | 0.001368 |
| tricky_function_type_test.test | RUN | 0.117138 | 0.297990 | 0.427059 | 0.001709 | 0.001513 | 0.001264 |
| tricky_add_pointer_test.test | RUN | 0.160475 | 0.505937 | 0.932514 | 0.001510 | 0.001815 | 0.001495 |
| tricky_abstract_type_test.test | RUN | 0.091502 | 0.194863 | 0.244140 | 0.001767 | 0.001711 | 0.001421 |
| remove_volatile_test.test | RUN | 0.214391 | 0.748626 | 1.503823 | 0.001462 | 0.001807 | 0.001390 |
| remove_reference_test.test | RUN | 0.220481 | 0.796444 | 1.560139 | 0.001687 | 0.001600 | 0.001305 |
| remove_pointer_test.test | RUN | 0.228756 | 0.824523 | 1.618214 | 0.001685 | 0.001589 | 0.001416 |
| remove_extent_test.test | RUN | 0.221288 | 0.804947 | 1.583537 | 0.001688 | 0.001790 | 0.001462 |
| remove_cv_test.test | RUN | 0.217645 | 0.805147 | 1.522443 | 0.001810 | 0.001851 | 0.001524 |
| remove_cv_ref_test.test | RUN | 0.451277 | 1.921497 | 3.863023 | 0.001706 | 0.001397 | 0.001440 |
| remove_const_test.test | RUN | 0.223280 | 0.739993 | 1.442745 | 0.001832 | 0.001806 | 0.001384 |
| remove_bounds_test.test | RUN | 0.232161 | 0.804952 | 1.519379 | 0.001448 | 0.001616 | 0.001382 |
| remove_all_extents_test.test | RUN | 0.224451 | 0.790265 | 1.536977 | 0.001560 | 0.001423 | 0.001280 |
| rank_test.test | RUN | 0.090581 | 0.211051 | 0.251521 | 0.001447 | 0.001799 | 0.001220 |
| promote_mpl_test.test | RUN | 0.074586 | 0.181455 | 0.173158 | 0.000538 | 0.000569 | 0.001499 |
| promote_enum_test.test | RUN | 0.019184 | 0.047440 | 0.047892 | 0.000709 | 0.000632 | 0.001451 |
| promote_enum_msvc_bug_test.test | RUN | 0.016446 | 0.041003 | 0.041745 | 0.001288 | 0.000720 | 0.001378 |
| promote_basic_test.test | RUN | 0.034909 | 0.052630 | 0.048704 | 0.000731 | 0.000568 | 0.001450 |
| negation_test.test | RUN | 0.121005 | 0.196720 | 0.222482 | 0.001391 | 0.001537 | 0.001611 |
| mpl_interop_test3.test | RUN | 0.089466 | 0.177883 | 0.170767 | 0.000650 | 0.000596 | 0.001404 |
| mpl_interop_test2.test | RUN | 0.028082 | 0.048872 | 0.053504 | 0.000558 | 0.000514 | 0.001491 |
| mpl_interop_test1.test | RUN | 0.016619 | 0.039103 | 0.039840 | 0.000735 | 0.000714 | 0.001245 |
| make_void_test.test | RUN | 0.093095 | 0.204959 | 0.265998 | 0.001606 | 0.001554 | 0.001448 |
| make_unsigned_test.test | RUN | 0.108100 | 0.262379 | 0.349259 | 0.001494 | 0.001806 | 0.001322 |
| make_signed_test.test | RUN | 0.110062 | 0.265980 | 0.351350 | 0.001527 | 0.001566 | 0.001361 |
| is_volatile_test.test | RUN | 0.101390 | 0.236643 | 0.288131 | 0.001440 | 0.001545 | 0.001617 |
| is_void_test.test | RUN | 0.091644 | 0.216181 | 0.282510 | 0.001689 | 0.001523 | 0.001375 |
| is_virtual_base_of_test.test | RUN | 0.103463 | 0.272475 | 0.372444 | 0.001476 | 0.001404 | 0.001163 |
| is_unsigned_test.test | RUN | 0.093725 | 0.222523 | 0.284120 | 0.001429 | 0.001496 | 0.001531 |
| is_unscoped_enum_test.test | RUN | 0.093254 | 0.209189 | 0.243606 | 0.001524 | 0.001559 | 0.001447 |
| is_union_test.test | RUN | 0.097935 | 0.249332 | 0.340487 | 0.001397 | 0.001846 | 0.001005 |
| is_unbounded_array_test.test | RUN | 0.090640 | 0.214259 | 0.268612 | 0.001380 | 0.001719 | 0.001349 |
| is_trivially_copyable_test.test | RUN | 0.141379 | 0.434669 | 0.654771 | 0.001501 | 0.001563 | 0.001377 |
| is_swappable_test.test | RUN | 0.118406 | 0.338767 | 0.503074 | 0.001387 | 0.001745 | 0.001491 |
| is_stateless_test.test | RUN | 0.125874 | 0.379655 | 0.568125 | 0.001466 | 0.001573 | 0.001375 |
| is_signed_test.test | RUN | 0.089534 | 0.219974 | 0.281841 | 0.001594 | 0.001442 | 0.001317 |
| is_scoped_enum_test.test | RUN | 0.089597 | 0.198658 | 0.238097 | 0.001667 | 0.001425 | 0.001381 |
| is_scalar_test.test | RUN | 0.113630 | 0.347865 | 0.497286 | 0.001555 | 0.001830 | 0.001496 |
| is_same_test.test | RUN | 0.091877 | 0.212668 | 0.272519 | 0.001708 | 0.001721 | 0.001493 |
| is_rvalue_reference_test.test | RUN | 0.092500 | 0.235228 | 0.279253 | 0.001534 | 0.001624 | 0.001480 |
| is_reference_test.test | RUN | 0.096101 | 0.245606 | 0.301442 | 0.001382 | 0.001742 | 0.001382 |
| is_polymorphic_test.test | RUN | 0.098800 | 0.249584 | 0.322960 | 0.001719 | 0.001718 | 0.001509 |
| is_pointer_test.test | RUN | 0.096253 | 0.250694 | 0.315834 | 0.001491 | 0.001765 | 0.001331 |
| is_pod_test.test | RUN | 0.120453 | 0.404873 | 0.581810 | 0.001437 | 0.001756 | 0.001450 |
| is_object_test.test | RUN | 0.087964 | 0.205316 | 0.245781 | 0.001370 | 0.001785 | 0.001589 |
| is_nothrow_swappable_test.test | RUN | 0.123369 | 0.372280 | 0.530001 | 0.001726 | 0.001862 | 0.001536 |
| is_nothrow_move_constructible_test.test | RUN | 0.123781 | 0.382478 | 0.560551 | 0.001776 | 0.001475 | 0.001474 |
| is_nothrow_move_assignable_test.test | RUN | 0.124278 | 0.377273 | 0.545831 | 0.002988 | 0.001684 | 0.001423 |
| is_noncopyable_test.test | RUN | 0.091378 | 0.209482 | 0.240455 | 0.002409 | 0.001804 | 0.001465 |
| is_member_pointer_test.test | RUN | 0.117669 | 0.223563 | 0.256293 | 0.001728 | 0.001833 | 0.001487 |
| is_member_obj_test.test | RUN | 0.096755 | 0.226641 | 0.274968 | 0.001790 | 0.001794 | 0.001422 |
| is_member_func_test.test | RUN | 0.095290 | 0.238014 | 0.267132 | 0.002273 | 0.001804 | 0.001192 |
| is_lvalue_reference_test.test | RUN | 0.098461 | 0.253056 | 0.295540 | 0.001424 | 0.001802 | 0.001508 |
| is_list_constructible_test.test | RUN | 0.121255 | 0.297915 | 0.347547 | 0.001724 | 0.001992 | 0.001531 |
| is_integral_test.test | RUN | 0.113457 | 0.362805 | 0.466783 | 0.001593 | 0.001672 | 0.001449 |
| is_fundamental_test.test | RUN | 0.113236 | 0.359659 | 0.483605 | 0.001356 | 0.001418 | 0.001328 |
| is_function_test.test | RUN | 0.092855 | 0.235484 | 0.291517 | 0.001117 | 0.001703 | 0.001468 |
| is_floating_point_test.test | RUN | 0.098193 | 0.249759 | 0.309158 | 0.001734 | 0.001630 | 0.001510 |
| is_float_test.test | RUN | 0.095437 | 0.240215 | 0.320809 | 0.001420 | 0.001795 | 0.001579 |
| is_final_test.test | RUN | 0.094349 | 0.252204 | 0.306454 | 0.001398 | 0.001387 | 0.001153 |
| is_enum_test.test | RUN | 0.086919 | 0.214085 | 0.256512 | 0.001415 | 0.001545 | 0.001390 |
| is_empty_test.test | RUN | 0.097996 | 0.235098 | 0.285506 | 0.001716 | 0.001734 | 0.001519 |
| is_detected_test.test | RUN | 0.088452 | 0.206549 | 0.245319 | 0.001652 | 0.001732 | 0.001524 |
| is_detected_exact_test.test | RUN | 0.084941 | 0.202982 | 0.227826 | 0.001539 | 0.001839 | 0.001234 |
| is_destructible_test.test | RUN | 0.117037 | 0.386840 | 0.546540 | 0.001412 | 0.001785 | 0.001471 |
| is_default_constr_test.test | RUN | 0.121353 | 0.412865 | 0.581403 | 0.001703 | 0.001693 | 0.001448 |
| is_copy_constructible_test.test | RUN | 0.128034 | 0.418302 | 0.609551 | 0.001627 | 0.001754 | 0.001204 |
| is_copy_assignable_test.test | RUN | 0.124826 | 0.411083 | 0.591236 | 0.001437 | 0.001681 | 0.001395 |
| is_convertible_test.test | RUN | 0.120759 | 0.366919 | 0.461859 | 0.001356 | 0.001703 | 0.001356 |
| is_constructible_test.test | RUN | 0.104088 | 0.262228 | 0.329745 | 0.001778 | 0.001432 | 0.001417 |
| is_const_test.test | RUN | 0.092218 | 0.225270 | 0.292451 | 0.001600 | 0.001759 | 0.001345 |
| is_compound_test.test | RUN | 0.088421 | 0.201543 | 0.242994 | 0.001216 | 0.001572 | 0.001521 |
| is_complex_test.test | RUN | 0.119568 | 0.270449 | 0.331232 | 0.001734 | 0.001603 | 0.001388 |
| is_complete_test.test | RUN | 0.103852 | 0.272851 | 0.363246 | 0.001697 | 0.001780 | 0.001551 |
| is_class_test.test | RUN | 0.094634 | 0.237758 | 0.319698 | 0.001674 | 0.001756 | 0.001523 |
| is_bounded_array_test.test | RUN | 0.091251 | 0.220264 | 0.282927 | 0.001433 | 0.001231 | 0.001251 |
| is_base_of_test.test | RUN | 0.098854 | 0.242874 | 0.293500 | 0.001275 | 0.001676 | 0.001500 |
| is_base_and_derived_test.test | RUN | 0.095076 | 0.230948 | 0.302384 | 0.001480 | 0.001674 | 0.001349 |
| is_assignable_test.test | RUN | 0.113469 | 0.322034 | 0.437672 | 0.001410 | 0.001696 | 0.001376 |
| is_array_test.test | RUN | 0.091467 | 0.221850 | 0.283324 | 0.001583 | 0.001404 | 0.001555 |
| is_arithmetic_test.test | RUN | 0.114511 | 0.326282 | 0.444273 | 0.001577 | 0.001931 | 0.001486 |
| is_abstract_test.test | RUN | 0.232462 | 0.970903 | 1.563189 | 0.001628 | 0.001649 | 0.001244 |
| integral_constant_test.test | RUN | 0.018204 | 0.040316 | 0.040317 | 0.000759 | 0.000762 | 0.001451 |
| has_virtual_destructor_test.test | RUN | 0.131250 | 0.277835 | 0.345919 | 0.001436 | 0.001830 | 0.001540 |
| has_unary_plus_test.test | RUN | 0.184552 | 1.073890 | 1.191937 | 0.001529 | 0.001776 | 0.001567 |
| has_unary_minus_test.test | RUN | 0.180838 | 1.017804 | 1.180240 | 0.001635 | 0.001736 | 0.001430 |
| has_trivial_move_constructor_test.test | RUN | 0.126917 | 0.388993 | 0.608414 | 0.001530 | 0.001658 | 0.001542 |
| has_trivial_move_assign_test.test | RUN | 0.130248 | 0.413803 | 0.570213 | 0.001651 | 0.001812 | 0.001423 |
| has_trivial_destructor_test.test | RUN | 0.128338 | 0.405808 | 0.586105 | 0.001638 | 0.001836 | 0.001403 |
| has_trivial_copy_test.test | RUN | 0.137743 | 0.432381 | 0.586713 | 0.001808 | 0.001643 | 0.001281 |
| has_trivial_constr_test.test | RUN | 0.140125 | 0.429034 | 0.602840 | 0.001703 | 0.001981 | 0.001674 |
| has_trivial_assign_test.test | RUN | 0.133086 | 0.417730 | 0.614298 | 0.001751 | 0.001908 | 0.001608 |
| has_right_shift_test.test | RUN | 0.193888 | 0.749897 | 1.300765 | 0.001544 | 0.001471 | 0.001428 |
| has_right_shift_assign_test.test | RUN | 0.180025 | 0.722468 | 1.225230 | 0.001437 | 0.001581 | 0.001554 |
| has_prefix_classes3_test.test | RUN | 0.137165 | 0.388230 | 0.650149 | 0.001654 | 0.001583 | 0.001721 |
| has_prefix_classes2_test.test | RUN | 0.137887 | 0.421677 | 0.683059 | 0.001398 | 0.001657 | 0.001478 |
| has_prefix_classes1_test.test | RUN | 0.140533 | 0.427113 | 0.631319 | 0.001939 | 0.001520 | 0.001636 |
| has_prefix_classes0_test.test | RUN | 0.136402 | 0.417964 | 0.636730 | 0.001289 | 0.001329 | 0.001485 |
| has_pre_increment_test.test | RUN | 0.175107 | 1.017005 | 1.181066 | 0.001366 | 0.001677 | 0.001475 |
| has_pre_decrement_test.test | RUN | 0.175517 | 1.010686 | 1.191084 | 0.001453 | 0.001424 | 0.001245 |
| has_postfix_classes3_test.test | RUN | 0.132982 | 0.429042 | 0.609667 | 0.001451 | 0.001642 | 0.001603 |
| has_postfix_classes2_test.test | RUN | 0.134997 | 0.416509 | 0.594141 | 0.001722 | 0.001688 | 0.001598 |
| has_postfix_classes1_test.test | RUN | 0.139371 | 0.460603 | 0.624455 | 0.001567 | 0.001728 | 0.001441 |
| has_postfix_classes0_test.test | RUN | 0.136524 | 0.453808 | 0.669416 | 0.001408 | 0.001395 | 0.001610 |
| has_post_increment_test.test | RUN | 0.175931 | 1.077260 | 1.220240 | 0.001466 | 0.001795 | 0.001419 |
| has_post_decrement_test.test | RUN | 0.172593 | 1.067419 | 1.238690 | 0.001649 | 0.001370 | 0.001498 |
| has_plus_test.test | RUN | 0.170667 | 0.747780 | 1.165219 | 0.001546 | 0.001788 | 0.001469 |
| has_plus_assign_test.test | RUN | 0.176159 | 0.740718 | 1.181358 | 0.001309 | 0.001603 | 0.001327 |
| has_operator_new_test.test | RUN | 0.122770 | 0.390945 | 0.523752 | 0.001642 | 0.001672 | 0.001325 |
| has_nothrow_destructor_test.test | RUN | 0.142286 | 0.451475 | 0.590636 | 0.001812 | 0.001618 | 0.001486 |
| has_nothrow_copy_test.test | RUN | 0.160186 | 0.402250 | 0.567889 | 0.001588 | 0.001528 | 0.001480 |
| has_nothrow_constr_test.test | RUN | 0.149178 | 0.400865 | 0.584240 | 0.001363 | 0.001521 | 0.001444 |
| has_nothrow_assign_test.test | RUN | 0.174580 | 0.397013 | 0.572231 | 0.001853 | 0.002018 | 0.001308 |
| has_not_equal_to_test.test | RUN | 0.199521 | 0.969434 | 1.181413 | 0.001772 | 0.001726 | 0.001511 |
| has_negate_test.test | RUN | 0.176924 | 0.737780 | 1.119974 | 0.001329 | 0.001598 | 0.001479 |
| has_multiplies_test.test | RUN | 0.177130 | 0.747154 | 1.235557 | 0.001431 | 0.001882 | 0.001348 |
| has_multiplies_assign_test.test | RUN | 0.184922 | 0.749212 | 1.232817 | 0.001672 | 0.001902 | 0.001263 |
| has_modulus_test.test | RUN | 0.179962 | 0.739942 | 1.157984 | 0.001632 | 0.001810 | 0.001471 |
| has_modulus_assign_test.test | RUN | 0.178699 | 0.743980 | 1.144038 | 0.001324 | 0.001770 | 0.001456 |
| has_minus_test.test | RUN | 0.179421 | 0.779548 | 1.224452 | 0.001392 | 0.001709 | 0.001347 |
| has_minus_assign_test.test | RUN | 0.186224 | 0.743307 | 1.227215 | 0.001708 | 0.001780 | 0.001256 |
| has_logical_or_test.test | RUN | 0.177668 | 0.731198 | 1.194767 | 0.001570 | 0.001443 | 0.001438 |
| has_logical_not_test.test | RUN | 0.171203 | 0.674847 | 1.143479 | 0.001634 | 0.001433 | 0.001428 |
| has_logical_and_test.test | RUN | 0.176014 | 0.740451 | 1.234511 | 0.001269 | 0.001848 | 0.001305 |
| has_less_test.test | RUN | 0.182367 | 0.961156 | 1.224401 | 0.001466 | 0.001720 | 0.001149 |
| has_less_equal_test.test | RUN | 0.180973 | 0.991331 | 1.189127 | 0.001614 | 0.001376 | 0.001412 |
| has_left_shift_test.test | RUN | 0.195343 | 0.938822 | 1.503731 | 0.001376 | 0.001648 | 0.001637 |
| has_left_shift_assign_test.test | RUN | 0.180361 | 0.707905 | 1.219725 | 0.001258 | 0.001553 | 0.001485 |
| has_greater_test.test | RUN | 0.181467 | 0.994669 | 1.219215 | 0.001566 | 0.001721 | 0.001387 |
| has_greater_equal_test.test | RUN | 0.179776 | 0.945438 | 1.137944 | 0.001486 | 0.001388 | 0.001529 |
| has_equal_to_test.test | RUN | 0.178200 | 0.919162 | 1.208515 | 0.001261 | 0.001748 | 0.001376 |
| has_divides_test.test | RUN | 0.177890 | 0.719925 | 1.149628 | 0.001516 | 0.001609 | 0.001442 |
| has_divides_assign_test.test | RUN | 0.182263 | 0.720274 | 1.210650 | 0.001381 | 0.001841 | 0.001355 |
| has_dereference_test.test | RUN | 0.172564 | 0.693291 | 1.113767 | 0.001703 | 0.001734 | 0.001361 |
| has_complement_test.test | RUN | 0.172621 | 1.023449 | 1.179967 | 0.001130 | 0.001780 | 0.001396 |
| has_bit_xor_test.test | RUN | 0.176316 | 0.734442 | 1.146737 | 0.001247 | 0.001764 | 0.001341 |
| has_bit_xor_assign_test.test | RUN | 0.183442 | 0.709234 | 1.157998 | 0.003013 | 0.001766 | 0.001444 |
| has_bit_or_test.test | RUN | 0.174974 | 0.721528 | 1.124943 | 0.001706 | 0.001581 | 0.001425 |
| has_bit_or_assign_test.test | RUN | 0.179327 | 0.719227 | 1.213478 | 0.001570 | 0.001916 | 0.001597 |
| has_bit_and_test.test | RUN | 0.174605 | 0.773097 | 1.184045 | 0.001134 | 0.001746 | 0.001478 |
| has_bit_and_assign_test.test | RUN | 0.181733 | 0.756970 | 1.223730 | 0.001515 | 0.001738 | 0.001776 |
| has_binary_classes9_test.test | RUN | 0.200118 | 0.866130 | 1.297555 | 0.001347 | 0.001772 | 0.001434 |
| has_binary_classes8_test.test | RUN | 0.200977 | 0.840154 | 1.357871 | 0.001245 | 0.001665 | 0.001656 |
| has_binary_classes7_test.test | RUN | 0.203738 | 0.820994 | 1.353337 | 0.001430 | 0.001806 | 0.001240 |
| has_binary_classes6_test.test | RUN | 0.194091 | 0.836245 | 1.342512 | 0.001572 | 0.001880 | 0.001510 |
| has_binary_classes5_test.test | RUN | 0.194686 | 0.883040 | 1.315333 | 0.001605 | 0.001646 | 0.001356 |
| has_binary_classes4_test.test | RUN | 0.197053 | 0.866351 | 1.371511 | 0.001318 | 0.001774 | 0.001331 |
| has_binary_classes3_test.test | RUN | 0.195865 | 0.853610 | 1.340447 | 0.001327 | 0.001768 | 0.001235 |
| has_binary_classes2_test.test | RUN | 0.194691 | 0.847540 | 1.306751 | 0.001333 | 0.001960 | 0.001367 |
| has_binary_classes1_test.test | RUN | 0.189948 | 0.892536 | 1.287110 | 0.001512 | 0.001810 | 0.001268 |
| has_binary_classes0_test.test | RUN | 0.189380 | 0.942905 | 1.293644 | 0.001600 | 0.001434 | 0.001584 |
| function_traits_test.test | RUN | 0.091223 | 0.224610 | 0.304657 | 0.001361 | 0.001812 | 0.001318 |
| floating_point_promotion_test.test | RUN | 0.094695 | 0.238174 | 0.258580 | 0.001606 | 0.001780 | 0.001284 |
| extent_test.test | RUN | 0.095348 | 0.228191 | 0.296700 | 0.001427 | 0.001715 | 0.001455 |
| enable_if_test.test | RUN | 0.090201 | 0.207005 | 0.228563 | 0.001348 | 0.001789 | 0.001222 |
| disjunction_test.test | RUN | 0.089358 | 0.215368 | 0.245242 | 0.001490 | 0.001526 | 0.001233 |
| detected_test.test | RUN | 0.090843 | 0.190944 | 0.225934 | 0.001593 | 0.001683 | 0.001376 |
| detected_or_test.test | RUN | 0.089515 | 0.205067 | 0.243531 | 0.001496 | 0.001711 | 0.001203 |
| decay_test.test | RUN | 0.216710 | 0.779123 | 1.420239 | 0.001432 | 0.002334 | 0.001575 |
| cxx14_aliases_test.test | RUN | 0.141958 | 0.288408 | 0.363087 | 0.001748 | 0.001754 | 0.001604 |
| copy_reference_test.test | RUN | 0.091270 | 0.200449 | 0.247486 | 0.001500 | 0.001652 | 0.001482 |
| copy_cv_test.test | RUN | 0.091098 | 0.207637 | 0.279948 | 0.001483 | 0.002773 | 0.001329 |
| copy_cv_ref_test.test | RUN | 0.126008 | 0.382376 | 0.630075 | 0.001399 | 0.001429 | 0.001455 |
| conjunction_test.test | RUN | 0.087530 | 0.204952 | 0.244757 | 0.001460 | 0.001509 | 0.001608 |
| conditional_test.test | RUN | 0.090115 | 0.201962 | 0.251013 | 0.001773 | 0.001729 | 0.001517 |
| common_type_test.test | RUN | 0.119561 | 0.296611 | 0.473577 | 0.001495 | 0.001669 | 0.001452 |
| common_type_sfinae_test.test | RUN | 0.093290 | 0.186537 | 0.231014 | 0.001745 | 0.001482 | 0.001588 |
| common_type_sfinae2_test.test | RUN | 0.094245 | 0.203569 | 0.239525 | 0.001584 | 0.001235 | 0.001581 |
| common_type_6_test.test | RUN | 0.099108 | 0.206506 | 0.272248 | 0.001688 | 0.001436 | 0.001335 |
| common_type_5_test.test | RUN | 0.098467 | 0.206286 | 0.259715 | 0.001359 | 0.001786 | 0.001658 |
| common_type_4_test.test | RUN | 0.099725 | 0.220743 | 0.290208 | 0.001709 | 0.001363 | 0.001390 |
| common_type_3_test.test | RUN | 0.089271 | 0.185390 | 0.231729 | 0.001387 | 0.001486 | 0.001605 |
| common_type_2_test.test | RUN | 0.117520 | 0.288982 | 0.444851 | 0.001737 | 0.001664 | 0.001389 |
| alignment_of_test.test | RUN | 0.097025 | 0.234397 | 0.304935 | 0.001394 | 0.001852 | 0.001515 |
| alignment_of_a2_test.test | RUN | 0.098166 | 0.231341 | 0.324230 | 0.001784 | 0.001483 | 0.001484 |
| aligned_storage_test.test | RUN | 0.096269 | 0.225391 | 0.294403 | 0.001568 | 0.001493 | 0.001612 |
| aligned_storage_empy_test.test | RUN | 0.112243 | 0.262955 | 0.382042 | 0.001559 | 0.001696 | 0.001634 |
| aligned_storage_a2_test.test | RUN | 0.098726 | 0.230351 | 0.284062 | 0.001854 | 0.001856 | 0.001583 |
| add_volatile_test.test | RUN | 0.195728 | 0.645774 | 1.268061 | 0.001742 | 0.001688 | 0.001607 |
| add_rvalue_reference_test.test | RUN | 0.223513 | 0.733614 | 1.412225 | 0.001718 | 0.001438 | 0.001668 |
| add_reference_test.test | RUN | 0.208925 | 0.710048 | 1.413362 | 0.001709 | 0.001747 | 0.001640 |
| add_pointer_test.test | RUN | 0.142241 | 0.407881 | 0.744333 | 0.001515 | 0.001535 | 0.001465 |
| add_lvalue_reference_test.test | RUN | 0.212131 | 0.725560 | 1.469405 | 0.001504 | 0.001764 | 0.001679 |
| add_cv_test.test | RUN | 0.200401 | 0.681547 | 1.374565 | 0.001546 | 0.001569 | 0.001295 |
| add_const_test.test | RUN | 0.200359 | 0.680313 | 1.329609 | 0.001447 | 0.001460 | 0.001454 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.085358 | 0.187271 | 0.228628 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.088950 | 0.186128 | 0.240463 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.084220 | 0.181673 | 0.225336 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.082946 | 0.181870 | 0.223895 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.084111 | 0.181549 | 0.217417 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.083720 | 0.182236 | 0.218872 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.084793 | 0.185728 | 0.220788 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.080738 | 0.177360 | 0.222939 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.087106 | 0.173333 | 0.225062 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.085756 | 0.179444 | 0.233893 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.085785 | 0.182638 | 0.272235 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.086661 | 0.175482 | 0.270334 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.088070 | 0.177500 | 0.265343 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.085802 | 0.186313 | 0.225238 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.084704 | 0.183289 | 0.219241 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.085688 | 0.185647 | 0.218644 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.086254 | 0.184177 | 0.219111 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.086897 | 0.190510 | 0.219230 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.086141 | 0.188965 | 0.217587 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.087303 | 0.179299 | 0.214380 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.087697 | 0.177156 | 0.219720 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.087254 | 0.180429 | 0.217237 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.132329 | 0.381335 | 0.576311 | 0.001682 | 0.001416 | 0.001466 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.126617 | 0.369922 | 0.577064 | 0.001516 | 0.001262 | 0.001330 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.128824 | 0.373865 | 0.566989 | 0.001312 | 0.001368 | 0.001606 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.128295 | 0.378036 | 0.541128 | 0.001749 | 0.001334 | 0.001081 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.088265 | 0.272841 | 0.330431 | 0.001332 | 0.001204 | 0.001052 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.974×, 0.984× | 1.005× |
| clang | 1.021×† | 1.048×, 0.994× | 1.019× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000888s | 0.000840s | 0.000867s | byte equality observed |
| add_cv_test.test | 10 | 0.000896s | 0.000846s | 0.000888s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000887s | 0.000839s | 0.000917s | byte equality observed |
| add_pointer_test.test | 10 | 0.000881s | 0.000850s | 0.000887s | byte equality observed |
| add_reference_test.test | 10 | 0.000897s | 0.000868s | 0.000893s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000900s | 0.000855s | 0.000889s | byte equality observed |
| add_volatile_test.test | 10 | 0.000889s | 0.000856s | 0.000895s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000970s | 0.000961s | 0.000966s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000882s | 0.000850s | 0.000895s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000972s | 0.000943s | 0.000985s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000887s | 0.000839s | 0.000886s | byte equality observed |
| alignment_of_test.test | 10 | 0.000879s | 0.000853s | 0.000902s | byte equality observed |
| common_type_2_test.test | 10 | 0.000887s | 0.000878s | 0.000888s | byte equality observed |
| common_type_3_test.test | 10 | 0.000882s | 0.000853s | 0.000892s | byte equality observed |
| common_type_4_test.test | 10 | 0.000898s | 0.000875s | 0.000883s | byte equality observed |
| common_type_5_test.test | 10 | 0.000898s | 0.000862s | 0.000892s | byte equality observed |
| common_type_6_test.test | 9 | 0.000873s | 0.000868s | 0.000888s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000885s | 0.000851s | 0.000892s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000907s | 0.000845s | 0.000895s | byte equality observed |
| common_type_test.test | 10 | 0.000877s | 0.000853s | 0.000895s | byte equality observed |
| conditional_test.test | 10 | 0.000889s | 0.000867s | 0.000904s | byte equality observed |
| conjunction_test.test | 10 | 0.000888s | 0.000868s | 0.000890s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000889s | 0.000860s | 0.000893s | byte equality observed |
| copy_cv_test.test | 10 | 0.000891s | 0.000867s | 0.000884s | byte equality observed |
| copy_reference_test.test | 10 | 0.000869s | 0.000854s | 0.000888s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000875s | 0.000883s | 0.000890s | byte equality observed |
| decay_test.test | 10 | 0.000911s | 0.000854s | 0.000903s | byte equality observed |
| detected_or_test.test | 10 | 0.000891s | 0.000868s | 0.000903s | byte equality observed |
| detected_test.test | 10 | 0.000894s | 0.000861s | 0.000876s | byte equality observed |
| disjunction_test.test | 10 | 0.000893s | 0.000855s | 0.000899s | byte equality observed |
| enable_if_test.test | 10 | 0.000886s | 0.000860s | 0.000890s | byte equality observed |
| extent_test.test | 10 | 0.000878s | 0.000860s | 0.000893s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000885s | 0.000863s | 0.000880s | byte equality observed |
| function_traits_test.test | 10 | 0.000893s | 0.000867s | 0.000888s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000891s | 0.000867s | 0.000896s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000903s | 0.000858s | 0.000888s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000884s | 0.000872s | 0.000924s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000900s | 0.000852s | 0.000911s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000885s | 0.000871s | 0.000887s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000906s | 0.000867s | 0.000904s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000888s | 0.000848s | 0.000900s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000872s | 0.000859s | 0.000902s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000903s | 0.000848s | 0.000898s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000892s | 0.000840s | 0.000883s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000925s | 0.000852s | 0.000893s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000884s | 0.000865s | 0.000894s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000899s | 0.000861s | 0.000893s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000876s | 0.000853s | 0.000893s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000881s | 0.000859s | 0.000895s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000884s | 0.000847s | 0.000872s | byte equality observed |
| has_complement_test.test | 10 | 0.000870s | 0.000858s | 0.000898s | byte equality observed |
| has_dereference_test.test | 10 | 0.000885s | 0.000857s | 0.000879s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000873s | 0.000857s | 0.000886s | byte equality observed |
| has_divides_test.test | 10 | 0.000897s | 0.000876s | 0.000890s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000877s | 0.000868s | 0.000888s | byte equality observed |
| has_greater_equal_test.test | 9 | 0.000861s | 0.000855s | 0.000909s | byte equality observed |
| has_greater_test.test | 10 | 0.000857s | 0.000844s | 0.000878s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000880s | 0.000859s | 0.000874s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000884s | 0.000847s | 0.000907s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000874s | 0.000866s | 0.000894s | byte equality observed |
| has_less_test.test | 10 | 0.000889s | 0.000863s | 0.000893s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000873s | 0.000868s | 0.000901s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000877s | 0.000855s | 0.000890s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000884s | 0.000867s | 0.000909s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000873s | 0.000856s | 0.000875s | byte equality observed |
| has_minus_test.test | 10 | 0.000865s | 0.000868s | 0.000902s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000868s | 0.000838s | 0.000898s | byte equality observed |
| has_modulus_test.test | 10 | 0.000856s | 0.000869s | 0.000901s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000860s | 0.000852s | 0.000911s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000860s | 0.000877s | 0.000888s | byte equality observed |
| has_negate_test.test | 9 | 0.000882s | 0.000867s | 0.000885s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000856s | 0.000870s | 0.000883s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000870s | 0.000857s | 0.000896s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 7 | 0.000875s | 0.000864s | 0.000885s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000871s | 0.000847s | 0.000891s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000855s | 0.000859s | 0.000871s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000881s | 0.000885s | 0.000912s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000882s | 0.000870s | 0.000880s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000876s | 0.000877s | 0.000914s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000881s | 0.000857s | 0.000890s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000884s | 0.000875s | 0.000898s | byte equality observed |
| has_plus_test.test | 10 | 0.000891s | 0.000855s | 0.000869s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000878s | 0.000873s | 0.000884s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000884s | 0.000856s | 0.000906s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000887s | 0.000861s | 0.000892s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000885s | 0.000870s | 0.000910s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000885s | 0.000857s | 0.000884s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000868s | 0.000860s | 0.000913s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000894s | 0.000859s | 0.000877s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000890s | 0.000863s | 0.000890s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000890s | 0.000854s | 0.000880s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000876s | 0.000874s | 0.000888s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000879s | 0.000863s | 0.000898s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000874s | 0.000855s | 0.000889s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000877s | 0.000842s | 0.000873s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000879s | 0.000858s | 0.000890s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000925s | 0.000911s | 0.000931s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000926s | 0.000889s | 0.000923s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000920s | 0.000917s | 0.000955s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000881s | 0.000861s | 0.000877s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000880s | 0.000868s | 0.000864s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000877s | 0.000851s | 0.000870s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000888s | 0.000852s | 0.000871s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000886s | 0.000861s | 0.000872s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000896s | 0.000888s | 0.000872s | byte equality observed |
| integral_constant_test.test | 10 | 0.000410s | 0.000407s | 0.000880s | byte equality observed |
| is_abstract_test.test | 10 | 0.000882s | 0.000858s | 0.000870s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000874s | 0.000867s | 0.000878s | byte equality observed |
| is_array_test.test | 10 | 0.000881s | 0.000863s | 0.000885s | byte equality observed |
| is_assignable_test.test | 10 | 0.000889s | 0.000862s | 0.000887s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000882s | 0.000864s | 0.000923s | byte equality observed |
| is_base_of_test.test | 10 | 0.000874s | 0.000853s | 0.000887s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000878s | 0.000874s | 0.000881s | byte equality observed |
| is_class_test.test | 10 | 0.000865s | 0.000874s | 0.000888s | byte equality observed |
| is_complete_test.test | 10 | 0.000878s | 0.000850s | 0.000883s | byte equality observed |
| is_complex_test.test | 10 | 0.000865s | 0.000862s | 0.000895s | byte equality observed |
| is_compound_test.test | 10 | 0.000866s | 0.000853s | 0.000896s | byte equality observed |
| is_const_test.test | 10 | 0.000872s | 0.000866s | 0.000886s | byte equality observed |
| is_constructible_test.test | 10 | 0.000860s | 0.000859s | 0.000894s | byte equality observed |
| is_convertible_test.test | 10 | 0.000885s | 0.000861s | 0.000881s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000871s | 0.000851s | 0.000894s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000894s | 0.000871s | 0.000883s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000888s | 0.000856s | 0.000887s | byte equality observed |
| is_destructible_test.test | 10 | 0.000888s | 0.000859s | 0.000867s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000898s | 0.000858s | 0.000888s | byte equality observed |
| is_detected_test.test | 10 | 0.000879s | 0.000849s | 0.000874s | byte equality observed |
| is_empty_test.test | 10 | 0.000888s | 0.000845s | 0.000865s | byte equality observed |
| is_enum_test.test | 10 | 0.000881s | 0.000859s | 0.000872s | byte equality observed |
| is_final_test.test | 10 | 0.000877s | 0.000855s | 0.000880s | byte equality observed |
| is_float_test.test | 10 | 0.000878s | 0.000860s | 0.000880s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000884s | 0.000848s | 0.000878s | byte equality observed |
| is_function_test.test | 10 | 0.000878s | 0.000873s | 0.000876s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000882s | 0.000847s | 0.000885s | byte equality observed |
| is_integral_test.test | 10 | 0.000876s | 0.000847s | 0.000904s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000878s | 0.000869s | 0.000889s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000883s | 0.000855s | 0.000886s | byte equality observed |
| is_member_func_test.test | 10 | 0.000887s | 0.000862s | 0.000905s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000880s | 0.000869s | 0.000886s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000880s | 0.000867s | 0.000887s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000872s | 0.000873s | 0.000858s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000881s | 0.000847s | 0.000876s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000881s | 0.000873s | 0.000860s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000885s | 0.000849s | 0.000872s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000870s | 0.000870s | 0.000877s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000868s | 0.000854s | 0.000862s | byte equality observed |
| is_object_test.test | 10 | 0.000877s | 0.000883s | 0.000871s | byte equality observed |
| is_pod_test.test | 10 | 0.000883s | 0.000843s | 0.000862s | byte equality observed |
| is_pointer_test.test | 10 | 0.000866s | 0.000858s | 0.000863s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000879s | 0.000856s | 0.000861s | byte equality observed |
| is_reference_test.test | 10 | 0.000877s | 0.000871s | 0.000875s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000876s | 0.000863s | 0.000904s | byte equality observed |
| is_same_test.test | 10 | 0.000882s | 0.000850s | 0.000877s | byte equality observed |
| is_scalar_test.test | 10 | 0.000888s | 0.000865s | 0.000896s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000875s | 0.000867s | 0.000882s | byte equality observed |
| is_signed_test.test | 10 | 0.000898s | 0.000849s | 0.000898s | byte equality observed |
| is_stateless_test.test | 10 | 0.000892s | 0.000843s | 0.000878s | byte equality observed |
| is_swappable_test.test | 10 | 0.000889s | 0.000864s | 0.000874s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000914s | 0.000873s | 0.000920s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000874s | 0.000857s | 0.000888s | byte equality observed |
| is_union_test.test | 10 | 0.000886s | 0.000869s | 0.000882s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000879s | 0.000861s | 0.000897s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000884s | 0.000870s | 0.000892s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000864s | 0.000853s | 0.000892s | byte equality observed |
| is_void_test.test | 10 | 0.000883s | 0.000849s | 0.000898s | byte equality observed |
| is_volatile_test.test | 10 | 0.000853s | 0.000876s | 0.000890s | byte equality observed |
| make_signed_test.test | 10 | 0.000883s | 0.000861s | 0.000886s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000887s | 0.000850s | 0.000900s | byte equality observed |
| make_void_test.test | 10 | 0.000888s | 0.000883s | 0.000907s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000416s | 0.000411s | 0.000903s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000415s | 0.000411s | 0.000884s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000409s | 0.000407s | 0.000881s | byte equality observed |
| negation_test.test | 10 | 0.000901s | 0.000879s | 0.000906s | byte equality observed |
| promote_basic_test.test | 10 | 0.000412s | 0.000410s | 0.000900s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000419s | 0.000414s | 0.000864s | byte equality observed |
| promote_enum_test.test | 10 | 0.000421s | 0.000409s | 0.000886s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000405s | 0.000399s | 0.000885s | byte equality observed |
| rank_test.test | 10 | 0.000884s | 0.000874s | 0.000873s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000881s | 0.000852s | 0.000883s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000891s | 0.000851s | 0.000895s | byte equality observed |
| remove_const_test.test | 10 | 0.000902s | 0.000862s | 0.000884s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000888s | 0.000846s | 0.000878s | byte equality observed |
| remove_cv_test.test | 10 | 0.000904s | 0.000874s | 0.000898s | byte equality observed |
| remove_extent_test.test | 10 | 0.000890s | 0.000890s | 0.000879s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000892s | 0.000885s | 0.000897s | byte equality observed |
| remove_reference_test.test | 10 | 0.000880s | 0.000852s | 0.000863s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000873s | 0.000884s | 0.000885s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000871s | 0.000871s | 0.000881s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000893s | 0.000883s | 0.000874s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000866s | 0.000869s | 0.000861s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000878s | 0.000876s | 0.000870s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000878s | 0.000882s | 0.000867s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000887s | 0.000869s | 0.000883s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000876s | 0.000893s | 0.000860s | byte equality observed |
| type_identity_test.test | 10 | 0.000880s | 0.000873s | 0.000877s | byte equality observed |
| type_traits_test.test | 10 | 0.000416s | 0.000398s | 0.000872s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000984s | 0.000991s | 0.000982s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
