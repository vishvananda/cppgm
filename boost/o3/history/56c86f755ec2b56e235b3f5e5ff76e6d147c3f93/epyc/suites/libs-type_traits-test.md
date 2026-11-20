# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.163465 | 0.455419 | 0.790260 | 0.002098 | 0.002255 | 0.002054 |
| type_traits_test.test | RUN | 0.224559 | 0.479662 | 0.770538 | 0.000746 | 0.000747 | 0.002044 |
| type_identity_test.test | RUN | 0.448945 | 1.743047 | 4.523702 | 0.001880 | 0.001522 | 0.002099 |
| tricky_rvalue_test.test | RUN | 0.148336 | 0.369321 | 0.607914 | 0.001996 | 0.001780 | 0.002059 |
| tricky_partial_spec_test.test | RUN | 0.185618 | 0.533895 | 0.960199 | 0.001745 | 0.001891 | 0.002264 |
| tricky_is_enum_test.test | RUN | 0.140906 | 0.347669 | 0.562199 | 0.002044 | 0.001955 | 0.002086 |
| tricky_incomplete_type_test.test | RUN | 0.239808 | 0.549493 | 0.974955 | 0.002046 | 0.001890 | 0.002095 |
| tricky_function_type_test.test | RUN | 0.196691 | 0.575635 | 1.043740 | 0.002080 | 0.001904 | 0.001949 |
| tricky_add_pointer_test.test | RUN | 0.294955 | 1.041346 | 2.529937 | 0.001872 | 0.002104 | 0.002012 |
| tricky_abstract_type_test.test | RUN | 0.153857 | 0.342027 | 0.584736 | 0.002015 | 0.001942 | 0.001957 |
| remove_volatile_test.test | RUN | 0.403647 | 1.442507 | 3.927260 | 0.002020 | 0.002132 | 0.002158 |
| remove_reference_test.test | RUN | 0.425913 | 1.576028 | 4.126250 | 0.001828 | 0.002207 | 0.002102 |
| remove_pointer_test.test | RUN | 0.447687 | 1.595988 | 4.285409 | 0.002142 | 0.001989 | 0.002076 |
| remove_extent_test.test | RUN | 0.415148 | 1.566485 | 4.177579 | 0.002078 | 0.002182 | 0.002098 |
| remove_cv_test.test | RUN | 0.414107 | 1.544586 | 4.056102 | 0.002043 | 0.002091 | 0.002118 |
| remove_cv_ref_test.test | RUN | 0.898572 | 3.738064 | 10.061524 | 0.001755 | 0.002056 | 0.001731 |
| remove_const_test.test | RUN | 0.406338 | 1.445543 | 3.973669 | 0.002090 | 0.002064 | 0.002121 |
| remove_bounds_test.test | RUN | 0.436762 | 1.542803 | 4.163638 | 0.002056 | 0.001908 | 0.001857 |
| remove_all_extents_test.test | RUN | 0.423695 | 1.590591 | 4.021966 | 0.001946 | 0.002128 | 0.001636 |
| rank_test.test | RUN | 0.147463 | 0.371190 | 0.619782 | 0.001936 | 0.001706 | 0.002094 |
| promote_mpl_test.test | RUN | 0.131145 | 0.330003 | 0.416120 | 0.000723 | 0.000810 | 0.002078 |
| promote_enum_test.test | RUN | 0.031101 | 0.081298 | 0.103236 | 0.000623 | 0.000874 | 0.002116 |
| promote_enum_msvc_bug_test.test | RUN | 0.027901 | 0.066149 | 0.082990 | 0.000772 | 0.000830 | 0.002110 |
| promote_basic_test.test | RUN | 0.031945 | 0.096255 | 0.108633 | 0.000750 | 0.000763 | 0.002075 |
| negation_test.test | RUN | 0.144044 | 0.333232 | 0.549624 | 0.001745 | 0.001764 | 0.001603 |
| mpl_interop_test3.test | RUN | 0.121818 | 0.292902 | 0.378165 | 0.000685 | 0.000775 | 0.001723 |
| mpl_interop_test2.test | RUN | 0.043997 | 0.087998 | 0.099482 | 0.000685 | 0.000771 | 0.002050 |
| mpl_interop_test1.test | RUN | 0.022695 | 0.059339 | 0.064523 | 0.000688 | 0.000673 | 0.002146 |
| make_void_test.test | RUN | 0.155745 | 0.358523 | 0.582228 | 0.001922 | 0.002162 | 0.002344 |
| make_unsigned_test.test | RUN | 0.178319 | 0.497151 | 0.852137 | 0.001859 | 0.001861 | 0.002232 |
| make_signed_test.test | RUN | 0.176803 | 0.501192 | 0.875954 | 0.001848 | 0.001920 | 0.001870 |
| is_volatile_test.test | RUN | 0.160894 | 0.398743 | 0.700243 | 0.001768 | 0.001848 | 0.001678 |
| is_void_test.test | RUN | 0.156495 | 0.382222 | 0.661897 | 0.001833 | 0.002096 | 0.001994 |
| is_virtual_base_of_test.test | RUN | 0.175973 | 0.483502 | 0.903817 | 0.001826 | 0.001897 | 0.001802 |
| is_unsigned_test.test | RUN | 0.155343 | 0.394643 | 0.684255 | 0.002046 | 0.002162 | 0.001956 |
| is_unscoped_enum_test.test | RUN | 0.154204 | 0.360889 | 0.587161 | 0.001836 | 0.001706 | 0.001856 |
| is_union_test.test | RUN | 0.167900 | 0.451694 | 0.805840 | 0.001861 | 0.002138 | 0.002028 |
| is_unbounded_array_test.test | RUN | 0.151157 | 0.383411 | 0.658473 | 0.001730 | 0.002120 | 0.002120 |
| is_trivially_copyable_test.test | RUN | 0.249885 | 0.809661 | 1.608028 | 0.001816 | 0.002019 | 0.002180 |
| is_swappable_test.test | RUN | 0.205328 | 0.595560 | 1.170516 | 0.001951 | 0.002036 | 0.002015 |
| is_stateless_test.test | RUN | 0.239548 | 0.698511 | 1.415170 | 0.001852 | 0.002146 | 0.002018 |
| is_signed_test.test | RUN | 0.165574 | 0.379610 | 0.702645 | 0.001664 | 0.002079 | 0.001986 |
| is_scoped_enum_test.test | RUN | 0.151621 | 0.337499 | 0.511295 | 0.001856 | 0.002156 | 0.002044 |
| is_scalar_test.test | RUN | 0.205215 | 0.654025 | 1.247236 | 0.002020 | 0.002053 | 0.001709 |
| is_same_test.test | RUN | 0.154420 | 0.365480 | 0.589998 | 0.001663 | 0.002048 | 0.002086 |
| is_rvalue_reference_test.test | RUN | 0.159341 | 0.425438 | 0.774824 | 0.001892 | 0.001679 | 0.001799 |
| is_reference_test.test | RUN | 0.162945 | 0.421078 | 0.727187 | 0.001702 | 0.002032 | 0.002010 |
| is_polymorphic_test.test | RUN | 0.168281 | 0.459606 | 0.818445 | 0.001794 | 0.002156 | 0.002006 |
| is_pointer_test.test | RUN | 0.167064 | 0.445564 | 0.805668 | 0.001774 | 0.002045 | 0.001889 |
| is_pod_test.test | RUN | 0.220916 | 0.720109 | 1.478631 | 0.001866 | 0.002128 | 0.002122 |
| is_object_test.test | RUN | 0.154355 | 0.372171 | 0.544744 | 0.001900 | 0.001821 | 0.002056 |
| is_nothrow_swappable_test.test | RUN | 0.218762 | 0.652444 | 1.347125 | 0.001790 | 0.002117 | 0.001984 |
| is_nothrow_move_constructible_test.test | RUN | 0.219028 | 0.718227 | 1.353439 | 0.001798 | 0.001704 | 0.001828 |
| is_nothrow_move_assignable_test.test | RUN | 0.218385 | 0.703732 | 1.397767 | 0.001718 | 0.001888 | 0.001558 |
| is_noncopyable_test.test | RUN | 0.151002 | 0.369106 | 0.615419 | 0.001862 | 0.001814 | 0.001467 |
| is_member_pointer_test.test | RUN | 0.152095 | 0.389932 | 0.624414 | 0.001948 | 0.002005 | 0.002155 |
| is_member_obj_test.test | RUN | 0.155793 | 0.391893 | 0.617236 | 0.001862 | 0.001926 | 0.001887 |
| is_member_func_test.test | RUN | 0.159856 | 0.407153 | 0.701487 | 0.001996 | 0.001898 | 0.001996 |
| is_lvalue_reference_test.test | RUN | 0.165689 | 0.436631 | 0.768502 | 0.001748 | 0.002190 | 0.001746 |
| is_list_constructible_test.test | RUN | 0.193116 | 0.520392 | 0.772235 | 0.001728 | 0.002048 | 0.002234 |
| is_integral_test.test | RUN | 0.191794 | 0.630680 | 1.200949 | 0.002088 | 0.001718 | 0.002122 |
| is_fundamental_test.test | RUN | 0.192682 | 0.623209 | 1.217774 | 0.001759 | 0.001792 | 0.002001 |
| is_function_test.test | RUN | 0.158977 | 0.411316 | 0.631805 | 0.001963 | 0.001675 | 0.002136 |
| is_floating_point_test.test | RUN | 0.166359 | 0.431853 | 0.713309 | 0.001929 | 0.001888 | 0.002040 |
| is_float_test.test | RUN | 0.159028 | 0.431791 | 0.757191 | 0.002044 | 0.001988 | 0.002212 |
| is_final_test.test | RUN | 0.159601 | 0.407953 | 0.764847 | 0.001543 | 0.001844 | 0.002127 |
| is_enum_test.test | RUN | 0.152070 | 0.333429 | 0.570932 | 0.001538 | 0.001943 | 0.001735 |
| is_empty_test.test | RUN | 0.164781 | 0.401799 | 0.662020 | 0.002024 | 0.002030 | 0.001954 |
| is_detected_test.test | RUN | 0.142230 | 0.336865 | 0.514669 | 0.001756 | 0.001780 | 0.002182 |
| is_detected_exact_test.test | RUN | 0.141066 | 0.347793 | 0.550212 | 0.001592 | 0.001964 | 0.002057 |
| is_destructible_test.test | RUN | 0.216827 | 0.683743 | 1.358204 | 0.002060 | 0.002112 | 0.002084 |
| is_default_constr_test.test | RUN | 0.222034 | 0.702728 | 1.402616 | 0.001974 | 0.001879 | 0.002140 |
| is_copy_constructible_test.test | RUN | 0.228851 | 0.731692 | 1.469283 | 0.001754 | 0.001734 | 0.002082 |
| is_copy_assignable_test.test | RUN | 0.222905 | 0.737901 | 1.483683 | 0.001796 | 0.002040 | 0.002042 |
| is_convertible_test.test | RUN | 0.222166 | 0.661004 | 1.215910 | 0.002036 | 0.002210 | 0.001800 |
| is_constructible_test.test | RUN | 0.172843 | 0.476762 | 0.824115 | 0.001848 | 0.001841 | 0.001635 |
| is_const_test.test | RUN | 0.157195 | 0.415951 | 0.691099 | 0.001730 | 0.001850 | 0.001951 |
| is_compound_test.test | RUN | 0.150371 | 0.343179 | 0.536617 | 0.001752 | 0.001699 | 0.002110 |
| is_complex_test.test | RUN | 0.197344 | 0.468310 | 0.806053 | 0.002022 | 0.002162 | 0.002160 |
| is_complete_test.test | RUN | 0.173436 | 0.488516 | 0.905931 | 0.001893 | 0.001735 | 0.001577 |
| is_class_test.test | RUN | 0.165783 | 0.418271 | 0.740560 | 0.001448 | 0.001874 | 0.001727 |
| is_bounded_array_test.test | RUN | 0.155847 | 0.387995 | 0.610139 | 0.001833 | 0.001759 | 0.001918 |
| is_base_of_test.test | RUN | 0.157576 | 0.416699 | 0.719695 | 0.001925 | 0.002070 | 0.001893 |
| is_base_and_derived_test.test | RUN | 0.157827 | 0.401189 | 0.725816 | 0.001908 | 0.002085 | 0.001795 |
| is_assignable_test.test | RUN | 0.198700 | 0.585096 | 1.173644 | 0.001918 | 0.001858 | 0.001944 |
| is_array_test.test | RUN | 0.160652 | 0.402562 | 0.687610 | 0.001916 | 0.001786 | 0.001738 |
| is_arithmetic_test.test | RUN | 0.189080 | 0.628718 | 1.158929 | 0.001921 | 0.001971 | 0.002182 |
| is_abstract_test.test | RUN | 0.364718 | 1.644951 | 3.765980 | 0.001782 | 0.002032 | 0.002052 |
| integral_constant_test.test | RUN | 0.022424 | 0.064600 | 0.073240 | 0.000825 | 0.000808 | 0.001923 |
| has_virtual_destructor_test.test | RUN | 0.171268 | 0.451445 | 0.886600 | 0.002176 | 0.002080 | 0.002122 |
| has_unary_plus_test.test | RUN | 0.330248 | 1.833079 | 3.009236 | 0.002062 | 0.002098 | 0.002167 |
| has_unary_minus_test.test | RUN | 0.335365 | 1.846857 | 2.934051 | 0.001874 | 0.001723 | 0.002122 |
| has_trivial_move_constructor_test.test | RUN | 0.230215 | 0.717438 | 1.471908 | 0.001846 | 0.001872 | 0.001838 |
| has_trivial_move_assign_test.test | RUN | 0.217690 | 0.675493 | 1.369510 | 0.002030 | 0.001638 | 0.002227 |
| has_trivial_destructor_test.test | RUN | 0.220180 | 0.627843 | 1.373915 | 0.001912 | 0.001689 | 0.001814 |
| has_trivial_copy_test.test | RUN | 0.229799 | 0.760679 | 1.456969 | 0.001996 | 0.001930 | 0.002253 |
| has_trivial_constr_test.test | RUN | 0.234264 | 0.760216 | 1.541089 | 0.002051 | 0.002333 | 0.002278 |
| has_trivial_assign_test.test | RUN | 0.223717 | 0.765889 | 1.441529 | 0.002156 | 0.002055 | 0.002168 |
| has_right_shift_test.test | RUN | 0.351173 | 1.406989 | 3.184393 | 0.001763 | 0.002004 | 0.001670 |
| has_right_shift_assign_test.test | RUN | 0.340864 | 1.333238 | 3.010739 | 0.002004 | 0.002072 | 0.001630 |
| has_prefix_classes3_test.test | RUN | 0.245491 | 0.771310 | 1.490636 | 0.001868 | 0.001836 | 0.002129 |
| has_prefix_classes2_test.test | RUN | 0.248239 | 0.737093 | 1.514702 | 0.001864 | 0.001785 | 0.002105 |
| has_prefix_classes1_test.test | RUN | 0.247090 | 0.769278 | 1.531462 | 0.001940 | 0.002095 | 0.002147 |
| has_prefix_classes0_test.test | RUN | 0.244062 | 0.771289 | 1.542752 | 0.001760 | 0.002064 | 0.002168 |
| has_pre_increment_test.test | RUN | 0.328644 | 1.861730 | 2.989198 | 0.002013 | 0.001892 | 0.001654 |
| has_pre_decrement_test.test | RUN | 0.330182 | 1.869427 | 2.943857 | 0.001747 | 0.002096 | 0.001750 |
| has_postfix_classes3_test.test | RUN | 0.237030 | 0.747074 | 1.583778 | 0.001960 | 0.001906 | 0.001908 |
| has_postfix_classes2_test.test | RUN | 0.239422 | 0.742712 | 1.509472 | 0.001730 | 0.002040 | 0.002079 |
| has_postfix_classes1_test.test | RUN | 0.241698 | 0.768016 | 1.548968 | 0.002076 | 0.002114 | 0.002102 |
| has_postfix_classes0_test.test | RUN | 0.238322 | 0.781180 | 1.574874 | 0.001822 | 0.002100 | 0.002146 |
| has_post_increment_test.test | RUN | 0.336071 | 1.926829 | 3.037443 | 0.001862 | 0.001484 | 0.002186 |
| has_post_decrement_test.test | RUN | 0.332205 | 1.892322 | 3.053574 | 0.001958 | 0.001899 | 0.002040 |
| has_plus_test.test | RUN | 0.333360 | 1.308745 | 2.994563 | 0.002028 | 0.001590 | 0.001506 |
| has_plus_assign_test.test | RUN | 0.343054 | 1.241716 | 3.050277 | 0.001803 | 0.002067 | 0.001966 |
| has_operator_new_test.test | RUN | 0.225236 | 0.671941 | 1.333425 | 0.001847 | 0.001946 | 0.001832 |
| has_nothrow_destructor_test.test | RUN | 0.233897 | 0.736368 | 1.495611 | 0.001771 | 0.001978 | 0.002006 |
| has_nothrow_copy_test.test | RUN | 0.220421 | 0.725585 | 1.427860 | 0.002054 | 0.001776 | 0.002122 |
| has_nothrow_constr_test.test | RUN | 0.213855 | 0.699519 | 1.407570 | 0.001838 | 0.001910 | 0.002022 |
| has_nothrow_assign_test.test | RUN | 0.220014 | 0.714082 | 1.375410 | 0.001703 | 0.003179 | 0.002046 |
| has_not_equal_to_test.test | RUN | 0.338860 | 1.853908 | 3.078196 | 0.001964 | 0.002074 | 0.002370 |
| has_negate_test.test | RUN | 0.320274 | 1.302033 | 2.900595 | 0.002086 | 0.001752 | 0.001886 |
| has_multiplies_test.test | RUN | 0.328610 | 1.295150 | 2.953017 | 0.001800 | 0.001919 | 0.001911 |
| has_multiplies_assign_test.test | RUN | 0.344706 | 1.258782 | 2.966571 | 0.001838 | 0.002180 | 0.002228 |
| has_modulus_test.test | RUN | 0.335708 | 1.356745 | 2.966669 | 0.001763 | 0.001529 | 0.002203 |
| has_modulus_assign_test.test | RUN | 0.332622 | 1.355003 | 2.946999 | 0.001921 | 0.001752 | 0.002024 |
| has_minus_test.test | RUN | 0.341993 | 1.288414 | 2.998078 | 0.001944 | 0.002146 | 0.002016 |
| has_minus_assign_test.test | RUN | 0.340372 | 1.345212 | 3.064988 | 0.002170 | 0.002103 | 0.002187 |
| has_logical_or_test.test | RUN | 0.348982 | 1.382216 | 3.044642 | 0.001839 | 0.001858 | 0.002058 |
| has_logical_not_test.test | RUN | 0.327524 | 1.289922 | 2.879329 | 0.002022 | 0.001828 | 0.002062 |
| has_logical_and_test.test | RUN | 0.333905 | 1.311523 | 3.032137 | 0.001918 | 0.002032 | 0.001986 |
| has_less_test.test | RUN | 0.334043 | 1.830511 | 2.983629 | 0.002041 | 0.001958 | 0.002019 |
| has_less_equal_test.test | RUN | 0.339970 | 1.793472 | 3.031721 | 0.001982 | 0.002076 | 0.002158 |
| has_left_shift_test.test | RUN | 0.366898 | 1.596605 | 3.651775 | 0.002092 | 0.002101 | 0.002000 |
| has_left_shift_assign_test.test | RUN | 0.339081 | 1.236432 | 2.935927 | 0.001994 | 0.001832 | 0.001944 |
| has_greater_test.test | RUN | 0.329401 | 1.879573 | 2.931103 | 0.001929 | 0.001914 | 0.002108 |
| has_greater_equal_test.test | RUN | 0.335991 | 1.819520 | 2.990616 | 0.001944 | 0.001750 | 0.002163 |
| has_equal_to_test.test | RUN | 0.341820 | 1.833620 | 2.968820 | 0.002032 | 0.001876 | 0.002124 |
| has_divides_test.test | RUN | 0.330559 | 1.262108 | 2.967207 | 0.001958 | 0.001892 | 0.002242 |
| has_divides_assign_test.test | RUN | 0.325919 | 1.327383 | 3.024751 | 0.002064 | 0.002048 | 0.002118 |
| has_dereference_test.test | RUN | 0.329835 | 1.270140 | 2.907356 | 0.001936 | 0.001924 | 0.002178 |
| has_complement_test.test | RUN | 0.331994 | 1.847920 | 2.960046 | 0.001746 | 0.002208 | 0.001874 |
| has_bit_xor_test.test | RUN | 0.317287 | 1.288231 | 2.974152 | 0.002008 | 0.001855 | 0.001759 |
| has_bit_xor_assign_test.test | RUN | 0.335879 | 1.305568 | 2.895278 | 0.002007 | 0.002024 | 0.001892 |
| has_bit_or_test.test | RUN | 0.341287 | 1.300862 | 2.997570 | 0.002108 | 0.001955 | 0.002134 |
| has_bit_or_assign_test.test | RUN | 0.333638 | 1.359373 | 2.973740 | 0.002084 | 0.002006 | 0.002036 |
| has_bit_and_test.test | RUN | 0.335264 | 1.316399 | 3.013810 | 0.002030 | 0.001986 | 0.002012 |
| has_bit_and_assign_test.test | RUN | 0.327669 | 1.317840 | 3.015793 | 0.002098 | 0.002114 | 0.002034 |
| has_binary_classes9_test.test | RUN | 0.367131 | 1.531333 | 3.280807 | 0.001978 | 0.002112 | 0.002214 |
| has_binary_classes8_test.test | RUN | 0.370773 | 1.541655 | 3.215492 | 0.001820 | 0.002300 | 0.001828 |
| has_binary_classes7_test.test | RUN | 0.355960 | 1.570475 | 3.304257 | 0.001922 | 0.002198 | 0.001826 |
| has_binary_classes6_test.test | RUN | 0.362272 | 1.493244 | 3.298396 | 0.002134 | 0.002054 | 0.002142 |
| has_binary_classes5_test.test | RUN | 0.365714 | 1.522963 | 3.279857 | 0.001882 | 0.002221 | 0.002154 |
| has_binary_classes4_test.test | RUN | 0.354374 | 1.559270 | 3.202704 | 0.001888 | 0.002214 | 0.001844 |
| has_binary_classes3_test.test | RUN | 0.371270 | 1.568051 | 3.327042 | 0.001878 | 0.002142 | 0.001909 |
| has_binary_classes2_test.test | RUN | 0.362992 | 1.606080 | 3.251469 | 0.002098 | 0.002246 | 0.002042 |
| has_binary_classes1_test.test | RUN | 0.370633 | 1.553342 | 3.204824 | 0.001734 | 0.002172 | 0.001900 |
| has_binary_classes0_test.test | RUN | 0.369877 | 1.602021 | 3.217035 | 0.001936 | 0.001788 | 0.002122 |
| function_traits_test.test | RUN | 0.156152 | 0.393399 | 0.734373 | 0.001901 | 0.002026 | 0.002150 |
| floating_point_promotion_test.test | RUN | 0.153951 | 0.382434 | 0.677101 | 0.001875 | 0.001862 | 0.002009 |
| extent_test.test | RUN | 0.158059 | 0.395220 | 0.647261 | 0.001933 | 0.001907 | 0.001920 |
| enable_if_test.test | RUN | 0.145310 | 0.327848 | 0.555704 | 0.001736 | 0.001587 | 0.001957 |
| disjunction_test.test | RUN | 0.145386 | 0.350922 | 0.584212 | 0.001928 | 0.001875 | 0.001698 |
| detected_test.test | RUN | 0.143746 | 0.336990 | 0.535840 | 0.001996 | 0.001728 | 0.001812 |
| detected_or_test.test | RUN | 0.149819 | 0.354475 | 0.592095 | 0.002062 | 0.001741 | 0.001915 |
| decay_test.test | RUN | 0.403930 | 1.463649 | 3.578031 | 0.001782 | 0.001988 | 0.001842 |
| cxx14_aliases_test.test | RUN | 0.237878 | 0.513663 | 0.960560 | 0.001741 | 0.002022 | 0.002067 |
| copy_reference_test.test | RUN | 0.147680 | 0.350707 | 0.544047 | 0.002106 | 0.001724 | 0.002050 |
| copy_cv_test.test | RUN | 0.152020 | 0.377044 | 0.606932 | 0.002036 | 0.002022 | 0.002024 |
| copy_cv_ref_test.test | RUN | 0.216115 | 0.638053 | 1.385295 | 0.001703 | 0.002116 | 0.002078 |
| conjunction_test.test | RUN | 0.148823 | 0.354832 | 0.585997 | 0.001924 | 0.002098 | 0.002097 |
| conditional_test.test | RUN | 0.151046 | 0.341855 | 0.581931 | 0.001710 | 0.001766 | 0.001828 |
| common_type_test.test | RUN | 0.197874 | 0.545299 | 1.155405 | 0.002030 | 0.001568 | 0.001722 |
| common_type_sfinae_test.test | RUN | 0.148019 | 0.347643 | 0.482322 | 0.001852 | 0.001996 | 0.002080 |
| common_type_sfinae2_test.test | RUN | 0.148360 | 0.349484 | 0.529082 | 0.001786 | 0.001728 | 0.002018 |
| common_type_6_test.test | RUN | 0.154268 | 0.364539 | 0.577849 | 0.001704 | 0.002282 | 0.001703 |
| common_type_5_test.test | RUN | 0.150276 | 0.358057 | 0.587529 | 0.002020 | 0.002082 | 0.002076 |
| common_type_4_test.test | RUN | 0.163532 | 0.383835 | 0.681223 | 0.001968 | 0.001818 | 0.002008 |
| common_type_3_test.test | RUN | 0.140062 | 0.318083 | 0.521804 | 0.001816 | 0.001699 | 0.002076 |
| common_type_2_test.test | RUN | 0.203823 | 0.547419 | 1.112375 | 0.001685 | 0.002184 | 0.002044 |
| alignment_of_test.test | RUN | 0.158084 | 0.423241 | 0.684534 | 0.001792 | 0.001760 | 0.001732 |
| alignment_of_a2_test.test | RUN | 0.159611 | 0.423376 | 0.699588 | 0.001804 | 0.001766 | 0.002073 |
| aligned_storage_test.test | RUN | 0.165129 | 0.398520 | 0.627335 | 0.001871 | 0.001914 | 0.002326 |
| aligned_storage_empy_test.test | RUN | 0.192464 | 0.478960 | 0.840672 | 0.001863 | 0.002348 | 0.002068 |
| aligned_storage_a2_test.test | RUN | 0.167119 | 0.408323 | 0.621637 | 0.002227 | 0.002348 | 0.002292 |
| add_volatile_test.test | RUN | 0.362613 | 1.304751 | 3.322998 | 0.001894 | 0.002005 | 0.002180 |
| add_rvalue_reference_test.test | RUN | 0.405711 | 1.485981 | 3.762388 | 0.002096 | 0.002016 | 0.002143 |
| add_reference_test.test | RUN | 0.399631 | 1.426233 | 3.827196 | 0.001769 | 0.002138 | 0.002178 |
| add_pointer_test.test | RUN | 0.255871 | 0.786374 | 1.945890 | 0.001763 | 0.001920 | 0.002109 |
| add_lvalue_reference_test.test | RUN | 0.399918 | 1.385045 | 3.803874 | 0.001963 | 0.001856 | 0.002172 |
| add_cv_test.test | RUN | 0.379818 | 1.305964 | 3.538280 | 0.001906 | 0.001876 | 0.001940 |
| add_const_test.test | RUN | 0.378487 | 1.388997 | 3.548772 | 0.001814 | 0.002224 | 0.002132 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.143895 | 0.330767 | 0.542908 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.145876 | 0.338179 | 0.562912 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.134947 | 0.308416 | 0.528889 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.135749 | 0.320605 | 0.546068 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.139712 | 0.325011 | 0.482714 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.138021 | 0.326223 | 0.492858 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.137724 | 0.316066 | 0.468976 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.135059 | 0.327507 | 0.490309 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.140896 | 0.318841 | 0.509971 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.142060 | 0.330911 | 0.515939 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.137574 | 0.318201 | 0.510017 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.139341 | 0.331269 | 0.511142 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.139443 | 0.317950 | 0.508138 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.138159 | 0.320165 | 0.501408 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.136933 | 0.316402 | 0.509136 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.134070 | 0.328878 | 0.507035 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.137218 | 0.319705 | 0.490579 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.141059 | 0.327010 | 0.519737 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.138803 | 0.320645 | 0.504173 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.140225 | 0.336343 | 0.507212 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.141362 | 0.320032 | 0.516953 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.139558 | 0.318175 | 0.515735 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.221997 | 0.728157 | 1.464542 | 0.001815 | 0.001740 | 0.001948 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.214191 | 0.750332 | 1.398877 | 0.001913 | 0.002042 | 0.002194 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.220051 | 0.724751 | 1.449234 | 0.001938 | 0.001774 | 0.002181 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.216693 | 0.697171 | 1.396388 | 0.001453 | 0.001513 | 0.001504 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.126916 | 0.454013 | 0.884755 | 0.001522 | 0.001681 | 0.001539 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.996× | 0.995× |
| clang | 1.030× | 1.029×, 1.031× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.001482s | 0.001470s | 0.001499s | byte equality observed |
| add_cv_test.test | 9 | 0.001478s | 0.001453s | 0.001486s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001469s | 0.001455s | 0.001474s | byte equality observed |
| add_pointer_test.test | 10 | 0.001473s | 0.001504s | 0.001511s | byte equality observed |
| add_reference_test.test | 10 | 0.001473s | 0.001468s | 0.001479s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001448s | 0.001488s | 0.001515s | byte equality observed |
| add_volatile_test.test | 10 | 0.001482s | 0.001491s | 0.001467s | byte equality observed |
| aligned_storage_a2_test.test | 9 | 0.001583s | 0.001643s | 0.001631s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.001479s | 0.001431s | 0.001470s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001589s | 0.001595s | 0.001627s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.001430s | 0.001468s | 0.001491s | byte equality observed |
| alignment_of_test.test | 10 | 0.001461s | 0.001488s | 0.001461s | byte equality observed |
| common_type_2_test.test | 10 | 0.001471s | 0.001497s | 0.001455s | byte equality observed |
| common_type_3_test.test | 10 | 0.001460s | 0.001463s | 0.001478s | byte equality observed |
| common_type_4_test.test | 10 | 0.001443s | 0.001448s | 0.001463s | byte equality observed |
| common_type_5_test.test | 10 | 0.001456s | 0.001462s | 0.001475s | byte equality observed |
| common_type_6_test.test | 10 | 0.001445s | 0.001454s | 0.001441s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001486s | 0.001470s | 0.001433s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001458s | 0.001489s | 0.001445s | byte equality observed |
| common_type_test.test | 10 | 0.001482s | 0.001437s | 0.001428s | byte equality observed |
| conditional_test.test | 10 | 0.001438s | 0.001477s | 0.001415s | byte equality observed |
| conjunction_test.test | 10 | 0.001497s | 0.001462s | 0.001492s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001488s | 0.001471s | 0.001474s | byte equality observed |
| copy_cv_test.test | 10 | 0.001491s | 0.001462s | 0.001499s | byte equality observed |
| copy_reference_test.test | 10 | 0.001463s | 0.001447s | 0.001465s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.001461s | 0.001443s | 0.001478s | byte equality observed |
| decay_test.test | 10 | 0.001494s | 0.001483s | 0.001476s | byte equality observed |
| detected_or_test.test | 10 | 0.001451s | 0.001458s | 0.001469s | byte equality observed |
| detected_test.test | 10 | 0.001463s | 0.001454s | 0.001491s | byte equality observed |
| disjunction_test.test | 10 | 0.001467s | 0.001457s | 0.001452s | byte equality observed |
| enable_if_test.test | 10 | 0.001480s | 0.001461s | 0.001475s | byte equality observed |
| extent_test.test | 10 | 0.001474s | 0.001441s | 0.001450s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001463s | 0.001483s | 0.001453s | byte equality observed |
| function_traits_test.test | 10 | 0.001451s | 0.001418s | 0.001492s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.001449s | 0.001471s | 0.001423s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.001496s | 0.001488s | 0.001466s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.001463s | 0.001491s | 0.001481s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.001471s | 0.001470s | 0.001478s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.001466s | 0.001442s | 0.001471s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.001470s | 0.001455s | 0.001446s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.001486s | 0.001448s | 0.001467s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001456s | 0.001434s | 0.001452s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.001465s | 0.001437s | 0.001462s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.001484s | 0.001464s | 0.001430s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001475s | 0.001434s | 0.001429s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001464s | 0.001466s | 0.001463s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001461s | 0.001478s | 0.001433s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001459s | 0.001440s | 0.001444s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.001478s | 0.001450s | 0.001468s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.001464s | 0.001460s | 0.001480s | byte equality observed |
| has_complement_test.test | 10 | 0.001486s | 0.001424s | 0.001488s | byte equality observed |
| has_dereference_test.test | 10 | 0.001461s | 0.001445s | 0.001491s | byte equality observed |
| has_divides_assign_test.test | 9 | 0.001452s | 0.001460s | 0.001492s | byte equality observed |
| has_divides_test.test | 10 | 0.001446s | 0.001462s | 0.001456s | byte equality observed |
| has_equal_to_test.test | 8 | 0.001478s | 0.001479s | 0.001455s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001464s | 0.001459s | 0.001476s | byte equality observed |
| has_greater_test.test | 10 | 0.001463s | 0.001445s | 0.001472s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.001466s | 0.001455s | 0.001456s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001484s | 0.001435s | 0.001442s | byte equality observed |
| has_less_equal_test.test | 10 | 0.001452s | 0.001459s | 0.001465s | byte equality observed |
| has_less_test.test | 10 | 0.001457s | 0.001491s | 0.001464s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001452s | 0.001435s | 0.001474s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001452s | 0.001443s | 0.001468s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001472s | 0.001475s | 0.001476s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001472s | 0.001432s | 0.001436s | byte equality observed |
| has_minus_test.test | 10 | 0.001462s | 0.001464s | 0.001482s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001475s | 0.001493s | 0.001454s | byte equality observed |
| has_modulus_test.test | 10 | 0.001468s | 0.001451s | 0.001465s | byte equality observed |
| has_multiplies_assign_test.test | 8 | 0.001438s | 0.001465s | 0.001457s | byte equality observed |
| has_multiplies_test.test | 9 | 0.001465s | 0.001479s | 0.001469s | byte equality observed |
| has_negate_test.test | 10 | 0.001456s | 0.001470s | 0.001504s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001501s | 0.001463s | 0.001469s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001471s | 0.001478s | 0.001499s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.001475s | 0.001438s | 0.001463s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001459s | 0.001449s | 0.001452s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.001479s | 0.001471s | 0.001486s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001476s | 0.001473s | 0.001481s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001474s | 0.001466s | 0.001467s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001465s | 0.001476s | 0.001493s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001497s | 0.001450s | 0.001510s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001474s | 0.001486s | 0.001474s | byte equality observed |
| has_plus_test.test | 10 | 0.001470s | 0.001478s | 0.001474s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001501s | 0.001471s | 0.001498s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001507s | 0.001457s | 0.001452s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001467s | 0.001441s | 0.001448s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001460s | 0.001475s | 0.001451s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001472s | 0.001495s | 0.001468s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001480s | 0.001450s | 0.001471s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001464s | 0.001454s | 0.001465s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001450s | 0.001452s | 0.001484s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001463s | 0.001466s | 0.001497s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001449s | 0.001454s | 0.001490s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001456s | 0.001467s | 0.001469s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.001452s | 0.001445s | 0.001460s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001497s | 0.001486s | 0.001465s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001459s | 0.001461s | 0.001474s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001561s | 0.001561s | 0.001581s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001505s | 0.001520s | 0.001571s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001544s | 0.001558s | 0.001614s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001487s | 0.001474s | 0.001485s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001452s | 0.001446s | 0.001479s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001482s | 0.001495s | 0.001501s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001475s | 0.001444s | 0.001487s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001478s | 0.001470s | 0.001483s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001476s | 0.001492s | 0.001468s | byte equality observed |
| integral_constant_test.test | 10 | 0.000648s | 0.000646s | 0.001460s | byte equality observed |
| is_abstract_test.test | 10 | 0.001480s | 0.001487s | 0.001459s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001479s | 0.001457s | 0.001476s | byte equality observed |
| is_array_test.test | 10 | 0.001494s | 0.001482s | 0.001430s | byte equality observed |
| is_assignable_test.test | 10 | 0.001467s | 0.001499s | 0.001485s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001463s | 0.001443s | 0.001462s | byte equality observed |
| is_base_of_test.test | 10 | 0.001465s | 0.001480s | 0.001466s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001461s | 0.001478s | 0.001494s | byte equality observed |
| is_class_test.test | 10 | 0.001475s | 0.001456s | 0.001447s | byte equality observed |
| is_complete_test.test | 10 | 0.001441s | 0.001469s | 0.001471s | byte equality observed |
| is_complex_test.test | 10 | 0.001466s | 0.001492s | 0.001498s | byte equality observed |
| is_compound_test.test | 10 | 0.001455s | 0.001450s | 0.001460s | byte equality observed |
| is_const_test.test | 10 | 0.001468s | 0.001445s | 0.001505s | byte equality observed |
| is_constructible_test.test | 10 | 0.001442s | 0.001470s | 0.001496s | byte equality observed |
| is_convertible_test.test | 10 | 0.001485s | 0.001459s | 0.001491s | byte equality observed |
| is_copy_assignable_test.test | 9 | 0.001488s | 0.001476s | 0.001476s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001458s | 0.001444s | 0.001474s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001471s | 0.001430s | 0.001476s | byte equality observed |
| is_destructible_test.test | 10 | 0.001458s | 0.001455s | 0.001498s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001466s | 0.001460s | 0.001446s | byte equality observed |
| is_detected_test.test | 10 | 0.001464s | 0.001465s | 0.001490s | byte equality observed |
| is_empty_test.test | 10 | 0.001475s | 0.001443s | 0.001488s | byte equality observed |
| is_enum_test.test | 10 | 0.001453s | 0.001464s | 0.001491s | byte equality observed |
| is_final_test.test | 10 | 0.001452s | 0.001421s | 0.001455s | byte equality observed |
| is_float_test.test | 10 | 0.001438s | 0.001439s | 0.001506s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001473s | 0.001470s | 0.001447s | byte equality observed |
| is_function_test.test | 10 | 0.001475s | 0.001466s | 0.001475s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001451s | 0.001479s | 0.001475s | byte equality observed |
| is_integral_test.test | 10 | 0.001455s | 0.001473s | 0.001477s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001483s | 0.001457s | 0.001470s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001494s | 0.001468s | 0.001461s | byte equality observed |
| is_member_func_test.test | 10 | 0.001479s | 0.001450s | 0.001476s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001471s | 0.001454s | 0.001457s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001492s | 0.001446s | 0.001467s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001464s | 0.001473s | 0.001455s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001445s | 0.001451s | 0.001492s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001502s | 0.001473s | 0.001488s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001445s | 0.001462s | 0.001511s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001487s | 0.001477s | 0.001504s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001469s | 0.001457s | 0.001470s | byte equality observed |
| is_object_test.test | 10 | 0.001451s | 0.001466s | 0.001481s | byte equality observed |
| is_pod_test.test | 10 | 0.001462s | 0.001485s | 0.001470s | byte equality observed |
| is_pointer_test.test | 10 | 0.001462s | 0.001467s | 0.001462s | byte equality observed |
| is_polymorphic_test.test | 9 | 0.001489s | 0.001457s | 0.001447s | byte equality observed |
| is_reference_test.test | 10 | 0.001464s | 0.001456s | 0.001469s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001490s | 0.001454s | 0.001482s | byte equality observed |
| is_same_test.test | 9 | 0.001479s | 0.001472s | 0.001479s | byte equality observed |
| is_scalar_test.test | 10 | 0.001469s | 0.001481s | 0.001463s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001493s | 0.001432s | 0.001453s | byte equality observed |
| is_signed_test.test | 10 | 0.001430s | 0.001468s | 0.001466s | byte equality observed |
| is_stateless_test.test | 10 | 0.001452s | 0.001450s | 0.001465s | byte equality observed |
| is_swappable_test.test | 10 | 0.001447s | 0.001455s | 0.001500s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001511s | 0.001512s | 0.001501s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001462s | 0.001483s | 0.001508s | byte equality observed |
| is_union_test.test | 10 | 0.001452s | 0.001465s | 0.001492s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001453s | 0.001442s | 0.001471s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001437s | 0.001484s | 0.001487s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001424s | 0.001444s | 0.001473s | byte equality observed |
| is_void_test.test | 8 | 0.001472s | 0.001461s | 0.001491s | byte equality observed |
| is_volatile_test.test | 10 | 0.001443s | 0.001464s | 0.001447s | byte equality observed |
| make_signed_test.test | 10 | 0.001481s | 0.001470s | 0.001464s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001482s | 0.001485s | 0.001482s | byte equality observed |
| make_void_test.test | 10 | 0.001491s | 0.001471s | 0.001507s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000642s | 0.000647s | 0.001471s | byte equality observed |
| mpl_interop_test2.test | 8 | 0.000653s | 0.000652s | 0.001457s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000654s | 0.000650s | 0.001464s | byte equality observed |
| negation_test.test | 10 | 0.001521s | 0.001523s | 0.001487s | byte equality observed |
| promote_basic_test.test | 10 | 0.000652s | 0.000655s | 0.001457s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000657s | 0.000648s | 0.001465s | byte equality observed |
| promote_enum_test.test | 10 | 0.000641s | 0.000662s | 0.001458s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000656s | 0.000648s | 0.001490s | byte equality observed |
| rank_test.test | 10 | 0.001494s | 0.001459s | 0.001479s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001493s | 0.001492s | 0.001463s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001484s | 0.001480s | 0.001477s | byte equality observed |
| remove_const_test.test | 8 | 0.001442s | 0.001449s | 0.001486s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001462s | 0.001464s | 0.001466s | byte equality observed |
| remove_cv_test.test | 10 | 0.001476s | 0.001457s | 0.001492s | byte equality observed |
| remove_extent_test.test | 9 | 0.001454s | 0.001440s | 0.001499s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001458s | 0.001474s | 0.001482s | byte equality observed |
| remove_reference_test.test | 10 | 0.001463s | 0.001472s | 0.001466s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001499s | 0.001448s | 0.001476s | byte equality observed |
| tricky_abstract_type_test.test | 6 | 0.001484s | 0.001481s | 0.001460s | byte equality observed |
| tricky_add_pointer_test.test | 8 | 0.001452s | 0.001461s | 0.001478s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001480s | 0.001441s | 0.001461s | byte equality observed |
| tricky_incomplete_type_test.test | 9 | 0.001472s | 0.001435s | 0.001434s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001469s | 0.001468s | 0.001473s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001462s | 0.001484s | 0.001492s | byte equality observed |
| tricky_rvalue_test.test | 9 | 0.001491s | 0.001487s | 0.001488s | byte equality observed |
| type_identity_test.test | 10 | 0.001502s | 0.001485s | 0.001476s | byte equality observed |
| type_traits_test.test | 10 | 0.000658s | 0.000657s | 0.001465s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001606s | 0.001650s | 0.001628s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
