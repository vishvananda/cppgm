# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.165298 | 0.445836 | 0.777159 | 0.001867 | 0.001896 | 0.002026 |
| type_traits_test.test | RUN | 0.233049 | 0.464373 | 0.760716 | 0.000758 | 0.000705 | 0.001849 |
| type_identity_test.test | RUN | 0.457155 | 1.752422 | 4.441439 | 0.002133 | 0.002128 | 0.001989 |
| tricky_rvalue_test.test | RUN | 0.152716 | 0.353660 | 0.598652 | 0.001996 | 0.001839 | 0.001813 |
| tricky_partial_spec_test.test | RUN | 0.187912 | 0.520128 | 0.961865 | 0.001528 | 0.001818 | 0.002066 |
| tricky_is_enum_test.test | RUN | 0.143396 | 0.343573 | 0.548570 | 0.001560 | 0.001956 | 0.002048 |
| tricky_incomplete_type_test.test | RUN | 0.248652 | 0.536383 | 0.974180 | 0.001862 | 0.001909 | 0.001982 |
| tricky_function_type_test.test | RUN | 0.195235 | 0.554826 | 1.044943 | 0.001882 | 0.001758 | 0.001939 |
| tricky_add_pointer_test.test | RUN | 0.283749 | 1.034945 | 2.488733 | 0.001866 | 0.002058 | 0.001976 |
| tricky_abstract_type_test.test | RUN | 0.158697 | 0.352813 | 0.579231 | 0.001716 | 0.001770 | 0.001773 |
| remove_volatile_test.test | RUN | 0.402388 | 1.473141 | 3.950509 | 0.002066 | 0.002056 | 0.001757 |
| remove_reference_test.test | RUN | 0.419080 | 1.480871 | 4.117527 | 0.001994 | 0.001806 | 0.001955 |
| remove_pointer_test.test | RUN | 0.434497 | 1.553897 | 4.325718 | 0.001647 | 0.001866 | 0.001972 |
| remove_extent_test.test | RUN | 0.425721 | 1.551152 | 4.113161 | 0.001886 | 0.002044 | 0.001718 |
| remove_cv_test.test | RUN | 0.425184 | 1.547145 | 4.134122 | 0.001968 | 0.001916 | 0.001917 |
| remove_cv_ref_test.test | RUN | 0.903067 | 3.689322 | 10.189881 | 0.001983 | 0.001730 | 0.001454 |
| remove_const_test.test | RUN | 0.409515 | 1.411212 | 3.860944 | 0.001790 | 0.001884 | 0.002036 |
| remove_bounds_test.test | RUN | 0.420365 | 1.542412 | 4.138900 | 0.002040 | 0.001915 | 0.002018 |
| remove_all_extents_test.test | RUN | 0.412976 | 1.558074 | 4.135299 | 0.001876 | 0.001787 | 0.001982 |
| rank_test.test | RUN | 0.155332 | 0.361606 | 0.540598 | 0.001770 | 0.001704 | 0.001734 |
| promote_mpl_test.test | RUN | 0.127193 | 0.324025 | 0.373172 | 0.000836 | 0.000861 | 0.002011 |
| promote_enum_test.test | RUN | 0.029531 | 0.081258 | 0.088372 | 0.000747 | 0.000767 | 0.001819 |
| promote_enum_msvc_bug_test.test | RUN | 0.027262 | 0.070883 | 0.066266 | 0.000762 | 0.000905 | 0.001980 |
| promote_basic_test.test | RUN | 0.033268 | 0.092235 | 0.094036 | 0.000707 | 0.000906 | 0.001951 |
| negation_test.test | RUN | 0.145925 | 0.323286 | 0.487644 | 0.001897 | 0.002070 | 0.001950 |
| mpl_interop_test3.test | RUN | 0.121184 | 0.295281 | 0.356016 | 0.000708 | 0.000768 | 0.001914 |
| mpl_interop_test2.test | RUN | 0.043719 | 0.074924 | 0.100157 | 0.000713 | 0.000737 | 0.001904 |
| mpl_interop_test1.test | RUN | 0.023070 | 0.062676 | 0.070479 | 0.000682 | 0.000772 | 0.001976 |
| make_void_test.test | RUN | 0.152127 | 0.357283 | 0.627411 | 0.001995 | 0.001871 | 0.002032 |
| make_unsigned_test.test | RUN | 0.180501 | 0.468413 | 0.846095 | 0.001626 | 0.001776 | 0.001986 |
| make_signed_test.test | RUN | 0.178273 | 0.467885 | 0.879773 | 0.001789 | 0.001794 | 0.002040 |
| is_volatile_test.test | RUN | 0.160350 | 0.404140 | 0.691618 | 0.001769 | 0.001665 | 0.001912 |
| is_void_test.test | RUN | 0.155022 | 0.379404 | 0.616296 | 0.001862 | 0.002048 | 0.001600 |
| is_virtual_base_of_test.test | RUN | 0.180339 | 0.488587 | 0.913229 | 0.001692 | 0.001876 | 0.001929 |
| is_unsigned_test.test | RUN | 0.159024 | 0.396302 | 0.674695 | 0.001788 | 0.001992 | 0.001830 |
| is_unscoped_enum_test.test | RUN | 0.154818 | 0.357225 | 0.571749 | 0.001892 | 0.001820 | 0.001932 |
| is_union_test.test | RUN | 0.168230 | 0.453591 | 0.801543 | 0.001878 | 0.001781 | 0.002070 |
| is_unbounded_array_test.test | RUN | 0.154761 | 0.383094 | 0.633552 | 0.001726 | 0.001762 | 0.001988 |
| is_trivially_copyable_test.test | RUN | 0.262891 | 0.798939 | 1.647565 | 0.001872 | 0.002136 | 0.001741 |
| is_swappable_test.test | RUN | 0.213777 | 0.599182 | 1.205135 | 0.001624 | 0.002060 | 0.001754 |
| is_stateless_test.test | RUN | 0.230219 | 0.686224 | 1.419114 | 0.001775 | 0.002071 | 0.001619 |
| is_signed_test.test | RUN | 0.156499 | 0.378798 | 0.663479 | 0.001790 | 0.002068 | 0.002046 |
| is_scoped_enum_test.test | RUN | 0.159101 | 0.338906 | 0.563282 | 0.001883 | 0.001960 | 0.001977 |
| is_scalar_test.test | RUN | 0.200870 | 0.627030 | 1.242322 | 0.001882 | 0.001912 | 0.001514 |
| is_same_test.test | RUN | 0.152091 | 0.364354 | 0.625793 | 0.001969 | 0.001893 | 0.001874 |
| is_rvalue_reference_test.test | RUN | 0.161289 | 0.403481 | 0.737525 | 0.001804 | 0.001816 | 0.001902 |
| is_reference_test.test | RUN | 0.165278 | 0.421048 | 0.740900 | 0.001799 | 0.001718 | 0.001977 |
| is_polymorphic_test.test | RUN | 0.165361 | 0.441779 | 0.818575 | 0.001680 | 0.002039 | 0.001710 |
| is_pointer_test.test | RUN | 0.166371 | 0.424427 | 0.789371 | 0.001720 | 0.001892 | 0.001931 |
| is_pod_test.test | RUN | 0.219522 | 0.706179 | 1.425622 | 0.001711 | 0.002062 | 0.001906 |
| is_object_test.test | RUN | 0.152535 | 0.357056 | 0.607649 | 0.001646 | 0.001892 | 0.002021 |
| is_nothrow_swappable_test.test | RUN | 0.218207 | 0.643638 | 1.359380 | 0.002002 | 0.002078 | 0.001884 |
| is_nothrow_move_constructible_test.test | RUN | 0.211610 | 0.689585 | 1.393166 | 0.002006 | 0.001763 | 0.001770 |
| is_nothrow_move_assignable_test.test | RUN | 0.213840 | 0.696270 | 1.370456 | 0.001797 | 0.001939 | 0.001878 |
| is_noncopyable_test.test | RUN | 0.146803 | 0.359485 | 0.632264 | 0.001744 | 0.001742 | 0.001868 |
| is_member_pointer_test.test | RUN | 0.154596 | 0.364270 | 0.593470 | 0.001661 | 0.002054 | 0.001833 |
| is_member_obj_test.test | RUN | 0.157325 | 0.371122 | 0.616733 | 0.001805 | 0.001810 | 0.001733 |
| is_member_func_test.test | RUN | 0.162427 | 0.396393 | 0.659611 | 0.001701 | 0.001968 | 0.002028 |
| is_lvalue_reference_test.test | RUN | 0.164558 | 0.423401 | 0.777722 | 0.001968 | 0.001879 | 0.001987 |
| is_list_constructible_test.test | RUN | 0.191675 | 0.488853 | 0.813880 | 0.002026 | 0.001932 | 0.002004 |
| is_integral_test.test | RUN | 0.199294 | 0.580372 | 1.183864 | 0.001788 | 0.001894 | 0.001981 |
| is_fundamental_test.test | RUN | 0.202314 | 0.608488 | 1.186551 | 0.001741 | 0.001854 | 0.001961 |
| is_function_test.test | RUN | 0.162617 | 0.401010 | 0.646601 | 0.001735 | 0.001956 | 0.001928 |
| is_floating_point_test.test | RUN | 0.161503 | 0.435903 | 0.714639 | 0.001747 | 0.001942 | 0.002078 |
| is_float_test.test | RUN | 0.165570 | 0.439859 | 0.782390 | 0.001808 | 0.001816 | 0.002058 |
| is_final_test.test | RUN | 0.165823 | 0.421727 | 0.800148 | 0.001736 | 0.001702 | 0.001572 |
| is_enum_test.test | RUN | 0.152922 | 0.362657 | 0.578807 | 0.001779 | 0.002064 | 0.001806 |
| is_empty_test.test | RUN | 0.161847 | 0.392283 | 0.676605 | 0.001878 | 0.001778 | 0.002058 |
| is_detected_test.test | RUN | 0.148919 | 0.336261 | 0.549792 | 0.001758 | 0.002118 | 0.001877 |
| is_detected_exact_test.test | RUN | 0.149257 | 0.336736 | 0.496200 | 0.001925 | 0.001671 | 0.001871 |
| is_destructible_test.test | RUN | 0.217907 | 0.685060 | 1.381878 | 0.001888 | 0.002154 | 0.002013 |
| is_default_constr_test.test | RUN | 0.224610 | 0.702766 | 1.403698 | 0.001964 | 0.001808 | 0.001951 |
| is_copy_constructible_test.test | RUN | 0.234357 | 0.732524 | 1.482889 | 0.001986 | 0.001974 | 0.001773 |
| is_copy_assignable_test.test | RUN | 0.231837 | 0.713680 | 1.478861 | 0.001802 | 0.001706 | 0.002024 |
| is_convertible_test.test | RUN | 0.215869 | 0.638003 | 1.225231 | 0.001928 | 0.001986 | 0.001879 |
| is_constructible_test.test | RUN | 0.172378 | 0.460845 | 0.829581 | 0.001802 | 0.001794 | 0.001772 |
| is_const_test.test | RUN | 0.156931 | 0.406123 | 0.679061 | 0.001846 | 0.001643 | 0.001978 |
| is_compound_test.test | RUN | 0.151106 | 0.336647 | 0.534716 | 0.001682 | 0.001730 | 0.001866 |
| is_complex_test.test | RUN | 0.198060 | 0.454030 | 0.780160 | 0.001640 | 0.001729 | 0.001758 |
| is_complete_test.test | RUN | 0.176652 | 0.478666 | 0.881105 | 0.001723 | 0.001590 | 0.001594 |
| is_class_test.test | RUN | 0.161864 | 0.421191 | 0.736472 | 0.001822 | 0.001919 | 0.001900 |
| is_bounded_array_test.test | RUN | 0.155816 | 0.380495 | 0.654655 | 0.001731 | 0.001707 | 0.001619 |
| is_base_of_test.test | RUN | 0.166378 | 0.410767 | 0.714586 | 0.001892 | 0.001826 | 0.001996 |
| is_base_and_derived_test.test | RUN | 0.164936 | 0.402891 | 0.727687 | 0.001772 | 0.001814 | 0.001894 |
| is_assignable_test.test | RUN | 0.192234 | 0.565018 | 1.132267 | 0.001966 | 0.002050 | 0.001740 |
| is_array_test.test | RUN | 0.161604 | 0.393460 | 0.669465 | 0.001762 | 0.001906 | 0.001917 |
| is_arithmetic_test.test | RUN | 0.193555 | 0.590424 | 1.155613 | 0.001831 | 0.001900 | 0.002027 |
| is_abstract_test.test | RUN | 0.363314 | 1.618008 | 3.781576 | 0.002098 | 0.001822 | 0.001972 |
| integral_constant_test.test | RUN | 0.025421 | 0.058174 | 0.064295 | 0.000804 | 0.000930 | 0.001841 |
| has_virtual_destructor_test.test | RUN | 0.165284 | 0.456146 | 0.833617 | 0.001984 | 0.002077 | 0.001975 |
| has_unary_plus_test.test | RUN | 0.343580 | 1.848033 | 2.941263 | 0.001940 | 0.001927 | 0.001880 |
| has_unary_minus_test.test | RUN | 0.334053 | 1.794448 | 2.773659 | 0.001553 | 0.001690 | 0.002044 |
| has_trivial_move_constructor_test.test | RUN | 0.229832 | 0.718888 | 1.433183 | 0.001608 | 0.001608 | 0.002070 |
| has_trivial_move_assign_test.test | RUN | 0.223448 | 0.616606 | 1.426014 | 0.001952 | 0.001748 | 0.001945 |
| has_trivial_destructor_test.test | RUN | 0.216490 | 0.666548 | 1.421838 | 0.001771 | 0.001893 | 0.002009 |
| has_trivial_copy_test.test | RUN | 0.223270 | 0.740048 | 1.479297 | 0.002026 | 0.002034 | 0.002148 |
| has_trivial_constr_test.test | RUN | 0.224568 | 0.744029 | 1.512379 | 0.001800 | 0.001818 | 0.002166 |
| has_trivial_assign_test.test | RUN | 0.221290 | 0.727695 | 1.449972 | 0.002062 | 0.002168 | 0.002197 |
| has_right_shift_test.test | RUN | 0.355320 | 1.366235 | 3.127186 | 0.001746 | 0.002015 | 0.001948 |
| has_right_shift_assign_test.test | RUN | 0.341984 | 1.290214 | 2.890902 | 0.001810 | 0.002101 | 0.002030 |
| has_prefix_classes3_test.test | RUN | 0.243937 | 0.750116 | 1.544175 | 0.001920 | 0.001713 | 0.001918 |
| has_prefix_classes2_test.test | RUN | 0.244314 | 0.739902 | 1.587799 | 0.001638 | 0.001571 | 0.001857 |
| has_prefix_classes1_test.test | RUN | 0.246109 | 0.754172 | 1.495938 | 0.001676 | 0.002015 | 0.002108 |
| has_prefix_classes0_test.test | RUN | 0.244289 | 0.740506 | 1.509715 | 0.001802 | 0.001945 | 0.001930 |
| has_pre_increment_test.test | RUN | 0.332084 | 1.794881 | 2.953921 | 0.001861 | 0.001856 | 0.001832 |
| has_pre_decrement_test.test | RUN | 0.329613 | 1.773391 | 2.948647 | 0.001778 | 0.002193 | 0.001254 |
| has_postfix_classes3_test.test | RUN | 0.242805 | 0.774052 | 1.576774 | 0.001846 | 0.001939 | 0.002020 |
| has_postfix_classes2_test.test | RUN | 0.239475 | 0.765137 | 1.504572 | 0.001792 | 0.001898 | 0.001850 |
| has_postfix_classes1_test.test | RUN | 0.244251 | 0.755642 | 1.522346 | 0.001933 | 0.002034 | 0.001988 |
| has_postfix_classes0_test.test | RUN | 0.243259 | 0.754496 | 1.529668 | 0.001651 | 0.002186 | 0.002032 |
| has_post_increment_test.test | RUN | 0.331647 | 1.821957 | 2.991200 | 0.001969 | 0.001962 | 0.001382 |
| has_post_decrement_test.test | RUN | 0.326815 | 1.847715 | 2.975402 | 0.001497 | 0.001760 | 0.001819 |
| has_plus_test.test | RUN | 0.335588 | 1.249987 | 2.989589 | 0.001870 | 0.001982 | 0.001958 |
| has_plus_assign_test.test | RUN | 0.345834 | 1.240284 | 2.972618 | 0.001746 | 0.002063 | 0.001668 |
| has_operator_new_test.test | RUN | 0.222775 | 0.668128 | 1.388488 | 0.001881 | 0.002015 | 0.001740 |
| has_nothrow_destructor_test.test | RUN | 0.229422 | 0.729129 | 1.514927 | 0.001628 | 0.001832 | 0.001608 |
| has_nothrow_copy_test.test | RUN | 0.225656 | 0.693539 | 1.412340 | 0.001824 | 0.001740 | 0.002032 |
| has_nothrow_constr_test.test | RUN | 0.217274 | 0.686253 | 1.421540 | 0.001768 | 0.002076 | 0.001922 |
| has_nothrow_assign_test.test | RUN | 0.218044 | 0.698754 | 1.376215 | 0.001945 | 0.002040 | 0.001802 |
| has_not_equal_to_test.test | RUN | 0.338932 | 1.794023 | 3.031781 | 0.001822 | 0.002076 | 0.001945 |
| has_negate_test.test | RUN | 0.320708 | 1.292188 | 2.845964 | 0.001913 | 0.001980 | 0.001755 |
| has_multiplies_test.test | RUN | 0.331268 | 1.278429 | 2.931197 | 0.001700 | 0.001899 | 0.001976 |
| has_multiplies_assign_test.test | RUN | 0.333545 | 1.314735 | 2.945607 | 0.001876 | 0.002136 | 0.001825 |
| has_modulus_test.test | RUN | 0.334549 | 1.299551 | 2.921053 | 0.001801 | 0.002090 | 0.001908 |
| has_modulus_assign_test.test | RUN | 0.325167 | 1.301212 | 2.957505 | 0.001825 | 0.001886 | 0.001771 |
| has_minus_test.test | RUN | 0.338674 | 1.275446 | 2.968474 | 0.001743 | 0.002076 | 0.001949 |
| has_minus_assign_test.test | RUN | 0.358385 | 1.321962 | 3.021093 | 0.001864 | 0.002114 | 0.001982 |
| has_logical_or_test.test | RUN | 0.341457 | 1.350276 | 2.938995 | 0.001667 | 0.002178 | 0.002038 |
| has_logical_not_test.test | RUN | 0.325552 | 1.252809 | 2.861588 | 0.001944 | 0.001828 | 0.001960 |
| has_logical_and_test.test | RUN | 0.334455 | 1.276007 | 2.970198 | 0.001818 | 0.001863 | 0.001980 |
| has_less_test.test | RUN | 0.335998 | 1.804577 | 2.953946 | 0.001846 | 0.001832 | 0.001932 |
| has_less_equal_test.test | RUN | 0.340240 | 1.738799 | 2.989707 | 0.001821 | 0.001998 | 0.002029 |
| has_left_shift_test.test | RUN | 0.361106 | 1.604155 | 3.650236 | 0.001834 | 0.002022 | 0.001700 |
| has_left_shift_assign_test.test | RUN | 0.334054 | 1.233042 | 2.954906 | 0.001698 | 0.002043 | 0.001622 |
| has_greater_test.test | RUN | 0.336989 | 1.817672 | 2.984449 | 0.001960 | 0.001801 | 0.002030 |
| has_greater_equal_test.test | RUN | 0.343846 | 1.748601 | 3.029298 | 0.001842 | 0.001794 | 0.001953 |
| has_equal_to_test.test | RUN | 0.336617 | 1.749551 | 2.891279 | 0.001790 | 0.001796 | 0.001794 |
| has_divides_test.test | RUN | 0.328627 | 1.233401 | 2.963689 | 0.001664 | 0.001744 | 0.001929 |
| has_divides_assign_test.test | RUN | 0.343448 | 1.247504 | 3.026377 | 0.001756 | 0.001804 | 0.001964 |
| has_dereference_test.test | RUN | 0.330006 | 1.200048 | 2.876812 | 0.001696 | 0.001852 | 0.002010 |
| has_complement_test.test | RUN | 0.328394 | 1.806511 | 2.925213 | 0.001550 | 0.002039 | 0.001764 |
| has_bit_xor_test.test | RUN | 0.330053 | 1.287920 | 2.914398 | 0.001819 | 0.001872 | 0.001676 |
| has_bit_xor_assign_test.test | RUN | 0.331877 | 1.275847 | 3.022516 | 0.001886 | 0.001540 | 0.002041 |
| has_bit_or_test.test | RUN | 0.338056 | 1.261543 | 2.973045 | 0.001949 | 0.001858 | 0.001996 |
| has_bit_or_assign_test.test | RUN | 0.326788 | 1.318927 | 2.965797 | 0.001827 | 0.001944 | 0.001821 |
| has_bit_and_test.test | RUN | 0.338151 | 1.287553 | 2.967293 | 0.001706 | 0.002049 | 0.001660 |
| has_bit_and_assign_test.test | RUN | 0.332001 | 1.272767 | 2.946465 | 0.001994 | 0.002054 | 0.001998 |
| has_binary_classes9_test.test | RUN | 0.365445 | 1.479542 | 3.240252 | 0.001867 | 0.001989 | 0.002030 |
| has_binary_classes8_test.test | RUN | 0.363634 | 1.535103 | 3.301836 | 0.001948 | 0.001990 | 0.001782 |
| has_binary_classes7_test.test | RUN | 0.370146 | 1.517933 | 3.260776 | 0.001793 | 0.002116 | 0.001771 |
| has_binary_classes6_test.test | RUN | 0.365280 | 1.464219 | 3.162747 | 0.001862 | 0.002076 | 0.001957 |
| has_binary_classes5_test.test | RUN | 0.364753 | 1.484669 | 3.223952 | 0.001842 | 0.002123 | 0.002035 |
| has_binary_classes4_test.test | RUN | 0.366122 | 1.506603 | 3.246146 | 0.001635 | 0.002113 | 0.001824 |
| has_binary_classes3_test.test | RUN | 0.364264 | 1.520486 | 3.274355 | 0.001766 | 0.002065 | 0.001931 |
| has_binary_classes2_test.test | RUN | 0.377869 | 1.524632 | 3.213195 | 0.001914 | 0.002052 | 0.002090 |
| has_binary_classes1_test.test | RUN | 0.372469 | 1.513444 | 3.293617 | 0.001833 | 0.001950 | 0.001612 |
| has_binary_classes0_test.test | RUN | 0.369185 | 1.517265 | 3.156696 | 0.001826 | 0.001932 | 0.001917 |
| function_traits_test.test | RUN | 0.166746 | 0.388422 | 0.707811 | 0.001646 | 0.001935 | 0.001983 |
| floating_point_promotion_test.test | RUN | 0.156970 | 0.368163 | 0.669709 | 0.001872 | 0.001862 | 0.001952 |
| extent_test.test | RUN | 0.162131 | 0.402888 | 0.675964 | 0.001776 | 0.001921 | 0.002074 |
| enable_if_test.test | RUN | 0.149984 | 0.349428 | 0.545161 | 0.001754 | 0.001714 | 0.001627 |
| disjunction_test.test | RUN | 0.153924 | 0.341931 | 0.587550 | 0.001882 | 0.002036 | 0.001865 |
| detected_test.test | RUN | 0.143489 | 0.324529 | 0.539361 | 0.001997 | 0.002145 | 0.001814 |
| detected_or_test.test | RUN | 0.152133 | 0.341505 | 0.588798 | 0.001910 | 0.001947 | 0.001828 |
| decay_test.test | RUN | 0.405407 | 1.449226 | 3.550424 | 0.001818 | 0.001968 | 0.002095 |
| cxx14_aliases_test.test | RUN | 0.239625 | 0.509563 | 0.897487 | 0.002008 | 0.001907 | 0.001856 |
| copy_reference_test.test | RUN | 0.153135 | 0.347826 | 0.566085 | 0.001668 | 0.001870 | 0.001864 |
| copy_cv_test.test | RUN | 0.151982 | 0.364244 | 0.615502 | 0.001729 | 0.001769 | 0.002098 |
| copy_cv_ref_test.test | RUN | 0.221924 | 0.648506 | 1.405879 | 0.001788 | 0.001824 | 0.002028 |
| conjunction_test.test | RUN | 0.151151 | 0.346733 | 0.593184 | 0.001503 | 0.001776 | 0.001864 |
| conditional_test.test | RUN | 0.150327 | 0.351195 | 0.583073 | 0.001736 | 0.001668 | 0.001647 |
| common_type_test.test | RUN | 0.200649 | 0.540305 | 1.151362 | 0.001979 | 0.001714 | 0.001914 |
| common_type_sfinae_test.test | RUN | 0.150193 | 0.333800 | 0.483963 | 0.001548 | 0.001834 | 0.002008 |
| common_type_sfinae2_test.test | RUN | 0.154978 | 0.343021 | 0.526165 | 0.001717 | 0.001941 | 0.001970 |
| common_type_6_test.test | RUN | 0.158623 | 0.354660 | 0.597296 | 0.001750 | 0.001904 | 0.001996 |
| common_type_5_test.test | RUN | 0.157179 | 0.350551 | 0.561278 | 0.001915 | 0.001948 | 0.001864 |
| common_type_4_test.test | RUN | 0.167380 | 0.389088 | 0.678687 | 0.001850 | 0.001849 | 0.002080 |
| common_type_3_test.test | RUN | 0.149558 | 0.326248 | 0.522226 | 0.002014 | 0.001496 | 0.001930 |
| common_type_2_test.test | RUN | 0.204497 | 0.542031 | 1.064088 | 0.001927 | 0.001922 | 0.001628 |
| alignment_of_test.test | RUN | 0.159242 | 0.413137 | 0.692423 | 0.001917 | 0.001970 | 0.001674 |
| alignment_of_a2_test.test | RUN | 0.163534 | 0.416420 | 0.698639 | 0.001725 | 0.001856 | 0.001859 |
| aligned_storage_test.test | RUN | 0.169047 | 0.406630 | 0.641103 | 0.001976 | 0.002022 | 0.002116 |
| aligned_storage_empy_test.test | RUN | 0.190738 | 0.454468 | 0.864349 | 0.001829 | 0.002080 | 0.001980 |
| aligned_storage_a2_test.test | RUN | 0.163902 | 0.402069 | 0.629899 | 0.001900 | 0.002263 | 0.002130 |
| add_volatile_test.test | RUN | 0.362236 | 1.283981 | 3.273515 | 0.001715 | 0.001784 | 0.002003 |
| add_rvalue_reference_test.test | RUN | 0.401734 | 1.421609 | 3.737241 | 0.001666 | 0.001972 | 0.002022 |
| add_reference_test.test | RUN | 0.399335 | 1.381248 | 3.787066 | 0.001676 | 0.002098 | 0.001966 |
| add_pointer_test.test | RUN | 0.251510 | 0.772268 | 1.920990 | 0.001713 | 0.001732 | 0.001965 |
| add_lvalue_reference_test.test | RUN | 0.398766 | 1.351290 | 3.742009 | 0.001790 | 0.001716 | 0.002058 |
| add_cv_test.test | RUN | 0.384723 | 1.278300 | 3.539064 | 0.001871 | 0.001798 | 0.002026 |
| add_const_test.test | RUN | 0.375978 | 1.377323 | 3.446417 | 0.001493 | 0.002042 | 0.002104 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.148710 | 0.325619 | 0.527803 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.145422 | 0.338525 | 0.545413 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.140011 | 0.306093 | 0.524647 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.138716 | 0.312563 | 0.486956 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.142019 | 0.312777 | 0.514221 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.137336 | 0.316688 | 0.459502 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.145246 | 0.313741 | 0.521329 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.141027 | 0.313404 | 0.504104 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.141398 | 0.308808 | 0.509802 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.141106 | 0.315274 | 0.504342 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.132864 | 0.313927 | 0.490308 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.135080 | 0.313754 | 0.508136 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.139827 | 0.314021 | 0.504971 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.137381 | 0.315709 | 0.498371 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.139175 | 0.313865 | 0.508828 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.139305 | 0.312534 | 0.508783 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.139729 | 0.310845 | 0.521619 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.141758 | 0.320399 | 0.529049 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.141837 | 0.316737 | 0.496354 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.141197 | 0.314638 | 0.514043 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.141899 | 0.315295 | 0.518643 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.142908 | 0.320663 | 0.519040 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.225712 | 0.715051 | 1.449707 | 0.001596 | 0.001700 | 0.002020 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.216648 | 0.698483 | 1.379476 | 0.001802 | 0.001765 | 0.001905 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.223707 | 0.721882 | 1.451822 | 0.001744 | 0.001347 | 0.002128 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.223641 | 0.701131 | 1.421999 | 0.001339 | 0.001519 | 0.001530 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.124511 | 0.457439 | 0.863082 | 0.001504 | 0.001598 | 0.001487 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.003×, 0.996× | 1.006× |
| clang | 1.022× | 1.023×, 1.021× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001435s | 0.001463s | 0.001429s | byte equality observed |
| add_cv_test.test | 10 | 0.001450s | 0.001459s | 0.001460s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001453s | 0.001433s | 0.001447s | byte equality observed |
| add_pointer_test.test | 10 | 0.001448s | 0.001455s | 0.001434s | byte equality observed |
| add_reference_test.test | 10 | 0.001466s | 0.001430s | 0.001457s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001466s | 0.001432s | 0.001464s | byte equality observed |
| add_volatile_test.test | 10 | 0.001463s | 0.001455s | 0.001449s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001573s | 0.001589s | 0.001561s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001452s | 0.001452s | 0.001452s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001586s | 0.001580s | 0.001588s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001470s | 0.001453s | 0.001456s | byte equality observed |
| alignment_of_test.test | 10 | 0.001455s | 0.001440s | 0.001446s | byte equality observed |
| common_type_2_test.test | 8 | 0.001461s | 0.001455s | 0.001438s | byte equality observed |
| common_type_3_test.test | 9 | 0.001451s | 0.001439s | 0.001441s | byte equality observed |
| common_type_4_test.test | 10 | 0.001436s | 0.001453s | 0.001433s | byte equality observed |
| common_type_5_test.test | 10 | 0.001469s | 0.001421s | 0.001434s | byte equality observed |
| common_type_6_test.test | 10 | 0.001472s | 0.001468s | 0.001436s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001451s | 0.001446s | 0.001449s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001441s | 0.001452s | 0.001444s | byte equality observed |
| common_type_test.test | 10 | 0.001423s | 0.001435s | 0.001426s | byte equality observed |
| conditional_test.test | 10 | 0.001447s | 0.001422s | 0.001451s | byte equality observed |
| conjunction_test.test | 9 | 0.001452s | 0.001418s | 0.001429s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001429s | 0.001438s | 0.001441s | byte equality observed |
| copy_cv_test.test | 10 | 0.001475s | 0.001465s | 0.001460s | byte equality observed |
| copy_reference_test.test | 10 | 0.001475s | 0.001428s | 0.001436s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001436s | 0.001465s | 0.001446s | byte equality observed |
| decay_test.test | 10 | 0.001467s | 0.001476s | 0.001461s | byte equality observed |
| detected_or_test.test | 10 | 0.001455s | 0.001487s | 0.001484s | byte equality observed |
| detected_test.test | 10 | 0.001434s | 0.001441s | 0.001444s | byte equality observed |
| disjunction_test.test | 10 | 0.001428s | 0.001457s | 0.001426s | byte equality observed |
| enable_if_test.test | 10 | 0.001448s | 0.001452s | 0.001422s | byte equality observed |
| extent_test.test | 10 | 0.001458s | 0.001467s | 0.001432s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001430s | 0.001457s | 0.001428s | byte equality observed |
| function_traits_test.test | 10 | 0.001448s | 0.001461s | 0.001431s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001446s | 0.001426s | 0.001466s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001440s | 0.001462s | 0.001417s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001443s | 0.001437s | 0.001481s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001445s | 0.001445s | 0.001444s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001428s | 0.001438s | 0.001439s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001465s | 0.001474s | 0.001437s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001431s | 0.001444s | 0.001445s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001446s | 0.001470s | 0.001424s | byte equality observed |
| has_binary_classes8_test.test | 7 | 0.001419s | 0.001472s | 0.001416s | byte equality observed |
| has_binary_classes9_test.test | 9 | 0.001444s | 0.001468s | 0.001404s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001466s | 0.001448s | 0.001448s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001408s | 0.001464s | 0.001445s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001456s | 0.001450s | 0.001418s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001431s | 0.001425s | 0.001397s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001439s | 0.001468s | 0.001490s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001444s | 0.001419s | 0.001430s | byte equality observed |
| has_complement_test.test | 10 | 0.001420s | 0.001459s | 0.001441s | byte equality observed |
| has_dereference_test.test | 9 | 0.001422s | 0.001448s | 0.001471s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001450s | 0.001445s | 0.001463s | byte equality observed |
| has_divides_test.test | 10 | 0.001439s | 0.001433s | 0.001445s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001446s | 0.001436s | 0.001458s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001456s | 0.001439s | 0.001449s | byte equality observed |
| has_greater_test.test | 10 | 0.001440s | 0.001434s | 0.001443s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001425s | 0.001490s | 0.001445s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001435s | 0.001470s | 0.001431s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001426s | 0.001425s | 0.001424s | byte equality observed |
| has_less_test.test | 10 | 0.001427s | 0.001452s | 0.001443s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001442s | 0.001448s | 0.001456s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001481s | 0.001449s | 0.001467s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001466s | 0.001439s | 0.001423s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001479s | 0.001460s | 0.001457s | byte equality observed |
| has_minus_test.test | 10 | 0.001437s | 0.001442s | 0.001451s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001451s | 0.001475s | 0.001448s | byte equality observed |
| has_modulus_test.test | 10 | 0.001460s | 0.001433s | 0.001420s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001453s | 0.001427s | 0.001425s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001463s | 0.001436s | 0.001460s | byte equality observed |
| has_negate_test.test | 10 | 0.001439s | 0.001444s | 0.001441s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001449s | 0.001456s | 0.001462s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001458s | 0.001447s | 0.001417s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001477s | 0.001454s | 0.001451s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001438s | 0.001459s | 0.001428s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001453s | 0.001471s | 0.001402s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001458s | 0.001434s | 0.001443s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 8 | 0.001457s | 0.001430s | 0.001481s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001422s | 0.001442s | 0.001416s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001442s | 0.001454s | 0.001467s | byte equality observed |
| has_plus_assign_test.test | 9 | 0.001441s | 0.001459s | 0.001448s | byte equality observed |
| has_plus_test.test | 10 | 0.001445s | 0.001448s | 0.001406s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001437s | 0.001489s | 0.001410s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001438s | 0.001452s | 0.001450s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001460s | 0.001429s | 0.001426s | byte equality observed |
| has_postfix_classes1_test.test | 9 | 0.001457s | 0.001449s | 0.001456s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001449s | 0.001416s | 0.001464s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001457s | 0.001480s | 0.001414s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001457s | 0.001470s | 0.001422s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001457s | 0.001415s | 0.001457s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001459s | 0.001424s | 0.001470s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001469s | 0.001455s | 0.001438s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001434s | 0.001454s | 0.001405s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001451s | 0.001448s | 0.001455s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001474s | 0.001457s | 0.001429s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001428s | 0.001445s | 0.001444s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001565s | 0.001537s | 0.001513s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001524s | 0.001500s | 0.001533s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001552s | 0.001574s | 0.001598s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001458s | 0.001453s | 0.001467s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001452s | 0.001450s | 0.001465s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001432s | 0.001444s | 0.001432s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001451s | 0.001458s | 0.001425s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001464s | 0.001451s | 0.001459s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001484s | 0.001460s | 0.001429s | byte equality observed |
| integral_constant_test.test | 10 | 0.000639s | 0.000632s | 0.001434s | byte equality observed |
| is_abstract_test.test | 10 | 0.001458s | 0.001449s | 0.001411s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001439s | 0.001474s | 0.001434s | byte equality observed |
| is_array_test.test | 10 | 0.001448s | 0.001438s | 0.001455s | byte equality observed |
| is_assignable_test.test | 10 | 0.001441s | 0.001440s | 0.001436s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001449s | 0.001449s | 0.001416s | byte equality observed |
| is_base_of_test.test | 10 | 0.001437s | 0.001440s | 0.001454s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001441s | 0.001478s | 0.001484s | byte equality observed |
| is_class_test.test | 10 | 0.001443s | 0.001442s | 0.001449s | byte equality observed |
| is_complete_test.test | 10 | 0.001445s | 0.001437s | 0.001474s | byte equality observed |
| is_complex_test.test | 10 | 0.001440s | 0.001464s | 0.001473s | byte equality observed |
| is_compound_test.test | 10 | 0.001453s | 0.001440s | 0.001471s | byte equality observed |
| is_const_test.test | 10 | 0.001463s | 0.001431s | 0.001444s | byte equality observed |
| is_constructible_test.test | 10 | 0.001418s | 0.001438s | 0.001433s | byte equality observed |
| is_convertible_test.test | 10 | 0.001467s | 0.001425s | 0.001471s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001464s | 0.001467s | 0.001475s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001446s | 0.001451s | 0.001457s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001456s | 0.001459s | 0.001468s | byte equality observed |
| is_destructible_test.test | 10 | 0.001460s | 0.001412s | 0.001420s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001449s | 0.001462s | 0.001447s | byte equality observed |
| is_detected_test.test | 10 | 0.001447s | 0.001434s | 0.001456s | byte equality observed |
| is_empty_test.test | 10 | 0.001460s | 0.001468s | 0.001420s | byte equality observed |
| is_enum_test.test | 10 | 0.001457s | 0.001451s | 0.001444s | byte equality observed |
| is_final_test.test | 10 | 0.001441s | 0.001459s | 0.001431s | byte equality observed |
| is_float_test.test | 10 | 0.001448s | 0.001435s | 0.001441s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001432s | 0.001456s | 0.001423s | byte equality observed |
| is_function_test.test | 10 | 0.001449s | 0.001458s | 0.001424s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001454s | 0.001450s | 0.001431s | byte equality observed |
| is_integral_test.test | 10 | 0.001466s | 0.001410s | 0.001435s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001443s | 0.001450s | 0.001455s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001457s | 0.001421s | 0.001453s | byte equality observed |
| is_member_func_test.test | 10 | 0.001456s | 0.001445s | 0.001455s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001457s | 0.001439s | 0.001455s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001435s | 0.001478s | 0.001421s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001440s | 0.001451s | 0.001444s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001448s | 0.001444s | 0.001440s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 8 | 0.001493s | 0.001449s | 0.001464s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001431s | 0.001436s | 0.001460s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001426s | 0.001444s | 0.001440s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001435s | 0.001432s | 0.001438s | byte equality observed |
| is_object_test.test | 10 | 0.001444s | 0.001455s | 0.001458s | byte equality observed |
| is_pod_test.test | 10 | 0.001428s | 0.001467s | 0.001437s | byte equality observed |
| is_pointer_test.test | 10 | 0.001460s | 0.001458s | 0.001439s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001456s | 0.001416s | 0.001464s | byte equality observed |
| is_reference_test.test | 10 | 0.001475s | 0.001418s | 0.001418s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001460s | 0.001464s | 0.001405s | byte equality observed |
| is_same_test.test | 10 | 0.001430s | 0.001467s | 0.001445s | byte equality observed |
| is_scalar_test.test | 10 | 0.001458s | 0.001464s | 0.001476s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001452s | 0.001449s | 0.001463s | byte equality observed |
| is_signed_test.test | 10 | 0.001477s | 0.001445s | 0.001459s | byte equality observed |
| is_stateless_test.test | 10 | 0.001441s | 0.001422s | 0.001435s | byte equality observed |
| is_swappable_test.test | 10 | 0.001447s | 0.001454s | 0.001452s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001493s | 0.001510s | 0.001475s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001442s | 0.001456s | 0.001442s | byte equality observed |
| is_union_test.test | 10 | 0.001475s | 0.001462s | 0.001425s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001477s | 0.001464s | 0.001462s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001454s | 0.001446s | 0.001445s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001443s | 0.001440s | 0.001435s | byte equality observed |
| is_void_test.test | 10 | 0.001454s | 0.001439s | 0.001427s | byte equality observed |
| is_volatile_test.test | 10 | 0.001438s | 0.001405s | 0.001398s | byte equality observed |
| make_signed_test.test | 10 | 0.001438s | 0.001429s | 0.001429s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001466s | 0.001451s | 0.001450s | byte equality observed |
| make_void_test.test | 10 | 0.001489s | 0.001476s | 0.001444s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000647s | 0.000640s | 0.001477s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000647s | 0.000650s | 0.001428s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000645s | 0.000652s | 0.001449s | byte equality observed |
| negation_test.test | 10 | 0.001516s | 0.001520s | 0.001426s | byte equality observed |
| promote_basic_test.test | 10 | 0.000648s | 0.000653s | 0.001432s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000651s | 0.000658s | 0.001442s | byte equality observed |
| promote_enum_test.test | 10 | 0.000650s | 0.000656s | 0.001435s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000658s | 0.000657s | 0.001439s | byte equality observed |
| rank_test.test | 10 | 0.001475s | 0.001444s | 0.001463s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001458s | 0.001464s | 0.001461s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001486s | 0.001433s | 0.001460s | byte equality observed |
| remove_const_test.test | 10 | 0.001435s | 0.001446s | 0.001455s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001462s | 0.001437s | 0.001432s | byte equality observed |
| remove_cv_test.test | 10 | 0.001436s | 0.001459s | 0.001440s | byte equality observed |
| remove_extent_test.test | 10 | 0.001487s | 0.001449s | 0.001450s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001449s | 0.001442s | 0.001447s | byte equality observed |
| remove_reference_test.test | 10 | 0.001438s | 0.001451s | 0.001486s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001451s | 0.001453s | 0.001455s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001433s | 0.001454s | 0.001481s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001449s | 0.001463s | 0.001460s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001431s | 0.001429s | 0.001485s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001458s | 0.001450s | 0.001454s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001438s | 0.001458s | 0.001463s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001440s | 0.001450s | 0.001466s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001452s | 0.001498s | 0.001444s | byte equality observed |
| type_identity_test.test | 10 | 0.001484s | 0.001424s | 0.001450s | byte equality observed |
| type_traits_test.test | 10 | 0.000635s | 0.000637s | 0.001483s | byte equality observed |
| type_with_alignment_test.test | 9 | 0.001619s | 0.001593s | 0.001615s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
