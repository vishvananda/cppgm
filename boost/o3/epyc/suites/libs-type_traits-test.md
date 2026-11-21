# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.116890 | 0.338159 | 0.517292 | 0.001435 | 0.001696 | 0.001938 |
| type_traits_test.test | RUN | 0.165208 | 0.348675 | 0.538893 | 0.000581 | 0.000656 | 0.001701 |
| type_identity_test.test | RUN | 0.307160 | 1.186203 | 2.987891 | 0.001608 | 0.001766 | 0.001770 |
| tricky_rvalue_test.test | RUN | 0.109332 | 0.267784 | 0.411743 | 0.001762 | 0.001663 | 0.001725 |
| tricky_partial_spec_test.test | RUN | 0.133253 | 0.380199 | 0.669877 | 0.001464 | 0.002030 | 0.001713 |
| tricky_is_enum_test.test | RUN | 0.103834 | 0.247459 | 0.380137 | 0.001715 | 0.001610 | 0.001886 |
| tricky_incomplete_type_test.test | RUN | 0.175480 | 0.385474 | 0.624668 | 0.001496 | 0.001504 | 0.001400 |
| tricky_function_type_test.test | RUN | 0.144438 | 0.396551 | 0.759842 | 0.001750 | 0.001661 | 0.001722 |
| tricky_add_pointer_test.test | RUN | 0.208785 | 0.693472 | 1.645170 | 0.001628 | 0.001865 | 0.001894 |
| tricky_abstract_type_test.test | RUN | 0.111888 | 0.258067 | 0.397330 | 0.001806 | 0.001674 | 0.001588 |
| remove_volatile_test.test | RUN | 0.278862 | 1.028047 | 2.663182 | 0.001785 | 0.001848 | 0.001439 |
| remove_reference_test.test | RUN | 0.292840 | 1.073633 | 2.758342 | 0.001778 | 0.001776 | 0.001920 |
| remove_pointer_test.test | RUN | 0.303376 | 1.114743 | 2.913022 | 0.001767 | 0.001660 | 0.001878 |
| remove_extent_test.test | RUN | 0.294933 | 1.068375 | 2.860851 | 0.001597 | 0.001788 | 0.001888 |
| remove_cv_test.test | RUN | 0.295278 | 1.036889 | 2.796728 | 0.001705 | 0.001776 | 0.001865 |
| remove_cv_ref_test.test | RUN | 0.619879 | 2.549869 | 6.788691 | 0.001633 | 0.001817 | 0.001834 |
| remove_const_test.test | RUN | 0.293821 | 1.013320 | 2.611836 | 0.001672 | 0.001830 | 0.001832 |
| remove_bounds_test.test | RUN | 0.293867 | 1.078842 | 2.765329 | 0.001654 | 0.001524 | 0.001874 |
| remove_all_extents_test.test | RUN | 0.299694 | 1.032276 | 2.683697 | 0.001506 | 0.001806 | 0.001170 |
| rank_test.test | RUN | 0.113050 | 0.253647 | 0.366367 | 0.001751 | 0.001744 | 0.001806 |
| promote_mpl_test.test | RUN | 0.096348 | 0.229040 | 0.258195 | 0.000568 | 0.000548 | 0.001561 |
| promote_enum_test.test | RUN | 0.024295 | 0.058896 | 0.069205 | 0.000570 | 0.000726 | 0.001432 |
| promote_enum_msvc_bug_test.test | RUN | 0.020431 | 0.051627 | 0.058221 | 0.000550 | 0.000732 | 0.001896 |
| promote_basic_test.test | RUN | 0.025841 | 0.071197 | 0.072627 | 0.000586 | 0.000742 | 0.001684 |
| negation_test.test | RUN | 0.106806 | 0.242309 | 0.369521 | 0.001487 | 0.001608 | 0.001874 |
| mpl_interop_test3.test | RUN | 0.090590 | 0.209885 | 0.268109 | 0.000562 | 0.000756 | 0.001931 |
| mpl_interop_test2.test | RUN | 0.032908 | 0.065692 | 0.066960 | 0.000706 | 0.000747 | 0.001498 |
| mpl_interop_test1.test | RUN | 0.018312 | 0.047770 | 0.055805 | 0.000759 | 0.000601 | 0.001763 |
| make_void_test.test | RUN | 0.113021 | 0.270800 | 0.406531 | 0.001644 | 0.001774 | 0.001914 |
| make_unsigned_test.test | RUN | 0.133310 | 0.319685 | 0.599728 | 0.001659 | 0.001674 | 0.001691 |
| make_signed_test.test | RUN | 0.137415 | 0.349188 | 0.554170 | 0.001569 | 0.001273 | 0.001519 |
| is_volatile_test.test | RUN | 0.119787 | 0.304672 | 0.453181 | 0.001728 | 0.001612 | 0.001954 |
| is_void_test.test | RUN | 0.115741 | 0.285123 | 0.444471 | 0.001715 | 0.001620 | 0.001919 |
| is_virtual_base_of_test.test | RUN | 0.132164 | 0.359880 | 0.611769 | 0.001656 | 0.001701 | 0.001858 |
| is_unsigned_test.test | RUN | 0.115801 | 0.276344 | 0.404364 | 0.001606 | 0.001632 | 0.001513 |
| is_unscoped_enum_test.test | RUN | 0.113533 | 0.248093 | 0.352016 | 0.001656 | 0.001529 | 0.001854 |
| is_union_test.test | RUN | 0.125774 | 0.325777 | 0.533314 | 0.001706 | 0.001814 | 0.001892 |
| is_unbounded_array_test.test | RUN | 0.115206 | 0.272636 | 0.401071 | 0.001748 | 0.001722 | 0.001847 |
| is_trivially_copyable_test.test | RUN | 0.179214 | 0.575594 | 1.105151 | 0.001797 | 0.001719 | 0.001591 |
| is_swappable_test.test | RUN | 0.154031 | 0.442695 | 0.812179 | 0.001554 | 0.001573 | 0.001859 |
| is_stateless_test.test | RUN | 0.168667 | 0.492546 | 0.921416 | 0.001589 | 0.001762 | 0.001908 |
| is_signed_test.test | RUN | 0.118549 | 0.292958 | 0.464042 | 0.001458 | 0.001782 | 0.001629 |
| is_scoped_enum_test.test | RUN | 0.110882 | 0.235250 | 0.393935 | 0.001562 | 0.001554 | 0.001699 |
| is_scalar_test.test | RUN | 0.149027 | 0.447549 | 0.857559 | 0.001759 | 0.001806 | 0.001738 |
| is_same_test.test | RUN | 0.114549 | 0.276645 | 0.381152 | 0.001626 | 0.001620 | 0.001755 |
| is_rvalue_reference_test.test | RUN | 0.118881 | 0.311019 | 0.497706 | 0.001558 | 0.001874 | 0.001620 |
| is_reference_test.test | RUN | 0.121775 | 0.303810 | 0.468128 | 0.001784 | 0.001832 | 0.001553 |
| is_polymorphic_test.test | RUN | 0.118283 | 0.319837 | 0.515965 | 0.001739 | 0.001665 | 0.001875 |
| is_pointer_test.test | RUN | 0.120884 | 0.321043 | 0.543153 | 0.001954 | 0.001835 | 0.001808 |
| is_pod_test.test | RUN | 0.156872 | 0.528052 | 1.011730 | 0.001884 | 0.001764 | 0.001822 |
| is_object_test.test | RUN | 0.120902 | 0.256272 | 0.434432 | 0.001677 | 0.001802 | 0.001760 |
| is_nothrow_swappable_test.test | RUN | 0.167642 | 0.469116 | 0.937040 | 0.001906 | 0.001547 | 0.001890 |
| is_nothrow_move_constructible_test.test | RUN | 0.166476 | 0.502202 | 0.944790 | 0.001677 | 0.001657 | 0.001454 |
| is_nothrow_move_assignable_test.test | RUN | 0.164815 | 0.511670 | 0.948274 | 0.001519 | 0.001730 | 0.001746 |
| is_noncopyable_test.test | RUN | 0.121820 | 0.261722 | 0.386190 | 0.001551 | 0.001542 | 0.001708 |
| is_member_pointer_test.test | RUN | 0.116763 | 0.277435 | 0.410234 | 0.001830 | 0.001559 | 0.001915 |
| is_member_obj_test.test | RUN | 0.122465 | 0.249155 | 0.423698 | 0.001995 | 0.001261 | 0.001862 |
| is_member_func_test.test | RUN | 0.123772 | 0.276516 | 0.453995 | 0.001862 | 0.001558 | 0.001806 |
| is_lvalue_reference_test.test | RUN | 0.126782 | 0.287227 | 0.478616 | 0.001682 | 0.001522 | 0.001670 |
| is_list_constructible_test.test | RUN | 0.144753 | 0.393210 | 0.538398 | 0.001984 | 0.001958 | 0.001863 |
| is_integral_test.test | RUN | 0.151359 | 0.458711 | 0.766450 | 0.001532 | 0.001694 | 0.001458 |
| is_fundamental_test.test | RUN | 0.152063 | 0.473408 | 0.796497 | 0.001561 | 0.001594 | 0.001768 |
| is_function_test.test | RUN | 0.130653 | 0.318227 | 0.469519 | 0.001534 | 0.001748 | 0.001615 |
| is_floating_point_test.test | RUN | 0.117770 | 0.315975 | 0.533687 | 0.001768 | 0.001635 | 0.001654 |
| is_float_test.test | RUN | 0.119387 | 0.317686 | 0.503859 | 0.001607 | 0.001609 | 0.001760 |
| is_final_test.test | RUN | 0.115058 | 0.315251 | 0.521651 | 0.001335 | 0.001639 | 0.001653 |
| is_enum_test.test | RUN | 0.110720 | 0.270251 | 0.401918 | 0.001544 | 0.001611 | 0.001616 |
| is_empty_test.test | RUN | 0.117550 | 0.297227 | 0.460343 | 0.001736 | 0.001783 | 0.001724 |
| is_detected_test.test | RUN | 0.104682 | 0.251258 | 0.373421 | 0.001314 | 0.001582 | 0.001938 |
| is_detected_exact_test.test | RUN | 0.104174 | 0.256099 | 0.366218 | 0.001828 | 0.001478 | 0.001929 |
| is_destructible_test.test | RUN | 0.153574 | 0.489776 | 0.897791 | 0.001720 | 0.001816 | 0.001791 |
| is_default_constr_test.test | RUN | 0.152635 | 0.497690 | 0.903785 | 0.001878 | 0.001727 | 0.001850 |
| is_copy_constructible_test.test | RUN | 0.159986 | 0.527117 | 0.976138 | 0.002224 | 0.001538 | 0.001711 |
| is_copy_assignable_test.test | RUN | 0.164567 | 0.520586 | 0.954608 | 0.001532 | 0.001804 | 0.001768 |
| is_convertible_test.test | RUN | 0.160326 | 0.455218 | 0.825318 | 0.001744 | 0.001950 | 0.001813 |
| is_constructible_test.test | RUN | 0.128058 | 0.337953 | 0.579178 | 0.001742 | 0.001757 | 0.001850 |
| is_const_test.test | RUN | 0.113572 | 0.287024 | 0.445959 | 0.001571 | 0.001599 | 0.001800 |
| is_compound_test.test | RUN | 0.109970 | 0.250729 | 0.353515 | 0.001616 | 0.001813 | 0.001574 |
| is_complex_test.test | RUN | 0.145762 | 0.326936 | 0.542911 | 0.001618 | 0.001869 | 0.001601 |
| is_complete_test.test | RUN | 0.129404 | 0.339351 | 0.583973 | 0.001368 | 0.001563 | 0.001826 |
| is_class_test.test | RUN | 0.115739 | 0.309529 | 0.513745 | 0.001630 | 0.001766 | 0.001712 |
| is_bounded_array_test.test | RUN | 0.113915 | 0.263166 | 0.445954 | 0.001521 | 0.001371 | 0.001536 |
| is_base_of_test.test | RUN | 0.119200 | 0.293147 | 0.458305 | 0.001548 | 0.001843 | 0.001894 |
| is_base_and_derived_test.test | RUN | 0.118269 | 0.290568 | 0.473514 | 0.001720 | 0.001694 | 0.001679 |
| is_assignable_test.test | RUN | 0.139430 | 0.412002 | 0.749286 | 0.001600 | 0.001701 | 0.001630 |
| is_array_test.test | RUN | 0.114403 | 0.288086 | 0.453140 | 0.001655 | 0.001804 | 0.001858 |
| is_arithmetic_test.test | RUN | 0.137785 | 0.443278 | 0.815398 | 0.001570 | 0.001832 | 0.001920 |
| is_abstract_test.test | RUN | 0.258356 | 1.226604 | 2.606449 | 0.001827 | 0.001688 | 0.001887 |
| integral_constant_test.test | RUN | 0.018096 | 0.047791 | 0.048159 | 0.000738 | 0.000812 | 0.001767 |
| has_virtual_destructor_test.test | RUN | 0.123608 | 0.324859 | 0.576044 | 0.001660 | 0.001818 | 0.001849 |
| has_unary_plus_test.test | RUN | 0.234481 | 1.238376 | 1.985881 | 0.001651 | 0.001896 | 0.001892 |
| has_unary_minus_test.test | RUN | 0.234026 | 1.224231 | 1.959410 | 0.001740 | 0.001809 | 0.001859 |
| has_trivial_move_constructor_test.test | RUN | 0.167762 | 0.516203 | 0.988758 | 0.001766 | 0.001824 | 0.001815 |
| has_trivial_move_assign_test.test | RUN | 0.154903 | 0.490492 | 0.934864 | 0.001638 | 0.001850 | 0.001733 |
| has_trivial_destructor_test.test | RUN | 0.160408 | 0.504304 | 0.946234 | 0.001709 | 0.001802 | 0.001916 |
| has_trivial_copy_test.test | RUN | 0.166542 | 0.525988 | 0.990877 | 0.001866 | 0.001970 | 0.001983 |
| has_trivial_constr_test.test | RUN | 0.165958 | 0.541310 | 1.008398 | 0.001527 | 0.001918 | 0.001929 |
| has_trivial_assign_test.test | RUN | 0.156797 | 0.525265 | 0.941015 | 0.001704 | 0.001924 | 0.001988 |
| has_right_shift_test.test | RUN | 0.249059 | 1.019511 | 2.158436 | 0.001796 | 0.001980 | 0.001862 |
| has_right_shift_assign_test.test | RUN | 0.238923 | 0.985615 | 2.021780 | 0.001580 | 0.001721 | 0.001654 |
| has_prefix_classes3_test.test | RUN | 0.170555 | 0.537777 | 1.003804 | 0.001669 | 0.001842 | 0.001822 |
| has_prefix_classes2_test.test | RUN | 0.167640 | 0.551602 | 0.985496 | 0.001649 | 0.001676 | 0.001860 |
| has_prefix_classes1_test.test | RUN | 0.177466 | 0.554254 | 0.953373 | 0.001740 | 0.001826 | 0.001909 |
| has_prefix_classes0_test.test | RUN | 0.173210 | 0.552956 | 1.020251 | 0.001861 | 0.001928 | 0.001835 |
| has_pre_increment_test.test | RUN | 0.238559 | 1.375556 | 2.011063 | 0.001851 | 0.001706 | 0.001617 |
| has_pre_decrement_test.test | RUN | 0.238329 | 1.383586 | 1.909998 | 0.001602 | 0.001776 | 0.001578 |
| has_postfix_classes3_test.test | RUN | 0.179971 | 0.493189 | 1.061575 | 0.001736 | 0.002039 | 0.001850 |
| has_postfix_classes2_test.test | RUN | 0.180545 | 0.591314 | 0.995577 | 0.001794 | 0.001524 | 0.001616 |
| has_postfix_classes1_test.test | RUN | 0.179202 | 0.557659 | 1.009123 | 0.001586 | 0.001900 | 0.001894 |
| has_postfix_classes0_test.test | RUN | 0.177280 | 0.541528 | 1.042161 | 0.001615 | 0.001775 | 0.001847 |
| has_post_increment_test.test | RUN | 0.239973 | 1.321483 | 1.974785 | 0.001849 | 0.001664 | 0.001920 |
| has_post_decrement_test.test | RUN | 0.237758 | 1.314011 | 1.993393 | 0.001840 | 0.001474 | 0.001843 |
| has_plus_test.test | RUN | 0.241322 | 1.001637 | 1.968113 | 0.001646 | 0.001780 | 0.001867 |
| has_plus_assign_test.test | RUN | 0.245470 | 0.967607 | 1.941396 | 0.001660 | 0.001890 | 0.001698 |
| has_operator_new_test.test | RUN | 0.172019 | 0.487491 | 0.928952 | 0.001887 | 0.001627 | 0.001664 |
| has_nothrow_destructor_test.test | RUN | 0.181225 | 0.530478 | 0.986183 | 0.001465 | 0.001540 | 0.001579 |
| has_nothrow_copy_test.test | RUN | 0.164810 | 0.510248 | 0.973549 | 0.001667 | 0.001425 | 0.001844 |
| has_nothrow_constr_test.test | RUN | 0.166500 | 0.493312 | 0.909119 | 0.001498 | 0.001979 | 0.001876 |
| has_nothrow_assign_test.test | RUN | 0.157044 | 0.528088 | 0.935848 | 0.001807 | 0.002041 | 0.001826 |
| has_not_equal_to_test.test | RUN | 0.236701 | 1.242122 | 2.010931 | 0.001191 | 0.002021 | 0.001814 |
| has_negate_test.test | RUN | 0.216394 | 0.953009 | 1.920516 | 0.001618 | 0.001850 | 0.001755 |
| has_multiplies_test.test | RUN | 0.234001 | 0.994374 | 1.955567 | 0.001576 | 0.001743 | 0.001912 |
| has_multiplies_assign_test.test | RUN | 0.241221 | 0.920921 | 1.974141 | 0.001744 | 0.001844 | 0.001853 |
| has_modulus_test.test | RUN | 0.232615 | 0.967641 | 1.935116 | 0.001750 | 0.001872 | 0.001824 |
| has_modulus_assign_test.test | RUN | 0.234946 | 0.950209 | 1.991692 | 0.001708 | 0.001804 | 0.001780 |
| has_minus_test.test | RUN | 0.243846 | 0.964512 | 1.978488 | 0.001494 | 0.001742 | 0.001608 |
| has_minus_assign_test.test | RUN | 0.245766 | 1.005766 | 1.975284 | 0.001886 | 0.001704 | 0.001711 |
| has_logical_or_test.test | RUN | 0.238520 | 0.965678 | 2.038666 | 0.001710 | 0.002002 | 0.001771 |
| has_logical_not_test.test | RUN | 0.223692 | 0.979993 | 1.890535 | 0.001360 | 0.001838 | 0.001864 |
| has_logical_and_test.test | RUN | 0.237207 | 0.967320 | 2.031852 | 0.001497 | 0.001720 | 0.001619 |
| has_less_test.test | RUN | 0.233116 | 1.281504 | 2.036293 | 0.001799 | 0.001804 | 0.003916 |
| has_less_equal_test.test | RUN | 0.235585 | 1.271386 | 1.988380 | 0.001690 | 0.001701 | 0.001876 |
| has_left_shift_test.test | RUN | 0.256421 | 1.226344 | 2.503942 | 0.001620 | 0.001590 | 0.001883 |
| has_left_shift_assign_test.test | RUN | 0.235344 | 0.995653 | 2.074402 | 0.001427 | 0.001555 | 0.001549 |
| has_greater_test.test | RUN | 0.234710 | 1.299755 | 2.076932 | 0.001806 | 0.001893 | 0.001900 |
| has_greater_equal_test.test | RUN | 0.236659 | 1.280504 | 1.948320 | 0.001581 | 0.001852 | 0.001923 |
| has_equal_to_test.test | RUN | 0.232641 | 1.286590 | 2.091617 | 0.001418 | 0.001782 | 0.001789 |
| has_divides_test.test | RUN | 0.232919 | 0.999111 | 2.070992 | 0.001436 | 0.001610 | 0.001584 |
| has_divides_assign_test.test | RUN | 0.238890 | 0.968874 | 1.991582 | 0.001812 | 0.002022 | 0.001397 |
| has_dereference_test.test | RUN | 0.230482 | 0.940299 | 1.939576 | 0.001592 | 0.001942 | 0.001900 |
| has_complement_test.test | RUN | 0.228370 | 1.322436 | 1.958433 | 0.001491 | 0.001900 | 0.001858 |
| has_bit_xor_test.test | RUN | 0.231943 | 0.987152 | 2.064788 | 0.001504 | 0.001761 | 0.001679 |
| has_bit_xor_assign_test.test | RUN | 0.234336 | 1.021373 | 2.047917 | 0.001812 | 0.001712 | 0.001750 |
| has_bit_or_test.test | RUN | 0.233058 | 0.962076 | 1.984907 | 0.001732 | 0.001860 | 0.001833 |
| has_bit_or_assign_test.test | RUN | 0.233360 | 1.008921 | 1.963312 | 0.001480 | 0.001721 | 0.001715 |
| has_bit_and_test.test | RUN | 0.230069 | 0.966684 | 2.046773 | 0.001533 | 0.001969 | 0.001932 |
| has_bit_and_assign_test.test | RUN | 0.236940 | 1.000252 | 2.042400 | 0.001785 | 0.001818 | 0.001888 |
| has_binary_classes9_test.test | RUN | 0.261981 | 1.118988 | 2.167722 | 0.001539 | 0.001894 | 0.001934 |
| has_binary_classes8_test.test | RUN | 0.254657 | 1.190461 | 2.262886 | 0.001572 | 0.001786 | 0.001868 |
| has_binary_classes7_test.test | RUN | 0.256698 | 1.144476 | 2.205009 | 0.001381 | 0.001818 | 0.001678 |
| has_binary_classes6_test.test | RUN | 0.257025 | 1.131859 | 2.249727 | 0.001737 | 0.001702 | 0.001833 |
| has_binary_classes5_test.test | RUN | 0.256149 | 1.089323 | 2.196684 | 0.001640 | 0.001830 | 0.001867 |
| has_binary_classes4_test.test | RUN | 0.253382 | 1.181041 | 2.227327 | 0.001626 | 0.001527 | 0.001630 |
| has_binary_classes3_test.test | RUN | 0.252124 | 1.137806 | 2.212754 | 0.001504 | 0.001842 | 0.001611 |
| has_binary_classes2_test.test | RUN | 0.260503 | 1.197097 | 2.186059 | 0.001826 | 0.001705 | 0.001765 |
| has_binary_classes1_test.test | RUN | 0.258320 | 1.140073 | 2.226438 | 0.001724 | 0.001881 | 0.001822 |
| has_binary_classes0_test.test | RUN | 0.258516 | 1.230428 | 2.149238 | 0.001616 | 0.001920 | 0.001762 |
| function_traits_test.test | RUN | 0.116523 | 0.314676 | 0.463726 | 0.001726 | 0.001740 | 0.001860 |
| floating_point_promotion_test.test | RUN | 0.114617 | 0.287829 | 0.432597 | 0.001538 | 0.001754 | 0.001649 |
| extent_test.test | RUN | 0.120898 | 0.296022 | 0.450629 | 0.001627 | 0.001966 | 0.001670 |
| enable_if_test.test | RUN | 0.106858 | 0.251921 | 0.371750 | 0.001600 | 0.001663 | 0.001456 |
| disjunction_test.test | RUN | 0.111758 | 0.263030 | 0.372760 | 0.001578 | 0.001872 | 0.001827 |
| detected_test.test | RUN | 0.110679 | 0.247987 | 0.345808 | 0.001506 | 0.001820 | 0.001952 |
| detected_or_test.test | RUN | 0.111757 | 0.265313 | 0.387799 | 0.001763 | 0.001878 | 0.001547 |
| decay_test.test | RUN | 0.285363 | 1.044986 | 2.347757 | 0.001514 | 0.001705 | 0.001827 |
| cxx14_aliases_test.test | RUN | 0.174797 | 0.379988 | 0.580889 | 0.001768 | 0.001596 | 0.001872 |
| copy_reference_test.test | RUN | 0.114289 | 0.266884 | 0.397904 | 0.001344 | 0.001924 | 0.001859 |
| copy_cv_test.test | RUN | 0.111421 | 0.286954 | 0.421152 | 0.001790 | 0.001994 | 0.001756 |
| copy_cv_ref_test.test | RUN | 0.157192 | 0.474062 | 0.991111 | 0.001460 | 0.001806 | 0.001681 |
| conjunction_test.test | RUN | 0.108130 | 0.259558 | 0.377616 | 0.001769 | 0.001625 | 0.001759 |
| conditional_test.test | RUN | 0.109185 | 0.271056 | 0.372692 | 0.001292 | 0.001626 | 0.001793 |
| common_type_test.test | RUN | 0.146065 | 0.380295 | 0.730239 | 0.001708 | 0.001597 | 0.001741 |
| common_type_sfinae_test.test | RUN | 0.109495 | 0.263365 | 0.366491 | 0.001776 | 0.001626 | 0.001794 |
| common_type_sfinae2_test.test | RUN | 0.111783 | 0.272775 | 0.360029 | 0.001575 | 0.001872 | 0.001669 |
| common_type_6_test.test | RUN | 0.117189 | 0.280068 | 0.382182 | 0.001528 | 0.001657 | 0.001878 |
| common_type_5_test.test | RUN | 0.113067 | 0.265077 | 0.364144 | 0.001733 | 0.002064 | 0.001807 |
| common_type_4_test.test | RUN | 0.123306 | 0.287720 | 0.447441 | 0.001566 | 0.001720 | 0.001585 |
| common_type_3_test.test | RUN | 0.105874 | 0.244663 | 0.315514 | 0.001580 | 0.001799 | 0.001872 |
| common_type_2_test.test | RUN | 0.143497 | 0.398210 | 0.734544 | 0.001728 | 0.001891 | 0.001875 |
| alignment_of_test.test | RUN | 0.115413 | 0.320622 | 0.444975 | 0.001661 | 0.001656 | 0.001820 |
| alignment_of_a2_test.test | RUN | 0.118038 | 0.322793 | 0.474392 | 0.001635 | 0.001826 | 0.001543 |
| aligned_storage_test.test | RUN | 0.121004 | 0.305377 | 0.402402 | 0.001850 | 0.001750 | 0.001878 |
| aligned_storage_empy_test.test | RUN | 0.140276 | 0.361946 | 0.574448 | 0.001654 | 0.001986 | 0.001872 |
| aligned_storage_a2_test.test | RUN | 0.124505 | 0.302602 | 0.428950 | 0.001929 | 0.002133 | 0.001727 |
| add_volatile_test.test | RUN | 0.260454 | 0.901264 | 2.152343 | 0.001797 | 0.001816 | 0.001786 |
| add_rvalue_reference_test.test | RUN | 0.290918 | 1.020647 | 2.507726 | 0.001606 | 0.001584 | 0.001784 |
| add_reference_test.test | RUN | 0.283184 | 0.978190 | 2.475410 | 0.001537 | 0.001912 | 0.001653 |
| add_pointer_test.test | RUN | 0.184597 | 0.568711 | 1.288023 | 0.001565 | 0.001597 | 0.001763 |
| add_lvalue_reference_test.test | RUN | 0.286134 | 0.980211 | 2.470130 | 0.001587 | 0.001703 | 0.001542 |
| add_cv_test.test | RUN | 0.264046 | 0.924986 | 2.340980 | 0.001655 | 0.001404 | 0.001899 |
| add_const_test.test | RUN | 0.261327 | 0.954955 | 2.305293 | 0.001435 | 0.001552 | 0.001872 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.106977 | 0.245575 | 0.339449 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.104926 | 0.246751 | 0.358374 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.104192 | 0.233136 | 0.334955 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.102358 | 0.239218 | 0.358367 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.101939 | 0.241072 | 0.322805 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.100208 | 0.236457 | 0.314427 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.105060 | 0.240451 | 0.326516 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.102303 | 0.234236 | 0.333066 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.103655 | 0.243967 | 0.342818 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.100781 | 0.240616 | 0.331934 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.101641 | 0.239205 | 0.339966 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.104290 | 0.240487 | 0.329921 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.104036 | 0.232689 | 0.326496 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.103062 | 0.232171 | 0.339908 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.104169 | 0.243492 | 0.340914 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.107001 | 0.240137 | 0.320219 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.103619 | 0.240717 | 0.340741 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.103306 | 0.238707 | 0.344252 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.105438 | 0.247317 | 0.327450 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.105379 | 0.241005 | 0.330849 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.107280 | 0.242165 | 0.344942 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.106285 | 0.238898 | 0.346308 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.163307 | 0.532429 | 0.965343 | 0.004717 | 0.001837 | 0.001777 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.153162 | 0.527604 | 0.924419 | 0.004407 | 0.001664 | 0.001828 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.158851 | 0.523133 | 0.974049 | 0.001477 | 0.001387 | 0.001373 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.159155 | 0.508069 | 0.957259 | 0.001384 | 0.001395 | 0.001199 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.101086 | 0.392909 | 0.579525 | 0.001281 | 0.001452 | 0.001314 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990×† | 0.953×, 1.026× | 0.977× |
| clang | 1.030× | 1.014×, 1.046× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001026s | 0.000969s | 0.001120s | byte equality observed |
| add_cv_test.test | 10 | 0.001043s | 0.000981s | 0.001150s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001046s | 0.001002s | 0.001128s | byte equality observed |
| add_pointer_test.test | 10 | 0.001092s | 0.001021s | 0.001127s | byte equality observed |
| add_reference_test.test | 10 | 0.001087s | 0.000989s | 0.001154s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001105s | 0.001019s | 0.001104s | byte equality observed |
| add_volatile_test.test | 10 | 0.001129s | 0.000993s | 0.001121s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001210s | 0.001086s | 0.001246s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001112s | 0.000994s | 0.001141s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001209s | 0.001101s | 0.001245s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001086s | 0.000983s | 0.001139s | byte equality observed |
| alignment_of_test.test | 10 | 0.001070s | 0.000990s | 0.001129s | byte equality observed |
| common_type_2_test.test | 10 | 0.001080s | 0.001012s | 0.001124s | byte equality observed |
| common_type_3_test.test | 10 | 0.001122s | 0.000968s | 0.001135s | byte equality observed |
| common_type_4_test.test | 10 | 0.001102s | 0.000988s | 0.001143s | byte equality observed |
| common_type_5_test.test | 10 | 0.001122s | 0.000990s | 0.001134s | byte equality observed |
| common_type_6_test.test | 10 | 0.001096s | 0.000992s | 0.001133s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001108s | 0.000994s | 0.001123s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001121s | 0.001039s | 0.001131s | byte equality observed |
| common_type_test.test | 10 | 0.001098s | 0.001040s | 0.001113s | byte equality observed |
| conditional_test.test | 10 | 0.001118s | 0.001054s | 0.001143s | byte equality observed |
| conjunction_test.test | 10 | 0.001096s | 0.001076s | 0.001136s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001119s | 0.001051s | 0.001135s | byte equality observed |
| copy_cv_test.test | 10 | 0.001087s | 0.001099s | 0.001133s | byte equality observed |
| copy_reference_test.test | 10 | 0.001124s | 0.001058s | 0.001137s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001102s | 0.001021s | 0.001147s | byte equality observed |
| decay_test.test | 10 | 0.001121s | 0.001092s | 0.001136s | byte equality observed |
| detected_or_test.test | 10 | 0.001096s | 0.001050s | 0.001131s | byte equality observed |
| detected_test.test | 10 | 0.001108s | 0.001053s | 0.001146s | byte equality observed |
| disjunction_test.test | 10 | 0.001111s | 0.001096s | 0.001127s | byte equality observed |
| enable_if_test.test | 10 | 0.001116s | 0.001049s | 0.001124s | byte equality observed |
| extent_test.test | 10 | 0.001099s | 0.001072s | 0.001152s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001108s | 0.001061s | 0.001137s | byte equality observed |
| function_traits_test.test | 10 | 0.001130s | 0.001045s | 0.001131s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001114s | 0.001085s | 0.001100s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001114s | 0.001048s | 0.001135s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001098s | 0.001075s | 0.001126s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001128s | 0.001080s | 0.001120s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001118s | 0.001067s | 0.001126s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001130s | 0.001040s | 0.001126s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001102s | 0.001046s | 0.001107s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001128s | 0.001073s | 0.001118s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001116s | 0.001057s | 0.001139s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001111s | 0.001079s | 0.001138s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001119s | 0.001080s | 0.001143s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001134s | 0.001101s | 0.001127s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001125s | 0.001126s | 0.001120s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001134s | 0.001142s | 0.001134s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001132s | 0.001142s | 0.001125s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001129s | 0.001147s | 0.001127s | byte equality observed |
| has_complement_test.test | 10 | 0.001141s | 0.001167s | 0.001126s | byte equality observed |
| has_dereference_test.test | 10 | 0.001127s | 0.001141s | 0.001150s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001115s | 0.001122s | 0.001131s | byte equality observed |
| has_divides_test.test | 10 | 0.001146s | 0.001140s | 0.001125s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001124s | 0.001169s | 0.001132s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001139s | 0.001124s | 0.001109s | byte equality observed |
| has_greater_test.test | 10 | 0.001139s | 0.001119s | 0.001139s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001138s | 0.001128s | 0.001134s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001131s | 0.001109s | 0.001135s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001132s | 0.001130s | 0.001128s | byte equality observed |
| has_less_test.test | 10 | 0.001128s | 0.001131s | 0.001126s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001130s | 0.001134s | 0.001120s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001125s | 0.001135s | 0.001142s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001130s | 0.001158s | 0.001125s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001140s | 0.001125s | 0.001134s | byte equality observed |
| has_minus_test.test | 10 | 0.001130s | 0.001124s | 0.001114s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001147s | 0.001119s | 0.001121s | byte equality observed |
| has_modulus_test.test | 10 | 0.001136s | 0.001128s | 0.001125s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001124s | 0.001145s | 0.001133s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001121s | 0.001113s | 0.001123s | byte equality observed |
| has_negate_test.test | 10 | 0.001122s | 0.001100s | 0.001152s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001119s | 0.001140s | 0.001132s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001110s | 0.001131s | 0.001140s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001139s | 0.001154s | 0.001139s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001128s | 0.001120s | 0.001123s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001148s | 0.001135s | 0.001113s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001143s | 0.001127s | 0.001123s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001133s | 0.001142s | 0.001143s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001156s | 0.001120s | 0.001139s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001123s | 0.001124s | 0.001140s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001137s | 0.001148s | 0.001119s | byte equality observed |
| has_plus_test.test | 10 | 0.001128s | 0.001108s | 0.001132s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001139s | 0.001139s | 0.001131s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001136s | 0.001123s | 0.001122s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001125s | 0.001117s | 0.001130s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001122s | 0.001123s | 0.001110s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001135s | 0.001110s | 0.001143s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001146s | 0.001134s | 0.001160s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001127s | 0.001151s | 0.001132s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001135s | 0.001117s | 0.001134s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001124s | 0.001139s | 0.001122s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001128s | 0.001135s | 0.001122s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001131s | 0.001135s | 0.001144s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001140s | 0.001116s | 0.001122s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001139s | 0.001110s | 0.001143s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001117s | 0.001104s | 0.001149s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001206s | 0.001212s | 0.001187s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001170s | 0.001201s | 0.001192s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001195s | 0.001198s | 0.001232s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001147s | 0.001110s | 0.001134s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001119s | 0.001115s | 0.001107s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001135s | 0.001134s | 0.001127s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001143s | 0.001122s | 0.001162s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001137s | 0.001131s | 0.001127s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001145s | 0.001145s | 0.001124s | byte equality observed |
| integral_constant_test.test | 10 | 0.000501s | 0.000509s | 0.001136s | byte equality observed |
| is_abstract_test.test | 10 | 0.001149s | 0.001136s | 0.001137s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001143s | 0.001134s | 0.001133s | byte equality observed |
| is_array_test.test | 10 | 0.001140s | 0.001132s | 0.001139s | byte equality observed |
| is_assignable_test.test | 10 | 0.001129s | 0.001126s | 0.001156s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001124s | 0.001127s | 0.001137s | byte equality observed |
| is_base_of_test.test | 10 | 0.001123s | 0.001123s | 0.001132s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001141s | 0.001104s | 0.001149s | byte equality observed |
| is_class_test.test | 10 | 0.001144s | 0.001145s | 0.001130s | byte equality observed |
| is_complete_test.test | 10 | 0.001127s | 0.001146s | 0.001131s | byte equality observed |
| is_complex_test.test | 10 | 0.001134s | 0.001115s | 0.001141s | byte equality observed |
| is_compound_test.test | 10 | 0.001128s | 0.001110s | 0.001121s | byte equality observed |
| is_const_test.test | 10 | 0.001132s | 0.001148s | 0.001136s | byte equality observed |
| is_constructible_test.test | 10 | 0.001133s | 0.001152s | 0.001137s | byte equality observed |
| is_convertible_test.test | 10 | 0.001125s | 0.001106s | 0.001146s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001159s | 0.001146s | 0.001117s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001133s | 0.001130s | 0.001133s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001127s | 0.001121s | 0.001132s | byte equality observed |
| is_destructible_test.test | 10 | 0.001123s | 0.001146s | 0.001142s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001133s | 0.001133s | 0.001132s | byte equality observed |
| is_detected_test.test | 10 | 0.001125s | 0.001121s | 0.001126s | byte equality observed |
| is_empty_test.test | 10 | 0.001129s | 0.001129s | 0.001150s | byte equality observed |
| is_enum_test.test | 10 | 0.001126s | 0.001146s | 0.001121s | byte equality observed |
| is_final_test.test | 10 | 0.001128s | 0.001124s | 0.001136s | byte equality observed |
| is_float_test.test | 10 | 0.001139s | 0.001129s | 0.001128s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001129s | 0.001122s | 0.001135s | byte equality observed |
| is_function_test.test | 10 | 0.001135s | 0.001151s | 0.001138s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001132s | 0.001128s | 0.001116s | byte equality observed |
| is_integral_test.test | 10 | 0.001140s | 0.001150s | 0.001137s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001132s | 0.001136s | 0.001117s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001140s | 0.001131s | 0.001124s | byte equality observed |
| is_member_func_test.test | 10 | 0.001154s | 0.001125s | 0.001141s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001141s | 0.001118s | 0.001131s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001136s | 0.001121s | 0.001146s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001135s | 0.001152s | 0.001126s | byte equality observed |
| is_nothrow_move_assignable_test.test | 5 | 0.001146s | 0.001145s | 0.001155s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001144s | 0.001143s | 0.001145s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001147s | 0.001144s | 0.001128s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001116s | 0.001123s | 0.001113s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001143s | 0.001138s | 0.001162s | byte equality observed |
| is_object_test.test | 10 | 0.001128s | 0.001133s | 0.001140s | byte equality observed |
| is_pod_test.test | 10 | 0.001142s | 0.001129s | 0.001135s | byte equality observed |
| is_pointer_test.test | 10 | 0.001140s | 0.001144s | 0.001124s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001140s | 0.001109s | 0.001122s | byte equality observed |
| is_reference_test.test | 10 | 0.001139s | 0.001123s | 0.001141s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001127s | 0.001131s | 0.001151s | byte equality observed |
| is_same_test.test | 10 | 0.001132s | 0.001122s | 0.001147s | byte equality observed |
| is_scalar_test.test | 10 | 0.001145s | 0.001121s | 0.001140s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001140s | 0.001142s | 0.001135s | byte equality observed |
| is_signed_test.test | 10 | 0.001148s | 0.001102s | 0.001144s | byte equality observed |
| is_stateless_test.test | 10 | 0.001129s | 0.001144s | 0.001145s | byte equality observed |
| is_swappable_test.test | 10 | 0.001145s | 0.001155s | 0.001135s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001166s | 0.001168s | 0.001190s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001134s | 0.001159s | 0.001142s | byte equality observed |
| is_union_test.test | 10 | 0.001129s | 0.001134s | 0.001143s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001125s | 0.001124s | 0.001131s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001124s | 0.001133s | 0.001114s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001124s | 0.001122s | 0.001137s | byte equality observed |
| is_void_test.test | 10 | 0.001129s | 0.001131s | 0.001133s | byte equality observed |
| is_volatile_test.test | 10 | 0.001131s | 0.001141s | 0.001132s | byte equality observed |
| make_signed_test.test | 10 | 0.001144s | 0.001140s | 0.001138s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001132s | 0.001136s | 0.001142s | byte equality observed |
| make_void_test.test | 10 | 0.001145s | 0.001137s | 0.001126s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000504s | 0.000499s | 0.001137s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000504s | 0.000509s | 0.001127s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000508s | 0.000503s | 0.001124s | byte equality observed |
| negation_test.test | 10 | 0.001175s | 0.001164s | 0.001126s | byte equality observed |
| promote_basic_test.test | 10 | 0.000500s | 0.000514s | 0.001103s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000508s | 0.000510s | 0.001123s | byte equality observed |
| promote_enum_test.test | 10 | 0.000507s | 0.000517s | 0.001120s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000506s | 0.000513s | 0.001135s | byte equality observed |
| rank_test.test | 10 | 0.001147s | 0.001144s | 0.001113s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001154s | 0.001133s | 0.001129s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001151s | 0.001147s | 0.001140s | byte equality observed |
| remove_const_test.test | 10 | 0.001137s | 0.001140s | 0.001138s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001136s | 0.001116s | 0.001140s | byte equality observed |
| remove_cv_test.test | 10 | 0.001125s | 0.001141s | 0.001120s | byte equality observed |
| remove_extent_test.test | 10 | 0.001140s | 0.001127s | 0.001149s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001131s | 0.001117s | 0.001122s | byte equality observed |
| remove_reference_test.test | 10 | 0.001129s | 0.001154s | 0.001143s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001140s | 0.001118s | 0.001127s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001125s | 0.001113s | 0.001121s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001134s | 0.001127s | 0.001123s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001133s | 0.001145s | 0.001134s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001132s | 0.001134s | 0.001136s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001136s | 0.001132s | 0.001129s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001125s | 0.001154s | 0.001129s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001146s | 0.001145s | 0.001149s | byte equality observed |
| type_identity_test.test | 10 | 0.001148s | 0.001144s | 0.001115s | byte equality observed |
| type_traits_test.test | 10 | 0.000509s | 0.000496s | 0.001150s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001261s | 0.001261s | 0.001266s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
