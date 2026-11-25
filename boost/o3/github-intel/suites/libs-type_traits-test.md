# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.094783 | 0.271106 | 0.373662 | 0.001152 | 0.001377 | 0.001201 |
| type_traits_test.test | RUN | 0.126465 | 0.282874 | 0.376706 | 0.000502 | 0.000406 | 0.001154 |
| type_identity_test.test | RUN | 0.247304 | 0.968724 | 1.955642 | 0.001377 | 0.001618 | 0.001224 |
| tricky_rvalue_test.test | RUN | 0.086939 | 0.216564 | 0.299016 | 0.001283 | 0.001450 | 0.001145 |
| tricky_partial_spec_test.test | RUN | 0.108962 | 0.314401 | 0.480613 | 0.001267 | 0.001478 | 0.001191 |
| tricky_is_enum_test.test | RUN | 0.084828 | 0.210876 | 0.279137 | 0.001329 | 0.001498 | 0.001216 |
| tricky_incomplete_type_test.test | RUN | 0.135054 | 0.322787 | 0.446118 | 0.001239 | 0.001219 | 0.001137 |
| tricky_function_type_test.test | RUN | 0.113255 | 0.344059 | 0.519733 | 0.001268 | 0.001418 | 0.001166 |
| tricky_add_pointer_test.test | RUN | 0.170787 | 0.576043 | 1.126696 | 0.001113 | 0.001343 | 0.001130 |
| tricky_abstract_type_test.test | RUN | 0.089618 | 0.215437 | 0.287090 | 0.001293 | 0.001294 | 0.001236 |
| remove_volatile_test.test | RUN | 0.221232 | 0.840165 | 1.742653 | 0.001302 | 0.001456 | 0.001130 |
| remove_reference_test.test | RUN | 0.231934 | 0.883003 | 1.835535 | 0.001468 | 0.001427 | 0.001120 |
| remove_pointer_test.test | RUN | 0.239829 | 0.926993 | 1.915385 | 0.001301 | 0.001374 | 0.001184 |
| remove_extent_test.test | RUN | 0.229243 | 0.890305 | 1.820187 | 0.001310 | 0.001486 | 0.001147 |
| remove_cv_test.test | RUN | 0.231931 | 0.889810 | 1.833278 | 0.001200 | 0.001437 | 0.001268 |
| remove_cv_ref_test.test | RUN | 0.480250 | 2.194950 | 4.563596 | 0.001250 | 0.001269 | 0.001260 |
| remove_const_test.test | RUN | 0.220105 | 0.830686 | 1.743429 | 0.001344 | 0.001351 | 0.001314 |
| remove_bounds_test.test | RUN | 0.232154 | 0.886156 | 1.870331 | 0.001047 | 0.001326 | 0.001148 |
| remove_all_extents_test.test | RUN | 0.235744 | 0.893922 | 1.886302 | 0.001116 | 0.001301 | 0.001190 |
| rank_test.test | RUN | 0.091309 | 0.221882 | 0.290915 | 0.001299 | 0.001279 | 0.001089 |
| promote_mpl_test.test | RUN | 0.077227 | 0.195248 | 0.209791 | 0.000393 | 0.000521 | 0.001146 |
| promote_enum_test.test | RUN | 0.016793 | 0.048281 | 0.050936 | 0.000496 | 0.000502 | 0.001337 |
| promote_enum_msvc_bug_test.test | RUN | 0.015621 | 0.040168 | 0.045214 | 0.000523 | 0.000456 | 0.001428 |
| promote_basic_test.test | RUN | 0.018906 | 0.055416 | 0.052115 | 0.000530 | 0.000521 | 0.001255 |
| negation_test.test | RUN | 0.084724 | 0.203420 | 0.255339 | 0.001115 | 0.001244 | 0.001283 |
| mpl_interop_test3.test | RUN | 0.071456 | 0.188952 | 0.199630 | 0.000507 | 0.000435 | 0.001186 |
| mpl_interop_test2.test | RUN | 0.025394 | 0.056254 | 0.052570 | 0.000466 | 0.000533 | 0.000984 |
| mpl_interop_test1.test | RUN | 0.013181 | 0.037477 | 0.038248 | 0.000491 | 0.000473 | 0.001070 |
| make_void_test.test | RUN | 0.087815 | 0.217146 | 0.305957 | 0.001334 | 0.001329 | 0.001220 |
| make_unsigned_test.test | RUN | 0.103408 | 0.292462 | 0.421206 | 0.001177 | 0.001417 | 0.001114 |
| make_signed_test.test | RUN | 0.103493 | 0.290000 | 0.414467 | 0.001090 | 0.001343 | 0.001304 |
| is_volatile_test.test | RUN | 0.091831 | 0.241630 | 0.331297 | 0.001070 | 0.001323 | 0.001368 |
| is_void_test.test | RUN | 0.087465 | 0.226780 | 0.320291 | 0.001174 | 0.001301 | 0.001381 |
| is_virtual_base_of_test.test | RUN | 0.101871 | 0.297194 | 0.434823 | 0.001217 | 0.001305 | 0.001239 |
| is_unsigned_test.test | RUN | 0.092144 | 0.237300 | 0.327891 | 0.001310 | 0.001157 | 0.001241 |
| is_unscoped_enum_test.test | RUN | 0.086837 | 0.214821 | 0.280329 | 0.001181 | 0.001089 | 0.001168 |
| is_union_test.test | RUN | 0.091920 | 0.269751 | 0.396965 | 0.001330 | 0.001194 | 0.001128 |
| is_unbounded_array_test.test | RUN | 0.088375 | 0.229470 | 0.317658 | 0.001188 | 0.001213 | 0.001189 |
| is_trivially_copyable_test.test | RUN | 0.144795 | 0.483292 | 0.797625 | 0.001205 | 0.001396 | 0.001032 |
| is_swappable_test.test | RUN | 0.120516 | 0.357500 | 0.594295 | 0.001137 | 0.001178 | 0.001173 |
| is_stateless_test.test | RUN | 0.131795 | 0.416804 | 0.660494 | 0.001400 | 0.001231 | 0.001142 |
| is_signed_test.test | RUN | 0.091086 | 0.240690 | 0.333646 | 0.000946 | 0.001430 | 0.001069 |
| is_scoped_enum_test.test | RUN | 0.086727 | 0.216310 | 0.278548 | 0.001051 | 0.001211 | 0.001110 |
| is_scalar_test.test | RUN | 0.112844 | 0.376132 | 0.584350 | 0.001080 | 0.001491 | 0.001053 |
| is_same_test.test | RUN | 0.086640 | 0.226820 | 0.293406 | 0.001236 | 0.001363 | 0.001132 |
| is_rvalue_reference_test.test | RUN | 0.093500 | 0.256607 | 0.351059 | 0.001103 | 0.001333 | 0.001072 |
| is_reference_test.test | RUN | 0.092434 | 0.258995 | 0.347111 | 0.001065 | 0.001247 | 0.001018 |
| is_polymorphic_test.test | RUN | 0.097317 | 0.269360 | 0.379351 | 0.001062 | 0.001348 | 0.001078 |
| is_pointer_test.test | RUN | 0.095400 | 0.262034 | 0.363373 | 0.001252 | 0.001243 | 0.001110 |
| is_pod_test.test | RUN | 0.123968 | 0.423414 | 0.668368 | 0.001268 | 0.001414 | 0.001194 |
| is_object_test.test | RUN | 0.087968 | 0.226588 | 0.293744 | 0.001275 | 0.001446 | 0.001074 |
| is_nothrow_swappable_test.test | RUN | 0.130512 | 0.403261 | 0.621914 | 0.001244 | 0.001161 | 0.001117 |
| is_nothrow_move_constructible_test.test | RUN | 0.120932 | 0.404291 | 0.648452 | 0.001412 | 0.001196 | 0.001336 |
| is_nothrow_move_assignable_test.test | RUN | 0.121796 | 0.417407 | 0.648881 | 0.001380 | 0.001166 | 0.001070 |
| is_noncopyable_test.test | RUN | 0.089518 | 0.226812 | 0.296853 | 0.001156 | 0.001354 | 0.001037 |
| is_member_pointer_test.test | RUN | 0.090363 | 0.232313 | 0.303864 | 0.001103 | 0.001198 | 0.001070 |
| is_member_obj_test.test | RUN | 0.088849 | 0.231035 | 0.302575 | 0.001376 | 0.001138 | 0.001089 |
| is_member_func_test.test | RUN | 0.092185 | 0.243991 | 0.335299 | 0.001196 | 0.001439 | 0.001067 |
| is_lvalue_reference_test.test | RUN | 0.092470 | 0.258727 | 0.350960 | 0.001364 | 0.001326 | 0.001111 |
| is_list_constructible_test.test | RUN | 0.108911 | 0.299806 | 0.372776 | 0.001085 | 0.001370 | 0.001127 |
| is_integral_test.test | RUN | 0.109725 | 0.354849 | 0.564763 | 0.001241 | 0.001199 | 0.001029 |
| is_fundamental_test.test | RUN | 0.112325 | 0.378750 | 0.575473 | 0.001161 | 0.001256 | 0.001078 |
| is_function_test.test | RUN | 0.091439 | 0.244307 | 0.321395 | 0.001348 | 0.001386 | 0.001147 |
| is_floating_point_test.test | RUN | 0.095559 | 0.264454 | 0.358004 | 0.001249 | 0.001418 | 0.001023 |
| is_float_test.test | RUN | 0.093816 | 0.263554 | 0.368751 | 0.001277 | 0.001289 | 0.001036 |
| is_final_test.test | RUN | 0.090843 | 0.263857 | 0.375986 | 0.001119 | 0.001151 | 0.001111 |
| is_enum_test.test | RUN | 0.086134 | 0.225846 | 0.294627 | 0.001248 | 0.001236 | 0.001212 |
| is_empty_test.test | RUN | 0.095345 | 0.244764 | 0.329030 | 0.001118 | 0.001273 | 0.001046 |
| is_detected_test.test | RUN | 0.085487 | 0.209817 | 0.270453 | 0.001298 | 0.001320 | 0.001136 |
| is_detected_exact_test.test | RUN | 0.085428 | 0.209594 | 0.277988 | 0.001222 | 0.001311 | 0.001076 |
| is_destructible_test.test | RUN | 0.118769 | 0.400091 | 0.642271 | 0.001274 | 0.001481 | 0.001294 |
| is_default_constr_test.test | RUN | 0.124209 | 0.416723 | 0.649559 | 0.001211 | 0.001520 | 0.001080 |
| is_copy_constructible_test.test | RUN | 0.127328 | 0.431850 | 0.705690 | 0.001143 | 0.001200 | 0.001209 |
| is_copy_assignable_test.test | RUN | 0.128684 | 0.422839 | 0.691158 | 0.001345 | 0.001304 | 0.001138 |
| is_convertible_test.test | RUN | 0.122395 | 0.385556 | 0.580081 | 0.001198 | 0.001282 | 0.001158 |
| is_constructible_test.test | RUN | 0.101249 | 0.280120 | 0.411445 | 0.001157 | 0.001293 | 0.001188 |
| is_const_test.test | RUN | 0.093149 | 0.246452 | 0.340458 | 0.001200 | 0.001205 | 0.001007 |
| is_compound_test.test | RUN | 0.085470 | 0.212395 | 0.282179 | 0.001201 | 0.001157 | 0.001009 |
| is_complex_test.test | RUN | 0.115231 | 0.280107 | 0.384747 | 0.001128 | 0.001297 | 0.001163 |
| is_complete_test.test | RUN | 0.103588 | 0.286097 | 0.420974 | 0.001087 | 0.001264 | 0.001185 |
| is_class_test.test | RUN | 0.093889 | 0.255122 | 0.366366 | 0.001307 | 0.001371 | 0.001151 |
| is_bounded_array_test.test | RUN | 0.089186 | 0.233131 | 0.317370 | 0.001078 | 0.001087 | 0.001187 |
| is_base_of_test.test | RUN | 0.094268 | 0.254421 | 0.350187 | 0.001043 | 0.001425 | 0.001215 |
| is_base_and_derived_test.test | RUN | 0.095059 | 0.250674 | 0.350904 | 0.001130 | 0.001252 | 0.001248 |
| is_assignable_test.test | RUN | 0.111085 | 0.358801 | 0.519222 | 0.001109 | 0.001401 | 0.001082 |
| is_array_test.test | RUN | 0.090506 | 0.244108 | 0.342333 | 0.001207 | 0.001190 | 0.001095 |
| is_arithmetic_test.test | RUN | 0.112921 | 0.356865 | 0.546948 | 0.001089 | 0.001308 | 0.001229 |
| is_abstract_test.test | RUN | 0.202958 | 0.962670 | 2.046941 | 0.001148 | 0.001269 | 0.001167 |
| integral_constant_test.test | RUN | 0.013495 | 0.039687 | 0.040152 | 0.000529 | 0.000548 | 0.001142 |
| has_virtual_destructor_test.test | RUN | 0.099672 | 0.278131 | 0.393560 | 0.001208 | 0.001229 | 0.001100 |
| has_unary_plus_test.test | RUN | 0.182306 | 0.981285 | 1.488019 | 0.001238 | 0.001385 | 0.001364 |
| has_unary_minus_test.test | RUN | 0.185478 | 0.993955 | 1.455575 | 0.001196 | 0.001339 | 0.001094 |
| has_trivial_move_constructor_test.test | RUN | 0.125614 | 0.422733 | 0.693940 | 0.001196 | 0.001246 | 0.001085 |
| has_trivial_move_assign_test.test | RUN | 0.127568 | 0.410912 | 0.647620 | 0.001201 | 0.001249 | 0.001242 |
| has_trivial_destructor_test.test | RUN | 0.124088 | 0.421319 | 0.682250 | 0.001414 | 0.001310 | 0.001165 |
| has_trivial_copy_test.test | RUN | 0.128871 | 0.448246 | 0.703039 | 0.001210 | 0.001476 | 0.001236 |
| has_trivial_constr_test.test | RUN | 0.132297 | 0.442149 | 0.709898 | 0.001275 | 0.001482 | 0.001242 |
| has_trivial_assign_test.test | RUN | 0.126695 | 0.437106 | 0.686605 | 0.001188 | 0.001539 | 0.001218 |
| has_right_shift_test.test | RUN | 0.192486 | 0.817533 | 1.595462 | 0.001235 | 0.001302 | 0.001190 |
| has_right_shift_assign_test.test | RUN | 0.184937 | 0.773167 | 1.484238 | 0.001128 | 0.001337 | 0.001115 |
| has_prefix_classes3_test.test | RUN | 0.134355 | 0.456447 | 0.730004 | 0.001364 | 0.001246 | 0.001348 |
| has_prefix_classes2_test.test | RUN | 0.135055 | 0.454604 | 0.718902 | 0.001090 | 0.001256 | 0.001227 |
| has_prefix_classes1_test.test | RUN | 0.135779 | 0.457125 | 0.735093 | 0.001329 | 0.001295 | 0.001206 |
| has_prefix_classes0_test.test | RUN | 0.135077 | 0.454369 | 0.720135 | 0.001199 | 0.001267 | 0.001154 |
| has_pre_increment_test.test | RUN | 0.179921 | 0.979504 | 1.486465 | 0.001216 | 0.001128 | 0.001146 |
| has_pre_decrement_test.test | RUN | 0.181462 | 0.994178 | 1.450595 | 0.001231 | 0.001168 | 0.001060 |
| has_postfix_classes3_test.test | RUN | 0.138937 | 0.456514 | 0.733299 | 0.001216 | 0.001181 | 0.001140 |
| has_postfix_classes2_test.test | RUN | 0.133503 | 0.446716 | 0.761390 | 0.001337 | 0.001346 | 0.001189 |
| has_postfix_classes1_test.test | RUN | 0.138964 | 0.458714 | 0.707586 | 0.001202 | 0.001359 | 0.001468 |
| has_postfix_classes0_test.test | RUN | 0.136545 | 0.450082 | 0.754375 | 0.001142 | 0.001310 | 0.001398 |
| has_post_increment_test.test | RUN | 0.183328 | 0.983432 | 1.477166 | 0.001210 | 0.001228 | 0.001208 |
| has_post_decrement_test.test | RUN | 0.183823 | 0.994941 | 1.484816 | 0.001344 | 0.001247 | 0.001166 |
| has_plus_test.test | RUN | 0.187337 | 0.765783 | 1.450193 | 0.001120 | 0.001423 | 0.001273 |
| has_plus_assign_test.test | RUN | 0.193862 | 0.781687 | 1.457893 | 0.001238 | 0.001260 | 0.001193 |
| has_operator_new_test.test | RUN | 0.126370 | 0.404908 | 0.628628 | 0.001409 | 0.001406 | 0.001130 |
| has_nothrow_destructor_test.test | RUN | 0.128122 | 0.445763 | 0.702567 | 0.001316 | 0.001246 | 0.001036 |
| has_nothrow_copy_test.test | RUN | 0.124795 | 0.420100 | 0.679041 | 0.001185 | 0.001276 | 0.001132 |
| has_nothrow_constr_test.test | RUN | 0.125292 | 0.414539 | 0.660494 | 0.001135 | 0.001187 | 0.001192 |
| has_nothrow_assign_test.test | RUN | 0.124698 | 0.414218 | 0.643628 | 0.001356 | 0.001265 | 0.001120 |
| has_not_equal_to_test.test | RUN | 0.186990 | 0.982672 | 1.463706 | 0.001264 | 0.001268 | 0.001128 |
| has_negate_test.test | RUN | 0.177510 | 0.745952 | 1.416519 | 0.001155 | 0.001444 | 0.001139 |
| has_multiplies_test.test | RUN | 0.183212 | 0.780135 | 1.438146 | 0.001205 | 0.001300 | 0.001102 |
| has_multiplies_assign_test.test | RUN | 0.188765 | 0.769324 | 1.411501 | 0.001352 | 0.001356 | 0.001170 |
| has_modulus_test.test | RUN | 0.185360 | 0.765273 | 1.426518 | 0.001140 | 0.001334 | 0.001200 |
| has_modulus_assign_test.test | RUN | 0.182645 | 0.776377 | 1.458022 | 0.001167 | 0.001395 | 0.001183 |
| has_minus_test.test | RUN | 0.187991 | 0.783591 | 1.450743 | 0.001191 | 0.001370 | 0.001111 |
| has_minus_assign_test.test | RUN | 0.189956 | 0.766578 | 1.465100 | 0.001164 | 0.001374 | 0.001096 |
| has_logical_or_test.test | RUN | 0.183488 | 0.777748 | 1.435506 | 0.001138 | 0.001320 | 0.001160 |
| has_logical_not_test.test | RUN | 0.179011 | 0.757707 | 1.422116 | 0.001123 | 0.001312 | 0.001058 |
| has_logical_and_test.test | RUN | 0.183656 | 0.770983 | 1.451214 | 0.001257 | 0.001427 | 0.001119 |
| has_less_test.test | RUN | 0.183860 | 0.978243 | 1.438305 | 0.001172 | 0.001307 | 0.001137 |
| has_less_equal_test.test | RUN | 0.183613 | 0.989296 | 1.447072 | 0.001350 | 0.001557 | 0.001422 |
| has_left_shift_test.test | RUN | 0.199968 | 0.969187 | 1.852053 | 0.001140 | 0.001134 | 0.001008 |
| has_left_shift_assign_test.test | RUN | 0.185636 | 0.761231 | 1.472754 | 0.001176 | 0.001320 | 0.001186 |
| has_greater_test.test | RUN | 0.183812 | 0.957921 | 1.441403 | 0.001298 | 0.001281 | 0.001178 |
| has_greater_equal_test.test | RUN | 0.183366 | 0.990628 | 1.447654 | 0.001147 | 0.001247 | 0.001111 |
| has_equal_to_test.test | RUN | 0.180751 | 0.960967 | 1.445647 | 0.001101 | 0.001215 | 0.001149 |
| has_divides_test.test | RUN | 0.184648 | 0.771065 | 1.500120 | 0.001139 | 0.001134 | 0.001100 |
| has_divides_assign_test.test | RUN | 0.185070 | 0.758785 | 1.496096 | 0.001156 | 0.001311 | 0.001126 |
| has_dereference_test.test | RUN | 0.178432 | 0.742408 | 1.376337 | 0.001107 | 0.001463 | 0.001189 |
| has_complement_test.test | RUN | 0.177107 | 0.991903 | 1.428480 | 0.001157 | 0.001254 | 0.001090 |
| has_bit_xor_test.test | RUN | 0.183256 | 0.782088 | 1.493546 | 0.001127 | 0.001244 | 0.001097 |
| has_bit_xor_assign_test.test | RUN | 0.184833 | 0.762625 | 1.490651 | 0.001480 | 0.001353 | 0.001044 |
| has_bit_or_test.test | RUN | 0.180956 | 0.750163 | 1.402642 | 0.001321 | 0.001436 | 0.001189 |
| has_bit_or_assign_test.test | RUN | 0.182405 | 0.772742 | 1.470706 | 0.001185 | 0.001243 | 0.001099 |
| has_bit_and_test.test | RUN | 0.186951 | 0.760770 | 1.426485 | 0.001124 | 0.001334 | 0.001038 |
| has_bit_and_assign_test.test | RUN | 0.184217 | 0.757385 | 1.465793 | 0.001468 | 0.001273 | 0.001015 |
| has_binary_classes9_test.test | RUN | 0.200340 | 0.918921 | 1.653309 | 0.001270 | 0.001241 | 0.001166 |
| has_binary_classes8_test.test | RUN | 0.198945 | 0.931298 | 1.632320 | 0.001009 | 0.001534 | 0.001134 |
| has_binary_classes7_test.test | RUN | 0.200397 | 0.898188 | 1.694352 | 0.001115 | 0.001326 | 0.001042 |
| has_binary_classes6_test.test | RUN | 0.195603 | 0.883950 | 1.694063 | 0.001431 | 0.001344 | 0.000947 |
| has_binary_classes5_test.test | RUN | 0.195182 | 0.908812 | 1.638712 | 0.001150 | 0.001291 | 0.001150 |
| has_binary_classes4_test.test | RUN | 0.198634 | 0.925876 | 1.647899 | 0.001138 | 0.001328 | 0.001240 |
| has_binary_classes3_test.test | RUN | 0.201247 | 0.926111 | 1.703239 | 0.001126 | 0.001235 | 0.001154 |
| has_binary_classes2_test.test | RUN | 0.203668 | 0.945061 | 1.690690 | 0.001430 | 0.001342 | 0.001151 |
| has_binary_classes1_test.test | RUN | 0.196525 | 0.931002 | 1.630232 | 0.001138 | 0.001362 | 0.001112 |
| has_binary_classes0_test.test | RUN | 0.199465 | 0.932254 | 1.647498 | 0.001128 | 0.001183 | 0.001224 |
| function_traits_test.test | RUN | 0.093043 | 0.249848 | 0.333775 | 0.001343 | 0.001335 | 0.001199 |
| floating_point_promotion_test.test | RUN | 0.090155 | 0.236757 | 0.321430 | 0.001504 | 0.001389 | 0.001102 |
| extent_test.test | RUN | 0.090462 | 0.242984 | 0.327139 | 0.001200 | 0.001344 | 0.001114 |
| enable_if_test.test | RUN | 0.083685 | 0.208538 | 0.269041 | 0.001240 | 0.001029 | 0.001129 |
| disjunction_test.test | RUN | 0.087425 | 0.214120 | 0.280275 | 0.001073 | 0.001249 | 0.001098 |
| detected_test.test | RUN | 0.083509 | 0.201753 | 0.255549 | 0.001229 | 0.001264 | 0.001038 |
| detected_or_test.test | RUN | 0.087288 | 0.213466 | 0.272284 | 0.001296 | 0.001296 | 0.001070 |
| decay_test.test | RUN | 0.223831 | 0.820783 | 1.596391 | 0.001252 | 0.001432 | 0.001158 |
| cxx14_aliases_test.test | RUN | 0.135076 | 0.311105 | 0.446839 | 0.001184 | 0.001571 | 0.001051 |
| copy_reference_test.test | RUN | 0.089685 | 0.214775 | 0.274172 | 0.001192 | 0.001218 | 0.001145 |
| copy_cv_test.test | RUN | 0.091196 | 0.222243 | 0.298834 | 0.001215 | 0.001198 | 0.001099 |
| copy_cv_ref_test.test | RUN | 0.127504 | 0.369320 | 0.644131 | 0.001275 | 0.001392 | 0.001077 |
| conjunction_test.test | RUN | 0.088284 | 0.212252 | 0.283950 | 0.001154 | 0.001418 | 0.001224 |
| conditional_test.test | RUN | 0.088588 | 0.214323 | 0.281354 | 0.001232 | 0.001130 | 0.001167 |
| common_type_test.test | RUN | 0.117986 | 0.327185 | 0.525285 | 0.001077 | 0.001264 | 0.001191 |
| common_type_sfinae_test.test | RUN | 0.088027 | 0.204758 | 0.254170 | 0.001310 | 0.001207 | 0.001081 |
| common_type_sfinae2_test.test | RUN | 0.089880 | 0.213658 | 0.270794 | 0.001100 | 0.001128 | 0.001137 |
| common_type_6_test.test | RUN | 0.092070 | 0.220254 | 0.292263 | 0.001177 | 0.001244 | 0.001162 |
| common_type_5_test.test | RUN | 0.093642 | 0.217534 | 0.284628 | 0.001375 | 0.001255 | 0.001314 |
| common_type_4_test.test | RUN | 0.095885 | 0.230099 | 0.329424 | 0.001297 | 0.001373 | 0.001155 |
| common_type_3_test.test | RUN | 0.083940 | 0.203495 | 0.251410 | 0.001144 | 0.001121 | 0.001182 |
| common_type_2_test.test | RUN | 0.118383 | 0.318304 | 0.528023 | 0.001407 | 0.001280 | 0.001031 |
| alignment_of_test.test | RUN | 0.092663 | 0.258189 | 0.350224 | 0.001417 | 0.001356 | 0.001192 |
| alignment_of_a2_test.test | RUN | 0.096246 | 0.259507 | 0.345904 | 0.001260 | 0.001285 | 0.001059 |
| aligned_storage_test.test | RUN | 0.097150 | 0.248291 | 0.331367 | 0.001305 | 0.001389 | 0.001220 |
| aligned_storage_empy_test.test | RUN | 0.109950 | 0.282991 | 0.431617 | 0.001212 | 0.001220 | 0.001240 |
| aligned_storage_a2_test.test | RUN | 0.094446 | 0.251452 | 0.328329 | 0.001245 | 0.001404 | 0.001288 |
| add_volatile_test.test | RUN | 0.203082 | 0.719661 | 1.492891 | 0.001230 | 0.001213 | 0.001217 |
| add_rvalue_reference_test.test | RUN | 0.224843 | 0.822373 | 1.698087 | 0.001271 | 0.001264 | 0.001238 |
| add_reference_test.test | RUN | 0.219639 | 0.800273 | 1.682991 | 0.001256 | 0.001314 | 0.001225 |
| add_pointer_test.test | RUN | 0.146117 | 0.454281 | 0.894301 | 0.001284 | 0.001075 | 0.001176 |
| add_lvalue_reference_test.test | RUN | 0.219832 | 0.797928 | 1.706631 | 0.001218 | 0.001350 | 0.001101 |
| add_cv_test.test | RUN | 0.204582 | 0.746022 | 1.556129 | 0.001054 | 0.001380 | 0.001203 |
| add_const_test.test | RUN | 0.209951 | 0.737763 | 1.613140 | 0.001056 | 0.001207 | 0.001199 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.082395 | 0.197682 | 0.259525 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.084401 | 0.194661 | 0.265537 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.079627 | 0.193564 | 0.250834 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.082021 | 0.191385 | 0.256984 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.080345 | 0.192014 | 0.246091 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.080904 | 0.195288 | 0.242721 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.080732 | 0.192665 | 0.251191 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079256 | 0.191332 | 0.246185 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.080373 | 0.191138 | 0.245469 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.080728 | 0.192287 | 0.248607 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079802 | 0.193688 | 0.249245 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082045 | 0.195008 | 0.247446 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082100 | 0.190585 | 0.243397 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.080519 | 0.193722 | 0.251913 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.081030 | 0.190747 | 0.247701 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.079686 | 0.191070 | 0.249614 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080946 | 0.191789 | 0.248987 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.080402 | 0.196527 | 0.254322 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.080023 | 0.192824 | 0.250756 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.080827 | 0.194374 | 0.248284 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.081362 | 0.191411 | 0.250805 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.082573 | 0.191902 | 0.251163 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.124385 | 0.413817 | 0.689795 | 0.001184 | 0.001498 | 0.000961 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.117658 | 0.411793 | 0.675989 | 0.001178 | 0.001540 | 0.001041 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.125692 | 0.417726 | 0.673279 | 0.000940 | 0.000895 | 0.001118 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.127823 | 0.410841 | 0.668785 | 0.000920 | 0.000821 | 0.000813 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.099592 | 0.280219 | 0.387846 | 0.000934 | 0.000968 | 0.000898 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.990×, 1.001× | 1.008× |
| clang | 1.028× | 1.034×, 1.022× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000790s | 0.000776s | 0.000776s | byte equality observed |
| add_cv_test.test | 10 | 0.000788s | 0.000780s | 0.000775s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000803s | 0.000781s | 0.000810s | byte equality observed |
| add_pointer_test.test | 10 | 0.000779s | 0.000784s | 0.000824s | byte equality observed |
| add_reference_test.test | 10 | 0.000806s | 0.000785s | 0.000790s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000794s | 0.000797s | 0.000788s | byte equality observed |
| add_volatile_test.test | 10 | 0.000805s | 0.000800s | 0.000804s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000850s | 0.000833s | 0.000835s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000816s | 0.000784s | 0.000794s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000831s | 0.000840s | 0.000844s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000790s | 0.000815s | 0.000778s | byte equality observed |
| alignment_of_test.test | 10 | 0.000801s | 0.000801s | 0.000791s | byte equality observed |
| common_type_2_test.test | 10 | 0.000823s | 0.000812s | 0.000821s | byte equality observed |
| common_type_3_test.test | 10 | 0.000779s | 0.000803s | 0.000812s | byte equality observed |
| common_type_4_test.test | 10 | 0.000799s | 0.000820s | 0.000811s | byte equality observed |
| common_type_5_test.test | 10 | 0.000800s | 0.000823s | 0.000767s | byte equality observed |
| common_type_6_test.test | 10 | 0.000794s | 0.000807s | 0.000810s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000798s | 0.000832s | 0.000810s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000788s | 0.000820s | 0.000828s | byte equality observed |
| common_type_test.test | 10 | 0.000807s | 0.000809s | 0.000811s | byte equality observed |
| conditional_test.test | 10 | 0.000821s | 0.000768s | 0.000793s | byte equality observed |
| conjunction_test.test | 10 | 0.000798s | 0.000776s | 0.000793s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000809s | 0.000792s | 0.000785s | byte equality observed |
| copy_cv_test.test | 10 | 0.000801s | 0.000799s | 0.000784s | byte equality observed |
| copy_reference_test.test | 10 | 0.000801s | 0.000799s | 0.000782s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000820s | 0.000794s | 0.000804s | byte equality observed |
| decay_test.test | 10 | 0.000800s | 0.000789s | 0.000798s | byte equality observed |
| detected_or_test.test | 10 | 0.000776s | 0.000796s | 0.000778s | byte equality observed |
| detected_test.test | 10 | 0.000781s | 0.000786s | 0.000788s | byte equality observed |
| disjunction_test.test | 10 | 0.000799s | 0.000807s | 0.000780s | byte equality observed |
| enable_if_test.test | 10 | 0.000802s | 0.000785s | 0.000796s | byte equality observed |
| extent_test.test | 10 | 0.000764s | 0.000803s | 0.000778s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000787s | 0.000799s | 0.000772s | byte equality observed |
| function_traits_test.test | 10 | 0.000770s | 0.000800s | 0.000783s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000783s | 0.000798s | 0.000815s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000801s | 0.000786s | 0.000840s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000807s | 0.000772s | 0.000782s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000811s | 0.000778s | 0.000789s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000799s | 0.000770s | 0.000807s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000806s | 0.000778s | 0.000794s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000795s | 0.000795s | 0.000806s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000802s | 0.000770s | 0.000799s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000788s | 0.000785s | 0.000792s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000788s | 0.000767s | 0.000785s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000802s | 0.000793s | 0.000772s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000811s | 0.000812s | 0.000816s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000819s | 0.000781s | 0.000827s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000808s | 0.000798s | 0.000808s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000792s | 0.000785s | 0.000806s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000775s | 0.000774s | 0.000813s | byte equality observed |
| has_complement_test.test | 10 | 0.000780s | 0.000805s | 0.000814s | byte equality observed |
| has_dereference_test.test | 10 | 0.000795s | 0.000790s | 0.000802s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000789s | 0.000772s | 0.000819s | byte equality observed |
| has_divides_test.test | 10 | 0.000798s | 0.000795s | 0.000779s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000776s | 0.000827s | 0.000776s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000788s | 0.000813s | 0.000810s | byte equality observed |
| has_greater_test.test | 10 | 0.000786s | 0.000791s | 0.000799s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000799s | 0.000767s | 0.000788s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000798s | 0.000785s | 0.000801s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000801s | 0.000794s | 0.000807s | byte equality observed |
| has_less_test.test | 10 | 0.000804s | 0.000818s | 0.000797s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000795s | 0.000764s | 0.000793s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000810s | 0.000782s | 0.000815s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000789s | 0.000804s | 0.000794s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000799s | 0.000797s | 0.000785s | byte equality observed |
| has_minus_test.test | 10 | 0.000797s | 0.000765s | 0.000816s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000801s | 0.000778s | 0.000794s | byte equality observed |
| has_modulus_test.test | 10 | 0.000770s | 0.000811s | 0.000799s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000776s | 0.000790s | 0.000825s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000811s | 0.000811s | 0.000833s | byte equality observed |
| has_negate_test.test | 10 | 0.000798s | 0.000817s | 0.000802s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000775s | 0.000787s | 0.000806s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000780s | 0.000794s | 0.000796s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000804s | 0.000820s | 0.000776s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000803s | 0.000819s | 0.000782s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000807s | 0.000794s | 0.000802s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000809s | 0.000788s | 0.000756s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000811s | 0.000809s | 0.000790s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000804s | 0.000813s | 0.000807s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000798s | 0.000823s | 0.000805s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000796s | 0.000824s | 0.000811s | byte equality observed |
| has_plus_test.test | 10 | 0.000803s | 0.000773s | 0.000808s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000789s | 0.000812s | 0.000783s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000794s | 0.000806s | 0.000799s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000801s | 0.000787s | 0.000778s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000790s | 0.000804s | 0.000800s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000784s | 0.000820s | 0.000783s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000785s | 0.000790s | 0.000776s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000794s | 0.000792s | 0.000809s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000789s | 0.000761s | 0.000784s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000799s | 0.000779s | 0.000796s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000786s | 0.000771s | 0.000805s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000779s | 0.000803s | 0.000814s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000795s | 0.000779s | 0.000795s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000798s | 0.000774s | 0.000783s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000804s | 0.000776s | 0.000805s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000823s | 0.000801s | 0.000812s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000831s | 0.000841s | 0.000827s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000844s | 0.000847s | 0.000812s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000813s | 0.000775s | 0.000843s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000814s | 0.000770s | 0.000803s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000792s | 0.000781s | 0.000806s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000787s | 0.000787s | 0.000810s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000804s | 0.000806s | 0.000803s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000802s | 0.000796s | 0.000812s | byte equality observed |
| integral_constant_test.test | 10 | 0.000367s | 0.000366s | 0.000798s | byte equality observed |
| is_abstract_test.test | 10 | 0.000775s | 0.000791s | 0.000791s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000769s | 0.000793s | 0.000797s | byte equality observed |
| is_array_test.test | 10 | 0.000775s | 0.000795s | 0.000801s | byte equality observed |
| is_assignable_test.test | 10 | 0.000794s | 0.000805s | 0.000806s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000777s | 0.000797s | 0.000779s | byte equality observed |
| is_base_of_test.test | 10 | 0.000793s | 0.000797s | 0.000791s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000780s | 0.000781s | 0.000799s | byte equality observed |
| is_class_test.test | 10 | 0.000789s | 0.000784s | 0.000796s | byte equality observed |
| is_complete_test.test | 10 | 0.000791s | 0.000767s | 0.000791s | byte equality observed |
| is_complex_test.test | 10 | 0.000808s | 0.000768s | 0.000785s | byte equality observed |
| is_compound_test.test | 10 | 0.000807s | 0.000777s | 0.000782s | byte equality observed |
| is_const_test.test | 10 | 0.000804s | 0.000766s | 0.000795s | byte equality observed |
| is_constructible_test.test | 10 | 0.000807s | 0.000787s | 0.000818s | byte equality observed |
| is_convertible_test.test | 10 | 0.000803s | 0.000786s | 0.000819s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000792s | 0.000766s | 0.000824s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000805s | 0.000769s | 0.000792s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000781s | 0.000791s | 0.000797s | byte equality observed |
| is_destructible_test.test | 10 | 0.000811s | 0.000768s | 0.000812s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000803s | 0.000788s | 0.000768s | byte equality observed |
| is_detected_test.test | 10 | 0.000798s | 0.000789s | 0.000791s | byte equality observed |
| is_empty_test.test | 10 | 0.000794s | 0.000795s | 0.000787s | byte equality observed |
| is_enum_test.test | 10 | 0.000803s | 0.000788s | 0.000794s | byte equality observed |
| is_final_test.test | 10 | 0.000799s | 0.000788s | 0.000795s | byte equality observed |
| is_float_test.test | 10 | 0.000800s | 0.000780s | 0.000814s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000808s | 0.000778s | 0.000806s | byte equality observed |
| is_function_test.test | 10 | 0.000798s | 0.000774s | 0.000802s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000792s | 0.000784s | 0.000814s | byte equality observed |
| is_integral_test.test | 10 | 0.000797s | 0.000766s | 0.000805s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000797s | 0.000817s | 0.000807s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000807s | 0.000801s | 0.000783s | byte equality observed |
| is_member_func_test.test | 10 | 0.000787s | 0.000773s | 0.000780s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000789s | 0.000811s | 0.000790s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000791s | 0.000807s | 0.000804s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000795s | 0.000824s | 0.000790s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000798s | 0.000801s | 0.000771s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000806s | 0.000781s | 0.000799s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000796s | 0.000798s | 0.000798s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000818s | 0.000784s | 0.000806s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000791s | 0.000810s | 0.000786s | byte equality observed |
| is_object_test.test | 10 | 0.000799s | 0.000805s | 0.000801s | byte equality observed |
| is_pod_test.test | 10 | 0.000793s | 0.000808s | 0.000810s | byte equality observed |
| is_pointer_test.test | 10 | 0.000782s | 0.000809s | 0.000838s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000789s | 0.000796s | 0.000837s | byte equality observed |
| is_reference_test.test | 10 | 0.000798s | 0.000795s | 0.000819s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000773s | 0.000796s | 0.000810s | byte equality observed |
| is_same_test.test | 10 | 0.000791s | 0.000785s | 0.000783s | byte equality observed |
| is_scalar_test.test | 10 | 0.000780s | 0.000790s | 0.000800s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000783s | 0.000784s | 0.000785s | byte equality observed |
| is_signed_test.test | 10 | 0.000798s | 0.000797s | 0.000798s | byte equality observed |
| is_stateless_test.test | 10 | 0.000791s | 0.000811s | 0.000794s | byte equality observed |
| is_swappable_test.test | 10 | 0.000797s | 0.000811s | 0.000800s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000816s | 0.000812s | 0.000820s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000788s | 0.000808s | 0.000803s | byte equality observed |
| is_union_test.test | 10 | 0.000823s | 0.000802s | 0.000808s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000817s | 0.000794s | 0.000829s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000806s | 0.000806s | 0.000811s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000804s | 0.000786s | 0.000824s | byte equality observed |
| is_void_test.test | 10 | 0.000792s | 0.000812s | 0.000812s | byte equality observed |
| is_volatile_test.test | 10 | 0.000789s | 0.000803s | 0.000786s | byte equality observed |
| make_signed_test.test | 10 | 0.000797s | 0.000773s | 0.000793s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000812s | 0.000804s | 0.000791s | byte equality observed |
| make_void_test.test | 10 | 0.000797s | 0.000763s | 0.000816s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000370s | 0.000363s | 0.000844s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000365s | 0.000357s | 0.000815s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000370s | 0.000359s | 0.000773s | byte equality observed |
| negation_test.test | 10 | 0.000781s | 0.000796s | 0.000809s | byte equality observed |
| promote_basic_test.test | 10 | 0.000362s | 0.000364s | 0.000813s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000373s | 0.000367s | 0.000797s | byte equality observed |
| promote_enum_test.test | 10 | 0.000365s | 0.000365s | 0.000764s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000358s | 0.000360s | 0.000770s | byte equality observed |
| rank_test.test | 10 | 0.000795s | 0.000779s | 0.000779s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000811s | 0.000796s | 0.000765s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000814s | 0.000798s | 0.000797s | byte equality observed |
| remove_const_test.test | 10 | 0.000806s | 0.000805s | 0.000803s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000787s | 0.000789s | 0.000804s | byte equality observed |
| remove_cv_test.test | 10 | 0.000785s | 0.000798s | 0.000803s | byte equality observed |
| remove_extent_test.test | 10 | 0.000783s | 0.000811s | 0.000807s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000784s | 0.000791s | 0.000815s | byte equality observed |
| remove_reference_test.test | 10 | 0.000805s | 0.000790s | 0.000819s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000810s | 0.000785s | 0.000812s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000791s | 0.000790s | 0.000791s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000790s | 0.000790s | 0.000799s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000804s | 0.000767s | 0.000804s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000795s | 0.000798s | 0.000783s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000809s | 0.000784s | 0.000786s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000798s | 0.000777s | 0.000814s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000792s | 0.000794s | 0.000799s | byte equality observed |
| type_identity_test.test | 10 | 0.000783s | 0.000783s | 0.000813s | byte equality observed |
| type_traits_test.test | 10 | 0.000369s | 0.000367s | 0.000812s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000830s | 0.000821s | 0.000847s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
