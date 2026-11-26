# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.164292 | 0.451847 | 0.754223 | 0.001954 | 0.001888 | 0.001978 |
| type_traits_test.test | RUN | 0.228639 | 0.477026 | 0.823669 | 0.000709 | 0.000778 | 0.001620 |
| type_identity_test.test | RUN | 0.454178 | 1.769491 | 4.607076 | 0.001680 | 0.001906 | 0.002167 |
| tricky_rvalue_test.test | RUN | 0.150472 | 0.366339 | 0.611589 | 0.001906 | 0.002172 | 0.002084 |
| tricky_partial_spec_test.test | RUN | 0.188131 | 0.523584 | 1.036532 | 0.001535 | 0.001877 | 0.002139 |
| tricky_is_enum_test.test | RUN | 0.142957 | 0.341619 | 0.547512 | 0.001752 | 0.001654 | 0.002106 |
| tricky_incomplete_type_test.test | RUN | 0.247466 | 0.541776 | 0.943756 | 0.001668 | 0.001740 | 0.001950 |
| tricky_function_type_test.test | RUN | 0.194999 | 0.557342 | 1.085194 | 0.001924 | 0.001668 | 0.001744 |
| tricky_add_pointer_test.test | RUN | 0.302300 | 1.046955 | 2.530562 | 0.001735 | 0.002109 | 0.002058 |
| tricky_abstract_type_test.test | RUN | 0.157444 | 0.356180 | 0.580413 | 0.001544 | 0.002116 | 0.001811 |
| remove_volatile_test.test | RUN | 0.416337 | 1.441947 | 3.960096 | 0.001963 | 0.001998 | 0.002035 |
| remove_reference_test.test | RUN | 0.428801 | 1.521477 | 4.181492 | 0.001752 | 0.001943 | 0.002096 |
| remove_pointer_test.test | RUN | 0.446224 | 1.645432 | 4.315175 | 0.001712 | 0.002078 | 0.001814 |
| remove_extent_test.test | RUN | 0.438196 | 1.564416 | 4.147186 | 0.001852 | 0.002118 | 0.001882 |
| remove_cv_test.test | RUN | 0.421611 | 1.531688 | 4.097349 | 0.002042 | 0.002089 | 0.002105 |
| remove_cv_ref_test.test | RUN | 0.884494 | 3.675780 | 10.442357 | 0.001970 | 0.001584 | 0.002277 |
| remove_const_test.test | RUN | 0.408373 | 1.478304 | 4.012035 | 0.001908 | 0.002094 | 0.001875 |
| remove_bounds_test.test | RUN | 0.420064 | 1.541393 | 4.192581 | 0.001926 | 0.002024 | 0.002098 |
| remove_all_extents_test.test | RUN | 0.419584 | 1.606677 | 4.137703 | 0.001806 | 0.001742 | 0.001845 |
| rank_test.test | RUN | 0.151770 | 0.364239 | 0.545465 | 0.001699 | 0.001863 | 0.001760 |
| promote_mpl_test.test | RUN | 0.131151 | 0.316971 | 0.394615 | 0.000691 | 0.000760 | 0.001966 |
| promote_enum_test.test | RUN | 0.029785 | 0.080479 | 0.090094 | 0.000631 | 0.000884 | 0.001790 |
| promote_enum_msvc_bug_test.test | RUN | 0.026023 | 0.072215 | 0.069819 | 0.000661 | 0.000913 | 0.001680 |
| promote_basic_test.test | RUN | 0.033361 | 0.088635 | 0.094903 | 0.000900 | 0.000799 | 0.002024 |
| negation_test.test | RUN | 0.148588 | 0.316215 | 0.496481 | 0.001750 | 0.001696 | 0.002136 |
| mpl_interop_test3.test | RUN | 0.120709 | 0.298863 | 0.353678 | 0.000683 | 0.000766 | 0.001714 |
| mpl_interop_test2.test | RUN | 0.042441 | 0.082019 | 0.085173 | 0.000792 | 0.000671 | 0.001688 |
| mpl_interop_test1.test | RUN | 0.023184 | 0.061889 | 0.074151 | 0.000669 | 0.000828 | 0.001988 |
| make_void_test.test | RUN | 0.153826 | 0.362719 | 0.623816 | 0.001820 | 0.002164 | 0.002063 |
| make_unsigned_test.test | RUN | 0.182708 | 0.493132 | 0.860839 | 0.001594 | 0.002084 | 0.002013 |
| make_signed_test.test | RUN | 0.182647 | 0.490945 | 0.901258 | 0.001794 | 0.001970 | 0.002071 |
| is_volatile_test.test | RUN | 0.162970 | 0.422595 | 0.697530 | 0.001692 | 0.001779 | 0.002077 |
| is_void_test.test | RUN | 0.154747 | 0.383915 | 0.642573 | 0.001967 | 0.002124 | 0.002014 |
| is_virtual_base_of_test.test | RUN | 0.179790 | 0.482903 | 0.888495 | 0.001887 | 0.001980 | 0.001832 |
| is_unsigned_test.test | RUN | 0.155392 | 0.397720 | 0.664645 | 0.001544 | 0.002103 | 0.001688 |
| is_unscoped_enum_test.test | RUN | 0.149900 | 0.346345 | 0.555732 | 0.001803 | 0.001813 | 0.001781 |
| is_union_test.test | RUN | 0.168884 | 0.447302 | 0.854463 | 0.001866 | 0.002002 | 0.002010 |
| is_unbounded_array_test.test | RUN | 0.151578 | 0.381845 | 0.662432 | 0.001736 | 0.001988 | 0.001702 |
| is_trivially_copyable_test.test | RUN | 0.250558 | 0.809320 | 1.666716 | 0.001678 | 0.002247 | 0.002204 |
| is_swappable_test.test | RUN | 0.205464 | 0.596025 | 1.266162 | 0.001722 | 0.001969 | 0.001842 |
| is_stateless_test.test | RUN | 0.234762 | 0.704213 | 1.353654 | 0.001690 | 0.002009 | 0.002161 |
| is_signed_test.test | RUN | 0.160532 | 0.372296 | 0.692636 | 0.002028 | 0.002012 | 0.001764 |
| is_scoped_enum_test.test | RUN | 0.157622 | 0.355274 | 0.583783 | 0.001777 | 0.001874 | 0.002147 |
| is_scalar_test.test | RUN | 0.201805 | 0.647206 | 1.299054 | 0.001866 | 0.001690 | 0.002028 |
| is_same_test.test | RUN | 0.155622 | 0.390583 | 0.602467 | 0.002012 | 0.001866 | 0.002197 |
| is_rvalue_reference_test.test | RUN | 0.160218 | 0.412220 | 0.736424 | 0.001723 | 0.001958 | 0.001882 |
| is_reference_test.test | RUN | 0.162942 | 0.424034 | 0.729386 | 0.001745 | 0.001969 | 0.002192 |
| is_polymorphic_test.test | RUN | 0.170700 | 0.443930 | 0.811486 | 0.001897 | 0.001939 | 0.002004 |
| is_pointer_test.test | RUN | 0.164714 | 0.436958 | 0.777828 | 0.001908 | 0.001729 | 0.001729 |
| is_pod_test.test | RUN | 0.219516 | 0.726982 | 1.495321 | 0.001611 | 0.002152 | 0.002049 |
| is_object_test.test | RUN | 0.152828 | 0.358584 | 0.600008 | 0.001796 | 0.001897 | 0.001832 |
| is_nothrow_swappable_test.test | RUN | 0.220384 | 0.649063 | 1.310339 | 0.001890 | 0.001912 | 0.001918 |
| is_nothrow_move_constructible_test.test | RUN | 0.213730 | 0.696407 | 1.427551 | 0.001830 | 0.001804 | 0.001751 |
| is_nothrow_move_assignable_test.test | RUN | 0.212303 | 0.695486 | 1.430240 | 0.001662 | 0.001688 | 0.001822 |
| is_noncopyable_test.test | RUN | 0.156128 | 0.360518 | 0.579888 | 0.001625 | 0.001782 | 0.001921 |
| is_member_pointer_test.test | RUN | 0.154130 | 0.375386 | 0.609369 | 0.001913 | 0.002122 | 0.002042 |
| is_member_obj_test.test | RUN | 0.154598 | 0.381706 | 0.626589 | 0.001576 | 0.001680 | 0.002113 |
| is_member_func_test.test | RUN | 0.159513 | 0.405789 | 0.718112 | 0.001775 | 0.002030 | 0.001850 |
| is_lvalue_reference_test.test | RUN | 0.165008 | 0.431289 | 0.759993 | 0.001703 | 0.001742 | 0.002078 |
| is_list_constructible_test.test | RUN | 0.186857 | 0.502747 | 0.795104 | 0.001796 | 0.001936 | 0.002027 |
| is_integral_test.test | RUN | 0.194255 | 0.604686 | 1.203244 | 0.001818 | 0.001683 | 0.002044 |
| is_fundamental_test.test | RUN | 0.197268 | 0.623116 | 1.238870 | 0.001864 | 0.002179 | 0.001696 |
| is_function_test.test | RUN | 0.158900 | 0.408449 | 0.651574 | 0.001513 | 0.001910 | 0.002017 |
| is_floating_point_test.test | RUN | 0.158981 | 0.429707 | 0.738323 | 0.001672 | 0.001883 | 0.001925 |
| is_float_test.test | RUN | 0.165058 | 0.428011 | 0.765627 | 0.001639 | 0.001724 | 0.002070 |
| is_final_test.test | RUN | 0.164406 | 0.435591 | 0.795544 | 0.001758 | 0.001950 | 0.001745 |
| is_enum_test.test | RUN | 0.150276 | 0.370085 | 0.623556 | 0.001634 | 0.001864 | 0.002134 |
| is_empty_test.test | RUN | 0.163973 | 0.403971 | 0.677450 | 0.001591 | 0.002010 | 0.001657 |
| is_detected_test.test | RUN | 0.147623 | 0.346632 | 0.543716 | 0.001759 | 0.001741 | 0.002029 |
| is_detected_exact_test.test | RUN | 0.143473 | 0.337210 | 0.533680 | 0.001838 | 0.001740 | 0.001956 |
| is_destructible_test.test | RUN | 0.212560 | 0.681311 | 1.403928 | 0.001727 | 0.002109 | 0.001425 |
| is_default_constr_test.test | RUN | 0.216189 | 0.691857 | 1.421919 | 0.001884 | 0.001928 | 0.001668 |
| is_copy_constructible_test.test | RUN | 0.228656 | 0.718640 | 1.515408 | 0.001788 | 0.001867 | 0.001924 |
| is_copy_assignable_test.test | RUN | 0.231431 | 0.723622 | 1.491999 | 0.001654 | 0.001931 | 0.002018 |
| is_convertible_test.test | RUN | 0.220190 | 0.646018 | 1.212925 | 0.001720 | 0.002035 | 0.002076 |
| is_constructible_test.test | RUN | 0.180523 | 0.471925 | 0.882898 | 0.001691 | 0.001847 | 0.001935 |
| is_const_test.test | RUN | 0.157600 | 0.413514 | 0.704439 | 0.001896 | 0.001670 | 0.002045 |
| is_compound_test.test | RUN | 0.151051 | 0.339019 | 0.570109 | 0.001662 | 0.001876 | 0.001630 |
| is_complex_test.test | RUN | 0.200380 | 0.460300 | 0.761872 | 0.001936 | 0.002137 | 0.002102 |
| is_complete_test.test | RUN | 0.174465 | 0.482129 | 0.850467 | 0.001772 | 0.001842 | 0.001590 |
| is_class_test.test | RUN | 0.164237 | 0.422469 | 0.748132 | 0.001440 | 0.001691 | 0.001854 |
| is_bounded_array_test.test | RUN | 0.154707 | 0.380519 | 0.662795 | 0.001864 | 0.001887 | 0.001636 |
| is_base_of_test.test | RUN | 0.165808 | 0.413160 | 0.718519 | 0.001622 | 0.002076 | 0.002000 |
| is_base_and_derived_test.test | RUN | 0.158806 | 0.414320 | 0.737528 | 0.001743 | 0.001959 | 0.001894 |
| is_assignable_test.test | RUN | 0.198962 | 0.586097 | 1.130751 | 0.001673 | 0.001994 | 0.001686 |
| is_array_test.test | RUN | 0.159588 | 0.412141 | 0.685184 | 0.001906 | 0.002058 | 0.001862 |
| is_arithmetic_test.test | RUN | 0.201193 | 0.599305 | 1.185576 | 0.001637 | 0.002155 | 0.001996 |
| is_abstract_test.test | RUN | 0.368737 | 1.603231 | 3.828373 | 0.001709 | 0.001914 | 0.002118 |
| integral_constant_test.test | RUN | 0.024570 | 0.065640 | 0.070700 | 0.000805 | 0.000882 | 0.001796 |
| has_virtual_destructor_test.test | RUN | 0.166191 | 0.454077 | 0.875971 | 0.002028 | 0.002104 | 0.002082 |
| has_unary_plus_test.test | RUN | 0.334521 | 1.825249 | 3.037402 | 0.001515 | 0.001869 | 0.002120 |
| has_unary_minus_test.test | RUN | 0.329661 | 1.839904 | 2.940446 | 0.001728 | 0.001879 | 0.001966 |
| has_trivial_move_constructor_test.test | RUN | 0.229769 | 0.716392 | 1.468863 | 0.001784 | 0.001786 | 0.002026 |
| has_trivial_move_assign_test.test | RUN | 0.220623 | 0.643452 | 1.262778 | 0.001785 | 0.001816 | 0.002044 |
| has_trivial_destructor_test.test | RUN | 0.224054 | 0.640965 | 1.435503 | 0.002070 | 0.001644 | 0.002130 |
| has_trivial_copy_test.test | RUN | 0.232146 | 0.750241 | 1.492154 | 0.001980 | 0.002092 | 0.002182 |
| has_trivial_constr_test.test | RUN | 0.231963 | 0.746632 | 1.529351 | 0.001751 | 0.001953 | 0.002196 |
| has_trivial_assign_test.test | RUN | 0.230585 | 0.743645 | 1.494504 | 0.001781 | 0.002119 | 0.002234 |
| has_right_shift_test.test | RUN | 0.353776 | 1.363154 | 3.252107 | 0.001827 | 0.001944 | 0.001746 |
| has_right_shift_assign_test.test | RUN | 0.336660 | 1.295371 | 2.963951 | 0.001545 | 0.002130 | 0.002177 |
| has_prefix_classes3_test.test | RUN | 0.247845 | 0.741480 | 1.538314 | 0.001709 | 0.002108 | 0.002034 |
| has_prefix_classes2_test.test | RUN | 0.249551 | 0.750869 | 1.587269 | 0.001797 | 0.001902 | 0.002042 |
| has_prefix_classes1_test.test | RUN | 0.244965 | 0.770862 | 1.547053 | 0.001843 | 0.002096 | 0.002060 |
| has_prefix_classes0_test.test | RUN | 0.242018 | 0.764377 | 1.610157 | 0.001844 | 0.001931 | 0.002026 |
| has_pre_increment_test.test | RUN | 0.329075 | 1.836479 | 3.021180 | 0.001821 | 0.001766 | 0.001531 |
| has_pre_decrement_test.test | RUN | 0.332603 | 1.833670 | 2.926383 | 0.001648 | 0.002132 | 0.002038 |
| has_postfix_classes3_test.test | RUN | 0.243285 | 0.741276 | 1.603411 | 0.001824 | 0.001842 | 0.002060 |
| has_postfix_classes2_test.test | RUN | 0.241310 | 0.702649 | 1.553750 | 0.001728 | 0.001866 | 0.001790 |
| has_postfix_classes1_test.test | RUN | 0.245646 | 0.752799 | 1.561490 | 0.001983 | 0.002094 | 0.002062 |
| has_postfix_classes0_test.test | RUN | 0.248318 | 0.758570 | 1.540134 | 0.001774 | 0.002081 | 0.002026 |
| has_post_increment_test.test | RUN | 0.338597 | 1.857885 | 3.033447 | 0.001834 | 0.001990 | 0.001958 |
| has_post_decrement_test.test | RUN | 0.336769 | 1.849570 | 3.031542 | 0.001776 | 0.002028 | 0.002044 |
| has_plus_test.test | RUN | 0.339681 | 1.332675 | 3.031788 | 0.001816 | 0.001970 | 0.001822 |
| has_plus_assign_test.test | RUN | 0.347331 | 1.311294 | 3.040878 | 0.001814 | 0.002102 | 0.001848 |
| has_operator_new_test.test | RUN | 0.226769 | 0.693748 | 1.402599 | 0.001741 | 0.001853 | 0.002110 |
| has_nothrow_destructor_test.test | RUN | 0.230209 | 0.754741 | 1.521015 | 0.001656 | 0.001775 | 0.001985 |
| has_nothrow_copy_test.test | RUN | 0.231315 | 0.711570 | 1.446096 | 0.001687 | 0.001860 | 0.002114 |
| has_nothrow_constr_test.test | RUN | 0.203291 | 0.690505 | 1.413463 | 0.001726 | 0.001961 | 0.001847 |
| has_nothrow_assign_test.test | RUN | 0.221373 | 0.710649 | 1.438472 | 0.001889 | 0.002108 | 0.002130 |
| has_not_equal_to_test.test | RUN | 0.337026 | 1.794305 | 3.084165 | 0.001797 | 0.002000 | 0.002076 |
| has_negate_test.test | RUN | 0.326560 | 1.240007 | 2.904642 | 0.001690 | 0.001914 | 0.001925 |
| has_multiplies_test.test | RUN | 0.332623 | 1.320243 | 2.928332 | 0.001742 | 0.002018 | 0.002087 |
| has_multiplies_assign_test.test | RUN | 0.336093 | 1.270040 | 3.008676 | 0.002008 | 0.001886 | 0.002090 |
| has_modulus_test.test | RUN | 0.334710 | 1.277534 | 3.049656 | 0.001978 | 0.001864 | 0.002096 |
| has_modulus_assign_test.test | RUN | 0.329621 | 1.278048 | 2.973867 | 0.001789 | 0.002116 | 0.002052 |
| has_minus_test.test | RUN | 0.337197 | 1.354287 | 3.045584 | 0.001732 | 0.002046 | 0.002074 |
| has_minus_assign_test.test | RUN | 0.342425 | 1.300695 | 2.962748 | 0.001892 | 0.002060 | 0.002272 |
| has_logical_or_test.test | RUN | 0.339762 | 1.309788 | 3.047250 | 0.001964 | 0.001826 | 0.002088 |
| has_logical_not_test.test | RUN | 0.329557 | 1.246461 | 2.932836 | 0.001986 | 0.002258 | 0.002036 |
| has_logical_and_test.test | RUN | 0.329699 | 1.339168 | 3.016405 | 0.001799 | 0.002136 | 0.002194 |
| has_less_test.test | RUN | 0.327171 | 1.827046 | 3.002739 | 0.001920 | 0.002170 | 0.002119 |
| has_less_equal_test.test | RUN | 0.340565 | 1.831679 | 3.041911 | 0.001810 | 0.001844 | 0.002088 |
| has_left_shift_test.test | RUN | 0.373494 | 1.637360 | 3.677334 | 0.001818 | 0.001709 | 0.002078 |
| has_left_shift_assign_test.test | RUN | 0.326634 | 1.279139 | 3.019008 | 0.001680 | 0.001662 | 0.002086 |
| has_greater_test.test | RUN | 0.343738 | 1.839903 | 3.041026 | 0.001761 | 0.001760 | 0.002040 |
| has_greater_equal_test.test | RUN | 0.335297 | 1.780788 | 3.011343 | 0.001719 | 0.001780 | 0.002050 |
| has_equal_to_test.test | RUN | 0.327099 | 1.760795 | 2.991748 | 0.001878 | 0.001698 | 0.001843 |
| has_divides_test.test | RUN | 0.335329 | 1.262552 | 3.028523 | 0.001799 | 0.001823 | 0.002083 |
| has_divides_assign_test.test | RUN | 0.339359 | 1.300799 | 2.982379 | 0.002004 | 0.001848 | 0.001873 |
| has_dereference_test.test | RUN | 0.331897 | 1.261124 | 2.879538 | 0.001788 | 0.001850 | 0.002180 |
| has_complement_test.test | RUN | 0.331386 | 1.793441 | 2.989159 | 0.001726 | 0.002239 | 0.001808 |
| has_bit_xor_test.test | RUN | 0.332439 | 1.258320 | 2.958714 | 0.001596 | 0.001894 | 0.002128 |
| has_bit_xor_assign_test.test | RUN | 0.336598 | 1.307647 | 3.015900 | 0.001964 | 0.001743 | 0.001920 |
| has_bit_or_test.test | RUN | 0.335037 | 1.287746 | 2.975483 | 0.001732 | 0.002112 | 0.001959 |
| has_bit_or_assign_test.test | RUN | 0.336693 | 1.324703 | 2.973051 | 0.001754 | 0.002130 | 0.002040 |
| has_bit_and_test.test | RUN | 0.329496 | 1.352223 | 2.974028 | 0.001637 | 0.002092 | 0.001843 |
| has_bit_and_assign_test.test | RUN | 0.334320 | 1.317869 | 2.981857 | 0.001921 | 0.002026 | 0.001908 |
| has_binary_classes9_test.test | RUN | 0.368678 | 1.528257 | 3.311159 | 0.001746 | 0.002067 | 0.002106 |
| has_binary_classes8_test.test | RUN | 0.367012 | 1.579387 | 3.268971 | 0.001969 | 0.002086 | 0.001934 |
| has_binary_classes7_test.test | RUN | 0.362134 | 1.549516 | 3.259558 | 0.001773 | 0.002143 | 0.001772 |
| has_binary_classes6_test.test | RUN | 0.361326 | 1.487598 | 3.329115 | 0.001870 | 0.002022 | 0.001985 |
| has_binary_classes5_test.test | RUN | 0.367254 | 1.484541 | 3.289508 | 0.001715 | 0.002110 | 0.002011 |
| has_binary_classes4_test.test | RUN | 0.366769 | 1.595531 | 3.294051 | 0.001922 | 0.002242 | 0.001922 |
| has_binary_classes3_test.test | RUN | 0.368085 | 1.613638 | 3.331102 | 0.001507 | 0.002086 | 0.001715 |
| has_binary_classes2_test.test | RUN | 0.372505 | 1.562215 | 3.297405 | 0.001808 | 0.002188 | 0.002033 |
| has_binary_classes1_test.test | RUN | 0.369923 | 1.559355 | 3.298920 | 0.001798 | 0.001712 | 0.001904 |
| has_binary_classes0_test.test | RUN | 0.361076 | 1.598904 | 3.243146 | 0.001837 | 0.002048 | 0.002134 |
| function_traits_test.test | RUN | 0.159928 | 0.411223 | 0.714347 | 0.001768 | 0.001711 | 0.001781 |
| floating_point_promotion_test.test | RUN | 0.157829 | 0.391938 | 0.665027 | 0.001835 | 0.002124 | 0.001911 |
| extent_test.test | RUN | 0.158607 | 0.401555 | 0.712756 | 0.001662 | 0.001756 | 0.001782 |
| enable_if_test.test | RUN | 0.147040 | 0.326886 | 0.563861 | 0.002065 | 0.002077 | 0.001864 |
| disjunction_test.test | RUN | 0.149214 | 0.356987 | 0.566471 | 0.001855 | 0.002139 | 0.001680 |
| detected_test.test | RUN | 0.147114 | 0.329435 | 0.541368 | 0.001928 | 0.002164 | 0.001871 |
| detected_or_test.test | RUN | 0.149605 | 0.355729 | 0.587807 | 0.001718 | 0.001920 | 0.001695 |
| decay_test.test | RUN | 0.414983 | 1.474526 | 3.602316 | 0.001948 | 0.001875 | 0.001649 |
| cxx14_aliases_test.test | RUN | 0.240157 | 0.520732 | 0.910138 | 0.001789 | 0.001950 | 0.002043 |
| copy_reference_test.test | RUN | 0.150980 | 0.348361 | 0.552763 | 0.001729 | 0.002207 | 0.002114 |
| copy_cv_test.test | RUN | 0.156285 | 0.380698 | 0.627471 | 0.001763 | 0.001856 | 0.002031 |
| copy_cv_ref_test.test | RUN | 0.225757 | 0.645989 | 1.481244 | 0.001885 | 0.001668 | 0.002029 |
| conjunction_test.test | RUN | 0.152593 | 0.365379 | 0.556131 | 0.001626 | 0.001858 | 0.002000 |
| conditional_test.test | RUN | 0.149538 | 0.340081 | 0.539551 | 0.001750 | 0.001854 | 0.001992 |
| common_type_test.test | RUN | 0.205540 | 0.567169 | 1.105441 | 0.001752 | 0.001319 | 0.002000 |
| common_type_sfinae_test.test | RUN | 0.145458 | 0.336675 | 0.536682 | 0.001987 | 0.001839 | 0.002041 |
| common_type_sfinae2_test.test | RUN | 0.154922 | 0.372290 | 0.591239 | 0.001758 | 0.001785 | 0.001928 |
| common_type_6_test.test | RUN | 0.162284 | 0.367734 | 0.531510 | 0.001648 | 0.001591 | 0.001774 |
| common_type_5_test.test | RUN | 0.158026 | 0.359741 | 0.606197 | 0.001750 | 0.001838 | 0.001705 |
| common_type_4_test.test | RUN | 0.168673 | 0.389123 | 0.710994 | 0.001806 | 0.001689 | 0.001715 |
| common_type_3_test.test | RUN | 0.150143 | 0.332955 | 0.507880 | 0.001810 | 0.001849 | 0.001660 |
| common_type_2_test.test | RUN | 0.201654 | 0.529563 | 1.159865 | 0.001672 | 0.001883 | 0.001447 |
| alignment_of_test.test | RUN | 0.159545 | 0.423117 | 0.736086 | 0.001755 | 0.001876 | 0.001600 |
| alignment_of_a2_test.test | RUN | 0.154835 | 0.424268 | 0.708723 | 0.001872 | 0.001958 | 0.001689 |
| aligned_storage_test.test | RUN | 0.166476 | 0.413198 | 0.666334 | 0.001709 | 0.001934 | 0.002040 |
| aligned_storage_empy_test.test | RUN | 0.190710 | 0.489885 | 0.887209 | 0.001636 | 0.002092 | 0.002112 |
| aligned_storage_a2_test.test | RUN | 0.161998 | 0.403261 | 0.633843 | 0.002043 | 0.002234 | 0.002217 |
| add_volatile_test.test | RUN | 0.366871 | 1.269323 | 3.302341 | 0.001958 | 0.002029 | 0.002068 |
| add_rvalue_reference_test.test | RUN | 0.406583 | 1.458106 | 3.894213 | 0.001829 | 0.001762 | 0.002052 |
| add_reference_test.test | RUN | 0.390877 | 1.417806 | 3.806525 | 0.001891 | 0.001938 | 0.002103 |
| add_pointer_test.test | RUN | 0.246995 | 0.778080 | 1.947876 | 0.001894 | 0.001806 | 0.001934 |
| add_lvalue_reference_test.test | RUN | 0.400882 | 1.392628 | 3.742169 | 0.001731 | 0.002047 | 0.001881 |
| add_cv_test.test | RUN | 0.373442 | 1.302205 | 3.517003 | 0.001546 | 0.001706 | 0.001845 |
| add_const_test.test | RUN | 0.372962 | 1.384982 | 3.597522 | 0.001894 | 0.002016 | 0.001712 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.147432 | 0.334463 | 0.525199 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.144617 | 0.333856 | 0.554279 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.139050 | 0.325226 | 0.529894 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.136879 | 0.312561 | 0.483028 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.136844 | 0.320759 | 0.505558 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.140563 | 0.322908 | 0.523158 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.140515 | 0.320734 | 0.516356 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.140907 | 0.313198 | 0.514957 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.137254 | 0.316893 | 0.514323 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.143893 | 0.320493 | 0.516935 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.139957 | 0.320094 | 0.519370 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.138930 | 0.319923 | 0.507892 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.138738 | 0.317596 | 0.514517 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.141889 | 0.321130 | 0.519104 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.140427 | 0.313839 | 0.516406 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.137670 | 0.314881 | 0.499349 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.136699 | 0.312507 | 0.513457 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.145342 | 0.325438 | 0.516801 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.138405 | 0.325492 | 0.519724 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.138278 | 0.315340 | 0.516017 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.138601 | 0.316572 | 0.518967 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.146293 | 0.312218 | 0.524350 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.219085 | 0.715485 | 1.483717 | 0.001634 | 0.001697 | 0.001986 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.217673 | 0.707472 | 1.449967 | 0.001908 | 0.001682 | 0.001661 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.214552 | 0.691613 | 1.445020 | 0.001552 | 0.001697 | 0.001854 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.228547 | 0.692012 | 1.423580 | 0.001296 | 0.001402 | 0.001317 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.128636 | 0.436904 | 0.938504 | 0.001556 | 0.001410 | 0.001446 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.997×, 1.002× | 0.996× |
| clang | 1.023× | 1.026×, 1.019× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001480s | 0.001433s | 0.001441s | byte equality observed |
| add_cv_test.test | 10 | 0.001484s | 0.001456s | 0.001462s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001485s | 0.001458s | 0.001463s | byte equality observed |
| add_pointer_test.test | 10 | 0.001469s | 0.001487s | 0.001446s | byte equality observed |
| add_reference_test.test | 10 | 0.001478s | 0.001475s | 0.001475s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001503s | 0.001463s | 0.001478s | byte equality observed |
| add_volatile_test.test | 10 | 0.001459s | 0.001432s | 0.001442s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001618s | 0.001596s | 0.001589s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001477s | 0.001467s | 0.001473s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001593s | 0.001592s | 0.001634s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001464s | 0.001442s | 0.001482s | byte equality observed |
| alignment_of_test.test | 10 | 0.001450s | 0.001490s | 0.001454s | byte equality observed |
| common_type_2_test.test | 10 | 0.001443s | 0.001463s | 0.001479s | byte equality observed |
| common_type_3_test.test | 10 | 0.001479s | 0.001436s | 0.001457s | byte equality observed |
| common_type_4_test.test | 7 | 0.001475s | 0.001463s | 0.001480s | byte equality observed |
| common_type_5_test.test | 9 | 0.001444s | 0.001463s | 0.001420s | byte equality observed |
| common_type_6_test.test | 10 | 0.001434s | 0.001431s | 0.001455s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001466s | 0.001476s | 0.001468s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001474s | 0.001470s | 0.001484s | byte equality observed |
| common_type_test.test | 10 | 0.001443s | 0.001440s | 0.001459s | byte equality observed |
| conditional_test.test | 10 | 0.001471s | 0.001460s | 0.001490s | byte equality observed |
| conjunction_test.test | 10 | 0.001460s | 0.001458s | 0.001478s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001462s | 0.001418s | 0.001435s | byte equality observed |
| copy_cv_test.test | 10 | 0.001457s | 0.001474s | 0.001451s | byte equality observed |
| copy_reference_test.test | 10 | 0.001448s | 0.001436s | 0.001460s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001477s | 0.001440s | 0.001456s | byte equality observed |
| decay_test.test | 10 | 0.001497s | 0.001486s | 0.001440s | byte equality observed |
| detected_or_test.test | 10 | 0.001471s | 0.001470s | 0.001483s | byte equality observed |
| detected_test.test | 10 | 0.001469s | 0.001463s | 0.001464s | byte equality observed |
| disjunction_test.test | 10 | 0.001451s | 0.001454s | 0.001443s | byte equality observed |
| enable_if_test.test | 10 | 0.001485s | 0.001480s | 0.001477s | byte equality observed |
| extent_test.test | 10 | 0.001457s | 0.001446s | 0.001465s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001446s | 0.001487s | 0.001482s | byte equality observed |
| function_traits_test.test | 10 | 0.001485s | 0.001490s | 0.001418s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001460s | 0.001501s | 0.001477s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001465s | 0.001440s | 0.001459s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001430s | 0.001460s | 0.001464s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001488s | 0.001449s | 0.001464s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001472s | 0.001449s | 0.001474s | byte equality observed |
| has_binary_classes5_test.test | 9 | 0.001459s | 0.001440s | 0.001468s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001461s | 0.001451s | 0.001475s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001454s | 0.001467s | 0.001472s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001449s | 0.001453s | 0.001458s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001484s | 0.001488s | 0.001466s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001456s | 0.001459s | 0.001483s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001452s | 0.001437s | 0.001480s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001438s | 0.001446s | 0.001469s | byte equality observed |
| has_bit_or_test.test | 9 | 0.001451s | 0.001458s | 0.001494s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001461s | 0.001436s | 0.001474s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001469s | 0.001484s | 0.001445s | byte equality observed |
| has_complement_test.test | 10 | 0.001461s | 0.001469s | 0.001474s | byte equality observed |
| has_dereference_test.test | 10 | 0.001465s | 0.001459s | 0.001450s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001465s | 0.001425s | 0.001479s | byte equality observed |
| has_divides_test.test | 10 | 0.001475s | 0.001452s | 0.001482s | byte equality observed |
| has_equal_to_test.test | 10 | 0.001441s | 0.001424s | 0.001477s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001448s | 0.001443s | 0.001452s | byte equality observed |
| has_greater_test.test | 10 | 0.001452s | 0.001456s | 0.001483s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001486s | 0.001459s | 0.001510s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001476s | 0.001428s | 0.001509s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001470s | 0.001467s | 0.001443s | byte equality observed |
| has_less_test.test | 10 | 0.001479s | 0.001463s | 0.001504s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001475s | 0.001476s | 0.001478s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001475s | 0.001476s | 0.001466s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001488s | 0.001461s | 0.001519s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001471s | 0.001459s | 0.001487s | byte equality observed |
| has_minus_test.test | 10 | 0.001484s | 0.001441s | 0.001457s | byte equality observed |
| has_modulus_assign_test.test | 7 | 0.001465s | 0.001488s | 0.001453s | byte equality observed |
| has_modulus_test.test | 9 | 0.001493s | 0.001477s | 0.001446s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001494s | 0.001455s | 0.001452s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001456s | 0.001448s | 0.001454s | byte equality observed |
| has_negate_test.test | 10 | 0.001463s | 0.001493s | 0.001452s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001468s | 0.001468s | 0.001468s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001455s | 0.001494s | 0.001448s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001449s | 0.001471s | 0.001480s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001478s | 0.001440s | 0.001439s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001471s | 0.001455s | 0.001468s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001457s | 0.001478s | 0.001470s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001475s | 0.001486s | 0.001478s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001478s | 0.001429s | 0.001468s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001444s | 0.001476s | 0.001477s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001442s | 0.001440s | 0.001487s | byte equality observed |
| has_plus_test.test | 10 | 0.001462s | 0.001476s | 0.001491s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001476s | 0.001420s | 0.001443s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001443s | 0.001450s | 0.001461s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001491s | 0.001460s | 0.001456s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001434s | 0.001476s | 0.001462s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001468s | 0.001445s | 0.001448s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001471s | 0.001448s | 0.001437s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001441s | 0.001440s | 0.001456s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001486s | 0.001455s | 0.001430s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001463s | 0.001451s | 0.001459s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001453s | 0.001459s | 0.001465s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001449s | 0.001444s | 0.001445s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001499s | 0.001475s | 0.001468s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001456s | 0.001431s | 0.001452s | byte equality observed |
| has_right_shift_test.test | 9 | 0.001445s | 0.001446s | 0.001439s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001541s | 0.001559s | 0.001546s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001524s | 0.001518s | 0.001548s | native test oracle; output varies |
| has_trivial_copy_test.test | 8 | 0.001579s | 0.001519s | 0.001616s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001458s | 0.001479s | 0.001458s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001457s | 0.001455s | 0.001480s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001465s | 0.001479s | 0.001469s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001438s | 0.001465s | 0.001477s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001479s | 0.001480s | 0.001436s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001467s | 0.001483s | 0.001509s | byte equality observed |
| integral_constant_test.test | 10 | 0.000648s | 0.000652s | 0.001455s | byte equality observed |
| is_abstract_test.test | 10 | 0.001493s | 0.001461s | 0.001487s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001456s | 0.001489s | 0.001455s | byte equality observed |
| is_array_test.test | 10 | 0.001456s | 0.001452s | 0.001443s | byte equality observed |
| is_assignable_test.test | 10 | 0.001448s | 0.001437s | 0.001482s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001468s | 0.001463s | 0.001461s | byte equality observed |
| is_base_of_test.test | 10 | 0.001461s | 0.001488s | 0.001442s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001488s | 0.001484s | 0.001459s | byte equality observed |
| is_class_test.test | 10 | 0.001463s | 0.001479s | 0.001458s | byte equality observed |
| is_complete_test.test | 10 | 0.001448s | 0.001482s | 0.001461s | byte equality observed |
| is_complex_test.test | 10 | 0.001455s | 0.001435s | 0.001451s | byte equality observed |
| is_compound_test.test | 10 | 0.001458s | 0.001443s | 0.001449s | byte equality observed |
| is_const_test.test | 10 | 0.001478s | 0.001473s | 0.001471s | byte equality observed |
| is_constructible_test.test | 10 | 0.001446s | 0.001493s | 0.001473s | byte equality observed |
| is_convertible_test.test | 10 | 0.001471s | 0.001460s | 0.001483s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001465s | 0.001458s | 0.001453s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001477s | 0.001457s | 0.001473s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001440s | 0.001482s | 0.001448s | byte equality observed |
| is_destructible_test.test | 10 | 0.001468s | 0.001440s | 0.001463s | byte equality observed |
| is_detected_exact_test.test | 9 | 0.001445s | 0.001477s | 0.001453s | byte equality observed |
| is_detected_test.test | 10 | 0.001458s | 0.001470s | 0.001420s | byte equality observed |
| is_empty_test.test | 10 | 0.001446s | 0.001455s | 0.001469s | byte equality observed |
| is_enum_test.test | 10 | 0.001442s | 0.001454s | 0.001445s | byte equality observed |
| is_final_test.test | 10 | 0.001467s | 0.001458s | 0.001455s | byte equality observed |
| is_float_test.test | 10 | 0.001473s | 0.001438s | 0.001421s | byte equality observed |
| is_floating_point_test.test | 9 | 0.001439s | 0.001443s | 0.001436s | byte equality observed |
| is_function_test.test | 8 | 0.001481s | 0.001443s | 0.001484s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001476s | 0.001475s | 0.001472s | byte equality observed |
| is_integral_test.test | 10 | 0.001453s | 0.001473s | 0.001453s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001488s | 0.001477s | 0.001473s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001441s | 0.001466s | 0.001455s | byte equality observed |
| is_member_func_test.test | 10 | 0.001438s | 0.001468s | 0.001477s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001454s | 0.001449s | 0.001431s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001450s | 0.001472s | 0.001462s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001443s | 0.001453s | 0.001490s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001462s | 0.001460s | 0.001441s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001428s | 0.001459s | 0.001453s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001436s | 0.001456s | 0.001434s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001426s | 0.001451s | 0.001433s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001455s | 0.001465s | 0.001452s | byte equality observed |
| is_object_test.test | 10 | 0.001459s | 0.001457s | 0.001463s | byte equality observed |
| is_pod_test.test | 10 | 0.001436s | 0.001493s | 0.001456s | byte equality observed |
| is_pointer_test.test | 10 | 0.001476s | 0.001440s | 0.001475s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001458s | 0.001459s | 0.001453s | byte equality observed |
| is_reference_test.test | 10 | 0.001453s | 0.001454s | 0.001460s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001450s | 0.001444s | 0.001444s | byte equality observed |
| is_same_test.test | 10 | 0.001452s | 0.001440s | 0.001464s | byte equality observed |
| is_scalar_test.test | 10 | 0.001474s | 0.001481s | 0.001417s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001459s | 0.001458s | 0.001476s | byte equality observed |
| is_signed_test.test | 10 | 0.001481s | 0.001449s | 0.001427s | byte equality observed |
| is_stateless_test.test | 10 | 0.001450s | 0.001461s | 0.001471s | byte equality observed |
| is_swappable_test.test | 10 | 0.001437s | 0.001457s | 0.001467s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001490s | 0.001503s | 0.001485s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001448s | 0.001465s | 0.001457s | byte equality observed |
| is_union_test.test | 10 | 0.001448s | 0.001444s | 0.001459s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001460s | 0.001452s | 0.001427s | byte equality observed |
| is_unsigned_test.test | 9 | 0.001471s | 0.001449s | 0.001450s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001455s | 0.001440s | 0.001502s | byte equality observed |
| is_void_test.test | 10 | 0.001455s | 0.001499s | 0.001465s | byte equality observed |
| is_volatile_test.test | 10 | 0.001447s | 0.001457s | 0.001470s | byte equality observed |
| make_signed_test.test | 10 | 0.001461s | 0.001480s | 0.001455s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001460s | 0.001457s | 0.001468s | byte equality observed |
| make_void_test.test | 10 | 0.001479s | 0.001479s | 0.001439s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000638s | 0.000649s | 0.001418s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000662s | 0.000659s | 0.001477s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000658s | 0.000649s | 0.001464s | byte equality observed |
| negation_test.test | 10 | 0.001520s | 0.001503s | 0.001451s | byte equality observed |
| promote_basic_test.test | 10 | 0.000664s | 0.000661s | 0.001424s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000660s | 0.000666s | 0.001470s | byte equality observed |
| promote_enum_test.test | 10 | 0.000658s | 0.000649s | 0.001420s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000663s | 0.000660s | 0.001494s | byte equality observed |
| rank_test.test | 10 | 0.001485s | 0.001467s | 0.001478s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001492s | 0.001458s | 0.001444s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001500s | 0.001452s | 0.001481s | byte equality observed |
| remove_const_test.test | 10 | 0.001477s | 0.001430s | 0.001464s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001483s | 0.001457s | 0.001482s | byte equality observed |
| remove_cv_test.test | 10 | 0.001481s | 0.001462s | 0.001451s | byte equality observed |
| remove_extent_test.test | 10 | 0.001476s | 0.001427s | 0.001462s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001468s | 0.001467s | 0.001462s | byte equality observed |
| remove_reference_test.test | 10 | 0.001465s | 0.001470s | 0.001488s | byte equality observed |
| remove_volatile_test.test | 9 | 0.001465s | 0.001447s | 0.001483s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001462s | 0.001472s | 0.001483s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001465s | 0.001436s | 0.001496s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001439s | 0.001441s | 0.001475s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001425s | 0.001448s | 0.001463s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001443s | 0.001487s | 0.001468s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001450s | 0.001452s | 0.001492s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001491s | 0.001446s | 0.001441s | byte equality observed |
| type_identity_test.test | 10 | 0.001477s | 0.001469s | 0.001475s | byte equality observed |
| type_traits_test.test | 10 | 0.000657s | 0.000638s | 0.001451s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001652s | 0.001635s | 0.001659s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
