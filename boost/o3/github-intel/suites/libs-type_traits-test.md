# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.093621 | 0.280369 | 0.371418 | 0.001285 | 0.001289 | 0.001123 |
| type_traits_test.test | RUN | 0.127302 | 0.280984 | 0.368906 | 0.000400 | 0.000493 | 0.001043 |
| type_identity_test.test | RUN | 0.251010 | 0.956680 | 1.930825 | 0.001226 | 0.001459 | 0.001122 |
| tricky_rvalue_test.test | RUN | 0.087406 | 0.222899 | 0.291552 | 0.001155 | 0.001258 | 0.001042 |
| tricky_partial_spec_test.test | RUN | 0.104933 | 0.314103 | 0.458422 | 0.001193 | 0.001316 | 0.001024 |
| tricky_is_enum_test.test | RUN | 0.083034 | 0.207412 | 0.266145 | 0.001236 | 0.001268 | 0.001073 |
| tricky_incomplete_type_test.test | RUN | 0.137359 | 0.320208 | 0.442377 | 0.001138 | 0.001170 | 0.001054 |
| tricky_function_type_test.test | RUN | 0.112315 | 0.339189 | 0.509977 | 0.001184 | 0.001337 | 0.001118 |
| tricky_add_pointer_test.test | RUN | 0.161987 | 0.573212 | 1.129296 | 0.001216 | 0.001359 | 0.001106 |
| tricky_abstract_type_test.test | RUN | 0.088902 | 0.212853 | 0.275335 | 0.001264 | 0.001132 | 0.001170 |
| remove_volatile_test.test | RUN | 0.219016 | 0.837583 | 1.706845 | 0.001071 | 0.001436 | 0.001109 |
| remove_reference_test.test | RUN | 0.229930 | 0.859939 | 1.844915 | 0.001345 | 0.001374 | 0.001101 |
| remove_pointer_test.test | RUN | 0.238337 | 0.908531 | 1.897774 | 0.001500 | 0.001270 | 0.001105 |
| remove_extent_test.test | RUN | 0.228245 | 0.882316 | 1.833465 | 0.001258 | 0.001270 | 0.001071 |
| remove_cv_test.test | RUN | 0.231074 | 0.880129 | 1.816445 | 0.001208 | 0.001334 | 0.001181 |
| remove_cv_ref_test.test | RUN | 0.486071 | 2.182011 | 4.449690 | 0.001106 | 0.001117 | 0.001029 |
| remove_const_test.test | RUN | 0.220476 | 0.819772 | 1.709293 | 0.001292 | 0.001348 | 0.001149 |
| remove_bounds_test.test | RUN | 0.233761 | 0.882542 | 1.848363 | 0.001192 | 0.001376 | 0.001041 |
| remove_all_extents_test.test | RUN | 0.235512 | 0.870990 | 1.712171 | 0.001134 | 0.001334 | 0.001126 |
| rank_test.test | RUN | 0.088800 | 0.221709 | 0.291272 | 0.001248 | 0.001336 | 0.001068 |
| promote_mpl_test.test | RUN | 0.076127 | 0.195195 | 0.216208 | 0.000479 | 0.000470 | 0.001091 |
| promote_enum_test.test | RUN | 0.016554 | 0.045672 | 0.048530 | 0.000525 | 0.000532 | 0.001079 |
| promote_enum_msvc_bug_test.test | RUN | 0.015105 | 0.041064 | 0.042319 | 0.000494 | 0.000520 | 0.001049 |
| promote_basic_test.test | RUN | 0.018824 | 0.052387 | 0.052551 | 0.000512 | 0.000479 | 0.001071 |
| negation_test.test | RUN | 0.081089 | 0.209097 | 0.269022 | 0.001118 | 0.001309 | 0.001088 |
| mpl_interop_test3.test | RUN | 0.070828 | 0.183443 | 0.188082 | 0.000392 | 0.000510 | 0.000953 |
| mpl_interop_test2.test | RUN | 0.024854 | 0.051397 | 0.054069 | 0.000500 | 0.000516 | 0.001100 |
| mpl_interop_test1.test | RUN | 0.013950 | 0.037567 | 0.036581 | 0.000509 | 0.000442 | 0.001030 |
| make_void_test.test | RUN | 0.089952 | 0.219108 | 0.285597 | 0.001222 | 0.001280 | 0.001073 |
| make_unsigned_test.test | RUN | 0.102320 | 0.292967 | 0.415994 | 0.001162 | 0.001598 | 0.001192 |
| make_signed_test.test | RUN | 0.102362 | 0.285941 | 0.396349 | 0.001369 | 0.001030 | 0.000968 |
| is_volatile_test.test | RUN | 0.093114 | 0.247978 | 0.332273 | 0.001070 | 0.001076 | 0.001008 |
| is_void_test.test | RUN | 0.087892 | 0.230048 | 0.301238 | 0.001366 | 0.001143 | 0.001137 |
| is_virtual_base_of_test.test | RUN | 0.103278 | 0.284643 | 0.432680 | 0.001338 | 0.001171 | 0.001062 |
| is_unsigned_test.test | RUN | 0.087324 | 0.236006 | 0.327890 | 0.001219 | 0.001084 | 0.001006 |
| is_unscoped_enum_test.test | RUN | 0.087555 | 0.212269 | 0.267168 | 0.001229 | 0.001301 | 0.001020 |
| is_union_test.test | RUN | 0.095460 | 0.274520 | 0.388633 | 0.001325 | 0.001283 | 0.001143 |
| is_unbounded_array_test.test | RUN | 0.088701 | 0.229517 | 0.307895 | 0.001318 | 0.001183 | 0.001127 |
| is_trivially_copyable_test.test | RUN | 0.138446 | 0.477393 | 0.761558 | 0.001070 | 0.001382 | 0.001009 |
| is_swappable_test.test | RUN | 0.116888 | 0.362858 | 0.561318 | 0.001133 | 0.001243 | 0.001097 |
| is_stateless_test.test | RUN | 0.130959 | 0.413233 | 0.658249 | 0.001114 | 0.001234 | 0.001057 |
| is_signed_test.test | RUN | 0.091016 | 0.235358 | 0.318446 | 0.001196 | 0.001223 | 0.001091 |
| is_scoped_enum_test.test | RUN | 0.088525 | 0.212879 | 0.278853 | 0.001139 | 0.001182 | 0.001111 |
| is_scalar_test.test | RUN | 0.116616 | 0.378610 | 0.577980 | 0.001080 | 0.001456 | 0.001193 |
| is_same_test.test | RUN | 0.088292 | 0.226837 | 0.306630 | 0.001418 | 0.001163 | 0.001131 |
| is_rvalue_reference_test.test | RUN | 0.093330 | 0.252245 | 0.358041 | 0.001183 | 0.001181 | 0.001054 |
| is_reference_test.test | RUN | 0.092114 | 0.257736 | 0.359599 | 0.001127 | 0.000941 | 0.001105 |
| is_polymorphic_test.test | RUN | 0.099526 | 0.264483 | 0.366554 | 0.001063 | 0.001259 | 0.001120 |
| is_pointer_test.test | RUN | 0.090991 | 0.256718 | 0.373991 | 0.001221 | 0.001234 | 0.001112 |
| is_pod_test.test | RUN | 0.118491 | 0.408099 | 0.660610 | 0.001202 | 0.001296 | 0.001257 |
| is_object_test.test | RUN | 0.086143 | 0.216942 | 0.278117 | 0.001173 | 0.001343 | 0.001162 |
| is_nothrow_swappable_test.test | RUN | 0.128226 | 0.398439 | 0.645600 | 0.001198 | 0.001280 | 0.001106 |
| is_nothrow_move_constructible_test.test | RUN | 0.122185 | 0.403128 | 0.642649 | 0.001217 | 0.001243 | 0.001164 |
| is_nothrow_move_assignable_test.test | RUN | 0.119993 | 0.414071 | 0.636325 | 0.001005 | 0.001157 | 0.001017 |
| is_noncopyable_test.test | RUN | 0.086161 | 0.223376 | 0.294971 | 0.001156 | 0.001174 | 0.000977 |
| is_member_pointer_test.test | RUN | 0.092998 | 0.226664 | 0.297386 | 0.001188 | 0.001210 | 0.001217 |
| is_member_obj_test.test | RUN | 0.089899 | 0.224525 | 0.306556 | 0.001147 | 0.001305 | 0.001075 |
| is_member_func_test.test | RUN | 0.093293 | 0.238399 | 0.340155 | 0.001177 | 0.001192 | 0.001225 |
| is_lvalue_reference_test.test | RUN | 0.093042 | 0.247962 | 0.361546 | 0.001168 | 0.001114 | 0.001082 |
| is_list_constructible_test.test | RUN | 0.111547 | 0.300384 | 0.390710 | 0.001158 | 0.001340 | 0.001120 |
| is_integral_test.test | RUN | 0.108634 | 0.349608 | 0.560442 | 0.001194 | 0.001298 | 0.001021 |
| is_fundamental_test.test | RUN | 0.111604 | 0.373415 | 0.569328 | 0.001256 | 0.001331 | 0.001166 |
| is_function_test.test | RUN | 0.088080 | 0.241407 | 0.320363 | 0.001151 | 0.001173 | 0.001132 |
| is_floating_point_test.test | RUN | 0.095739 | 0.260417 | 0.359084 | 0.001050 | 0.001383 | 0.001006 |
| is_float_test.test | RUN | 0.090739 | 0.259438 | 0.358334 | 0.001352 | 0.001151 | 0.001278 |
| is_final_test.test | RUN | 0.094546 | 0.259197 | 0.375111 | 0.001181 | 0.001274 | 0.001088 |
| is_enum_test.test | RUN | 0.086879 | 0.225250 | 0.283329 | 0.001140 | 0.001457 | 0.001119 |
| is_empty_test.test | RUN | 0.097147 | 0.239137 | 0.331511 | 0.001259 | 0.001190 | 0.001087 |
| is_detected_test.test | RUN | 0.085103 | 0.206318 | 0.262560 | 0.001332 | 0.001285 | 0.001098 |
| is_detected_exact_test.test | RUN | 0.085017 | 0.208238 | 0.266634 | 0.001203 | 0.001114 | 0.001046 |
| is_destructible_test.test | RUN | 0.119780 | 0.398365 | 0.629208 | 0.001053 | 0.001366 | 0.001051 |
| is_default_constr_test.test | RUN | 0.123136 | 0.419707 | 0.664558 | 0.001240 | 0.001277 | 0.001052 |
| is_copy_constructible_test.test | RUN | 0.125208 | 0.441081 | 0.698228 | 0.001153 | 0.001108 | 0.001131 |
| is_copy_assignable_test.test | RUN | 0.123837 | 0.426961 | 0.679069 | 0.001003 | 0.001191 | 0.001096 |
| is_convertible_test.test | RUN | 0.122645 | 0.381172 | 0.549534 | 0.001110 | 0.001381 | 0.001062 |
| is_constructible_test.test | RUN | 0.100855 | 0.276760 | 0.392747 | 0.001174 | 0.001252 | 0.001085 |
| is_const_test.test | RUN | 0.089842 | 0.243794 | 0.328533 | 0.001152 | 0.001224 | 0.001047 |
| is_compound_test.test | RUN | 0.087088 | 0.211535 | 0.262233 | 0.001094 | 0.001186 | 0.001055 |
| is_complex_test.test | RUN | 0.113580 | 0.280607 | 0.375604 | 0.001244 | 0.001418 | 0.001233 |
| is_complete_test.test | RUN | 0.098964 | 0.289800 | 0.423313 | 0.001156 | 0.001352 | 0.001133 |
| is_class_test.test | RUN | 0.091138 | 0.254836 | 0.352032 | 0.001089 | 0.001163 | 0.001022 |
| is_bounded_array_test.test | RUN | 0.085538 | 0.229462 | 0.303929 | 0.001090 | 0.001169 | 0.001010 |
| is_base_of_test.test | RUN | 0.092457 | 0.252862 | 0.354217 | 0.001271 | 0.001348 | 0.001215 |
| is_base_and_derived_test.test | RUN | 0.090435 | 0.244244 | 0.345793 | 0.001106 | 0.001198 | 0.001065 |
| is_assignable_test.test | RUN | 0.107241 | 0.354215 | 0.524010 | 0.001142 | 0.001389 | 0.001130 |
| is_array_test.test | RUN | 0.087667 | 0.239866 | 0.325315 | 0.001188 | 0.001201 | 0.001138 |
| is_arithmetic_test.test | RUN | 0.112354 | 0.359672 | 0.544347 | 0.001065 | 0.001340 | 0.001142 |
| is_abstract_test.test | RUN | 0.201565 | 0.964137 | 2.007266 | 0.001142 | 0.001291 | 0.001102 |
| integral_constant_test.test | RUN | 0.013357 | 0.037155 | 0.037936 | 0.000429 | 0.000531 | 0.001097 |
| has_virtual_destructor_test.test | RUN | 0.094575 | 0.276447 | 0.393361 | 0.001104 | 0.001476 | 0.001139 |
| has_unary_plus_test.test | RUN | 0.182172 | 1.019051 | 1.461394 | 0.001206 | 0.001353 | 0.001142 |
| has_unary_minus_test.test | RUN | 0.180870 | 0.996943 | 1.441671 | 0.001188 | 0.001267 | 0.001098 |
| has_trivial_move_constructor_test.test | RUN | 0.120705 | 0.424832 | 0.687767 | 0.001053 | 0.001285 | 0.001178 |
| has_trivial_move_assign_test.test | RUN | 0.127717 | 0.418470 | 0.632188 | 0.001095 | 0.001235 | 0.001194 |
| has_trivial_destructor_test.test | RUN | 0.124286 | 0.428426 | 0.673773 | 0.001192 | 0.001235 | 0.001102 |
| has_trivial_copy_test.test | RUN | 0.125006 | 0.434717 | 0.687388 | 0.001082 | 0.001428 | 0.001116 |
| has_trivial_constr_test.test | RUN | 0.126628 | 0.450576 | 0.699935 | 0.001095 | 0.001488 | 0.001175 |
| has_trivial_assign_test.test | RUN | 0.128611 | 0.439309 | 0.691137 | 0.001272 | 0.001480 | 0.001176 |
| has_right_shift_test.test | RUN | 0.195253 | 0.813073 | 1.519032 | 0.001106 | 0.001344 | 0.001164 |
| has_right_shift_assign_test.test | RUN | 0.182574 | 0.763231 | 1.432771 | 0.001197 | 0.001371 | 0.001160 |
| has_prefix_classes3_test.test | RUN | 0.133438 | 0.447508 | 0.735603 | 0.001487 | 0.001286 | 0.001201 |
| has_prefix_classes2_test.test | RUN | 0.134335 | 0.446753 | 0.741057 | 0.001034 | 0.001284 | 0.001114 |
| has_prefix_classes1_test.test | RUN | 0.135511 | 0.454700 | 0.720535 | 0.001250 | 0.001477 | 0.001075 |
| has_prefix_classes0_test.test | RUN | 0.132078 | 0.451667 | 0.708775 | 0.001218 | 0.001251 | 0.001041 |
| has_pre_increment_test.test | RUN | 0.182058 | 1.008729 | 1.463100 | 0.001081 | 0.001202 | 0.001188 |
| has_pre_decrement_test.test | RUN | 0.185341 | 1.003925 | 1.457526 | 0.001089 | 0.001248 | 0.001160 |
| has_postfix_classes3_test.test | RUN | 0.136376 | 0.453525 | 0.726831 | 0.001163 | 0.001309 | 0.001061 |
| has_postfix_classes2_test.test | RUN | 0.133678 | 0.452665 | 0.703457 | 0.001151 | 0.001128 | 0.001053 |
| has_postfix_classes1_test.test | RUN | 0.136050 | 0.449523 | 0.729803 | 0.001067 | 0.001337 | 0.001134 |
| has_postfix_classes0_test.test | RUN | 0.136605 | 0.449585 | 0.712110 | 0.001096 | 0.001298 | 0.001088 |
| has_post_increment_test.test | RUN | 0.182667 | 0.977864 | 1.480238 | 0.001270 | 0.001202 | 0.001147 |
| has_post_decrement_test.test | RUN | 0.178550 | 0.986241 | 1.471087 | 0.001119 | 0.001291 | 0.001153 |
| has_plus_test.test | RUN | 0.187848 | 0.732312 | 1.455257 | 0.001121 | 0.001374 | 0.001221 |
| has_plus_assign_test.test | RUN | 0.188915 | 0.767104 | 1.466376 | 0.001047 | 0.001309 | 0.001137 |
| has_operator_new_test.test | RUN | 0.123920 | 0.396095 | 0.654527 | 0.001181 | 0.001359 | 0.001061 |
| has_nothrow_destructor_test.test | RUN | 0.127051 | 0.431496 | 0.711052 | 0.001142 | 0.001267 | 0.001149 |
| has_nothrow_copy_test.test | RUN | 0.126660 | 0.410416 | 0.674537 | 0.001077 | 0.001212 | 0.001186 |
| has_nothrow_constr_test.test | RUN | 0.120540 | 0.408612 | 0.647776 | 0.001084 | 0.001303 | 0.001128 |
| has_nothrow_assign_test.test | RUN | 0.121647 | 0.409086 | 0.663443 | 0.001237 | 0.001407 | 0.001089 |
| has_not_equal_to_test.test | RUN | 0.180207 | 0.978017 | 1.473722 | 0.001160 | 0.001260 | 0.001276 |
| has_negate_test.test | RUN | 0.173602 | 0.738015 | 1.405716 | 0.001193 | 0.001169 | 0.001161 |
| has_multiplies_test.test | RUN | 0.184881 | 0.748574 | 1.440041 | 0.001093 | 0.001300 | 0.001123 |
| has_multiplies_assign_test.test | RUN | 0.185673 | 0.762435 | 1.407584 | 0.001216 | 0.001301 | 0.001068 |
| has_modulus_test.test | RUN | 0.183108 | 0.757455 | 1.436157 | 0.001289 | 0.001282 | 0.001268 |
| has_modulus_assign_test.test | RUN | 0.185567 | 0.754100 | 1.450734 | 0.001238 | 0.001221 | 0.001244 |
| has_minus_test.test | RUN | 0.190009 | 0.769318 | 1.430278 | 0.001119 | 0.001173 | 0.001060 |
| has_minus_assign_test.test | RUN | 0.190401 | 0.758568 | 1.454798 | 0.001237 | 0.001264 | 0.001056 |
| has_logical_or_test.test | RUN | 0.182157 | 0.766948 | 1.444835 | 0.001122 | 0.001215 | 0.001168 |
| has_logical_not_test.test | RUN | 0.177528 | 0.743945 | 1.415525 | 0.001180 | 0.000969 | 0.001151 |
| has_logical_and_test.test | RUN | 0.183053 | 0.774618 | 1.417675 | 0.001144 | 0.001266 | 0.001114 |
| has_less_test.test | RUN | 0.180889 | 0.959589 | 1.445050 | 0.001383 | 0.001226 | 0.001050 |
| has_less_equal_test.test | RUN | 0.184412 | 0.979852 | 1.456861 | 0.001121 | 0.001202 | 0.001119 |
| has_left_shift_test.test | RUN | 0.198856 | 0.951964 | 1.827978 | 0.001154 | 0.001323 | 0.001066 |
| has_left_shift_assign_test.test | RUN | 0.180331 | 0.771633 | 1.430461 | 0.001217 | 0.001346 | 0.001087 |
| has_greater_test.test | RUN | 0.185396 | 0.966630 | 1.446196 | 0.001216 | 0.001291 | 0.000987 |
| has_greater_equal_test.test | RUN | 0.186825 | 1.016615 | 1.428258 | 0.001094 | 0.001444 | 0.001148 |
| has_equal_to_test.test | RUN | 0.185272 | 0.999023 | 1.495673 | 0.001137 | 0.001125 | 0.001226 |
| has_divides_test.test | RUN | 0.181596 | 0.750723 | 1.477153 | 0.001054 | 0.001315 | 0.001109 |
| has_divides_assign_test.test | RUN | 0.184335 | 0.756420 | 1.384616 | 0.001450 | 0.001288 | 0.001062 |
| has_dereference_test.test | RUN | 0.178544 | 0.749704 | 1.373372 | 0.001102 | 0.001386 | 0.000924 |
| has_complement_test.test | RUN | 0.177904 | 0.983250 | 1.470985 | 0.001111 | 0.001282 | 0.001072 |
| has_bit_xor_test.test | RUN | 0.184615 | 0.766619 | 1.463189 | 0.001049 | 0.001228 | 0.001032 |
| has_bit_xor_assign_test.test | RUN | 0.185625 | 0.761752 | 1.389318 | 0.001339 | 0.001266 | 0.001092 |
| has_bit_or_test.test | RUN | 0.182732 | 0.749337 | 1.408179 | 0.001308 | 0.001445 | 0.001157 |
| has_bit_or_assign_test.test | RUN | 0.182362 | 0.773138 | 1.398213 | 0.001034 | 0.001465 | 0.001114 |
| has_bit_and_test.test | RUN | 0.181538 | 0.776943 | 1.465384 | 0.001166 | 0.001229 | 0.001099 |
| has_bit_and_assign_test.test | RUN | 0.184126 | 0.754096 | 1.461375 | 0.001409 | 0.001308 | 0.000982 |
| has_binary_classes9_test.test | RUN | 0.198768 | 0.907338 | 1.611587 | 0.001120 | 0.001325 | 0.001066 |
| has_binary_classes8_test.test | RUN | 0.196217 | 0.908337 | 1.599814 | 0.001145 | 0.001334 | 0.001102 |
| has_binary_classes7_test.test | RUN | 0.197668 | 0.922654 | 1.673522 | 0.000930 | 0.001233 | 0.001114 |
| has_binary_classes6_test.test | RUN | 0.197889 | 0.870187 | 1.691425 | 0.001528 | 0.001267 | 0.001036 |
| has_binary_classes5_test.test | RUN | 0.197745 | 0.879632 | 1.638421 | 0.001163 | 0.001412 | 0.001141 |
| has_binary_classes4_test.test | RUN | 0.197727 | 0.906047 | 1.613078 | 0.001192 | 0.001378 | 0.001205 |
| has_binary_classes3_test.test | RUN | 0.196562 | 0.904430 | 1.677528 | 0.001071 | 0.001359 | 0.001168 |
| has_binary_classes2_test.test | RUN | 0.201891 | 0.929448 | 1.667285 | 0.001295 | 0.001264 | 0.001068 |
| has_binary_classes1_test.test | RUN | 0.197185 | 0.898599 | 1.641200 | 0.001145 | 0.001351 | 0.001080 |
| has_binary_classes0_test.test | RUN | 0.203521 | 0.924217 | 1.612235 | 0.001070 | 0.001091 | 0.001053 |
| function_traits_test.test | RUN | 0.090704 | 0.239221 | 0.337001 | 0.001107 | 0.001278 | 0.001063 |
| floating_point_promotion_test.test | RUN | 0.091702 | 0.237327 | 0.314361 | 0.001150 | 0.001164 | 0.001018 |
| extent_test.test | RUN | 0.089369 | 0.240501 | 0.337112 | 0.001085 | 0.001235 | 0.000999 |
| enable_if_test.test | RUN | 0.085092 | 0.204130 | 0.260795 | 0.001137 | 0.001361 | 0.001206 |
| disjunction_test.test | RUN | 0.090130 | 0.212498 | 0.263777 | 0.001030 | 0.001354 | 0.001040 |
| detected_test.test | RUN | 0.087528 | 0.203205 | 0.254888 | 0.001115 | 0.001299 | 0.001007 |
| detected_or_test.test | RUN | 0.086168 | 0.210921 | 0.274280 | 0.001256 | 0.001209 | 0.001104 |
| decay_test.test | RUN | 0.226079 | 0.817852 | 1.599158 | 0.001147 | 0.001365 | 0.001033 |
| cxx14_aliases_test.test | RUN | 0.140847 | 0.306482 | 0.436259 | 0.001256 | 0.001276 | 0.000944 |
| copy_reference_test.test | RUN | 0.084090 | 0.208097 | 0.281779 | 0.001231 | 0.001222 | 0.001058 |
| copy_cv_test.test | RUN | 0.087351 | 0.219923 | 0.309715 | 0.001174 | 0.001263 | 0.001034 |
| copy_cv_ref_test.test | RUN | 0.125991 | 0.372260 | 0.646322 | 0.001036 | 0.001300 | 0.001093 |
| conjunction_test.test | RUN | 0.085456 | 0.210919 | 0.277185 | 0.001171 | 0.001199 | 0.001145 |
| conditional_test.test | RUN | 0.088089 | 0.212542 | 0.268113 | 0.001131 | 0.001120 | 0.000963 |
| common_type_test.test | RUN | 0.118573 | 0.322557 | 0.548242 | 0.001123 | 0.001381 | 0.001130 |
| common_type_sfinae_test.test | RUN | 0.083610 | 0.204017 | 0.255559 | 0.001165 | 0.001192 | 0.001096 |
| common_type_sfinae2_test.test | RUN | 0.086895 | 0.209155 | 0.267860 | 0.001105 | 0.001083 | 0.000951 |
| common_type_6_test.test | RUN | 0.093238 | 0.215307 | 0.281582 | 0.001136 | 0.001067 | 0.001098 |
| common_type_5_test.test | RUN | 0.088859 | 0.212947 | 0.280418 | 0.001153 | 0.001404 | 0.001066 |
| common_type_4_test.test | RUN | 0.096010 | 0.235750 | 0.335970 | 0.001257 | 0.001163 | 0.001063 |
| common_type_3_test.test | RUN | 0.083334 | 0.196399 | 0.255774 | 0.001192 | 0.001158 | 0.000997 |
| common_type_2_test.test | RUN | 0.110951 | 0.320630 | 0.509924 | 0.001192 | 0.001339 | 0.001046 |
| alignment_of_test.test | RUN | 0.089509 | 0.254686 | 0.339659 | 0.001243 | 0.001387 | 0.001048 |
| alignment_of_a2_test.test | RUN | 0.089069 | 0.257504 | 0.341049 | 0.001192 | 0.001187 | 0.001119 |
| aligned_storage_test.test | RUN | 0.092539 | 0.252246 | 0.313021 | 0.001096 | 0.001316 | 0.001006 |
| aligned_storage_empy_test.test | RUN | 0.101022 | 0.278937 | 0.415408 | 0.001046 | 0.001387 | 0.000838 |
| aligned_storage_a2_test.test | RUN | 0.091146 | 0.251322 | 0.317236 | 0.001204 | 0.001383 | 0.001152 |
| add_volatile_test.test | RUN | 0.200620 | 0.722485 | 1.492573 | 0.001353 | 0.001296 | 0.001080 |
| add_rvalue_reference_test.test | RUN | 0.225143 | 0.820621 | 1.674927 | 0.001362 | 0.001214 | 0.001081 |
| add_reference_test.test | RUN | 0.219061 | 0.788136 | 1.636620 | 0.001094 | 0.001157 | 0.001089 |
| add_pointer_test.test | RUN | 0.139076 | 0.454681 | 0.865824 | 0.001056 | 0.001264 | 0.001140 |
| add_lvalue_reference_test.test | RUN | 0.216107 | 0.802314 | 1.658039 | 0.001238 | 0.001449 | 0.001169 |
| add_cv_test.test | RUN | 0.203559 | 0.749332 | 1.516787 | 0.001193 | 0.001067 | 0.001175 |
| add_const_test.test | RUN | 0.206277 | 0.753583 | 1.570361 | 0.001153 | 0.001098 | 0.001035 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.079378 | 0.197833 | 0.250264 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.084530 | 0.202300 | 0.256122 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077409 | 0.189734 | 0.246211 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.078523 | 0.192945 | 0.249964 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.080568 | 0.189493 | 0.246486 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079840 | 0.195757 | 0.240991 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.080887 | 0.192553 | 0.245561 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079098 | 0.190585 | 0.244153 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.080410 | 0.191878 | 0.241547 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.079325 | 0.195315 | 0.244902 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079726 | 0.194075 | 0.244037 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.080851 | 0.194643 | 0.245622 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.081474 | 0.191552 | 0.245268 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.078398 | 0.196949 | 0.243379 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.081036 | 0.194377 | 0.245152 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.080128 | 0.192125 | 0.243811 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.079934 | 0.190382 | 0.246072 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.081122 | 0.197448 | 0.241969 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.081255 | 0.196895 | 0.247397 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.080349 | 0.193513 | 0.245172 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.080773 | 0.191907 | 0.246942 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.080378 | 0.192214 | 0.243492 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.124356 | 0.414473 | 0.685632 | 0.001405 | 0.001535 | 0.001108 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.118226 | 0.419317 | 0.667986 | 0.001031 | 0.001453 | 0.001043 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.121063 | 0.422043 | 0.673281 | 0.000827 | 0.001184 | 0.000894 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.119546 | 0.418154 | 0.662511 | 0.000960 | 0.000923 | 0.001126 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.078026 | 0.306019 | 0.377591 | 0.000874 | 0.000969 | 0.000842 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.998×, 0.997× | 1.002× |
| clang | 1.030× | 1.030×, 1.031× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000789s | 0.000781s | 0.000801s | byte equality observed |
| add_cv_test.test | 10 | 0.000793s | 0.000784s | 0.000773s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000808s | 0.000780s | 0.000772s | byte equality observed |
| add_pointer_test.test | 10 | 0.000781s | 0.000785s | 0.000789s | byte equality observed |
| add_reference_test.test | 10 | 0.000779s | 0.000807s | 0.000769s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000785s | 0.000796s | 0.000794s | byte equality observed |
| add_volatile_test.test | 10 | 0.000783s | 0.000793s | 0.000794s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000823s | 0.000821s | 0.000832s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000786s | 0.000794s | 0.000794s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000822s | 0.000819s | 0.000817s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000785s | 0.000783s | 0.000825s | byte equality observed |
| alignment_of_test.test | 10 | 0.000790s | 0.000812s | 0.000752s | byte equality observed |
| common_type_2_test.test | 10 | 0.000769s | 0.000797s | 0.000777s | byte equality observed |
| common_type_3_test.test | 10 | 0.000770s | 0.000781s | 0.000764s | byte equality observed |
| common_type_4_test.test | 10 | 0.000776s | 0.000789s | 0.000772s | byte equality observed |
| common_type_5_test.test | 10 | 0.000786s | 0.000799s | 0.000799s | byte equality observed |
| common_type_6_test.test | 10 | 0.000769s | 0.000792s | 0.000796s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000773s | 0.000776s | 0.000796s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000764s | 0.000788s | 0.000761s | byte equality observed |
| common_type_test.test | 10 | 0.000778s | 0.000787s | 0.000781s | byte equality observed |
| conditional_test.test | 10 | 0.000798s | 0.000769s | 0.000769s | byte equality observed |
| conjunction_test.test | 10 | 0.000784s | 0.000762s | 0.000777s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000784s | 0.000754s | 0.000769s | byte equality observed |
| copy_cv_test.test | 10 | 0.000802s | 0.000762s | 0.000766s | byte equality observed |
| copy_reference_test.test | 10 | 0.000802s | 0.000776s | 0.000777s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000782s | 0.000797s | 0.000777s | byte equality observed |
| decay_test.test | 10 | 0.000800s | 0.000814s | 0.000787s | byte equality observed |
| detected_or_test.test | 10 | 0.000795s | 0.000829s | 0.000745s | byte equality observed |
| detected_test.test | 10 | 0.000776s | 0.000811s | 0.000778s | byte equality observed |
| disjunction_test.test | 10 | 0.000791s | 0.000785s | 0.000768s | byte equality observed |
| enable_if_test.test | 10 | 0.000782s | 0.000782s | 0.000789s | byte equality observed |
| extent_test.test | 10 | 0.000780s | 0.000789s | 0.000805s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000779s | 0.000775s | 0.000818s | byte equality observed |
| function_traits_test.test | 10 | 0.000789s | 0.000770s | 0.000798s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000793s | 0.000779s | 0.000806s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000812s | 0.000778s | 0.000771s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000787s | 0.000807s | 0.000773s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000784s | 0.000764s | 0.000769s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000788s | 0.000777s | 0.000785s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000778s | 0.000791s | 0.000785s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000746s | 0.000797s | 0.000798s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000785s | 0.000785s | 0.000802s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000773s | 0.000777s | 0.000814s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000778s | 0.000778s | 0.000805s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000797s | 0.000783s | 0.000774s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000787s | 0.000781s | 0.000776s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000788s | 0.000780s | 0.000771s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000774s | 0.000772s | 0.000784s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000777s | 0.000787s | 0.000779s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000774s | 0.000778s | 0.000778s | byte equality observed |
| has_complement_test.test | 10 | 0.000800s | 0.000798s | 0.000781s | byte equality observed |
| has_dereference_test.test | 10 | 0.000792s | 0.000786s | 0.000776s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000803s | 0.000803s | 0.000798s | byte equality observed |
| has_divides_test.test | 10 | 0.000777s | 0.000792s | 0.000764s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000778s | 0.000785s | 0.000784s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000783s | 0.000799s | 0.000793s | byte equality observed |
| has_greater_test.test | 10 | 0.000763s | 0.000808s | 0.000789s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000798s | 0.000781s | 0.000801s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000783s | 0.000784s | 0.000809s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000763s | 0.000775s | 0.000802s | byte equality observed |
| has_less_test.test | 10 | 0.000789s | 0.000766s | 0.000788s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000786s | 0.000803s | 0.000800s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000784s | 0.000777s | 0.000807s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000787s | 0.000787s | 0.000767s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000797s | 0.000795s | 0.000757s | byte equality observed |
| has_minus_test.test | 10 | 0.000789s | 0.000789s | 0.000771s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000786s | 0.000786s | 0.000795s | byte equality observed |
| has_modulus_test.test | 10 | 0.000793s | 0.000772s | 0.000773s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000796s | 0.000779s | 0.000788s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000798s | 0.000778s | 0.000802s | byte equality observed |
| has_negate_test.test | 10 | 0.000784s | 0.000777s | 0.000780s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000798s | 0.000750s | 0.000795s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000776s | 0.000766s | 0.000783s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000784s | 0.000758s | 0.000799s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000788s | 0.000787s | 0.000805s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000790s | 0.000754s | 0.000788s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000791s | 0.000770s | 0.000813s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000780s | 0.000795s | 0.000805s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000786s | 0.000804s | 0.000774s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000780s | 0.000784s | 0.000780s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000789s | 0.000787s | 0.000782s | byte equality observed |
| has_plus_test.test | 10 | 0.000787s | 0.000799s | 0.000799s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000793s | 0.000794s | 0.000806s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000777s | 0.000785s | 0.000798s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000770s | 0.000775s | 0.000800s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000796s | 0.000762s | 0.000806s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000799s | 0.000796s | 0.000821s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000802s | 0.000764s | 0.000802s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000809s | 0.000786s | 0.000817s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000779s | 0.000777s | 0.000785s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000792s | 0.000789s | 0.000793s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000785s | 0.000778s | 0.000816s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000791s | 0.000781s | 0.000786s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000761s | 0.000781s | 0.000771s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000781s | 0.000798s | 0.000782s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000775s | 0.000789s | 0.000802s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000798s | 0.000810s | 0.000824s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000822s | 0.000848s | 0.000801s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000824s | 0.000841s | 0.000822s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000773s | 0.000745s | 0.000795s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000782s | 0.000756s | 0.000778s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000779s | 0.000780s | 0.000803s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000775s | 0.000775s | 0.000792s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000787s | 0.000780s | 0.000762s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000791s | 0.000774s | 0.000785s | byte equality observed |
| integral_constant_test.test | 10 | 0.000358s | 0.000363s | 0.000803s | byte equality observed |
| is_abstract_test.test | 10 | 0.000780s | 0.000790s | 0.000791s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000776s | 0.000786s | 0.000771s | byte equality observed |
| is_array_test.test | 10 | 0.000766s | 0.000769s | 0.000773s | byte equality observed |
| is_assignable_test.test | 10 | 0.000753s | 0.000763s | 0.000812s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000764s | 0.000770s | 0.000798s | byte equality observed |
| is_base_of_test.test | 10 | 0.000783s | 0.000777s | 0.000766s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000805s | 0.000766s | 0.000766s | byte equality observed |
| is_class_test.test | 10 | 0.000792s | 0.000774s | 0.000787s | byte equality observed |
| is_complete_test.test | 10 | 0.000778s | 0.000798s | 0.000773s | byte equality observed |
| is_complex_test.test | 10 | 0.000776s | 0.000771s | 0.000759s | byte equality observed |
| is_compound_test.test | 10 | 0.000789s | 0.000792s | 0.000773s | byte equality observed |
| is_const_test.test | 10 | 0.000776s | 0.000780s | 0.000795s | byte equality observed |
| is_constructible_test.test | 10 | 0.000798s | 0.000794s | 0.000781s | byte equality observed |
| is_convertible_test.test | 10 | 0.000777s | 0.000800s | 0.000815s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000771s | 0.000795s | 0.000817s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000769s | 0.000804s | 0.000803s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000783s | 0.000787s | 0.000795s | byte equality observed |
| is_destructible_test.test | 10 | 0.000815s | 0.000794s | 0.000815s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000790s | 0.000762s | 0.000801s | byte equality observed |
| is_detected_test.test | 10 | 0.000790s | 0.000780s | 0.000759s | byte equality observed |
| is_empty_test.test | 10 | 0.000791s | 0.000786s | 0.000773s | byte equality observed |
| is_enum_test.test | 10 | 0.000785s | 0.000779s | 0.000748s | byte equality observed |
| is_final_test.test | 10 | 0.000777s | 0.000770s | 0.000772s | byte equality observed |
| is_float_test.test | 10 | 0.000775s | 0.000805s | 0.000768s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000771s | 0.000769s | 0.000798s | byte equality observed |
| is_function_test.test | 10 | 0.000787s | 0.000766s | 0.000762s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000783s | 0.000770s | 0.000775s | byte equality observed |
| is_integral_test.test | 10 | 0.000784s | 0.000773s | 0.000787s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000784s | 0.000777s | 0.000785s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000781s | 0.000774s | 0.000811s | byte equality observed |
| is_member_func_test.test | 10 | 0.000777s | 0.000789s | 0.000797s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000781s | 0.000814s | 0.000816s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000790s | 0.000770s | 0.000801s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000792s | 0.000754s | 0.000807s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000796s | 0.000787s | 0.000805s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000787s | 0.000798s | 0.000764s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000786s | 0.000818s | 0.000766s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000763s | 0.000815s | 0.000769s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000767s | 0.000775s | 0.000785s | byte equality observed |
| is_object_test.test | 10 | 0.000778s | 0.000801s | 0.000795s | byte equality observed |
| is_pod_test.test | 10 | 0.000784s | 0.000773s | 0.000830s | byte equality observed |
| is_pointer_test.test | 10 | 0.000791s | 0.000775s | 0.000819s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000769s | 0.000784s | 0.000821s | byte equality observed |
| is_reference_test.test | 10 | 0.000792s | 0.000758s | 0.000813s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000788s | 0.000811s | 0.000786s | byte equality observed |
| is_same_test.test | 10 | 0.000791s | 0.000803s | 0.000787s | byte equality observed |
| is_scalar_test.test | 10 | 0.000808s | 0.000789s | 0.000783s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000793s | 0.000801s | 0.000791s | byte equality observed |
| is_signed_test.test | 10 | 0.000792s | 0.000760s | 0.000776s | byte equality observed |
| is_stateless_test.test | 10 | 0.000787s | 0.000780s | 0.000784s | byte equality observed |
| is_swappable_test.test | 10 | 0.000783s | 0.000757s | 0.000769s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000799s | 0.000786s | 0.000796s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000777s | 0.000791s | 0.000781s | byte equality observed |
| is_union_test.test | 10 | 0.000756s | 0.000789s | 0.000784s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000774s | 0.000808s | 0.000791s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000768s | 0.000798s | 0.000787s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000776s | 0.000785s | 0.000798s | byte equality observed |
| is_void_test.test | 10 | 0.000782s | 0.000771s | 0.000808s | byte equality observed |
| is_volatile_test.test | 10 | 0.000785s | 0.000765s | 0.000796s | byte equality observed |
| make_signed_test.test | 10 | 0.000785s | 0.000798s | 0.000765s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000808s | 0.000800s | 0.000799s | byte equality observed |
| make_void_test.test | 10 | 0.000795s | 0.000809s | 0.000794s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000361s | 0.000360s | 0.000806s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000360s | 0.000360s | 0.000761s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000362s | 0.000358s | 0.000789s | byte equality observed |
| negation_test.test | 10 | 0.000778s | 0.000782s | 0.000791s | byte equality observed |
| promote_basic_test.test | 10 | 0.000359s | 0.000354s | 0.000776s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000358s | 0.000359s | 0.000777s | byte equality observed |
| promote_enum_test.test | 10 | 0.000366s | 0.000359s | 0.000796s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000349s | 0.000354s | 0.000750s | byte equality observed |
| rank_test.test | 10 | 0.000771s | 0.000767s | 0.000771s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000797s | 0.000756s | 0.000756s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000805s | 0.000776s | 0.000768s | byte equality observed |
| remove_const_test.test | 10 | 0.000787s | 0.000795s | 0.000781s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000781s | 0.000807s | 0.000771s | byte equality observed |
| remove_cv_test.test | 10 | 0.000766s | 0.000795s | 0.000775s | byte equality observed |
| remove_extent_test.test | 10 | 0.000781s | 0.000779s | 0.000763s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000794s | 0.000796s | 0.000780s | byte equality observed |
| remove_reference_test.test | 10 | 0.000793s | 0.000790s | 0.000775s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000799s | 0.000765s | 0.000782s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000798s | 0.000778s | 0.000765s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000800s | 0.000787s | 0.000781s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000773s | 0.000779s | 0.000779s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000771s | 0.000821s | 0.000783s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000746s | 0.000794s | 0.000800s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000784s | 0.000775s | 0.000805s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000786s | 0.000785s | 0.000817s | byte equality observed |
| type_identity_test.test | 10 | 0.000811s | 0.000782s | 0.000788s | byte equality observed |
| type_traits_test.test | 10 | 0.000365s | 0.000367s | 0.000776s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000823s | 0.000843s | 0.000840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
