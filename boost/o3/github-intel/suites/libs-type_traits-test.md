# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.095728 | 0.277125 | 0.384309 | 0.001225 | 0.001281 | 0.001378 |
| type_traits_test.test | RUN | 0.131444 | 0.283275 | 0.379033 | 0.000602 | 0.000430 | 0.001176 |
| type_identity_test.test | RUN | 0.251364 | 0.961659 | 1.994112 | 0.001281 | 0.001298 | 0.001241 |
| tricky_rvalue_test.test | RUN | 0.088257 | 0.223988 | 0.295836 | 0.001322 | 0.001248 | 0.001127 |
| tricky_partial_spec_test.test | RUN | 0.109288 | 0.314738 | 0.467535 | 0.001273 | 0.001213 | 0.001223 |
| tricky_is_enum_test.test | RUN | 0.084921 | 0.206581 | 0.272252 | 0.001423 | 0.001374 | 0.001223 |
| tricky_incomplete_type_test.test | RUN | 0.135897 | 0.320846 | 0.460755 | 0.001247 | 0.001175 | 0.001350 |
| tricky_function_type_test.test | RUN | 0.115412 | 0.334453 | 0.515243 | 0.001204 | 0.001297 | 0.001170 |
| tricky_add_pointer_test.test | RUN | 0.171812 | 0.582206 | 1.157799 | 0.001144 | 0.001286 | 0.001194 |
| tricky_abstract_type_test.test | RUN | 0.089293 | 0.212106 | 0.286246 | 0.001285 | 0.001168 | 0.001321 |
| remove_volatile_test.test | RUN | 0.226785 | 0.832779 | 1.765992 | 0.001359 | 0.001259 | 0.001015 |
| remove_reference_test.test | RUN | 0.233637 | 0.870982 | 1.858378 | 0.001181 | 0.001293 | 0.001306 |
| remove_pointer_test.test | RUN | 0.242562 | 0.896632 | 1.954193 | 0.001682 | 0.001161 | 0.001373 |
| remove_extent_test.test | RUN | 0.232355 | 0.883556 | 1.862266 | 0.001380 | 0.001378 | 0.001300 |
| remove_cv_test.test | RUN | 0.233229 | 0.866406 | 1.871128 | 0.001286 | 0.001262 | 0.001312 |
| remove_cv_ref_test.test | RUN | 0.480948 | 2.192676 | 4.653569 | 0.001321 | 0.001145 | 0.001048 |
| remove_const_test.test | RUN | 0.228800 | 0.814892 | 1.769599 | 0.001345 | 0.001268 | 0.001194 |
| remove_bounds_test.test | RUN | 0.232903 | 0.881300 | 1.866311 | 0.001265 | 0.001328 | 0.001194 |
| remove_all_extents_test.test | RUN | 0.235267 | 0.867224 | 1.956356 | 0.001194 | 0.001170 | 0.001230 |
| rank_test.test | RUN | 0.091116 | 0.219648 | 0.289298 | 0.001277 | 0.001206 | 0.001221 |
| promote_mpl_test.test | RUN | 0.078715 | 0.193875 | 0.212266 | 0.000555 | 0.000525 | 0.001192 |
| promote_enum_test.test | RUN | 0.016649 | 0.047953 | 0.051706 | 0.000465 | 0.000601 | 0.001243 |
| promote_enum_msvc_bug_test.test | RUN | 0.015771 | 0.039710 | 0.044485 | 0.000430 | 0.000531 | 0.001415 |
| promote_basic_test.test | RUN | 0.019403 | 0.053372 | 0.052503 | 0.000526 | 0.000596 | 0.001136 |
| negation_test.test | RUN | 0.086436 | 0.212065 | 0.263518 | 0.001162 | 0.001224 | 0.001153 |
| mpl_interop_test3.test | RUN | 0.074563 | 0.181666 | 0.199835 | 0.000447 | 0.000501 | 0.001244 |
| mpl_interop_test2.test | RUN | 0.024575 | 0.051188 | 0.055760 | 0.000487 | 0.000458 | 0.001316 |
| mpl_interop_test1.test | RUN | 0.014580 | 0.039508 | 0.036573 | 0.000583 | 0.000539 | 0.001104 |
| make_void_test.test | RUN | 0.089306 | 0.219096 | 0.301833 | 0.001339 | 0.001240 | 0.001253 |
| make_unsigned_test.test | RUN | 0.103736 | 0.289835 | 0.421704 | 0.001177 | 0.001144 | 0.001212 |
| make_signed_test.test | RUN | 0.101691 | 0.289849 | 0.401336 | 0.001459 | 0.001334 | 0.001140 |
| is_volatile_test.test | RUN | 0.094927 | 0.242788 | 0.348897 | 0.001127 | 0.001122 | 0.001262 |
| is_void_test.test | RUN | 0.088776 | 0.232060 | 0.315833 | 0.001284 | 0.001292 | 0.001204 |
| is_virtual_base_of_test.test | RUN | 0.102576 | 0.292407 | 0.429335 | 0.001519 | 0.001278 | 0.001079 |
| is_unsigned_test.test | RUN | 0.090866 | 0.229550 | 0.331170 | 0.001276 | 0.001117 | 0.001060 |
| is_unscoped_enum_test.test | RUN | 0.088220 | 0.206545 | 0.281033 | 0.001242 | 0.001207 | 0.001276 |
| is_union_test.test | RUN | 0.095300 | 0.265870 | 0.383202 | 0.001279 | 0.001171 | 0.001219 |
| is_unbounded_array_test.test | RUN | 0.089641 | 0.229855 | 0.312145 | 0.001177 | 0.001332 | 0.001189 |
| is_trivially_copyable_test.test | RUN | 0.141848 | 0.474962 | 0.790818 | 0.001312 | 0.001316 | 0.001206 |
| is_swappable_test.test | RUN | 0.118753 | 0.361059 | 0.593381 | 0.001163 | 0.001435 | 0.001149 |
| is_stateless_test.test | RUN | 0.134521 | 0.414071 | 0.654313 | 0.001151 | 0.001239 | 0.001376 |
| is_signed_test.test | RUN | 0.091493 | 0.242856 | 0.334588 | 0.001332 | 0.001457 | 0.001170 |
| is_scoped_enum_test.test | RUN | 0.089627 | 0.211923 | 0.286524 | 0.001422 | 0.001238 | 0.001416 |
| is_scalar_test.test | RUN | 0.119120 | 0.378804 | 0.582144 | 0.001141 | 0.001341 | 0.001434 |
| is_same_test.test | RUN | 0.092523 | 0.227996 | 0.311625 | 0.001072 | 0.001384 | 0.001190 |
| is_rvalue_reference_test.test | RUN | 0.095558 | 0.254641 | 0.353720 | 0.001077 | 0.001251 | 0.001121 |
| is_reference_test.test | RUN | 0.095610 | 0.254425 | 0.369757 | 0.001149 | 0.001359 | 0.001270 |
| is_polymorphic_test.test | RUN | 0.099681 | 0.269828 | 0.392135 | 0.001288 | 0.001222 | 0.001298 |
| is_pointer_test.test | RUN | 0.093373 | 0.258653 | 0.384511 | 0.001350 | 0.001346 | 0.001476 |
| is_pod_test.test | RUN | 0.123186 | 0.418300 | 0.671333 | 0.001254 | 0.001244 | 0.001226 |
| is_object_test.test | RUN | 0.088788 | 0.217429 | 0.295503 | 0.001049 | 0.001136 | 0.001380 |
| is_nothrow_swappable_test.test | RUN | 0.127462 | 0.395086 | 0.630716 | 0.001228 | 0.001207 | 0.001339 |
| is_nothrow_move_constructible_test.test | RUN | 0.121096 | 0.401850 | 0.665476 | 0.001221 | 0.001144 | 0.001226 |
| is_nothrow_move_assignable_test.test | RUN | 0.122407 | 0.412914 | 0.658033 | 0.001057 | 0.001347 | 0.001301 |
| is_noncopyable_test.test | RUN | 0.089987 | 0.221429 | 0.294590 | 0.001248 | 0.001224 | 0.001185 |
| is_member_pointer_test.test | RUN | 0.089380 | 0.225483 | 0.301966 | 0.001159 | 0.001374 | 0.001191 |
| is_member_obj_test.test | RUN | 0.089765 | 0.228648 | 0.313076 | 0.001399 | 0.001306 | 0.001299 |
| is_member_func_test.test | RUN | 0.094323 | 0.242007 | 0.339979 | 0.001183 | 0.001303 | 0.001234 |
| is_lvalue_reference_test.test | RUN | 0.093738 | 0.256571 | 0.359471 | 0.001191 | 0.001290 | 0.001235 |
| is_list_constructible_test.test | RUN | 0.113707 | 0.298980 | 0.398423 | 0.001225 | 0.001309 | 0.001206 |
| is_integral_test.test | RUN | 0.108941 | 0.349921 | 0.548978 | 0.001180 | 0.001376 | 0.001004 |
| is_fundamental_test.test | RUN | 0.111742 | 0.367456 | 0.580735 | 0.001162 | 0.001192 | 0.001188 |
| is_function_test.test | RUN | 0.091690 | 0.239478 | 0.342919 | 0.001212 | 0.001182 | 0.001175 |
| is_floating_point_test.test | RUN | 0.096174 | 0.258825 | 0.363596 | 0.001127 | 0.001093 | 0.001157 |
| is_float_test.test | RUN | 0.092916 | 0.256848 | 0.373992 | 0.001240 | 0.001216 | 0.001167 |
| is_final_test.test | RUN | 0.094835 | 0.261708 | 0.380246 | 0.001212 | 0.001125 | 0.001068 |
| is_enum_test.test | RUN | 0.087634 | 0.221209 | 0.302303 | 0.001206 | 0.001170 | 0.001164 |
| is_empty_test.test | RUN | 0.097496 | 0.243265 | 0.338661 | 0.001225 | 0.001462 | 0.001168 |
| is_detected_test.test | RUN | 0.085418 | 0.202550 | 0.281410 | 0.001291 | 0.001112 | 0.001169 |
| is_detected_exact_test.test | RUN | 0.087364 | 0.203903 | 0.275828 | 0.001185 | 0.001218 | 0.001331 |
| is_destructible_test.test | RUN | 0.120210 | 0.390830 | 0.645147 | 0.001054 | 0.001249 | 0.001353 |
| is_default_constr_test.test | RUN | 0.124789 | 0.418624 | 0.654765 | 0.001193 | 0.001209 | 0.001233 |
| is_copy_constructible_test.test | RUN | 0.125277 | 0.431586 | 0.712168 | 0.001392 | 0.001270 | 0.001200 |
| is_copy_assignable_test.test | RUN | 0.124118 | 0.423873 | 0.690491 | 0.001250 | 0.001107 | 0.001146 |
| is_convertible_test.test | RUN | 0.123316 | 0.383523 | 0.574033 | 0.001142 | 0.001267 | 0.001330 |
| is_constructible_test.test | RUN | 0.103841 | 0.279496 | 0.402366 | 0.001190 | 0.001182 | 0.001184 |
| is_const_test.test | RUN | 0.093983 | 0.241400 | 0.323995 | 0.001157 | 0.001185 | 0.001190 |
| is_compound_test.test | RUN | 0.084664 | 0.215798 | 0.274550 | 0.001216 | 0.001254 | 0.001273 |
| is_complex_test.test | RUN | 0.117198 | 0.281950 | 0.374790 | 0.001216 | 0.001486 | 0.001291 |
| is_complete_test.test | RUN | 0.102312 | 0.286428 | 0.433074 | 0.001246 | 0.001166 | 0.001180 |
| is_class_test.test | RUN | 0.094431 | 0.250300 | 0.363694 | 0.001220 | 0.001252 | 0.001178 |
| is_bounded_array_test.test | RUN | 0.089039 | 0.229338 | 0.307525 | 0.001156 | 0.001263 | 0.001213 |
| is_base_of_test.test | RUN | 0.097827 | 0.252099 | 0.350951 | 0.001284 | 0.001388 | 0.001210 |
| is_base_and_derived_test.test | RUN | 0.093227 | 0.245430 | 0.348149 | 0.001174 | 0.001207 | 0.001195 |
| is_assignable_test.test | RUN | 0.111638 | 0.347551 | 0.520458 | 0.001159 | 0.001362 | 0.001213 |
| is_array_test.test | RUN | 0.089584 | 0.242625 | 0.344257 | 0.001208 | 0.001117 | 0.001328 |
| is_arithmetic_test.test | RUN | 0.110539 | 0.354573 | 0.542269 | 0.001220 | 0.001330 | 0.001367 |
| is_abstract_test.test | RUN | 0.203500 | 0.952297 | 1.979665 | 0.001235 | 0.001450 | 0.001129 |
| integral_constant_test.test | RUN | 0.013596 | 0.036408 | 0.041240 | 0.000467 | 0.000561 | 0.001227 |
| has_virtual_destructor_test.test | RUN | 0.098032 | 0.275417 | 0.412593 | 0.001286 | 0.001372 | 0.001288 |
| has_unary_plus_test.test | RUN | 0.186045 | 0.991810 | 1.479693 | 0.001313 | 0.001226 | 0.001117 |
| has_unary_minus_test.test | RUN | 0.187829 | 0.972478 | 1.461468 | 0.001279 | 0.001267 | 0.001326 |
| has_trivial_move_constructor_test.test | RUN | 0.126304 | 0.425337 | 0.698316 | 0.001096 | 0.001198 | 0.001349 |
| has_trivial_move_assign_test.test | RUN | 0.129572 | 0.412569 | 0.658306 | 0.001342 | 0.001236 | 0.001398 |
| has_trivial_destructor_test.test | RUN | 0.127499 | 0.421841 | 0.690625 | 0.001212 | 0.001331 | 0.001137 |
| has_trivial_copy_test.test | RUN | 0.128979 | 0.439900 | 0.720962 | 0.001184 | 0.001519 | 0.001229 |
| has_trivial_constr_test.test | RUN | 0.129086 | 0.447024 | 0.706889 | 0.001196 | 0.001267 | 0.001283 |
| has_trivial_assign_test.test | RUN | 0.130386 | 0.442554 | 0.676801 | 0.001201 | 0.001344 | 0.001259 |
| has_right_shift_test.test | RUN | 0.196344 | 0.806360 | 1.605700 | 0.001151 | 0.001217 | 0.001194 |
| has_right_shift_assign_test.test | RUN | 0.184602 | 0.757241 | 1.488712 | 0.001192 | 0.001284 | 0.001223 |
| has_prefix_classes3_test.test | RUN | 0.134318 | 0.452445 | 0.720968 | 0.001385 | 0.001256 | 0.001310 |
| has_prefix_classes2_test.test | RUN | 0.136213 | 0.448414 | 0.718296 | 0.001166 | 0.001332 | 0.001366 |
| has_prefix_classes1_test.test | RUN | 0.139040 | 0.457886 | 0.729645 | 0.001196 | 0.001304 | 0.001211 |
| has_prefix_classes0_test.test | RUN | 0.136000 | 0.452270 | 0.726664 | 0.001228 | 0.001202 | 0.001234 |
| has_pre_increment_test.test | RUN | 0.185621 | 1.008800 | 1.492509 | 0.001185 | 0.001401 | 0.001067 |
| has_pre_decrement_test.test | RUN | 0.187880 | 0.997939 | 1.491921 | 0.001199 | 0.001183 | 0.000904 |
| has_postfix_classes3_test.test | RUN | 0.139475 | 0.443775 | 0.739862 | 0.001048 | 0.001217 | 0.001284 |
| has_postfix_classes2_test.test | RUN | 0.138324 | 0.437805 | 0.717577 | 0.001215 | 0.001259 | 0.001236 |
| has_postfix_classes1_test.test | RUN | 0.141417 | 0.444973 | 0.729962 | 0.001157 | 0.001056 | 0.001314 |
| has_postfix_classes0_test.test | RUN | 0.140746 | 0.443696 | 0.745301 | 0.001136 | 0.001055 | 0.001271 |
| has_post_increment_test.test | RUN | 0.185925 | 0.999128 | 1.488906 | 0.000879 | 0.001435 | 0.001216 |
| has_post_decrement_test.test | RUN | 0.185333 | 1.018502 | 1.469512 | 0.001262 | 0.000968 | 0.001280 |
| has_plus_test.test | RUN | 0.187548 | 0.752239 | 1.451701 | 0.001197 | 0.001155 | 0.001175 |
| has_plus_assign_test.test | RUN | 0.195473 | 0.763860 | 1.482120 | 0.001163 | 0.000841 | 0.001174 |
| has_operator_new_test.test | RUN | 0.123681 | 0.399073 | 0.651772 | 0.001357 | 0.001282 | 0.000996 |
| has_nothrow_destructor_test.test | RUN | 0.128292 | 0.446225 | 0.704528 | 0.001151 | 0.001184 | 0.001022 |
| has_nothrow_copy_test.test | RUN | 0.128558 | 0.415280 | 0.674920 | 0.001322 | 0.001063 | 0.001212 |
| has_nothrow_constr_test.test | RUN | 0.122126 | 0.406144 | 0.684405 | 0.001203 | 0.001073 | 0.001210 |
| has_nothrow_assign_test.test | RUN | 0.122112 | 0.416153 | 0.647712 | 0.001530 | 0.001247 | 0.001256 |
| has_not_equal_to_test.test | RUN | 0.187904 | 0.960325 | 1.501317 | 0.001148 | 0.001279 | 0.001274 |
| has_negate_test.test | RUN | 0.182902 | 0.723593 | 1.420826 | 0.001536 | 0.001403 | 0.001209 |
| has_multiplies_test.test | RUN | 0.185651 | 0.752956 | 1.459104 | 0.001286 | 0.001106 | 0.001114 |
| has_multiplies_assign_test.test | RUN | 0.188398 | 0.745889 | 1.444327 | 0.001399 | 0.001253 | 0.001204 |
| has_modulus_test.test | RUN | 0.187548 | 0.761327 | 1.448470 | 0.001157 | 0.001421 | 0.001283 |
| has_modulus_assign_test.test | RUN | 0.186598 | 0.774496 | 1.458111 | 0.001473 | 0.001102 | 0.001135 |
| has_minus_test.test | RUN | 0.191794 | 0.768894 | 1.464683 | 0.001194 | 0.001287 | 0.001277 |
| has_minus_assign_test.test | RUN | 0.192858 | 0.762755 | 1.475887 | 0.001518 | 0.001426 | 0.001181 |
| has_logical_or_test.test | RUN | 0.188830 | 0.768563 | 1.462683 | 0.001120 | 0.001426 | 0.001194 |
| has_logical_not_test.test | RUN | 0.183177 | 0.747256 | 1.431012 | 0.001329 | 0.001318 | 0.001353 |
| has_logical_and_test.test | RUN | 0.184762 | 0.775696 | 1.475483 | 0.001232 | 0.001224 | 0.001242 |
| has_less_test.test | RUN | 0.191293 | 0.954322 | 1.465010 | 0.001317 | 0.001320 | 0.001213 |
| has_less_equal_test.test | RUN | 0.187718 | 0.964281 | 1.451572 | 0.001340 | 0.001368 | 0.001260 |
| has_left_shift_test.test | RUN | 0.208676 | 0.963128 | 1.842420 | 0.001249 | 0.001189 | 0.001170 |
| has_left_shift_assign_test.test | RUN | 0.188232 | 0.743335 | 1.475372 | 0.001191 | 0.001289 | 0.001190 |
| has_greater_test.test | RUN | 0.189553 | 0.958612 | 1.443448 | 0.001328 | 0.001522 | 0.001203 |
| has_greater_equal_test.test | RUN | 0.189221 | 0.961920 | 1.456554 | 0.001131 | 0.001209 | 0.001288 |
| has_equal_to_test.test | RUN | 0.187838 | 0.967340 | 1.505353 | 0.001398 | 0.000955 | 0.001114 |
| has_divides_test.test | RUN | 0.189021 | 0.768157 | 1.439237 | 0.001259 | 0.001514 | 0.001110 |
| has_divides_assign_test.test | RUN | 0.191441 | 0.736138 | 1.490000 | 0.001441 | 0.001380 | 0.001153 |
| has_dereference_test.test | RUN | 0.184737 | 0.736990 | 1.387569 | 0.001307 | 0.001412 | 0.001315 |
| has_complement_test.test | RUN | 0.183668 | 0.966876 | 1.428276 | 0.001171 | 0.001275 | 0.001246 |
| has_bit_xor_test.test | RUN | 0.182930 | 0.763540 | 1.493255 | 0.001186 | 0.001411 | 0.001126 |
| has_bit_xor_assign_test.test | RUN | 0.186963 | 0.756898 | 1.500914 | 0.001593 | 0.001355 | 0.001190 |
| has_bit_or_test.test | RUN | 0.186416 | 0.741655 | 1.431328 | 0.001422 | 0.001371 | 0.001376 |
| has_bit_or_assign_test.test | RUN | 0.183955 | 0.764229 | 1.436190 | 0.001329 | 0.001244 | 0.001366 |
| has_bit_and_test.test | RUN | 0.184432 | 0.754420 | 1.506075 | 0.001231 | 0.001194 | 0.001066 |
| has_bit_and_assign_test.test | RUN | 0.189201 | 0.751888 | 1.494325 | 0.001352 | 0.001402 | 0.001176 |
| has_binary_classes9_test.test | RUN | 0.203407 | 0.903601 | 1.637408 | 0.001283 | 0.001342 | 0.001347 |
| has_binary_classes8_test.test | RUN | 0.206724 | 0.906157 | 1.633430 | 0.001416 | 0.001236 | 0.001236 |
| has_binary_classes7_test.test | RUN | 0.208684 | 0.888594 | 1.701583 | 0.001201 | 0.001092 | 0.001313 |
| has_binary_classes6_test.test | RUN | 0.204376 | 0.867580 | 1.710693 | 0.001136 | 0.001401 | 0.001170 |
| has_binary_classes5_test.test | RUN | 0.203665 | 0.880614 | 1.652369 | 0.001184 | 0.001296 | 0.001363 |
| has_binary_classes4_test.test | RUN | 0.205597 | 0.897340 | 1.634598 | 0.001409 | 0.001239 | 0.001342 |
| has_binary_classes3_test.test | RUN | 0.207646 | 0.901399 | 1.746352 | 0.001284 | 0.001222 | 0.001089 |
| has_binary_classes2_test.test | RUN | 0.206238 | 0.913115 | 1.751772 | 0.001592 | 0.001351 | 0.001143 |
| has_binary_classes1_test.test | RUN | 0.204024 | 0.903208 | 1.647071 | 0.001285 | 0.001137 | 0.001297 |
| has_binary_classes0_test.test | RUN | 0.206905 | 0.924105 | 1.654373 | 0.001328 | 0.001220 | 0.001260 |
| function_traits_test.test | RUN | 0.093789 | 0.239790 | 0.347529 | 0.001317 | 0.001271 | 0.001081 |
| floating_point_promotion_test.test | RUN | 0.095719 | 0.234240 | 0.323483 | 0.001377 | 0.001266 | 0.001183 |
| extent_test.test | RUN | 0.090797 | 0.243354 | 0.340320 | 0.001124 | 0.001362 | 0.001186 |
| enable_if_test.test | RUN | 0.084776 | 0.203173 | 0.271515 | 0.001270 | 0.001284 | 0.001163 |
| disjunction_test.test | RUN | 0.091473 | 0.208949 | 0.282849 | 0.001490 | 0.001138 | 0.001441 |
| detected_test.test | RUN | 0.090686 | 0.200038 | 0.266799 | 0.001507 | 0.001269 | 0.001140 |
| detected_or_test.test | RUN | 0.088760 | 0.212240 | 0.284240 | 0.001327 | 0.001393 | 0.001133 |
| decay_test.test | RUN | 0.229468 | 0.814413 | 1.583083 | 0.001348 | 0.001307 | 0.001306 |
| cxx14_aliases_test.test | RUN | 0.144540 | 0.306426 | 0.451711 | 0.001230 | 0.001395 | 0.001239 |
| copy_reference_test.test | RUN | 0.092053 | 0.214202 | 0.283700 | 0.001298 | 0.001352 | 0.001388 |
| copy_cv_test.test | RUN | 0.093629 | 0.221408 | 0.307993 | 0.001296 | 0.001283 | 0.001111 |
| copy_cv_ref_test.test | RUN | 0.129253 | 0.365604 | 0.650226 | 0.001280 | 0.001317 | 0.001240 |
| conjunction_test.test | RUN | 0.091596 | 0.213048 | 0.294457 | 0.001265 | 0.001340 | 0.001352 |
| conditional_test.test | RUN | 0.087338 | 0.210915 | 0.280555 | 0.001251 | 0.001176 | 0.001189 |
| common_type_test.test | RUN | 0.120130 | 0.321971 | 0.527422 | 0.001350 | 0.001326 | 0.001144 |
| common_type_sfinae_test.test | RUN | 0.090523 | 0.199918 | 0.256219 | 0.001435 | 0.001210 | 0.001402 |
| common_type_sfinae2_test.test | RUN | 0.090124 | 0.216434 | 0.276765 | 0.001498 | 0.001271 | 0.001146 |
| common_type_6_test.test | RUN | 0.092563 | 0.212370 | 0.290299 | 0.001335 | 0.001174 | 0.001196 |
| common_type_5_test.test | RUN | 0.095621 | 0.212368 | 0.289939 | 0.001290 | 0.001353 | 0.001248 |
| common_type_4_test.test | RUN | 0.100943 | 0.233044 | 0.330346 | 0.001216 | 0.001159 | 0.001191 |
| common_type_3_test.test | RUN | 0.088098 | 0.197349 | 0.258692 | 0.001178 | 0.001286 | 0.001127 |
| common_type_2_test.test | RUN | 0.118711 | 0.321441 | 0.530624 | 0.001595 | 0.001325 | 0.001171 |
| alignment_of_test.test | RUN | 0.095534 | 0.257078 | 0.338586 | 0.001179 | 0.001387 | 0.001297 |
| alignment_of_a2_test.test | RUN | 0.094133 | 0.251768 | 0.338883 | 0.001225 | 0.000895 | 0.001267 |
| aligned_storage_test.test | RUN | 0.098000 | 0.251793 | 0.324382 | 0.001060 | 0.001294 | 0.001346 |
| aligned_storage_empy_test.test | RUN | 0.111152 | 0.279617 | 0.425576 | 0.001306 | 0.001227 | 0.001043 |
| aligned_storage_a2_test.test | RUN | 0.096867 | 0.247124 | 0.320030 | 0.001281 | 0.001353 | 0.001265 |
| add_volatile_test.test | RUN | 0.201965 | 0.715915 | 1.509986 | 0.001436 | 0.001275 | 0.001240 |
| add_rvalue_reference_test.test | RUN | 0.227231 | 0.803091 | 1.720991 | 0.001313 | 0.001327 | 0.001261 |
| add_reference_test.test | RUN | 0.221971 | 0.805196 | 1.676834 | 0.001431 | 0.001332 | 0.001205 |
| add_pointer_test.test | RUN | 0.142855 | 0.457270 | 0.880993 | 0.001383 | 0.001175 | 0.001228 |
| add_lvalue_reference_test.test | RUN | 0.225613 | 0.789454 | 1.685811 | 0.001363 | 0.001324 | 0.001486 |
| add_cv_test.test | RUN | 0.214065 | 0.753708 | 1.555822 | 0.001255 | 0.001246 | 0.001363 |
| add_const_test.test | RUN | 0.211646 | 0.739512 | 1.592202 | 0.001252 | 0.001124 | 0.001316 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.082807 | 0.199170 | 0.259637 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.088645 | 0.198607 | 0.262545 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.081359 | 0.187799 | 0.258133 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.082665 | 0.183951 | 0.247979 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.083164 | 0.191940 | 0.254068 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081976 | 0.189396 | 0.247963 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.083557 | 0.192442 | 0.246745 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.081298 | 0.184511 | 0.246462 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.081622 | 0.189936 | 0.248905 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.083979 | 0.190887 | 0.247579 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081405 | 0.188701 | 0.247749 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082611 | 0.190357 | 0.251028 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082927 | 0.192642 | 0.250816 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.083713 | 0.191597 | 0.255951 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.081698 | 0.189623 | 0.245049 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.082456 | 0.189403 | 0.252419 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.082421 | 0.190575 | 0.247890 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.084314 | 0.191561 | 0.255858 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.083788 | 0.189426 | 0.248060 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.081640 | 0.190807 | 0.251759 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.083222 | 0.189460 | 0.249093 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.084619 | 0.191494 | 0.252624 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.127010 | 0.403063 | 0.686000 | 0.001073 | 0.001362 | 0.001368 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.122786 | 0.406799 | 0.672087 | 0.001181 | 0.001245 | 0.001339 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.125657 | 0.416921 | 0.688930 | 0.001480 | 0.001124 | 0.001236 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.129598 | 0.403727 | 0.677924 | 0.000880 | 0.001378 | 0.000882 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.082399 | 0.285914 | 0.413125 | 0.001015 | 0.000901 | 0.000846 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.996×, 1.000× | 1.008× |
| clang | 1.030× | 1.025×, 1.036× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000804s | 0.000784s | 0.000780s | byte equality observed |
| add_cv_test.test | 10 | 0.000804s | 0.000793s | 0.000801s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000801s | 0.000824s | 0.000797s | byte equality observed |
| add_pointer_test.test | 10 | 0.000785s | 0.000801s | 0.000777s | byte equality observed |
| add_reference_test.test | 10 | 0.000789s | 0.000821s | 0.000780s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000805s | 0.000820s | 0.000763s | byte equality observed |
| add_volatile_test.test | 10 | 0.000807s | 0.000830s | 0.000775s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000834s | 0.000847s | 0.000828s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000788s | 0.000793s | 0.000801s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000845s | 0.000838s | 0.000840s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000801s | 0.000806s | 0.000803s | byte equality observed |
| alignment_of_test.test | 10 | 0.000789s | 0.000823s | 0.000782s | byte equality observed |
| common_type_2_test.test | 10 | 0.000789s | 0.000793s | 0.000782s | byte equality observed |
| common_type_3_test.test | 10 | 0.000783s | 0.000821s | 0.000804s | byte equality observed |
| common_type_4_test.test | 10 | 0.000800s | 0.000831s | 0.000799s | byte equality observed |
| common_type_5_test.test | 10 | 0.000799s | 0.000791s | 0.000765s | byte equality observed |
| common_type_6_test.test | 10 | 0.000795s | 0.000795s | 0.000776s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000807s | 0.000787s | 0.000784s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000802s | 0.000776s | 0.000800s | byte equality observed |
| common_type_test.test | 10 | 0.000812s | 0.000809s | 0.000808s | byte equality observed |
| conditional_test.test | 10 | 0.000822s | 0.000825s | 0.000782s | byte equality observed |
| conjunction_test.test | 10 | 0.000777s | 0.000823s | 0.000805s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000785s | 0.000803s | 0.000789s | byte equality observed |
| copy_cv_test.test | 10 | 0.000793s | 0.000790s | 0.000770s | byte equality observed |
| copy_reference_test.test | 10 | 0.000774s | 0.000808s | 0.000783s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000787s | 0.000796s | 0.000786s | byte equality observed |
| decay_test.test | 10 | 0.000814s | 0.000822s | 0.000786s | byte equality observed |
| detected_or_test.test | 10 | 0.000790s | 0.000780s | 0.000791s | byte equality observed |
| detected_test.test | 10 | 0.000799s | 0.000788s | 0.000788s | byte equality observed |
| disjunction_test.test | 10 | 0.000787s | 0.000798s | 0.000785s | byte equality observed |
| enable_if_test.test | 10 | 0.000805s | 0.000802s | 0.000816s | byte equality observed |
| extent_test.test | 10 | 0.000818s | 0.000817s | 0.000792s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000823s | 0.000787s | 0.000787s | byte equality observed |
| function_traits_test.test | 10 | 0.000810s | 0.000818s | 0.000784s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000799s | 0.000809s | 0.000787s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000801s | 0.000803s | 0.000795s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000801s | 0.000799s | 0.000795s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000781s | 0.000805s | 0.000809s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000789s | 0.000799s | 0.000824s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000794s | 0.000817s | 0.000808s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000796s | 0.000811s | 0.000811s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000799s | 0.000797s | 0.000800s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000788s | 0.000806s | 0.000779s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000803s | 0.000811s | 0.000796s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000828s | 0.000797s | 0.000783s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000815s | 0.000835s | 0.000822s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000804s | 0.000807s | 0.000790s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000791s | 0.000796s | 0.000793s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000787s | 0.000808s | 0.000793s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000806s | 0.000801s | 0.000797s | byte equality observed |
| has_complement_test.test | 10 | 0.000789s | 0.000802s | 0.000798s | byte equality observed |
| has_dereference_test.test | 10 | 0.000790s | 0.000816s | 0.000796s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000779s | 0.000819s | 0.000799s | byte equality observed |
| has_divides_test.test | 10 | 0.000805s | 0.000834s | 0.000815s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000786s | 0.000831s | 0.000783s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000811s | 0.000815s | 0.000775s | byte equality observed |
| has_greater_test.test | 10 | 0.000791s | 0.000801s | 0.000798s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000781s | 0.000827s | 0.000788s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000795s | 0.000809s | 0.000804s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000789s | 0.000829s | 0.000780s | byte equality observed |
| has_less_test.test | 10 | 0.000792s | 0.000828s | 0.000795s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000814s | 0.000767s | 0.000805s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000789s | 0.000771s | 0.000790s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000793s | 0.000782s | 0.000812s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000812s | 0.000788s | 0.000800s | byte equality observed |
| has_minus_test.test | 10 | 0.000782s | 0.000814s | 0.000817s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000780s | 0.000797s | 0.000822s | byte equality observed |
| has_modulus_test.test | 10 | 0.000782s | 0.000825s | 0.000781s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000790s | 0.000801s | 0.000785s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000801s | 0.000784s | 0.000772s | byte equality observed |
| has_negate_test.test | 10 | 0.000785s | 0.000822s | 0.000794s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000798s | 0.000779s | 0.000777s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000785s | 0.000813s | 0.000771s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000793s | 0.000796s | 0.000793s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000798s | 0.000805s | 0.000774s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000804s | 0.000816s | 0.000802s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000789s | 0.000809s | 0.000803s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000776s | 0.000796s | 0.000801s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000794s | 0.000800s | 0.000808s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000785s | 0.000803s | 0.000793s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000791s | 0.000805s | 0.000785s | byte equality observed |
| has_plus_test.test | 10 | 0.000814s | 0.000797s | 0.000797s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000813s | 0.000793s | 0.000789s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000819s | 0.000823s | 0.000820s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000809s | 0.000830s | 0.000815s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000787s | 0.000809s | 0.000812s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000803s | 0.000822s | 0.000799s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000778s | 0.000798s | 0.000789s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000795s | 0.000772s | 0.000785s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000788s | 0.000774s | 0.000779s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000790s | 0.000781s | 0.000816s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000791s | 0.000782s | 0.000817s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000810s | 0.000781s | 0.000790s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000803s | 0.000773s | 0.000783s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000794s | 0.000784s | 0.000812s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000818s | 0.000779s | 0.000821s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000816s | 0.000792s | 0.000814s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000847s | 0.000835s | 0.000839s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000838s | 0.000825s | 0.000829s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000808s | 0.000792s | 0.000780s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000794s | 0.000798s | 0.000792s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000782s | 0.000781s | 0.000776s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000787s | 0.000780s | 0.000806s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000805s | 0.000797s | 0.000782s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000799s | 0.000809s | 0.000797s | byte equality observed |
| integral_constant_test.test | 10 | 0.000365s | 0.000361s | 0.000803s | byte equality observed |
| is_abstract_test.test | 10 | 0.000792s | 0.000792s | 0.000795s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000791s | 0.000811s | 0.000812s | byte equality observed |
| is_array_test.test | 10 | 0.000804s | 0.000795s | 0.000822s | byte equality observed |
| is_assignable_test.test | 10 | 0.000783s | 0.000777s | 0.000822s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000782s | 0.000772s | 0.000814s | byte equality observed |
| is_base_of_test.test | 10 | 0.000800s | 0.000779s | 0.000793s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000807s | 0.000801s | 0.000808s | byte equality observed |
| is_class_test.test | 10 | 0.000785s | 0.000792s | 0.000809s | byte equality observed |
| is_complete_test.test | 10 | 0.000783s | 0.000773s | 0.000808s | byte equality observed |
| is_complex_test.test | 10 | 0.000782s | 0.000781s | 0.000781s | byte equality observed |
| is_compound_test.test | 10 | 0.000795s | 0.000814s | 0.000783s | byte equality observed |
| is_const_test.test | 10 | 0.000798s | 0.000815s | 0.000808s | byte equality observed |
| is_constructible_test.test | 10 | 0.000771s | 0.000797s | 0.000795s | byte equality observed |
| is_convertible_test.test | 10 | 0.000781s | 0.000811s | 0.000775s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000798s | 0.000788s | 0.000799s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000809s | 0.000804s | 0.000801s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000785s | 0.000782s | 0.000788s | byte equality observed |
| is_destructible_test.test | 10 | 0.000789s | 0.000809s | 0.000803s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000777s | 0.000782s | 0.000800s | byte equality observed |
| is_detected_test.test | 10 | 0.000806s | 0.000800s | 0.000793s | byte equality observed |
| is_empty_test.test | 10 | 0.000813s | 0.000819s | 0.000798s | byte equality observed |
| is_enum_test.test | 10 | 0.000779s | 0.000789s | 0.000779s | byte equality observed |
| is_final_test.test | 10 | 0.000797s | 0.000802s | 0.000788s | byte equality observed |
| is_float_test.test | 10 | 0.000779s | 0.000803s | 0.000791s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000797s | 0.000757s | 0.000812s | byte equality observed |
| is_function_test.test | 10 | 0.000793s | 0.000789s | 0.000840s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000829s | 0.000793s | 0.000798s | byte equality observed |
| is_integral_test.test | 10 | 0.000793s | 0.000783s | 0.000806s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000779s | 0.000759s | 0.000799s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000787s | 0.000786s | 0.000810s | byte equality observed |
| is_member_func_test.test | 10 | 0.000796s | 0.000788s | 0.000805s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000792s | 0.000761s | 0.000809s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000781s | 0.000795s | 0.000809s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000791s | 0.000793s | 0.000828s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000800s | 0.000803s | 0.000791s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000800s | 0.000804s | 0.000795s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000795s | 0.000783s | 0.000786s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000768s | 0.000793s | 0.000813s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000783s | 0.000824s | 0.000826s | byte equality observed |
| is_object_test.test | 10 | 0.000801s | 0.000807s | 0.000793s | byte equality observed |
| is_pod_test.test | 10 | 0.000812s | 0.000830s | 0.000780s | byte equality observed |
| is_pointer_test.test | 10 | 0.000814s | 0.000821s | 0.000806s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000805s | 0.000815s | 0.000799s | byte equality observed |
| is_reference_test.test | 10 | 0.000799s | 0.000826s | 0.000809s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000800s | 0.000803s | 0.000814s | byte equality observed |
| is_same_test.test | 10 | 0.000804s | 0.000804s | 0.000806s | byte equality observed |
| is_scalar_test.test | 10 | 0.000810s | 0.000787s | 0.000800s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000800s | 0.000789s | 0.000813s | byte equality observed |
| is_signed_test.test | 10 | 0.000778s | 0.000785s | 0.000804s | byte equality observed |
| is_stateless_test.test | 10 | 0.000793s | 0.000795s | 0.000795s | byte equality observed |
| is_swappable_test.test | 10 | 0.000813s | 0.000790s | 0.000815s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000805s | 0.000816s | 0.000819s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000785s | 0.000788s | 0.000803s | byte equality observed |
| is_union_test.test | 10 | 0.000800s | 0.000789s | 0.000804s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000831s | 0.000797s | 0.000825s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000790s | 0.000796s | 0.000809s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000786s | 0.000795s | 0.000795s | byte equality observed |
| is_void_test.test | 10 | 0.000799s | 0.000807s | 0.000786s | byte equality observed |
| is_volatile_test.test | 10 | 0.000802s | 0.000804s | 0.000788s | byte equality observed |
| make_signed_test.test | 10 | 0.000806s | 0.000786s | 0.000793s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000815s | 0.000788s | 0.000772s | byte equality observed |
| make_void_test.test | 10 | 0.000795s | 0.000780s | 0.000785s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000366s | 0.000371s | 0.000762s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000359s | 0.000367s | 0.000780s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000363s | 0.000368s | 0.000786s | byte equality observed |
| negation_test.test | 10 | 0.000787s | 0.000804s | 0.000758s | byte equality observed |
| promote_basic_test.test | 10 | 0.000364s | 0.000376s | 0.000772s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000365s | 0.000375s | 0.000791s | byte equality observed |
| promote_enum_test.test | 10 | 0.000361s | 0.000366s | 0.000813s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000369s | 0.000372s | 0.000800s | byte equality observed |
| rank_test.test | 10 | 0.000795s | 0.000778s | 0.000815s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000795s | 0.000824s | 0.000804s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000801s | 0.000792s | 0.000810s | byte equality observed |
| remove_const_test.test | 10 | 0.000788s | 0.000792s | 0.000762s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000789s | 0.000791s | 0.000803s | byte equality observed |
| remove_cv_test.test | 10 | 0.000804s | 0.000783s | 0.000786s | byte equality observed |
| remove_extent_test.test | 10 | 0.000808s | 0.000784s | 0.000791s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000778s | 0.000783s | 0.000791s | byte equality observed |
| remove_reference_test.test | 10 | 0.000808s | 0.000789s | 0.000786s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000812s | 0.000809s | 0.000766s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000805s | 0.000817s | 0.000774s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000798s | 0.000816s | 0.000792s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000806s | 0.000806s | 0.000769s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000809s | 0.000799s | 0.000787s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000811s | 0.000767s | 0.000789s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000764s | 0.000794s | 0.000761s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000779s | 0.000800s | 0.000793s | byte equality observed |
| type_identity_test.test | 10 | 0.000793s | 0.000802s | 0.000784s | byte equality observed |
| type_traits_test.test | 10 | 0.000372s | 0.000369s | 0.000769s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000845s | 0.000831s | 0.000815s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
